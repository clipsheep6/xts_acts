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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036299_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036299_2 "ts_mixed.rgba32i_rgba_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036299, VkglTestCase_036299_1, VkglTestCase_036299_2);

#define VkglTestCase_036300_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036300_2 "ts_mixed.rgba32i_rgba_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036300, VkglTestCase_036300_1, VkglTestCase_036300_2);

#define VkglTestCase_036301_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036301_2 "its_mixed.rgba32i_rgba_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036301, VkglTestCase_036301_1, VkglTestCase_036301_2);

#define VkglTestCase_036302_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036302_2 "mixed.rgba32i_rgba_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036302, VkglTestCase_036302_1, VkglTestCase_036302_2);

#define VkglTestCase_036303_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036303_2 "ts_mixed.rgba32i_rgba_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036303, VkglTestCase_036303_1, VkglTestCase_036303_2);

#define VkglTestCase_036304_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036304_2 "ts_mixed.rgba32i_rgba_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036304, VkglTestCase_036304_1, VkglTestCase_036304_2);

#define VkglTestCase_036305_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036305_2 "its_mixed.rgba32i_rgba_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036305, VkglTestCase_036305_1, VkglTestCase_036305_2);

#define VkglTestCase_036306_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036306_2 "mixed.rgba32i_rgba_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036306, VkglTestCase_036306_1, VkglTestCase_036306_2);

#define VkglTestCase_036307_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036307_2 "its_mixed.rgba32i_rgba_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036307, VkglTestCase_036307_1, VkglTestCase_036307_2);

#define VkglTestCase_036308_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036308_2 "its_mixed.rgba32i_rgba_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036308, VkglTestCase_036308_1, VkglTestCase_036308_2);

#define VkglTestCase_036309_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036309_2 "bits_mixed.rgba32i_rgba_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036309, VkglTestCase_036309_1, VkglTestCase_036309_2);

#define VkglTestCase_036310_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036310_2 "_mixed.rgba32i_rgba_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036310, VkglTestCase_036310_1, VkglTestCase_036310_2);

#define VkglTestCase_036311_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036311_2 "mixed.rgba32i_rgba_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036311, VkglTestCase_036311_1, VkglTestCase_036311_2);

#define VkglTestCase_036312_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036312_2 "mixed.rgba32i_rgba_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036312, VkglTestCase_036312_1, VkglTestCase_036312_2);

#define VkglTestCase_036313_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036313_2 "_mixed.rgba32i_rgba_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036313, VkglTestCase_036313_1, VkglTestCase_036313_2);

#define VkglTestCase_036314_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036314_2 "ed.rgba32i_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036314, VkglTestCase_036314_1, VkglTestCase_036314_2);

#define VkglTestCase_036315_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036315_2 "_mixed.rgba32i_rgba_astc_4x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036315, VkglTestCase_036315_1, VkglTestCase_036315_2);

#define VkglTestCase_036316_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036316_2 "_mixed.rgba32i_rgba_astc_4x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036316, VkglTestCase_036316_1, VkglTestCase_036316_2);

#define VkglTestCase_036317_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036317_2 "s_mixed.rgba32i_rgba_astc_4x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036317, VkglTestCase_036317_1, VkglTestCase_036317_2);

#define VkglTestCase_036318_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036318_2 "xed.rgba32i_rgba_astc_4x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036318, VkglTestCase_036318_1, VkglTestCase_036318_2);
