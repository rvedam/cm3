(* Copyright (c) 2000 California Institute of Technology *)
(* All rights reserved. See the file COPYRIGHT for a full description. *)
(* $Id: PSTextBounder.i3,v 1.1.1.1 2001-09-19 11:40:10 wagner Exp $ *)

INTERFACE PSTextBounder;
IMPORT TextBounder;
TYPE
  T <: Public;
  Public = TextBounder.T OBJECT METHODS
    init(): T;
  END;
END PSTextBounder.
