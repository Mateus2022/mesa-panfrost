/*
 * © Copyright 2017-2098 The Panfrost Communiy
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "pan_pretty_print.h"

#include <stdio.h>

#define DEFINE_CASE(name) case MALI_## name: return "MALI_" #name
char *panwrap_format_name(enum mali_format format)
{
	static char unk_format_str[5];

	switch (format) {
	DEFINE_CASE(RGB10_A2_UNORM);
	DEFINE_CASE(RGB10_A2_SNORM);
	DEFINE_CASE(RGB10_A2UI);
	DEFINE_CASE(RGB10_A2I);
	DEFINE_CASE(NV12);
	DEFINE_CASE(Z32_UNORM);
	DEFINE_CASE(R32_FIXED);
	DEFINE_CASE(RG32_FIXED);
	DEFINE_CASE(RGB32_FIXED);
	DEFINE_CASE(RGBA32_FIXED);
	DEFINE_CASE(R11F_G11F_B10F);
	DEFINE_CASE(VARYING_POS);
	DEFINE_CASE(VARYING_DISCARD);

	DEFINE_CASE(R8_SNORM);
	DEFINE_CASE(R16_SNORM);
	DEFINE_CASE(R32_SNORM);
	DEFINE_CASE(RG8_SNORM);
	DEFINE_CASE(RG16_SNORM);
	DEFINE_CASE(RG32_SNORM);
	DEFINE_CASE(RGB8_SNORM);
	DEFINE_CASE(RGB16_SNORM);
	DEFINE_CASE(RGB32_SNORM);
	DEFINE_CASE(RGBA8_SNORM);
	DEFINE_CASE(RGBA16_SNORM);
	DEFINE_CASE(RGBA32_SNORM);

	DEFINE_CASE(R8UI);
	DEFINE_CASE(R16UI);
	DEFINE_CASE(R32UI);
	DEFINE_CASE(RG8UI);
	DEFINE_CASE(RG16UI);
	DEFINE_CASE(RG32UI);
	DEFINE_CASE(RGB8UI);
	DEFINE_CASE(RGB16UI);
	DEFINE_CASE(RGB32UI);
	DEFINE_CASE(RGBA8UI);
	DEFINE_CASE(RGBA16UI);
	DEFINE_CASE(RGBA32UI);

	DEFINE_CASE(R8_UNORM);
	DEFINE_CASE(R16_UNORM);
	DEFINE_CASE(R32_UNORM);
	DEFINE_CASE(R32F);
	DEFINE_CASE(RG8_UNORM);
	DEFINE_CASE(RG16_UNORM);
	DEFINE_CASE(RG32_UNORM);
	DEFINE_CASE(RG32F);
	DEFINE_CASE(RGB8_UNORM);
	DEFINE_CASE(RGB16_UNORM);
	DEFINE_CASE(RGB32_UNORM);
	DEFINE_CASE(RGB32F);
	DEFINE_CASE(RGBA8_UNORM);
	DEFINE_CASE(RGBA16_UNORM);
	DEFINE_CASE(RGBA32_UNORM);
	DEFINE_CASE(RGBA32F);

	DEFINE_CASE(R8I);
	DEFINE_CASE(R16I);
	DEFINE_CASE(R32I);
	DEFINE_CASE(RG8I);
	DEFINE_CASE(R16F);
	DEFINE_CASE(RG16I);
	DEFINE_CASE(RG32I);
	DEFINE_CASE(RG16F);
	DEFINE_CASE(RGB8I);
	DEFINE_CASE(RGB16I);
	DEFINE_CASE(RGB32I);
	DEFINE_CASE(RGB16F);
	DEFINE_CASE(RGBA8I);
	DEFINE_CASE(RGBA16I);
	DEFINE_CASE(RGBA32I);
	DEFINE_CASE(RGBA16F);

	DEFINE_CASE(RGBA4);
	DEFINE_CASE(RGBA8_2);
	DEFINE_CASE(RGB10_A2_2);
	default:
	snprintf(unk_format_str, sizeof(unk_format_str), "0x%02x", format);
	return unk_format_str;
	}
}

#undef DEFINE_CASE
