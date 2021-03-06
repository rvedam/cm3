(* Copyright (C) 1992, Digital Equipment Corporation           *)
(* All rights reserved.                                        *)
(* See the file COPYRIGHT for a full description.              *)

GENERIC MODULE Shift (Rep);

IMPORT CG, CallExpr, Expr, ExprRep, Procedure, Type, SubrangeType, Formal;
IMPORT Int, IntegerExpr, Value, ProcType, CheckExpr, Target, TInt, TWord;
FROM Rep IMPORT T;
FROM TargetMap IMPORT Word_types;

VAR Z, ZL, ZR: CallExpr.MethodList;
VAR formals, formalsL, formalsR: Value.T;
VAR rep: [FIRST (Word_types) .. LAST (Word_types)];
VAR max: Target.Int;

PROCEDURE Check (ce: CallExpr.T;  VAR cs: Expr.CheckState) =
  BEGIN
    EVAL Formal.CheckArgs (cs, ce.args, formals, ce.proc);
    ce.type := T;
  END Check;

PROCEDURE CheckL (ce: CallExpr.T;  VAR cs: Expr.CheckState) =
  BEGIN
    EVAL Formal.CheckArgs (cs, ce.args, formalsL, ce.proc);
    ce.type := T;
  END CheckL;

PROCEDURE CheckR (ce: CallExpr.T;  VAR cs: Expr.CheckState) =
  BEGIN
    EVAL Formal.CheckArgs (cs, ce.args, formalsR, ce.proc);
    ce.type := T;
  END CheckR;

PROCEDURE Compile (ce: CallExpr.T) =
  BEGIN
    Expr.Compile (ce.args[0]);
    Expr.Compile (ce.args[1]);
    CG.Shift (Word_types[rep].cg_type);
  END Compile;

PROCEDURE CompileL (ce: CallExpr.T) =
  BEGIN
    Expr.Compile (ce.args[0]);
    CheckExpr.EmitChecks (ce.args[1], TInt.Zero, max,
                          CG.RuntimeError.ValueOutOfRange);
    CG.Shift_left (Word_types[rep].cg_type);
  END CompileL;

PROCEDURE CompileR (ce: CallExpr.T) =
  BEGIN
    Expr.Compile (ce.args[0]);
    CheckExpr.EmitChecks (ce.args[1], TInt.Zero, max,
                          CG.RuntimeError.ValueOutOfRange);
    CG.Shift_right (Word_types[rep].cg_type);
  END CompileR;

PROCEDURE Fold (ce: CallExpr.T): Expr.T =
  VAR e0, e1: Expr.T;  w0, result: Target.Int;  i1: INTEGER;  t: Type.T;
  BEGIN
    e0 := Expr.ConstValue (ce.args[0]);
    e1 := Expr.ConstValue (ce.args[1]);
    IF (e0 # NIL) AND IntegerExpr.Split (e0, w0, t)
      AND (e1 # NIL) AND IntegerExpr.ToInt (e1, i1)
    THEN
      TWord.And (w0, Word_types[rep].max, w0);
      TWord.Shift (w0, i1, result);
      EVAL TInt.Extend (result, Word_types[rep].bytes, result);
      RETURN IntegerExpr.New (T, result);
    END;
    RETURN NIL;
  END Fold;

PROCEDURE FoldL (ce: CallExpr.T): Expr.T =
  VAR e0, e1: Expr.T;  w0, result: Target.Int;  i1: INTEGER;  t: Type.T;
  BEGIN
    e0 := Expr.ConstValue (ce.args[0]);
    e1 := Expr.ConstValue (ce.args[1]);
    IF (e0 # NIL) AND IntegerExpr.Split (e0, w0, t)
      AND (e1 # NIL) AND IntegerExpr.ToInt (e1, i1)
      AND 0 <= i1 AND i1 < Word_types[rep].size
    THEN
      TWord.And (w0, Word_types[rep].max, w0);
      TWord.Shift (w0, i1, result);
      EVAL TInt.Extend (result, Word_types[rep].bytes, result);
      RETURN IntegerExpr.New (T, result);
    END;
    RETURN NIL;
  END FoldL;

PROCEDURE FoldR (ce: CallExpr.T): Expr.T =
  VAR e0, e1: Expr.T;  w0, result: Target.Int;  i1: INTEGER;  t: Type.T;
  BEGIN
    e0 := Expr.ConstValue (ce.args[0]);
    e1 := Expr.ConstValue (ce.args[1]);
    IF (e0 # NIL) AND IntegerExpr.Split (e0, w0, t)
      AND (e1 # NIL) AND IntegerExpr.ToInt (e1, i1)
      AND 0 <= i1 AND i1 < Word_types[rep].size
    THEN
      TWord.And (w0, Word_types[rep].max, w0);
      TWord.Shift (w0, -i1, result);
      EVAL TInt.Extend (result, Word_types[rep].bytes, result);
      RETURN IntegerExpr.New (T, result);
    END;
    RETURN NIL;
  END FoldR;

PROCEDURE Initialize (r: INTEGER) =
  VAR
    b   := TInt.FromInt (Word_types[r].size-1, max);
    sub := SubrangeType.New (TInt.Zero, max, Int.T, FALSE);

    f0  := Formal.NewBuiltin ("x", 0, T);
    f1  := Formal.NewBuiltin ("n", 1, Int.T);
    t   := ProcType.New (T, f0, f1);

    Lf0 := Formal.NewBuiltin ("x", 0, T);
    Lf1 := Formal.NewBuiltin ("n", 1, sub);
    Lt  := ProcType.New (T, Lf0, Lf1);

    Rf0 := Formal.NewBuiltin ("x", 0, T);
    Rf1 := Formal.NewBuiltin ("n", 1, sub);
    Rt  := ProcType.New (T, Rf0, Rf1);
  BEGIN
    <*ASSERT b*>
    rep := r;
    Z := CallExpr.NewMethodList (2, 2, TRUE, TRUE, TRUE, T,
                                 NIL,
                                 CallExpr.NotAddressable,
                                 Check,
                                 CallExpr.PrepArgs,
                                 Compile,
                                 CallExpr.NoLValue,
                                 CallExpr.NoLValue,
                                 CallExpr.NotBoolean,
                                 CallExpr.NotBoolean,
                                 Fold,
                                 CallExpr.NoBounds,
                                 CallExpr.IsNever, (* writable *)
                                 CallExpr.IsNever, (* designator *)
                                 CallExpr.NotWritable (* noteWriter *));
    Procedure.Define ("Shift", Z, FALSE, t);
    formals := ProcType.Formals (t);


    ZL := CallExpr.NewMethodList (2, 2, TRUE, TRUE, TRUE, T,
                                 NIL,
                                 CallExpr.NotAddressable,
                                 CheckL,
                                 CallExpr.PrepArgs,
                                 CompileL,
                                 CallExpr.NoLValue,
                                 CallExpr.NoLValue,
                                 CallExpr.NotBoolean,
                                 CallExpr.NotBoolean,
                                 FoldL,
                                 CallExpr.NoBounds,
                                 CallExpr.IsNever, (* writable *)
                                 CallExpr.IsNever, (* designator *)
                                 CallExpr.NotWritable (* noteWriter *));
    Procedure.Define ("LeftShift", ZL, FALSE, Lt);
    formalsL := ProcType.Formals (Lt);


    ZR := CallExpr.NewMethodList (2, 2, TRUE, TRUE, TRUE, T,
                                 NIL,
                                 CallExpr.NotAddressable,
                                 CheckR,
                                 CallExpr.PrepArgs,
                                 CompileR,
                                 CallExpr.NoLValue,
                                 CallExpr.NoLValue,
                                 CallExpr.NotBoolean,
                                 CallExpr.NotBoolean,
                                 FoldR,
                                 CallExpr.NoBounds,
                                 CallExpr.IsNever, (* writable *)
                                 CallExpr.IsNever, (* designator *)
                                 CallExpr.NotWritable (* noteWriter *));
    Procedure.Define ("RightShift", ZR, FALSE, Rt);
    formalsR := ProcType.Formals (Rt);

  END Initialize;

BEGIN
END Shift.
