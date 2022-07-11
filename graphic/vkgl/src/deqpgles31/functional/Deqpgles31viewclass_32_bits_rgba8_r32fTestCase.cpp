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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028348_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028348_2 "iewclass_32_bits.rgba8_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028348, VkglTestCase_028348_1, VkglTestCase_028348_2);

#define VkglTestCase_028349_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028349_2 "iewclass_32_bits.rgba8_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028349, VkglTestCase_028349_1, VkglTestCase_028349_2);

#define VkglTestCase_028350_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028350_2 "viewclass_32_bits.rgba8_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028350, VkglTestCase_028350_1, VkglTestCase_028350_2);

#define VkglTestCase_028351_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028351_2 "class_32_bits.rgba8_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028351, VkglTestCase_028351_1, VkglTestCase_028351_2);

#define VkglTestCase_028352_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028352_2 "iewclass_32_bits.rgba8_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028352, VkglTestCase_028352_1, VkglTestCase_028352_2);

#define VkglTestCase_028353_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028353_2 "iewclass_32_bits.rgba8_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028353, VkglTestCase_028353_1, VkglTestCase_028353_2);

#define VkglTestCase_028354_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028354_2 "viewclass_32_bits.rgba8_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028354, VkglTestCase_028354_1, VkglTestCase_028354_2);

#define VkglTestCase_028355_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028355_2 "class_32_bits.rgba8_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028355, VkglTestCase_028355_1, VkglTestCase_028355_2);

#define VkglTestCase_028356_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028356_2 "viewclass_32_bits.rgba8_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028356, VkglTestCase_028356_1, VkglTestCase_028356_2);

#define VkglTestCase_028357_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028357_2 "viewclass_32_bits.rgba8_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028357, VkglTestCase_028357_1, VkglTestCase_028357_2);

#define VkglTestCase_028358_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028358_2 ".viewclass_32_bits.rgba8_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028358, VkglTestCase_028358_1, VkglTestCase_028358_2);

#define VkglTestCase_028359_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028359_2 "wclass_32_bits.rgba8_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028359, VkglTestCase_028359_1, VkglTestCase_028359_2);

#define VkglTestCase_028360_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028360_2 "class_32_bits.rgba8_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028360, VkglTestCase_028360_1, VkglTestCase_028360_2);

#define VkglTestCase_028361_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028361_2 "class_32_bits.rgba8_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028361, VkglTestCase_028361_1, VkglTestCase_028361_2);

#define VkglTestCase_028362_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028362_2 "wclass_32_bits.rgba8_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028362, VkglTestCase_028362_1, VkglTestCase_028362_2);

#define VkglTestCase_028363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028363_2 "ss_32_bits.rgba8_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028363, VkglTestCase_028363_1, VkglTestCase_028363_2);

#define VkglTestCase_028364_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028364_2 "ewclass_32_bits.rgba8_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028364, VkglTestCase_028364_1, VkglTestCase_028364_2);

#define VkglTestCase_028365_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028365_2 "ewclass_32_bits.rgba8_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028365, VkglTestCase_028365_1, VkglTestCase_028365_2);

#define VkglTestCase_028366_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028366_2 "iewclass_32_bits.rgba8_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028366, VkglTestCase_028366_1, VkglTestCase_028366_2);

#define VkglTestCase_028367_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028367_2 "lass_32_bits.rgba8_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028367, VkglTestCase_028367_1, VkglTestCase_028367_2);
