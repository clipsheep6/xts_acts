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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017005_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017005_2 "nter.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017005, VkglTestCase_017005_1, VkglTestCase_017005_2);

#define VkglTestCase_017006_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017006_2 "ter.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017006, VkglTestCase_017006_1, VkglTestCase_017006_2);

#define VkglTestCase_017007_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017007_2 "inter.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017007, VkglTestCase_017007_1, VkglTestCase_017007_2);

#define VkglTestCase_017008_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017008_2 "inter.render.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017008, VkglTestCase_017008_1, VkglTestCase_017008_2);

#define VkglTestCase_017009_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017009_2 "nter.render.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017009, VkglTestCase_017009_1, VkglTestCase_017009_2);

#define VkglTestCase_017010_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_017010_2 "ointer.render.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017010, VkglTestCase_017010_1, VkglTestCase_017010_2);

#define VkglTestCase_017011_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017011_2 "inter.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017011, VkglTestCase_017011_1, VkglTestCase_017011_2);

#define VkglTestCase_017012_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017012_2 "nter.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017012, VkglTestCase_017012_1, VkglTestCase_017012_2);

#define VkglTestCase_017013_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_017013_2 "ointer.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017013, VkglTestCase_017013_1, VkglTestCase_017013_2);

#define VkglTestCase_017014_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017014_2 "nter.render.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017014, VkglTestCase_017014_1, VkglTestCase_017014_2);

#define VkglTestCase_017015_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017015_2 "ter.render.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017015, VkglTestCase_017015_1, VkglTestCase_017015_2);

#define VkglTestCase_017016_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017016_2 "inter.render.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017016, VkglTestCase_017016_1, VkglTestCase_017016_2);

#define VkglTestCase_017017_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017017_2 "nter.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017017, VkglTestCase_017017_1, VkglTestCase_017017_2);

#define VkglTestCase_017018_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017018_2 "ter.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017018, VkglTestCase_017018_1, VkglTestCase_017018_2);

#define VkglTestCase_017019_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017019_2 "inter.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017019, VkglTestCase_017019_1, VkglTestCase_017019_2);

#define VkglTestCase_017020_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_017020_2 "render.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017020, VkglTestCase_017020_1, VkglTestCase_017020_2);

#define VkglTestCase_017021_1 "dEQP-GLES31.functional.program_uniform.by_pointer.r"
#define VkglTestCase_017021_2 "ender.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017021, VkglTestCase_017021_1, VkglTestCase_017021_2);

#define VkglTestCase_017022_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017022_2 ".render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017022, VkglTestCase_017022_1, VkglTestCase_017022_2);

#define VkglTestCase_017386_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017386_2 "lue.render.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017386, VkglTestCase_017386_1, VkglTestCase_017386_2);

#define VkglTestCase_017387_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017387_2 "ue.render.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017387, VkglTestCase_017387_1, VkglTestCase_017387_2);

#define VkglTestCase_017388_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017388_2 "alue.render.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017388, VkglTestCase_017388_1, VkglTestCase_017388_2);

#define VkglTestCase_017389_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017389_2 "alue.render.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017389, VkglTestCase_017389_1, VkglTestCase_017389_2);

#define VkglTestCase_017390_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017390_2 "lue.render.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017390, VkglTestCase_017390_1, VkglTestCase_017390_2);

#define VkglTestCase_017391_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017391_2 "value.render.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017391, VkglTestCase_017391_1, VkglTestCase_017391_2);

#define VkglTestCase_017392_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017392_2 "lue.render.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017392, VkglTestCase_017392_1, VkglTestCase_017392_2);

#define VkglTestCase_017393_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017393_2 "ue.render.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017393, VkglTestCase_017393_1, VkglTestCase_017393_2);

#define VkglTestCase_017394_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017394_2 "alue.render.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017394, VkglTestCase_017394_1, VkglTestCase_017394_2);

#define VkglTestCase_017395_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017395_2 "lue.render.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017395, VkglTestCase_017395_1, VkglTestCase_017395_2);

#define VkglTestCase_017396_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017396_2 "ue.render.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017396, VkglTestCase_017396_1, VkglTestCase_017396_2);

#define VkglTestCase_017397_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017397_2 "alue.render.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017397, VkglTestCase_017397_1, VkglTestCase_017397_2);

#define VkglTestCase_017398_1 "dEQP-GLES31.functional.program_uniform.by_value.r"
#define VkglTestCase_017398_2 "ender.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017398, VkglTestCase_017398_1, VkglTestCase_017398_2);

#define VkglTestCase_017399_1 "dEQP-GLES31.functional.program_uniform.by_value.re"
#define VkglTestCase_017399_2 "nder.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017399, VkglTestCase_017399_1, VkglTestCase_017399_2);

#define VkglTestCase_017400_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017400_2 "render.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017400, VkglTestCase_017400_1, VkglTestCase_017400_2);
