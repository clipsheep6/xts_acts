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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017291_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017291_2 "ns.invalid.texture_sampler3dshadow_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017291, VkglTestCase_017291_1, VkglTestCase_017291_2);

#define VkglTestCase_017292_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017292_2 "s.invalid.texture_sampler3dshadow_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017292, VkglTestCase_017292_1, VkglTestCase_017292_2);

#define VkglTestCase_017293_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017293_2 "alid.texture_sampler2darrayshadow_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017293, VkglTestCase_017293_1, VkglTestCase_017293_2);

#define VkglTestCase_017294_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017294_2 "lid.texture_sampler2darrayshadow_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017294, VkglTestCase_017294_1, VkglTestCase_017294_2);

#define VkglTestCase_017295_1 "dEQP-GLES3.functional.shaders.texture_functio"
#define VkglTestCase_017295_2 "ns.invalid.textureproj_samplercube_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017295, VkglTestCase_017295_1, VkglTestCase_017295_2);

#define VkglTestCase_017296_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017296_2 "s.invalid.textureproj_samplercube_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017296, VkglTestCase_017296_1, VkglTestCase_017296_2);

#define VkglTestCase_017297_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017297_2 "s.invalid.textureproj_isamplercube_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017297, VkglTestCase_017297_1, VkglTestCase_017297_2);

#define VkglTestCase_017298_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017298_2 ".invalid.textureproj_isamplercube_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017298, VkglTestCase_017298_1, VkglTestCase_017298_2);

#define VkglTestCase_017299_1 "dEQP-GLES3.functional.shaders.texture_function"
#define VkglTestCase_017299_2 "s.invalid.textureproj_usamplercube_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017299, VkglTestCase_017299_1, VkglTestCase_017299_2);

#define VkglTestCase_017300_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017300_2 ".invalid.textureproj_usamplercube_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017300, VkglTestCase_017300_1, VkglTestCase_017300_2);

#define VkglTestCase_017301_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017301_2 "invalid.textureproj_samplercube_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017301, VkglTestCase_017301_1, VkglTestCase_017301_2);

#define VkglTestCase_017302_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017302_2 "nvalid.textureproj_samplercube_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017302, VkglTestCase_017302_1, VkglTestCase_017302_2);

#define VkglTestCase_017303_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017303_2 "nvalid.textureproj_isamplercube_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017303, VkglTestCase_017303_1, VkglTestCase_017303_2);

#define VkglTestCase_017304_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017304_2 "valid.textureproj_isamplercube_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017304, VkglTestCase_017304_1, VkglTestCase_017304_2);

#define VkglTestCase_017305_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017305_2 "nvalid.textureproj_usamplercube_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017305, VkglTestCase_017305_1, VkglTestCase_017305_2);

#define VkglTestCase_017306_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017306_2 "valid.textureproj_usamplercube_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017306, VkglTestCase_017306_1, VkglTestCase_017306_2);

#define VkglTestCase_017307_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017307_2 "valid.textureproj_sampler2darrayshadow_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017307, VkglTestCase_017307_1, VkglTestCase_017307_2);

#define VkglTestCase_017308_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017308_2 "alid.textureproj_sampler2darrayshadow_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017308, VkglTestCase_017308_1, VkglTestCase_017308_2);

#define VkglTestCase_017309_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017309_2 "id.textureproj_sampler2darrayshadow_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017309, VkglTestCase_017309_1, VkglTestCase_017309_2);

#define VkglTestCase_017310_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017310_2 "d.textureproj_sampler2darrayshadow_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017310, VkglTestCase_017310_1, VkglTestCase_017310_2);

#define VkglTestCase_017311_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017311_2 "alid.texturelod_samplercubeshadow_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017311, VkglTestCase_017311_1, VkglTestCase_017311_2);

#define VkglTestCase_017312_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017312_2 "lid.texturelod_samplercubeshadow_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017312, VkglTestCase_017312_1, VkglTestCase_017312_2);

#define VkglTestCase_017313_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017313_2 "lid.texturelod_sampler2darrayshadow_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017313, VkglTestCase_017313_1, VkglTestCase_017313_2);

#define VkglTestCase_017314_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017314_2 "id.texturelod_sampler2darrayshadow_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017314, VkglTestCase_017314_1, VkglTestCase_017314_2);

#define VkglTestCase_017315_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017315_2 "nvalid.textureoffset_samplercube_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017315, VkglTestCase_017315_1, VkglTestCase_017315_2);

#define VkglTestCase_017316_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017316_2 "valid.textureoffset_samplercube_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017316, VkglTestCase_017316_1, VkglTestCase_017316_2);

#define VkglTestCase_017317_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017317_2 "valid.textureoffset_isamplercube_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017317, VkglTestCase_017317_1, VkglTestCase_017317_2);

#define VkglTestCase_017318_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017318_2 "alid.textureoffset_isamplercube_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017318, VkglTestCase_017318_1, VkglTestCase_017318_2);

#define VkglTestCase_017319_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017319_2 "valid.textureoffset_usamplercube_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017319, VkglTestCase_017319_1, VkglTestCase_017319_2);

#define VkglTestCase_017320_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017320_2 "alid.textureoffset_usamplercube_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017320, VkglTestCase_017320_1, VkglTestCase_017320_2);

#define VkglTestCase_017321_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017321_2 "nvalid.textureoffset_samplercube_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017321, VkglTestCase_017321_1, VkglTestCase_017321_2);

#define VkglTestCase_017322_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017322_2 "valid.textureoffset_samplercube_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017322, VkglTestCase_017322_1, VkglTestCase_017322_2);

#define VkglTestCase_017323_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017323_2 "valid.textureoffset_isamplercube_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017323, VkglTestCase_017323_1, VkglTestCase_017323_2);

#define VkglTestCase_017324_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017324_2 "alid.textureoffset_isamplercube_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017324, VkglTestCase_017324_1, VkglTestCase_017324_2);

#define VkglTestCase_017325_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017325_2 "valid.textureoffset_usamplercube_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017325, VkglTestCase_017325_1, VkglTestCase_017325_2);

#define VkglTestCase_017326_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017326_2 "alid.textureoffset_usamplercube_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017326, VkglTestCase_017326_1, VkglTestCase_017326_2);

#define VkglTestCase_017327_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017327_2 "lid.textureoffset_samplercube_vec3_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017327, VkglTestCase_017327_1, VkglTestCase_017327_2);

#define VkglTestCase_017328_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017328_2 "id.textureoffset_samplercube_vec3_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017328, VkglTestCase_017328_1, VkglTestCase_017328_2);

#define VkglTestCase_017329_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017329_2 "lid.textureoffset_samplercube_vec3_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017329, VkglTestCase_017329_1, VkglTestCase_017329_2);

#define VkglTestCase_017330_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017330_2 "id.textureoffset_samplercube_vec3_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017330, VkglTestCase_017330_1, VkglTestCase_017330_2);

#define VkglTestCase_017331_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017331_2 "alid.textureoffset_sampler2darray_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017331, VkglTestCase_017331_1, VkglTestCase_017331_2);

#define VkglTestCase_017332_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017332_2 "lid.textureoffset_sampler2darray_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017332, VkglTestCase_017332_1, VkglTestCase_017332_2);

#define VkglTestCase_017333_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017333_2 "d.textureoffset_sampler2darray_vec3_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017333, VkglTestCase_017333_1, VkglTestCase_017333_2);

#define VkglTestCase_017334_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017334_2 ".textureoffset_sampler2darray_vec3_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017334, VkglTestCase_017334_1, VkglTestCase_017334_2);

#define VkglTestCase_017335_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017335_2 "lid.textureoffset_samplercubeshadow_vec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017335, VkglTestCase_017335_1, VkglTestCase_017335_2);

#define VkglTestCase_017336_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017336_2 "id.textureoffset_samplercubeshadow_vec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017336, VkglTestCase_017336_1, VkglTestCase_017336_2);

#define VkglTestCase_017337_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017337_2 "lid.textureoffset_samplercubeshadow_vec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017337, VkglTestCase_017337_1, VkglTestCase_017337_2);

#define VkglTestCase_017338_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017338_2 "id.textureoffset_samplercubeshadow_vec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017338, VkglTestCase_017338_1, VkglTestCase_017338_2);

#define VkglTestCase_017339_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017339_2 "d.textureoffset_sampler2darrayshadow_vec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017339, VkglTestCase_017339_1, VkglTestCase_017339_2);

#define VkglTestCase_017340_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017340_2 ".textureoffset_sampler2darrayshadow_vec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017340, VkglTestCase_017340_1, VkglTestCase_017340_2);

#define VkglTestCase_017341_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017341_2 "extureoffset_sampler2darrayshadow_vec4_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017341, VkglTestCase_017341_1, VkglTestCase_017341_2);

#define VkglTestCase_017342_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017342_2 "xtureoffset_sampler2darrayshadow_vec4_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017342, VkglTestCase_017342_1, VkglTestCase_017342_2);

#define VkglTestCase_017343_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_017343_2 ".invalid.texelfetch_samplercube_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017343, VkglTestCase_017343_1, VkglTestCase_017343_2);

#define VkglTestCase_017344_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017344_2 "invalid.texelfetch_samplercube_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017344, VkglTestCase_017344_1, VkglTestCase_017344_2);

#define VkglTestCase_017345_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017345_2 "invalid.texelfetch_isamplercube_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017345, VkglTestCase_017345_1, VkglTestCase_017345_2);

#define VkglTestCase_017346_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017346_2 "nvalid.texelfetch_isamplercube_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017346, VkglTestCase_017346_1, VkglTestCase_017346_2);

#define VkglTestCase_017347_1 "dEQP-GLES3.functional.shaders.texture_functions."
#define VkglTestCase_017347_2 "invalid.texelfetch_usamplercube_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017347, VkglTestCase_017347_1, VkglTestCase_017347_2);

#define VkglTestCase_017348_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017348_2 "nvalid.texelfetch_usamplercube_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017348, VkglTestCase_017348_1, VkglTestCase_017348_2);

#define VkglTestCase_017349_1 "dEQP-GLES3.functional.shaders.texture_functions.i"
#define VkglTestCase_017349_2 "nvalid.texelfetch_sampler2dshadow_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017349, VkglTestCase_017349_1, VkglTestCase_017349_2);

#define VkglTestCase_017350_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017350_2 "valid.texelfetch_sampler2dshadow_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017350, VkglTestCase_017350_1, VkglTestCase_017350_2);

#define VkglTestCase_017351_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017351_2 "valid.texelfetch_samplercubeshadow_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017351, VkglTestCase_017351_1, VkglTestCase_017351_2);

#define VkglTestCase_017352_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017352_2 "alid.texelfetch_samplercubeshadow_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017352, VkglTestCase_017352_1, VkglTestCase_017352_2);

#define VkglTestCase_017353_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017353_2 "lid.texelfetch_sampler2darrayshadow_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017353, VkglTestCase_017353_1, VkglTestCase_017353_2);

#define VkglTestCase_017354_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017354_2 "id.texelfetch_sampler2darrayshadow_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017354, VkglTestCase_017354_1, VkglTestCase_017354_2);

#define VkglTestCase_017355_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017355_2 "valid.texelfetch_samplercube_ivec3_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017355, VkglTestCase_017355_1, VkglTestCase_017355_2);

#define VkglTestCase_017356_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017356_2 "alid.texelfetch_samplercube_ivec3_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017356, VkglTestCase_017356_1, VkglTestCase_017356_2);

#define VkglTestCase_017357_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017357_2 "lid.texelfetch_sampler2dshadow_ivec2_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017357, VkglTestCase_017357_1, VkglTestCase_017357_2);

#define VkglTestCase_017358_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017358_2 "id.texelfetch_sampler2dshadow_ivec2_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017358, VkglTestCase_017358_1, VkglTestCase_017358_2);

#define VkglTestCase_017359_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017359_2 "id.texelfetch_samplercubeshadow_ivec3_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017359, VkglTestCase_017359_1, VkglTestCase_017359_2);

#define VkglTestCase_017360_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017360_2 "d.texelfetch_samplercubeshadow_ivec3_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017360, VkglTestCase_017360_1, VkglTestCase_017360_2);

#define VkglTestCase_017361_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017361_2 ".texelfetch_sampler2darrayshadow_ivec3_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017361, VkglTestCase_017361_1, VkglTestCase_017361_2);

#define VkglTestCase_017362_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid."
#define VkglTestCase_017362_2 "texelfetch_sampler2darrayshadow_ivec3_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017362, VkglTestCase_017362_1, VkglTestCase_017362_2);

#define VkglTestCase_017363_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017363_2 "alid.textureprojoffset_samplercube_vec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017363, VkglTestCase_017363_1, VkglTestCase_017363_2);

#define VkglTestCase_017364_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017364_2 "lid.textureprojoffset_samplercube_vec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017364, VkglTestCase_017364_1, VkglTestCase_017364_2);

#define VkglTestCase_017365_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017365_2 "alid.textureprojoffset_samplercube_vec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017365, VkglTestCase_017365_1, VkglTestCase_017365_2);

#define VkglTestCase_017366_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017366_2 "lid.textureprojoffset_samplercube_vec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017366, VkglTestCase_017366_1, VkglTestCase_017366_2);

#define VkglTestCase_017367_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017367_2 "d.textureprojoffset_samplercubeshadow_vec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017367, VkglTestCase_017367_1, VkglTestCase_017367_2);

#define VkglTestCase_017368_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017368_2 ".textureprojoffset_samplercubeshadow_vec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017368, VkglTestCase_017368_1, VkglTestCase_017368_2);

#define VkglTestCase_017369_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid."
#define VkglTestCase_017369_2 "textureprojoffset_sampler2darrayshadow_vec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017369, VkglTestCase_017369_1, VkglTestCase_017369_2);

#define VkglTestCase_017370_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017370_2 "extureprojoffset_sampler2darrayshadow_vec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017370, VkglTestCase_017370_1, VkglTestCase_017370_2);

#define VkglTestCase_017371_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid."
#define VkglTestCase_017371_2 "textureprojoffset_sampler2darrayshadow_vec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017371, VkglTestCase_017371_1, VkglTestCase_017371_2);

#define VkglTestCase_017372_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017372_2 "extureprojoffset_sampler2darrayshadow_vec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017372, VkglTestCase_017372_1, VkglTestCase_017372_2);

#define VkglTestCase_017373_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017373_2 "d.texturelodoffset_samplercube_vec3_float_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017373, VkglTestCase_017373_1, VkglTestCase_017373_2);

#define VkglTestCase_017374_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017374_2 ".texturelodoffset_samplercube_vec3_float_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017374, VkglTestCase_017374_1, VkglTestCase_017374_2);

#define VkglTestCase_017375_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017375_2 "d.texturelodoffset_samplercube_vec3_float_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017375, VkglTestCase_017375_1, VkglTestCase_017375_2);

#define VkglTestCase_017376_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017376_2 ".texturelodoffset_samplercube_vec3_float_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017376, VkglTestCase_017376_1, VkglTestCase_017376_2);

#define VkglTestCase_017377_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017377_2 "exturelodoffset_samplercubeshadow_vec3_float_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017377, VkglTestCase_017377_1, VkglTestCase_017377_2);

#define VkglTestCase_017378_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017378_2 "xturelodoffset_samplercubeshadow_vec3_float_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017378, VkglTestCase_017378_1, VkglTestCase_017378_2);

#define VkglTestCase_017379_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017379_2 "xturelodoffset_sampler2darrayshadow_vec3_float_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017379, VkglTestCase_017379_1, VkglTestCase_017379_2);

#define VkglTestCase_017380_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017380_2 "turelodoffset_sampler2darrayshadow_vec3_float_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017380, VkglTestCase_017380_1, VkglTestCase_017380_2);

#define VkglTestCase_017381_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017381_2 "xturelodoffset_sampler2darrayshadow_vec3_float_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017381, VkglTestCase_017381_1, VkglTestCase_017381_2);

#define VkglTestCase_017382_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017382_2 "turelodoffset_sampler2darrayshadow_vec3_float_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017382, VkglTestCase_017382_1, VkglTestCase_017382_2);

#define VkglTestCase_017383_1 "dEQP-GLES3.functional.shaders.texture_functions.in"
#define VkglTestCase_017383_2 "valid.textureprojlod_samplercube_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017383, VkglTestCase_017383_1, VkglTestCase_017383_2);

#define VkglTestCase_017384_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017384_2 "alid.textureprojlod_samplercube_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017384, VkglTestCase_017384_1, VkglTestCase_017384_2);

#define VkglTestCase_017385_1 "dEQP-GLES3.functional.shaders.texture_functions.inv"
#define VkglTestCase_017385_2 "alid.textureprojlod_sampler2darray_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017385, VkglTestCase_017385_1, VkglTestCase_017385_2);

#define VkglTestCase_017386_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017386_2 "lid.textureprojlod_sampler2darray_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017386, VkglTestCase_017386_1, VkglTestCase_017386_2);

#define VkglTestCase_017387_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017387_2 "d.textureprojlod_sampler2darrayshadow_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017387, VkglTestCase_017387_1, VkglTestCase_017387_2);

#define VkglTestCase_017388_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017388_2 ".textureprojlod_sampler2darrayshadow_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017388, VkglTestCase_017388_1, VkglTestCase_017388_2);

#define VkglTestCase_017389_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017389_2 "lid.texturegrad_sampler2darray_vec3_vec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017389, VkglTestCase_017389_1, VkglTestCase_017389_2);

#define VkglTestCase_017390_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017390_2 "id.texturegrad_sampler2darray_vec3_vec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017390, VkglTestCase_017390_1, VkglTestCase_017390_2);

#define VkglTestCase_017391_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid."
#define VkglTestCase_017391_2 "texturegradoffset_samplercube_vec3_vec3_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017391, VkglTestCase_017391_1, VkglTestCase_017391_2);

#define VkglTestCase_017392_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017392_2 "exturegradoffset_samplercube_vec3_vec3_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017392, VkglTestCase_017392_1, VkglTestCase_017392_2);

#define VkglTestCase_017393_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid."
#define VkglTestCase_017393_2 "texturegradoffset_samplercube_vec3_vec3_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017393, VkglTestCase_017393_1, VkglTestCase_017393_2);

#define VkglTestCase_017394_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.t"
#define VkglTestCase_017394_2 "exturegradoffset_samplercube_vec3_vec3_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017394, VkglTestCase_017394_1, VkglTestCase_017394_2);

#define VkglTestCase_017395_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017395_2 "turegradoffset_samplercubeshadow_vec4_vec3_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017395, VkglTestCase_017395_1, VkglTestCase_017395_2);

#define VkglTestCase_017396_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.text"
#define VkglTestCase_017396_2 "uregradoffset_samplercubeshadow_vec4_vec3_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017396, VkglTestCase_017396_1, VkglTestCase_017396_2);

#define VkglTestCase_017397_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017397_2 "turegradoffset_samplercubeshadow_vec4_vec3_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017397, VkglTestCase_017397_1, VkglTestCase_017397_2);

#define VkglTestCase_017398_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.text"
#define VkglTestCase_017398_2 "uregradoffset_samplercubeshadow_vec4_vec3_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017398, VkglTestCase_017398_1, VkglTestCase_017398_2);

#define VkglTestCase_017399_1 "dEQP-GLES3.functional.shaders.texture_functions.inva"
#define VkglTestCase_017399_2 "lid.textureprojgrad_samplercube_vec4_vec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017399, VkglTestCase_017399_1, VkglTestCase_017399_2);

#define VkglTestCase_017400_1 "dEQP-GLES3.functional.shaders.texture_functions.inval"
#define VkglTestCase_017400_2 "id.textureprojgrad_samplercube_vec4_vec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017400, VkglTestCase_017400_1, VkglTestCase_017400_2);

#define VkglTestCase_017401_1 "dEQP-GLES3.functional.shaders.texture_functions.invali"
#define VkglTestCase_017401_2 "d.textureprojgrad_sampler2darray_vec4_vec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017401, VkglTestCase_017401_1, VkglTestCase_017401_2);

#define VkglTestCase_017402_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid"
#define VkglTestCase_017402_2 ".textureprojgrad_sampler2darray_vec4_vec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017402, VkglTestCase_017402_1, VkglTestCase_017402_2);

#define VkglTestCase_017403_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017403_2 "xtureprojgradoffset_samplercube_vec4_vec3_vec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017403, VkglTestCase_017403_1, VkglTestCase_017403_2);

#define VkglTestCase_017404_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017404_2 "tureprojgradoffset_samplercube_vec4_vec3_vec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017404, VkglTestCase_017404_1, VkglTestCase_017404_2);

#define VkglTestCase_017405_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.te"
#define VkglTestCase_017405_2 "xtureprojgradoffset_samplercube_vec4_vec3_vec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017405, VkglTestCase_017405_1, VkglTestCase_017405_2);

#define VkglTestCase_017406_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.tex"
#define VkglTestCase_017406_2 "tureprojgradoffset_samplercube_vec4_vec3_vec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017406, VkglTestCase_017406_1, VkglTestCase_017406_2);

#define VkglTestCase_017407_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.text"
#define VkglTestCase_017407_2 "ureprojgradoffset_sampler2darray_vec4_vec2_vec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017407, VkglTestCase_017407_1, VkglTestCase_017407_2);

#define VkglTestCase_017408_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.textu"
#define VkglTestCase_017408_2 "reprojgradoffset_sampler2darray_vec4_vec2_vec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017408, VkglTestCase_017408_1, VkglTestCase_017408_2);

#define VkglTestCase_017409_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.text"
#define VkglTestCase_017409_2 "ureprojgradoffset_sampler2darray_vec4_vec2_vec2_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017409, VkglTestCase_017409_1, VkglTestCase_017409_2);

#define VkglTestCase_017410_1 "dEQP-GLES3.functional.shaders.texture_functions.invalid.textu"
#define VkglTestCase_017410_2 "reprojgradoffset_sampler2darray_vec4_vec2_vec2_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017410, VkglTestCase_017410_1, VkglTestCase_017410_2);
