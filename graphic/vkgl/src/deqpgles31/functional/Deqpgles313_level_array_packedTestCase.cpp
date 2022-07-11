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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009375_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009375_2 "yout.3_level_array.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009375, VkglTestCase_009375_1, VkglTestCase_009375_2);

#define VkglTestCase_009376_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009376_2 "yout.3_level_array.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009376, VkglTestCase_009376_1, VkglTestCase_009376_2);

#define VkglTestCase_009377_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009377_2 "yout.3_level_array.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009377, VkglTestCase_009377_1, VkglTestCase_009377_2);

#define VkglTestCase_009378_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009378_2 "yout.3_level_array.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009378, VkglTestCase_009378_1, VkglTestCase_009378_2);

#define VkglTestCase_009379_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009379_2 "ayout.3_level_array.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009379, VkglTestCase_009379_1, VkglTestCase_009379_2);

#define VkglTestCase_009380_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009380_2 "yout.3_level_array.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009380, VkglTestCase_009380_1, VkglTestCase_009380_2);

#define VkglTestCase_009381_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009381_2 "yout.3_level_array.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009381, VkglTestCase_009381_1, VkglTestCase_009381_2);

#define VkglTestCase_009382_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009382_2 "yout.3_level_array.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009382, VkglTestCase_009382_1, VkglTestCase_009382_2);

#define VkglTestCase_009383_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009383_2 "yout.3_level_array.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009383, VkglTestCase_009383_1, VkglTestCase_009383_2);

#define VkglTestCase_009384_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009384_2 "yout.3_level_array.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009384, VkglTestCase_009384_1, VkglTestCase_009384_2);

#define VkglTestCase_009385_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009385_2 "yout.3_level_array.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009385, VkglTestCase_009385_1, VkglTestCase_009385_2);

#define VkglTestCase_009386_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009386_2 "yout.3_level_array.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009386, VkglTestCase_009386_1, VkglTestCase_009386_2);

#define VkglTestCase_009387_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009387_2 "yout.3_level_array.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009387, VkglTestCase_009387_1, VkglTestCase_009387_2);

#define VkglTestCase_009388_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009388_2 "yout.3_level_array.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009388, VkglTestCase_009388_1, VkglTestCase_009388_2);

#define VkglTestCase_009389_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009389_2 "yout.3_level_array.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009389, VkglTestCase_009389_1, VkglTestCase_009389_2);

#define VkglTestCase_009390_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009390_2 "yout.3_level_array.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009390, VkglTestCase_009390_1, VkglTestCase_009390_2);

#define VkglTestCase_009391_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009391_2 "yout.3_level_array.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009391, VkglTestCase_009391_1, VkglTestCase_009391_2);

#define VkglTestCase_009392_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009392_2 "3_level_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009392, VkglTestCase_009392_1, VkglTestCase_009392_2);

#define VkglTestCase_009393_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009393_2 "_level_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009393, VkglTestCase_009393_1, VkglTestCase_009393_2);

#define VkglTestCase_009394_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009394_2 "yout.3_level_array.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009394, VkglTestCase_009394_1, VkglTestCase_009394_2);

#define VkglTestCase_009395_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009395_2 "3_level_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009395, VkglTestCase_009395_1, VkglTestCase_009395_2);

#define VkglTestCase_009396_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009396_2 "_level_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009396, VkglTestCase_009396_1, VkglTestCase_009396_2);

#define VkglTestCase_009397_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009397_2 "yout.3_level_array.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009397, VkglTestCase_009397_1, VkglTestCase_009397_2);

#define VkglTestCase_009398_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009398_2 "3_level_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009398, VkglTestCase_009398_1, VkglTestCase_009398_2);

#define VkglTestCase_009399_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009399_2 "_level_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009399, VkglTestCase_009399_1, VkglTestCase_009399_2);

#define VkglTestCase_009400_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009400_2 "out.3_level_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009400, VkglTestCase_009400_1, VkglTestCase_009400_2);

#define VkglTestCase_009401_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009401_2 "_level_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009401, VkglTestCase_009401_1, VkglTestCase_009401_2);

#define VkglTestCase_009402_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009402_2 "level_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009402, VkglTestCase_009402_1, VkglTestCase_009402_2);

#define VkglTestCase_009403_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009403_2 "out.3_level_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009403, VkglTestCase_009403_1, VkglTestCase_009403_2);

#define VkglTestCase_009404_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009404_2 "_level_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009404, VkglTestCase_009404_1, VkglTestCase_009404_2);

#define VkglTestCase_009405_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009405_2 "level_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009405, VkglTestCase_009405_1, VkglTestCase_009405_2);

#define VkglTestCase_009406_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009406_2 "out.3_level_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009406, VkglTestCase_009406_1, VkglTestCase_009406_2);

#define VkglTestCase_009407_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009407_2 "_level_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009407, VkglTestCase_009407_1, VkglTestCase_009407_2);

#define VkglTestCase_009408_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009408_2 "level_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009408, VkglTestCase_009408_1, VkglTestCase_009408_2);

#define VkglTestCase_009409_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009409_2 "out.3_level_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009409, VkglTestCase_009409_1, VkglTestCase_009409_2);

#define VkglTestCase_009410_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009410_2 "_level_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009410, VkglTestCase_009410_1, VkglTestCase_009410_2);

#define VkglTestCase_009411_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009411_2 "level_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009411, VkglTestCase_009411_1, VkglTestCase_009411_2);

#define VkglTestCase_009412_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009412_2 "out.3_level_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009412, VkglTestCase_009412_1, VkglTestCase_009412_2);

#define VkglTestCase_009413_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009413_2 "_level_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009413, VkglTestCase_009413_1, VkglTestCase_009413_2);

#define VkglTestCase_009414_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009414_2 "level_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009414, VkglTestCase_009414_1, VkglTestCase_009414_2);

#define VkglTestCase_009415_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009415_2 "out.3_level_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009415, VkglTestCase_009415_1, VkglTestCase_009415_2);

#define VkglTestCase_009416_1 "dEQP-GLES31.functional.ssbo.layout.3"
#define VkglTestCase_009416_2 "_level_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009416, VkglTestCase_009416_1, VkglTestCase_009416_2);

#define VkglTestCase_009417_1 "dEQP-GLES31.functional.ssbo.layout.3_"
#define VkglTestCase_009417_2 "level_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009417, VkglTestCase_009417_1, VkglTestCase_009417_2);

#define VkglTestCase_010866_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010866_2 "evel_array.packed.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010866, VkglTestCase_010866_1, VkglTestCase_010866_2);

#define VkglTestCase_010867_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010867_2 "vel_array.packed.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010867, VkglTestCase_010867_1, VkglTestCase_010867_2);

#define VkglTestCase_010868_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010868_2 "level_array.packed.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010868, VkglTestCase_010868_1, VkglTestCase_010868_2);

#define VkglTestCase_010869_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010869_2 "evel_array.packed.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010869, VkglTestCase_010869_1, VkglTestCase_010869_2);

#define VkglTestCase_010870_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010870_2 "level_array.packed.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010870, VkglTestCase_010870_1, VkglTestCase_010870_2);

#define VkglTestCase_010871_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010871_2 "evel_array.packed.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010871, VkglTestCase_010871_1, VkglTestCase_010871_2);

#define VkglTestCase_010872_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010872_2 "level_array.packed.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010872, VkglTestCase_010872_1, VkglTestCase_010872_2);

#define VkglTestCase_010873_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010873_2 "evel_array.packed.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010873, VkglTestCase_010873_1, VkglTestCase_010873_2);

#define VkglTestCase_010874_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010874_2 "level_array.packed.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010874, VkglTestCase_010874_1, VkglTestCase_010874_2);

#define VkglTestCase_010875_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010875_2 "evel_array.packed.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010875, VkglTestCase_010875_1, VkglTestCase_010875_2);

#define VkglTestCase_010876_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010876_2 "evel_array.packed.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010876, VkglTestCase_010876_1, VkglTestCase_010876_2);

#define VkglTestCase_010877_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010877_2 "vel_array.packed.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010877, VkglTestCase_010877_1, VkglTestCase_010877_2);

#define VkglTestCase_010878_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010878_2 "evel_array.packed.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010878, VkglTestCase_010878_1, VkglTestCase_010878_2);

#define VkglTestCase_010879_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010879_2 "vel_array.packed.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010879, VkglTestCase_010879_1, VkglTestCase_010879_2);

#define VkglTestCase_010880_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010880_2 "evel_array.packed.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010880, VkglTestCase_010880_1, VkglTestCase_010880_2);

#define VkglTestCase_010881_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010881_2 "vel_array.packed.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010881, VkglTestCase_010881_1, VkglTestCase_010881_2);

#define VkglTestCase_010882_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010882_2 "level_array.packed.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010882, VkglTestCase_010882_1, VkglTestCase_010882_2);

#define VkglTestCase_010883_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010883_2 "evel_array.packed.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010883, VkglTestCase_010883_1, VkglTestCase_010883_2);

#define VkglTestCase_010884_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010884_2 "evel_array.packed.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010884, VkglTestCase_010884_1, VkglTestCase_010884_2);

#define VkglTestCase_010885_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010885_2 "vel_array.packed.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010885, VkglTestCase_010885_1, VkglTestCase_010885_2);

#define VkglTestCase_010886_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010886_2 "evel_array.packed.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010886, VkglTestCase_010886_1, VkglTestCase_010886_2);

#define VkglTestCase_010887_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010887_2 "vel_array.packed.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010887, VkglTestCase_010887_1, VkglTestCase_010887_2);

#define VkglTestCase_010888_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010888_2 "evel_array.packed.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010888, VkglTestCase_010888_1, VkglTestCase_010888_2);

#define VkglTestCase_010889_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010889_2 "vel_array.packed.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010889, VkglTestCase_010889_1, VkglTestCase_010889_2);

#define VkglTestCase_010890_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010890_2 "level_array.packed.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010890, VkglTestCase_010890_1, VkglTestCase_010890_2);

#define VkglTestCase_010891_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010891_2 "evel_array.packed.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010891, VkglTestCase_010891_1, VkglTestCase_010891_2);

#define VkglTestCase_010892_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010892_2 "evel_array.packed.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010892, VkglTestCase_010892_1, VkglTestCase_010892_2);

#define VkglTestCase_010893_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010893_2 "vel_array.packed.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010893, VkglTestCase_010893_1, VkglTestCase_010893_2);

#define VkglTestCase_010894_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010894_2 "evel_array.packed.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010894, VkglTestCase_010894_1, VkglTestCase_010894_2);

#define VkglTestCase_010895_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010895_2 "vel_array.packed.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010895, VkglTestCase_010895_1, VkglTestCase_010895_2);

#define VkglTestCase_010896_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010896_2 "evel_array.packed.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010896, VkglTestCase_010896_1, VkglTestCase_010896_2);

#define VkglTestCase_010897_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010897_2 "vel_array.packed.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010897, VkglTestCase_010897_1, VkglTestCase_010897_2);

#define VkglTestCase_010898_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010898_2 "level_array.packed.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010898, VkglTestCase_010898_1, VkglTestCase_010898_2);

#define VkglTestCase_010899_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010899_2 "evel_array.packed.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010899, VkglTestCase_010899_1, VkglTestCase_010899_2);

#define VkglTestCase_010900_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_010900_2 "_array.packed.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010900, VkglTestCase_010900_1, VkglTestCase_010900_2);

#define VkglTestCase_010901_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010901_2 "array.packed.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010901, VkglTestCase_010901_1, VkglTestCase_010901_2);

#define VkglTestCase_010902_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010902_2 "rray.packed.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010902, VkglTestCase_010902_1, VkglTestCase_010902_2);

#define VkglTestCase_010903_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010903_2 "ray.packed.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010903, VkglTestCase_010903_1, VkglTestCase_010903_2);

#define VkglTestCase_010904_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010904_2 "level_array.packed.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010904, VkglTestCase_010904_1, VkglTestCase_010904_2);

#define VkglTestCase_010905_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010905_2 "evel_array.packed.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010905, VkglTestCase_010905_1, VkglTestCase_010905_2);

#define VkglTestCase_010906_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_010906_2 "_array.packed.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010906, VkglTestCase_010906_1, VkglTestCase_010906_2);

#define VkglTestCase_010907_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010907_2 "array.packed.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010907, VkglTestCase_010907_1, VkglTestCase_010907_2);

#define VkglTestCase_010908_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010908_2 "rray.packed.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010908, VkglTestCase_010908_1, VkglTestCase_010908_2);

#define VkglTestCase_010909_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010909_2 "ray.packed.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010909, VkglTestCase_010909_1, VkglTestCase_010909_2);

#define VkglTestCase_010910_1 "dEQP-GLES31.functional.ubo.3_"
#define VkglTestCase_010910_2 "level_array.packed.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010910, VkglTestCase_010910_1, VkglTestCase_010910_2);

#define VkglTestCase_010911_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010911_2 "evel_array.packed.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010911, VkglTestCase_010911_1, VkglTestCase_010911_2);

#define VkglTestCase_010912_1 "dEQP-GLES31.functional.ubo.3_level"
#define VkglTestCase_010912_2 "_array.packed.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010912, VkglTestCase_010912_1, VkglTestCase_010912_2);

#define VkglTestCase_010913_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010913_2 "array.packed.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010913, VkglTestCase_010913_1, VkglTestCase_010913_2);

#define VkglTestCase_010914_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010914_2 "rray.packed.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010914, VkglTestCase_010914_1, VkglTestCase_010914_2);

#define VkglTestCase_010915_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010915_2 "ray.packed.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010915, VkglTestCase_010915_1, VkglTestCase_010915_2);

#define VkglTestCase_010916_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010916_2 "evel_array.packed.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010916, VkglTestCase_010916_1, VkglTestCase_010916_2);

#define VkglTestCase_010917_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010917_2 "vel_array.packed.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010917, VkglTestCase_010917_1, VkglTestCase_010917_2);

#define VkglTestCase_010918_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010918_2 "array.packed.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010918, VkglTestCase_010918_1, VkglTestCase_010918_2);

#define VkglTestCase_010919_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010919_2 "rray.packed.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010919, VkglTestCase_010919_1, VkglTestCase_010919_2);

#define VkglTestCase_010920_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010920_2 "ray.packed.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010920, VkglTestCase_010920_1, VkglTestCase_010920_2);

#define VkglTestCase_010921_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010921_2 "ay.packed.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010921, VkglTestCase_010921_1, VkglTestCase_010921_2);

#define VkglTestCase_010922_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010922_2 "evel_array.packed.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010922, VkglTestCase_010922_1, VkglTestCase_010922_2);

#define VkglTestCase_010923_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010923_2 "vel_array.packed.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010923, VkglTestCase_010923_1, VkglTestCase_010923_2);

#define VkglTestCase_010924_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010924_2 "array.packed.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010924, VkglTestCase_010924_1, VkglTestCase_010924_2);

#define VkglTestCase_010925_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010925_2 "rray.packed.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010925, VkglTestCase_010925_1, VkglTestCase_010925_2);

#define VkglTestCase_010926_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010926_2 "ray.packed.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010926, VkglTestCase_010926_1, VkglTestCase_010926_2);

#define VkglTestCase_010927_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010927_2 "ay.packed.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010927, VkglTestCase_010927_1, VkglTestCase_010927_2);

#define VkglTestCase_010928_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010928_2 "evel_array.packed.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010928, VkglTestCase_010928_1, VkglTestCase_010928_2);

#define VkglTestCase_010929_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010929_2 "vel_array.packed.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010929, VkglTestCase_010929_1, VkglTestCase_010929_2);

#define VkglTestCase_010930_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010930_2 "array.packed.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010930, VkglTestCase_010930_1, VkglTestCase_010930_2);

#define VkglTestCase_010931_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010931_2 "rray.packed.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010931, VkglTestCase_010931_1, VkglTestCase_010931_2);

#define VkglTestCase_010932_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010932_2 "ray.packed.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010932, VkglTestCase_010932_1, VkglTestCase_010932_2);

#define VkglTestCase_010933_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010933_2 "ay.packed.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010933, VkglTestCase_010933_1, VkglTestCase_010933_2);

#define VkglTestCase_010934_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010934_2 "evel_array.packed.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010934, VkglTestCase_010934_1, VkglTestCase_010934_2);

#define VkglTestCase_010935_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010935_2 "vel_array.packed.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010935, VkglTestCase_010935_1, VkglTestCase_010935_2);

#define VkglTestCase_010936_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010936_2 "array.packed.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010936, VkglTestCase_010936_1, VkglTestCase_010936_2);

#define VkglTestCase_010937_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010937_2 "rray.packed.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010937, VkglTestCase_010937_1, VkglTestCase_010937_2);

#define VkglTestCase_010938_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010938_2 "ray.packed.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010938, VkglTestCase_010938_1, VkglTestCase_010938_2);

#define VkglTestCase_010939_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010939_2 "ay.packed.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010939, VkglTestCase_010939_1, VkglTestCase_010939_2);

#define VkglTestCase_010940_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010940_2 "evel_array.packed.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010940, VkglTestCase_010940_1, VkglTestCase_010940_2);

#define VkglTestCase_010941_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010941_2 "vel_array.packed.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010941, VkglTestCase_010941_1, VkglTestCase_010941_2);

#define VkglTestCase_010942_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010942_2 "array.packed.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010942, VkglTestCase_010942_1, VkglTestCase_010942_2);

#define VkglTestCase_010943_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010943_2 "rray.packed.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010943, VkglTestCase_010943_1, VkglTestCase_010943_2);

#define VkglTestCase_010944_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010944_2 "ray.packed.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010944, VkglTestCase_010944_1, VkglTestCase_010944_2);

#define VkglTestCase_010945_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010945_2 "ay.packed.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010945, VkglTestCase_010945_1, VkglTestCase_010945_2);

#define VkglTestCase_010946_1 "dEQP-GLES31.functional.ubo.3_l"
#define VkglTestCase_010946_2 "evel_array.packed.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010946, VkglTestCase_010946_1, VkglTestCase_010946_2);

#define VkglTestCase_010947_1 "dEQP-GLES31.functional.ubo.3_le"
#define VkglTestCase_010947_2 "vel_array.packed.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010947, VkglTestCase_010947_1, VkglTestCase_010947_2);

#define VkglTestCase_010948_1 "dEQP-GLES31.functional.ubo.3_level_"
#define VkglTestCase_010948_2 "array.packed.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010948, VkglTestCase_010948_1, VkglTestCase_010948_2);

#define VkglTestCase_010949_1 "dEQP-GLES31.functional.ubo.3_level_a"
#define VkglTestCase_010949_2 "rray.packed.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010949, VkglTestCase_010949_1, VkglTestCase_010949_2);

#define VkglTestCase_010950_1 "dEQP-GLES31.functional.ubo.3_level_ar"
#define VkglTestCase_010950_2 "ray.packed.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010950, VkglTestCase_010950_1, VkglTestCase_010950_2);

#define VkglTestCase_010951_1 "dEQP-GLES31.functional.ubo.3_level_arr"
#define VkglTestCase_010951_2 "ay.packed.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010951, VkglTestCase_010951_1, VkglTestCase_010951_2);
