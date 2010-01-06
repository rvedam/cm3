(* Copyright (C) 1992, Digital Equipment Corporation           *)
(* All rights reserved.                                        *)
(* See the file COPYRIGHT for a full description.              *)

(* File: GenMinus.mg                                           *)
(* Last Modified On Mon Dec  5 15:30:48 PST 1994 By kalsow     *)
(*      Modified On Tue Apr 10 11:14:17 1990 By muller         *)

GENERIC MODULE GenMinus (Rep);

IMPORT CG, CallExpr, Expr, ExprRep, Procedure, Type, ProcType;
IMPORT IntegerExpr, Value, Formal, Target, TWord;
FROM Rep IMPORT T;

VAR Z: CallExpr.MethodList;
VAR formals: Value.T;

PROCEDURE Check (ce: CallExpr.T;  VAR cs: Expr.CheckState) =
  BEGIN
    EVAL Formal.CheckArgs (cs, ce.args, formals, ce.proc);
    ce.type := T;
  END Check;

PROCEDURE Compile (ce: CallExpr.T) =
  BEGIN
    Expr.Compile (ce.args[0]);
    Expr.Compile (ce.args[1]);
    CG.Subtract (Rep.unsigned);
  END Compile;

PROCEDURE Fold (ce: CallExpr.T): Expr.T =
  VAR w0, w1, result: Target.Int;
  BEGIN
    IF GetArgs (ce.args, w0, w1) THEN
      TWord.Subtract (w0, w1, result);
      RETURN IntegerExpr.New (T, result);
    END;
    RETURN NIL;
  END Fold;

PROCEDURE GetArgs (args: Expr.List;  VAR w0, w1: Target.Int): BOOLEAN =
  VAR e0, e1: Expr.T;  t: Type.T;
  BEGIN
    e0 := Expr.ConstValue (args[0]);
    e1 := Expr.ConstValue (args[1]);
    RETURN (e0 # NIL) AND IntegerExpr.Split (e0, w0, t) AND 
           (e1 # NIL) AND IntegerExpr.Split (e1, w1, t);
  END GetArgs;

PROCEDURE Initialize () =
  VAR
    x0 := Formal.NewBuiltin ("x", 0, T);
    y0 := Formal.NewBuiltin ("y", 1, T);
    t0 := ProcType.New (T, x0, y0);
  BEGIN
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
    Procedure.Define ("Minus", Z, FALSE, t0);
    formals := ProcType.Formals (t0);
  END Initialize;

BEGIN
END GenMinus.
