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

#define VkglTestCase_034411_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034411_2 "s_mixed.rgba32f_rgba_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034411, VkglTestCase_034411_1, VkglTestCase_034411_2);

#define VkglTestCase_034412_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034412_2 "s_mixed.rgba32f_rgba_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034412, VkglTestCase_034412_1, VkglTestCase_034412_2);

#define VkglTestCase_034413_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034413_2 "ts_mixed.rgba32f_rgba_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034413, VkglTestCase_034413_1, VkglTestCase_034413_2);

#define VkglTestCase_034414_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034414_2 "ixed.rgba32f_rgba_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034414, VkglTestCase_034414_1, VkglTestCase_034414_2);

#define VkglTestCase_034415_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034415_2 "s_mixed.rgba32f_rgba_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034415, VkglTestCase_034415_1, VkglTestCase_034415_2);

#define VkglTestCase_034416_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034416_2 "s_mixed.rgba32f_rgba_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034416, VkglTestCase_034416_1, VkglTestCase_034416_2);

#define VkglTestCase_034417_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034417_2 "ts_mixed.rgba32f_rgba_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034417, VkglTestCase_034417_1, VkglTestCase_034417_2);

#define VkglTestCase_034418_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034418_2 "ixed.rgba32f_rgba_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034418, VkglTestCase_034418_1, VkglTestCase_034418_2);

#define VkglTestCase_034419_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034419_2 "ts_mixed.rgba32f_rgba_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034419, VkglTestCase_034419_1, VkglTestCase_034419_2);

#define VkglTestCase_034420_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034420_2 "ts_mixed.rgba32f_rgba_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034420, VkglTestCase_034420_1, VkglTestCase_034420_2);

#define VkglTestCase_034421_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034421_2 "its_mixed.rgba32f_rgba_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034421, VkglTestCase_034421_1, VkglTestCase_034421_2);

#define VkglTestCase_034422_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034422_2 "mixed.rgba32f_rgba_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034422, VkglTestCase_034422_1, VkglTestCase_034422_2);

#define VkglTestCase_034423_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034423_2 "ixed.rgba32f_rgba_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034423, VkglTestCase_034423_1, VkglTestCase_034423_2);

#define VkglTestCase_034424_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034424_2 "ixed.rgba32f_rgba_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034424, VkglTestCase_034424_1, VkglTestCase_034424_2);

#define VkglTestCase_034425_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034425_2 "mixed.rgba32f_rgba_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034425, VkglTestCase_034425_1, VkglTestCase_034425_2);

#define VkglTestCase_034426_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034426_2 "d.rgba32f_rgba_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034426, VkglTestCase_034426_1, VkglTestCase_034426_2);
