/*
 * Copyright (C) 2017 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <tar.h>

#include "header_checks.h"

static void tar_h() {
  MACRO(TMAGIC);
  MACRO_VALUE(TMAGLEN, 6);
  MACRO(TVERSION);
  MACRO_VALUE(TVERSLEN, 2);

  MACRO_VALUE(REGTYPE, '0');
  MACRO_VALUE(AREGTYPE, '\0');
  MACRO_VALUE(LNKTYPE, '1');
  MACRO_VALUE(SYMTYPE, '2');
  MACRO_VALUE(CHRTYPE, '3');
  MACRO_VALUE(BLKTYPE, '4');
  MACRO_VALUE(DIRTYPE, '5');
  MACRO_VALUE(FIFOTYPE, '6');
  MACRO_VALUE(CONTTYPE, '7');

  MACRO_VALUE(TSUID, 04000);
  MACRO_VALUE(TSGID, 02000);
  MACRO_VALUE(TSVTX, 01000);
  MACRO_VALUE(TUREAD, 0400);
  MACRO_VALUE(TUWRITE, 0200);
  MACRO_VALUE(TUEXEC, 0100);
  MACRO_VALUE(TGREAD, 040);
  MACRO_VALUE(TGWRITE, 020);
  MACRO_VALUE(TGEXEC, 010);
  MACRO_VALUE(TOREAD, 04);
  MACRO_VALUE(TOWRITE, 02);
  MACRO_VALUE(TOEXEC, 01);
}