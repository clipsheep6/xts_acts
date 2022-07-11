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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001199_1 "KHR-GLES32.core.compress"
#define VkglTestCase_001199_2 "ed_format.format.r11_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001200_2 "format.format.signed_r11_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "KHR-GLES32.core.compress"
#define VkglTestCase_001201_2 "ed_format.format.rg11_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "KHR-GLES32.core.compressed_f"
#define VkglTestCase_001202_2 "ormat.format.signed_rg11_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "KHR-GLES32.core.compresse"
#define VkglTestCase_001203_2 "d_format.format.rgb8_etc2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "KHR-GLES32.core.compresse"
#define VkglTestCase_001204_2 "d_format.format.srgb8_etc2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "KHR-GLES32.core.compressed_format.f"
#define VkglTestCase_001205_2 "ormat.rgb8_punchthrough_alpha1_etc2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);

#define VkglTestCase_001206_1 "KHR-GLES32.core.compressed_format.f"
#define VkglTestCase_001206_2 "ormat.srgb8_punchthrough_alpha1_etc2"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001207_2 "format.format.rgba8_etc2_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001208_2 "at.format.srgb8_alpha8_etc2_eac"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);

#define VkglTestCase_001209_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001209_2 "format.format.rgba_astc_4x4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);

#define VkglTestCase_001210_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001210_2 "format.format.rgba_astc_5x4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001210, VkglTestCase_001210_1, VkglTestCase_001210_2);

#define VkglTestCase_001211_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001211_2 "format.format.rgba_astc_5x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001211, VkglTestCase_001211_1, VkglTestCase_001211_2);

#define VkglTestCase_001212_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001212_2 "format.format.rgba_astc_6x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001212, VkglTestCase_001212_1, VkglTestCase_001212_2);

#define VkglTestCase_001213_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001213_2 "format.format.rgba_astc_6x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001213, VkglTestCase_001213_1, VkglTestCase_001213_2);

#define VkglTestCase_001214_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001214_2 "format.format.rgba_astc_8x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001215_2 "format.format.rgba_astc_8x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001216_2 "format.format.rgba_astc_8x8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001217_2 "format.format.rgba_astc_10x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001218_2 "format.format.rgba_astc_10x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001219_2 "format.format.rgba_astc_10x8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "KHR-GLES32.core.compressed_f"
#define VkglTestCase_001220_2 "ormat.format.rgba_astc_10x10"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "KHR-GLES32.core.compressed_f"
#define VkglTestCase_001221_2 "ormat.format.rgba_astc_12x10"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "KHR-GLES32.core.compressed_f"
#define VkglTestCase_001222_2 "ormat.format.rgba_astc_12x12"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001223_2 "at.format.srgb8_alpha8_astc_4x4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001224_2 "at.format.srgb8_alpha8_astc_5x4"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001225_2 "at.format.srgb8_alpha8_astc_5x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);

#define VkglTestCase_001226_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001226_2 "at.format.srgb8_alpha8_astc_6x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001227_2 "at.format.srgb8_alpha8_astc_6x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001228_2 "at.format.srgb8_alpha8_astc_8x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001229_2 "at.format.srgb8_alpha8_astc_8x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001230_2 "at.format.srgb8_alpha8_astc_8x8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001231_2 "at.format.srgb8_alpha8_astc_10x5"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001232_2 "at.format.srgb8_alpha8_astc_10x6"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);

#define VkglTestCase_001233_1 "KHR-GLES32.core.compressed_form"
#define VkglTestCase_001233_2 "at.format.srgb8_alpha8_astc_10x8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "KHR-GLES32.core.compressed_forma"
#define VkglTestCase_001234_2 "t.format.srgb8_alpha8_astc_10x10"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "KHR-GLES32.core.compressed_forma"
#define VkglTestCase_001235_2 "t.format.srgb8_alpha8_astc_12x10"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "KHR-GLES32.core.compressed_forma"
#define VkglTestCase_001236_2 "t.format.srgb8_alpha8_astc_12x12"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);
