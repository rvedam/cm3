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


#include <QtGui/qpolygon.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT QPolygon * New_QPolygon0() {
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  result = (QPolygon *)new QPolygon();
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delete_QPolygon(QPolygon * self) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  
  arg1 = *(QPolygon **)&self; 
  delete arg1;
}


SWIGEXPORT QPolygon * New_QPolygon1(int size) {
  int arg1 ;
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  arg1 = (int)size; 
  result = (QPolygon *)new QPolygon(arg1);
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygon * New_QPolygon2(QPolygon const & a) {
  QPolygon *arg1 = 0 ;
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&a;
  result = (QPolygon *)new QPolygon((QPolygon const &)*arg1);
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygon * New_QPolygon3(QRect * r, bool closed) {
  QRect *arg1 = 0 ;
  bool arg2 ;
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QRect **)&r;
  arg2 = closed ? true : false; 
  result = (QPolygon *)new QPolygon((QRect const &)*arg1,arg2);
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygon * New_QPolygon4(QRect * r) {
  QRect *arg1 = 0 ;
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QRect **)&r;
  result = (QPolygon *)new QPolygon((QRect const &)*arg1);
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygon * New_QPolygon5(int nPoints, int * points) {
  int arg1 ;
  int *arg2 = (int *) 0 ;
  QPolygon *result = 0 ;
  QPolygon * cresult ;
  
  arg1 = (int)nPoints; 
  arg2 = *(int **)&points; 
  result = (QPolygon *)new QPolygon(arg1,(int const *)arg2);
  *(QPolygon **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void QPolygon_translate(QPolygon * self, int dx, int dy) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  int arg3 ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)dx; 
  arg3 = (int)dy; 
  (arg1)->translate(arg2,arg3);
}


SWIGEXPORT void QPolygon_translate1(QPolygon * self, QPoint * offset) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPoint *arg2 = 0 ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPoint **)&offset;
  (arg1)->translate((QPoint const &)*arg2);
}


SWIGEXPORT QPolygon * QPolygon_translated(QPolygon const * self, int dx, int dy) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  int arg3 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)dx; 
  arg3 = (int)dy; 
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygon const *)arg1)->translated(arg2,arg3));
  return cresult;
}


SWIGEXPORT QPolygon * QPolygon_translated1(QPolygon const * self, QPoint * offset) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPoint *arg2 = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPoint **)&offset;
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygon const *)arg1)->translated((QPoint const &)*arg2));
  return cresult;
}


SWIGEXPORT QRect * QPolygon_boundingRect(QPolygon const * self) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QRect * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  *(QRect **)&cresult = new QRect((const QRect &)((QPolygon const *)arg1)->boundingRect());
  return cresult;
}


SWIGEXPORT void QPolygon_point(QPolygon const * self, int i, int * x, int * y) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)i; 
  arg3 = *(int **)&x; 
  arg4 = *(int **)&y; 
  ((QPolygon const *)arg1)->point(arg2,arg3,arg4);
}


SWIGEXPORT QPoint * QPolygon_point1(QPolygon const * self, int i) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  QPoint * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)i; 
  *(QPoint **)&cresult = new QPoint((const QPoint &)((QPolygon const *)arg1)->point(arg2));
  return cresult;
}


SWIGEXPORT void QPolygon_setPoint(QPolygon * self, int index, int x, int y) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)index; 
  arg3 = (int)x; 
  arg4 = (int)y; 
  (arg1)->setPoint(arg2,arg3,arg4);
}


SWIGEXPORT void QPolygon_setPoint1(QPolygon * self, int index, QPoint * p) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  int arg2 ;
  QPoint *arg3 = 0 ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = (int)index; 
  arg3 = *(QPoint **)&p;
  (arg1)->setPoint(arg2,(QPoint const &)*arg3);
}


SWIGEXPORT bool QPolygon_containsPoint(QPolygon const * self, QPoint * pt, Qt::FillRule fillRule) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPoint *arg2 = 0 ;
  Qt::FillRule arg3 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPoint **)&pt;
  arg3 = (Qt::FillRule)fillRule; 
  result = (bool)((QPolygon const *)arg1)->containsPoint((QPoint const &)*arg2,arg3);
  cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygon * QPolygon_united(QPolygon const * self, QPolygon const & r) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPolygon *arg2 = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPolygon **)&r;
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygon const *)arg1)->united((QPolygon const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygon * QPolygon_intersected(QPolygon const * self, QPolygon const & r) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPolygon *arg2 = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPolygon **)&r;
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygon const *)arg1)->intersected((QPolygon const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygon * QPolygon_subtracted(QPolygon const * self, QPolygon const & r) {
  QPolygon *arg1 = (QPolygon *) 0 ;
  QPolygon *arg2 = 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygon **)&self; 
  arg2 = *(QPolygon **)&r;
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygon const *)arg1)->subtracted((QPolygon const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygonF * New_QPolygonF0() {
  QPolygonF *result = 0 ;
  QPolygonF * cresult ;
  
  result = (QPolygonF *)new QPolygonF();
  *(QPolygonF **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delete_QPolygonF(QPolygonF * self) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  
  arg1 = *(QPolygonF **)&self; 
  delete arg1;
}


SWIGEXPORT QPolygonF * New_QPolygonF1(int size) {
  int arg1 ;
  QPolygonF *result = 0 ;
  QPolygonF * cresult ;
  
  arg1 = (int)size; 
  result = (QPolygonF *)new QPolygonF(arg1);
  *(QPolygonF **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygonF * New_QPolygonF2(QPolygonF const & a) {
  QPolygonF *arg1 = 0 ;
  QPolygonF *result = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&a;
  result = (QPolygonF *)new QPolygonF((QPolygonF const &)*arg1);
  *(QPolygonF **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygonF * New_QPolygonF3(QRectF * r) {
  QRectF *arg1 = 0 ;
  QPolygonF *result = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QRectF **)&r;
  result = (QPolygonF *)new QPolygonF((QRectF const &)*arg1);
  *(QPolygonF **)&cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygonF * New_QPolygonF4(QPolygon const & a) {
  QPolygon *arg1 = 0 ;
  QPolygonF *result = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygon **)&a;
  result = (QPolygonF *)new QPolygonF((QPolygon const &)*arg1);
  *(QPolygonF **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void QPolygonF_translate(QPolygonF * self, double dx, double dy) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  double arg2 ;
  double arg3 ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = (double)dx; 
  arg3 = (double)dy; 
  (arg1)->translate(arg2,arg3);
}


SWIGEXPORT void QPolygonF_translate1(QPolygonF * self, QPointF * offset) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPointF *arg2 = 0 ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPointF **)&offset;
  (arg1)->translate((QPointF const &)*arg2);
}


SWIGEXPORT QPolygonF * QPolygonF_translated(QPolygonF const * self, double dx, double dy) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  double arg2 ;
  double arg3 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = (double)dx; 
  arg3 = (double)dy; 
  *(QPolygonF **)&cresult = new QPolygonF((const QPolygonF &)((QPolygonF const *)arg1)->translated(arg2,arg3));
  return cresult;
}


SWIGEXPORT QPolygonF * QPolygonF_translated1(QPolygonF const * self, QPointF * offset) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPointF *arg2 = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPointF **)&offset;
  *(QPolygonF **)&cresult = new QPolygonF((const QPolygonF &)((QPolygonF const *)arg1)->translated((QPointF const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygon * QPolygonF_toPolygon(QPolygonF const * self) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPolygon * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  *(QPolygon **)&cresult = new QPolygon((const QPolygon &)((QPolygonF const *)arg1)->toPolygon());
  return cresult;
}


SWIGEXPORT bool QPolygonF_isClosed(QPolygonF const * self) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  result = (bool)((QPolygonF const *)arg1)->isClosed();
  cresult = result; 
  return cresult;
}


SWIGEXPORT QRectF * QPolygonF_boundingRect(QPolygonF const * self) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QRectF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  *(QRectF **)&cresult = new QRectF((const QRectF &)((QPolygonF const *)arg1)->boundingRect());
  return cresult;
}


SWIGEXPORT bool QPolygonF_containsPoint(QPolygonF const * self, QPointF * pt, Qt::FillRule fillRule) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPointF *arg2 = 0 ;
  Qt::FillRule arg3 ;
  bool result;
  bool cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPointF **)&pt;
  arg3 = (Qt::FillRule)fillRule; 
  result = (bool)((QPolygonF const *)arg1)->containsPoint((QPointF const &)*arg2,arg3);
  cresult = result; 
  return cresult;
}


SWIGEXPORT QPolygonF * QPolygonF_united(QPolygonF const * self, QPolygonF const & r) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPolygonF *arg2 = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPolygonF **)&r;
  *(QPolygonF **)&cresult = new QPolygonF((const QPolygonF &)((QPolygonF const *)arg1)->united((QPolygonF const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygonF * QPolygonF_intersected(QPolygonF const * self, QPolygonF const & r) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPolygonF *arg2 = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPolygonF **)&r;
  *(QPolygonF **)&cresult = new QPolygonF((const QPolygonF &)((QPolygonF const *)arg1)->intersected((QPolygonF const &)*arg2));
  return cresult;
}


SWIGEXPORT QPolygonF * QPolygonF_subtracted(QPolygonF const * self, QPolygonF const & r) {
  QPolygonF *arg1 = (QPolygonF *) 0 ;
  QPolygonF *arg2 = 0 ;
  QPolygonF * cresult ;
  
  arg1 = *(QPolygonF **)&self; 
  arg2 = *(QPolygonF **)&r;
  *(QPolygonF **)&cresult = new QPolygonF((const QPolygonF &)((QPolygonF const *)arg1)->subtracted((QPolygonF const &)*arg2));
  return cresult;
}


#ifdef __cplusplus
}
#endif

