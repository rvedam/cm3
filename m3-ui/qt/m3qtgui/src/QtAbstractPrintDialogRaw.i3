(*******************************************************************************
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
*******************************************************************************)

INTERFACE QtAbstractPrintDialogRaw;


IMPORT Ctypes AS C;




<* EXTERNAL Delete_QAbstractPrintDialog *>
PROCEDURE Delete_QAbstractPrintDialog (self: QAbstractPrintDialog; );

<* EXTERNAL QAbstractPrintDialog_addEnabledOption *>
PROCEDURE QAbstractPrintDialog_addEnabledOption
  (self: QAbstractPrintDialog; option: C.int; );

<* EXTERNAL QAbstractPrintDialog_setEnabledOptions *>
PROCEDURE QAbstractPrintDialog_setEnabledOptions
  (self: QAbstractPrintDialog; options: C.int; );

<* EXTERNAL QAbstractPrintDialog_enabledOptions *>
PROCEDURE QAbstractPrintDialog_enabledOptions
  (self: QAbstractPrintDialog; ): C.int;

<* EXTERNAL QAbstractPrintDialog_isOptionEnabled *>
PROCEDURE QAbstractPrintDialog_isOptionEnabled
  (self: QAbstractPrintDialog; option: C.int; ): BOOLEAN;

<* EXTERNAL QAbstractPrintDialog_setPrintRange *>
PROCEDURE QAbstractPrintDialog_setPrintRange
  (self: QAbstractPrintDialog; range: C.int; );

<* EXTERNAL QAbstractPrintDialog_printRange *>
PROCEDURE QAbstractPrintDialog_printRange (self: QAbstractPrintDialog; ):
  C.int;

<* EXTERNAL QAbstractPrintDialog_setMinMax *>
PROCEDURE QAbstractPrintDialog_setMinMax
  (self: QAbstractPrintDialog; min, max: C.int; );

<* EXTERNAL QAbstractPrintDialog_minPage *>
PROCEDURE QAbstractPrintDialog_minPage (self: QAbstractPrintDialog; ):
  C.int;

<* EXTERNAL QAbstractPrintDialog_maxPage *>
PROCEDURE QAbstractPrintDialog_maxPage (self: QAbstractPrintDialog; ):
  C.int;

<* EXTERNAL QAbstractPrintDialog_setFromTo *>
PROCEDURE QAbstractPrintDialog_setFromTo
  (self: QAbstractPrintDialog; fromPage, toPage: C.int; );

<* EXTERNAL QAbstractPrintDialog_fromPage *>
PROCEDURE QAbstractPrintDialog_fromPage (self: QAbstractPrintDialog; ):
  C.int;

<* EXTERNAL QAbstractPrintDialog_toPage *>
PROCEDURE QAbstractPrintDialog_toPage (self: QAbstractPrintDialog; ):
  C.int;

<* EXTERNAL QAbstractPrintDialog_printer *>
PROCEDURE QAbstractPrintDialog_printer (self: QAbstractPrintDialog; ):
  ADDRESS;

TYPE QAbstractPrintDialog = ADDRESS;

END QtAbstractPrintDialogRaw.
