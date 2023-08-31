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

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000598, "dEQP-VK.renderpass2.dedicated_allocation.simple.color.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000599, "dEQP-VK.renderpass2.dedicated_allocation.simple.depth.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000600, "dEQP-VK.renderpass2.dedicated_allocation.simple.stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000601, "dEQP-VK.renderpass2.dedicated_allocation.simple.depth_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000602, "dEQP-VK.renderpass2.dedicated_allocation.simple.color_depth.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000603, "dEQP-VK.renderpass2.dedicated_allocation.simple.color_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000604, "dEQP-VK.renderpass2.dedicated_allocation.simple.color_depth_stencil.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000605, "dEQP-VK.renderpass2.dedicated_allocation.simple.no_attachments.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000606, "dEQP-VK.renderpass2.dedicated_allocation.simple.color_unused_omit_blend_state.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000607, "dEQP-VK.renderpass2.dedicated_allocation.formats.r5g6b5_unorm_pack16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000608, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000609, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000610, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000611, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000612, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000613, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000614, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000615, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000616, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000617, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000618, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000619, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000620, "dEQP-VK.renderpass2.dedicated_allocation.formats.r8g8b8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000621, "dEQP-VK.renderpass2.dedicated_allocation.formats.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000622, "dEQP-VK.renderpass2.dedicated_allocation.formats.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000623, "dEQP-VK.renderpass2.dedicated_allocation.formats.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000624, "dEQP-VK.renderpass2.dedicated_allocation.formats.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000625, "dEQP-VK.renderpass2.dedicated_allocation.formats.a8b8g8r8_srgb_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000626, "dEQP-VK.renderpass2.dedicated_allocation.formats.b8g8r8a8_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000627, "dEQP-VK.renderpass2.dedicated_allocation.formats.b8g8r8a8_srgb.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000628, "dEQP-VK.renderpass2.dedicated_allocation.formats.a2r10g10b10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000629, "dEQP-VK.renderpass2.dedicated_allocation.formats.a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000630, "dEQP-VK.renderpass2.dedicated_allocation.formats.a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000631, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000632, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000633, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000634, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000635, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000636, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000637, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000638, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000639, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000640, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000641, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000642, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000643, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000644, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000645, "dEQP-VK.renderpass2.dedicated_allocation.formats.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000646, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000647, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000648, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000649, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000650, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000651, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000652, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000653, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000654, "dEQP-VK.renderpass2.dedicated_allocation.formats.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000655, "dEQP-VK.renderpass2.dedicated_allocation.formats.d16_unorm.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000656, "dEQP-VK.renderpass2.dedicated_allocation.formats.x8_d24_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000657, "dEQP-VK.renderpass2.dedicated_allocation.formats.d32_sfloat.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000658, "dEQP-VK.renderpass2.dedicated_allocation.formats.d24_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000659, "dEQP-VK.renderpass2.dedicated_allocation.formats.d32_sfloat_s8_uint.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000660, "dEQP-VK.renderpass2.dedicated_allocation.attachment.1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000661, "dEQP-VK.renderpass2.dedicated_allocation.attachment.3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000662, "dEQP-VK.renderpass2.dedicated_allocation.attachment.4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000663, "dEQP-VK.renderpass2.dedicated_allocation.attachment.8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000664, "dEQP-VK.renderpass2.dedicated_allocation.attachment_write_mask.attachment_count_1.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000665, "dEQP-VK.renderpass2.dedicated_allocation.attachment_write_mask.attachment_count_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000666, "dEQP-VK.renderpass2.dedicated_allocation.attachment_write_mask.attachment_count_3.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000667, "dEQP-VK.renderpass2.dedicated_allocation.attachment_write_mask.attachment_count_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000668, "dEQP-VK.renderpass2.dedicated_allocation.attachment_write_mask.attachment_count_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000669, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.grow.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000670, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.shrink.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000671, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.roll.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000672, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.grow_shrink.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000673, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.input_output_chain.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000674, "dEQP-VK.renderpass2.dedicated_allocation.attachment_allocation.input_output.*");
