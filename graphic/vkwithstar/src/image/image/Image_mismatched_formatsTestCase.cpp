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
#include "../ImageBaseFunc.h"
#include "../ActsImage0007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0007TS, TC012344, "dEQP-VK.image.mismatched_formats.image_read.r8_unorm_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012345, "dEQP-VK.image.mismatched_formats.image_read.r8_snorm_with_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012346, "dEQP-VK.image.mismatched_formats.image_read.r8_uscaled_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012347, "dEQP-VK.image.mismatched_formats.image_read.r8_sscaled_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012348, "dEQP-VK.image.mismatched_formats.image_read.r8_sscaled_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012349, "dEQP-VK.image.mismatched_formats.image_read.r8_uint_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012350, "dEQP-VK.image.mismatched_formats.image_read.r8_sint_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012351, "dEQP-VK.image.mismatched_formats.image_read.r8_sint_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012352, "dEQP-VK.image.mismatched_formats.image_read.r8_srgb_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012353, "dEQP-VK.image.mismatched_formats.image_read.r8g8_unorm_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012354, "dEQP-VK.image.mismatched_formats.image_read.r8g8_snorm_with_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012355, "dEQP-VK.image.mismatched_formats.image_read.r8g8_uscaled_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012356, "dEQP-VK.image.mismatched_formats.image_read.r8g8_sscaled_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012357, "dEQP-VK.image.mismatched_formats.image_read.r8g8_sscaled_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012358, "dEQP-VK.image.mismatched_formats.image_read.r8g8_uint_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012359, "dEQP-VK.image.mismatched_formats.image_read.r8g8_sint_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012360, "dEQP-VK.image.mismatched_formats.image_read.r8g8_sint_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012361, "dEQP-VK.image.mismatched_formats.image_read.r8g8_srgb_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012362, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012363, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012364, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012365, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012366, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012367, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012368, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012369, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012370, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012371, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012372, "dEQP-VK.image.mismatched_formats.image_read.r8g8b8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012373, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012374, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012375, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012376, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012377, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012378, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012379, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012380, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012381, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012382, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012383, "dEQP-VK.image.mismatched_formats.image_read.b8g8r8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012384, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012385, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012386, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012387, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012388, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012389, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012390, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012391, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012392, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012393, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_srgb_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012394, "dEQP-VK.image.mismatched_formats.image_read.a8b8g8r8_srgb_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012395, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012396, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012397, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012398, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012399, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012400, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012401, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012402, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012403, "dEQP-VK.image.mismatched_formats.image_read.a2r10g10b10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012404, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012405, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012406, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012407, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012408, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012409, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012410, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012411, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012412, "dEQP-VK.image.mismatched_formats.image_read.a2b10g10r10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012413, "dEQP-VK.image.mismatched_formats.image_read.r16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012414, "dEQP-VK.image.mismatched_formats.image_read.r16_snorm_with_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012415, "dEQP-VK.image.mismatched_formats.image_read.r16_uscaled_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012416, "dEQP-VK.image.mismatched_formats.image_read.r16_sscaled_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012417, "dEQP-VK.image.mismatched_formats.image_read.r16_uint_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012418, "dEQP-VK.image.mismatched_formats.image_read.r16_sint_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012419, "dEQP-VK.image.mismatched_formats.image_read.r16_sfloat_with_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012420, "dEQP-VK.image.mismatched_formats.image_read.r16g16_unorm_with_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012421, "dEQP-VK.image.mismatched_formats.image_read.r16g16_snorm_with_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012422, "dEQP-VK.image.mismatched_formats.image_read.r16g16_uscaled_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012423, "dEQP-VK.image.mismatched_formats.image_read.r16g16_sscaled_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012424, "dEQP-VK.image.mismatched_formats.image_read.r16g16_uint_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012425, "dEQP-VK.image.mismatched_formats.image_read.r16g16_sint_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012426, "dEQP-VK.image.mismatched_formats.image_read.r16g16_sfloat_with_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012427, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_unorm_with_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012428, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_snorm_with_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012429, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_uscaled_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012430, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_sscaled_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012431, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_uint_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012432, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_sint_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012433, "dEQP-VK.image.mismatched_formats.image_read.r16g16b16a16_sfloat_with_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012434, "dEQP-VK.image.mismatched_formats.image_read.r32_uint_with_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012435, "dEQP-VK.image.mismatched_formats.image_read.r32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012436, "dEQP-VK.image.mismatched_formats.image_read.r32g32_uint_with_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012437, "dEQP-VK.image.mismatched_formats.image_read.r32g32_sfloat_with_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012438, "dEQP-VK.image.mismatched_formats.image_read.r32g32b32a32_uint_with_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012439, "dEQP-VK.image.mismatched_formats.image_read.r32g32b32a32_sint_with_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012440, "dEQP-VK.image.mismatched_formats.image_read.r32g32b32a32_sfloat_with_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012441, "dEQP-VK.image.mismatched_formats.image_read.b10g11r11_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012442, "dEQP-VK.image.mismatched_formats.image_read.e5b9g9r9_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012443, "dEQP-VK.image.mismatched_formats.image_read.d16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012444, "dEQP-VK.image.mismatched_formats.image_read.d32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012445, "dEQP-VK.image.mismatched_formats.image_read.s8_uint_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012446, "dEQP-VK.image.mismatched_formats.image_write.r8_unorm_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012447, "dEQP-VK.image.mismatched_formats.image_write.r8_snorm_with_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012448, "dEQP-VK.image.mismatched_formats.image_write.r8_uscaled_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012449, "dEQP-VK.image.mismatched_formats.image_write.r8_sscaled_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012450, "dEQP-VK.image.mismatched_formats.image_write.r8_sscaled_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012451, "dEQP-VK.image.mismatched_formats.image_write.r8_uint_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012452, "dEQP-VK.image.mismatched_formats.image_write.r8_sint_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012453, "dEQP-VK.image.mismatched_formats.image_write.r8_sint_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012454, "dEQP-VK.image.mismatched_formats.image_write.r8_srgb_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012455, "dEQP-VK.image.mismatched_formats.image_write.r8g8_unorm_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012456, "dEQP-VK.image.mismatched_formats.image_write.r8g8_snorm_with_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012457, "dEQP-VK.image.mismatched_formats.image_write.r8g8_uscaled_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012458, "dEQP-VK.image.mismatched_formats.image_write.r8g8_sscaled_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012459, "dEQP-VK.image.mismatched_formats.image_write.r8g8_sscaled_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012460, "dEQP-VK.image.mismatched_formats.image_write.r8g8_uint_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012461, "dEQP-VK.image.mismatched_formats.image_write.r8g8_sint_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012462, "dEQP-VK.image.mismatched_formats.image_write.r8g8_sint_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012463, "dEQP-VK.image.mismatched_formats.image_write.r8g8_srgb_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012464, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012465, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012466, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012467, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012468, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012469, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012470, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012471, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012472, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012473, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012474, "dEQP-VK.image.mismatched_formats.image_write.r8g8b8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012475, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012476, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012477, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012478, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012479, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012480, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012481, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012482, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012483, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012484, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012485, "dEQP-VK.image.mismatched_formats.image_write.b8g8r8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012486, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012487, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012488, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012489, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012490, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012491, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012492, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012493, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012494, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012495, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_srgb_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012496, "dEQP-VK.image.mismatched_formats.image_write.a8b8g8r8_srgb_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012497, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012498, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012499, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012500, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012501, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012502, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012503, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012504, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012505, "dEQP-VK.image.mismatched_formats.image_write.a2r10g10b10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012506, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012507, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012508, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012509, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012510, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012511, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012512, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012513, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012514, "dEQP-VK.image.mismatched_formats.image_write.a2b10g10r10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012515, "dEQP-VK.image.mismatched_formats.image_write.r16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012516, "dEQP-VK.image.mismatched_formats.image_write.r16_snorm_with_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012517, "dEQP-VK.image.mismatched_formats.image_write.r16_uscaled_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012518, "dEQP-VK.image.mismatched_formats.image_write.r16_sscaled_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012519, "dEQP-VK.image.mismatched_formats.image_write.r16_uint_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012520, "dEQP-VK.image.mismatched_formats.image_write.r16_sint_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012521, "dEQP-VK.image.mismatched_formats.image_write.r16_sfloat_with_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012522, "dEQP-VK.image.mismatched_formats.image_write.r16g16_unorm_with_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012523, "dEQP-VK.image.mismatched_formats.image_write.r16g16_snorm_with_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012524, "dEQP-VK.image.mismatched_formats.image_write.r16g16_uscaled_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012525, "dEQP-VK.image.mismatched_formats.image_write.r16g16_sscaled_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012526, "dEQP-VK.image.mismatched_formats.image_write.r16g16_uint_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012527, "dEQP-VK.image.mismatched_formats.image_write.r16g16_sint_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012528, "dEQP-VK.image.mismatched_formats.image_write.r16g16_sfloat_with_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012529, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_unorm_with_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012530, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_snorm_with_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012531, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_uscaled_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012532, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_sscaled_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012533, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_uint_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012534, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_sint_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012535, "dEQP-VK.image.mismatched_formats.image_write.r16g16b16a16_sfloat_with_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012536, "dEQP-VK.image.mismatched_formats.image_write.r32_uint_with_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012537, "dEQP-VK.image.mismatched_formats.image_write.r32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012538, "dEQP-VK.image.mismatched_formats.image_write.r32g32_uint_with_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012539, "dEQP-VK.image.mismatched_formats.image_write.r32g32_sfloat_with_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012540, "dEQP-VK.image.mismatched_formats.image_write.r32g32b32a32_uint_with_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012541, "dEQP-VK.image.mismatched_formats.image_write.r32g32b32a32_sint_with_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012542, "dEQP-VK.image.mismatched_formats.image_write.r32g32b32a32_sfloat_with_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012543, "dEQP-VK.image.mismatched_formats.image_write.b10g11r11_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012544, "dEQP-VK.image.mismatched_formats.image_write.e5b9g9r9_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012545, "dEQP-VK.image.mismatched_formats.image_write.d16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012546, "dEQP-VK.image.mismatched_formats.image_write.d32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012547, "dEQP-VK.image.mismatched_formats.image_write.s8_uint_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012548, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_unorm_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012549, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_snorm_with_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012550, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_uscaled_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012551, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_sscaled_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012552, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_sscaled_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012553, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_uint_with_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012554, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_sint_with_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012555, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_sint_with_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012556, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8_srgb_with_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012557, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_unorm_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012558, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_snorm_with_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012559, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_uscaled_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012560, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_sscaled_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012561, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_sscaled_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012562, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_uint_with_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012563, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_sint_with_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012564, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_sint_with_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012565, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8_srgb_with_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012566, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012567, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012568, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012569, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012570, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012571, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012572, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012573, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012574, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012575, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012576, "dEQP-VK.image.mismatched_formats.sparse_image_read.r8g8b8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012577, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_unorm_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012578, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_unorm_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012579, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_snorm_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012580, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_uscaled_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012581, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_uscaled_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012582, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_sscaled_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012583, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_uint_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012584, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_uint_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012585, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_sint_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012586, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_srgb_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012587, "dEQP-VK.image.mismatched_formats.sparse_image_read.b8g8r8a8_srgb_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012588, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012589, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012590, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012591, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012592, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012593, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012594, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012595, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012596, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012597, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_srgb_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012598, "dEQP-VK.image.mismatched_formats.sparse_image_read.a8b8g8r8_srgb_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012599, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012600, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012601, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012602, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012603, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012604, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012605, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012606, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012607, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2r10g10b10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012608, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_unorm_pack32_with_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012609, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_unorm_pack32_with_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012610, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_snorm_pack32_with_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012611, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_uscaled_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012612, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_uscaled_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012613, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_sscaled_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012614, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_uint_pack32_with_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012615, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_uint_pack32_with_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012616, "dEQP-VK.image.mismatched_formats.sparse_image_read.a2b10g10r10_sint_pack32_with_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012617, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012618, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_snorm_with_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012619, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_uscaled_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012620, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_sscaled_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012621, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_uint_with_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012622, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_sint_with_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012623, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16_sfloat_with_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012624, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_unorm_with_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012625, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_snorm_with_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012626, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_uscaled_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012627, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_sscaled_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012628, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_uint_with_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012629, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_sint_with_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012630, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16_sfloat_with_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012631, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_unorm_with_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012632, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_snorm_with_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012633, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_uscaled_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012634, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_sscaled_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012635, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_uint_with_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012636, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_sint_with_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012637, "dEQP-VK.image.mismatched_formats.sparse_image_read.r16g16b16a16_sfloat_with_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012638, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32_uint_with_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012639, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012640, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32g32_uint_with_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012641, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32g32_sfloat_with_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012642, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32g32b32a32_uint_with_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012643, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32g32b32a32_sint_with_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012644, "dEQP-VK.image.mismatched_formats.sparse_image_read.r32g32b32a32_sfloat_with_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012645, "dEQP-VK.image.mismatched_formats.sparse_image_read.b10g11r11_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012646, "dEQP-VK.image.mismatched_formats.sparse_image_read.e5b9g9r9_ufloat_pack32_with_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012647, "dEQP-VK.image.mismatched_formats.sparse_image_read.d16_unorm_with_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012648, "dEQP-VK.image.mismatched_formats.sparse_image_read.d32_sfloat_with_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012649, "dEQP-VK.image.mismatched_formats.sparse_image_read.s8_uint_with_r8ui.*");
