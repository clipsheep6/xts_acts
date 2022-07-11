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

#define VkglTestCase_005311_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005311_2 ".arithmetic.literal_before_input.sub.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005311, VkglTestCase_005311_1, VkglTestCase_005311_2);

#define VkglTestCase_005312_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005312_2 "arithmetic.literal_before_input.sub.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005312, VkglTestCase_005312_1, VkglTestCase_005312_2);

#define VkglTestCase_005313_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005313_2 "1.arithmetic.literal_before_input.sub.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005313, VkglTestCase_005313_1, VkglTestCase_005313_2);

#define VkglTestCase_005314_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005314_2 ".arithmetic.literal_before_input.sub.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005314, VkglTestCase_005314_1, VkglTestCase_005314_2);

#define VkglTestCase_005315_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005315_2 "1.arithmetic.literal_before_input.sub.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005315, VkglTestCase_005315_1, VkglTestCase_005315_2);

#define VkglTestCase_005316_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005316_2 ".arithmetic.literal_before_input.sub.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005316, VkglTestCase_005316_1, VkglTestCase_005316_2);

#define VkglTestCase_005317_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005317_2 "1.arithmetic.literal_before_input.sub.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005317, VkglTestCase_005317_1, VkglTestCase_005317_2);

#define VkglTestCase_005318_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005318_2 ".arithmetic.literal_before_input.sub.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005318, VkglTestCase_005318_1, VkglTestCase_005318_2);

#define VkglTestCase_005319_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005319_2 ".arithmetic.literal_before_input.sub.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005319, VkglTestCase_005319_1, VkglTestCase_005319_2);

#define VkglTestCase_005320_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005320_2 "arithmetic.literal_before_input.sub.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005320, VkglTestCase_005320_1, VkglTestCase_005320_2);

#define VkglTestCase_005321_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005321_2 ".arithmetic.literal_before_input.sub.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005321, VkglTestCase_005321_1, VkglTestCase_005321_2);

#define VkglTestCase_005322_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005322_2 "arithmetic.literal_before_input.sub.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005322, VkglTestCase_005322_1, VkglTestCase_005322_2);

#define VkglTestCase_005323_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005323_2 ".arithmetic.literal_before_input.sub.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005323, VkglTestCase_005323_1, VkglTestCase_005323_2);

#define VkglTestCase_005324_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005324_2 "arithmetic.literal_before_input.sub.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005324, VkglTestCase_005324_1, VkglTestCase_005324_2);

#define VkglTestCase_005325_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005325_2 ".arithmetic.literal_before_input.sub.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005325, VkglTestCase_005325_1, VkglTestCase_005325_2);

#define VkglTestCase_005326_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005326_2 "arithmetic.literal_before_input.sub.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005326, VkglTestCase_005326_1, VkglTestCase_005326_2);

#define VkglTestCase_005327_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005327_2 ".arithmetic.literal_before_input.sub.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005327, VkglTestCase_005327_1, VkglTestCase_005327_2);

#define VkglTestCase_005328_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005328_2 "arithmetic.literal_before_input.sub.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005328, VkglTestCase_005328_1, VkglTestCase_005328_2);

#define VkglTestCase_005329_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005329_2 ".arithmetic.literal_before_input.sub.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005329, VkglTestCase_005329_1, VkglTestCase_005329_2);

#define VkglTestCase_005330_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005330_2 "arithmetic.literal_before_input.sub.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005330, VkglTestCase_005330_1, VkglTestCase_005330_2);

#define VkglTestCase_005331_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005331_2 ".arithmetic.literal_before_input.sub.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005331, VkglTestCase_005331_1, VkglTestCase_005331_2);

#define VkglTestCase_005332_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005332_2 "arithmetic.literal_before_input.sub.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005332, VkglTestCase_005332_1, VkglTestCase_005332_2);

#define VkglTestCase_005333_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005333_2 ".arithmetic.literal_before_input.sub.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005333, VkglTestCase_005333_1, VkglTestCase_005333_2);

#define VkglTestCase_005334_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005334_2 "arithmetic.literal_before_input.sub.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005334, VkglTestCase_005334_1, VkglTestCase_005334_2);

#define VkglTestCase_005335_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005335_2 ".arithmetic.literal_before_input.sub.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005335, VkglTestCase_005335_1, VkglTestCase_005335_2);

#define VkglTestCase_005336_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005336_2 "arithmetic.literal_before_input.sub.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005336, VkglTestCase_005336_1, VkglTestCase_005336_2);

#define VkglTestCase_005337_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005337_2 ".arithmetic.literal_before_input.sub.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005337, VkglTestCase_005337_1, VkglTestCase_005337_2);

#define VkglTestCase_005338_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005338_2 "arithmetic.literal_before_input.sub.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005338, VkglTestCase_005338_1, VkglTestCase_005338_2);

#define VkglTestCase_006345_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006345_2 ".arithmetic.literal_before_input.sub.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006345, VkglTestCase_006345_1, VkglTestCase_006345_2);

#define VkglTestCase_006346_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006346_2 "arithmetic.literal_before_input.sub.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006346, VkglTestCase_006346_1, VkglTestCase_006346_2);

#define VkglTestCase_006347_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006347_2 "2.arithmetic.literal_before_input.sub.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006347, VkglTestCase_006347_1, VkglTestCase_006347_2);

#define VkglTestCase_006348_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006348_2 ".arithmetic.literal_before_input.sub.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006348, VkglTestCase_006348_1, VkglTestCase_006348_2);

#define VkglTestCase_006349_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006349_2 "2.arithmetic.literal_before_input.sub.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006349, VkglTestCase_006349_1, VkglTestCase_006349_2);

#define VkglTestCase_006350_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006350_2 ".arithmetic.literal_before_input.sub.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006350, VkglTestCase_006350_1, VkglTestCase_006350_2);

#define VkglTestCase_006351_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006351_2 "2.arithmetic.literal_before_input.sub.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006351, VkglTestCase_006351_1, VkglTestCase_006351_2);

#define VkglTestCase_006352_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006352_2 ".arithmetic.literal_before_input.sub.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006352, VkglTestCase_006352_1, VkglTestCase_006352_2);

#define VkglTestCase_006353_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006353_2 ".arithmetic.literal_before_input.sub.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006353, VkglTestCase_006353_1, VkglTestCase_006353_2);

#define VkglTestCase_006354_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006354_2 "arithmetic.literal_before_input.sub.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006354, VkglTestCase_006354_1, VkglTestCase_006354_2);

#define VkglTestCase_006355_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006355_2 ".arithmetic.literal_before_input.sub.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006355, VkglTestCase_006355_1, VkglTestCase_006355_2);

#define VkglTestCase_006356_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006356_2 "arithmetic.literal_before_input.sub.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006356, VkglTestCase_006356_1, VkglTestCase_006356_2);

#define VkglTestCase_006357_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006357_2 ".arithmetic.literal_before_input.sub.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006357, VkglTestCase_006357_1, VkglTestCase_006357_2);

#define VkglTestCase_006358_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006358_2 "arithmetic.literal_before_input.sub.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006358, VkglTestCase_006358_1, VkglTestCase_006358_2);

#define VkglTestCase_006359_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006359_2 ".arithmetic.literal_before_input.sub.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006359, VkglTestCase_006359_1, VkglTestCase_006359_2);

#define VkglTestCase_006360_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006360_2 "arithmetic.literal_before_input.sub.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006360, VkglTestCase_006360_1, VkglTestCase_006360_2);

#define VkglTestCase_006361_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006361_2 ".arithmetic.literal_before_input.sub.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006361, VkglTestCase_006361_1, VkglTestCase_006361_2);

#define VkglTestCase_006362_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006362_2 "arithmetic.literal_before_input.sub.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006362, VkglTestCase_006362_1, VkglTestCase_006362_2);

#define VkglTestCase_006363_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006363_2 ".arithmetic.literal_before_input.sub.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006363, VkglTestCase_006363_1, VkglTestCase_006363_2);

#define VkglTestCase_006364_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006364_2 "arithmetic.literal_before_input.sub.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006364, VkglTestCase_006364_1, VkglTestCase_006364_2);

#define VkglTestCase_006365_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006365_2 ".arithmetic.literal_before_input.sub.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006365, VkglTestCase_006365_1, VkglTestCase_006365_2);

#define VkglTestCase_006366_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006366_2 "arithmetic.literal_before_input.sub.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006366, VkglTestCase_006366_1, VkglTestCase_006366_2);

#define VkglTestCase_006367_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006367_2 ".arithmetic.literal_before_input.sub.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006367, VkglTestCase_006367_1, VkglTestCase_006367_2);

#define VkglTestCase_006368_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006368_2 "arithmetic.literal_before_input.sub.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006368, VkglTestCase_006368_1, VkglTestCase_006368_2);

#define VkglTestCase_006369_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006369_2 ".arithmetic.literal_before_input.sub.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006369, VkglTestCase_006369_1, VkglTestCase_006369_2);

#define VkglTestCase_006370_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006370_2 "arithmetic.literal_before_input.sub.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006370, VkglTestCase_006370_1, VkglTestCase_006370_2);

#define VkglTestCase_006371_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006371_2 ".arithmetic.literal_before_input.sub.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006371, VkglTestCase_006371_1, VkglTestCase_006371_2);

#define VkglTestCase_006372_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006372_2 "arithmetic.literal_before_input.sub.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006372, VkglTestCase_006372_1, VkglTestCase_006372_2);
