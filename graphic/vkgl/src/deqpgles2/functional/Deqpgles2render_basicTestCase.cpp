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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014309_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014309_2 "lue.initial.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014309, VkglTestCase_014309_1, VkglTestCase_014309_2);

#define VkglTestCase_014310_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014310_2 "ue.initial.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014310, VkglTestCase_014310_1, VkglTestCase_014310_2);

#define VkglTestCase_014311_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014311_2 "alue.initial.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014311, VkglTestCase_014311_1, VkglTestCase_014311_2);

#define VkglTestCase_014312_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014312_2 "lue.initial.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014312, VkglTestCase_014312_1, VkglTestCase_014312_2);

#define VkglTestCase_014313_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014313_2 "ue.initial.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014313, VkglTestCase_014313_1, VkglTestCase_014313_2);

#define VkglTestCase_014314_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014314_2 "alue.initial.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014314, VkglTestCase_014314_1, VkglTestCase_014314_2);

#define VkglTestCase_014315_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014315_2 "lue.initial.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014315, VkglTestCase_014315_1, VkglTestCase_014315_2);

#define VkglTestCase_014316_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014316_2 "ue.initial.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014316, VkglTestCase_014316_1, VkglTestCase_014316_2);

#define VkglTestCase_014317_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014317_2 "alue.initial.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014317, VkglTestCase_014317_1, VkglTestCase_014317_2);

#define VkglTestCase_014318_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014318_2 "lue.initial.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014318, VkglTestCase_014318_1, VkglTestCase_014318_2);

#define VkglTestCase_014319_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014319_2 "ue.initial.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014319, VkglTestCase_014319_1, VkglTestCase_014319_2);

#define VkglTestCase_014320_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014320_2 "alue.initial.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014320, VkglTestCase_014320_1, VkglTestCase_014320_2);

#define VkglTestCase_014321_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014321_2 "lue.initial.render.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014321, VkglTestCase_014321_1, VkglTestCase_014321_2);

#define VkglTestCase_014322_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014322_2 "ue.initial.render.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014322, VkglTestCase_014322_1, VkglTestCase_014322_2);

#define VkglTestCase_014323_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014323_2 "alue.initial.render.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014323, VkglTestCase_014323_1, VkglTestCase_014323_2);

#define VkglTestCase_014324_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014324_2 "lue.initial.render.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014324, VkglTestCase_014324_1, VkglTestCase_014324_2);

#define VkglTestCase_014325_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014325_2 "ue.initial.render.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014325, VkglTestCase_014325_1, VkglTestCase_014325_2);

#define VkglTestCase_014326_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014326_2 "alue.initial.render.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014326, VkglTestCase_014326_1, VkglTestCase_014326_2);

#define VkglTestCase_014327_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014327_2 "lue.initial.render.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014327, VkglTestCase_014327_1, VkglTestCase_014327_2);

#define VkglTestCase_014328_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014328_2 "ue.initial.render.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014328, VkglTestCase_014328_1, VkglTestCase_014328_2);

#define VkglTestCase_014329_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014329_2 "alue.initial.render.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014329, VkglTestCase_014329_1, VkglTestCase_014329_2);

#define VkglTestCase_014330_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014330_2 "alue.initial.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014330, VkglTestCase_014330_1, VkglTestCase_014330_2);

#define VkglTestCase_014331_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014331_2 "lue.initial.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014331, VkglTestCase_014331_1, VkglTestCase_014331_2);

#define VkglTestCase_014332_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014332_2 "value.initial.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014332, VkglTestCase_014332_1, VkglTestCase_014332_2);

#define VkglTestCase_014333_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014333_2 "lue.initial.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014333, VkglTestCase_014333_1, VkglTestCase_014333_2);

#define VkglTestCase_014334_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014334_2 "ue.initial.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014334, VkglTestCase_014334_1, VkglTestCase_014334_2);

#define VkglTestCase_014335_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014335_2 "alue.initial.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014335, VkglTestCase_014335_1, VkglTestCase_014335_2);

#define VkglTestCase_014336_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014336_2 "lue.initial.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014336, VkglTestCase_014336_1, VkglTestCase_014336_2);

#define VkglTestCase_014337_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014337_2 "ue.initial.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014337, VkglTestCase_014337_1, VkglTestCase_014337_2);

#define VkglTestCase_014338_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014338_2 "alue.initial.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014338, VkglTestCase_014338_1, VkglTestCase_014338_2);

#define VkglTestCase_014339_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014339_2 "lue.initial.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014339, VkglTestCase_014339_1, VkglTestCase_014339_2);

#define VkglTestCase_014340_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014340_2 "ue.initial.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014340, VkglTestCase_014340_1, VkglTestCase_014340_2);

#define VkglTestCase_014341_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014341_2 "alue.initial.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014341, VkglTestCase_014341_1, VkglTestCase_014341_2);

#define VkglTestCase_014342_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014342_2 "lue.initial.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014342, VkglTestCase_014342_1, VkglTestCase_014342_2);

#define VkglTestCase_014343_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014343_2 "ue.initial.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014343, VkglTestCase_014343_1, VkglTestCase_014343_2);

#define VkglTestCase_014344_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014344_2 "alue.initial.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014344, VkglTestCase_014344_1, VkglTestCase_014344_2);

#define VkglTestCase_014345_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014345_2 "lue.initial.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014345, VkglTestCase_014345_1, VkglTestCase_014345_2);

#define VkglTestCase_014346_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014346_2 "ue.initial.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014346, VkglTestCase_014346_1, VkglTestCase_014346_2);

#define VkglTestCase_014347_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014347_2 "alue.initial.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014347, VkglTestCase_014347_1, VkglTestCase_014347_2);

#define VkglTestCase_014348_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014348_2 "lue.initial.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014348, VkglTestCase_014348_1, VkglTestCase_014348_2);

#define VkglTestCase_014349_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014349_2 "ue.initial.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014349, VkglTestCase_014349_1, VkglTestCase_014349_2);

#define VkglTestCase_014350_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014350_2 "alue.initial.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014350, VkglTestCase_014350_1, VkglTestCase_014350_2);

#define VkglTestCase_014351_1 "dEQP-GLES2.functional.uniform_api.va"
#define VkglTestCase_014351_2 "lue.initial.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014351, VkglTestCase_014351_1, VkglTestCase_014351_2);

#define VkglTestCase_014352_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014352_2 "ue.initial.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014352, VkglTestCase_014352_1, VkglTestCase_014352_2);

#define VkglTestCase_014353_1 "dEQP-GLES2.functional.uniform_api.v"
#define VkglTestCase_014353_2 "alue.initial.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014353, VkglTestCase_014353_1, VkglTestCase_014353_2);

#define VkglTestCase_014354_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014354_2 "e.initial.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014354, VkglTestCase_014354_1, VkglTestCase_014354_2);

#define VkglTestCase_014355_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014355_2 ".initial.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014355, VkglTestCase_014355_1, VkglTestCase_014355_2);

#define VkglTestCase_014356_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014356_2 "ue.initial.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014356, VkglTestCase_014356_1, VkglTestCase_014356_2);

#define VkglTestCase_014357_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014357_2 ".initial.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014357, VkglTestCase_014357_1, VkglTestCase_014357_2);

#define VkglTestCase_014358_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014358_2 "initial.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014358, VkglTestCase_014358_1, VkglTestCase_014358_2);

#define VkglTestCase_014359_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014359_2 "e.initial.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014359, VkglTestCase_014359_1, VkglTestCase_014359_2);

#define VkglTestCase_014629_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014629_2 "signed.by_pointer.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014629, VkglTestCase_014629_1, VkglTestCase_014629_2);

#define VkglTestCase_014630_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014630_2 "igned.by_pointer.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014630, VkglTestCase_014630_1, VkglTestCase_014630_2);

#define VkglTestCase_014631_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014631_2 "ssigned.by_pointer.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014631, VkglTestCase_014631_1, VkglTestCase_014631_2);

#define VkglTestCase_014632_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014632_2 "signed.by_pointer.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014632, VkglTestCase_014632_1, VkglTestCase_014632_2);

#define VkglTestCase_014633_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014633_2 "igned.by_pointer.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014633, VkglTestCase_014633_1, VkglTestCase_014633_2);

#define VkglTestCase_014634_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014634_2 "ssigned.by_pointer.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014634, VkglTestCase_014634_1, VkglTestCase_014634_2);

#define VkglTestCase_014635_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014635_2 "signed.by_pointer.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014635, VkglTestCase_014635_1, VkglTestCase_014635_2);

#define VkglTestCase_014636_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014636_2 "igned.by_pointer.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014636, VkglTestCase_014636_1, VkglTestCase_014636_2);

#define VkglTestCase_014637_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014637_2 "ssigned.by_pointer.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014637, VkglTestCase_014637_1, VkglTestCase_014637_2);

#define VkglTestCase_014638_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014638_2 "signed.by_pointer.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014638, VkglTestCase_014638_1, VkglTestCase_014638_2);

#define VkglTestCase_014639_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014639_2 "igned.by_pointer.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014639, VkglTestCase_014639_1, VkglTestCase_014639_2);

#define VkglTestCase_014640_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014640_2 "ssigned.by_pointer.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014640, VkglTestCase_014640_1, VkglTestCase_014640_2);

#define VkglTestCase_014641_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014641_2 "signed.by_pointer.render.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014641, VkglTestCase_014641_1, VkglTestCase_014641_2);

#define VkglTestCase_014642_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014642_2 "igned.by_pointer.render.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014642, VkglTestCase_014642_1, VkglTestCase_014642_2);

#define VkglTestCase_014643_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014643_2 "ssigned.by_pointer.render.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014643, VkglTestCase_014643_1, VkglTestCase_014643_2);

#define VkglTestCase_014644_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014644_2 "signed.by_pointer.render.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014644, VkglTestCase_014644_1, VkglTestCase_014644_2);

#define VkglTestCase_014645_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014645_2 "igned.by_pointer.render.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014645, VkglTestCase_014645_1, VkglTestCase_014645_2);

#define VkglTestCase_014646_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014646_2 "ssigned.by_pointer.render.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014646, VkglTestCase_014646_1, VkglTestCase_014646_2);

#define VkglTestCase_014647_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014647_2 "signed.by_pointer.render.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014647, VkglTestCase_014647_1, VkglTestCase_014647_2);

#define VkglTestCase_014648_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014648_2 "igned.by_pointer.render.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014648, VkglTestCase_014648_1, VkglTestCase_014648_2);

#define VkglTestCase_014649_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014649_2 "ssigned.by_pointer.render.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014649, VkglTestCase_014649_1, VkglTestCase_014649_2);

#define VkglTestCase_014650_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014650_2 "ssigned.by_pointer.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014650, VkglTestCase_014650_1, VkglTestCase_014650_2);

#define VkglTestCase_014651_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014651_2 "signed.by_pointer.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014651, VkglTestCase_014651_1, VkglTestCase_014651_2);

#define VkglTestCase_014652_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014652_2 "assigned.by_pointer.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014652, VkglTestCase_014652_1, VkglTestCase_014652_2);

#define VkglTestCase_014653_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014653_2 "signed.by_pointer.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014653, VkglTestCase_014653_1, VkglTestCase_014653_2);

#define VkglTestCase_014654_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014654_2 "igned.by_pointer.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014654, VkglTestCase_014654_1, VkglTestCase_014654_2);

#define VkglTestCase_014655_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014655_2 "ssigned.by_pointer.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014655, VkglTestCase_014655_1, VkglTestCase_014655_2);

#define VkglTestCase_014656_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014656_2 "signed.by_pointer.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014656, VkglTestCase_014656_1, VkglTestCase_014656_2);

#define VkglTestCase_014657_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014657_2 "igned.by_pointer.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014657, VkglTestCase_014657_1, VkglTestCase_014657_2);

#define VkglTestCase_014658_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014658_2 "ssigned.by_pointer.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014658, VkglTestCase_014658_1, VkglTestCase_014658_2);

#define VkglTestCase_014659_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014659_2 "signed.by_pointer.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014659, VkglTestCase_014659_1, VkglTestCase_014659_2);

#define VkglTestCase_014660_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014660_2 "igned.by_pointer.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014660, VkglTestCase_014660_1, VkglTestCase_014660_2);

#define VkglTestCase_014661_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014661_2 "ssigned.by_pointer.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014661, VkglTestCase_014661_1, VkglTestCase_014661_2);

#define VkglTestCase_014662_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014662_2 "signed.by_pointer.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014662, VkglTestCase_014662_1, VkglTestCase_014662_2);

#define VkglTestCase_014663_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014663_2 "igned.by_pointer.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014663, VkglTestCase_014663_1, VkglTestCase_014663_2);

#define VkglTestCase_014664_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014664_2 "ssigned.by_pointer.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014664, VkglTestCase_014664_1, VkglTestCase_014664_2);

#define VkglTestCase_014665_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014665_2 "signed.by_pointer.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014665, VkglTestCase_014665_1, VkglTestCase_014665_2);

#define VkglTestCase_014666_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014666_2 "igned.by_pointer.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014666, VkglTestCase_014666_1, VkglTestCase_014666_2);

#define VkglTestCase_014667_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014667_2 "ssigned.by_pointer.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014667, VkglTestCase_014667_1, VkglTestCase_014667_2);

#define VkglTestCase_014668_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014668_2 "signed.by_pointer.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014668, VkglTestCase_014668_1, VkglTestCase_014668_2);

#define VkglTestCase_014669_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014669_2 "igned.by_pointer.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014669, VkglTestCase_014669_1, VkglTestCase_014669_2);

#define VkglTestCase_014670_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014670_2 "ssigned.by_pointer.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014670, VkglTestCase_014670_1, VkglTestCase_014670_2);

#define VkglTestCase_014671_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014671_2 "signed.by_pointer.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014671, VkglTestCase_014671_1, VkglTestCase_014671_2);

#define VkglTestCase_014672_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014672_2 "igned.by_pointer.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014672, VkglTestCase_014672_1, VkglTestCase_014672_2);

#define VkglTestCase_014673_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014673_2 "ssigned.by_pointer.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014673, VkglTestCase_014673_1, VkglTestCase_014673_2);

#define VkglTestCase_014674_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014674_2 "gned.by_pointer.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014674, VkglTestCase_014674_1, VkglTestCase_014674_2);

#define VkglTestCase_014675_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014675_2 "ned.by_pointer.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014675, VkglTestCase_014675_1, VkglTestCase_014675_2);

#define VkglTestCase_014676_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014676_2 "igned.by_pointer.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014676, VkglTestCase_014676_1, VkglTestCase_014676_2);

#define VkglTestCase_014677_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014677_2 "ned.by_pointer.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014677, VkglTestCase_014677_1, VkglTestCase_014677_2);

#define VkglTestCase_014678_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014678_2 "ed.by_pointer.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014678, VkglTestCase_014678_1, VkglTestCase_014678_2);

#define VkglTestCase_014679_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014679_2 "gned.by_pointer.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014679, VkglTestCase_014679_1, VkglTestCase_014679_2);

#define VkglTestCase_014933_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014933_2 "ssigned.by_value.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014933, VkglTestCase_014933_1, VkglTestCase_014933_2);

#define VkglTestCase_014934_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014934_2 "signed.by_value.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014934, VkglTestCase_014934_1, VkglTestCase_014934_2);

#define VkglTestCase_014935_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014935_2 "assigned.by_value.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014935, VkglTestCase_014935_1, VkglTestCase_014935_2);

#define VkglTestCase_014936_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014936_2 "ssigned.by_value.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014936, VkglTestCase_014936_1, VkglTestCase_014936_2);

#define VkglTestCase_014937_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014937_2 "signed.by_value.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014937, VkglTestCase_014937_1, VkglTestCase_014937_2);

#define VkglTestCase_014938_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014938_2 "assigned.by_value.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014938, VkglTestCase_014938_1, VkglTestCase_014938_2);

#define VkglTestCase_014939_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014939_2 "ssigned.by_value.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014939, VkglTestCase_014939_1, VkglTestCase_014939_2);

#define VkglTestCase_014940_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014940_2 "signed.by_value.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014940, VkglTestCase_014940_1, VkglTestCase_014940_2);

#define VkglTestCase_014941_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014941_2 "assigned.by_value.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014941, VkglTestCase_014941_1, VkglTestCase_014941_2);

#define VkglTestCase_014942_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014942_2 "ssigned.by_value.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014942, VkglTestCase_014942_1, VkglTestCase_014942_2);

#define VkglTestCase_014943_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014943_2 "signed.by_value.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014943, VkglTestCase_014943_1, VkglTestCase_014943_2);

#define VkglTestCase_014944_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014944_2 "assigned.by_value.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014944, VkglTestCase_014944_1, VkglTestCase_014944_2);

#define VkglTestCase_014945_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014945_2 "assigned.by_value.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014945, VkglTestCase_014945_1, VkglTestCase_014945_2);

#define VkglTestCase_014946_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014946_2 "ssigned.by_value.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014946, VkglTestCase_014946_1, VkglTestCase_014946_2);

#define VkglTestCase_014947_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014947_2 ".assigned.by_value.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014947, VkglTestCase_014947_1, VkglTestCase_014947_2);

#define VkglTestCase_014948_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014948_2 "ssigned.by_value.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014948, VkglTestCase_014948_1, VkglTestCase_014948_2);

#define VkglTestCase_014949_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014949_2 "signed.by_value.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014949, VkglTestCase_014949_1, VkglTestCase_014949_2);

#define VkglTestCase_014950_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014950_2 "assigned.by_value.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014950, VkglTestCase_014950_1, VkglTestCase_014950_2);

#define VkglTestCase_014951_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014951_2 "ssigned.by_value.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014951, VkglTestCase_014951_1, VkglTestCase_014951_2);

#define VkglTestCase_014952_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014952_2 "signed.by_value.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014952, VkglTestCase_014952_1, VkglTestCase_014952_2);

#define VkglTestCase_014953_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014953_2 "assigned.by_value.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014953, VkglTestCase_014953_1, VkglTestCase_014953_2);

#define VkglTestCase_014954_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014954_2 "ssigned.by_value.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014954, VkglTestCase_014954_1, VkglTestCase_014954_2);

#define VkglTestCase_014955_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014955_2 "signed.by_value.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014955, VkglTestCase_014955_1, VkglTestCase_014955_2);

#define VkglTestCase_014956_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014956_2 "assigned.by_value.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014956, VkglTestCase_014956_1, VkglTestCase_014956_2);

#define VkglTestCase_014957_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014957_2 "ssigned.by_value.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014957, VkglTestCase_014957_1, VkglTestCase_014957_2);

#define VkglTestCase_014958_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014958_2 "signed.by_value.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014958, VkglTestCase_014958_1, VkglTestCase_014958_2);

#define VkglTestCase_014959_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014959_2 "assigned.by_value.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014959, VkglTestCase_014959_1, VkglTestCase_014959_2);

#define VkglTestCase_014960_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014960_2 "ssigned.by_value.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014960, VkglTestCase_014960_1, VkglTestCase_014960_2);

#define VkglTestCase_014961_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014961_2 "signed.by_value.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014961, VkglTestCase_014961_1, VkglTestCase_014961_2);

#define VkglTestCase_014962_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014962_2 "assigned.by_value.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014962, VkglTestCase_014962_1, VkglTestCase_014962_2);

#define VkglTestCase_014963_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014963_2 "ssigned.by_value.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014963, VkglTestCase_014963_1, VkglTestCase_014963_2);

#define VkglTestCase_014964_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014964_2 "signed.by_value.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014964, VkglTestCase_014964_1, VkglTestCase_014964_2);

#define VkglTestCase_014965_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014965_2 "assigned.by_value.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014965, VkglTestCase_014965_1, VkglTestCase_014965_2);

#define VkglTestCase_014966_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_014966_2 "ssigned.by_value.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014966, VkglTestCase_014966_1, VkglTestCase_014966_2);

#define VkglTestCase_014967_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014967_2 "signed.by_value.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014967, VkglTestCase_014967_1, VkglTestCase_014967_2);

#define VkglTestCase_014968_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014968_2 "assigned.by_value.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014968, VkglTestCase_014968_1, VkglTestCase_014968_2);

#define VkglTestCase_014969_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014969_2 "igned.by_value.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014969, VkglTestCase_014969_1, VkglTestCase_014969_2);

#define VkglTestCase_014970_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014970_2 "gned.by_value.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014970, VkglTestCase_014970_1, VkglTestCase_014970_2);

#define VkglTestCase_014971_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014971_2 "signed.by_value.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014971, VkglTestCase_014971_1, VkglTestCase_014971_2);

#define VkglTestCase_014972_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014972_2 "gned.by_value.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014972, VkglTestCase_014972_1, VkglTestCase_014972_2);

#define VkglTestCase_014973_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014973_2 "ned.by_value.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014973, VkglTestCase_014973_1, VkglTestCase_014973_2);

#define VkglTestCase_014974_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014974_2 "igned.by_value.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014974, VkglTestCase_014974_1, VkglTestCase_014974_2);
