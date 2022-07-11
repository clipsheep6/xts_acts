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

#define VkglTestCase_028368_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028368_2 "iewclass_32_bits.rgba8_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028368, VkglTestCase_028368_1, VkglTestCase_028368_2);

#define VkglTestCase_028369_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028369_2 "iewclass_32_bits.rgba8_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028369, VkglTestCase_028369_1, VkglTestCase_028369_2);

#define VkglTestCase_028370_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028370_2 "viewclass_32_bits.rgba8_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028370, VkglTestCase_028370_1, VkglTestCase_028370_2);

#define VkglTestCase_028371_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028371_2 "class_32_bits.rgba8_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028371, VkglTestCase_028371_1, VkglTestCase_028371_2);

#define VkglTestCase_028372_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028372_2 "ewclass_32_bits.rgba8_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028372, VkglTestCase_028372_1, VkglTestCase_028372_2);

#define VkglTestCase_028373_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028373_2 "iewclass_32_bits.rgba8_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028373, VkglTestCase_028373_1, VkglTestCase_028373_2);

#define VkglTestCase_028374_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028374_2 "iewclass_32_bits.rgba8_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028374, VkglTestCase_028374_1, VkglTestCase_028374_2);

#define VkglTestCase_028375_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028375_2 "viewclass_32_bits.rgba8_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028375, VkglTestCase_028375_1, VkglTestCase_028375_2);

#define VkglTestCase_028376_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028376_2 "class_32_bits.rgba8_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028376, VkglTestCase_028376_1, VkglTestCase_028376_2);

#define VkglTestCase_028377_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028377_2 "ewclass_32_bits.rgba8_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028377, VkglTestCase_028377_1, VkglTestCase_028377_2);

#define VkglTestCase_028378_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028378_2 "viewclass_32_bits.rgba8_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028378, VkglTestCase_028378_1, VkglTestCase_028378_2);

#define VkglTestCase_028379_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028379_2 "viewclass_32_bits.rgba8_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028379, VkglTestCase_028379_1, VkglTestCase_028379_2);

#define VkglTestCase_028380_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028380_2 ".viewclass_32_bits.rgba8_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028380, VkglTestCase_028380_1, VkglTestCase_028380_2);

#define VkglTestCase_028381_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028381_2 "wclass_32_bits.rgba8_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028381, VkglTestCase_028381_1, VkglTestCase_028381_2);

#define VkglTestCase_028382_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028382_2 "iewclass_32_bits.rgba8_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028382, VkglTestCase_028382_1, VkglTestCase_028382_2);

#define VkglTestCase_028383_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028383_2 "class_32_bits.rgba8_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028383, VkglTestCase_028383_1, VkglTestCase_028383_2);

#define VkglTestCase_028384_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028384_2 "class_32_bits.rgba8_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028384, VkglTestCase_028384_1, VkglTestCase_028384_2);

#define VkglTestCase_028385_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028385_2 "wclass_32_bits.rgba8_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028385, VkglTestCase_028385_1, VkglTestCase_028385_2);

#define VkglTestCase_028386_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028386_2 "ss_32_bits.rgba8_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028386, VkglTestCase_028386_1, VkglTestCase_028386_2);

#define VkglTestCase_028387_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028387_2 "lass_32_bits.rgba8_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028387, VkglTestCase_028387_1, VkglTestCase_028387_2);

#define VkglTestCase_028388_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028388_2 "ewclass_32_bits.rgba8_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028388, VkglTestCase_028388_1, VkglTestCase_028388_2);

#define VkglTestCase_028389_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028389_2 "ewclass_32_bits.rgba8_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028389, VkglTestCase_028389_1, VkglTestCase_028389_2);

#define VkglTestCase_028390_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028390_2 "iewclass_32_bits.rgba8_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028390, VkglTestCase_028390_1, VkglTestCase_028390_2);

#define VkglTestCase_028391_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028391_2 "lass_32_bits.rgba8_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028391, VkglTestCase_028391_1, VkglTestCase_028391_2);

#define VkglTestCase_028392_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028392_2 "class_32_bits.rgba8_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028392, VkglTestCase_028392_1, VkglTestCase_028392_2);
