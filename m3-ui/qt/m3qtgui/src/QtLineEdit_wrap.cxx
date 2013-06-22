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


#include <QtGui/qlineedit.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT QLineEdit * New_QLineEdit0(QWidget * parent) {
  QWidget *arg1 = (QWidget *) 0 ;
  QLineEdit *result = 0 ;
  QLineEdit * cresult ;
  
  arg1 = *(QWidget **)&parent; 
  result = (QLineEdit *)new QLineEdit(arg1);
  *(QLineEdit **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QLineEdit * New_QLineEdit1() {
  QLineEdit *result = 0 ;
  QLineEdit * cresult ;
  
  result = (QLineEdit *)new QLineEdit();
  *(QLineEdit **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QLineEdit * New_QLineEdit2(QString * m3arg1, QWidget * parent) {
  QString *arg1 = 0 ;
  QWidget *arg2 = (QWidget *) 0 ;
  QLineEdit *result = 0 ;
  QLineEdit * cresult ;
  
  arg1 = *(QString **)&m3arg1;
  arg2 = *(QWidget **)&parent; 
  result = (QLineEdit *)new QLineEdit((QString const &)*arg1,arg2);
  *(QLineEdit **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QLineEdit * New_QLineEdit3(QString * m3arg1) {
  QString *arg1 = 0 ;
  QLineEdit *result = 0 ;
  QLineEdit * cresult ;
  
  arg1 = *(QString **)&m3arg1;
  result = (QLineEdit *)new QLineEdit((QString const &)*arg1);
  *(QLineEdit **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delete_QLineEdit(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  delete arg1;
}


SWIGEXPORT QString *  QLineEdit_text(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QLineEdit const *)arg1)->text());
  return cresult;
}


SWIGEXPORT QString *  QLineEdit_displayText(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QLineEdit const *)arg1)->displayText());
  return cresult;
}


SWIGEXPORT int QLineEdit_maxLength(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int result;
  int cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (int)((QLineEdit const *)arg1)->maxLength();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setMaxLength(QLineEdit * self, int m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (int)m3arg2; 
  (arg1)->setMaxLength(arg2);
}


SWIGEXPORT void QLineEdit_setFrame(QLineEdit * self, bool m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = m3arg2 ? true : false; 
  (arg1)->setFrame(arg2);
}


SWIGEXPORT bool QLineEdit_hasFrame(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->hasFrame();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QLineEdit::EchoMode QLineEdit_echoMode(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QLineEdit::EchoMode result;
  QLineEdit::EchoMode cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (QLineEdit::EchoMode)((QLineEdit const *)arg1)->echoMode();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setEchoMode(QLineEdit * self, QLineEdit::EchoMode m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QLineEdit::EchoMode arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (QLineEdit::EchoMode)m3arg2; 
  (arg1)->setEchoMode(arg2);
}


SWIGEXPORT bool QLineEdit_isReadOnly(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->isReadOnly();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setReadOnly(QLineEdit * self, bool m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = m3arg2 ? true : false; 
  (arg1)->setReadOnly(arg2);
}


SWIGEXPORT void QLineEdit_setValidator(QLineEdit * self, QValidator * m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QValidator *arg2 = (QValidator *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QValidator **)&m3arg2; 
  (arg1)->setValidator((QValidator const *)arg2);
}


SWIGEXPORT QValidator * QLineEdit_validator(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QValidator *result = 0 ;
  QValidator * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (QValidator *)((QLineEdit const *)arg1)->validator();
  *(QValidator **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setCompleter(QLineEdit * self, QCompleter * completer) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QCompleter *arg2 = (QCompleter *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QCompleter **)&completer; 
  (arg1)->setCompleter(arg2);
}


SWIGEXPORT QCompleter * QLineEdit_completer(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QCompleter *result = 0 ;
  QCompleter * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (QCompleter *)((QLineEdit const *)arg1)->completer();
  *(QCompleter **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QSize * QLineEdit_sizeHint(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QSize * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QSize **)&cresult = new QSize((const QSize &)((QLineEdit const *)arg1)->sizeHint());
  return cresult;
}


SWIGEXPORT QSize * QLineEdit_minimumSizeHint(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QSize * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QSize **)&cresult = new QSize((const QSize &)((QLineEdit const *)arg1)->minimumSizeHint());
  return cresult;
}


SWIGEXPORT int QLineEdit_cursorPosition(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int result;
  int cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (int)((QLineEdit const *)arg1)->cursorPosition();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setCursorPosition(QLineEdit * self, int m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (int)m3arg2; 
  (arg1)->setCursorPosition(arg2);
}


SWIGEXPORT int QLineEdit_cursorPositionAt(QLineEdit * self, QPoint * pos) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QPoint *arg2 = 0 ;
  int result;
  int cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QPoint **)&pos;
  result = (int)(arg1)->cursorPositionAt((QPoint const &)*arg2);
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setAlignment(QLineEdit * self, Qt::Alignment flag) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  Qt::Alignment arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (Qt::Alignment)flag; 
  (arg1)->setAlignment(arg2);
}


SWIGEXPORT Qt::Alignment QLineEdit_alignment(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  Qt::Alignment cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(Qt::Alignment **)&cresult = new Qt::Alignment((const Qt::Alignment &)((QLineEdit const *)arg1)->alignment());
  return cresult;
}


SWIGEXPORT void QLineEdit_cursorForward(QLineEdit * self, bool mark, int steps) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  int arg3 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  arg3 = (int)steps; 
  (arg1)->cursorForward(arg2,arg3);
}


SWIGEXPORT void QLineEdit_cursorForward1(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->cursorForward(arg2);
}


SWIGEXPORT void QLineEdit_cursorBackward(QLineEdit * self, bool mark, int steps) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  int arg3 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  arg3 = (int)steps; 
  (arg1)->cursorBackward(arg2,arg3);
}


SWIGEXPORT void QLineEdit_cursorBackward1(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->cursorBackward(arg2);
}


SWIGEXPORT void QLineEdit_cursorWordForward(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->cursorWordForward(arg2);
}


SWIGEXPORT void QLineEdit_cursorWordBackward(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->cursorWordBackward(arg2);
}


SWIGEXPORT void QLineEdit_backspace(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->backspace();
}


SWIGEXPORT void QLineEdit_del(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->del();
}


SWIGEXPORT void QLineEdit_home(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->home(arg2);
}


SWIGEXPORT void QLineEdit_end(QLineEdit * self, bool mark) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = mark ? true : false; 
  (arg1)->end(arg2);
}


SWIGEXPORT bool QLineEdit_isModified(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->isModified();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setModified(QLineEdit * self, bool m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = m3arg2 ? true : false; 
  (arg1)->setModified(arg2);
}


SWIGEXPORT void QLineEdit_setSelection(QLineEdit * self, int m3arg2, int m3arg3) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int arg2 ;
  int arg3 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (int)m3arg2; 
  arg3 = (int)m3arg3; 
  (arg1)->setSelection(arg2,arg3);
}


SWIGEXPORT bool QLineEdit_hasSelectedText(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->hasSelectedText();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QString *  QLineEdit_selectedText(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QLineEdit const *)arg1)->selectedText());
  return cresult;
}


SWIGEXPORT int QLineEdit_selectionStart(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int result;
  int cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (int)((QLineEdit const *)arg1)->selectionStart();
  cresult = result; 
  return cresult;
}


SWIGEXPORT bool QLineEdit_isUndoAvailable(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->isUndoAvailable();
  cresult = result; 
  return cresult;
}


SWIGEXPORT bool QLineEdit_isRedoAvailable(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->isRedoAvailable();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setDragEnabled(QLineEdit * self, bool b) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool arg2 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = b ? true : false; 
  (arg1)->setDragEnabled(arg2);
}


SWIGEXPORT bool QLineEdit_dragEnabled(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->dragEnabled();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QString *  QLineEdit_inputMask(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *  cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QString **)&cresult = new QString((const QString &)((QLineEdit const *)arg1)->inputMask());
  return cresult;
}


SWIGEXPORT void QLineEdit_setInputMask(QLineEdit * self, QString * inputMask) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QString **)&inputMask;
  (arg1)->setInputMask((QString const &)*arg2);
}


SWIGEXPORT bool QLineEdit_hasAcceptableInput(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (bool)((QLineEdit const *)arg1)->hasAcceptableInput();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QLineEdit_setTextMargins(QLineEdit * self, int left, int top, int right, int bottom) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = (int)left; 
  arg3 = (int)top; 
  arg4 = (int)right; 
  arg5 = (int)bottom; 
  (arg1)->setTextMargins(arg2,arg3,arg4,arg5);
}


SWIGEXPORT void QLineEdit_setTextMargins1(QLineEdit * self, QMargins * margins) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QMargins *arg2 = 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QMargins **)&margins;
  (arg1)->setTextMargins((QMargins const &)*arg2);
}


SWIGEXPORT void QLineEdit_getTextMargins(QLineEdit const * self, int * left, int * top, int * right, int * bottom) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  int *arg2 = (int *) 0 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  int *arg5 = (int *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(int **)&left; 
  arg3 = *(int **)&top; 
  arg4 = *(int **)&right; 
  arg5 = *(int **)&bottom; 
  ((QLineEdit const *)arg1)->getTextMargins(arg2,arg3,arg4,arg5);
}


SWIGEXPORT QMargins * QLineEdit_textMargins(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QMargins * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  *(QMargins **)&cresult = new QMargins((const QMargins &)((QLineEdit const *)arg1)->textMargins());
  return cresult;
}


SWIGEXPORT void QLineEdit_setText(QLineEdit * self, QString * m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QString **)&m3arg2;
  (arg1)->setText((QString const &)*arg2);
}


SWIGEXPORT void QLineEdit_clear(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->clear();
}


SWIGEXPORT void QLineEdit_selectAll(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->selectAll();
}


SWIGEXPORT void QLineEdit_undo(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->undo();
}


SWIGEXPORT void QLineEdit_redo(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->redo();
}


SWIGEXPORT void QLineEdit_cut(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->cut();
}


SWIGEXPORT void QLineEdit_copy(QLineEdit const * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  ((QLineEdit const *)arg1)->copy();
}


SWIGEXPORT void QLineEdit_paste(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->paste();
}


SWIGEXPORT void QLineEdit_deselect(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  (arg1)->deselect();
}


SWIGEXPORT void QLineEdit_insert(QLineEdit * self, QString * m3arg2) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = *(QLineEdit **)&self; 
  arg2 = *(QString **)&m3arg2;
  (arg1)->insert((QString const &)*arg2);
}


SWIGEXPORT QMenu * QLineEdit_createStandardContextMenu(QLineEdit * self) {
  QLineEdit *arg1 = (QLineEdit *) 0 ;
  QMenu *result = 0 ;
  QMenu * cresult ;
  
  arg1 = *(QLineEdit **)&self; 
  result = (QMenu *)(arg1)->createStandardContextMenu();
  *(QMenu **)&cresult = result; 
  return cresult;
}


SWIGEXPORT long Modula3_QLineEditToQWidget(long objectRef) {
    long baseptr = 0;
    *(QWidget **)&baseptr = *(QLineEdit **)&objectRef;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

