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


#include <QtGui/qdockwidget.h>
#define  DockWidgetFeatures QDockWidget::DockWidgetFeatures


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT QDockWidget * New_QDockWidget0(QString * title, QWidget * parent, Qt::WindowFlags flags) {
  QString *arg1 = 0 ;
  QWidget *arg2 = (QWidget *) 0 ;
  Qt::WindowFlags arg3 ;
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  arg1 = *(QString **)&title;
  arg2 = *(QWidget **)&parent; 
  arg3 = (Qt::WindowFlags)flags; 
  result = (QDockWidget *)new QDockWidget((QString const &)*arg1,arg2,arg3);
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QDockWidget * New_QDockWidget1(QString * title, QWidget * parent) {
  QString *arg1 = 0 ;
  QWidget *arg2 = (QWidget *) 0 ;
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  arg1 = *(QString **)&title;
  arg2 = *(QWidget **)&parent; 
  result = (QDockWidget *)new QDockWidget((QString const &)*arg1,arg2);
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QDockWidget * New_QDockWidget2(QString * title) {
  QString *arg1 = 0 ;
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  arg1 = *(QString **)&title;
  result = (QDockWidget *)new QDockWidget((QString const &)*arg1);
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QDockWidget * New_QDockWidget3(QWidget * parent, Qt::WindowFlags flags) {
  QWidget *arg1 = (QWidget *) 0 ;
  Qt::WindowFlags arg2 ;
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  arg1 = *(QWidget **)&parent; 
  arg2 = (Qt::WindowFlags)flags; 
  result = (QDockWidget *)new QDockWidget(arg1,arg2);
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QDockWidget * New_QDockWidget4(QWidget * parent) {
  QWidget *arg1 = (QWidget *) 0 ;
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  arg1 = *(QWidget **)&parent; 
  result = (QDockWidget *)new QDockWidget(arg1);
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QDockWidget * New_QDockWidget5() {
  QDockWidget *result = 0 ;
  QDockWidget * cresult ;
  
  result = (QDockWidget *)new QDockWidget();
  *(QDockWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delete_QDockWidget(QDockWidget * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  
  arg1 = *(QDockWidget **)&self; 
  delete arg1;
}


SWIGEXPORT QWidget * QDockWidget_widget(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  result = (QWidget *)((QDockWidget const *)arg1)->widget();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void QDockWidget_setWidget(QDockWidget * self, QWidget * widget) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  QWidget *arg2 = (QWidget *) 0 ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = *(QWidget **)&widget; 
  (arg1)->setWidget(arg2);
}


SWIGEXPORT void QDockWidget_setFeatures(QDockWidget * self, DockWidgetFeatures features) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  DockWidgetFeatures arg2 ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = (DockWidgetFeatures)features; 
  (arg1)->setFeatures(arg2);
}


SWIGEXPORT DockWidgetFeatures QDockWidget_features(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  DockWidgetFeatures cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  *(DockWidgetFeatures **)&cresult = new DockWidgetFeatures((const DockWidgetFeatures &)((QDockWidget const *)arg1)->features());
  return cresult;
}


SWIGEXPORT void QDockWidget_setFloating(QDockWidget * self, bool floating) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  bool arg2 ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = floating ? true : false; 
  (arg1)->setFloating(arg2);
}


SWIGEXPORT bool QDockWidget_isFloating(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  result = (bool)((QDockWidget const *)arg1)->isFloating();
  cresult = result; 
  return cresult;
}


SWIGEXPORT void QDockWidget_setAllowedAreas(QDockWidget * self, Qt::DockWidgetAreas areas) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  Qt::DockWidgetAreas arg2 ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = (Qt::DockWidgetAreas)areas; 
  (arg1)->setAllowedAreas(arg2);
}


SWIGEXPORT Qt::DockWidgetAreas QDockWidget_allowedAreas(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  Qt::DockWidgetAreas cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  *(Qt::DockWidgetAreas **)&cresult = new Qt::DockWidgetAreas((const Qt::DockWidgetAreas &)((QDockWidget const *)arg1)->allowedAreas());
  return cresult;
}


SWIGEXPORT void QDockWidget_setTitleBarWidget(QDockWidget * self, QWidget * widget) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  QWidget *arg2 = (QWidget *) 0 ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = *(QWidget **)&widget; 
  (arg1)->setTitleBarWidget(arg2);
}


SWIGEXPORT QWidget * QDockWidget_titleBarWidget(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  QWidget *result = 0 ;
  QWidget * cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  result = (QWidget *)((QDockWidget const *)arg1)->titleBarWidget();
  *(QWidget **)&cresult = result; 
  return cresult;
}


SWIGEXPORT bool QDockWidget_isAreaAllowed(QDockWidget const * self, Qt::DockWidgetArea area) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  Qt::DockWidgetArea arg2 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  arg2 = (Qt::DockWidgetArea)area; 
  result = (bool)((QDockWidget const *)arg1)->isAreaAllowed(arg2);
  cresult = result; 
  return cresult;
}


SWIGEXPORT QAction * QDockWidget_toggleViewAction(QDockWidget const * self) {
  QDockWidget *arg1 = (QDockWidget *) 0 ;
  QAction *result = 0 ;
  QAction * cresult ;
  
  arg1 = *(QDockWidget **)&self; 
  result = (QAction *)((QDockWidget const *)arg1)->toggleViewAction();
  *(QAction **)&cresult = result; 
  return cresult;
}


SWIGEXPORT long Modula3_QDockWidgetToQWidget(long objectRef) {
    long baseptr = 0;
    *(QWidget **)&baseptr = *(QDockWidget **)&objectRef;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

