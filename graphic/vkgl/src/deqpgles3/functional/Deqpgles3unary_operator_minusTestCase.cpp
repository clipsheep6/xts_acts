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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007358_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007358_2 ".unary_operator.minus.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007358, VkglTestCase_007358_1, VkglTestCase_007358_2);

#define VkglTestCase_007359_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007359_2 "unary_operator.minus.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007359, VkglTestCase_007359_1, VkglTestCase_007359_2);

#define VkglTestCase_007360_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007360_2 "nary_operator.minus.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007360, VkglTestCase_007360_1, VkglTestCase_007360_2);

#define VkglTestCase_007361_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007361_2 "ary_operator.minus.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007361, VkglTestCase_007361_1, VkglTestCase_007361_2);

#define VkglTestCase_007362_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007362_2 "unary_operator.minus.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007362, VkglTestCase_007362_1, VkglTestCase_007362_2);

#define VkglTestCase_007363_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007363_2 "nary_operator.minus.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007363, VkglTestCase_007363_1, VkglTestCase_007363_2);

#define VkglTestCase_007364_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007364_2 ".unary_operator.minus.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007364, VkglTestCase_007364_1, VkglTestCase_007364_2);

#define VkglTestCase_007365_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007365_2 "unary_operator.minus.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007365, VkglTestCase_007365_1, VkglTestCase_007365_2);

#define VkglTestCase_007366_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007366_2 "unary_operator.minus.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007366, VkglTestCase_007366_1, VkglTestCase_007366_2);

#define VkglTestCase_007367_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007367_2 "nary_operator.minus.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007367, VkglTestCase_007367_1, VkglTestCase_007367_2);

#define VkglTestCase_007368_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007368_2 ".unary_operator.minus.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007368, VkglTestCase_007368_1, VkglTestCase_007368_2);

#define VkglTestCase_007369_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007369_2 "unary_operator.minus.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007369, VkglTestCase_007369_1, VkglTestCase_007369_2);

#define VkglTestCase_007370_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007370_2 ".unary_operator.minus.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007370, VkglTestCase_007370_1, VkglTestCase_007370_2);

#define VkglTestCase_007371_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007371_2 "unary_operator.minus.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007371, VkglTestCase_007371_1, VkglTestCase_007371_2);

#define VkglTestCase_007372_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007372_2 "unary_operator.minus.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007372, VkglTestCase_007372_1, VkglTestCase_007372_2);

#define VkglTestCase_007373_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007373_2 "nary_operator.minus.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007373, VkglTestCase_007373_1, VkglTestCase_007373_2);

#define VkglTestCase_007374_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007374_2 ".unary_operator.minus.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007374, VkglTestCase_007374_1, VkglTestCase_007374_2);

#define VkglTestCase_007375_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007375_2 "unary_operator.minus.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007375, VkglTestCase_007375_1, VkglTestCase_007375_2);

#define VkglTestCase_007376_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007376_2 ".unary_operator.minus.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007376, VkglTestCase_007376_1, VkglTestCase_007376_2);

#define VkglTestCase_007377_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007377_2 "unary_operator.minus.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007377, VkglTestCase_007377_1, VkglTestCase_007377_2);

#define VkglTestCase_007378_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007378_2 "unary_operator.minus.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007378, VkglTestCase_007378_1, VkglTestCase_007378_2);

#define VkglTestCase_007379_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007379_2 "nary_operator.minus.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007379, VkglTestCase_007379_1, VkglTestCase_007379_2);

#define VkglTestCase_007380_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007380_2 ".unary_operator.minus.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007380, VkglTestCase_007380_1, VkglTestCase_007380_2);

#define VkglTestCase_007381_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007381_2 "unary_operator.minus.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007381, VkglTestCase_007381_1, VkglTestCase_007381_2);

#define VkglTestCase_007382_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007382_2 "r.unary_operator.minus.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007382, VkglTestCase_007382_1, VkglTestCase_007382_2);

#define VkglTestCase_007383_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007383_2 ".unary_operator.minus.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007383, VkglTestCase_007383_1, VkglTestCase_007383_2);

#define VkglTestCase_007384_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007384_2 "unary_operator.minus.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007384, VkglTestCase_007384_1, VkglTestCase_007384_2);

#define VkglTestCase_007385_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007385_2 "nary_operator.minus.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007385, VkglTestCase_007385_1, VkglTestCase_007385_2);

#define VkglTestCase_007386_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007386_2 ".unary_operator.minus.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007386, VkglTestCase_007386_1, VkglTestCase_007386_2);

#define VkglTestCase_007387_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007387_2 "unary_operator.minus.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007387, VkglTestCase_007387_1, VkglTestCase_007387_2);

#define VkglTestCase_007388_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007388_2 ".unary_operator.minus.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007388, VkglTestCase_007388_1, VkglTestCase_007388_2);

#define VkglTestCase_007389_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007389_2 "unary_operator.minus.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007389, VkglTestCase_007389_1, VkglTestCase_007389_2);

#define VkglTestCase_007390_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007390_2 "nary_operator.minus.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007390, VkglTestCase_007390_1, VkglTestCase_007390_2);

#define VkglTestCase_007391_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007391_2 "ary_operator.minus.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007391, VkglTestCase_007391_1, VkglTestCase_007391_2);

#define VkglTestCase_007392_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007392_2 "unary_operator.minus.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007392, VkglTestCase_007392_1, VkglTestCase_007392_2);

#define VkglTestCase_007393_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007393_2 "nary_operator.minus.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007393, VkglTestCase_007393_1, VkglTestCase_007393_2);

#define VkglTestCase_007394_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007394_2 ".unary_operator.minus.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007394, VkglTestCase_007394_1, VkglTestCase_007394_2);

#define VkglTestCase_007395_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007395_2 "unary_operator.minus.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007395, VkglTestCase_007395_1, VkglTestCase_007395_2);

#define VkglTestCase_007396_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007396_2 "nary_operator.minus.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007396, VkglTestCase_007396_1, VkglTestCase_007396_2);

#define VkglTestCase_007397_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007397_2 "ary_operator.minus.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007397, VkglTestCase_007397_1, VkglTestCase_007397_2);

#define VkglTestCase_007398_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007398_2 "unary_operator.minus.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007398, VkglTestCase_007398_1, VkglTestCase_007398_2);

#define VkglTestCase_007399_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007399_2 "nary_operator.minus.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007399, VkglTestCase_007399_1, VkglTestCase_007399_2);

#define VkglTestCase_007400_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007400_2 ".unary_operator.minus.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007400, VkglTestCase_007400_1, VkglTestCase_007400_2);

#define VkglTestCase_007401_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007401_2 "unary_operator.minus.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007401, VkglTestCase_007401_1, VkglTestCase_007401_2);

#define VkglTestCase_007402_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007402_2 "nary_operator.minus.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007402, VkglTestCase_007402_1, VkglTestCase_007402_2);

#define VkglTestCase_007403_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007403_2 "ary_operator.minus.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007403, VkglTestCase_007403_1, VkglTestCase_007403_2);

#define VkglTestCase_007404_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007404_2 "unary_operator.minus.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007404, VkglTestCase_007404_1, VkglTestCase_007404_2);

#define VkglTestCase_007405_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007405_2 "nary_operator.minus.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007405, VkglTestCase_007405_1, VkglTestCase_007405_2);

#define VkglTestCase_007406_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007406_2 ".unary_operator.minus.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007406, VkglTestCase_007406_1, VkglTestCase_007406_2);

#define VkglTestCase_007407_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007407_2 "unary_operator.minus.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007407, VkglTestCase_007407_1, VkglTestCase_007407_2);

#define VkglTestCase_007408_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007408_2 ".unary_operator.minus.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007408, VkglTestCase_007408_1, VkglTestCase_007408_2);

#define VkglTestCase_007409_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007409_2 "unary_operator.minus.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007409, VkglTestCase_007409_1, VkglTestCase_007409_2);

#define VkglTestCase_007410_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007410_2 ".unary_operator.minus.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007410, VkglTestCase_007410_1, VkglTestCase_007410_2);

#define VkglTestCase_007411_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007411_2 "unary_operator.minus.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007411, VkglTestCase_007411_1, VkglTestCase_007411_2);

#define VkglTestCase_007412_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007412_2 ".unary_operator.minus.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007412, VkglTestCase_007412_1, VkglTestCase_007412_2);

#define VkglTestCase_007413_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007413_2 "unary_operator.minus.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007413, VkglTestCase_007413_1, VkglTestCase_007413_2);

#define VkglTestCase_007414_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007414_2 "unary_operator.minus.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007414, VkglTestCase_007414_1, VkglTestCase_007414_2);

#define VkglTestCase_007415_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007415_2 "nary_operator.minus.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007415, VkglTestCase_007415_1, VkglTestCase_007415_2);

#define VkglTestCase_007416_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007416_2 "nary_operator.minus.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007416, VkglTestCase_007416_1, VkglTestCase_007416_2);

#define VkglTestCase_007417_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007417_2 "ary_operator.minus.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007417, VkglTestCase_007417_1, VkglTestCase_007417_2);

#define VkglTestCase_007418_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007418_2 "nary_operator.minus.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007418, VkglTestCase_007418_1, VkglTestCase_007418_2);

#define VkglTestCase_007419_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007419_2 "ary_operator.minus.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007419, VkglTestCase_007419_1, VkglTestCase_007419_2);

#define VkglTestCase_007420_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007420_2 "nary_operator.minus.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007420, VkglTestCase_007420_1, VkglTestCase_007420_2);

#define VkglTestCase_007421_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007421_2 "ary_operator.minus.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007421, VkglTestCase_007421_1, VkglTestCase_007421_2);

#define VkglTestCase_007422_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007422_2 ".unary_operator.minus.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007422, VkglTestCase_007422_1, VkglTestCase_007422_2);

#define VkglTestCase_007423_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007423_2 "unary_operator.minus.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007423, VkglTestCase_007423_1, VkglTestCase_007423_2);

#define VkglTestCase_007424_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007424_2 "unary_operator.minus.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007424, VkglTestCase_007424_1, VkglTestCase_007424_2);

#define VkglTestCase_007425_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007425_2 "nary_operator.minus.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007425, VkglTestCase_007425_1, VkglTestCase_007425_2);

#define VkglTestCase_007426_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007426_2 "unary_operator.minus.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007426, VkglTestCase_007426_1, VkglTestCase_007426_2);

#define VkglTestCase_007427_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007427_2 "nary_operator.minus.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007427, VkglTestCase_007427_1, VkglTestCase_007427_2);

#define VkglTestCase_007428_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007428_2 "unary_operator.minus.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007428, VkglTestCase_007428_1, VkglTestCase_007428_2);

#define VkglTestCase_007429_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007429_2 "nary_operator.minus.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007429, VkglTestCase_007429_1, VkglTestCase_007429_2);
