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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011324_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011324_2 "erator.bitwise_and_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011324, VkglTestCase_011324_1, VkglTestCase_011324_2);

#define VkglTestCase_011325_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011325_2 "rator.bitwise_and_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011325, VkglTestCase_011325_1, VkglTestCase_011325_2);

#define VkglTestCase_011326_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011326_2 "rator.bitwise_and_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011326, VkglTestCase_011326_1, VkglTestCase_011326_2);

#define VkglTestCase_011327_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011327_2 "ator.bitwise_and_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011327, VkglTestCase_011327_1, VkglTestCase_011327_2);

#define VkglTestCase_011328_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011328_2 "rator.bitwise_and_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011328, VkglTestCase_011328_1, VkglTestCase_011328_2);

#define VkglTestCase_011329_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011329_2 "ator.bitwise_and_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011329, VkglTestCase_011329_1, VkglTestCase_011329_2);

#define VkglTestCase_011330_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011330_2 "ator.bitwise_and_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011330, VkglTestCase_011330_1, VkglTestCase_011330_2);

#define VkglTestCase_011331_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011331_2 "tor.bitwise_and_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011331, VkglTestCase_011331_1, VkglTestCase_011331_2);

#define VkglTestCase_011332_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011332_2 "rator.bitwise_and_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011332, VkglTestCase_011332_1, VkglTestCase_011332_2);

#define VkglTestCase_011333_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011333_2 "ator.bitwise_and_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011333, VkglTestCase_011333_1, VkglTestCase_011333_2);

#define VkglTestCase_011334_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011334_2 "ator.bitwise_and_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011334, VkglTestCase_011334_1, VkglTestCase_011334_2);

#define VkglTestCase_011335_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011335_2 "tor.bitwise_and_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011335, VkglTestCase_011335_1, VkglTestCase_011335_2);

#define VkglTestCase_011336_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011336_2 "rator.bitwise_and_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011336, VkglTestCase_011336_1, VkglTestCase_011336_2);

#define VkglTestCase_011337_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011337_2 "ator.bitwise_and_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011337, VkglTestCase_011337_1, VkglTestCase_011337_2);

#define VkglTestCase_011338_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011338_2 "ator.bitwise_and_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011338, VkglTestCase_011338_1, VkglTestCase_011338_2);

#define VkglTestCase_011339_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011339_2 "tor.bitwise_and_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011339, VkglTestCase_011339_1, VkglTestCase_011339_2);

#define VkglTestCase_011340_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011340_2 "erator.bitwise_and_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011340, VkglTestCase_011340_1, VkglTestCase_011340_2);

#define VkglTestCase_011341_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011341_2 "rator.bitwise_and_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011341, VkglTestCase_011341_1, VkglTestCase_011341_2);

#define VkglTestCase_011342_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011342_2 "rator.bitwise_and_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011342, VkglTestCase_011342_1, VkglTestCase_011342_2);

#define VkglTestCase_011343_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011343_2 "ator.bitwise_and_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011343, VkglTestCase_011343_1, VkglTestCase_011343_2);

#define VkglTestCase_011344_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011344_2 "rator.bitwise_and_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011344, VkglTestCase_011344_1, VkglTestCase_011344_2);

#define VkglTestCase_011345_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011345_2 "ator.bitwise_and_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011345, VkglTestCase_011345_1, VkglTestCase_011345_2);

#define VkglTestCase_011346_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011346_2 "rator.bitwise_and_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011346, VkglTestCase_011346_1, VkglTestCase_011346_2);

#define VkglTestCase_011347_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011347_2 "ator.bitwise_and_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011347, VkglTestCase_011347_1, VkglTestCase_011347_2);

#define VkglTestCase_011348_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011348_2 "erator.bitwise_and_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011348, VkglTestCase_011348_1, VkglTestCase_011348_2);

#define VkglTestCase_011349_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011349_2 "rator.bitwise_and_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011349, VkglTestCase_011349_1, VkglTestCase_011349_2);

#define VkglTestCase_011350_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011350_2 "ator.bitwise_and_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011350, VkglTestCase_011350_1, VkglTestCase_011350_2);

#define VkglTestCase_011351_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011351_2 "tor.bitwise_and_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011351, VkglTestCase_011351_1, VkglTestCase_011351_2);

#define VkglTestCase_011352_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011352_2 "rator.bitwise_and_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011352, VkglTestCase_011352_1, VkglTestCase_011352_2);

#define VkglTestCase_011353_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011353_2 "ator.bitwise_and_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011353, VkglTestCase_011353_1, VkglTestCase_011353_2);

#define VkglTestCase_011354_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011354_2 "ator.bitwise_and_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011354, VkglTestCase_011354_1, VkglTestCase_011354_2);

#define VkglTestCase_011355_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011355_2 "tor.bitwise_and_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011355, VkglTestCase_011355_1, VkglTestCase_011355_2);

#define VkglTestCase_011356_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011356_2 "rator.bitwise_and_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011356, VkglTestCase_011356_1, VkglTestCase_011356_2);

#define VkglTestCase_011357_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011357_2 "ator.bitwise_and_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011357, VkglTestCase_011357_1, VkglTestCase_011357_2);

#define VkglTestCase_011358_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011358_2 "ator.bitwise_and_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011358, VkglTestCase_011358_1, VkglTestCase_011358_2);

#define VkglTestCase_011359_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011359_2 "tor.bitwise_and_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011359, VkglTestCase_011359_1, VkglTestCase_011359_2);

#define VkglTestCase_011360_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011360_2 "rator.bitwise_and_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011360, VkglTestCase_011360_1, VkglTestCase_011360_2);

#define VkglTestCase_011361_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011361_2 "ator.bitwise_and_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011361, VkglTestCase_011361_1, VkglTestCase_011361_2);

#define VkglTestCase_011362_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011362_2 "ator.bitwise_and_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011362, VkglTestCase_011362_1, VkglTestCase_011362_2);

#define VkglTestCase_011363_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011363_2 "tor.bitwise_and_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011363, VkglTestCase_011363_1, VkglTestCase_011363_2);

#define VkglTestCase_011364_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011364_2 "rator.bitwise_and_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011364, VkglTestCase_011364_1, VkglTestCase_011364_2);

#define VkglTestCase_011365_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011365_2 "ator.bitwise_and_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011365, VkglTestCase_011365_1, VkglTestCase_011365_2);

#define VkglTestCase_011366_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011366_2 "rator.bitwise_and_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011366, VkglTestCase_011366_1, VkglTestCase_011366_2);

#define VkglTestCase_011367_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011367_2 "ator.bitwise_and_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011367, VkglTestCase_011367_1, VkglTestCase_011367_2);

#define VkglTestCase_011368_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011368_2 "rator.bitwise_and_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011368, VkglTestCase_011368_1, VkglTestCase_011368_2);

#define VkglTestCase_011369_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011369_2 "ator.bitwise_and_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011369, VkglTestCase_011369_1, VkglTestCase_011369_2);

#define VkglTestCase_011370_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011370_2 "rator.bitwise_and_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011370, VkglTestCase_011370_1, VkglTestCase_011370_2);

#define VkglTestCase_011371_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011371_2 "ator.bitwise_and_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011371, VkglTestCase_011371_1, VkglTestCase_011371_2);

#define VkglTestCase_011372_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011372_2 "tor.bitwise_and_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011372, VkglTestCase_011372_1, VkglTestCase_011372_2);

#define VkglTestCase_011373_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011373_2 "or.bitwise_and_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011373, VkglTestCase_011373_1, VkglTestCase_011373_2);

#define VkglTestCase_011374_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011374_2 "or.bitwise_and_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011374, VkglTestCase_011374_1, VkglTestCase_011374_2);

#define VkglTestCase_011375_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011375_2 "r.bitwise_and_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011375, VkglTestCase_011375_1, VkglTestCase_011375_2);

#define VkglTestCase_011376_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011376_2 "tor.bitwise_and_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011376, VkglTestCase_011376_1, VkglTestCase_011376_2);

#define VkglTestCase_011377_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011377_2 "or.bitwise_and_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011377, VkglTestCase_011377_1, VkglTestCase_011377_2);

#define VkglTestCase_011378_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011378_2 "or.bitwise_and_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011378, VkglTestCase_011378_1, VkglTestCase_011378_2);

#define VkglTestCase_011379_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011379_2 "r.bitwise_and_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011379, VkglTestCase_011379_1, VkglTestCase_011379_2);

#define VkglTestCase_011380_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011380_2 "tor.bitwise_and_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011380, VkglTestCase_011380_1, VkglTestCase_011380_2);

#define VkglTestCase_011381_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011381_2 "or.bitwise_and_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011381, VkglTestCase_011381_1, VkglTestCase_011381_2);

#define VkglTestCase_011382_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011382_2 "or.bitwise_and_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011382, VkglTestCase_011382_1, VkglTestCase_011382_2);

#define VkglTestCase_011383_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011383_2 "r.bitwise_and_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011383, VkglTestCase_011383_1, VkglTestCase_011383_2);

#define VkglTestCase_011384_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011384_2 "tor.bitwise_and_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011384, VkglTestCase_011384_1, VkglTestCase_011384_2);

#define VkglTestCase_011385_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011385_2 "or.bitwise_and_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011385, VkglTestCase_011385_1, VkglTestCase_011385_2);

#define VkglTestCase_011386_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011386_2 "tor.bitwise_and_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011386, VkglTestCase_011386_1, VkglTestCase_011386_2);

#define VkglTestCase_011387_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011387_2 "or.bitwise_and_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011387, VkglTestCase_011387_1, VkglTestCase_011387_2);

#define VkglTestCase_011388_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011388_2 "tor.bitwise_and_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011388, VkglTestCase_011388_1, VkglTestCase_011388_2);

#define VkglTestCase_011389_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011389_2 "or.bitwise_and_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011389, VkglTestCase_011389_1, VkglTestCase_011389_2);

#define VkglTestCase_011390_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011390_2 "tor.bitwise_and_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011390, VkglTestCase_011390_1, VkglTestCase_011390_2);

#define VkglTestCase_011391_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011391_2 "or.bitwise_and_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011391, VkglTestCase_011391_1, VkglTestCase_011391_2);

#define VkglTestCase_011392_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011392_2 "r.bitwise_and_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011392, VkglTestCase_011392_1, VkglTestCase_011392_2);

#define VkglTestCase_011393_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011393_2 ".bitwise_and_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011393, VkglTestCase_011393_1, VkglTestCase_011393_2);

#define VkglTestCase_011394_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011394_2 "tor.bitwise_and_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011394, VkglTestCase_011394_1, VkglTestCase_011394_2);

#define VkglTestCase_011395_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011395_2 "or.bitwise_and_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011395, VkglTestCase_011395_1, VkglTestCase_011395_2);

#define VkglTestCase_011396_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011396_2 "r.bitwise_and_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011396, VkglTestCase_011396_1, VkglTestCase_011396_2);

#define VkglTestCase_011397_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011397_2 ".bitwise_and_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011397, VkglTestCase_011397_1, VkglTestCase_011397_2);

#define VkglTestCase_011398_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011398_2 "tor.bitwise_and_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011398, VkglTestCase_011398_1, VkglTestCase_011398_2);

#define VkglTestCase_011399_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011399_2 "or.bitwise_and_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011399, VkglTestCase_011399_1, VkglTestCase_011399_2);

#define VkglTestCase_011400_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011400_2 "r.bitwise_and_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011400, VkglTestCase_011400_1, VkglTestCase_011400_2);

#define VkglTestCase_011401_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011401_2 ".bitwise_and_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011401, VkglTestCase_011401_1, VkglTestCase_011401_2);

#define VkglTestCase_011402_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011402_2 "or.bitwise_and_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011402, VkglTestCase_011402_1, VkglTestCase_011402_2);

#define VkglTestCase_011403_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011403_2 "r.bitwise_and_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011403, VkglTestCase_011403_1, VkglTestCase_011403_2);

#define VkglTestCase_011404_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011404_2 "or.bitwise_and_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011404, VkglTestCase_011404_1, VkglTestCase_011404_2);

#define VkglTestCase_011405_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011405_2 "r.bitwise_and_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011405, VkglTestCase_011405_1, VkglTestCase_011405_2);

#define VkglTestCase_011406_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011406_2 "or.bitwise_and_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011406, VkglTestCase_011406_1, VkglTestCase_011406_2);

#define VkglTestCase_011407_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011407_2 "r.bitwise_and_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011407, VkglTestCase_011407_1, VkglTestCase_011407_2);
