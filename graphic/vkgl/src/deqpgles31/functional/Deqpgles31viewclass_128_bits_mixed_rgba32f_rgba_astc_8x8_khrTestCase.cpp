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

#define VkglTestCase_034347_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034347_2 "ts_mixed.rgba32f_rgba_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034347, VkglTestCase_034347_1, VkglTestCase_034347_2);

#define VkglTestCase_034348_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034348_2 "ts_mixed.rgba32f_rgba_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034348, VkglTestCase_034348_1, VkglTestCase_034348_2);

#define VkglTestCase_034349_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034349_2 "its_mixed.rgba32f_rgba_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034349, VkglTestCase_034349_1, VkglTestCase_034349_2);

#define VkglTestCase_034350_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034350_2 "mixed.rgba32f_rgba_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034350, VkglTestCase_034350_1, VkglTestCase_034350_2);

#define VkglTestCase_034351_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034351_2 "ts_mixed.rgba32f_rgba_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034351, VkglTestCase_034351_1, VkglTestCase_034351_2);

#define VkglTestCase_034352_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034352_2 "ts_mixed.rgba32f_rgba_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034352, VkglTestCase_034352_1, VkglTestCase_034352_2);

#define VkglTestCase_034353_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034353_2 "its_mixed.rgba32f_rgba_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034353, VkglTestCase_034353_1, VkglTestCase_034353_2);

#define VkglTestCase_034354_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034354_2 "mixed.rgba32f_rgba_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034354, VkglTestCase_034354_1, VkglTestCase_034354_2);

#define VkglTestCase_034355_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034355_2 "its_mixed.rgba32f_rgba_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034355, VkglTestCase_034355_1, VkglTestCase_034355_2);

#define VkglTestCase_034356_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034356_2 "its_mixed.rgba32f_rgba_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034356, VkglTestCase_034356_1, VkglTestCase_034356_2);

#define VkglTestCase_034357_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034357_2 "bits_mixed.rgba32f_rgba_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034357, VkglTestCase_034357_1, VkglTestCase_034357_2);

#define VkglTestCase_034358_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034358_2 "_mixed.rgba32f_rgba_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034358, VkglTestCase_034358_1, VkglTestCase_034358_2);

#define VkglTestCase_034359_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034359_2 "mixed.rgba32f_rgba_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034359, VkglTestCase_034359_1, VkglTestCase_034359_2);

#define VkglTestCase_034360_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034360_2 "mixed.rgba32f_rgba_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034360, VkglTestCase_034360_1, VkglTestCase_034360_2);

#define VkglTestCase_034361_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034361_2 "_mixed.rgba32f_rgba_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034361, VkglTestCase_034361_1, VkglTestCase_034361_2);

#define VkglTestCase_034362_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034362_2 "ed.rgba32f_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034362, VkglTestCase_034362_1, VkglTestCase_034362_2);
