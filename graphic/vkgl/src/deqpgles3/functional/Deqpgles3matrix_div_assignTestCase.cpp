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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016356_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016356_2 "x.div_assign.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016356, VkglTestCase_016356_1, VkglTestCase_016356_2);

#define VkglTestCase_016357_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016357_2 ".div_assign.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016357, VkglTestCase_016357_1, VkglTestCase_016357_2);

#define VkglTestCase_016358_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016358_2 ".div_assign.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016358, VkglTestCase_016358_1, VkglTestCase_016358_2);

#define VkglTestCase_016359_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016359_2 "div_assign.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016359, VkglTestCase_016359_1, VkglTestCase_016359_2);

#define VkglTestCase_016360_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016360_2 "x.div_assign.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016360, VkglTestCase_016360_1, VkglTestCase_016360_2);

#define VkglTestCase_016361_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016361_2 ".div_assign.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016361, VkglTestCase_016361_1, VkglTestCase_016361_2);

#define VkglTestCase_016362_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016362_2 ".div_assign.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016362, VkglTestCase_016362_1, VkglTestCase_016362_2);

#define VkglTestCase_016363_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016363_2 "div_assign.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016363, VkglTestCase_016363_1, VkglTestCase_016363_2);

#define VkglTestCase_016364_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016364_2 "div_assign.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016364, VkglTestCase_016364_1, VkglTestCase_016364_2);

#define VkglTestCase_016365_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016365_2 "iv_assign.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016365, VkglTestCase_016365_1, VkglTestCase_016365_2);

#define VkglTestCase_016366_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016366_2 ".div_assign.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016366, VkglTestCase_016366_1, VkglTestCase_016366_2);

#define VkglTestCase_016367_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016367_2 "div_assign.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016367, VkglTestCase_016367_1, VkglTestCase_016367_2);

#define VkglTestCase_016368_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016368_2 ".div_assign.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016368, VkglTestCase_016368_1, VkglTestCase_016368_2);

#define VkglTestCase_016369_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016369_2 "div_assign.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016369, VkglTestCase_016369_1, VkglTestCase_016369_2);

#define VkglTestCase_016370_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016370_2 "div_assign.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016370, VkglTestCase_016370_1, VkglTestCase_016370_2);

#define VkglTestCase_016371_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016371_2 "iv_assign.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016371, VkglTestCase_016371_1, VkglTestCase_016371_2);

#define VkglTestCase_016372_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016372_2 ".div_assign.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016372, VkglTestCase_016372_1, VkglTestCase_016372_2);

#define VkglTestCase_016373_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016373_2 "div_assign.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016373, VkglTestCase_016373_1, VkglTestCase_016373_2);

#define VkglTestCase_016374_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016374_2 ".div_assign.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016374, VkglTestCase_016374_1, VkglTestCase_016374_2);

#define VkglTestCase_016375_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016375_2 "div_assign.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016375, VkglTestCase_016375_1, VkglTestCase_016375_2);

#define VkglTestCase_016376_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016376_2 "div_assign.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016376, VkglTestCase_016376_1, VkglTestCase_016376_2);

#define VkglTestCase_016377_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016377_2 "iv_assign.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016377, VkglTestCase_016377_1, VkglTestCase_016377_2);

#define VkglTestCase_016378_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016378_2 ".div_assign.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016378, VkglTestCase_016378_1, VkglTestCase_016378_2);

#define VkglTestCase_016379_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016379_2 "div_assign.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016379, VkglTestCase_016379_1, VkglTestCase_016379_2);

#define VkglTestCase_016380_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016380_2 "x.div_assign.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016380, VkglTestCase_016380_1, VkglTestCase_016380_2);

#define VkglTestCase_016381_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016381_2 ".div_assign.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016381, VkglTestCase_016381_1, VkglTestCase_016381_2);

#define VkglTestCase_016382_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016382_2 ".div_assign.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016382, VkglTestCase_016382_1, VkglTestCase_016382_2);

#define VkglTestCase_016383_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016383_2 "div_assign.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016383, VkglTestCase_016383_1, VkglTestCase_016383_2);

#define VkglTestCase_016384_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016384_2 "x.div_assign.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016384, VkglTestCase_016384_1, VkglTestCase_016384_2);

#define VkglTestCase_016385_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016385_2 ".div_assign.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016385, VkglTestCase_016385_1, VkglTestCase_016385_2);

#define VkglTestCase_016386_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016386_2 ".div_assign.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016386, VkglTestCase_016386_1, VkglTestCase_016386_2);

#define VkglTestCase_016387_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016387_2 "div_assign.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016387, VkglTestCase_016387_1, VkglTestCase_016387_2);

#define VkglTestCase_016388_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016388_2 "div_assign.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016388, VkglTestCase_016388_1, VkglTestCase_016388_2);

#define VkglTestCase_016389_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016389_2 "iv_assign.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016389, VkglTestCase_016389_1, VkglTestCase_016389_2);

#define VkglTestCase_016390_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016390_2 ".div_assign.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016390, VkglTestCase_016390_1, VkglTestCase_016390_2);

#define VkglTestCase_016391_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016391_2 "div_assign.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016391, VkglTestCase_016391_1, VkglTestCase_016391_2);

#define VkglTestCase_016392_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016392_2 ".div_assign.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016392, VkglTestCase_016392_1, VkglTestCase_016392_2);

#define VkglTestCase_016393_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016393_2 "div_assign.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016393, VkglTestCase_016393_1, VkglTestCase_016393_2);

#define VkglTestCase_016394_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016394_2 "div_assign.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016394, VkglTestCase_016394_1, VkglTestCase_016394_2);

#define VkglTestCase_016395_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016395_2 "iv_assign.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016395, VkglTestCase_016395_1, VkglTestCase_016395_2);

#define VkglTestCase_016396_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016396_2 ".div_assign.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016396, VkglTestCase_016396_1, VkglTestCase_016396_2);

#define VkglTestCase_016397_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016397_2 "div_assign.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016397, VkglTestCase_016397_1, VkglTestCase_016397_2);

#define VkglTestCase_016398_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016398_2 ".div_assign.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016398, VkglTestCase_016398_1, VkglTestCase_016398_2);

#define VkglTestCase_016399_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016399_2 "div_assign.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016399, VkglTestCase_016399_1, VkglTestCase_016399_2);

#define VkglTestCase_016400_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016400_2 "div_assign.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016400, VkglTestCase_016400_1, VkglTestCase_016400_2);

#define VkglTestCase_016401_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_016401_2 "iv_assign.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016401, VkglTestCase_016401_1, VkglTestCase_016401_2);

#define VkglTestCase_016402_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016402_2 ".div_assign.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016402, VkglTestCase_016402_1, VkglTestCase_016402_2);

#define VkglTestCase_016403_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016403_2 "div_assign.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016403, VkglTestCase_016403_1, VkglTestCase_016403_2);

#define VkglTestCase_016404_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016404_2 "x.div_assign.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016404, VkglTestCase_016404_1, VkglTestCase_016404_2);

#define VkglTestCase_016405_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016405_2 ".div_assign.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016405, VkglTestCase_016405_1, VkglTestCase_016405_2);

#define VkglTestCase_016406_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016406_2 ".div_assign.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016406, VkglTestCase_016406_1, VkglTestCase_016406_2);

#define VkglTestCase_016407_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016407_2 "div_assign.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016407, VkglTestCase_016407_1, VkglTestCase_016407_2);

#define VkglTestCase_016408_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016408_2 "x.div_assign.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016408, VkglTestCase_016408_1, VkglTestCase_016408_2);

#define VkglTestCase_016409_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016409_2 ".div_assign.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016409, VkglTestCase_016409_1, VkglTestCase_016409_2);
