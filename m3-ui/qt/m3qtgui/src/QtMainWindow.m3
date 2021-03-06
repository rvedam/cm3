(*******************************************************************************
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
*******************************************************************************)

UNSAFE MODULE QtMainWindow;


FROM QtSize IMPORT QSize;
FROM QtByteArray IMPORT QByteArray;
IMPORT QtMainWindowRaw;
FROM QtWidget IMPORT QWidget;
FROM QtMenuBar IMPORT QMenuBar;
FROM QtStatusBar IMPORT QStatusBar;
FROM QtString IMPORT QString;
FROM QtMenu IMPORT QMenu;
FROM QtPoint IMPORT QPoint;
FROM QtDockWidget IMPORT QDockWidget;
FROM QtNamespace IMPORT WindowTypes, Corner, ToolBarArea, Orientation,
                        DockWidgetArea, ToolButtonStyle;
FROM QtToolBar IMPORT QToolBar;


IMPORT WeakRef;

PROCEDURE New_QMainWindow0
  (self: QMainWindow; parent: QWidget; flags: WindowTypes; ): QMainWindow =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(parent.cxxObj, ADDRESS);
  BEGIN
    result := QtMainWindowRaw.New_QMainWindow0(arg1tmp, ORD(flags));

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QMainWindow);

    RETURN self;
  END New_QMainWindow0;

PROCEDURE New_QMainWindow1 (self: QMainWindow; parent: QWidget; ):
  QMainWindow =
  VAR
    result : ADDRESS;
    arg1tmp          := LOOPHOLE(parent.cxxObj, ADDRESS);
  BEGIN
    result := QtMainWindowRaw.New_QMainWindow1(arg1tmp);

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QMainWindow);

    RETURN self;
  END New_QMainWindow1;

PROCEDURE New_QMainWindow2 (self: QMainWindow; ): QMainWindow =
  VAR result: ADDRESS;
  BEGIN
    result := QtMainWindowRaw.New_QMainWindow2();

    self.cxxObj := result;
    EVAL WeakRef.FromRef(self, Cleanup_QMainWindow);

    RETURN self;
  END New_QMainWindow2;

PROCEDURE Delete_QMainWindow (self: QMainWindow; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.Delete_QMainWindow(selfAdr);
  END Delete_QMainWindow;

PROCEDURE QMainWindow_iconSize (self: QMainWindow; ): QSize =
  VAR
    ret    : ADDRESS;
    result : QSize;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_iconSize(selfAdr);

    result := NEW(QSize);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_iconSize;

PROCEDURE QMainWindow_setIconSize (self: QMainWindow; iconSize: QSize; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(iconSize.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setIconSize(selfAdr, arg2tmp);
  END QMainWindow_setIconSize;

PROCEDURE QMainWindow_toolButtonStyle (self: QMainWindow; ):
  ToolButtonStyle =
  VAR
    ret    : INTEGER;
    result : ToolButtonStyle;
    selfAdr: ADDRESS         := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_toolButtonStyle(selfAdr);
    result := VAL(ret, ToolButtonStyle);
    RETURN result;
  END QMainWindow_toolButtonStyle;

PROCEDURE QMainWindow_setToolButtonStyle
  (self: QMainWindow; toolButtonStyle: ToolButtonStyle; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setToolButtonStyle(
      selfAdr, ORD(toolButtonStyle));
  END QMainWindow_setToolButtonStyle;

PROCEDURE QMainWindow_isAnimated (self: QMainWindow; ): BOOLEAN =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_isAnimated(selfAdr);
  END QMainWindow_isAnimated;

PROCEDURE QMainWindow_isDockNestingEnabled (self: QMainWindow; ): BOOLEAN =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_isDockNestingEnabled(selfAdr);
  END QMainWindow_isDockNestingEnabled;

PROCEDURE QMainWindow_documentMode (self: QMainWindow; ): BOOLEAN =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_documentMode(selfAdr);
  END QMainWindow_documentMode;

PROCEDURE QMainWindow_setDocumentMode
  (self: QMainWindow; enabled: BOOLEAN; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setDocumentMode(selfAdr, enabled);
  END QMainWindow_setDocumentMode;

PROCEDURE QMainWindow_setDockOptions
  (self: QMainWindow; options: DockOptions; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setDockOptions(selfAdr, ORD(options));
  END QMainWindow_setDockOptions;

PROCEDURE QMainWindow_dockOptions (self: QMainWindow; ): DockOptions =
  VAR
    ret    : INTEGER;
    result : DockOptions;
    selfAdr: ADDRESS     := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_dockOptions(selfAdr);
    result := VAL(ret, DockOptions);
    RETURN result;
  END QMainWindow_dockOptions;

PROCEDURE QMainWindow_isSeparator (self: QMainWindow; pos: QPoint; ):
  BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(pos.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_isSeparator(selfAdr, arg2tmp);
  END QMainWindow_isSeparator;

PROCEDURE QMainWindow_menuBar (self: QMainWindow; ): QMenuBar =
  VAR
    ret    : ADDRESS;
    result : QMenuBar;
    selfAdr: ADDRESS  := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_menuBar(selfAdr);

    result := NEW(QMenuBar);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_menuBar;

PROCEDURE QMainWindow_setMenuBar (self: QMainWindow; menubar: QMenuBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(menubar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setMenuBar(selfAdr, arg2tmp);
  END QMainWindow_setMenuBar;

PROCEDURE QMainWindow_menuWidget (self: QMainWindow; ): QWidget =
  VAR
    ret    : ADDRESS;
    result : QWidget;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_menuWidget(selfAdr);

    result := NEW(QWidget);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_menuWidget;

PROCEDURE QMainWindow_setMenuWidget
  (self: QMainWindow; menubar: QWidget; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(menubar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setMenuWidget(selfAdr, arg2tmp);
  END QMainWindow_setMenuWidget;

PROCEDURE QMainWindow_statusBar (self: QMainWindow; ): QStatusBar =
  VAR
    ret    : ADDRESS;
    result : QStatusBar;
    selfAdr: ADDRESS    := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_statusBar(selfAdr);

    result := NEW(QStatusBar);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_statusBar;

PROCEDURE QMainWindow_setStatusBar
  (self: QMainWindow; statusbar: QStatusBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(statusbar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setStatusBar(selfAdr, arg2tmp);
  END QMainWindow_setStatusBar;

PROCEDURE QMainWindow_centralWidget (self: QMainWindow; ): QWidget =
  VAR
    ret    : ADDRESS;
    result : QWidget;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_centralWidget(selfAdr);

    result := NEW(QWidget);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_centralWidget;

PROCEDURE QMainWindow_setCentralWidget
  (self: QMainWindow; widget: QWidget; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(widget.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setCentralWidget(selfAdr, arg2tmp);
  END QMainWindow_setCentralWidget;

PROCEDURE QMainWindow_setCorner
  (self: QMainWindow; corner: Corner; area: DockWidgetArea; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setCorner(selfAdr, ORD(corner), ORD(area));
  END QMainWindow_setCorner;

PROCEDURE QMainWindow_corner (self: QMainWindow; corner: Corner; ):
  DockWidgetArea =
  VAR
    ret    : INTEGER;
    result : DockWidgetArea;
    selfAdr: ADDRESS        := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_corner(selfAdr, ORD(corner));
    result := VAL(ret, DockWidgetArea);
    RETURN result;
  END QMainWindow_corner;

PROCEDURE QMainWindow_addToolBarBreak
  (self: QMainWindow; area: ToolBarArea; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addToolBarBreak(selfAdr, ORD(area));
  END QMainWindow_addToolBarBreak;

PROCEDURE QMainWindow_addToolBarBreak1 (self: QMainWindow; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addToolBarBreak1(selfAdr);
  END QMainWindow_addToolBarBreak1;

PROCEDURE QMainWindow_insertToolBarBreak
  (self: QMainWindow; before: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(before.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_insertToolBarBreak(selfAdr, arg2tmp);
  END QMainWindow_insertToolBarBreak;

PROCEDURE QMainWindow_addToolBar
  (self: QMainWindow; area: ToolBarArea; toolbar: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addToolBar(selfAdr, ORD(area), arg3tmp);
  END QMainWindow_addToolBar;

PROCEDURE QMainWindow_addToolBar1
  (self: QMainWindow; toolbar: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addToolBar1(selfAdr, arg2tmp);
  END QMainWindow_addToolBar1;

PROCEDURE QMainWindow_addToolBar2 (self: QMainWindow; title: TEXT; ):
  QToolBar =
  VAR
    ret       : ADDRESS;
    result    : QToolBar;
    selfAdr   : ADDRESS  := LOOPHOLE(self.cxxObj, ADDRESS);
    qstr_title           := NEW(QString).initQString(title);
    arg2tmp              := LOOPHOLE(qstr_title.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_addToolBar2(selfAdr, arg2tmp);

    result := NEW(QToolBar);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_addToolBar2;

PROCEDURE QMainWindow_insertToolBar
  (self: QMainWindow; before, toolbar: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(before.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_insertToolBar(selfAdr, arg2tmp, arg3tmp);
  END QMainWindow_insertToolBar;

PROCEDURE QMainWindow_removeToolBar
  (self: QMainWindow; toolbar: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_removeToolBar(selfAdr, arg2tmp);
  END QMainWindow_removeToolBar;

PROCEDURE QMainWindow_removeToolBarBreak
  (self: QMainWindow; before: QToolBar; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(before.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_removeToolBarBreak(selfAdr, arg2tmp);
  END QMainWindow_removeToolBarBreak;

PROCEDURE QMainWindow_setUnifiedTitleAndToolBarOnMac
  (self: QMainWindow; set: BOOLEAN; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setUnifiedTitleAndToolBarOnMac(
      selfAdr, set);
  END QMainWindow_setUnifiedTitleAndToolBarOnMac;

PROCEDURE QMainWindow_unifiedTitleAndToolBarOnMac (self: QMainWindow; ):
  BOOLEAN =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    RETURN
      QtMainWindowRaw.QMainWindow_unifiedTitleAndToolBarOnMac(selfAdr);
  END QMainWindow_unifiedTitleAndToolBarOnMac;

PROCEDURE QMainWindow_toolBarArea (self: QMainWindow; toolbar: QToolBar; ):
  ToolBarArea =
  VAR
    ret    : INTEGER;
    result : ToolBarArea;
    selfAdr: ADDRESS     := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp              := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_toolBarArea(selfAdr, arg2tmp);
    result := VAL(ret, ToolBarArea);
    RETURN result;
  END QMainWindow_toolBarArea;

PROCEDURE QMainWindow_toolBarBreak
  (self: QMainWindow; toolbar: QToolBar; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(toolbar.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_toolBarBreak(selfAdr, arg2tmp);
  END QMainWindow_toolBarBreak;

PROCEDURE QMainWindow_addDockWidget
  (self: QMainWindow; area: DockWidgetArea; dockwidget: QDockWidget; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addDockWidget(selfAdr, ORD(area), arg3tmp);
  END QMainWindow_addDockWidget;

PROCEDURE QMainWindow_addDockWidget1 (self       : QMainWindow;
                                      area       : DockWidgetArea;
                                      dockwidget : QDockWidget;
                                      orientation: Orientation;    ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_addDockWidget1(
      selfAdr, ORD(area), arg3tmp, ORD(orientation));
  END QMainWindow_addDockWidget1;

PROCEDURE QMainWindow_splitDockWidget (self             : QMainWindow;
                                       after, dockwidget: QDockWidget;
                                       orientation      : Orientation; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(after.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_splitDockWidget(
      selfAdr, arg2tmp, arg3tmp, ORD(orientation));
  END QMainWindow_splitDockWidget;

PROCEDURE QMainWindow_tabifyDockWidget
  (self: QMainWindow; first, second: QDockWidget; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(first.cxxObj, ADDRESS);
    arg3tmp          := LOOPHOLE(second.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_tabifyDockWidget(selfAdr, arg2tmp, arg3tmp);
  END QMainWindow_tabifyDockWidget;

PROCEDURE QMainWindow_removeDockWidget
  (self: QMainWindow; dockwidget: QDockWidget; ) =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_removeDockWidget(selfAdr, arg2tmp);
  END QMainWindow_removeDockWidget;

PROCEDURE QMainWindow_restoreDockWidget
  (self: QMainWindow; dockwidget: QDockWidget; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_restoreDockWidget(selfAdr, arg2tmp);
  END QMainWindow_restoreDockWidget;

PROCEDURE QMainWindow_dockWidgetArea
  (self: QMainWindow; dockwidget: QDockWidget; ): DockWidgetArea =
  VAR
    ret    : INTEGER;
    result : DockWidgetArea;
    selfAdr: ADDRESS        := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp                 := LOOPHOLE(dockwidget.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_dockWidgetArea(selfAdr, arg2tmp);
    result := VAL(ret, DockWidgetArea);
    RETURN result;
  END QMainWindow_dockWidgetArea;

PROCEDURE QMainWindow_saveState (self: QMainWindow; version: INTEGER; ):
  QByteArray =
  VAR
    ret    : ADDRESS;
    result : QByteArray;
    selfAdr: ADDRESS    := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_saveState(selfAdr, version);

    result := NEW(QByteArray);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_saveState;

PROCEDURE QMainWindow_saveState1 (self: QMainWindow; ): QByteArray =
  VAR
    ret    : ADDRESS;
    result : QByteArray;
    selfAdr: ADDRESS    := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_saveState1(selfAdr);

    result := NEW(QByteArray);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_saveState1;

PROCEDURE QMainWindow_restoreState
  (self: QMainWindow; state: QByteArray; version: INTEGER; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(state.cxxObj, ADDRESS);
  BEGIN
    RETURN
      QtMainWindowRaw.QMainWindow_restoreState(selfAdr, arg2tmp, version);
  END QMainWindow_restoreState;

PROCEDURE QMainWindow_restoreState1
  (self: QMainWindow; state: QByteArray; ): BOOLEAN =
  VAR
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
    arg2tmp          := LOOPHOLE(state.cxxObj, ADDRESS);
  BEGIN
    RETURN QtMainWindowRaw.QMainWindow_restoreState1(selfAdr, arg2tmp);
  END QMainWindow_restoreState1;

PROCEDURE QMainWindow_createPopupMenu (self: QMainWindow; ): QMenu =
  VAR
    ret    : ADDRESS;
    result : QMenu;
    selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    ret := QtMainWindowRaw.QMainWindow_createPopupMenu(selfAdr);

    result := NEW(QMenu);
    result.cxxObj := ret;
    result.destroyCxx();

    RETURN result;
  END QMainWindow_createPopupMenu;

PROCEDURE QMainWindow_setAnimated (self: QMainWindow; enabled: BOOLEAN; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setAnimated(selfAdr, enabled);
  END QMainWindow_setAnimated;

PROCEDURE QMainWindow_setDockNestingEnabled
  (self: QMainWindow; enabled: BOOLEAN; ) =
  VAR selfAdr: ADDRESS := LOOPHOLE(self.cxxObj, ADDRESS);
  BEGIN
    QtMainWindowRaw.QMainWindow_setDockNestingEnabled(selfAdr, enabled);
  END QMainWindow_setDockNestingEnabled;

PROCEDURE Cleanup_QMainWindow
  (<* UNUSED *> READONLY self: WeakRef.T; ref: REFANY) =
  VAR obj: QMainWindow := ref;
  BEGIN
    Delete_QMainWindow(obj);
  END Cleanup_QMainWindow;

PROCEDURE Destroy_QMainWindow (self: QMainWindow) =
  BEGIN
    EVAL WeakRef.FromRef(self, Cleanup_QMainWindow);
  END Destroy_QMainWindow;

REVEAL
  QMainWindow =
    QMainWindowPublic BRANDED OBJECT
    OVERRIDES
      init_0               := New_QMainWindow0;
      init_1               := New_QMainWindow1;
      init_2               := New_QMainWindow2;
      iconSize             := QMainWindow_iconSize;
      setIconSize          := QMainWindow_setIconSize;
      toolButtonStyle      := QMainWindow_toolButtonStyle;
      setToolButtonStyle   := QMainWindow_setToolButtonStyle;
      isAnimated           := QMainWindow_isAnimated;
      isDockNestingEnabled := QMainWindow_isDockNestingEnabled;
      documentMode         := QMainWindow_documentMode;
      setDocumentMode      := QMainWindow_setDocumentMode;
      setDockOptions       := QMainWindow_setDockOptions;
      dockOptions          := QMainWindow_dockOptions;
      isSeparator          := QMainWindow_isSeparator;
      menuBar              := QMainWindow_menuBar;
      setMenuBar           := QMainWindow_setMenuBar;
      menuWidget           := QMainWindow_menuWidget;
      setMenuWidget        := QMainWindow_setMenuWidget;
      statusBar            := QMainWindow_statusBar;
      setStatusBar         := QMainWindow_setStatusBar;
      centralWidget        := QMainWindow_centralWidget;
      setCentralWidget     := QMainWindow_setCentralWidget;
      setCorner            := QMainWindow_setCorner;
      corner               := QMainWindow_corner;
      addToolBarBreak      := QMainWindow_addToolBarBreak;
      addToolBarBreak1     := QMainWindow_addToolBarBreak1;
      insertToolBarBreak   := QMainWindow_insertToolBarBreak;
      addToolBar           := QMainWindow_addToolBar;
      addToolBar1          := QMainWindow_addToolBar1;
      addToolBar2          := QMainWindow_addToolBar2;
      insertToolBar        := QMainWindow_insertToolBar;
      removeToolBar        := QMainWindow_removeToolBar;
      removeToolBarBreak   := QMainWindow_removeToolBarBreak;
      setUnifiedTitleAndToolBarOnMac := QMainWindow_setUnifiedTitleAndToolBarOnMac;
      unifiedTitleAndToolBarOnMac := QMainWindow_unifiedTitleAndToolBarOnMac;
      toolBarArea           := QMainWindow_toolBarArea;
      toolBarBreak          := QMainWindow_toolBarBreak;
      addDockWidget         := QMainWindow_addDockWidget;
      addDockWidget1        := QMainWindow_addDockWidget1;
      splitDockWidget       := QMainWindow_splitDockWidget;
      tabifyDockWidget      := QMainWindow_tabifyDockWidget;
      removeDockWidget      := QMainWindow_removeDockWidget;
      restoreDockWidget     := QMainWindow_restoreDockWidget;
      dockWidgetArea        := QMainWindow_dockWidgetArea;
      saveState             := QMainWindow_saveState;
      saveState1            := QMainWindow_saveState1;
      restoreState          := QMainWindow_restoreState;
      restoreState1         := QMainWindow_restoreState1;
      createPopupMenu       := QMainWindow_createPopupMenu;
      setAnimated           := QMainWindow_setAnimated;
      setDockNestingEnabled := QMainWindow_setDockNestingEnabled;
      destroyCxx            := Destroy_QMainWindow;
    END;


BEGIN
END QtMainWindow.
