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

#define VkglTestCase_036459_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036459_2 "ts_mixed.rgba32i_rgba_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036459, VkglTestCase_036459_1, VkglTestCase_036459_2);

#define VkglTestCase_036460_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036460_2 "ts_mixed.rgba32i_rgba_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036460, VkglTestCase_036460_1, VkglTestCase_036460_2);

#define VkglTestCase_036461_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036461_2 "its_mixed.rgba32i_rgba_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036461, VkglTestCase_036461_1, VkglTestCase_036461_2);

#define VkglTestCase_036462_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036462_2 "mixed.rgba32i_rgba_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036462, VkglTestCase_036462_1, VkglTestCase_036462_2);

#define VkglTestCase_036463_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036463_2 "ts_mixed.rgba32i_rgba_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036463, VkglTestCase_036463_1, VkglTestCase_036463_2);

#define VkglTestCase_036464_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036464_2 "ts_mixed.rgba32i_rgba_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036464, VkglTestCase_036464_1, VkglTestCase_036464_2);

#define VkglTestCase_036465_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036465_2 "its_mixed.rgba32i_rgba_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036465, VkglTestCase_036465_1, VkglTestCase_036465_2);

#define VkglTestCase_036466_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036466_2 "mixed.rgba32i_rgba_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036466, VkglTestCase_036466_1, VkglTestCase_036466_2);

#define VkglTestCase_036467_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036467_2 "its_mixed.rgba32i_rgba_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036467, VkglTestCase_036467_1, VkglTestCase_036467_2);

#define VkglTestCase_036468_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036468_2 "its_mixed.rgba32i_rgba_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036468, VkglTestCase_036468_1, VkglTestCase_036468_2);

#define VkglTestCase_036469_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036469_2 "bits_mixed.rgba32i_rgba_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036469, VkglTestCase_036469_1, VkglTestCase_036469_2);

#define VkglTestCase_036470_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036470_2 "_mixed.rgba32i_rgba_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036470, VkglTestCase_036470_1, VkglTestCase_036470_2);

#define VkglTestCase_036471_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036471_2 "mixed.rgba32i_rgba_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036471, VkglTestCase_036471_1, VkglTestCase_036471_2);

#define VkglTestCase_036472_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036472_2 "mixed.rgba32i_rgba_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036472, VkglTestCase_036472_1, VkglTestCase_036472_2);

#define VkglTestCase_036473_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036473_2 "_mixed.rgba32i_rgba_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036473, VkglTestCase_036473_1, VkglTestCase_036473_2);

#define VkglTestCase_036474_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036474_2 "ed.rgba32i_rgba_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036474, VkglTestCase_036474_1, VkglTestCase_036474_2);

#define VkglTestCase_036475_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036475_2 "_mixed.rgba32i_rgba_astc_6x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036475, VkglTestCase_036475_1, VkglTestCase_036475_2);

#define VkglTestCase_036476_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036476_2 "_mixed.rgba32i_rgba_astc_6x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036476, VkglTestCase_036476_1, VkglTestCase_036476_2);

#define VkglTestCase_036477_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036477_2 "s_mixed.rgba32i_rgba_astc_6x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036477, VkglTestCase_036477_1, VkglTestCase_036477_2);

#define VkglTestCase_036478_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036478_2 "xed.rgba32i_rgba_astc_6x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036478, VkglTestCase_036478_1, VkglTestCase_036478_2);
