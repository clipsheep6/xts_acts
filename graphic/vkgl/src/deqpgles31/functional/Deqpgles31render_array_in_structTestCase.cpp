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

#define VkglTestCase_017023_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017023_2 "nter.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017023, VkglTestCase_017023_1, VkglTestCase_017023_2);

#define VkglTestCase_017024_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017024_2 "ter.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017024, VkglTestCase_017024_1, VkglTestCase_017024_2);

#define VkglTestCase_017025_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017025_2 "inter.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017025, VkglTestCase_017025_1, VkglTestCase_017025_2);

#define VkglTestCase_017026_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017026_2 "inter.render.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017026, VkglTestCase_017026_1, VkglTestCase_017026_2);

#define VkglTestCase_017027_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017027_2 "nter.render.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017027, VkglTestCase_017027_1, VkglTestCase_017027_2);

#define VkglTestCase_017028_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_017028_2 "ointer.render.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017028, VkglTestCase_017028_1, VkglTestCase_017028_2);

#define VkglTestCase_017029_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017029_2 "inter.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017029, VkglTestCase_017029_1, VkglTestCase_017029_2);

#define VkglTestCase_017030_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017030_2 "nter.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017030, VkglTestCase_017030_1, VkglTestCase_017030_2);

#define VkglTestCase_017031_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_017031_2 "ointer.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017031, VkglTestCase_017031_1, VkglTestCase_017031_2);

#define VkglTestCase_017032_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017032_2 "nter.render.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017032, VkglTestCase_017032_1, VkglTestCase_017032_2);

#define VkglTestCase_017033_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017033_2 "ter.render.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017033, VkglTestCase_017033_1, VkglTestCase_017033_2);

#define VkglTestCase_017034_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017034_2 "inter.render.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017034, VkglTestCase_017034_1, VkglTestCase_017034_2);

#define VkglTestCase_017035_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_017035_2 "nter.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017035, VkglTestCase_017035_1, VkglTestCase_017035_2);

#define VkglTestCase_017036_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017036_2 "ter.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017036, VkglTestCase_017036_1, VkglTestCase_017036_2);

#define VkglTestCase_017037_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017037_2 "inter.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017037, VkglTestCase_017037_1, VkglTestCase_017037_2);

#define VkglTestCase_017038_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_017038_2 "render.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017038, VkglTestCase_017038_1, VkglTestCase_017038_2);

#define VkglTestCase_017039_1 "dEQP-GLES31.functional.program_uniform.by_pointer.r"
#define VkglTestCase_017039_2 "ender.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017039, VkglTestCase_017039_1, VkglTestCase_017039_2);

#define VkglTestCase_017040_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017040_2 ".render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017040, VkglTestCase_017040_1, VkglTestCase_017040_2);

#define VkglTestCase_017401_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017401_2 "lue.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017401, VkglTestCase_017401_1, VkglTestCase_017401_2);

#define VkglTestCase_017402_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017402_2 "ue.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017402, VkglTestCase_017402_1, VkglTestCase_017402_2);

#define VkglTestCase_017403_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017403_2 "alue.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017403, VkglTestCase_017403_1, VkglTestCase_017403_2);

#define VkglTestCase_017404_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017404_2 "alue.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017404, VkglTestCase_017404_1, VkglTestCase_017404_2);

#define VkglTestCase_017405_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017405_2 "lue.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017405, VkglTestCase_017405_1, VkglTestCase_017405_2);

#define VkglTestCase_017406_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017406_2 "value.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017406, VkglTestCase_017406_1, VkglTestCase_017406_2);

#define VkglTestCase_017407_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017407_2 "lue.render.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017407, VkglTestCase_017407_1, VkglTestCase_017407_2);

#define VkglTestCase_017408_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017408_2 "ue.render.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017408, VkglTestCase_017408_1, VkglTestCase_017408_2);

#define VkglTestCase_017409_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017409_2 "alue.render.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017409, VkglTestCase_017409_1, VkglTestCase_017409_2);

#define VkglTestCase_017410_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017410_2 "lue.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017410, VkglTestCase_017410_1, VkglTestCase_017410_2);

#define VkglTestCase_017411_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017411_2 "ue.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017411, VkglTestCase_017411_1, VkglTestCase_017411_2);

#define VkglTestCase_017412_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017412_2 "alue.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017412, VkglTestCase_017412_1, VkglTestCase_017412_2);

#define VkglTestCase_017413_1 "dEQP-GLES31.functional.program_uniform.by_value.r"
#define VkglTestCase_017413_2 "ender.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017413, VkglTestCase_017413_1, VkglTestCase_017413_2);

#define VkglTestCase_017414_1 "dEQP-GLES31.functional.program_uniform.by_value.re"
#define VkglTestCase_017414_2 "nder.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017414, VkglTestCase_017414_1, VkglTestCase_017414_2);

#define VkglTestCase_017415_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017415_2 "render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017415, VkglTestCase_017415_1, VkglTestCase_017415_2);
