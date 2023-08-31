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

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000090, "dEQP-VK.texture.compressed.etc2_r8g8b8_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000091, "dEQP-VK.texture.compressed.etc2_r8g8b8_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000092, "dEQP-VK.texture.compressed.etc2_r8g8b8_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000093, "dEQP-VK.texture.compressed.etc2_r8g8b8_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000094, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000095, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000096, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000097, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000098, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000099, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000100, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000101, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000102, "dEQP-VK.texture.compressed.eac_r11_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000103, "dEQP-VK.texture.compressed.eac_r11_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000104, "dEQP-VK.texture.compressed.eac_r11_snorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000105, "dEQP-VK.texture.compressed.eac_r11_snorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000106, "dEQP-VK.texture.compressed.eac_r11g11_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000107, "dEQP-VK.texture.compressed.eac_r11g11_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000108, "dEQP-VK.texture.compressed.eac_r11g11_snorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000109, "dEQP-VK.texture.compressed.eac_r11g11_snorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000110, "dEQP-VK.texture.compressed.astc_4x4_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000111, "dEQP-VK.texture.compressed.astc_4x4_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000112, "dEQP-VK.texture.compressed.astc_4x4_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000113, "dEQP-VK.texture.compressed.astc_4x4_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000114, "dEQP-VK.texture.compressed.astc_5x4_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000115, "dEQP-VK.texture.compressed.astc_5x4_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000116, "dEQP-VK.texture.compressed.astc_5x4_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000117, "dEQP-VK.texture.compressed.astc_5x4_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000118, "dEQP-VK.texture.compressed.astc_5x5_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000119, "dEQP-VK.texture.compressed.astc_5x5_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000120, "dEQP-VK.texture.compressed.astc_5x5_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000121, "dEQP-VK.texture.compressed.astc_5x5_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000122, "dEQP-VK.texture.compressed.astc_6x5_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000123, "dEQP-VK.texture.compressed.astc_6x5_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000124, "dEQP-VK.texture.compressed.astc_6x5_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000125, "dEQP-VK.texture.compressed.astc_6x5_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000126, "dEQP-VK.texture.compressed.astc_6x6_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000127, "dEQP-VK.texture.compressed.astc_6x6_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000128, "dEQP-VK.texture.compressed.astc_6x6_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000129, "dEQP-VK.texture.compressed.astc_6x6_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000130, "dEQP-VK.texture.compressed.astc_8x5_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000131, "dEQP-VK.texture.compressed.astc_8x5_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000132, "dEQP-VK.texture.compressed.astc_8x5_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000133, "dEQP-VK.texture.compressed.astc_8x5_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000134, "dEQP-VK.texture.compressed.astc_8x6_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000135, "dEQP-VK.texture.compressed.astc_8x6_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000136, "dEQP-VK.texture.compressed.astc_8x6_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000137, "dEQP-VK.texture.compressed.astc_8x6_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000138, "dEQP-VK.texture.compressed.astc_8x8_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000139, "dEQP-VK.texture.compressed.astc_8x8_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000140, "dEQP-VK.texture.compressed.astc_8x8_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000141, "dEQP-VK.texture.compressed.astc_8x8_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000142, "dEQP-VK.texture.compressed.astc_10x5_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000143, "dEQP-VK.texture.compressed.astc_10x5_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000144, "dEQP-VK.texture.compressed.astc_10x5_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000145, "dEQP-VK.texture.compressed.astc_10x5_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000146, "dEQP-VK.texture.compressed.astc_10x6_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000147, "dEQP-VK.texture.compressed.astc_10x6_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000148, "dEQP-VK.texture.compressed.astc_10x6_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000149, "dEQP-VK.texture.compressed.astc_10x6_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000150, "dEQP-VK.texture.compressed.astc_10x8_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000151, "dEQP-VK.texture.compressed.astc_10x8_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000152, "dEQP-VK.texture.compressed.astc_10x8_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000153, "dEQP-VK.texture.compressed.astc_10x8_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000154, "dEQP-VK.texture.compressed.astc_10x10_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000155, "dEQP-VK.texture.compressed.astc_10x10_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000156, "dEQP-VK.texture.compressed.astc_10x10_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000157, "dEQP-VK.texture.compressed.astc_10x10_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000158, "dEQP-VK.texture.compressed.astc_12x10_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000159, "dEQP-VK.texture.compressed.astc_12x10_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000160, "dEQP-VK.texture.compressed.astc_12x10_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000161, "dEQP-VK.texture.compressed.astc_12x10_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000162, "dEQP-VK.texture.compressed.astc_12x12_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000163, "dEQP-VK.texture.compressed.astc_12x12_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000164, "dEQP-VK.texture.compressed.astc_12x12_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000165, "dEQP-VK.texture.compressed.astc_12x12_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000166, "dEQP-VK.texture.compressed.bc1_rgb_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000167, "dEQP-VK.texture.compressed.bc1_rgb_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000168, "dEQP-VK.texture.compressed.bc1_rgb_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000169, "dEQP-VK.texture.compressed.bc1_rgb_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000170, "dEQP-VK.texture.compressed.bc1_rgba_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000171, "dEQP-VK.texture.compressed.bc1_rgba_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000172, "dEQP-VK.texture.compressed.bc1_rgba_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000173, "dEQP-VK.texture.compressed.bc1_rgba_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000174, "dEQP-VK.texture.compressed.bc2_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000175, "dEQP-VK.texture.compressed.bc2_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000176, "dEQP-VK.texture.compressed.bc2_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000177, "dEQP-VK.texture.compressed.bc2_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000178, "dEQP-VK.texture.compressed.bc3_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000179, "dEQP-VK.texture.compressed.bc3_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000180, "dEQP-VK.texture.compressed.bc3_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000181, "dEQP-VK.texture.compressed.bc3_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000182, "dEQP-VK.texture.compressed.bc4_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000183, "dEQP-VK.texture.compressed.bc4_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000184, "dEQP-VK.texture.compressed.bc4_snorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000185, "dEQP-VK.texture.compressed.bc4_snorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000186, "dEQP-VK.texture.compressed.bc5_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000187, "dEQP-VK.texture.compressed.bc5_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000188, "dEQP-VK.texture.compressed.bc5_snorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000189, "dEQP-VK.texture.compressed.bc5_snorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000190, "dEQP-VK.texture.compressed.bc6h_ufloat_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000191, "dEQP-VK.texture.compressed.bc6h_ufloat_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000192, "dEQP-VK.texture.compressed.bc6h_sfloat_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000193, "dEQP-VK.texture.compressed.bc6h_sfloat_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000194, "dEQP-VK.texture.compressed.bc7_unorm_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000195, "dEQP-VK.texture.compressed.bc7_unorm_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000196, "dEQP-VK.texture.compressed.bc7_srgb_block_2d_pot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000197, "dEQP-VK.texture.compressed.bc7_srgb_block_2d_pot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000198, "dEQP-VK.texture.compressed.etc2_r8g8b8_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000199, "dEQP-VK.texture.compressed.etc2_r8g8b8_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000200, "dEQP-VK.texture.compressed.etc2_r8g8b8_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000201, "dEQP-VK.texture.compressed.etc2_r8g8b8_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000202, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000203, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000204, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000205, "dEQP-VK.texture.compressed.etc2_r8g8b8a1_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000206, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000207, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000208, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000209, "dEQP-VK.texture.compressed.etc2_r8g8b8a8_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000210, "dEQP-VK.texture.compressed.eac_r11_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000211, "dEQP-VK.texture.compressed.eac_r11_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000212, "dEQP-VK.texture.compressed.eac_r11_snorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000213, "dEQP-VK.texture.compressed.eac_r11_snorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000214, "dEQP-VK.texture.compressed.eac_r11g11_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000215, "dEQP-VK.texture.compressed.eac_r11g11_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000216, "dEQP-VK.texture.compressed.eac_r11g11_snorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000217, "dEQP-VK.texture.compressed.eac_r11g11_snorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000218, "dEQP-VK.texture.compressed.astc_4x4_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000219, "dEQP-VK.texture.compressed.astc_4x4_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000220, "dEQP-VK.texture.compressed.astc_4x4_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000221, "dEQP-VK.texture.compressed.astc_4x4_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000222, "dEQP-VK.texture.compressed.astc_5x4_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000223, "dEQP-VK.texture.compressed.astc_5x4_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000224, "dEQP-VK.texture.compressed.astc_5x4_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000225, "dEQP-VK.texture.compressed.astc_5x4_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000226, "dEQP-VK.texture.compressed.astc_5x5_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000227, "dEQP-VK.texture.compressed.astc_5x5_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000228, "dEQP-VK.texture.compressed.astc_5x5_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000229, "dEQP-VK.texture.compressed.astc_5x5_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000230, "dEQP-VK.texture.compressed.astc_6x5_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000231, "dEQP-VK.texture.compressed.astc_6x5_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000232, "dEQP-VK.texture.compressed.astc_6x5_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000233, "dEQP-VK.texture.compressed.astc_6x5_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000234, "dEQP-VK.texture.compressed.astc_6x6_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000235, "dEQP-VK.texture.compressed.astc_6x6_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000236, "dEQP-VK.texture.compressed.astc_6x6_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000237, "dEQP-VK.texture.compressed.astc_6x6_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000238, "dEQP-VK.texture.compressed.astc_8x5_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000239, "dEQP-VK.texture.compressed.astc_8x5_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000240, "dEQP-VK.texture.compressed.astc_8x5_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000241, "dEQP-VK.texture.compressed.astc_8x5_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000242, "dEQP-VK.texture.compressed.astc_8x6_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000243, "dEQP-VK.texture.compressed.astc_8x6_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000244, "dEQP-VK.texture.compressed.astc_8x6_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000245, "dEQP-VK.texture.compressed.astc_8x6_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000246, "dEQP-VK.texture.compressed.astc_8x8_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000247, "dEQP-VK.texture.compressed.astc_8x8_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000248, "dEQP-VK.texture.compressed.astc_8x8_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000249, "dEQP-VK.texture.compressed.astc_8x8_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000250, "dEQP-VK.texture.compressed.astc_10x5_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000251, "dEQP-VK.texture.compressed.astc_10x5_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000252, "dEQP-VK.texture.compressed.astc_10x5_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000253, "dEQP-VK.texture.compressed.astc_10x5_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000254, "dEQP-VK.texture.compressed.astc_10x6_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000255, "dEQP-VK.texture.compressed.astc_10x6_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000256, "dEQP-VK.texture.compressed.astc_10x6_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000257, "dEQP-VK.texture.compressed.astc_10x6_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000258, "dEQP-VK.texture.compressed.astc_10x8_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000259, "dEQP-VK.texture.compressed.astc_10x8_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000260, "dEQP-VK.texture.compressed.astc_10x8_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000261, "dEQP-VK.texture.compressed.astc_10x8_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000262, "dEQP-VK.texture.compressed.astc_10x10_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000263, "dEQP-VK.texture.compressed.astc_10x10_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000264, "dEQP-VK.texture.compressed.astc_10x10_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000265, "dEQP-VK.texture.compressed.astc_10x10_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000266, "dEQP-VK.texture.compressed.astc_12x10_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000267, "dEQP-VK.texture.compressed.astc_12x10_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000268, "dEQP-VK.texture.compressed.astc_12x10_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000269, "dEQP-VK.texture.compressed.astc_12x10_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000270, "dEQP-VK.texture.compressed.astc_12x12_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000271, "dEQP-VK.texture.compressed.astc_12x12_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000272, "dEQP-VK.texture.compressed.astc_12x12_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000273, "dEQP-VK.texture.compressed.astc_12x12_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000274, "dEQP-VK.texture.compressed.bc1_rgb_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000275, "dEQP-VK.texture.compressed.bc1_rgb_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000276, "dEQP-VK.texture.compressed.bc1_rgb_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000277, "dEQP-VK.texture.compressed.bc1_rgb_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000278, "dEQP-VK.texture.compressed.bc1_rgba_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000279, "dEQP-VK.texture.compressed.bc1_rgba_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000280, "dEQP-VK.texture.compressed.bc1_rgba_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000281, "dEQP-VK.texture.compressed.bc1_rgba_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000282, "dEQP-VK.texture.compressed.bc2_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000283, "dEQP-VK.texture.compressed.bc2_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000284, "dEQP-VK.texture.compressed.bc2_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000285, "dEQP-VK.texture.compressed.bc2_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000286, "dEQP-VK.texture.compressed.bc3_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000287, "dEQP-VK.texture.compressed.bc3_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000288, "dEQP-VK.texture.compressed.bc3_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000289, "dEQP-VK.texture.compressed.bc3_srgb_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000290, "dEQP-VK.texture.compressed.bc4_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000291, "dEQP-VK.texture.compressed.bc4_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000292, "dEQP-VK.texture.compressed.bc4_snorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000293, "dEQP-VK.texture.compressed.bc4_snorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000294, "dEQP-VK.texture.compressed.bc5_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000295, "dEQP-VK.texture.compressed.bc5_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000296, "dEQP-VK.texture.compressed.bc5_snorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000297, "dEQP-VK.texture.compressed.bc5_snorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000298, "dEQP-VK.texture.compressed.bc6h_ufloat_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000299, "dEQP-VK.texture.compressed.bc6h_ufloat_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000300, "dEQP-VK.texture.compressed.bc6h_sfloat_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000301, "dEQP-VK.texture.compressed.bc6h_sfloat_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000302, "dEQP-VK.texture.compressed.bc7_unorm_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000303, "dEQP-VK.texture.compressed.bc7_unorm_block_2d_npot_sparse.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000304, "dEQP-VK.texture.compressed.bc7_srgb_block_2d_npot.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000305, "dEQP-VK.texture.compressed.bc7_srgb_block_2d_npot_sparse.*");
