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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005339_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005339_2 ".arithmetic.literal_before_input.mul.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005339, VkglTestCase_005339_1, VkglTestCase_005339_2);

#define VkglTestCase_005340_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005340_2 "arithmetic.literal_before_input.mul.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005340, VkglTestCase_005340_1, VkglTestCase_005340_2);

#define VkglTestCase_005341_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005341_2 "1.arithmetic.literal_before_input.mul.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005341, VkglTestCase_005341_1, VkglTestCase_005341_2);

#define VkglTestCase_005342_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005342_2 ".arithmetic.literal_before_input.mul.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005342, VkglTestCase_005342_1, VkglTestCase_005342_2);

#define VkglTestCase_005343_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005343_2 "1.arithmetic.literal_before_input.mul.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005343, VkglTestCase_005343_1, VkglTestCase_005343_2);

#define VkglTestCase_005344_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005344_2 ".arithmetic.literal_before_input.mul.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005344, VkglTestCase_005344_1, VkglTestCase_005344_2);

#define VkglTestCase_005345_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005345_2 "1.arithmetic.literal_before_input.mul.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005345, VkglTestCase_005345_1, VkglTestCase_005345_2);

#define VkglTestCase_005346_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005346_2 ".arithmetic.literal_before_input.mul.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005346, VkglTestCase_005346_1, VkglTestCase_005346_2);

#define VkglTestCase_005347_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005347_2 "1.arithmetic.literal_before_input.mul.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005347, VkglTestCase_005347_1, VkglTestCase_005347_2);

#define VkglTestCase_005348_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005348_2 ".arithmetic.literal_before_input.mul.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005348, VkglTestCase_005348_1, VkglTestCase_005348_2);

#define VkglTestCase_005349_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005349_2 ".arithmetic.literal_before_input.mul.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005349, VkglTestCase_005349_1, VkglTestCase_005349_2);

#define VkglTestCase_005350_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005350_2 "arithmetic.literal_before_input.mul.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005350, VkglTestCase_005350_1, VkglTestCase_005350_2);

#define VkglTestCase_005351_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005351_2 ".arithmetic.literal_before_input.mul.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005351, VkglTestCase_005351_1, VkglTestCase_005351_2);

#define VkglTestCase_005352_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005352_2 "arithmetic.literal_before_input.mul.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005352, VkglTestCase_005352_1, VkglTestCase_005352_2);

#define VkglTestCase_005353_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005353_2 ".arithmetic.literal_before_input.mul.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005353, VkglTestCase_005353_1, VkglTestCase_005353_2);

#define VkglTestCase_005354_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005354_2 "arithmetic.literal_before_input.mul.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005354, VkglTestCase_005354_1, VkglTestCase_005354_2);

#define VkglTestCase_005355_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005355_2 ".arithmetic.literal_before_input.mul.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005355, VkglTestCase_005355_1, VkglTestCase_005355_2);

#define VkglTestCase_005356_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005356_2 "arithmetic.literal_before_input.mul.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005356, VkglTestCase_005356_1, VkglTestCase_005356_2);

#define VkglTestCase_005357_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005357_2 ".arithmetic.literal_before_input.mul.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005357, VkglTestCase_005357_1, VkglTestCase_005357_2);

#define VkglTestCase_005358_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005358_2 "arithmetic.literal_before_input.mul.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005358, VkglTestCase_005358_1, VkglTestCase_005358_2);

#define VkglTestCase_005359_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005359_2 ".arithmetic.literal_before_input.mul.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005359, VkglTestCase_005359_1, VkglTestCase_005359_2);

#define VkglTestCase_005360_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005360_2 "arithmetic.literal_before_input.mul.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005360, VkglTestCase_005360_1, VkglTestCase_005360_2);

#define VkglTestCase_005361_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005361_2 ".arithmetic.literal_before_input.mul.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005361, VkglTestCase_005361_1, VkglTestCase_005361_2);

#define VkglTestCase_005362_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005362_2 "arithmetic.literal_before_input.mul.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005362, VkglTestCase_005362_1, VkglTestCase_005362_2);

#define VkglTestCase_005363_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005363_2 "arithmetic.literal_before_input.mul.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005363, VkglTestCase_005363_1, VkglTestCase_005363_2);

#define VkglTestCase_005364_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005364_2 "rithmetic.literal_before_input.mul.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005364, VkglTestCase_005364_1, VkglTestCase_005364_2);

#define VkglTestCase_005365_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005365_2 ".arithmetic.literal_before_input.mul.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005365, VkglTestCase_005365_1, VkglTestCase_005365_2);

#define VkglTestCase_005366_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005366_2 "arithmetic.literal_before_input.mul.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005366, VkglTestCase_005366_1, VkglTestCase_005366_2);

#define VkglTestCase_005367_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005367_2 ".arithmetic.literal_before_input.mul.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005367, VkglTestCase_005367_1, VkglTestCase_005367_2);

#define VkglTestCase_005368_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005368_2 "arithmetic.literal_before_input.mul.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005368, VkglTestCase_005368_1, VkglTestCase_005368_2);

#define VkglTestCase_005369_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005369_2 "arithmetic.literal_before_input.mul.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005369, VkglTestCase_005369_1, VkglTestCase_005369_2);

#define VkglTestCase_005370_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005370_2 "rithmetic.literal_before_input.mul.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005370, VkglTestCase_005370_1, VkglTestCase_005370_2);

#define VkglTestCase_005371_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005371_2 ".arithmetic.literal_before_input.mul.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005371, VkglTestCase_005371_1, VkglTestCase_005371_2);

#define VkglTestCase_005372_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005372_2 "arithmetic.literal_before_input.mul.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005372, VkglTestCase_005372_1, VkglTestCase_005372_2);

#define VkglTestCase_005373_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005373_2 ".arithmetic.literal_before_input.mul.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005373, VkglTestCase_005373_1, VkglTestCase_005373_2);

#define VkglTestCase_005374_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005374_2 "arithmetic.literal_before_input.mul.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005374, VkglTestCase_005374_1, VkglTestCase_005374_2);

#define VkglTestCase_005375_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005375_2 "arithmetic.literal_before_input.mul.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005375, VkglTestCase_005375_1, VkglTestCase_005375_2);

#define VkglTestCase_005376_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005376_2 "rithmetic.literal_before_input.mul.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005376, VkglTestCase_005376_1, VkglTestCase_005376_2);

#define VkglTestCase_005377_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005377_2 ".arithmetic.literal_before_input.mul.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005377, VkglTestCase_005377_1, VkglTestCase_005377_2);

#define VkglTestCase_005378_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005378_2 "arithmetic.literal_before_input.mul.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005378, VkglTestCase_005378_1, VkglTestCase_005378_2);

#define VkglTestCase_005379_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005379_2 ".arithmetic.literal_before_input.mul.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005379, VkglTestCase_005379_1, VkglTestCase_005379_2);

#define VkglTestCase_005380_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005380_2 "arithmetic.literal_before_input.mul.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005380, VkglTestCase_005380_1, VkglTestCase_005380_2);

#define VkglTestCase_006373_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006373_2 ".arithmetic.literal_before_input.mul.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006373, VkglTestCase_006373_1, VkglTestCase_006373_2);

#define VkglTestCase_006374_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006374_2 "arithmetic.literal_before_input.mul.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006374, VkglTestCase_006374_1, VkglTestCase_006374_2);

#define VkglTestCase_006375_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006375_2 "2.arithmetic.literal_before_input.mul.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006375, VkglTestCase_006375_1, VkglTestCase_006375_2);

#define VkglTestCase_006376_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006376_2 ".arithmetic.literal_before_input.mul.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006376, VkglTestCase_006376_1, VkglTestCase_006376_2);

#define VkglTestCase_006377_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006377_2 "2.arithmetic.literal_before_input.mul.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006377, VkglTestCase_006377_1, VkglTestCase_006377_2);

#define VkglTestCase_006378_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006378_2 ".arithmetic.literal_before_input.mul.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006378, VkglTestCase_006378_1, VkglTestCase_006378_2);

#define VkglTestCase_006379_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006379_2 "2.arithmetic.literal_before_input.mul.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006379, VkglTestCase_006379_1, VkglTestCase_006379_2);

#define VkglTestCase_006380_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006380_2 ".arithmetic.literal_before_input.mul.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006380, VkglTestCase_006380_1, VkglTestCase_006380_2);

#define VkglTestCase_006381_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006381_2 "2.arithmetic.literal_before_input.mul.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006381, VkglTestCase_006381_1, VkglTestCase_006381_2);

#define VkglTestCase_006382_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006382_2 ".arithmetic.literal_before_input.mul.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006382, VkglTestCase_006382_1, VkglTestCase_006382_2);

#define VkglTestCase_006383_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006383_2 ".arithmetic.literal_before_input.mul.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006383, VkglTestCase_006383_1, VkglTestCase_006383_2);

#define VkglTestCase_006384_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006384_2 "arithmetic.literal_before_input.mul.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006384, VkglTestCase_006384_1, VkglTestCase_006384_2);

#define VkglTestCase_006385_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006385_2 ".arithmetic.literal_before_input.mul.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006385, VkglTestCase_006385_1, VkglTestCase_006385_2);

#define VkglTestCase_006386_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006386_2 "arithmetic.literal_before_input.mul.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006386, VkglTestCase_006386_1, VkglTestCase_006386_2);

#define VkglTestCase_006387_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006387_2 ".arithmetic.literal_before_input.mul.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006387, VkglTestCase_006387_1, VkglTestCase_006387_2);

#define VkglTestCase_006388_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006388_2 "arithmetic.literal_before_input.mul.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006388, VkglTestCase_006388_1, VkglTestCase_006388_2);

#define VkglTestCase_006389_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006389_2 ".arithmetic.literal_before_input.mul.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006389, VkglTestCase_006389_1, VkglTestCase_006389_2);

#define VkglTestCase_006390_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006390_2 "arithmetic.literal_before_input.mul.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006390, VkglTestCase_006390_1, VkglTestCase_006390_2);

#define VkglTestCase_006391_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006391_2 ".arithmetic.literal_before_input.mul.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006391, VkglTestCase_006391_1, VkglTestCase_006391_2);

#define VkglTestCase_006392_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006392_2 "arithmetic.literal_before_input.mul.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006392, VkglTestCase_006392_1, VkglTestCase_006392_2);

#define VkglTestCase_006393_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006393_2 ".arithmetic.literal_before_input.mul.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006393, VkglTestCase_006393_1, VkglTestCase_006393_2);

#define VkglTestCase_006394_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006394_2 "arithmetic.literal_before_input.mul.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006394, VkglTestCase_006394_1, VkglTestCase_006394_2);

#define VkglTestCase_006395_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006395_2 ".arithmetic.literal_before_input.mul.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006395, VkglTestCase_006395_1, VkglTestCase_006395_2);

#define VkglTestCase_006396_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006396_2 "arithmetic.literal_before_input.mul.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006396, VkglTestCase_006396_1, VkglTestCase_006396_2);

#define VkglTestCase_006397_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006397_2 "arithmetic.literal_before_input.mul.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006397, VkglTestCase_006397_1, VkglTestCase_006397_2);

#define VkglTestCase_006398_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006398_2 "rithmetic.literal_before_input.mul.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006398, VkglTestCase_006398_1, VkglTestCase_006398_2);

#define VkglTestCase_006399_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006399_2 ".arithmetic.literal_before_input.mul.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006399, VkglTestCase_006399_1, VkglTestCase_006399_2);

#define VkglTestCase_006400_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006400_2 "arithmetic.literal_before_input.mul.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006400, VkglTestCase_006400_1, VkglTestCase_006400_2);

#define VkglTestCase_006401_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006401_2 ".arithmetic.literal_before_input.mul.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006401, VkglTestCase_006401_1, VkglTestCase_006401_2);

#define VkglTestCase_006402_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006402_2 "arithmetic.literal_before_input.mul.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006402, VkglTestCase_006402_1, VkglTestCase_006402_2);

#define VkglTestCase_006403_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006403_2 "arithmetic.literal_before_input.mul.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006403, VkglTestCase_006403_1, VkglTestCase_006403_2);

#define VkglTestCase_006404_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006404_2 "rithmetic.literal_before_input.mul.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006404, VkglTestCase_006404_1, VkglTestCase_006404_2);

#define VkglTestCase_006405_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006405_2 ".arithmetic.literal_before_input.mul.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006405, VkglTestCase_006405_1, VkglTestCase_006405_2);

#define VkglTestCase_006406_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006406_2 "arithmetic.literal_before_input.mul.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006406, VkglTestCase_006406_1, VkglTestCase_006406_2);

#define VkglTestCase_006407_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006407_2 ".arithmetic.literal_before_input.mul.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006407, VkglTestCase_006407_1, VkglTestCase_006407_2);

#define VkglTestCase_006408_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006408_2 "arithmetic.literal_before_input.mul.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006408, VkglTestCase_006408_1, VkglTestCase_006408_2);

#define VkglTestCase_006409_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006409_2 "arithmetic.literal_before_input.mul.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006409, VkglTestCase_006409_1, VkglTestCase_006409_2);

#define VkglTestCase_006410_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006410_2 "rithmetic.literal_before_input.mul.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006410, VkglTestCase_006410_1, VkglTestCase_006410_2);

#define VkglTestCase_006411_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006411_2 ".arithmetic.literal_before_input.mul.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006411, VkglTestCase_006411_1, VkglTestCase_006411_2);

#define VkglTestCase_006412_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006412_2 "arithmetic.literal_before_input.mul.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006412, VkglTestCase_006412_1, VkglTestCase_006412_2);

#define VkglTestCase_006413_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006413_2 ".arithmetic.literal_before_input.mul.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006413, VkglTestCase_006413_1, VkglTestCase_006413_2);

#define VkglTestCase_006414_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006414_2 "arithmetic.literal_before_input.mul.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006414, VkglTestCase_006414_1, VkglTestCase_006414_2);
