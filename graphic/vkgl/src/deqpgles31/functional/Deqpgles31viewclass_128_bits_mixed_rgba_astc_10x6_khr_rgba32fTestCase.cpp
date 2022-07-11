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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034427_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034427_2 "s_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034427, VkglTestCase_034427_1, VkglTestCase_034427_2);

#define VkglTestCase_034428_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034428_2 "s_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034428, VkglTestCase_034428_1, VkglTestCase_034428_2);

#define VkglTestCase_034429_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034429_2 "ts_mixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034429, VkglTestCase_034429_1, VkglTestCase_034429_2);

#define VkglTestCase_034430_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034430_2 "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034430, VkglTestCase_034430_1, VkglTestCase_034430_2);

#define VkglTestCase_034431_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034431_2 "s_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034431, VkglTestCase_034431_1, VkglTestCase_034431_2);

#define VkglTestCase_034432_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034432_2 "s_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034432, VkglTestCase_034432_1, VkglTestCase_034432_2);

#define VkglTestCase_034433_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034433_2 "ts_mixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034433, VkglTestCase_034433_1, VkglTestCase_034433_2);

#define VkglTestCase_034434_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034434_2 "ixed.rgba_astc_10x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034434, VkglTestCase_034434_1, VkglTestCase_034434_2);

#define VkglTestCase_034435_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034435_2 "ts_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034435, VkglTestCase_034435_1, VkglTestCase_034435_2);

#define VkglTestCase_034436_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034436_2 "ts_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034436, VkglTestCase_034436_1, VkglTestCase_034436_2);

#define VkglTestCase_034437_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034437_2 "its_mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034437, VkglTestCase_034437_1, VkglTestCase_034437_2);

#define VkglTestCase_034438_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034438_2 "mixed.rgba_astc_10x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034438, VkglTestCase_034438_1, VkglTestCase_034438_2);

#define VkglTestCase_034439_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034439_2 "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034439, VkglTestCase_034439_1, VkglTestCase_034439_2);

#define VkglTestCase_034440_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034440_2 "ixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034440, VkglTestCase_034440_1, VkglTestCase_034440_2);

#define VkglTestCase_034441_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034441_2 "mixed.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034441, VkglTestCase_034441_1, VkglTestCase_034441_2);

#define VkglTestCase_034442_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034442_2 "d.rgba_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034442, VkglTestCase_034442_1, VkglTestCase_034442_2);
