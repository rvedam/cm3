GENERIC MODULE VectorBasic(R);
(*
Abstract:

6/6/87    hgeorge
          Initial version.

2/11/89   hgeorge
          To work with generic matrices.

11/20/94  Harry George
          Converted to Modula3 dynamic arrays.

12/18/95  Harry George
          ...and back to fully instantiated for REAL32.

1/27/96   Harry George
          Converted to OO format, and R.T          

2/17/96   Harry George   Converted from OO to ADT format
*)
FROM xUtils IMPORT Error,Err;

<*UNUSED*> CONST Module = "VectorBasic.";

(*-----------------*)
PROCEDURE New(  n:CARDINAL):T =
BEGIN
  RETURN NEW(T,n);
END New;
(*-----------------*)
PROCEDURE Copy(  v:T):T =
VAR
  n:=NUMBER(v^);
  tmp:=NEW(T,n);
BEGIN
  tmp^:=v^;
  RETURN tmp;
END Copy;

(*-----------------*)
(*
PROCEDURE Zero( 
                v:T)=
(*set all zeros*)
BEGIN
  FOR i:=FIRST(v^) TO LAST(v^) DO
    v[i]:=R.Zero;
  END;
END Zero;
*)


(*-----------------*)
PROCEDURE Add( 
                 v1,v2:T):T RAISES {Error}=
(*v1:=v1+v2*)
VAR
  tmp:T;
BEGIN
  IF NUMBER(v1^) # NUMBER(v2^) THEN
    RAISE Error(Err.bad_size);
  END;
  tmp:=NEW(T,NUMBER(v1^));
  FOR i:=FIRST(v1^) TO LAST(v1^) DO
    tmp[i]:=R.Add(v1[i],v2[i]);
  END;
  RETURN tmp;
END Add;

(*-----------------*)
PROCEDURE Sub( 
               v1,v2:T):T RAISES {Error}=
(*v1:=v1-v2*)
VAR
  tmp:T;
BEGIN
  IF NUMBER(v1^) # NUMBER(v2^) THEN
    RAISE Error(Err.bad_size);
  END;
  tmp:=NEW(T,NUMBER(v1^));
  FOR i:=FIRST(v1^) TO LAST(v1^) DO
    tmp[i]:=R.Sub(v1[i],v2[i]);
  END;
  RETURN tmp;
END Sub;


(*-----------------*)
PROCEDURE Scale( 
                 v:T; factor:R.T)=
(*Scale v by factor*)
BEGIN
  FOR i:=FIRST(v^) TO LAST(v^) DO
    v[i]:=R.Mul(v[i],factor);
  END;
END Scale;


(*-----------------*)
PROCEDURE Inner( 
                v1,v2:T):R.T RAISES {Error}=
(*return Dot product of v1 and v2*)
VAR
  sum:R.T;
BEGIN
  IF NUMBER(v1^) # NUMBER(v2^) THEN
    RAISE Error(Err.bad_size);
  END;

  sum:=R.Zero;
  FOR i:=FIRST(v1^) TO LAST(v1^) DO
    sum:=R.Add(sum,R.Mul(R.Conj(v1[i]),v2[i]));
  END;
  RETURN sum;
END Inner;

(*-----------------*)
(*
PROCEDURE Cross( 
                v1,v2:T):T RAISES {Error}=
(*return cross product of v1 and v2*)
BEGIN
  RAISE Error(Err.not_implemented);
END Cross;
*)

(*-----------------*)
BEGIN
END VectorBasic.
