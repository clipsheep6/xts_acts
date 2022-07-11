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

#define VkglTestCase_034507_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034507_2 "s_mixed.rgba32f_rgba_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034507, VkglTestCase_034507_1, VkglTestCase_034507_2);

#define VkglTestCase_034508_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034508_2 "s_mixed.rgba32f_rgba_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034508, VkglTestCase_034508_1, VkglTestCase_034508_2);

#define VkglTestCase_034509_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034509_2 "ts_mixed.rgba32f_rgba_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034509, VkglTestCase_034509_1, VkglTestCase_034509_2);

#define VkglTestCase_034510_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034510_2 "ixed.rgba32f_rgba_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034510, VkglTestCase_034510_1, VkglTestCase_034510_2);

#define VkglTestCase_034511_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034511_2 "s_mixed.rgba32f_rgba_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034511, VkglTestCase_034511_1, VkglTestCase_034511_2);

#define VkglTestCase_034512_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034512_2 "s_mixed.rgba32f_rgba_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034512, VkglTestCase_034512_1, VkglTestCase_034512_2);

#define VkglTestCase_034513_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034513_2 "ts_mixed.rgba32f_rgba_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034513, VkglTestCase_034513_1, VkglTestCase_034513_2);

#define VkglTestCase_034514_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034514_2 "ixed.rgba32f_rgba_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034514, VkglTestCase_034514_1, VkglTestCase_034514_2);

#define VkglTestCase_034515_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034515_2 "ts_mixed.rgba32f_rgba_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034515, VkglTestCase_034515_1, VkglTestCase_034515_2);

#define VkglTestCase_034516_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034516_2 "ts_mixed.rgba32f_rgba_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034516, VkglTestCase_034516_1, VkglTestCase_034516_2);

#define VkglTestCase_034517_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034517_2 "its_mixed.rgba32f_rgba_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034517, VkglTestCase_034517_1, VkglTestCase_034517_2);

#define VkglTestCase_034518_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034518_2 "mixed.rgba32f_rgba_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034518, VkglTestCase_034518_1, VkglTestCase_034518_2);

#define VkglTestCase_034519_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034519_2 "ixed.rgba32f_rgba_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034519, VkglTestCase_034519_1, VkglTestCase_034519_2);

#define VkglTestCase_034520_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034520_2 "ixed.rgba32f_rgba_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034520, VkglTestCase_034520_1, VkglTestCase_034520_2);

#define VkglTestCase_034521_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034521_2 "mixed.rgba32f_rgba_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034521, VkglTestCase_034521_1, VkglTestCase_034521_2);

#define VkglTestCase_034522_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034522_2 "d.rgba32f_rgba_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034522, VkglTestCase_034522_1, VkglTestCase_034522_2);
