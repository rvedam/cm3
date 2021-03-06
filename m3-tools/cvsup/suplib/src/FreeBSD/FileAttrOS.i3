(* Copyright 1997-2003 John D. Polstra.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgment:
 *      This product includes software developed by John D. Polstra.
 * 4. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *)

INTERFACE FileAttrOS;

FROM Ctypes IMPORT const_char_star, int, unsigned_long;

CONST
  (* Definitions of flags stored in file flags word. *)
  (* Super-user and owner changeable flags. *)
  UF_SETTABLE  = 16_0000ffff;      (* mask of owner changeable flags *)
  UF_NODUMP    = 16_00000001;      (* do not dump file *)
  UF_IMMUTABLE = 16_00000002;      (* file may not be changed *)
  UF_APPEND    = 16_00000004;      (* writes to file may only append *)
  UF_OPAQUE    = 16_00000008;      (* directory is opaque wrt. union *)

  (* Super-user changeable flags. *)
  SF_SETTABLE  = 16_ffff0000;      (* mask of superuser changeable flags *)
  SF_ARCHIVED  = 16_00010000;      (* file is archived *)
  SF_IMMUTABLE = 16_00020000;      (* file may not be changed *)
  SF_APPEND    = 16_00040000;      (* writes to file may only append *)

<*EXTERNAL*>
PROCEDURE chflags(path: const_char_star; flags: unsigned_long): int;

<*EXTERNAL*>
PROCEDURE fchflags(fd: int; flags: unsigned_long): int;

END FileAttrOS.
