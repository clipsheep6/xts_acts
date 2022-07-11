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

#define VkglTestCase_036579_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036579_2 "ts_mixed.rgba32i_rgba_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036579, VkglTestCase_036579_1, VkglTestCase_036579_2);

#define VkglTestCase_036580_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036580_2 "ts_mixed.rgba32i_rgba_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036580, VkglTestCase_036580_1, VkglTestCase_036580_2);

#define VkglTestCase_036581_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036581_2 "its_mixed.rgba32i_rgba_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036581, VkglTestCase_036581_1, VkglTestCase_036581_2);

#define VkglTestCase_036582_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036582_2 "mixed.rgba32i_rgba_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036582, VkglTestCase_036582_1, VkglTestCase_036582_2);

#define VkglTestCase_036583_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036583_2 "ts_mixed.rgba32i_rgba_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036583, VkglTestCase_036583_1, VkglTestCase_036583_2);

#define VkglTestCase_036584_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036584_2 "ts_mixed.rgba32i_rgba_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036584, VkglTestCase_036584_1, VkglTestCase_036584_2);

#define VkglTestCase_036585_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036585_2 "its_mixed.rgba32i_rgba_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036585, VkglTestCase_036585_1, VkglTestCase_036585_2);

#define VkglTestCase_036586_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036586_2 "mixed.rgba32i_rgba_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036586, VkglTestCase_036586_1, VkglTestCase_036586_2);

#define VkglTestCase_036587_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036587_2 "its_mixed.rgba32i_rgba_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036587, VkglTestCase_036587_1, VkglTestCase_036587_2);

#define VkglTestCase_036588_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036588_2 "its_mixed.rgba32i_rgba_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036588, VkglTestCase_036588_1, VkglTestCase_036588_2);

#define VkglTestCase_036589_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036589_2 "bits_mixed.rgba32i_rgba_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036589, VkglTestCase_036589_1, VkglTestCase_036589_2);

#define VkglTestCase_036590_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036590_2 "_mixed.rgba32i_rgba_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036590, VkglTestCase_036590_1, VkglTestCase_036590_2);

#define VkglTestCase_036591_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036591_2 "mixed.rgba32i_rgba_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036591, VkglTestCase_036591_1, VkglTestCase_036591_2);

#define VkglTestCase_036592_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036592_2 "mixed.rgba32i_rgba_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036592, VkglTestCase_036592_1, VkglTestCase_036592_2);

#define VkglTestCase_036593_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036593_2 "_mixed.rgba32i_rgba_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036593, VkglTestCase_036593_1, VkglTestCase_036593_2);

#define VkglTestCase_036594_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036594_2 "ed.rgba32i_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036594, VkglTestCase_036594_1, VkglTestCase_036594_2);

#define VkglTestCase_036595_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036595_2 "_mixed.rgba32i_rgba_astc_8x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036595, VkglTestCase_036595_1, VkglTestCase_036595_2);

#define VkglTestCase_036596_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036596_2 "_mixed.rgba32i_rgba_astc_8x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036596, VkglTestCase_036596_1, VkglTestCase_036596_2);

#define VkglTestCase_036597_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036597_2 "s_mixed.rgba32i_rgba_astc_8x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036597, VkglTestCase_036597_1, VkglTestCase_036597_2);

#define VkglTestCase_036598_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036598_2 "xed.rgba32i_rgba_astc_8x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036598, VkglTestCase_036598_1, VkglTestCase_036598_2);
