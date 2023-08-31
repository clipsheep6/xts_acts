/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <climits>
#include <gtest/gtest.h>
#include "../Renderpass2BaseFunc.h"
#include "../ActsRenderpass20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000038, "dEQP-VK.renderpass2.suballocation.simple.color.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000039, "dEQP-VK.renderpass2.suballocation.simple.depth.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000040, "dEQP-VK.renderpass2.suballocation.simple.stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000041, "dEQP-VK.renderpass2.suballocation.simple.depth_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000042, "dEQP-VK.renderpass2.suballocation.simple.color_depth.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000043, "dEQP-VK.renderpass2.suballocation.simple.color_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000044, "dEQP-VK.renderpass2.suballocation.simple.color_depth_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000045, "dEQP-VK.renderpass2.suballocation.simple.no_attachments.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000046, "dEQP-VK.renderpass2.suballocation.simple.color_unused_omit_blend_state.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000047, "dEQP-VK.renderpass2.suballocation.formats.r5g6b5_unorm_pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000048, "dEQP-VK.renderpass2.suballocation.formats.r8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000049, "dEQP-VK.renderpass2.suballocation.formats.r8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000050, "dEQP-VK.renderpass2.suballocation.formats.r8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000051, "dEQP-VK.renderpass2.suballocation.formats.r8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000052, "dEQP-VK.renderpass2.suballocation.formats.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000053, "dEQP-VK.renderpass2.suballocation.formats.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000054, "dEQP-VK.renderpass2.suballocation.formats.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000055, "dEQP-VK.renderpass2.suballocation.formats.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000056, "dEQP-VK.renderpass2.suballocation.formats.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000057, "dEQP-VK.renderpass2.suballocation.formats.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000058, "dEQP-VK.renderpass2.suballocation.formats.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000059, "dEQP-VK.renderpass2.suballocation.formats.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000060, "dEQP-VK.renderpass2.suballocation.formats.r8g8b8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000061, "dEQP-VK.renderpass2.suballocation.formats.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000062, "dEQP-VK.renderpass2.suballocation.formats.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000063, "dEQP-VK.renderpass2.suballocation.formats.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000064, "dEQP-VK.renderpass2.suballocation.formats.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000065, "dEQP-VK.renderpass2.suballocation.formats.a8b8g8r8_srgb_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000066, "dEQP-VK.renderpass2.suballocation.formats.b8g8r8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000067, "dEQP-VK.renderpass2.suballocation.formats.b8g8r8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000068, "dEQP-VK.renderpass2.suballocation.formats.a2r10g10b10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000069, "dEQP-VK.renderpass2.suballocation.formats.a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000070, "dEQP-VK.renderpass2.suballocation.formats.a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000071, "dEQP-VK.renderpass2.suballocation.formats.r16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000072, "dEQP-VK.renderpass2.suballocation.formats.r16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000073, "dEQP-VK.renderpass2.suballocation.formats.r16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000074, "dEQP-VK.renderpass2.suballocation.formats.r16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000075, "dEQP-VK.renderpass2.suballocation.formats.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000076, "dEQP-VK.renderpass2.suballocation.formats.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000077, "dEQP-VK.renderpass2.suballocation.formats.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000078, "dEQP-VK.renderpass2.suballocation.formats.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000079, "dEQP-VK.renderpass2.suballocation.formats.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000080, "dEQP-VK.renderpass2.suballocation.formats.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000081, "dEQP-VK.renderpass2.suballocation.formats.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000082, "dEQP-VK.renderpass2.suballocation.formats.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000083, "dEQP-VK.renderpass2.suballocation.formats.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000084, "dEQP-VK.renderpass2.suballocation.formats.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000085, "dEQP-VK.renderpass2.suballocation.formats.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000086, "dEQP-VK.renderpass2.suballocation.formats.r32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000087, "dEQP-VK.renderpass2.suballocation.formats.r32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000088, "dEQP-VK.renderpass2.suballocation.formats.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000089, "dEQP-VK.renderpass2.suballocation.formats.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000090, "dEQP-VK.renderpass2.suballocation.formats.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000091, "dEQP-VK.renderpass2.suballocation.formats.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000092, "dEQP-VK.renderpass2.suballocation.formats.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000093, "dEQP-VK.renderpass2.suballocation.formats.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000094, "dEQP-VK.renderpass2.suballocation.formats.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000095, "dEQP-VK.renderpass2.suballocation.formats.d16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000096, "dEQP-VK.renderpass2.suballocation.formats.x8_d24_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000097, "dEQP-VK.renderpass2.suballocation.formats.d32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000098, "dEQP-VK.renderpass2.suballocation.formats.d24_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000099, "dEQP-VK.renderpass2.suballocation.formats.d32_sfloat_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000100, "dEQP-VK.renderpass2.suballocation.attachment.1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000101, "dEQP-VK.renderpass2.suballocation.attachment.3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000102, "dEQP-VK.renderpass2.suballocation.attachment.4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000103, "dEQP-VK.renderpass2.suballocation.attachment.8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000104, "dEQP-VK.renderpass2.suballocation.attachment_write_mask.attachment_count_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000105, "dEQP-VK.renderpass2.suballocation.attachment_write_mask.attachment_count_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000106, "dEQP-VK.renderpass2.suballocation.attachment_write_mask.attachment_count_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000107, "dEQP-VK.renderpass2.suballocation.attachment_write_mask.attachment_count_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000108, "dEQP-VK.renderpass2.suballocation.attachment_write_mask.attachment_count_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000109, "dEQP-VK.renderpass2.suballocation.attachment_allocation.grow.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000110, "dEQP-VK.renderpass2.suballocation.attachment_allocation.shrink.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000111, "dEQP-VK.renderpass2.suballocation.attachment_allocation.roll.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000112, "dEQP-VK.renderpass2.suballocation.attachment_allocation.grow_shrink.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000113, "dEQP-VK.renderpass2.suballocation.attachment_allocation.input_output_chain.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000114, "dEQP-VK.renderpass2.suballocation.attachment_allocation.input_output.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000115, "dEQP-VK.renderpass2.suballocation.multisample.r5g6b5_unorm_pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000116, "dEQP-VK.renderpass2.suballocation.multisample.r8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000117, "dEQP-VK.renderpass2.suballocation.multisample.r8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000118, "dEQP-VK.renderpass2.suballocation.multisample.r8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000119, "dEQP-VK.renderpass2.suballocation.multisample.r8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000120, "dEQP-VK.renderpass2.suballocation.multisample.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000121, "dEQP-VK.renderpass2.suballocation.multisample.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000122, "dEQP-VK.renderpass2.suballocation.multisample.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000123, "dEQP-VK.renderpass2.suballocation.multisample.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000124, "dEQP-VK.renderpass2.suballocation.multisample.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000125, "dEQP-VK.renderpass2.suballocation.multisample.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000126, "dEQP-VK.renderpass2.suballocation.multisample.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000127, "dEQP-VK.renderpass2.suballocation.multisample.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000128, "dEQP-VK.renderpass2.suballocation.multisample.r8g8b8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000129, "dEQP-VK.renderpass2.suballocation.multisample.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000130, "dEQP-VK.renderpass2.suballocation.multisample.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000131, "dEQP-VK.renderpass2.suballocation.multisample.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000132, "dEQP-VK.renderpass2.suballocation.multisample.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000133, "dEQP-VK.renderpass2.suballocation.multisample.a8b8g8r8_srgb_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000134, "dEQP-VK.renderpass2.suballocation.multisample.b8g8r8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000135, "dEQP-VK.renderpass2.suballocation.multisample.b8g8r8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000136, "dEQP-VK.renderpass2.suballocation.multisample.a2r10g10b10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000137, "dEQP-VK.renderpass2.suballocation.multisample.a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000138, "dEQP-VK.renderpass2.suballocation.multisample.a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000139, "dEQP-VK.renderpass2.suballocation.multisample.r16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000140, "dEQP-VK.renderpass2.suballocation.multisample.r16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000141, "dEQP-VK.renderpass2.suballocation.multisample.r16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000142, "dEQP-VK.renderpass2.suballocation.multisample.r16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000143, "dEQP-VK.renderpass2.suballocation.multisample.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000144, "dEQP-VK.renderpass2.suballocation.multisample.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000145, "dEQP-VK.renderpass2.suballocation.multisample.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000146, "dEQP-VK.renderpass2.suballocation.multisample.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000147, "dEQP-VK.renderpass2.suballocation.multisample.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000148, "dEQP-VK.renderpass2.suballocation.multisample.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000149, "dEQP-VK.renderpass2.suballocation.multisample.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000150, "dEQP-VK.renderpass2.suballocation.multisample.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000151, "dEQP-VK.renderpass2.suballocation.multisample.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000152, "dEQP-VK.renderpass2.suballocation.multisample.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000153, "dEQP-VK.renderpass2.suballocation.multisample.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000154, "dEQP-VK.renderpass2.suballocation.multisample.r32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000155, "dEQP-VK.renderpass2.suballocation.multisample.r32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000156, "dEQP-VK.renderpass2.suballocation.multisample.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000157, "dEQP-VK.renderpass2.suballocation.multisample.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000158, "dEQP-VK.renderpass2.suballocation.multisample.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000159, "dEQP-VK.renderpass2.suballocation.multisample.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000160, "dEQP-VK.renderpass2.suballocation.multisample.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000161, "dEQP-VK.renderpass2.suballocation.multisample.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000162, "dEQP-VK.renderpass2.suballocation.multisample.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000163, "dEQP-VK.renderpass2.suballocation.multisample.r10x6g10x6b10x6a10x6_unorm_4pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000164, "dEQP-VK.renderpass2.suballocation.multisample.d16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000165, "dEQP-VK.renderpass2.suballocation.multisample.x8_d24_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000166, "dEQP-VK.renderpass2.suballocation.multisample.d32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000167, "dEQP-VK.renderpass2.suballocation.multisample.s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000168, "dEQP-VK.renderpass2.suballocation.multisample.d16_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000169, "dEQP-VK.renderpass2.suballocation.multisample.d24_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000170, "dEQP-VK.renderpass2.suballocation.multisample.d32_sfloat_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000171, "dEQP-VK.renderpass2.suballocation.multisample.separate_stencil_usage.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000172, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r5g6b5_unorm_pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000173, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000174, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000175, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000176, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000177, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000178, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000179, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000180, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000181, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000182, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000183, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000184, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000185, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r8g8b8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000186, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000187, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000188, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000189, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000190, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a8b8g8r8_srgb_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000191, "dEQP-VK.renderpass2.suballocation.multisample_resolve.b8g8r8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000192, "dEQP-VK.renderpass2.suballocation.multisample_resolve.b8g8r8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000193, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a2r10g10b10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000194, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000195, "dEQP-VK.renderpass2.suballocation.multisample_resolve.a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000196, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000197, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000198, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000199, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000200, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000201, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000202, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000203, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000204, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000205, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000206, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000207, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000208, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000209, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000210, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000211, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000212, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000213, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000214, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000215, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000216, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000217, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000218, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000219, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000220, "dEQP-VK.renderpass2.suballocation.multisample_resolve.r10x6g10x6b10x6a10x6_unorm_4pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000221, "dEQP-VK.renderpass2.suballocation.multisample_resolve.layers_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000222, "dEQP-VK.renderpass2.suballocation.multisample_resolve.layers_6.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000223, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.external_subpass.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000224, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.implicit_dependencies.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000225, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.late_fragment_tests.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000226, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.self_dependency.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000227, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.separate_channels.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000228, "dEQP-VK.renderpass2.suballocation.subpass_dependencies.single_attachment.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000229, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_2_add.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000230, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_2_selected_sample_0.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000231, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_2_selected_sample_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000232, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_4_add.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000233, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_4_selected_sample_0.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000234, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_4_selected_sample_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000235, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_4_selected_sample_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000236, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_4_selected_sample_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000237, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_add.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000238, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_0.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000239, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000240, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000241, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000242, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000243, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_5.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000244, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_6.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000245, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_8_selected_sample_7.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000246, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_add.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000247, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_0.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000248, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000249, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000250, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000251, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000252, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_5.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000253, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_6.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000254, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_7.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000255, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000256, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_9.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000257, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_10.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000258, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_11.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000259, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_12.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000260, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_13.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000261, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_14.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000262, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_16_selected_sample_15.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000263, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_add.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000264, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_0.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000265, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000266, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000267, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000268, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000269, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_5.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000270, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_6.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000271, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_7.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000272, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000273, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_9.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000274, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_10.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000275, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_11.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000276, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_12.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000277, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_13.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000278, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_14.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000279, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_15.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000280, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000281, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_17.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000282, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_18.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000283, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_19.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000284, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_20.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000285, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_21.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000286, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_22.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000287, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_23.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000288, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_24.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000289, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_25.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000290, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_26.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000291, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_27.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000292, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_28.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000293, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_29.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000294, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_30.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000295, "dEQP-VK.renderpass2.suballocation.sampleread.numsamples_32_selected_sample_31.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000296, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r5g6b5_unorm_pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000297, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000298, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000299, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000300, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000301, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000302, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000303, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000304, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000305, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000306, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000307, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000308, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000309, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r8g8b8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000310, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000311, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000312, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000313, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000314, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a8b8g8r8_srgb_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000315, "dEQP-VK.renderpass2.suballocation.sparserendertarget.b8g8r8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000316, "dEQP-VK.renderpass2.suballocation.sparserendertarget.b8g8r8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000317, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a2r10g10b10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000318, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000319, "dEQP-VK.renderpass2.suballocation.sparserendertarget.a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000320, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000321, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000322, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000323, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000324, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000325, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000326, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000327, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000328, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000329, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000330, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000331, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000332, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000333, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000334, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000335, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000336, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000337, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000338, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000339, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000340, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000341, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000342, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000343, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000344, "dEQP-VK.renderpass2.suballocation.sparserendertarget.r10x6g10x6b10x6a10x6_unorm_4pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000345, "dEQP-VK.renderpass2.suballocation.unused_attachment.loadopload.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000346, "dEQP-VK.renderpass2.suballocation.unused_attachment.loadopclear.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000347, "dEQP-VK.renderpass2.suballocation.unused_attachment.loadopdontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000348, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000349, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000350, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_7.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000351, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_15.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000352, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_31.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000353, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_63.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000354, "dEQP-VK.renderpass2.suballocation.attachment_sparse_filling.input_attachment_127.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000355, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000356, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000357, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000358, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000359, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000360, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000361, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000362, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000363, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000364, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000365, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000366, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000367, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000368, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000369, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000370, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000371, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000372, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_nods.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000373, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000374, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000375, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000376, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000377, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000378, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000379, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000380, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000381, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000382, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000383, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000384, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000385, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000386, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000387, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000388, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000389, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000390, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000391, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000392, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000393, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000394, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000395, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000396, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000397, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000398, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000399, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000400, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000401, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000402, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000403, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000404, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000405, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000406, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000407, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000408, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000409, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000410, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000411, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000412, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000413, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000414, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000415, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000416, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000417, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000418, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000419, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000420, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000421, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000422, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000423, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000424, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000425, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000426, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000427, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000428, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000429, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthonly_d32_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000430, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000431, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000432, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000433, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000434, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000435, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000436, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000437, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000438, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000439, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000440, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000441, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000442, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000443, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000444, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000445, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000446, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000447, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000448, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthonly_d32_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000449, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000450, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000451, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000452, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000453, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000454, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000455, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000456, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000457, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000458, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000459, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000460, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000461, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000462, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000463, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000464, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000465, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000466, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000467, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_stencilonly_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000468, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000469, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000470, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000471, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000472, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000473, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000474, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000475, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000476, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000477, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000478, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000479, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000480, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000481, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000482, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000483, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000484, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000485, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000486, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_stencilonly_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000487, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000488, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000489, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000490, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000491, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000492, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000493, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000494, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000495, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000496, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000497, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000498, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000499, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000500, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000501, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000502, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000503, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000504, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000505, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_stencilonly_s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000506, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000507, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000508, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000509, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000510, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000511, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000512, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000513, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000514, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000515, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000516, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000517, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000518, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000519, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000520, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000521, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000522, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000523, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000524, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_stencilonly_s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000525, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000526, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000527, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000528, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000529, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000530, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000531, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000532, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000533, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000534, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000535, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000536, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000537, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000538, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000539, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000540, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000541, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000542, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000543, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthstencil_d32s8_unused.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000544, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000545, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000546, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000547, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000548, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorunused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000549, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000550, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorunused_colorused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000551, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000552, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorunused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000553, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000554, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorunused_colorused_colorused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000555, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000556, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorunused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000557, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000558, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorunused_colorused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000559, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000560, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorunused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000561, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorunused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000562, "dEQP-VK.renderpass2.suballocation.unused_clear_attachments.colorused_colorused_colorused_colorused_depthstencil_d32s8_used.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000563, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000564, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000565, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000566, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000567, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_store_alphablend.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000568, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000569, "dEQP-VK.renderpass2.suballocation.load_store_op_none.color_load_op_none_store_op_none_resolve.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000570, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000571, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000572, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000573, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000574, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d16_unorm_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000575, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d16_unorm_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000576, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d16_unorm_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000577, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d16_unorm_s8_uint_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000578, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d16_unorm_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000579, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d16_unorm_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000580, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d16_unorm_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000581, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d16_unorm_s8_uint_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000582, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d24_unorm_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000583, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d24_unorm_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000584, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d24_unorm_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000585, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d24_unorm_s8_uint_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000586, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d24_unorm_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000587, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d24_unorm_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000588, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d24_unorm_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000589, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d24_unorm_s8_uint_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000590, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d32_sfloat_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000591, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d32_sfloat_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000592, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d32_sfloat_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000593, "dEQP-VK.renderpass2.suballocation.load_store_op_none.depth_d32_sfloat_s8_uint_load_op_none_store_op_dontcare.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000594, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d32_sfloat_s8_uint_load_op_load_store_op_none.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000595, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d32_sfloat_s8_uint_load_op_none_store_op_none_write_off.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000596, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d32_sfloat_s8_uint_load_op_none_store_op_store.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000597, "dEQP-VK.renderpass2.suballocation.load_store_op_none.stencil_d32_sfloat_s8_uint_load_op_none_store_op_dontcare.*");
