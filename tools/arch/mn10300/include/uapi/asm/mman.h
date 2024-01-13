/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef TOOLS_ARCH_MN10300_UAPI_ASM_MMAN_FIX_H
#define TOOLS_ARCH_MN10300_UAPI_ASM_MMAN_FIX_H
#include <uapi/asm-generic/mman.h>
/* MAP_32BIT is undefined on mn10300, fix it for perf */
#define MAP_32BIT	0
#endif