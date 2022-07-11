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

#define VkglTestCase_036419_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036419_2 "ts_mixed.rgba32i_rgba_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036419, VkglTestCase_036419_1, VkglTestCase_036419_2);

#define VkglTestCase_036420_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036420_2 "ts_mixed.rgba32i_rgba_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036420, VkglTestCase_036420_1, VkglTestCase_036420_2);

#define VkglTestCase_036421_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036421_2 "its_mixed.rgba32i_rgba_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036421, VkglTestCase_036421_1, VkglTestCase_036421_2);

#define VkglTestCase_036422_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036422_2 "mixed.rgba32i_rgba_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036422, VkglTestCase_036422_1, VkglTestCase_036422_2);

#define VkglTestCase_036423_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036423_2 "ts_mixed.rgba32i_rgba_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036423, VkglTestCase_036423_1, VkglTestCase_036423_2);

#define VkglTestCase_036424_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036424_2 "ts_mixed.rgba32i_rgba_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036424, VkglTestCase_036424_1, VkglTestCase_036424_2);

#define VkglTestCase_036425_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036425_2 "its_mixed.rgba32i_rgba_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036425, VkglTestCase_036425_1, VkglTestCase_036425_2);

#define VkglTestCase_036426_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036426_2 "mixed.rgba32i_rgba_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036426, VkglTestCase_036426_1, VkglTestCase_036426_2);

#define VkglTestCase_036427_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036427_2 "its_mixed.rgba32i_rgba_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036427, VkglTestCase_036427_1, VkglTestCase_036427_2);

#define VkglTestCase_036428_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036428_2 "its_mixed.rgba32i_rgba_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036428, VkglTestCase_036428_1, VkglTestCase_036428_2);

#define VkglTestCase_036429_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036429_2 "bits_mixed.rgba32i_rgba_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036429, VkglTestCase_036429_1, VkglTestCase_036429_2);

#define VkglTestCase_036430_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036430_2 "_mixed.rgba32i_rgba_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036430, VkglTestCase_036430_1, VkglTestCase_036430_2);

#define VkglTestCase_036431_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036431_2 "mixed.rgba32i_rgba_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036431, VkglTestCase_036431_1, VkglTestCase_036431_2);

#define VkglTestCase_036432_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036432_2 "mixed.rgba32i_rgba_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036432, VkglTestCase_036432_1, VkglTestCase_036432_2);

#define VkglTestCase_036433_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036433_2 "_mixed.rgba32i_rgba_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036433, VkglTestCase_036433_1, VkglTestCase_036433_2);

#define VkglTestCase_036434_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036434_2 "ed.rgba32i_rgba_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036434, VkglTestCase_036434_1, VkglTestCase_036434_2);

#define VkglTestCase_036435_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036435_2 "_mixed.rgba32i_rgba_astc_6x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036435, VkglTestCase_036435_1, VkglTestCase_036435_2);

#define VkglTestCase_036436_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036436_2 "_mixed.rgba32i_rgba_astc_6x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036436, VkglTestCase_036436_1, VkglTestCase_036436_2);

#define VkglTestCase_036437_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036437_2 "s_mixed.rgba32i_rgba_astc_6x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036437, VkglTestCase_036437_1, VkglTestCase_036437_2);

#define VkglTestCase_036438_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036438_2 "xed.rgba32i_rgba_astc_6x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036438, VkglTestCase_036438_1, VkglTestCase_036438_2);
