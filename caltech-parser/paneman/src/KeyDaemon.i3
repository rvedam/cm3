(* Copyright (c) 2000 California Institute of Technology *)
(* All rights reserved. See the file COPYRIGHT for a full description. *)
(* $Id: KeyDaemon.i3,v 1.1.1.1 2001-09-19 11:40:10 wagner Exp $ *)

INTERFACE KeyDaemon;
IMPORT VBT;
TYPE
  T <: Public;
  Public = OBJECT
  METHODS
    init(pm: VBT.T): T;
    key(key: VBT.KeyRec);
  END;
END KeyDaemon.
    
