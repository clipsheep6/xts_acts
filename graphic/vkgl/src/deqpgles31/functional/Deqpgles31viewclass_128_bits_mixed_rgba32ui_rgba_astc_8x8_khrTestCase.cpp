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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035379_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035379_2 "s_mixed.rgba32ui_rgba_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035379, VkglTestCase_035379_1, VkglTestCase_035379_2);

#define VkglTestCase_035380_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035380_2 "s_mixed.rgba32ui_rgba_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035380, VkglTestCase_035380_1, VkglTestCase_035380_2);

#define VkglTestCase_035381_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035381_2 "ts_mixed.rgba32ui_rgba_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035381, VkglTestCase_035381_1, VkglTestCase_035381_2);

#define VkglTestCase_035382_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035382_2 "ixed.rgba32ui_rgba_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035382, VkglTestCase_035382_1, VkglTestCase_035382_2);

#define VkglTestCase_035383_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035383_2 "s_mixed.rgba32ui_rgba_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035383, VkglTestCase_035383_1, VkglTestCase_035383_2);

#define VkglTestCase_035384_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035384_2 "s_mixed.rgba32ui_rgba_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035384, VkglTestCase_035384_1, VkglTestCase_035384_2);

#define VkglTestCase_035385_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035385_2 "ts_mixed.rgba32ui_rgba_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035385, VkglTestCase_035385_1, VkglTestCase_035385_2);

#define VkglTestCase_035386_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035386_2 "ixed.rgba32ui_rgba_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035386, VkglTestCase_035386_1, VkglTestCase_035386_2);

#define VkglTestCase_035387_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035387_2 "ts_mixed.rgba32ui_rgba_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035387, VkglTestCase_035387_1, VkglTestCase_035387_2);

#define VkglTestCase_035388_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035388_2 "ts_mixed.rgba32ui_rgba_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035388, VkglTestCase_035388_1, VkglTestCase_035388_2);

#define VkglTestCase_035389_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035389_2 "its_mixed.rgba32ui_rgba_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035389, VkglTestCase_035389_1, VkglTestCase_035389_2);

#define VkglTestCase_035390_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035390_2 "mixed.rgba32ui_rgba_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035390, VkglTestCase_035390_1, VkglTestCase_035390_2);

#define VkglTestCase_035391_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035391_2 "ixed.rgba32ui_rgba_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035391, VkglTestCase_035391_1, VkglTestCase_035391_2);

#define VkglTestCase_035392_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035392_2 "ixed.rgba32ui_rgba_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035392, VkglTestCase_035392_1, VkglTestCase_035392_2);

#define VkglTestCase_035393_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035393_2 "mixed.rgba32ui_rgba_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035393, VkglTestCase_035393_1, VkglTestCase_035393_2);

#define VkglTestCase_035394_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035394_2 "d.rgba32ui_rgba_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035394, VkglTestCase_035394_1, VkglTestCase_035394_2);

#define VkglTestCase_035395_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035395_2 "_mixed.rgba32ui_rgba_astc_8x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035395, VkglTestCase_035395_1, VkglTestCase_035395_2);

#define VkglTestCase_035396_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035396_2 "_mixed.rgba32ui_rgba_astc_8x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035396, VkglTestCase_035396_1, VkglTestCase_035396_2);

#define VkglTestCase_035397_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035397_2 "s_mixed.rgba32ui_rgba_astc_8x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035397, VkglTestCase_035397_1, VkglTestCase_035397_2);

#define VkglTestCase_035398_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035398_2 "xed.rgba32ui_rgba_astc_8x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035398, VkglTestCase_035398_1, VkglTestCase_035398_2);
