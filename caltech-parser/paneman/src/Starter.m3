(* Copyright (c) 2000 California Institute of Technology *)
(* All rights reserved. See the file COPYRIGHT for a full description. *)
(* $Id: Starter.m3,v 1.2 2001-09-19 14:22:13 wagner Exp $ *)

MODULE Starter;
REVEAL
  T = Public BRANDED OBJECT
  OVERRIDES
    init := Init;
  END;

PROCEDURE Init(self: T; name, ext: TEXT; key: CHAR): T =
  BEGIN
    self.name := name;
    self.ext := ext;
    self.key := key;
    RETURN self;
  END Init;

PROCEDURE Equal(a,b:T):BOOLEAN=BEGIN RETURN a=b;END Equal;
BEGIN
END Starter.
