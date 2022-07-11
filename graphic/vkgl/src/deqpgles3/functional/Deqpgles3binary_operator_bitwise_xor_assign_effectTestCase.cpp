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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010316_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010316_2 "erator.bitwise_xor_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010316, VkglTestCase_010316_1, VkglTestCase_010316_2);

#define VkglTestCase_010317_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010317_2 "rator.bitwise_xor_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010317, VkglTestCase_010317_1, VkglTestCase_010317_2);

#define VkglTestCase_010318_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010318_2 "rator.bitwise_xor_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010318, VkglTestCase_010318_1, VkglTestCase_010318_2);

#define VkglTestCase_010319_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010319_2 "ator.bitwise_xor_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010319, VkglTestCase_010319_1, VkglTestCase_010319_2);

#define VkglTestCase_010320_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010320_2 "rator.bitwise_xor_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010320, VkglTestCase_010320_1, VkglTestCase_010320_2);

#define VkglTestCase_010321_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010321_2 "ator.bitwise_xor_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010321, VkglTestCase_010321_1, VkglTestCase_010321_2);

#define VkglTestCase_010322_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010322_2 "ator.bitwise_xor_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010322, VkglTestCase_010322_1, VkglTestCase_010322_2);

#define VkglTestCase_010323_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010323_2 "tor.bitwise_xor_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010323, VkglTestCase_010323_1, VkglTestCase_010323_2);

#define VkglTestCase_010324_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010324_2 "rator.bitwise_xor_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010324, VkglTestCase_010324_1, VkglTestCase_010324_2);

#define VkglTestCase_010325_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010325_2 "ator.bitwise_xor_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010325, VkglTestCase_010325_1, VkglTestCase_010325_2);

#define VkglTestCase_010326_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010326_2 "ator.bitwise_xor_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010326, VkglTestCase_010326_1, VkglTestCase_010326_2);

#define VkglTestCase_010327_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010327_2 "tor.bitwise_xor_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010327, VkglTestCase_010327_1, VkglTestCase_010327_2);

#define VkglTestCase_010328_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010328_2 "rator.bitwise_xor_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010328, VkglTestCase_010328_1, VkglTestCase_010328_2);

#define VkglTestCase_010329_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010329_2 "ator.bitwise_xor_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010329, VkglTestCase_010329_1, VkglTestCase_010329_2);

#define VkglTestCase_010330_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010330_2 "ator.bitwise_xor_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010330, VkglTestCase_010330_1, VkglTestCase_010330_2);

#define VkglTestCase_010331_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010331_2 "tor.bitwise_xor_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010331, VkglTestCase_010331_1, VkglTestCase_010331_2);

#define VkglTestCase_010332_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010332_2 "erator.bitwise_xor_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010332, VkglTestCase_010332_1, VkglTestCase_010332_2);

#define VkglTestCase_010333_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010333_2 "rator.bitwise_xor_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010333, VkglTestCase_010333_1, VkglTestCase_010333_2);

#define VkglTestCase_010334_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010334_2 "rator.bitwise_xor_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010334, VkglTestCase_010334_1, VkglTestCase_010334_2);

#define VkglTestCase_010335_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010335_2 "ator.bitwise_xor_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010335, VkglTestCase_010335_1, VkglTestCase_010335_2);

#define VkglTestCase_010336_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010336_2 "rator.bitwise_xor_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010336, VkglTestCase_010336_1, VkglTestCase_010336_2);

#define VkglTestCase_010337_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010337_2 "ator.bitwise_xor_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010337, VkglTestCase_010337_1, VkglTestCase_010337_2);

#define VkglTestCase_010338_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010338_2 "rator.bitwise_xor_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010338, VkglTestCase_010338_1, VkglTestCase_010338_2);

#define VkglTestCase_010339_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010339_2 "ator.bitwise_xor_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010339, VkglTestCase_010339_1, VkglTestCase_010339_2);

#define VkglTestCase_010340_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010340_2 "erator.bitwise_xor_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010340, VkglTestCase_010340_1, VkglTestCase_010340_2);

#define VkglTestCase_010341_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010341_2 "rator.bitwise_xor_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010341, VkglTestCase_010341_1, VkglTestCase_010341_2);

#define VkglTestCase_010342_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010342_2 "ator.bitwise_xor_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010342, VkglTestCase_010342_1, VkglTestCase_010342_2);

#define VkglTestCase_010343_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010343_2 "tor.bitwise_xor_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010343, VkglTestCase_010343_1, VkglTestCase_010343_2);

#define VkglTestCase_010344_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010344_2 "rator.bitwise_xor_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010344, VkglTestCase_010344_1, VkglTestCase_010344_2);

#define VkglTestCase_010345_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010345_2 "ator.bitwise_xor_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010345, VkglTestCase_010345_1, VkglTestCase_010345_2);

#define VkglTestCase_010346_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010346_2 "ator.bitwise_xor_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010346, VkglTestCase_010346_1, VkglTestCase_010346_2);

#define VkglTestCase_010347_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010347_2 "tor.bitwise_xor_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010347, VkglTestCase_010347_1, VkglTestCase_010347_2);

#define VkglTestCase_010348_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010348_2 "rator.bitwise_xor_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010348, VkglTestCase_010348_1, VkglTestCase_010348_2);

#define VkglTestCase_010349_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010349_2 "ator.bitwise_xor_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010349, VkglTestCase_010349_1, VkglTestCase_010349_2);

#define VkglTestCase_010350_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010350_2 "ator.bitwise_xor_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010350, VkglTestCase_010350_1, VkglTestCase_010350_2);

#define VkglTestCase_010351_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010351_2 "tor.bitwise_xor_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010351, VkglTestCase_010351_1, VkglTestCase_010351_2);

#define VkglTestCase_010352_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010352_2 "rator.bitwise_xor_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010352, VkglTestCase_010352_1, VkglTestCase_010352_2);

#define VkglTestCase_010353_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010353_2 "ator.bitwise_xor_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010353, VkglTestCase_010353_1, VkglTestCase_010353_2);

#define VkglTestCase_010354_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010354_2 "ator.bitwise_xor_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010354, VkglTestCase_010354_1, VkglTestCase_010354_2);

#define VkglTestCase_010355_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010355_2 "tor.bitwise_xor_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010355, VkglTestCase_010355_1, VkglTestCase_010355_2);

#define VkglTestCase_010356_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010356_2 "rator.bitwise_xor_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010356, VkglTestCase_010356_1, VkglTestCase_010356_2);

#define VkglTestCase_010357_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010357_2 "ator.bitwise_xor_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010357, VkglTestCase_010357_1, VkglTestCase_010357_2);

#define VkglTestCase_010358_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010358_2 "rator.bitwise_xor_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010358, VkglTestCase_010358_1, VkglTestCase_010358_2);

#define VkglTestCase_010359_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010359_2 "ator.bitwise_xor_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010359, VkglTestCase_010359_1, VkglTestCase_010359_2);

#define VkglTestCase_010360_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010360_2 "rator.bitwise_xor_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010360, VkglTestCase_010360_1, VkglTestCase_010360_2);

#define VkglTestCase_010361_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010361_2 "ator.bitwise_xor_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010361, VkglTestCase_010361_1, VkglTestCase_010361_2);

#define VkglTestCase_010362_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010362_2 "rator.bitwise_xor_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010362, VkglTestCase_010362_1, VkglTestCase_010362_2);

#define VkglTestCase_010363_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010363_2 "ator.bitwise_xor_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010363, VkglTestCase_010363_1, VkglTestCase_010363_2);

#define VkglTestCase_010364_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010364_2 "tor.bitwise_xor_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010364, VkglTestCase_010364_1, VkglTestCase_010364_2);

#define VkglTestCase_010365_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010365_2 "or.bitwise_xor_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010365, VkglTestCase_010365_1, VkglTestCase_010365_2);

#define VkglTestCase_010366_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010366_2 "or.bitwise_xor_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010366, VkglTestCase_010366_1, VkglTestCase_010366_2);

#define VkglTestCase_010367_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010367_2 "r.bitwise_xor_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010367, VkglTestCase_010367_1, VkglTestCase_010367_2);

#define VkglTestCase_010368_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010368_2 "tor.bitwise_xor_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010368, VkglTestCase_010368_1, VkglTestCase_010368_2);

#define VkglTestCase_010369_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010369_2 "or.bitwise_xor_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010369, VkglTestCase_010369_1, VkglTestCase_010369_2);

#define VkglTestCase_010370_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010370_2 "or.bitwise_xor_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010370, VkglTestCase_010370_1, VkglTestCase_010370_2);

#define VkglTestCase_010371_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010371_2 "r.bitwise_xor_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010371, VkglTestCase_010371_1, VkglTestCase_010371_2);

#define VkglTestCase_010372_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010372_2 "tor.bitwise_xor_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010372, VkglTestCase_010372_1, VkglTestCase_010372_2);

#define VkglTestCase_010373_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010373_2 "or.bitwise_xor_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010373, VkglTestCase_010373_1, VkglTestCase_010373_2);

#define VkglTestCase_010374_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010374_2 "or.bitwise_xor_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010374, VkglTestCase_010374_1, VkglTestCase_010374_2);

#define VkglTestCase_010375_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010375_2 "r.bitwise_xor_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010375, VkglTestCase_010375_1, VkglTestCase_010375_2);

#define VkglTestCase_010376_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010376_2 "tor.bitwise_xor_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010376, VkglTestCase_010376_1, VkglTestCase_010376_2);

#define VkglTestCase_010377_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010377_2 "or.bitwise_xor_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010377, VkglTestCase_010377_1, VkglTestCase_010377_2);

#define VkglTestCase_010378_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010378_2 "tor.bitwise_xor_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010378, VkglTestCase_010378_1, VkglTestCase_010378_2);

#define VkglTestCase_010379_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010379_2 "or.bitwise_xor_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010379, VkglTestCase_010379_1, VkglTestCase_010379_2);

#define VkglTestCase_010380_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010380_2 "tor.bitwise_xor_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010380, VkglTestCase_010380_1, VkglTestCase_010380_2);

#define VkglTestCase_010381_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010381_2 "or.bitwise_xor_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010381, VkglTestCase_010381_1, VkglTestCase_010381_2);

#define VkglTestCase_010382_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010382_2 "tor.bitwise_xor_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010382, VkglTestCase_010382_1, VkglTestCase_010382_2);

#define VkglTestCase_010383_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010383_2 "or.bitwise_xor_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010383, VkglTestCase_010383_1, VkglTestCase_010383_2);

#define VkglTestCase_010384_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010384_2 "r.bitwise_xor_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010384, VkglTestCase_010384_1, VkglTestCase_010384_2);

#define VkglTestCase_010385_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010385_2 ".bitwise_xor_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010385, VkglTestCase_010385_1, VkglTestCase_010385_2);

#define VkglTestCase_010386_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010386_2 "tor.bitwise_xor_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010386, VkglTestCase_010386_1, VkglTestCase_010386_2);

#define VkglTestCase_010387_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010387_2 "or.bitwise_xor_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010387, VkglTestCase_010387_1, VkglTestCase_010387_2);

#define VkglTestCase_010388_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010388_2 "r.bitwise_xor_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010388, VkglTestCase_010388_1, VkglTestCase_010388_2);

#define VkglTestCase_010389_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010389_2 ".bitwise_xor_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010389, VkglTestCase_010389_1, VkglTestCase_010389_2);

#define VkglTestCase_010390_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010390_2 "tor.bitwise_xor_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010390, VkglTestCase_010390_1, VkglTestCase_010390_2);

#define VkglTestCase_010391_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010391_2 "or.bitwise_xor_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010391, VkglTestCase_010391_1, VkglTestCase_010391_2);

#define VkglTestCase_010392_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010392_2 "r.bitwise_xor_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010392, VkglTestCase_010392_1, VkglTestCase_010392_2);

#define VkglTestCase_010393_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010393_2 ".bitwise_xor_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010393, VkglTestCase_010393_1, VkglTestCase_010393_2);

#define VkglTestCase_010394_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010394_2 "or.bitwise_xor_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010394, VkglTestCase_010394_1, VkglTestCase_010394_2);

#define VkglTestCase_010395_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010395_2 "r.bitwise_xor_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010395, VkglTestCase_010395_1, VkglTestCase_010395_2);

#define VkglTestCase_010396_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010396_2 "or.bitwise_xor_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010396, VkglTestCase_010396_1, VkglTestCase_010396_2);

#define VkglTestCase_010397_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010397_2 "r.bitwise_xor_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010397, VkglTestCase_010397_1, VkglTestCase_010397_2);

#define VkglTestCase_010398_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010398_2 "or.bitwise_xor_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010398, VkglTestCase_010398_1, VkglTestCase_010398_2);

#define VkglTestCase_010399_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010399_2 "r.bitwise_xor_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010399, VkglTestCase_010399_1, VkglTestCase_010399_2);
