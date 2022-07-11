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

#define VkglTestCase_036499_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036499_2 "ts_mixed.rgba32i_rgba_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036499, VkglTestCase_036499_1, VkglTestCase_036499_2);

#define VkglTestCase_036500_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036500_2 "ts_mixed.rgba32i_rgba_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036500, VkglTestCase_036500_1, VkglTestCase_036500_2);

#define VkglTestCase_036501_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036501_2 "its_mixed.rgba32i_rgba_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036501, VkglTestCase_036501_1, VkglTestCase_036501_2);

#define VkglTestCase_036502_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036502_2 "mixed.rgba32i_rgba_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036502, VkglTestCase_036502_1, VkglTestCase_036502_2);

#define VkglTestCase_036503_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036503_2 "ts_mixed.rgba32i_rgba_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036503, VkglTestCase_036503_1, VkglTestCase_036503_2);

#define VkglTestCase_036504_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036504_2 "ts_mixed.rgba32i_rgba_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036504, VkglTestCase_036504_1, VkglTestCase_036504_2);

#define VkglTestCase_036505_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036505_2 "its_mixed.rgba32i_rgba_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036505, VkglTestCase_036505_1, VkglTestCase_036505_2);

#define VkglTestCase_036506_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036506_2 "mixed.rgba32i_rgba_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036506, VkglTestCase_036506_1, VkglTestCase_036506_2);

#define VkglTestCase_036507_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036507_2 "its_mixed.rgba32i_rgba_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036507, VkglTestCase_036507_1, VkglTestCase_036507_2);

#define VkglTestCase_036508_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036508_2 "its_mixed.rgba32i_rgba_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036508, VkglTestCase_036508_1, VkglTestCase_036508_2);

#define VkglTestCase_036509_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036509_2 "bits_mixed.rgba32i_rgba_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036509, VkglTestCase_036509_1, VkglTestCase_036509_2);

#define VkglTestCase_036510_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036510_2 "_mixed.rgba32i_rgba_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036510, VkglTestCase_036510_1, VkglTestCase_036510_2);

#define VkglTestCase_036511_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036511_2 "mixed.rgba32i_rgba_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036511, VkglTestCase_036511_1, VkglTestCase_036511_2);

#define VkglTestCase_036512_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036512_2 "mixed.rgba32i_rgba_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036512, VkglTestCase_036512_1, VkglTestCase_036512_2);

#define VkglTestCase_036513_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036513_2 "_mixed.rgba32i_rgba_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036513, VkglTestCase_036513_1, VkglTestCase_036513_2);

#define VkglTestCase_036514_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036514_2 "ed.rgba32i_rgba_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036514, VkglTestCase_036514_1, VkglTestCase_036514_2);

#define VkglTestCase_036515_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036515_2 "_mixed.rgba32i_rgba_astc_8x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036515, VkglTestCase_036515_1, VkglTestCase_036515_2);

#define VkglTestCase_036516_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036516_2 "_mixed.rgba32i_rgba_astc_8x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036516, VkglTestCase_036516_1, VkglTestCase_036516_2);

#define VkglTestCase_036517_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036517_2 "s_mixed.rgba32i_rgba_astc_8x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036517, VkglTestCase_036517_1, VkglTestCase_036517_2);

#define VkglTestCase_036518_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036518_2 "xed.rgba32i_rgba_astc_8x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036518, VkglTestCase_036518_1, VkglTestCase_036518_2);
