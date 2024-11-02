#ifndef COMMON_XML
#define COMMON_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- texdesc_3d.xml (   3183 bytes, from 2017-10-31 19:05:01)
- copyright.xml  (   1597 bytes, from 2016-10-29 07:29:22)
- common.xml     (  26187 bytes, from 2017-10-31 19:05:01)
- common_3d.xml  (  14615 bytes, from 2017-11-04 14:03:35)

Copyright (C) 2012-2017 by the following authors:
- Wladimir J. van der Laan <laanwj@gmail.com>
- Christian Gmeiner <christian.gmeiner@gmail.com>
- Lucas Stach <l.stach@pengutronix.de>
- Russell King <rmk@arm.linux.org.uk>

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sub license,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/


#define PIPE_ID_PIPE_3D						0x00000000
#define PIPE_ID_PIPE_2D						0x00000001
#define SYNC_RECIPIENT_FE					0x00000001
#define SYNC_RECIPIENT_RA					0x00000005
#define SYNC_RECIPIENT_PE					0x00000007
#define SYNC_RECIPIENT_DE					0x0000000b
#define SYNC_RECIPIENT_BLT					0x00000010
#define ENDIAN_MODE_NO_SWAP					0x00000000
#define ENDIAN_MODE_SWAP_16					0x00000001
#define ENDIAN_MODE_SWAP_32					0x00000002
#define chipModel_GC200						0x00000200
#define chipModel_GC300						0x00000300
#define chipModel_GC320						0x00000320
#define chipModel_GC328						0x00000328
#define chipModel_GC350						0x00000350
#define chipModel_GC355						0x00000355
#define chipModel_GC400						0x00000400
#define chipModel_GC410						0x00000410
#define chipModel_GC420						0x00000420
#define chipModel_GC428						0x00000428
#define chipModel_GC450						0x00000450
#define chipModel_GC500						0x00000500
#define chipModel_GC520						0x00000520
#define chipModel_GC530						0x00000530
#define chipModel_GC600						0x00000600
#define chipModel_GC700						0x00000700
#define chipModel_GC800						0x00000800
#define chipModel_GC860						0x00000860
#define chipModel_GC880						0x00000880
#define chipModel_GC900						0x00000900
#define chipModel_GC1000					0x00001000
#define chipModel_GC1500					0x00001500
#define chipModel_GC2000					0x00002000
#define chipModel_GC2100					0x00002100
#define chipModel_GC2200					0x00002200
#define chipModel_GC2500					0x00002500
#define chipModel_GC3000					0x00003000
#define chipModel_GC4000					0x00004000
#define chipModel_GC5000					0x00005000
#define chipModel_GC5200					0x00005200
#define chipModel_GC6400					0x00006400
#define chipModel_GC7000					0x00007000
#define chipModel_GC7400					0x00007400
#define chipModel_GC8000					0x00008000
#define chipModel_GC8100					0x00008100
#define chipModel_GC8200					0x00008200
#define chipModel_GC8400					0x00008400
#define RGBA_BITS_R						0x00000001
#define RGBA_BITS_G						0x00000002
#define RGBA_BITS_B						0x00000004
#define RGBA_BITS_A						0x00000008
#define chipFeatures_FAST_CLEAR					0x00000001
#define chipFeatures_SPECIAL_ANTI_ALIASING			0x00000002
#define chipFeatures_PIPE_3D					0x00000004
#define chipFeatures_DXT_TEXTURE_COMPRESSION			0x00000008
#define chipFeatures_DEBUG_MODE					0x00000010
#define chipFeatures_Z_COMPRESSION				0x00000020
#define chipFeatures_YUV420_SCALER				0x00000040
#define chipFeatures_MSAA					0x00000080
#define chipFeatures_DC						0x00000100
#define chipFeatures_PIPE_2D					0x00000200
#define chipFeatures_ETC1_TEXTURE_COMPRESSION			0x00000400
#define chipFeatures_FAST_SCALER				0x00000800
#define chipFeatures_HIGH_DYNAMIC_RANGE				0x00001000
#define chipFeatures_YUV420_TILER				0x00002000
#define chipFeatures_MODULE_CG					0x00004000
#define chipFeatures_MIN_AREA					0x00008000
#define chipFeatures_NO_EARLY_Z					0x00010000
#define chipFeatures_NO_422_TEXTURE				0x00020000
#define chipFeatures_BUFFER_INTERLEAVING			0x00040000
#define chipFeatures_BYTE_WRITE_2D				0x00080000
#define chipFeatures_NO_SCALER					0x00100000
#define chipFeatures_YUY2_AVERAGING				0x00200000
#define chipFeatures_HALF_PE_CACHE				0x00400000
#define chipFeatures_HALF_TX_CACHE				0x00800000
#define chipFeatures_YUY2_RENDER_TARGET				0x01000000
#define chipFeatures_MEM32					0x02000000
#define chipFeatures_PIPE_VG					0x04000000
#define chipFeatures_VGTS					0x08000000
#define chipFeatures_FE20					0x10000000
#define chipFeatures_BYTE_WRITE_3D				0x20000000
#define chipFeatures_RS_YUV_TARGET				0x40000000
#define chipFeatures_32_BIT_INDICES				0x80000000
#define chipMinorFeatures0_FLIP_Y				0x00000001
#define chipMinorFeatures0_DUAL_RETURN_BUS			0x00000002
#define chipMinorFeatures0_ENDIANNESS_CONFIG			0x00000004
#define chipMinorFeatures0_TEXTURE_8K				0x00000008
#define chipMinorFeatures0_CORRECT_TEXTURE_CONVERTER		0x00000010
#define chipMinorFeatures0_SPECIAL_MSAA_LOD			0x00000020
#define chipMinorFeatures0_FAST_CLEAR_FLUSH			0x00000040
#define chipMinorFeatures0_2DPE20				0x00000080
#define chipMinorFeatures0_CORRECT_AUTO_DISABLE			0x00000100
#define chipMinorFeatures0_RENDERTARGET_8K			0x00000200
#define chipMinorFeatures0_2BITPERTILE				0x00000400
#define chipMinorFeatures0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED	0x00000800
#define chipMinorFeatures0_SUPER_TILED				0x00001000
#define chipMinorFeatures0_VG_20				0x00002000
#define chipMinorFeatures0_TS_EXTENDED_COMMANDS			0x00004000
#define chipMinorFeatures0_COMPRESSION_FIFO_FIXED		0x00008000
#define chipMinorFeatures0_HAS_SIGN_FLOOR_CEIL			0x00010000
#define chipMinorFeatures0_VG_FILTER				0x00020000
#define chipMinorFeatures0_VG_21				0x00040000
#define chipMinorFeatures0_SHADER_HAS_W				0x00080000
#define chipMinorFeatures0_HAS_SQRT_TRIG			0x00100000
#define chipMinorFeatures0_MORE_MINOR_FEATURES			0x00200000
#define chipMinorFeatures0_MC20					0x00400000
#define chipMinorFeatures0_MSAA_SIDEBAND			0x00800000
#define chipMinorFeatures0_BUG_FIXES0				0x01000000
#define chipMinorFeatures0_VAA					0x02000000
#define chipMinorFeatures0_BYPASS_IN_MSAA			0x04000000
#define chipMinorFeatures0_HZ					0x08000000
#define chipMinorFeatures0_NEW_TEXTURE				0x10000000
#define chipMinorFeatures0_2D_A8_TARGET				0x20000000
#define chipMinorFeatures0_CORRECT_STENCIL			0x40000000
#define chipMinorFeatures0_ENHANCE_VR				0x80000000
#define chipMinorFeatures1_RSUV_SWIZZLE				0x00000001
#define chipMinorFeatures1_V2_COMPRESSION			0x00000002
#define chipMinorFeatures1_VG_DOUBLE_BUFFER			0x00000004
#define chipMinorFeatures1_EXTRA_EVENT_STATES			0x00000008
#define chipMinorFeatures1_NO_STRIPING_NEEDED			0x00000010
#define chipMinorFeatures1_TEXTURE_STRIDE			0x00000020
#define chipMinorFeatures1_BUG_FIXES3				0x00000040
#define chipMinorFeatures1_AUTO_DISABLE				0x00000080
#define chipMinorFeatures1_AUTO_RESTART_TS			0x00000100
#define chipMinorFeatures1_DISABLE_PE_GATING			0x00000200
#define chipMinorFeatures1_L2_WINDOWING				0x00000400
#define chipMinorFeatures1_HALF_FLOAT				0x00000800
#define chipMinorFeatures1_PIXEL_DITHER				0x00001000
#define chipMinorFeatures1_TWO_STENCIL_REFERENCE		0x00002000
#define chipMinorFeatures1_EXTENDED_PIXEL_FORMAT		0x00004000
#define chipMinorFeatures1_CORRECT_MIN_MAX_DEPTH		0x00008000
#define chipMinorFeatures1_2D_DITHER				0x00010000
#define chipMinorFeatures1_BUG_FIXES5				0x00020000
#define chipMinorFeatures1_NEW_2D				0x00040000
#define chipMinorFeatures1_NEW_FP				0x00080000
#define chipMinorFeatures1_TEXTURE_HALIGN			0x00100000
#define chipMinorFeatures1_NON_POWER_OF_TWO			0x00200000
#define chipMinorFeatures1_LINEAR_TEXTURE_SUPPORT		0x00400000
#define chipMinorFeatures1_HALTI0				0x00800000
#define chipMinorFeatures1_CORRECT_OVERFLOW_VG			0x01000000
#define chipMinorFeatures1_NEGATIVE_LOG_FIX			0x02000000
#define chipMinorFeatures1_RESOLVE_OFFSET			0x04000000
#define chipMinorFeatures1_OK_TO_GATE_AXI_CLOCK			0x08000000
#define chipMinorFeatures1_MMU_VERSION				0x10000000
#define chipMinorFeatures1_WIDE_LINE				0x20000000
#define chipMinorFeatures1_BUG_FIXES6				0x40000000
#define chipMinorFeatures1_FC_FLUSH_STALL			0x80000000
#define chipMinorFeatures2_LINE_LOOP				0x00000001
#define chipMinorFeatures2_LOGIC_OP				0x00000002
#define chipMinorFeatures2_SEAMLESS_CUBE_MAP			0x00000004
#define chipMinorFeatures2_SUPERTILED_TEXTURE			0x00000008
#define chipMinorFeatures2_LINEAR_PE				0x00000010
#define chipMinorFeatures2_RECT_PRIMITIVE			0x00000020
#define chipMinorFeatures2_COMPOSITION				0x00000040
#define chipMinorFeatures2_CORRECT_AUTO_DISABLE_COUNT		0x00000080
#define chipMinorFeatures2_PE_SWIZZLE				0x00000100
#define chipMinorFeatures2_END_EVENT				0x00000200
#define chipMinorFeatures2_S1S8					0x00000400
#define chipMinorFeatures2_HALTI1				0x00000800
#define chipMinorFeatures2_RGB888				0x00001000
#define chipMinorFeatures2_TX__YUV_ASSEMBLER			0x00002000
#define chipMinorFeatures2_DYNAMIC_FREQUENCY_SCALING		0x00004000
#define chipMinorFeatures2_TX_FILTER				0x00008000
#define chipMinorFeatures2_FULL_DIRECTFB			0x00010000
#define chipMinorFeatures2_2D_TILING				0x00020000
#define chipMinorFeatures2_THREAD_WALKER_IN_PS			0x00040000
#define chipMinorFeatures2_TILE_FILLER				0x00080000
#define chipMinorFeatures2_YUV_STANDARD				0x00100000
#define chipMinorFeatures2_2D_MULTI_SOURCE_BLIT			0x00200000
#define chipMinorFeatures2_YUV_CONVERSION			0x00400000
#define chipMinorFeatures2_FLUSH_FIXED_2D			0x00800000
#define chipMinorFeatures2_INTERLEAVER				0x01000000
#define chipMinorFeatures2_MIXED_STREAMS			0x02000000
#define chipMinorFeatures2_2D_420_L2CACHE			0x04000000
#define chipMinorFeatures2_BUG_FIXES7				0x08000000
#define chipMinorFeatures2_2D_NO_INDEX8_BRUSH			0x10000000
#define chipMinorFeatures2_TEXTURE_TILED_READ			0x20000000
#define chipMinorFeatures2_DECOMPRESS_Z16			0x40000000
#define chipMinorFeatures2_BUG_FIXES8				0x80000000
#define chipMinorFeatures3_ROTATION_STALL_FIX			0x00000001
#define chipMinorFeatures3_OCL_ONLY				0x00000002
#define chipMinorFeatures3_2D_MULTI_SOURCE_BLT_EX		0x00000004
#define chipMinorFeatures3_INSTRUCTION_CACHE			0x00000008
#define chipMinorFeatures3_GEOMETRY_SHADER			0x00000010
#define chipMinorFeatures3_TEX_COMPRESSION_SUPERTILED		0x00000020
#define chipMinorFeatures3_GENERICS				0x00000040
#define chipMinorFeatures3_BUG_FIXES9				0x00000080
#define chipMinorFeatures3_FAST_MSAA				0x00000100
#define chipMinorFeatures3_WCLIP				0x00000200
#define chipMinorFeatures3_BUG_FIXES10				0x00000400
#define chipMinorFeatures3_UNIFIED_SAMPLERS			0x00000800
#define chipMinorFeatures3_BUG_FIXES11				0x00001000
#define chipMinorFeatures3_PERFORMANCE_COUNTERS			0x00002000
#define chipMinorFeatures3_HAS_FAST_TRANSCENDENTALS		0x00004000
#define chipMinorFeatures3_BUG_FIXES12				0x00008000
#define chipMinorFeatures3_BUG_FIXES13				0x00010000
#define chipMinorFeatures3_DE_ENHANCEMENTS1			0x00020000
#define chipMinorFeatures3_ACE					0x00040000
#define chipMinorFeatures3_TX_ENHANCEMENTS1			0x00080000
#define chipMinorFeatures3_SH_ENHANCEMENTS1			0x00100000
#define chipMinorFeatures3_SH_ENHANCEMENTS2			0x00200000
#define chipMinorFeatures3_PE_ENHANCEMENTS1			0x00400000
#define chipMinorFeatures3_2D_FC_SOURCE				0x00800000
#define chipMinorFeatures3_BUG_FIXES_14				0x01000000
#define chipMinorFeatures3_POWER_OPTIMIZATIONS_0		0x02000000
#define chipMinorFeatures3_NEW_HZ				0x04000000
#define chipMinorFeatures3_PE_DITHER_FIX			0x08000000
#define chipMinorFeatures3_DE_ENHANCEMENTS3			0x10000000
#define chipMinorFeatures3_SH_ENHANCEMENTS3			0x20000000
#define chipMinorFeatures3_SH_ENHANCEMENTS4			0x40000000
#define chipMinorFeatures3_TX_ENHANCEMENTS2			0x80000000
#define chipMinorFeatures4_FE_ENHANCEMENTS1			0x00000001
#define chipMinorFeatures4_PE_ENHANCEMENTS2			0x00000002
#define chipMinorFeatures4_FRUSTUM_CLIP_FIX			0x00000004
#define chipMinorFeatures4_DE_NO_GAMMA				0x00000008
#define chipMinorFeatures4_PA_ENHANCEMENTS_2			0x00000010
#define chipMinorFeatures4_2D_GAMMA				0x00000020
#define chipMinorFeatures4_SINGLE_BUFFER			0x00000040
#define chipMinorFeatures4_HI_ENHANCEMENTS_1			0x00000080
#define chipMinorFeatures4_TX_ENHANCEMENTS_3			0x00000100
#define chipMinorFeatures4_SH_ENHANCEMENTS_5			0x00000200
#define chipMinorFeatures4_FE_ENHANCEMENTS_2			0x00000400
#define chipMinorFeatures4_TX_LERP_PRECISION_FIX		0x00000800
#define chipMinorFeatures4_2D_COLOR_SPACE_CONVERSION		0x00001000
#define chipMinorFeatures4_TEXTURE_ASTC				0x00002000
#define chipMinorFeatures4_PE_ENHANCEMENTS_4			0x00004000
#define chipMinorFeatures4_MC_ENHANCEMENTS_1			0x00008000
#define chipMinorFeatures4_HALTI2				0x00010000
#define chipMinorFeatures4_2D_MIRROR_EXTENSION			0x00020000
#define chipMinorFeatures4_SMALL_MSAA				0x00040000
#define chipMinorFeatures4_BUG_FIXES_17				0x00080000
#define chipMinorFeatures4_NEW_RA				0x00100000
#define chipMinorFeatures4_2D_OPF_YUV_OUTPUT			0x00200000
#define chipMinorFeatures4_2D_MULTI_SOURCE_BLT_EX2		0x00400000
#define chipMinorFeatures4_NO_USER_CSC				0x00800000
#define chipMinorFeatures4_ZFIXES				0x01000000
#define chipMinorFeatures4_BUG_FIXES18				0x02000000
#define chipMinorFeatures4_2D_COMPRESSION			0x04000000
#define chipMinorFeatures4_PROBE				0x08000000
#define chipMinorFeatures4_MEDIUM_PRECISION			0x10000000
#define chipMinorFeatures4_2D_SUPER_TILE_VERSION		0x20000000
#define chipMinorFeatures4_BUG_FIXES19				0x40000000
#define chipMinorFeatures4_SH_ENHANCEMENTS6			0x80000000
#define chipMinorFeatures5_SH_ENHANCEMENTS7			0x00000001
#define chipMinorFeatures5_BUG_FIXES20				0x00000002
#define chipMinorFeatures5_DE_ADDRESS_40			0x00000004
#define chipMinorFeatures5_MINI_MMU_FIX				0x00000008
#define chipMinorFeatures5_EEZ					0x00000010
#define chipMinorFeatures5_BUG_FIXES21				0x00000020
#define chipMinorFeatures5_EXTRA_VG_CAPS			0x00000040
#define chipMinorFeatures5_MULTI_SRC_V15			0x00000080
#define chipMinorFeatures5_BUG_FIXES22				0x00000100
#define chipMinorFeatures5_HALTI3				0x00000200
#define chipMinorFeatures5_TESSELATION_SHADERS			0x00000400
#define chipMinorFeatures5_2D_ONE_PASS_FILTER_TAP		0x00000800
#define chipMinorFeatures5_MULTI_SRC_V2_STR_QUAD		0x00001000
#define chipMinorFeatures5_SEPARATE_SRC_DST			0x00002000
#define chipMinorFeatures5_HALTI4				0x00004000
#define chipMinorFeatures5_RA_WRITE_DEPTH			0x00008000
#define chipMinorFeatures5_ANDROID_ONLY				0x00010000
#define chipMinorFeatures5_HAS_PRODUCTID			0x00020000
#define chipMinorFeatures5_TX_SUPPORT_DEC			0x00040000
#define chipMinorFeatures5_S8_MSAA_COMPRESSION			0x00080000
#define chipMinorFeatures5_PE_DITHER_FIX2			0x00100000
#define chipMinorFeatures5_L2_CACHE_REMOVE			0x00200000
#define chipMinorFeatures5_FE_ALLOW_RND_VTX_CNT			0x00400000
#define chipMinorFeatures5_CUBE_MAP_FL28			0x00800000
#define chipMinorFeatures5_TX_6BIT_FRAC				0x01000000
#define chipMinorFeatures5_FE_ALLOW_STALL_PREFETCH_ENG		0x02000000
#define chipMinorFeatures5_THIRD_PARTY_COMPRESSION		0x04000000
#define chipMinorFeatures5_RS_DEPTHSTENCIL_NATIVE_SUPPORT	0x08000000
#define chipMinorFeatures5_V2_MSAA_COMP_FIX			0x10000000
#define chipMinorFeatures5_HALTI5				0x20000000
#define chipMinorFeatures5_EVIS					0x40000000
#define chipMinorFeatures5_BLT_ENGINE				0x80000000
#define chipMinorFeatures6_BUG_FIXES_23				0x00000001
#define chipMinorFeatures6_BUG_FIXES_24				0x00000002
#define chipMinorFeatures6_DEC					0x00000004
#define chipMinorFeatures6_VS_TILE_NV12				0x00000008
#define chipMinorFeatures6_VS_TILE_NV12_10BIT			0x00000010

#endif /* COMMON_XML */
