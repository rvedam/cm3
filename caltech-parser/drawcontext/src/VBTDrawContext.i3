(* Copyright (c) 2000 California Institute of Technology *)
(* All rights reserved. See the file COPYRIGHT for a full description. *)
(* $Id: VBTDrawContext.i3,v 1.1.1.1 2001-09-19 11:40:10 wagner Exp $ *)

INTERFACE VBTDrawContext;
IMPORT DrawContext;
IMPORT VBT, PaintOp;
TYPE
  T <: Public;
  Public = DrawContext.T OBJECT METHODS
    init(v: VBT.Leaf; bgColor := PaintOp.Bg): T;
    erase();   (* erase region that was set using setClip *)
  END;
END VBTDrawContext.
