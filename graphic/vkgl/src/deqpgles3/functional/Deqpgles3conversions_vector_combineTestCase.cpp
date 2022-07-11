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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002341_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002341_2 "s.vector_combine.vec2_vec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002341, VkglTestCase_002341_1, VkglTestCase_002341_2);

#define VkglTestCase_002342_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002342_2 ".vector_combine.vec2_vec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002342, VkglTestCase_002342_1, VkglTestCase_002342_2);

#define VkglTestCase_002343_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002343_2 ".vector_combine.vec2_vec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002343, VkglTestCase_002343_1, VkglTestCase_002343_2);

#define VkglTestCase_002344_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002344_2 "vector_combine.vec2_vec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002344, VkglTestCase_002344_1, VkglTestCase_002344_2);

#define VkglTestCase_002345_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002345_2 ".vector_combine.vec2_vec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002345, VkglTestCase_002345_1, VkglTestCase_002345_2);

#define VkglTestCase_002346_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002346_2 "vector_combine.vec2_vec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002346, VkglTestCase_002346_1, VkglTestCase_002346_2);

#define VkglTestCase_002347_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002347_2 ".vector_combine.bvec2_bvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002347, VkglTestCase_002347_1, VkglTestCase_002347_2);

#define VkglTestCase_002348_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002348_2 "vector_combine.bvec2_bvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002348, VkglTestCase_002348_1, VkglTestCase_002348_2);

#define VkglTestCase_002349_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002349_2 "vector_combine.bvec2_bvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002349, VkglTestCase_002349_1, VkglTestCase_002349_2);

#define VkglTestCase_002350_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002350_2 "ector_combine.bvec2_bvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002350, VkglTestCase_002350_1, VkglTestCase_002350_2);

#define VkglTestCase_002351_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002351_2 "vector_combine.bvec2_bvec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002351, VkglTestCase_002351_1, VkglTestCase_002351_2);

#define VkglTestCase_002352_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002352_2 "ector_combine.bvec2_bvec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002352, VkglTestCase_002352_1, VkglTestCase_002352_2);

#define VkglTestCase_002353_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002353_2 "r_combine.float_float_float_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002353, VkglTestCase_002353_1, VkglTestCase_002353_2);

#define VkglTestCase_002354_1 "dEQP-GLES3.functional.shaders.conversions.vector"
#define VkglTestCase_002354_2 "_combine.float_float_float_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002354, VkglTestCase_002354_1, VkglTestCase_002354_2);

#define VkglTestCase_002355_1 "dEQP-GLES3.functional.shaders.conversions.vector"
#define VkglTestCase_002355_2 "_combine.float_float_float_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002355, VkglTestCase_002355_1, VkglTestCase_002355_2);

#define VkglTestCase_002356_1 "dEQP-GLES3.functional.shaders.conversions.vector_"
#define VkglTestCase_002356_2 "combine.float_float_float_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002356, VkglTestCase_002356_1, VkglTestCase_002356_2);

#define VkglTestCase_002357_1 "dEQP-GLES3.functional.shaders.conversions.vector"
#define VkglTestCase_002357_2 "_combine.float_float_float_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002357, VkglTestCase_002357_1, VkglTestCase_002357_2);

#define VkglTestCase_002358_1 "dEQP-GLES3.functional.shaders.conversions.vector_"
#define VkglTestCase_002358_2 "combine.float_float_float_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002358, VkglTestCase_002358_1, VkglTestCase_002358_2);

#define VkglTestCase_002359_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002359_2 "ector_combine.int_int_int_int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002359, VkglTestCase_002359_1, VkglTestCase_002359_2);

#define VkglTestCase_002360_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002360_2 "ctor_combine.int_int_int_int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002360, VkglTestCase_002360_1, VkglTestCase_002360_2);

#define VkglTestCase_002361_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002361_2 "ctor_combine.int_int_int_int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002361, VkglTestCase_002361_1, VkglTestCase_002361_2);

#define VkglTestCase_002362_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002362_2 "tor_combine.int_int_int_int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002362, VkglTestCase_002362_1, VkglTestCase_002362_2);

#define VkglTestCase_002363_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002363_2 "ctor_combine.int_int_int_int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002363, VkglTestCase_002363_1, VkglTestCase_002363_2);

#define VkglTestCase_002364_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002364_2 "tor_combine.int_int_int_int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002364, VkglTestCase_002364_1, VkglTestCase_002364_2);

#define VkglTestCase_002365_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002365_2 "tor_combine.uint_uint_uint_uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002365, VkglTestCase_002365_1, VkglTestCase_002365_2);

#define VkglTestCase_002366_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002366_2 "or_combine.uint_uint_uint_uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002366, VkglTestCase_002366_1, VkglTestCase_002366_2);

#define VkglTestCase_002367_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002367_2 "or_combine.uint_uint_uint_uint_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002367, VkglTestCase_002367_1, VkglTestCase_002367_2);

#define VkglTestCase_002368_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002368_2 "r_combine.uint_uint_uint_uint_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002368, VkglTestCase_002368_1, VkglTestCase_002368_2);

#define VkglTestCase_002369_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002369_2 "or_combine.uint_uint_uint_uint_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002369, VkglTestCase_002369_1, VkglTestCase_002369_2);

#define VkglTestCase_002370_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002370_2 "r_combine.uint_uint_uint_uint_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002370, VkglTestCase_002370_1, VkglTestCase_002370_2);

#define VkglTestCase_002371_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002371_2 "tor_combine.bool_bool_bool_bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002371, VkglTestCase_002371_1, VkglTestCase_002371_2);

#define VkglTestCase_002372_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002372_2 "or_combine.bool_bool_bool_bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002372, VkglTestCase_002372_1, VkglTestCase_002372_2);

#define VkglTestCase_002373_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002373_2 "or_combine.bool_bool_bool_bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002373, VkglTestCase_002373_1, VkglTestCase_002373_2);

#define VkglTestCase_002374_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002374_2 "r_combine.bool_bool_bool_bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002374, VkglTestCase_002374_1, VkglTestCase_002374_2);

#define VkglTestCase_002375_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002375_2 "or_combine.bool_bool_bool_bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002375, VkglTestCase_002375_1, VkglTestCase_002375_2);

#define VkglTestCase_002376_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002376_2 "r_combine.bool_bool_bool_bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002376, VkglTestCase_002376_1, VkglTestCase_002376_2);

#define VkglTestCase_002377_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002377_2 "tor_combine.bool_float_int_bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002377, VkglTestCase_002377_1, VkglTestCase_002377_2);

#define VkglTestCase_002378_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002378_2 "or_combine.bool_float_int_bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002378, VkglTestCase_002378_1, VkglTestCase_002378_2);

#define VkglTestCase_002379_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002379_2 "or_combine.bool_float_int_bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002379, VkglTestCase_002379_1, VkglTestCase_002379_2);

#define VkglTestCase_002380_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002380_2 "r_combine.bool_float_int_bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002380, VkglTestCase_002380_1, VkglTestCase_002380_2);

#define VkglTestCase_002381_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002381_2 "or_combine.bool_float_int_bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002381, VkglTestCase_002381_1, VkglTestCase_002381_2);

#define VkglTestCase_002382_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002382_2 "r_combine.bool_float_int_bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002382, VkglTestCase_002382_1, VkglTestCase_002382_2);

#define VkglTestCase_002383_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002383_2 ".vector_combine.vec2_ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002383, VkglTestCase_002383_1, VkglTestCase_002383_2);

#define VkglTestCase_002384_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002384_2 "vector_combine.vec2_ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002384, VkglTestCase_002384_1, VkglTestCase_002384_2);

#define VkglTestCase_002385_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002385_2 ".vector_combine.vec2_ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002385, VkglTestCase_002385_1, VkglTestCase_002385_2);

#define VkglTestCase_002386_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002386_2 "vector_combine.vec2_ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002386, VkglTestCase_002386_1, VkglTestCase_002386_2);

#define VkglTestCase_002387_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002387_2 ".vector_combine.vec2_ivec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002387, VkglTestCase_002387_1, VkglTestCase_002387_2);

#define VkglTestCase_002388_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002388_2 "vector_combine.vec2_ivec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002388, VkglTestCase_002388_1, VkglTestCase_002388_2);

#define VkglTestCase_002389_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002389_2 ".vector_combine.vec2_bvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002389, VkglTestCase_002389_1, VkglTestCase_002389_2);

#define VkglTestCase_002390_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002390_2 "vector_combine.vec2_bvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002390, VkglTestCase_002390_1, VkglTestCase_002390_2);

#define VkglTestCase_002391_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002391_2 ".vector_combine.vec2_bvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002391, VkglTestCase_002391_1, VkglTestCase_002391_2);

#define VkglTestCase_002392_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002392_2 "vector_combine.vec2_bvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002392, VkglTestCase_002392_1, VkglTestCase_002392_2);

#define VkglTestCase_002393_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002393_2 ".vector_combine.vec2_bvec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002393, VkglTestCase_002393_1, VkglTestCase_002393_2);

#define VkglTestCase_002394_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002394_2 "vector_combine.vec2_bvec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002394, VkglTestCase_002394_1, VkglTestCase_002394_2);

#define VkglTestCase_002395_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002395_2 ".vector_combine.bvec3_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002395, VkglTestCase_002395_1, VkglTestCase_002395_2);

#define VkglTestCase_002396_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002396_2 "vector_combine.bvec3_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002396, VkglTestCase_002396_1, VkglTestCase_002396_2);

#define VkglTestCase_002397_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002397_2 "vector_combine.bvec3_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002397, VkglTestCase_002397_1, VkglTestCase_002397_2);

#define VkglTestCase_002398_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002398_2 "ector_combine.bvec3_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002398, VkglTestCase_002398_1, VkglTestCase_002398_2);

#define VkglTestCase_002399_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002399_2 "vector_combine.bvec3_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002399, VkglTestCase_002399_1, VkglTestCase_002399_2);

#define VkglTestCase_002400_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002400_2 "ector_combine.bvec3_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002400, VkglTestCase_002400_1, VkglTestCase_002400_2);

#define VkglTestCase_002401_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002401_2 ".vector_combine.vec3_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002401, VkglTestCase_002401_1, VkglTestCase_002401_2);

#define VkglTestCase_002402_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002402_2 "vector_combine.vec3_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002402, VkglTestCase_002402_1, VkglTestCase_002402_2);

#define VkglTestCase_002403_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002403_2 ".vector_combine.vec3_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002403, VkglTestCase_002403_1, VkglTestCase_002403_2);

#define VkglTestCase_002404_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002404_2 "vector_combine.vec3_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002404, VkglTestCase_002404_1, VkglTestCase_002404_2);

#define VkglTestCase_002405_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002405_2 ".vector_combine.vec3_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002405, VkglTestCase_002405_1, VkglTestCase_002405_2);

#define VkglTestCase_002406_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002406_2 "vector_combine.vec3_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002406, VkglTestCase_002406_1, VkglTestCase_002406_2);

#define VkglTestCase_002407_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002407_2 "vector_combine.int_ivec2_int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002407, VkglTestCase_002407_1, VkglTestCase_002407_2);

#define VkglTestCase_002408_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002408_2 "ector_combine.int_ivec2_int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002408, VkglTestCase_002408_1, VkglTestCase_002408_2);

#define VkglTestCase_002409_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002409_2 "ector_combine.int_ivec2_int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002409, VkglTestCase_002409_1, VkglTestCase_002409_2);

#define VkglTestCase_002410_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002410_2 "ctor_combine.int_ivec2_int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002410, VkglTestCase_002410_1, VkglTestCase_002410_2);

#define VkglTestCase_002411_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002411_2 "ector_combine.int_ivec2_int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002411, VkglTestCase_002411_1, VkglTestCase_002411_2);

#define VkglTestCase_002412_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002412_2 "ctor_combine.int_ivec2_int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002412, VkglTestCase_002412_1, VkglTestCase_002412_2);

#define VkglTestCase_002413_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002413_2 "ctor_combine.bool_float_ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002413, VkglTestCase_002413_1, VkglTestCase_002413_2);

#define VkglTestCase_002414_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002414_2 "tor_combine.bool_float_ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002414, VkglTestCase_002414_1, VkglTestCase_002414_2);

#define VkglTestCase_002415_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002415_2 "ctor_combine.bool_float_ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002415, VkglTestCase_002415_1, VkglTestCase_002415_2);

#define VkglTestCase_002416_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002416_2 "tor_combine.bool_float_ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002416, VkglTestCase_002416_1, VkglTestCase_002416_2);

#define VkglTestCase_002417_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002417_2 "ctor_combine.bool_float_ivec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002417, VkglTestCase_002417_1, VkglTestCase_002417_2);

#define VkglTestCase_002418_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002418_2 "tor_combine.bool_float_ivec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002418, VkglTestCase_002418_1, VkglTestCase_002418_2);

#define VkglTestCase_002419_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002419_2 ".vector_combine.float_uvec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002419, VkglTestCase_002419_1, VkglTestCase_002419_2);

#define VkglTestCase_002420_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002420_2 "vector_combine.float_uvec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002420, VkglTestCase_002420_1, VkglTestCase_002420_2);

#define VkglTestCase_002421_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002421_2 "vector_combine.float_uvec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002421, VkglTestCase_002421_1, VkglTestCase_002421_2);

#define VkglTestCase_002422_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002422_2 "ector_combine.float_uvec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002422, VkglTestCase_002422_1, VkglTestCase_002422_2);

#define VkglTestCase_002423_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002423_2 "vector_combine.float_uvec3_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002423, VkglTestCase_002423_1, VkglTestCase_002423_2);

#define VkglTestCase_002424_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002424_2 "ector_combine.float_uvec3_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002424, VkglTestCase_002424_1, VkglTestCase_002424_2);

#define VkglTestCase_002425_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002425_2 "ector_combine.int_uvec2_bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002425, VkglTestCase_002425_1, VkglTestCase_002425_2);

#define VkglTestCase_002426_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002426_2 "ctor_combine.int_uvec2_bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002426, VkglTestCase_002426_1, VkglTestCase_002426_2);

#define VkglTestCase_002427_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002427_2 "ector_combine.int_uvec2_bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002427, VkglTestCase_002427_1, VkglTestCase_002427_2);

#define VkglTestCase_002428_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002428_2 "ctor_combine.int_uvec2_bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002428, VkglTestCase_002428_1, VkglTestCase_002428_2);

#define VkglTestCase_002429_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002429_2 "ector_combine.int_uvec2_bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002429, VkglTestCase_002429_1, VkglTestCase_002429_2);

#define VkglTestCase_002430_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002430_2 "ctor_combine.int_uvec2_bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002430, VkglTestCase_002430_1, VkglTestCase_002430_2);

#define VkglTestCase_002431_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002431_2 ".vector_combine.vec2_vec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002431, VkglTestCase_002431_1, VkglTestCase_002431_2);

#define VkglTestCase_002432_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002432_2 "vector_combine.vec2_vec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002432, VkglTestCase_002432_1, VkglTestCase_002432_2);

#define VkglTestCase_002433_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002433_2 "vector_combine.bvec2_bvec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002433, VkglTestCase_002433_1, VkglTestCase_002433_2);

#define VkglTestCase_002434_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002434_2 "ector_combine.bvec2_bvec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002434, VkglTestCase_002434_1, VkglTestCase_002434_2);

#define VkglTestCase_002435_1 "dEQP-GLES3.functional.shaders.conversions.vector"
#define VkglTestCase_002435_2 "_combine.float_float_float_float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002435, VkglTestCase_002435_1, VkglTestCase_002435_2);

#define VkglTestCase_002436_1 "dEQP-GLES3.functional.shaders.conversions.vector_"
#define VkglTestCase_002436_2 "combine.float_float_float_float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002436, VkglTestCase_002436_1, VkglTestCase_002436_2);

#define VkglTestCase_002437_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002437_2 "ctor_combine.int_int_int_int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002437, VkglTestCase_002437_1, VkglTestCase_002437_2);

#define VkglTestCase_002438_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002438_2 "tor_combine.int_int_int_int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002438, VkglTestCase_002438_1, VkglTestCase_002438_2);

#define VkglTestCase_002439_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002439_2 "or_combine.uint_uint_uint_uint_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002439, VkglTestCase_002439_1, VkglTestCase_002439_2);

#define VkglTestCase_002440_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002440_2 "r_combine.uint_uint_uint_uint_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002440, VkglTestCase_002440_1, VkglTestCase_002440_2);

#define VkglTestCase_002441_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002441_2 "or_combine.bool_bool_bool_bool_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002441, VkglTestCase_002441_1, VkglTestCase_002441_2);

#define VkglTestCase_002442_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002442_2 "r_combine.bool_bool_bool_bool_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002442, VkglTestCase_002442_1, VkglTestCase_002442_2);

#define VkglTestCase_002443_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002443_2 "or_combine.bool_float_int_bool_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002443, VkglTestCase_002443_1, VkglTestCase_002443_2);

#define VkglTestCase_002444_1 "dEQP-GLES3.functional.shaders.conversions.vecto"
#define VkglTestCase_002444_2 "r_combine.bool_float_int_bool_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002444, VkglTestCase_002444_1, VkglTestCase_002444_2);

#define VkglTestCase_002445_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002445_2 ".vector_combine.vec2_ivec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002445, VkglTestCase_002445_1, VkglTestCase_002445_2);

#define VkglTestCase_002446_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002446_2 "vector_combine.vec2_ivec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002446, VkglTestCase_002446_1, VkglTestCase_002446_2);

#define VkglTestCase_002447_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002447_2 ".vector_combine.vec2_bvec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002447, VkglTestCase_002447_1, VkglTestCase_002447_2);

#define VkglTestCase_002448_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002448_2 "vector_combine.vec2_bvec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002448, VkglTestCase_002448_1, VkglTestCase_002448_2);

#define VkglTestCase_002449_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002449_2 "vector_combine.bvec3_float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002449, VkglTestCase_002449_1, VkglTestCase_002449_2);

#define VkglTestCase_002450_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002450_2 "ector_combine.bvec3_float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002450, VkglTestCase_002450_1, VkglTestCase_002450_2);

#define VkglTestCase_002451_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002451_2 ".vector_combine.vec3_float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002451, VkglTestCase_002451_1, VkglTestCase_002451_2);

#define VkglTestCase_002452_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002452_2 "vector_combine.vec3_float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002452, VkglTestCase_002452_1, VkglTestCase_002452_2);

#define VkglTestCase_002453_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002453_2 "ector_combine.int_ivec2_int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002453, VkglTestCase_002453_1, VkglTestCase_002453_2);

#define VkglTestCase_002454_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002454_2 "ctor_combine.int_ivec2_int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002454, VkglTestCase_002454_1, VkglTestCase_002454_2);

#define VkglTestCase_002455_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002455_2 "ctor_combine.bool_float_ivec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002455, VkglTestCase_002455_1, VkglTestCase_002455_2);

#define VkglTestCase_002456_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002456_2 "tor_combine.bool_float_ivec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002456, VkglTestCase_002456_1, VkglTestCase_002456_2);

#define VkglTestCase_002457_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002457_2 "vector_combine.float_uvec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002457, VkglTestCase_002457_1, VkglTestCase_002457_2);

#define VkglTestCase_002458_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002458_2 "ector_combine.float_uvec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002458, VkglTestCase_002458_1, VkglTestCase_002458_2);

#define VkglTestCase_002459_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002459_2 "ector_combine.int_uvec2_bool_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002459, VkglTestCase_002459_1, VkglTestCase_002459_2);

#define VkglTestCase_002460_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002460_2 "ctor_combine.int_uvec2_bool_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002460, VkglTestCase_002460_1, VkglTestCase_002460_2);

#define VkglTestCase_002461_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002461_2 "ctor_combine.float_float_float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002461, VkglTestCase_002461_1, VkglTestCase_002461_2);

#define VkglTestCase_002462_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002462_2 "tor_combine.float_float_float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002462, VkglTestCase_002462_1, VkglTestCase_002462_2);

#define VkglTestCase_002463_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002463_2 "tor_combine.float_float_float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002463, VkglTestCase_002463_1, VkglTestCase_002463_2);

#define VkglTestCase_002464_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002464_2 "or_combine.float_float_float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002464, VkglTestCase_002464_1, VkglTestCase_002464_2);

#define VkglTestCase_002465_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002465_2 "tor_combine.float_float_float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002465, VkglTestCase_002465_1, VkglTestCase_002465_2);

#define VkglTestCase_002466_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002466_2 "or_combine.float_float_float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002466, VkglTestCase_002466_1, VkglTestCase_002466_2);

#define VkglTestCase_002467_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002467_2 ".vector_combine.int_int_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002467, VkglTestCase_002467_1, VkglTestCase_002467_2);

#define VkglTestCase_002468_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002468_2 "vector_combine.int_int_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002468, VkglTestCase_002468_1, VkglTestCase_002468_2);

#define VkglTestCase_002469_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002469_2 "vector_combine.int_int_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002469, VkglTestCase_002469_1, VkglTestCase_002469_2);

#define VkglTestCase_002470_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002470_2 "ector_combine.int_int_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002470, VkglTestCase_002470_1, VkglTestCase_002470_2);

#define VkglTestCase_002471_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002471_2 "vector_combine.int_int_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002471, VkglTestCase_002471_1, VkglTestCase_002471_2);

#define VkglTestCase_002472_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002472_2 "ector_combine.int_int_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002472, VkglTestCase_002472_1, VkglTestCase_002472_2);

#define VkglTestCase_002473_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002473_2 "ector_combine.uint_uint_uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002473, VkglTestCase_002473_1, VkglTestCase_002473_2);

#define VkglTestCase_002474_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002474_2 "ctor_combine.uint_uint_uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002474, VkglTestCase_002474_1, VkglTestCase_002474_2);

#define VkglTestCase_002475_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002475_2 "ector_combine.uint_uint_uint_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002475, VkglTestCase_002475_1, VkglTestCase_002475_2);

#define VkglTestCase_002476_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002476_2 "ctor_combine.uint_uint_uint_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002476, VkglTestCase_002476_1, VkglTestCase_002476_2);

#define VkglTestCase_002477_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002477_2 "ector_combine.uint_uint_uint_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002477, VkglTestCase_002477_1, VkglTestCase_002477_2);

#define VkglTestCase_002478_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002478_2 "ctor_combine.uint_uint_uint_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002478, VkglTestCase_002478_1, VkglTestCase_002478_2);

#define VkglTestCase_002479_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002479_2 "ector_combine.bool_bool_bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002479, VkglTestCase_002479_1, VkglTestCase_002479_2);

#define VkglTestCase_002480_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002480_2 "ctor_combine.bool_bool_bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002480, VkglTestCase_002480_1, VkglTestCase_002480_2);

#define VkglTestCase_002481_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002481_2 "ector_combine.bool_bool_bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002481, VkglTestCase_002481_1, VkglTestCase_002481_2);

#define VkglTestCase_002482_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002482_2 "ctor_combine.bool_bool_bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002482, VkglTestCase_002482_1, VkglTestCase_002482_2);

#define VkglTestCase_002483_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002483_2 "ector_combine.bool_bool_bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002483, VkglTestCase_002483_1, VkglTestCase_002483_2);

#define VkglTestCase_002484_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002484_2 "ctor_combine.bool_bool_bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002484, VkglTestCase_002484_1, VkglTestCase_002484_2);

#define VkglTestCase_002485_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002485_2 "ector_combine.bool_float_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002485, VkglTestCase_002485_1, VkglTestCase_002485_2);

#define VkglTestCase_002486_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002486_2 "ctor_combine.bool_float_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002486, VkglTestCase_002486_1, VkglTestCase_002486_2);

#define VkglTestCase_002487_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002487_2 "ector_combine.bool_float_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002487, VkglTestCase_002487_1, VkglTestCase_002487_2);

#define VkglTestCase_002488_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002488_2 "ctor_combine.bool_float_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002488, VkglTestCase_002488_1, VkglTestCase_002488_2);

#define VkglTestCase_002489_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002489_2 "ector_combine.bool_float_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002489, VkglTestCase_002489_1, VkglTestCase_002489_2);

#define VkglTestCase_002490_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002490_2 "ctor_combine.bool_float_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002490, VkglTestCase_002490_1, VkglTestCase_002490_2);

#define VkglTestCase_002491_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002491_2 "s.vector_combine.vec2_bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002491, VkglTestCase_002491_1, VkglTestCase_002491_2);

#define VkglTestCase_002492_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002492_2 ".vector_combine.vec2_bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002492, VkglTestCase_002492_1, VkglTestCase_002492_2);

#define VkglTestCase_002493_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002493_2 ".vector_combine.vec2_bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002493, VkglTestCase_002493_1, VkglTestCase_002493_2);

#define VkglTestCase_002494_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002494_2 "vector_combine.vec2_bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002494, VkglTestCase_002494_1, VkglTestCase_002494_2);

#define VkglTestCase_002495_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002495_2 ".vector_combine.vec2_bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002495, VkglTestCase_002495_1, VkglTestCase_002495_2);

#define VkglTestCase_002496_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002496_2 "vector_combine.vec2_bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002496, VkglTestCase_002496_1, VkglTestCase_002496_2);

#define VkglTestCase_002497_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002497_2 ".vector_combine.bvec2_float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002497, VkglTestCase_002497_1, VkglTestCase_002497_2);

#define VkglTestCase_002498_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002498_2 "vector_combine.bvec2_float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002498, VkglTestCase_002498_1, VkglTestCase_002498_2);

#define VkglTestCase_002499_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002499_2 "vector_combine.bvec2_float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002499, VkglTestCase_002499_1, VkglTestCase_002499_2);

#define VkglTestCase_002500_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002500_2 "ector_combine.bvec2_float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002500, VkglTestCase_002500_1, VkglTestCase_002500_2);

#define VkglTestCase_002501_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002501_2 "vector_combine.bvec2_float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002501, VkglTestCase_002501_1, VkglTestCase_002501_2);

#define VkglTestCase_002502_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002502_2 "ector_combine.bvec2_float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002502, VkglTestCase_002502_1, VkglTestCase_002502_2);

#define VkglTestCase_002503_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002503_2 "s.vector_combine.bvec2_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002503, VkglTestCase_002503_1, VkglTestCase_002503_2);

#define VkglTestCase_002504_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002504_2 ".vector_combine.bvec2_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002504, VkglTestCase_002504_1, VkglTestCase_002504_2);

#define VkglTestCase_002505_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002505_2 ".vector_combine.bvec2_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002505, VkglTestCase_002505_1, VkglTestCase_002505_2);

#define VkglTestCase_002506_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002506_2 "vector_combine.bvec2_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002506, VkglTestCase_002506_1, VkglTestCase_002506_2);

#define VkglTestCase_002507_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002507_2 ".vector_combine.bvec2_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002507, VkglTestCase_002507_1, VkglTestCase_002507_2);

#define VkglTestCase_002508_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002508_2 "vector_combine.bvec2_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002508, VkglTestCase_002508_1, VkglTestCase_002508_2);

#define VkglTestCase_002509_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002509_2 ".vector_combine.bool_ivec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002509, VkglTestCase_002509_1, VkglTestCase_002509_2);

#define VkglTestCase_002510_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002510_2 "vector_combine.bool_ivec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002510, VkglTestCase_002510_1, VkglTestCase_002510_2);

#define VkglTestCase_002511_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002511_2 ".vector_combine.bool_ivec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002511, VkglTestCase_002511_1, VkglTestCase_002511_2);

#define VkglTestCase_002512_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002512_2 "vector_combine.bool_ivec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002512, VkglTestCase_002512_1, VkglTestCase_002512_2);

#define VkglTestCase_002513_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002513_2 ".vector_combine.bool_ivec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002513, VkglTestCase_002513_1, VkglTestCase_002513_2);

#define VkglTestCase_002514_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002514_2 "vector_combine.bool_ivec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002514, VkglTestCase_002514_1, VkglTestCase_002514_2);

#define VkglTestCase_002515_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002515_2 ".vector_combine.float_uvec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002515, VkglTestCase_002515_1, VkglTestCase_002515_2);

#define VkglTestCase_002516_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002516_2 "vector_combine.float_uvec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002516, VkglTestCase_002516_1, VkglTestCase_002516_2);

#define VkglTestCase_002517_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002517_2 "vector_combine.float_uvec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002517, VkglTestCase_002517_1, VkglTestCase_002517_2);

#define VkglTestCase_002518_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002518_2 "ector_combine.float_uvec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002518, VkglTestCase_002518_1, VkglTestCase_002518_2);

#define VkglTestCase_002519_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002519_2 "vector_combine.float_uvec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002519, VkglTestCase_002519_1, VkglTestCase_002519_2);

#define VkglTestCase_002520_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002520_2 "ector_combine.float_uvec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002520, VkglTestCase_002520_1, VkglTestCase_002520_2);

#define VkglTestCase_002521_1 "dEQP-GLES3.functional.shaders.conversions.vec"
#define VkglTestCase_002521_2 "tor_combine.float_float_float_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002521, VkglTestCase_002521_1, VkglTestCase_002521_2);

#define VkglTestCase_002522_1 "dEQP-GLES3.functional.shaders.conversions.vect"
#define VkglTestCase_002522_2 "or_combine.float_float_float_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002522, VkglTestCase_002522_1, VkglTestCase_002522_2);

#define VkglTestCase_002523_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002523_2 "vector_combine.int_int_int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002523, VkglTestCase_002523_1, VkglTestCase_002523_2);

#define VkglTestCase_002524_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002524_2 "ector_combine.int_int_int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002524, VkglTestCase_002524_1, VkglTestCase_002524_2);

#define VkglTestCase_002525_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002525_2 "ector_combine.uint_uint_uint_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002525, VkglTestCase_002525_1, VkglTestCase_002525_2);

#define VkglTestCase_002526_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002526_2 "ctor_combine.uint_uint_uint_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002526, VkglTestCase_002526_1, VkglTestCase_002526_2);

#define VkglTestCase_002527_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002527_2 "ector_combine.bool_bool_bool_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002527, VkglTestCase_002527_1, VkglTestCase_002527_2);

#define VkglTestCase_002528_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002528_2 "ctor_combine.bool_bool_bool_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002528, VkglTestCase_002528_1, VkglTestCase_002528_2);

#define VkglTestCase_002529_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002529_2 "ector_combine.bool_float_int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002529, VkglTestCase_002529_1, VkglTestCase_002529_2);

#define VkglTestCase_002530_1 "dEQP-GLES3.functional.shaders.conversions.ve"
#define VkglTestCase_002530_2 "ctor_combine.bool_float_int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002530, VkglTestCase_002530_1, VkglTestCase_002530_2);

#define VkglTestCase_002531_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002531_2 ".vector_combine.vec2_bool_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002531, VkglTestCase_002531_1, VkglTestCase_002531_2);

#define VkglTestCase_002532_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002532_2 "vector_combine.vec2_bool_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002532, VkglTestCase_002532_1, VkglTestCase_002532_2);

#define VkglTestCase_002533_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002533_2 "vector_combine.bvec2_float_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002533, VkglTestCase_002533_1, VkglTestCase_002533_2);

#define VkglTestCase_002534_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002534_2 "ector_combine.bvec2_float_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002534, VkglTestCase_002534_1, VkglTestCase_002534_2);

#define VkglTestCase_002535_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002535_2 ".vector_combine.bvec2_int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002535, VkglTestCase_002535_1, VkglTestCase_002535_2);

#define VkglTestCase_002536_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002536_2 "vector_combine.bvec2_int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002536, VkglTestCase_002536_1, VkglTestCase_002536_2);

#define VkglTestCase_002537_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002537_2 ".vector_combine.bool_ivec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002537, VkglTestCase_002537_1, VkglTestCase_002537_2);

#define VkglTestCase_002538_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002538_2 "vector_combine.bool_ivec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002538, VkglTestCase_002538_1, VkglTestCase_002538_2);

#define VkglTestCase_002539_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002539_2 "vector_combine.float_uvec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002539, VkglTestCase_002539_1, VkglTestCase_002539_2);

#define VkglTestCase_002540_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002540_2 "ector_combine.float_uvec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002540, VkglTestCase_002540_1, VkglTestCase_002540_2);

#define VkglTestCase_002541_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002541_2 ".vector_combine.float_float_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002541, VkglTestCase_002541_1, VkglTestCase_002541_2);

#define VkglTestCase_002542_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002542_2 "vector_combine.float_float_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002542, VkglTestCase_002542_1, VkglTestCase_002542_2);

#define VkglTestCase_002543_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002543_2 "vector_combine.float_float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002543, VkglTestCase_002543_1, VkglTestCase_002543_2);

#define VkglTestCase_002544_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002544_2 "ector_combine.float_float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002544, VkglTestCase_002544_1, VkglTestCase_002544_2);

#define VkglTestCase_002545_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002545_2 "vector_combine.float_float_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002545, VkglTestCase_002545_1, VkglTestCase_002545_2);

#define VkglTestCase_002546_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002546_2 "ector_combine.float_float_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002546, VkglTestCase_002546_1, VkglTestCase_002546_2);

#define VkglTestCase_002547_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002547_2 "ns.vector_combine.int_int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002547, VkglTestCase_002547_1, VkglTestCase_002547_2);

#define VkglTestCase_002548_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002548_2 "s.vector_combine.int_int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002548, VkglTestCase_002548_1, VkglTestCase_002548_2);

#define VkglTestCase_002549_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002549_2 "s.vector_combine.int_int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002549, VkglTestCase_002549_1, VkglTestCase_002549_2);

#define VkglTestCase_002550_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002550_2 ".vector_combine.int_int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002550, VkglTestCase_002550_1, VkglTestCase_002550_2);

#define VkglTestCase_002551_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002551_2 "s.vector_combine.int_int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002551, VkglTestCase_002551_1, VkglTestCase_002551_2);

#define VkglTestCase_002552_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002552_2 ".vector_combine.int_int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002552, VkglTestCase_002552_1, VkglTestCase_002552_2);

#define VkglTestCase_002553_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002553_2 "s.vector_combine.uint_uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002553, VkglTestCase_002553_1, VkglTestCase_002553_2);

#define VkglTestCase_002554_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002554_2 ".vector_combine.uint_uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002554, VkglTestCase_002554_1, VkglTestCase_002554_2);

#define VkglTestCase_002555_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002555_2 ".vector_combine.uint_uint_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002555, VkglTestCase_002555_1, VkglTestCase_002555_2);

#define VkglTestCase_002556_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002556_2 "vector_combine.uint_uint_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002556, VkglTestCase_002556_1, VkglTestCase_002556_2);

#define VkglTestCase_002557_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002557_2 ".vector_combine.uint_uint_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002557, VkglTestCase_002557_1, VkglTestCase_002557_2);

#define VkglTestCase_002558_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002558_2 "vector_combine.uint_uint_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002558, VkglTestCase_002558_1, VkglTestCase_002558_2);

#define VkglTestCase_002559_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002559_2 "s.vector_combine.bool_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002559, VkglTestCase_002559_1, VkglTestCase_002559_2);

#define VkglTestCase_002560_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002560_2 ".vector_combine.bool_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002560, VkglTestCase_002560_1, VkglTestCase_002560_2);

#define VkglTestCase_002561_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002561_2 ".vector_combine.bool_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002561, VkglTestCase_002561_1, VkglTestCase_002561_2);

#define VkglTestCase_002562_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002562_2 "vector_combine.bool_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002562, VkglTestCase_002562_1, VkglTestCase_002562_2);

#define VkglTestCase_002563_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002563_2 ".vector_combine.bool_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002563, VkglTestCase_002563_1, VkglTestCase_002563_2);

#define VkglTestCase_002564_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002564_2 "vector_combine.bool_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002564, VkglTestCase_002564_1, VkglTestCase_002564_2);

#define VkglTestCase_002565_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002565_2 "s.vector_combine.float_int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002565, VkglTestCase_002565_1, VkglTestCase_002565_2);

#define VkglTestCase_002566_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002566_2 ".vector_combine.float_int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002566, VkglTestCase_002566_1, VkglTestCase_002566_2);

#define VkglTestCase_002567_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002567_2 ".vector_combine.float_int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002567, VkglTestCase_002567_1, VkglTestCase_002567_2);

#define VkglTestCase_002568_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002568_2 "vector_combine.float_int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002568, VkglTestCase_002568_1, VkglTestCase_002568_2);

#define VkglTestCase_002569_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002569_2 ".vector_combine.float_int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002569, VkglTestCase_002569_1, VkglTestCase_002569_2);

#define VkglTestCase_002570_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002570_2 "vector_combine.float_int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002570, VkglTestCase_002570_1, VkglTestCase_002570_2);

#define VkglTestCase_002571_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002571_2 ".vector_combine.float_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002571, VkglTestCase_002571_1, VkglTestCase_002571_2);

#define VkglTestCase_002572_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002572_2 "vector_combine.float_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002572, VkglTestCase_002572_1, VkglTestCase_002572_2);

#define VkglTestCase_002573_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002573_2 ".vector_combine.float_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002573, VkglTestCase_002573_1, VkglTestCase_002573_2);

#define VkglTestCase_002574_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002574_2 "vector_combine.float_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002574, VkglTestCase_002574_1, VkglTestCase_002574_2);

#define VkglTestCase_002575_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002575_2 ".vector_combine.float_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002575, VkglTestCase_002575_1, VkglTestCase_002575_2);

#define VkglTestCase_002576_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002576_2 "vector_combine.float_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002576, VkglTestCase_002576_1, VkglTestCase_002576_2);

#define VkglTestCase_002577_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002577_2 "s.vector_combine.int_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002577, VkglTestCase_002577_1, VkglTestCase_002577_2);

#define VkglTestCase_002578_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002578_2 ".vector_combine.int_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002578, VkglTestCase_002578_1, VkglTestCase_002578_2);

#define VkglTestCase_002579_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002579_2 "s.vector_combine.int_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002579, VkglTestCase_002579_1, VkglTestCase_002579_2);

#define VkglTestCase_002580_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002580_2 ".vector_combine.int_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002580, VkglTestCase_002580_1, VkglTestCase_002580_2);

#define VkglTestCase_002581_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002581_2 "s.vector_combine.int_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002581, VkglTestCase_002581_1, VkglTestCase_002581_2);

#define VkglTestCase_002582_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002582_2 ".vector_combine.int_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002582, VkglTestCase_002582_1, VkglTestCase_002582_2);

#define VkglTestCase_002583_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002583_2 "s.vector_combine.int_uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002583, VkglTestCase_002583_1, VkglTestCase_002583_2);

#define VkglTestCase_002584_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002584_2 ".vector_combine.int_uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002584, VkglTestCase_002584_1, VkglTestCase_002584_2);

#define VkglTestCase_002585_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002585_2 "s.vector_combine.int_uint_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002585, VkglTestCase_002585_1, VkglTestCase_002585_2);

#define VkglTestCase_002586_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002586_2 ".vector_combine.int_uint_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002586, VkglTestCase_002586_1, VkglTestCase_002586_2);

#define VkglTestCase_002587_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002587_2 "s.vector_combine.int_uint_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002587, VkglTestCase_002587_1, VkglTestCase_002587_2);

#define VkglTestCase_002588_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002588_2 ".vector_combine.int_uint_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002588, VkglTestCase_002588_1, VkglTestCase_002588_2);

#define VkglTestCase_002589_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002589_2 ".vector_combine.uint_float_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002589, VkglTestCase_002589_1, VkglTestCase_002589_2);

#define VkglTestCase_002590_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002590_2 "vector_combine.uint_float_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002590, VkglTestCase_002590_1, VkglTestCase_002590_2);

#define VkglTestCase_002591_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002591_2 ".vector_combine.uint_float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002591, VkglTestCase_002591_1, VkglTestCase_002591_2);

#define VkglTestCase_002592_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002592_2 "vector_combine.uint_float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002592, VkglTestCase_002592_1, VkglTestCase_002592_2);

#define VkglTestCase_002593_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002593_2 ".vector_combine.uint_float_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002593, VkglTestCase_002593_1, VkglTestCase_002593_2);

#define VkglTestCase_002594_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002594_2 "vector_combine.uint_float_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002594, VkglTestCase_002594_1, VkglTestCase_002594_2);

#define VkglTestCase_002595_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002595_2 "vector_combine.float_float_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002595, VkglTestCase_002595_1, VkglTestCase_002595_2);

#define VkglTestCase_002596_1 "dEQP-GLES3.functional.shaders.conversions.v"
#define VkglTestCase_002596_2 "ector_combine.float_float_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002596, VkglTestCase_002596_1, VkglTestCase_002596_2);

#define VkglTestCase_002597_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002597_2 "s.vector_combine.int_int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002597, VkglTestCase_002597_1, VkglTestCase_002597_2);

#define VkglTestCase_002598_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002598_2 ".vector_combine.int_int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002598, VkglTestCase_002598_1, VkglTestCase_002598_2);

#define VkglTestCase_002599_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002599_2 ".vector_combine.uint_uint_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002599, VkglTestCase_002599_1, VkglTestCase_002599_2);

#define VkglTestCase_002600_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002600_2 "vector_combine.uint_uint_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002600, VkglTestCase_002600_1, VkglTestCase_002600_2);

#define VkglTestCase_002601_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002601_2 ".vector_combine.bool_bool_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002601, VkglTestCase_002601_1, VkglTestCase_002601_2);

#define VkglTestCase_002602_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002602_2 "vector_combine.bool_bool_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002602, VkglTestCase_002602_1, VkglTestCase_002602_2);

#define VkglTestCase_002603_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002603_2 ".vector_combine.float_int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002603, VkglTestCase_002603_1, VkglTestCase_002603_2);

#define VkglTestCase_002604_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002604_2 "vector_combine.float_int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002604, VkglTestCase_002604_1, VkglTestCase_002604_2);

#define VkglTestCase_002605_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002605_2 ".vector_combine.float_bool_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002605, VkglTestCase_002605_1, VkglTestCase_002605_2);

#define VkglTestCase_002606_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002606_2 "vector_combine.float_bool_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002606, VkglTestCase_002606_1, VkglTestCase_002606_2);

#define VkglTestCase_002607_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002607_2 "s.vector_combine.int_bool_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002607, VkglTestCase_002607_1, VkglTestCase_002607_2);

#define VkglTestCase_002608_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002608_2 ".vector_combine.int_bool_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002608, VkglTestCase_002608_1, VkglTestCase_002608_2);

#define VkglTestCase_002609_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002609_2 "s.vector_combine.int_uint_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002609, VkglTestCase_002609_1, VkglTestCase_002609_2);

#define VkglTestCase_002610_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002610_2 ".vector_combine.int_uint_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002610, VkglTestCase_002610_1, VkglTestCase_002610_2);

#define VkglTestCase_002611_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002611_2 ".vector_combine.uint_float_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002611, VkglTestCase_002611_1, VkglTestCase_002611_2);

#define VkglTestCase_002612_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002612_2 "vector_combine.uint_float_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002612, VkglTestCase_002612_1, VkglTestCase_002612_2);
