/* Copyright (C) 1992, Digital Equipment Corporation                         */
/* All rights reserved.                                                      */
/* See the file COPYRIGHT for a full description.                            */

/* Last modified on Fri Aug 13 09:02:20 PDT 1993 by kalsow                   */
/*      modified on Tue Feb 11 14:23:53 PST 1992 by muller                   */

#ifndef KR_headers
#define KR_headers
#endif

#ifndef IEEE_8087
#define IEEE_8087
#endif

#define Long int

#define MULTIPLE_THREADS
#define ACQUIRE_DTOA_LOCK(n) RTOS__LockHeap()
#define FREE_DTOA_LOCK(n) RTOS__UnlockHeap()

#include "dtoa.h"
