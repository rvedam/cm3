/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGMODULA3


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif




#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#include <QtGui/qapplication.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qpalette.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT QApplication * New_QApplication0(int * argc, char ** argv, int m3arg3) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  int arg3 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  arg3 = (int)m3arg3; 
  result = (QApplication *)new QApplication(*arg1,arg2,arg3);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QApplication * New_QApplication1(int * argc, char ** argv) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  result = (QApplication *)new QApplication(*arg1,arg2);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QApplication * New_QApplication2(int * argc, char ** argv, bool GUIenabled, int m3arg4) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  bool arg3 ;
  int arg4 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  arg3 = GUIenabled ? true : false; 
  arg4 = (int)m3arg4; 
  result = (QApplication *)new QApplication(*arg1,arg2,arg3,arg4);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QApplication * New_QApplication3(int * argc, char ** argv, bool GUIenabled) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  bool arg3 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  arg3 = GUIenabled ? true : false; 
  result = (QApplication *)new QApplication(*arg1,arg2,arg3);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QApplication * New_QApplication4(int * argc, char ** argv, QApplication::Type m3arg3, int m3arg4) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  QApplication::Type arg3 ;
  int arg4 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  arg3 = (QApplication::Type)m3arg3; 
  arg4 = (int)m3arg4; 
  result = (QApplication *)new QApplication(*arg1,arg2,arg3,arg4);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QApplication * New_QApplication5(int * argc, char ** argv, QApplication::Type m3arg3) {
  int *arg1 = 0 ;
  char **arg2 = (char **) 0 ;
  QApplication::Type arg3 ;
  QApplication *result = 0 ;
  QApplication * cresult ;
  
  arg1 = *(int **)&argc;
  /*
  if(!arg1) {
      //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
      //RETURN 0;
      return 0;
    }
  */
  
  arg2 = *(char ***)&argv; 
  arg3 = (QApplication::Type)m3arg3; 
  result = (QApplication *)new QApplication(*arg1,arg2,arg3);
  *(QApplication **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delete_QApplication(QApplication * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  
  arg1 = *(QApplication **)&self; 
  delete arg1;
}


SWIGEXPORT QApplication::Type AppType() {
  QApplication::Type result;
  QApplication::Type cresult ;
  
  result = (QApplication::Type)QApplication::type();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QStyle * Style() {
  QStyle *result = 0 ;
  QStyle * cresult ;
  
  result = (QStyle *)QApplication::style();
  *(QStyle **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void SetStyle(QStyle * m3arg1) {
  QStyle *arg1 = (QStyle *) 0 ;
  
  arg1 = *(QStyle **)&m3arg1; 
  QApplication::setStyle(arg1);
}


SWIGEXPORT QStyle * SetStyle1(QString * m3arg1) {
  QString *arg1 = 0 ;
  QStyle *result = 0 ;
  QStyle * cresult ;
  
  arg1 = *(QString **)&m3arg1;
  result = (QStyle *)QApplication::setStyle((QString const &)*arg1);
  *(QStyle **)&cresult = result; 
  return cresult;
}


SWIGEXPORT int GetColorSpec() {
  int result;
  int cresult ;
  
  result = (int)QApplication::colorSpec();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetColorSpec(int m3arg1) {
  int arg1 ;
  
  arg1 = (int)m3arg1; 
  QApplication::setColorSpec(arg1);
}


SWIGEXPORT void SetGraphicsSystem(QString * m3arg1) {
  QString *arg1 = 0 ;
  
  arg1 = *(QString **)&m3arg1;
  QApplication::setGraphicsSystem((QString const &)*arg1);
}


SWIGEXPORT QCursor * OverrideCursor() {
  QCursor *result = 0 ;
  QCursor * cresult ;
  
  result = (QCursor *)QApplication::overrideCursor();
  *(QCursor **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void SetOverrideCursor(QCursor * m3arg1) {
  QCursor *arg1 = 0 ;
  
  arg1 = *(QCursor **)&m3arg1;
  QApplication::setOverrideCursor((QCursor const &)*arg1);
}


SWIGEXPORT void ChangeOverrideCursor(QCursor * m3arg1) {
  QCursor *arg1 = 0 ;
  
  arg1 = *(QCursor **)&m3arg1;
  QApplication::changeOverrideCursor((QCursor const &)*arg1);
}


SWIGEXPORT void RestoreOverrideCursor() {
  QApplication::restoreOverrideCursor();
}


SWIGEXPORT QPalette * Palette() {
  QPalette * cresult ;
  
  *(QPalette **)&cresult = new QPalette((const QPalette &)QApplication::palette());
  return cresult;
}


SWIGEXPORT QPalette * Palette1(QWidget * m3arg1) {
  QWidget *arg1 = (QWidget *) 0 ;
  QPalette * cresult ;
  
  arg1 = *(QWidget **)&m3arg1; 
  *(QPalette **)&cresult = new QPalette((const QPalette &)QApplication::palette((QWidget const *)arg1));
  return cresult;
}


SWIGEXPORT QPalette * Palette2(char * className) {
  char *arg1 = (char *) 0 ;
  QPalette * cresult ;
  
  {
    arg1 = className;
  }
  *(QPalette **)&cresult = new QPalette((const QPalette &)QApplication::palette((char const *)arg1));
  return cresult;
}


SWIGEXPORT void SetPalette(QPalette * m3arg1, char * className) {
  QPalette *arg1 = 0 ;
  char *arg2 = (char *) 0 ;
  
  arg1 = *(QPalette **)&m3arg1;
  {
    arg2 = className;
  }
  QApplication::setPalette((QPalette const &)*arg1,(char const *)arg2);
}


SWIGEXPORT void SetPalette1(QPalette * m3arg1) {
  QPalette *arg1 = 0 ;
  
  arg1 = *(QPalette **)&m3arg1;
  QApplication::setPalette((QPalette const &)*arg1);
}


SWIGEXPORT QFont * Font() {
  QFont * cresult ;
  
  *(QFont **)&cresult = new QFont((const QFont &)QApplication::font());
  return cresult;
}


SWIGEXPORT QFont * Font1(QWidget * m3arg1) {
  QWidget *arg1 = (QWidget *) 0 ;
  QFont * cresult ;
  
  arg1 = *(QWidget **)&m3arg1; 
  *(QFont **)&cresult = new QFont((const QFont &)QApplication::font((QWidget const *)arg1));
  return cresult;
}


SWIGEXPORT QFont * Font2(char * className) {
  char *arg1 = (char *) 0 ;
  QFont * cresult ;
  
  {
    arg1 = className;
  }
  *(QFont **)&cresult = new QFont((const QFont &)QApplication::font((char const *)arg1));
  return cresult;
}


SWIGEXPORT void SetFont(QFont * m3arg1, char * className) {
  QFont *arg1 = 0 ;
  char *arg2 = (char *) 0 ;
  
  arg1 = *(QFont **)&m3arg1;
  {
    arg2 = className;
  }
  QApplication::setFont((QFont const &)*arg1,(char const *)arg2);
}


SWIGEXPORT void SetFont1(QFont * m3arg1) {
  QFont *arg1 = 0 ;
  
  arg1 = *(QFont **)&m3arg1;
  QApplication::setFont((QFont const &)*arg1);
}


SWIGEXPORT QFontMetrics * FontMetrics() {
  QFontMetrics * cresult ;
  
  *(QFontMetrics **)&cresult = new QFontMetrics((const QFontMetrics &)QApplication::fontMetrics());
  return cresult;
}


SWIGEXPORT void SetWindowIcon(QIcon * icon) {
  QIcon *arg1 = 0 ;
  
  arg1 = *(QIcon **)&icon;
  QApplication::setWindowIcon((QIcon const &)*arg1);
}


SWIGEXPORT QWidget * ActivePopupWidget() {
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  result = (QWidget *)QApplication::activePopupWidget();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * ActiveModalWidget() {
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  result = (QWidget *)QApplication::activeModalWidget();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * FocusWidget() {
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  result = (QWidget *)QApplication::focusWidget();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * ActiveWindow() {
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  result = (QWidget *)QApplication::activeWindow();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void SetActiveWindow(QWidget * act) {
  QWidget *arg1 = (QWidget *) 0 ;
  
  arg1 = *(QWidget **)&act; 
  QApplication::setActiveWindow(arg1);
}


SWIGEXPORT QWidget * WidgetAt(QPoint * p) {
  QPoint *arg1 = 0 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = *(QPoint **)&p;
  result = (QWidget *)QApplication::widgetAt((QPoint const &)*arg1);
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * WidgetAt1(int x, int y) {
  int arg1 ;
  int arg2 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = (int)x; 
  arg2 = (int)y; 
  result = (QWidget *)QApplication::widgetAt(arg1,arg2);
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * TopLevelAt(QPoint * p) {
  QPoint *arg1 = 0 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = *(QPoint **)&p;
  result = (QWidget *)QApplication::topLevelAt((QPoint const &)*arg1);
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QWidget * TopLevelAt1(int x, int y) {
  int arg1 ;
  int arg2 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = (int)x; 
  arg2 = (int)y; 
  result = (QWidget *)QApplication::topLevelAt(arg1,arg2);
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void SyncX() {
  QApplication::syncX();
}


SWIGEXPORT void Beep() {
  QApplication::beep();
}


SWIGEXPORT void Alert(QWidget * widget, int duration) {
  QWidget *arg1 = (QWidget *) 0 ;
  int arg2 ;
  
  arg1 = *(QWidget **)&widget; 
  arg2 = (int)duration; 
  QApplication::alert(arg1,arg2);
}


SWIGEXPORT void Alert1(QWidget * widget) {
  QWidget *arg1 = (QWidget *) 0 ;
  
  arg1 = *(QWidget **)&widget; 
  QApplication::alert(arg1);
}


SWIGEXPORT Qt::KeyboardModifiers KeyboardModifiers() {
  Qt::KeyboardModifiers cresult ;
  
  *(Qt::KeyboardModifiers **)&cresult = new Qt::KeyboardModifiers((const Qt::KeyboardModifiers &)QApplication::keyboardModifiers());
  return cresult;
}


SWIGEXPORT Qt::MouseButtons MouseButtons() {
  Qt::MouseButtons cresult ;
  
  *(Qt::MouseButtons **)&cresult = new Qt::MouseButtons((const Qt::MouseButtons &)QApplication::mouseButtons());
  return cresult;
}


SWIGEXPORT void SetDesktopSettingsAware(bool m3arg1) {
  bool arg1 ;
  
  arg1 = m3arg1 ? true : false; 
  QApplication::setDesktopSettingsAware(arg1);
}


SWIGEXPORT bool DesktopSettingsAware() {
  bool result;
  bool cresult ;
  
  result = (bool)QApplication::desktopSettingsAware();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetCursorFlashTime(int m3arg1) {
  int arg1 ;
  
  arg1 = (int)m3arg1; 
  QApplication::setCursorFlashTime(arg1);
}


SWIGEXPORT int CursorFlashTime() {
  int result;
  int cresult ;
  
  result = (int)QApplication::cursorFlashTime();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetDoubleClickInterval(int m3arg1) {
  int arg1 ;
  
  arg1 = (int)m3arg1; 
  QApplication::setDoubleClickInterval(arg1);
}


SWIGEXPORT int DoubleClickInterval() {
  int result;
  int cresult ;
  
  result = (int)QApplication::doubleClickInterval();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetKeyboardInputInterval(int m3arg1) {
  int arg1 ;
  
  arg1 = (int)m3arg1; 
  QApplication::setKeyboardInputInterval(arg1);
}


SWIGEXPORT int KeyboardInputInterval() {
  int result;
  int cresult ;
  
  result = (int)QApplication::keyboardInputInterval();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetWheelScrollLines(int m3arg1) {
  int arg1 ;
  
  arg1 = (int)m3arg1; 
  QApplication::setWheelScrollLines(arg1);
}


SWIGEXPORT int WheelScrollLines() {
  int result;
  int cresult ;
  
  result = (int)QApplication::wheelScrollLines();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetGlobalStrut(QSize * m3arg1) {
  QSize *arg1 = 0 ;
  
  arg1 = *(QSize **)&m3arg1;
  QApplication::setGlobalStrut((QSize const &)*arg1);
}


SWIGEXPORT QSize * GlobalStrut() {
  QSize * cresult ;
  
  *(QSize **)&cresult = new QSize((const QSize &)QApplication::globalStrut());
  return cresult;
}


SWIGEXPORT void SetStartDragTime(int ms) {
  int arg1 ;
  
  arg1 = (int)ms; 
  QApplication::setStartDragTime(arg1);
}


SWIGEXPORT int StartDragTime() {
  int result;
  int cresult ;
  
  result = (int)QApplication::startDragTime();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetStartDragDistance(int l) {
  int arg1 ;
  
  arg1 = (int)l; 
  QApplication::setStartDragDistance(arg1);
}


SWIGEXPORT int StartDragDistance() {
  int result;
  int cresult ;
  
  result = (int)QApplication::startDragDistance();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetLayoutDirection(Qt::LayoutDirection direction) {
  Qt::LayoutDirection arg1 ;
  
  arg1 = (Qt::LayoutDirection)direction; 
  QApplication::setLayoutDirection(arg1);
}


SWIGEXPORT Qt::LayoutDirection AppLayoutDirection() {
  Qt::LayoutDirection result;
  Qt::LayoutDirection cresult ;
  
  result = (Qt::LayoutDirection)QApplication::layoutDirection();
  cresult = result; 
  return cresult;
}


SWIGEXPORT bool IsRightToLeft() {
  bool result;
  bool cresult ;
  
  result = (bool)QApplication::isRightToLeft();
  cresult = result; 
  return cresult;
}


SWIGEXPORT bool IsLeftToRight() {
  bool result;
  bool cresult ;
  
  result = (bool)QApplication::isLeftToRight();
  cresult = result; 
  return cresult;
}


SWIGEXPORT bool IsEffectEnabled(Qt::UIEffect m3arg1) {
  Qt::UIEffect arg1 ;
  bool result;
  bool cresult ;
  
  arg1 = (Qt::UIEffect)m3arg1; 
  result = (bool)QApplication::isEffectEnabled(arg1);
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetEffectEnabled(Qt::UIEffect m3arg1, bool enable) {
  Qt::UIEffect arg1 ;
  bool arg2 ;
  
  arg1 = (Qt::UIEffect)m3arg1; 
  arg2 = enable ? true : false; 
  QApplication::setEffectEnabled(arg1,arg2);
}


SWIGEXPORT void SetEffectEnabled1(Qt::UIEffect m3arg1) {
  Qt::UIEffect arg1 ;
  
  arg1 = (Qt::UIEffect)m3arg1; 
  QApplication::setEffectEnabled(arg1);
}


SWIGEXPORT bool QApplication_isSessionRestored(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QApplication **)&self; 
  result = (bool)((QApplication const *)arg1)->isSessionRestored();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QString *  QApplication_sessionId(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QApplication **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QApplication const *)arg1)->sessionId());
  return cresult;
}


SWIGEXPORT QString *  QApplication_sessionKey(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QApplication **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QApplication const *)arg1)->sessionKey());
  return cresult;
}


SWIGEXPORT void QApplication_setInputContext(QApplication * self, QInputContext * m3arg2) {
  QApplication *arg1 = (QApplication *) 0 ;
  QInputContext *arg2 = (QInputContext *) 0 ;
  
  arg1 = *(QApplication **)&self; 
  arg2 = *(QInputContext **)&m3arg2; 
  (arg1)->setInputContext(arg2);
}


SWIGEXPORT QInputContext * QApplication_inputContext(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  QInputContext *result = 0 ;
  QInputContext * cresult ;
  
  arg1 = *(QApplication **)&self; 
  result = (QInputContext *)((QApplication const *)arg1)->inputContext();
  *(QInputContext **)&cresult = result; 
  return cresult;
}


SWIGEXPORT Qt::LayoutDirection KeyboardInputDirection() {
  Qt::LayoutDirection result;
  Qt::LayoutDirection cresult ;
  
  result = (Qt::LayoutDirection)QApplication::keyboardInputDirection();
  cresult = result; 
  return cresult;
}


SWIGEXPORT int Exec() {
  int result;
  int cresult ;
  
  result = (int)QApplication::exec();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void SetQuitOnLastWindowClosed(bool quit) {
  bool arg1 ;
  
  arg1 = quit ? true : false; 
  QApplication::setQuitOnLastWindowClosed(arg1);
}


SWIGEXPORT bool QuitOnLastWindowClosed() {
  bool result;
  bool cresult ;
  
  result = (bool)QApplication::quitOnLastWindowClosed();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QString *  QApplication_styleSheet(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QApplication **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QApplication const *)arg1)->styleSheet());
  return cresult;
}


SWIGEXPORT void QApplication_setStyleSheet(QApplication * self, QString * sheet) {
  QApplication *arg1 = (QApplication *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = *(QApplication **)&self; 
  arg2 = *(QString **)&sheet;
  (arg1)->setStyleSheet((QString const &)*arg2);
}


SWIGEXPORT void QApplication_setAutoSipEnabled(QApplication * self, bool enabled) {
  QApplication *arg1 = (QApplication *) 0 ;
  bool arg2 ;
  
  arg1 = *(QApplication **)&self; 
  arg2 = enabled ? true : false; 
  (arg1)->setAutoSipEnabled(arg2);
}


SWIGEXPORT bool QApplication_autoSipEnabled(QApplication const * self) {
  QApplication *arg1 = (QApplication *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QApplication **)&self; 
  result = (bool)((QApplication const *)arg1)->autoSipEnabled();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void CloseAllWindows() {
  QApplication::closeAllWindows();
}


SWIGEXPORT void AboutQt() {
  QApplication::aboutQt();
}


#ifdef __cplusplus
}
#endif

