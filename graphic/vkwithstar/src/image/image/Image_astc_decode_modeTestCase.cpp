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

static SHRINK_HWTEST_F(ActsImage0007TS, TC012229, "dEQP-VK.image.astc_decode_mode.4x4_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012230, "dEQP-VK.image.astc_decode_mode.4x4_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012231, "dEQP-VK.image.astc_decode_mode.4x4_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012232, "dEQP-VK.image.astc_decode_mode.4x4_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012233, "dEQP-VK.image.astc_decode_mode.4x4_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012234, "dEQP-VK.image.astc_decode_mode.4x4_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012235, "dEQP-VK.image.astc_decode_mode.5x4_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012236, "dEQP-VK.image.astc_decode_mode.5x4_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012237, "dEQP-VK.image.astc_decode_mode.5x4_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012238, "dEQP-VK.image.astc_decode_mode.5x4_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012239, "dEQP-VK.image.astc_decode_mode.5x4_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012240, "dEQP-VK.image.astc_decode_mode.5x4_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012241, "dEQP-VK.image.astc_decode_mode.5x5_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012242, "dEQP-VK.image.astc_decode_mode.5x5_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012243, "dEQP-VK.image.astc_decode_mode.5x5_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012244, "dEQP-VK.image.astc_decode_mode.5x5_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012245, "dEQP-VK.image.astc_decode_mode.5x5_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012246, "dEQP-VK.image.astc_decode_mode.5x5_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012247, "dEQP-VK.image.astc_decode_mode.6x5_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012248, "dEQP-VK.image.astc_decode_mode.6x5_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012249, "dEQP-VK.image.astc_decode_mode.6x5_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012250, "dEQP-VK.image.astc_decode_mode.6x5_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012251, "dEQP-VK.image.astc_decode_mode.6x5_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012252, "dEQP-VK.image.astc_decode_mode.6x5_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012253, "dEQP-VK.image.astc_decode_mode.6x6_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012254, "dEQP-VK.image.astc_decode_mode.6x6_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012255, "dEQP-VK.image.astc_decode_mode.6x6_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012256, "dEQP-VK.image.astc_decode_mode.6x6_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012257, "dEQP-VK.image.astc_decode_mode.6x6_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012258, "dEQP-VK.image.astc_decode_mode.6x6_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012259, "dEQP-VK.image.astc_decode_mode.8x5_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012260, "dEQP-VK.image.astc_decode_mode.8x5_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012261, "dEQP-VK.image.astc_decode_mode.8x5_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012262, "dEQP-VK.image.astc_decode_mode.8x5_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012263, "dEQP-VK.image.astc_decode_mode.8x5_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012264, "dEQP-VK.image.astc_decode_mode.8x5_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012265, "dEQP-VK.image.astc_decode_mode.8x6_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012266, "dEQP-VK.image.astc_decode_mode.8x6_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012267, "dEQP-VK.image.astc_decode_mode.8x6_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012268, "dEQP-VK.image.astc_decode_mode.8x6_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012269, "dEQP-VK.image.astc_decode_mode.8x6_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012270, "dEQP-VK.image.astc_decode_mode.8x6_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012271, "dEQP-VK.image.astc_decode_mode.8x8_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012272, "dEQP-VK.image.astc_decode_mode.8x8_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012273, "dEQP-VK.image.astc_decode_mode.8x8_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012274, "dEQP-VK.image.astc_decode_mode.8x8_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012275, "dEQP-VK.image.astc_decode_mode.8x8_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012276, "dEQP-VK.image.astc_decode_mode.8x8_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012277, "dEQP-VK.image.astc_decode_mode.10x5_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012278, "dEQP-VK.image.astc_decode_mode.10x5_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012279, "dEQP-VK.image.astc_decode_mode.10x5_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012280, "dEQP-VK.image.astc_decode_mode.10x5_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012281, "dEQP-VK.image.astc_decode_mode.10x5_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012282, "dEQP-VK.image.astc_decode_mode.10x5_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012283, "dEQP-VK.image.astc_decode_mode.10x6_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012284, "dEQP-VK.image.astc_decode_mode.10x6_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012285, "dEQP-VK.image.astc_decode_mode.10x6_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012286, "dEQP-VK.image.astc_decode_mode.10x6_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012287, "dEQP-VK.image.astc_decode_mode.10x6_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012288, "dEQP-VK.image.astc_decode_mode.10x6_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012289, "dEQP-VK.image.astc_decode_mode.10x8_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012290, "dEQP-VK.image.astc_decode_mode.10x8_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012291, "dEQP-VK.image.astc_decode_mode.10x8_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012292, "dEQP-VK.image.astc_decode_mode.10x8_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012293, "dEQP-VK.image.astc_decode_mode.10x8_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012294, "dEQP-VK.image.astc_decode_mode.10x8_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012295, "dEQP-VK.image.astc_decode_mode.10x10_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012296, "dEQP-VK.image.astc_decode_mode.10x10_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012297, "dEQP-VK.image.astc_decode_mode.10x10_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012298, "dEQP-VK.image.astc_decode_mode.10x10_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012299, "dEQP-VK.image.astc_decode_mode.10x10_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012300, "dEQP-VK.image.astc_decode_mode.10x10_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012301, "dEQP-VK.image.astc_decode_mode.12x10_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012302, "dEQP-VK.image.astc_decode_mode.12x10_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012303, "dEQP-VK.image.astc_decode_mode.12x10_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012304, "dEQP-VK.image.astc_decode_mode.12x10_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012305, "dEQP-VK.image.astc_decode_mode.12x10_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012306, "dEQP-VK.image.astc_decode_mode.12x10_srgb_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012307, "dEQP-VK.image.astc_decode_mode.12x12_unorm_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012308, "dEQP-VK.image.astc_decode_mode.12x12_unorm_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012309, "dEQP-VK.image.astc_decode_mode.12x12_unorm_to_e5b9g9r9_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012310, "dEQP-VK.image.astc_decode_mode.12x12_srgb_to_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012311, "dEQP-VK.image.astc_decode_mode.12x12_srgb_to_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012312, "dEQP-VK.image.astc_decode_mode.12x12_srgb_to_e5b9g9r9_ufloat_pack32.*");
