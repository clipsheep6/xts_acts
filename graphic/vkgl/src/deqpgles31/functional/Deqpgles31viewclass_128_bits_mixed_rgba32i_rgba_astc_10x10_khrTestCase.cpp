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

#define VkglTestCase_036739_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036739_2 "s_mixed.rgba32i_rgba_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036739, VkglTestCase_036739_1, VkglTestCase_036739_2);

#define VkglTestCase_036740_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036740_2 "s_mixed.rgba32i_rgba_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036740, VkglTestCase_036740_1, VkglTestCase_036740_2);

#define VkglTestCase_036741_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036741_2 "ts_mixed.rgba32i_rgba_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036741, VkglTestCase_036741_1, VkglTestCase_036741_2);

#define VkglTestCase_036742_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036742_2 "ixed.rgba32i_rgba_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036742, VkglTestCase_036742_1, VkglTestCase_036742_2);

#define VkglTestCase_036743_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036743_2 "s_mixed.rgba32i_rgba_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036743, VkglTestCase_036743_1, VkglTestCase_036743_2);

#define VkglTestCase_036744_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036744_2 "s_mixed.rgba32i_rgba_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036744, VkglTestCase_036744_1, VkglTestCase_036744_2);

#define VkglTestCase_036745_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036745_2 "ts_mixed.rgba32i_rgba_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036745, VkglTestCase_036745_1, VkglTestCase_036745_2);

#define VkglTestCase_036746_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036746_2 "ixed.rgba32i_rgba_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036746, VkglTestCase_036746_1, VkglTestCase_036746_2);

#define VkglTestCase_036747_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036747_2 "ts_mixed.rgba32i_rgba_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036747, VkglTestCase_036747_1, VkglTestCase_036747_2);

#define VkglTestCase_036748_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036748_2 "ts_mixed.rgba32i_rgba_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036748, VkglTestCase_036748_1, VkglTestCase_036748_2);

#define VkglTestCase_036749_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036749_2 "its_mixed.rgba32i_rgba_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036749, VkglTestCase_036749_1, VkglTestCase_036749_2);

#define VkglTestCase_036750_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036750_2 "mixed.rgba32i_rgba_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036750, VkglTestCase_036750_1, VkglTestCase_036750_2);

#define VkglTestCase_036751_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036751_2 "ixed.rgba32i_rgba_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036751, VkglTestCase_036751_1, VkglTestCase_036751_2);

#define VkglTestCase_036752_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036752_2 "ixed.rgba32i_rgba_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036752, VkglTestCase_036752_1, VkglTestCase_036752_2);

#define VkglTestCase_036753_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036753_2 "mixed.rgba32i_rgba_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036753, VkglTestCase_036753_1, VkglTestCase_036753_2);

#define VkglTestCase_036754_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036754_2 "d.rgba32i_rgba_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036754, VkglTestCase_036754_1, VkglTestCase_036754_2);

#define VkglTestCase_036755_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036755_2 "mixed.rgba32i_rgba_astc_10x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036755, VkglTestCase_036755_1, VkglTestCase_036755_2);

#define VkglTestCase_036756_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036756_2 "mixed.rgba32i_rgba_astc_10x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036756, VkglTestCase_036756_1, VkglTestCase_036756_2);

#define VkglTestCase_036757_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036757_2 "_mixed.rgba32i_rgba_astc_10x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036757, VkglTestCase_036757_1, VkglTestCase_036757_2);

#define VkglTestCase_036758_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036758_2 "ed.rgba32i_rgba_astc_10x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036758, VkglTestCase_036758_1, VkglTestCase_036758_2);
