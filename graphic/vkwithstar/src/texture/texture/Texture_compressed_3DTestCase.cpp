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
#include "../TextureBaseFunc.h"
#include "../ActsTexture0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000306, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000307, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000308, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000309, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000310, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000311, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000312, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000313, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000314, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000315, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000316, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000317, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000318, "dEQP-VK.texture.compressed_3D.eac_r11_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000319, "dEQP-VK.texture.compressed_3D.eac_r11_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000320, "dEQP-VK.texture.compressed_3D.eac_r11_snorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000321, "dEQP-VK.texture.compressed_3D.eac_r11_snorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000322, "dEQP-VK.texture.compressed_3D.eac_r11g11_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000323, "dEQP-VK.texture.compressed_3D.eac_r11g11_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000324, "dEQP-VK.texture.compressed_3D.eac_r11g11_snorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000325, "dEQP-VK.texture.compressed_3D.eac_r11g11_snorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000326, "dEQP-VK.texture.compressed_3D.astc_4x4_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000327, "dEQP-VK.texture.compressed_3D.astc_4x4_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000328, "dEQP-VK.texture.compressed_3D.astc_4x4_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000329, "dEQP-VK.texture.compressed_3D.astc_4x4_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000330, "dEQP-VK.texture.compressed_3D.astc_5x4_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000331, "dEQP-VK.texture.compressed_3D.astc_5x4_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000332, "dEQP-VK.texture.compressed_3D.astc_5x4_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000333, "dEQP-VK.texture.compressed_3D.astc_5x4_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000334, "dEQP-VK.texture.compressed_3D.astc_5x5_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000335, "dEQP-VK.texture.compressed_3D.astc_5x5_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000336, "dEQP-VK.texture.compressed_3D.astc_5x5_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000337, "dEQP-VK.texture.compressed_3D.astc_5x5_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000338, "dEQP-VK.texture.compressed_3D.astc_6x5_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000339, "dEQP-VK.texture.compressed_3D.astc_6x5_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000340, "dEQP-VK.texture.compressed_3D.astc_6x5_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000341, "dEQP-VK.texture.compressed_3D.astc_6x5_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000342, "dEQP-VK.texture.compressed_3D.astc_6x6_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000343, "dEQP-VK.texture.compressed_3D.astc_6x6_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000344, "dEQP-VK.texture.compressed_3D.astc_6x6_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000345, "dEQP-VK.texture.compressed_3D.astc_6x6_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000346, "dEQP-VK.texture.compressed_3D.astc_8x5_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000347, "dEQP-VK.texture.compressed_3D.astc_8x5_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000348, "dEQP-VK.texture.compressed_3D.astc_8x5_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000349, "dEQP-VK.texture.compressed_3D.astc_8x5_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000350, "dEQP-VK.texture.compressed_3D.astc_8x6_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000351, "dEQP-VK.texture.compressed_3D.astc_8x6_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000352, "dEQP-VK.texture.compressed_3D.astc_8x6_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000353, "dEQP-VK.texture.compressed_3D.astc_8x6_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000354, "dEQP-VK.texture.compressed_3D.astc_8x8_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000355, "dEQP-VK.texture.compressed_3D.astc_8x8_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000356, "dEQP-VK.texture.compressed_3D.astc_8x8_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000357, "dEQP-VK.texture.compressed_3D.astc_8x8_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000358, "dEQP-VK.texture.compressed_3D.astc_10x5_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000359, "dEQP-VK.texture.compressed_3D.astc_10x5_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000360, "dEQP-VK.texture.compressed_3D.astc_10x5_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000361, "dEQP-VK.texture.compressed_3D.astc_10x5_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000362, "dEQP-VK.texture.compressed_3D.astc_10x6_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000363, "dEQP-VK.texture.compressed_3D.astc_10x6_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000364, "dEQP-VK.texture.compressed_3D.astc_10x6_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000365, "dEQP-VK.texture.compressed_3D.astc_10x6_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000366, "dEQP-VK.texture.compressed_3D.astc_10x8_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000367, "dEQP-VK.texture.compressed_3D.astc_10x8_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000368, "dEQP-VK.texture.compressed_3D.astc_10x8_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000369, "dEQP-VK.texture.compressed_3D.astc_10x8_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000370, "dEQP-VK.texture.compressed_3D.astc_10x10_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000371, "dEQP-VK.texture.compressed_3D.astc_10x10_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000372, "dEQP-VK.texture.compressed_3D.astc_10x10_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000373, "dEQP-VK.texture.compressed_3D.astc_10x10_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000374, "dEQP-VK.texture.compressed_3D.astc_12x10_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000375, "dEQP-VK.texture.compressed_3D.astc_12x10_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000376, "dEQP-VK.texture.compressed_3D.astc_12x10_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000377, "dEQP-VK.texture.compressed_3D.astc_12x10_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000378, "dEQP-VK.texture.compressed_3D.astc_12x12_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000379, "dEQP-VK.texture.compressed_3D.astc_12x12_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000380, "dEQP-VK.texture.compressed_3D.astc_12x12_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000381, "dEQP-VK.texture.compressed_3D.astc_12x12_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000382, "dEQP-VK.texture.compressed_3D.bc1_rgb_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000383, "dEQP-VK.texture.compressed_3D.bc1_rgb_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000384, "dEQP-VK.texture.compressed_3D.bc1_rgb_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000385, "dEQP-VK.texture.compressed_3D.bc1_rgb_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000386, "dEQP-VK.texture.compressed_3D.bc1_rgba_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000387, "dEQP-VK.texture.compressed_3D.bc1_rgba_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000388, "dEQP-VK.texture.compressed_3D.bc1_rgba_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000389, "dEQP-VK.texture.compressed_3D.bc1_rgba_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000390, "dEQP-VK.texture.compressed_3D.bc2_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000391, "dEQP-VK.texture.compressed_3D.bc2_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000392, "dEQP-VK.texture.compressed_3D.bc2_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000393, "dEQP-VK.texture.compressed_3D.bc2_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000394, "dEQP-VK.texture.compressed_3D.bc3_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000395, "dEQP-VK.texture.compressed_3D.bc3_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000396, "dEQP-VK.texture.compressed_3D.bc3_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000397, "dEQP-VK.texture.compressed_3D.bc3_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000398, "dEQP-VK.texture.compressed_3D.bc4_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000399, "dEQP-VK.texture.compressed_3D.bc4_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000400, "dEQP-VK.texture.compressed_3D.bc4_snorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000401, "dEQP-VK.texture.compressed_3D.bc4_snorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000402, "dEQP-VK.texture.compressed_3D.bc5_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000403, "dEQP-VK.texture.compressed_3D.bc5_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000404, "dEQP-VK.texture.compressed_3D.bc5_snorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000405, "dEQP-VK.texture.compressed_3D.bc5_snorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000406, "dEQP-VK.texture.compressed_3D.bc6h_ufloat_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000407, "dEQP-VK.texture.compressed_3D.bc6h_ufloat_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000408, "dEQP-VK.texture.compressed_3D.bc6h_sfloat_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000409, "dEQP-VK.texture.compressed_3D.bc6h_sfloat_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000410, "dEQP-VK.texture.compressed_3D.bc7_unorm_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000411, "dEQP-VK.texture.compressed_3D.bc7_unorm_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000412, "dEQP-VK.texture.compressed_3D.bc7_srgb_block_3d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000413, "dEQP-VK.texture.compressed_3D.bc7_srgb_block_3d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000414, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000415, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000416, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000417, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000418, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000419, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000420, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000421, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a1_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000422, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000423, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000424, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000425, "dEQP-VK.texture.compressed_3D.etc2_r8g8b8a8_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000426, "dEQP-VK.texture.compressed_3D.eac_r11_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000427, "dEQP-VK.texture.compressed_3D.eac_r11_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000428, "dEQP-VK.texture.compressed_3D.eac_r11_snorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000429, "dEQP-VK.texture.compressed_3D.eac_r11_snorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000430, "dEQP-VK.texture.compressed_3D.eac_r11g11_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000431, "dEQP-VK.texture.compressed_3D.eac_r11g11_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000432, "dEQP-VK.texture.compressed_3D.eac_r11g11_snorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000433, "dEQP-VK.texture.compressed_3D.eac_r11g11_snorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000434, "dEQP-VK.texture.compressed_3D.astc_4x4_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000435, "dEQP-VK.texture.compressed_3D.astc_4x4_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000436, "dEQP-VK.texture.compressed_3D.astc_4x4_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000437, "dEQP-VK.texture.compressed_3D.astc_4x4_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000438, "dEQP-VK.texture.compressed_3D.astc_5x4_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000439, "dEQP-VK.texture.compressed_3D.astc_5x4_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000440, "dEQP-VK.texture.compressed_3D.astc_5x4_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000441, "dEQP-VK.texture.compressed_3D.astc_5x4_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000442, "dEQP-VK.texture.compressed_3D.astc_5x5_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000443, "dEQP-VK.texture.compressed_3D.astc_5x5_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000444, "dEQP-VK.texture.compressed_3D.astc_5x5_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000445, "dEQP-VK.texture.compressed_3D.astc_5x5_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000446, "dEQP-VK.texture.compressed_3D.astc_6x5_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000447, "dEQP-VK.texture.compressed_3D.astc_6x5_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000448, "dEQP-VK.texture.compressed_3D.astc_6x5_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000449, "dEQP-VK.texture.compressed_3D.astc_6x5_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000450, "dEQP-VK.texture.compressed_3D.astc_6x6_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000451, "dEQP-VK.texture.compressed_3D.astc_6x6_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000452, "dEQP-VK.texture.compressed_3D.astc_6x6_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000453, "dEQP-VK.texture.compressed_3D.astc_6x6_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000454, "dEQP-VK.texture.compressed_3D.astc_8x5_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000455, "dEQP-VK.texture.compressed_3D.astc_8x5_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000456, "dEQP-VK.texture.compressed_3D.astc_8x5_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000457, "dEQP-VK.texture.compressed_3D.astc_8x5_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000458, "dEQP-VK.texture.compressed_3D.astc_8x6_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000459, "dEQP-VK.texture.compressed_3D.astc_8x6_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000460, "dEQP-VK.texture.compressed_3D.astc_8x6_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000461, "dEQP-VK.texture.compressed_3D.astc_8x6_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000462, "dEQP-VK.texture.compressed_3D.astc_8x8_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000463, "dEQP-VK.texture.compressed_3D.astc_8x8_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000464, "dEQP-VK.texture.compressed_3D.astc_8x8_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000465, "dEQP-VK.texture.compressed_3D.astc_8x8_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000466, "dEQP-VK.texture.compressed_3D.astc_10x5_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000467, "dEQP-VK.texture.compressed_3D.astc_10x5_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000468, "dEQP-VK.texture.compressed_3D.astc_10x5_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000469, "dEQP-VK.texture.compressed_3D.astc_10x5_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000470, "dEQP-VK.texture.compressed_3D.astc_10x6_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000471, "dEQP-VK.texture.compressed_3D.astc_10x6_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000472, "dEQP-VK.texture.compressed_3D.astc_10x6_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000473, "dEQP-VK.texture.compressed_3D.astc_10x6_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000474, "dEQP-VK.texture.compressed_3D.astc_10x8_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000475, "dEQP-VK.texture.compressed_3D.astc_10x8_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000476, "dEQP-VK.texture.compressed_3D.astc_10x8_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000477, "dEQP-VK.texture.compressed_3D.astc_10x8_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000478, "dEQP-VK.texture.compressed_3D.astc_10x10_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000479, "dEQP-VK.texture.compressed_3D.astc_10x10_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000480, "dEQP-VK.texture.compressed_3D.astc_10x10_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000481, "dEQP-VK.texture.compressed_3D.astc_10x10_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000482, "dEQP-VK.texture.compressed_3D.astc_12x10_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000483, "dEQP-VK.texture.compressed_3D.astc_12x10_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000484, "dEQP-VK.texture.compressed_3D.astc_12x10_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000485, "dEQP-VK.texture.compressed_3D.astc_12x10_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000486, "dEQP-VK.texture.compressed_3D.astc_12x12_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000487, "dEQP-VK.texture.compressed_3D.astc_12x12_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000488, "dEQP-VK.texture.compressed_3D.astc_12x12_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000489, "dEQP-VK.texture.compressed_3D.astc_12x12_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000490, "dEQP-VK.texture.compressed_3D.bc1_rgb_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000491, "dEQP-VK.texture.compressed_3D.bc1_rgb_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000492, "dEQP-VK.texture.compressed_3D.bc1_rgb_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000493, "dEQP-VK.texture.compressed_3D.bc1_rgb_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000494, "dEQP-VK.texture.compressed_3D.bc1_rgba_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000495, "dEQP-VK.texture.compressed_3D.bc1_rgba_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000496, "dEQP-VK.texture.compressed_3D.bc1_rgba_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000497, "dEQP-VK.texture.compressed_3D.bc1_rgba_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000498, "dEQP-VK.texture.compressed_3D.bc2_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000499, "dEQP-VK.texture.compressed_3D.bc2_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000500, "dEQP-VK.texture.compressed_3D.bc2_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000501, "dEQP-VK.texture.compressed_3D.bc2_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000502, "dEQP-VK.texture.compressed_3D.bc3_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000503, "dEQP-VK.texture.compressed_3D.bc3_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000504, "dEQP-VK.texture.compressed_3D.bc3_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000505, "dEQP-VK.texture.compressed_3D.bc3_srgb_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000506, "dEQP-VK.texture.compressed_3D.bc4_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000507, "dEQP-VK.texture.compressed_3D.bc4_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000508, "dEQP-VK.texture.compressed_3D.bc4_snorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000509, "dEQP-VK.texture.compressed_3D.bc4_snorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000510, "dEQP-VK.texture.compressed_3D.bc5_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000511, "dEQP-VK.texture.compressed_3D.bc5_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000512, "dEQP-VK.texture.compressed_3D.bc5_snorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000513, "dEQP-VK.texture.compressed_3D.bc5_snorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000514, "dEQP-VK.texture.compressed_3D.bc6h_ufloat_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000515, "dEQP-VK.texture.compressed_3D.bc6h_ufloat_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000516, "dEQP-VK.texture.compressed_3D.bc6h_sfloat_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000517, "dEQP-VK.texture.compressed_3D.bc6h_sfloat_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000518, "dEQP-VK.texture.compressed_3D.bc7_unorm_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000519, "dEQP-VK.texture.compressed_3D.bc7_unorm_block_3d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000520, "dEQP-VK.texture.compressed_3D.bc7_srgb_block_3d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000521, "dEQP-VK.texture.compressed_3D.bc7_srgb_block_3d_npot_sparse.*");
