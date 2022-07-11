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

#define VkglTestCase_036539_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036539_2 "ts_mixed.rgba32i_rgba_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036539, VkglTestCase_036539_1, VkglTestCase_036539_2);

#define VkglTestCase_036540_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036540_2 "ts_mixed.rgba32i_rgba_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036540, VkglTestCase_036540_1, VkglTestCase_036540_2);

#define VkglTestCase_036541_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036541_2 "its_mixed.rgba32i_rgba_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036541, VkglTestCase_036541_1, VkglTestCase_036541_2);

#define VkglTestCase_036542_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036542_2 "mixed.rgba32i_rgba_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036542, VkglTestCase_036542_1, VkglTestCase_036542_2);

#define VkglTestCase_036543_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036543_2 "ts_mixed.rgba32i_rgba_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036543, VkglTestCase_036543_1, VkglTestCase_036543_2);

#define VkglTestCase_036544_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036544_2 "ts_mixed.rgba32i_rgba_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036544, VkglTestCase_036544_1, VkglTestCase_036544_2);

#define VkglTestCase_036545_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036545_2 "its_mixed.rgba32i_rgba_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036545, VkglTestCase_036545_1, VkglTestCase_036545_2);

#define VkglTestCase_036546_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036546_2 "mixed.rgba32i_rgba_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036546, VkglTestCase_036546_1, VkglTestCase_036546_2);

#define VkglTestCase_036547_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036547_2 "its_mixed.rgba32i_rgba_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036547, VkglTestCase_036547_1, VkglTestCase_036547_2);

#define VkglTestCase_036548_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036548_2 "its_mixed.rgba32i_rgba_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036548, VkglTestCase_036548_1, VkglTestCase_036548_2);

#define VkglTestCase_036549_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036549_2 "bits_mixed.rgba32i_rgba_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036549, VkglTestCase_036549_1, VkglTestCase_036549_2);

#define VkglTestCase_036550_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036550_2 "_mixed.rgba32i_rgba_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036550, VkglTestCase_036550_1, VkglTestCase_036550_2);

#define VkglTestCase_036551_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036551_2 "mixed.rgba32i_rgba_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036551, VkglTestCase_036551_1, VkglTestCase_036551_2);

#define VkglTestCase_036552_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036552_2 "mixed.rgba32i_rgba_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036552, VkglTestCase_036552_1, VkglTestCase_036552_2);

#define VkglTestCase_036553_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036553_2 "_mixed.rgba32i_rgba_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036553, VkglTestCase_036553_1, VkglTestCase_036553_2);

#define VkglTestCase_036554_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036554_2 "ed.rgba32i_rgba_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036554, VkglTestCase_036554_1, VkglTestCase_036554_2);

#define VkglTestCase_036555_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036555_2 "_mixed.rgba32i_rgba_astc_8x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036555, VkglTestCase_036555_1, VkglTestCase_036555_2);

#define VkglTestCase_036556_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036556_2 "_mixed.rgba32i_rgba_astc_8x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036556, VkglTestCase_036556_1, VkglTestCase_036556_2);

#define VkglTestCase_036557_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036557_2 "s_mixed.rgba32i_rgba_astc_8x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036557, VkglTestCase_036557_1, VkglTestCase_036557_2);

#define VkglTestCase_036558_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036558_2 "xed.rgba32i_rgba_astc_8x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036558, VkglTestCase_036558_1, VkglTestCase_036558_2);
