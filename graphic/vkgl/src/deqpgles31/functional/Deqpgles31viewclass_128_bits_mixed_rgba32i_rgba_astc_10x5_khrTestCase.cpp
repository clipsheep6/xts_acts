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

#define VkglTestCase_036619_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036619_2 "s_mixed.rgba32i_rgba_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036619, VkglTestCase_036619_1, VkglTestCase_036619_2);

#define VkglTestCase_036620_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036620_2 "s_mixed.rgba32i_rgba_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036620, VkglTestCase_036620_1, VkglTestCase_036620_2);

#define VkglTestCase_036621_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036621_2 "ts_mixed.rgba32i_rgba_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036621, VkglTestCase_036621_1, VkglTestCase_036621_2);

#define VkglTestCase_036622_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036622_2 "ixed.rgba32i_rgba_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036622, VkglTestCase_036622_1, VkglTestCase_036622_2);

#define VkglTestCase_036623_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036623_2 "s_mixed.rgba32i_rgba_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036623, VkglTestCase_036623_1, VkglTestCase_036623_2);

#define VkglTestCase_036624_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036624_2 "s_mixed.rgba32i_rgba_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036624, VkglTestCase_036624_1, VkglTestCase_036624_2);

#define VkglTestCase_036625_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036625_2 "ts_mixed.rgba32i_rgba_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036625, VkglTestCase_036625_1, VkglTestCase_036625_2);

#define VkglTestCase_036626_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036626_2 "ixed.rgba32i_rgba_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036626, VkglTestCase_036626_1, VkglTestCase_036626_2);

#define VkglTestCase_036627_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036627_2 "ts_mixed.rgba32i_rgba_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036627, VkglTestCase_036627_1, VkglTestCase_036627_2);

#define VkglTestCase_036628_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036628_2 "ts_mixed.rgba32i_rgba_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036628, VkglTestCase_036628_1, VkglTestCase_036628_2);

#define VkglTestCase_036629_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036629_2 "its_mixed.rgba32i_rgba_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036629, VkglTestCase_036629_1, VkglTestCase_036629_2);

#define VkglTestCase_036630_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036630_2 "mixed.rgba32i_rgba_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036630, VkglTestCase_036630_1, VkglTestCase_036630_2);

#define VkglTestCase_036631_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036631_2 "ixed.rgba32i_rgba_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036631, VkglTestCase_036631_1, VkglTestCase_036631_2);

#define VkglTestCase_036632_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036632_2 "ixed.rgba32i_rgba_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036632, VkglTestCase_036632_1, VkglTestCase_036632_2);

#define VkglTestCase_036633_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036633_2 "mixed.rgba32i_rgba_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036633, VkglTestCase_036633_1, VkglTestCase_036633_2);

#define VkglTestCase_036634_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036634_2 "d.rgba32i_rgba_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036634, VkglTestCase_036634_1, VkglTestCase_036634_2);

#define VkglTestCase_036635_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036635_2 "_mixed.rgba32i_rgba_astc_10x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036635, VkglTestCase_036635_1, VkglTestCase_036635_2);

#define VkglTestCase_036636_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036636_2 "_mixed.rgba32i_rgba_astc_10x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036636, VkglTestCase_036636_1, VkglTestCase_036636_2);

#define VkglTestCase_036637_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036637_2 "s_mixed.rgba32i_rgba_astc_10x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036637, VkglTestCase_036637_1, VkglTestCase_036637_2);

#define VkglTestCase_036638_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036638_2 "xed.rgba32i_rgba_astc_10x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036638, VkglTestCase_036638_1, VkglTestCase_036638_2);
