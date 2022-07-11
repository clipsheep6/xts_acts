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

#define VkglTestCase_034379_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034379_2 "s_mixed.rgba32f_rgba_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034379, VkglTestCase_034379_1, VkglTestCase_034379_2);

#define VkglTestCase_034380_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034380_2 "s_mixed.rgba32f_rgba_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034380, VkglTestCase_034380_1, VkglTestCase_034380_2);

#define VkglTestCase_034381_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034381_2 "ts_mixed.rgba32f_rgba_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034381, VkglTestCase_034381_1, VkglTestCase_034381_2);

#define VkglTestCase_034382_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034382_2 "ixed.rgba32f_rgba_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034382, VkglTestCase_034382_1, VkglTestCase_034382_2);

#define VkglTestCase_034383_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034383_2 "s_mixed.rgba32f_rgba_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034383, VkglTestCase_034383_1, VkglTestCase_034383_2);

#define VkglTestCase_034384_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034384_2 "s_mixed.rgba32f_rgba_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034384, VkglTestCase_034384_1, VkglTestCase_034384_2);

#define VkglTestCase_034385_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034385_2 "ts_mixed.rgba32f_rgba_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034385, VkglTestCase_034385_1, VkglTestCase_034385_2);

#define VkglTestCase_034386_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034386_2 "ixed.rgba32f_rgba_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034386, VkglTestCase_034386_1, VkglTestCase_034386_2);

#define VkglTestCase_034387_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034387_2 "ts_mixed.rgba32f_rgba_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034387, VkglTestCase_034387_1, VkglTestCase_034387_2);

#define VkglTestCase_034388_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034388_2 "ts_mixed.rgba32f_rgba_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034388, VkglTestCase_034388_1, VkglTestCase_034388_2);

#define VkglTestCase_034389_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034389_2 "its_mixed.rgba32f_rgba_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034389, VkglTestCase_034389_1, VkglTestCase_034389_2);

#define VkglTestCase_034390_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034390_2 "mixed.rgba32f_rgba_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034390, VkglTestCase_034390_1, VkglTestCase_034390_2);

#define VkglTestCase_034391_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034391_2 "ixed.rgba32f_rgba_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034391, VkglTestCase_034391_1, VkglTestCase_034391_2);

#define VkglTestCase_034392_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034392_2 "ixed.rgba32f_rgba_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034392, VkglTestCase_034392_1, VkglTestCase_034392_2);

#define VkglTestCase_034393_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034393_2 "mixed.rgba32f_rgba_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034393, VkglTestCase_034393_1, VkglTestCase_034393_2);

#define VkglTestCase_034394_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034394_2 "d.rgba32f_rgba_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034394, VkglTestCase_034394_1, VkglTestCase_034394_2);
