(* Copyright (c) 2000 California Institute of Technology *)
(* All rights reserved. See the file COPYRIGHT for a full description. *)
(* $Id: Line.i3,v 1.1.1.1 2001-09-19 11:40:10 wagner Exp $ *)

INTERFACE Line;
IMPORT Point;
IMPORT Rect;
IMPORT LineStyle;
CONST
  Brand = "Line";
TYPE
  T = RECORD
    a, b: Point.T;
    s := LineStyle.Default;
  END;
PROCEDURE GetBoundRect(l: T): Rect.T;
PROCEDURE Format(a: T): TEXT;
PROCEDURE Equal(a, b: T): BOOLEAN;
END Line.
