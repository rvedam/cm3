(*******************************************************************************
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
*******************************************************************************)

UNSAFE MODULE QtRegion;


FROM QtPolygon IMPORT QPolygon;
IMPORT QtRegionRaw;
FROM QtPoint IMPORT QPoint;
FROM QtRect IMPORT QRect;
FROM QtNamespace IMPORT FillRule;


IMPORT WeakRef;

PROCEDURE New_QRegion0 (self: QRegion; ): QRegion =
  VAR result: ADDRESS;
  BEGIN
    result := QtRegionRaw.New_QRegion0();

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion0;

PROCEDURE New_QRegion1
  (self: QRegion; x, y, w, h: INTEGER; t: RegionType; ): QRegion =
  VAR result: ADDRESS;
  BEGIN
    result := QtRegionRaw.New_QRegion1(x, y, w, h, ORD(t));

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion1;

PROCEDURE New_QRegion2 (self: QRegion; x, y, w, h: INTEGER; ): QRegion =
  VAR result: ADDRESS;
  BEGIN
    result := QtRegionRaw.New_QRegion2(x, y, w, h);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion2;

PROCEDURE New_QRegion3 (self: QRegion; r: QRect; t: RegionType; ):
  QRegion =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    result := QtRegionRaw.New_QRegion3(arg1tmp, ORD(t));

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion3;

PROCEDURE New_QRegion4 (self: QRegion; r: QRect; ): QRegion =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    result := QtRegionRaw.New_QRegion4(arg1tmp);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion4;

PROCEDURE New_QRegion5 (self: QRegion; pa: QPolygon; fillRule: FillRule; ):
  QRegion =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(pa.cxxObj, ADDRESS);
  BEGIN
    result := QtRegionRaw.New_QRegion5(arg1tmp, ORD(fillRule));

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion5;

PROCEDURE New_QRegion6 (self: QRegion; pa: QPolygon; ): QRegion =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(pa.cxxObj, ADDRESS);
  BEGIN
    result := QtRegionRaw.New_QRegion6(arg1tmp);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion6;

PROCEDURE New_QRegion7 (self: QRegion; region: QRegion; ): QRegion =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(region.cxxObj, ADDRESS);
  BEGIN
    result := QtRegionRaw.New_QRegion7(arg1tmp);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion7;

PROCEDURE New_QRegion8 (self: QRegion; bitmap: REFANY; ): QRegion =
  VAR result: ADDRESS;
  BEGIN
    result := QtRegionRaw.New_QRegion8(bitmap);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);

    RETURN self;
  END New_QRegion8;

PROCEDURE Delete_QRegion (self: QRegion; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtRegionRaw.Delete_QRegion(selfAdr);
  END Delete_QRegion;

PROCEDURE QRegion_swap (self, other: QRegion; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(other.cxxObj, ADDRESS);
  BEGIN
    QtRegionRaw.QRegion_swap(selfAdr, arg2tmp);
  END QRegion_swap;

PROCEDURE QRegion_isEmpty (self: QRegion; ): BOOLEAN =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_isEmpty(selfAdr);
  END QRegion_isEmpty;

PROCEDURE QRegion_contains (self: QRegion; p: QPoint; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(p.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_contains(selfAdr, arg2tmp);
  END QRegion_contains;

PROCEDURE QRegion_contains1 (self: QRegion; r: QRect; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_contains1(selfAdr, arg2tmp);
  END QRegion_contains1;

PROCEDURE QRegion_translate (self: QRegion; dx, dy: INTEGER; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtRegionRaw.QRegion_translate(selfAdr, dx, dy);
  END QRegion_translate;

PROCEDURE QRegion_translate1 (self: QRegion; p: QPoint; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(p.cxxObj, ADDRESS);
  BEGIN
    QtRegionRaw.QRegion_translate1(selfAdr, arg2tmp);
  END QRegion_translate1;

PROCEDURE QRegion_translated (self: QRegion; dx, dy: INTEGER; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_translated(selfAdr, dx, dy);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_translated;

PROCEDURE QRegion_translated1 (self: QRegion; p: QPoint; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(p.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_translated1(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_translated1;

PROCEDURE QRegion_unite (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_unite(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_unite;

PROCEDURE QRegion_unite1 (self: QRegion; r: QRect; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_unite1(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_unite1;

PROCEDURE QRegion_intersect (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_intersect(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_intersect;

PROCEDURE QRegion_intersect1 (self: QRegion; r: QRect; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_intersect1(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_intersect1;

PROCEDURE QRegion_subtract (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_subtract(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_subtract;

PROCEDURE QRegion_eor (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_eor(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_eor;

PROCEDURE QRegion_united (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_united(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_united;

PROCEDURE QRegion_united1 (self: QRegion; r: QRect; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_united1(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_united1;

PROCEDURE QRegion_intersected (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_intersected(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_intersected;

PROCEDURE QRegion_intersected1 (self: QRegion; r: QRect; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_intersected1(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_intersected1;

PROCEDURE QRegion_subtracted (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_subtracted(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_subtracted;

PROCEDURE QRegion_xored (self, r: QRegion; ): QRegion =
  VAR
    ret    : ADDRESS;
    result : QRegion;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_xored(selfAdr, arg2tmp);

    IF ISTYPE(result, QRegion) AND ret = selfAdr THEN
      result := LOOPHOLE(self, QRegion);
    ELSE
      result := NEW(QRegion);
      result.cxxObj := ret;
      result.destroyCxx();
    END;

    RETURN result;
  END QRegion_xored;

PROCEDURE QRegion_intersects (self, r: QRegion; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_intersects(selfAdr, arg2tmp);
  END QRegion_intersects;

PROCEDURE QRegion_intersects1 (self: QRegion; r: QRect; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(r.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_intersects1(selfAdr, arg2tmp);
  END QRegion_intersects1;

PROCEDURE QRegion_boundingRect (self: QRegion; ): QRect =
  VAR
    ret    : ADDRESS;
    result : QRect;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtRegionRaw.QRegion_boundingRect(selfAdr);

    result := NEW(QRect);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QRegion_boundingRect;

PROCEDURE QRegion_setRects (self: QRegion; rect: QRect; num: INTEGER; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(rect.cxxObj, ADDRESS);
  BEGIN
    QtRegionRaw.QRegion_setRects(selfAdr, arg2tmp, num);
  END QRegion_setRects;

PROCEDURE QRegion_rectCount (self: QRegion; ): INTEGER =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN QtRegionRaw.QRegion_rectCount(selfAdr);
  END QRegion_rectCount;

PROCEDURE Cleanup_QRegion
  (<* UNUSED *> READONLY self: WeakRef.T; ref: REFANY) =
  VAR obj: QRegion := ref;
  BEGIN
    Delete_QRegion(obj);
  END Cleanup_QRegion;

PROCEDURE Destroy_QRegion (self: QRegion) =
  BEGIN
    EVAL WeakRef.FromRef(self, Cleanup_QRegion);
  END Destroy_QRegion;

REVEAL
  QRegion = QRegionPublic BRANDED OBJECT
            OVERRIDES
              init_0       := New_QRegion0;
              init_1       := New_QRegion1;
              init_2       := New_QRegion2;
              init_3       := New_QRegion3;
              init_4       := New_QRegion4;
              init_5       := New_QRegion5;
              init_6       := New_QRegion6;
              init_7       := New_QRegion7;
              init_8       := New_QRegion8;
              swap         := QRegion_swap;
              isEmpty      := QRegion_isEmpty;
              contains     := QRegion_contains;
              contains1    := QRegion_contains1;
              translate    := QRegion_translate;
              translate1   := QRegion_translate1;
              translated   := QRegion_translated;
              translated1  := QRegion_translated1;
              unite        := QRegion_unite;
              unite1       := QRegion_unite1;
              intersect    := QRegion_intersect;
              intersect1   := QRegion_intersect1;
              subtract     := QRegion_subtract;
              eor          := QRegion_eor;
              united       := QRegion_united;
              united1      := QRegion_united1;
              intersected  := QRegion_intersected;
              intersected1 := QRegion_intersected1;
              subtracted   := QRegion_subtracted;
              xored        := QRegion_xored;
              intersects   := QRegion_intersects;
              intersects1  := QRegion_intersects1;
              boundingRect := QRegion_boundingRect;
              setRects     := QRegion_setRects;
              rectCount    := QRegion_rectCount;
              destroyCxx   := Destroy_QRegion;
            END;


BEGIN
END QtRegion.
