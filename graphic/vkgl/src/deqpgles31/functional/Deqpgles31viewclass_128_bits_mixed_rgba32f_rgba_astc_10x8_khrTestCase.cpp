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

#define VkglTestCase_034443_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034443_2 "s_mixed.rgba32f_rgba_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034443, VkglTestCase_034443_1, VkglTestCase_034443_2);

#define VkglTestCase_034444_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034444_2 "s_mixed.rgba32f_rgba_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034444, VkglTestCase_034444_1, VkglTestCase_034444_2);

#define VkglTestCase_034445_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034445_2 "ts_mixed.rgba32f_rgba_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034445, VkglTestCase_034445_1, VkglTestCase_034445_2);

#define VkglTestCase_034446_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034446_2 "ixed.rgba32f_rgba_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034446, VkglTestCase_034446_1, VkglTestCase_034446_2);

#define VkglTestCase_034447_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034447_2 "s_mixed.rgba32f_rgba_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034447, VkglTestCase_034447_1, VkglTestCase_034447_2);

#define VkglTestCase_034448_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034448_2 "s_mixed.rgba32f_rgba_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034448, VkglTestCase_034448_1, VkglTestCase_034448_2);

#define VkglTestCase_034449_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034449_2 "ts_mixed.rgba32f_rgba_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034449, VkglTestCase_034449_1, VkglTestCase_034449_2);

#define VkglTestCase_034450_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034450_2 "ixed.rgba32f_rgba_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034450, VkglTestCase_034450_1, VkglTestCase_034450_2);

#define VkglTestCase_034451_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034451_2 "ts_mixed.rgba32f_rgba_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034451, VkglTestCase_034451_1, VkglTestCase_034451_2);

#define VkglTestCase_034452_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034452_2 "ts_mixed.rgba32f_rgba_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034452, VkglTestCase_034452_1, VkglTestCase_034452_2);

#define VkglTestCase_034453_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034453_2 "its_mixed.rgba32f_rgba_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034453, VkglTestCase_034453_1, VkglTestCase_034453_2);

#define VkglTestCase_034454_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034454_2 "mixed.rgba32f_rgba_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034454, VkglTestCase_034454_1, VkglTestCase_034454_2);

#define VkglTestCase_034455_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034455_2 "ixed.rgba32f_rgba_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034455, VkglTestCase_034455_1, VkglTestCase_034455_2);

#define VkglTestCase_034456_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034456_2 "ixed.rgba32f_rgba_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034456, VkglTestCase_034456_1, VkglTestCase_034456_2);

#define VkglTestCase_034457_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034457_2 "mixed.rgba32f_rgba_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034457, VkglTestCase_034457_1, VkglTestCase_034457_2);

#define VkglTestCase_034458_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034458_2 "d.rgba32f_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034458, VkglTestCase_034458_1, VkglTestCase_034458_2);
