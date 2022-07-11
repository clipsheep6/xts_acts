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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005314_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005314_2 "_operator.sub_assign_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005314, VkglTestCase_005314_1, VkglTestCase_005314_2);

#define VkglTestCase_005315_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005315_2 "operator.sub_assign_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005315, VkglTestCase_005315_1, VkglTestCase_005315_2);

#define VkglTestCase_005316_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005316_2 "operator.sub_assign_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005316, VkglTestCase_005316_1, VkglTestCase_005316_2);

#define VkglTestCase_005317_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005317_2 "perator.sub_assign_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005317, VkglTestCase_005317_1, VkglTestCase_005317_2);

#define VkglTestCase_005318_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005318_2 "_operator.sub_assign_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005318, VkglTestCase_005318_1, VkglTestCase_005318_2);

#define VkglTestCase_005319_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005319_2 "operator.sub_assign_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005319, VkglTestCase_005319_1, VkglTestCase_005319_2);

#define VkglTestCase_005320_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005320_2 "y_operator.sub_assign_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005320, VkglTestCase_005320_1, VkglTestCase_005320_2);

#define VkglTestCase_005321_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005321_2 "_operator.sub_assign_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005321, VkglTestCase_005321_1, VkglTestCase_005321_2);

#define VkglTestCase_005322_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005322_2 "operator.sub_assign_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005322, VkglTestCase_005322_1, VkglTestCase_005322_2);

#define VkglTestCase_005323_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005323_2 "perator.sub_assign_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005323, VkglTestCase_005323_1, VkglTestCase_005323_2);

#define VkglTestCase_005324_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005324_2 "_operator.sub_assign_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005324, VkglTestCase_005324_1, VkglTestCase_005324_2);

#define VkglTestCase_005325_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005325_2 "operator.sub_assign_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005325, VkglTestCase_005325_1, VkglTestCase_005325_2);

#define VkglTestCase_005326_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005326_2 "y_operator.sub_assign_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005326, VkglTestCase_005326_1, VkglTestCase_005326_2);

#define VkglTestCase_005327_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005327_2 "_operator.sub_assign_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005327, VkglTestCase_005327_1, VkglTestCase_005327_2);

#define VkglTestCase_005328_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005328_2 "operator.sub_assign_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005328, VkglTestCase_005328_1, VkglTestCase_005328_2);

#define VkglTestCase_005329_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005329_2 "perator.sub_assign_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005329, VkglTestCase_005329_1, VkglTestCase_005329_2);

#define VkglTestCase_005330_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005330_2 "_operator.sub_assign_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005330, VkglTestCase_005330_1, VkglTestCase_005330_2);

#define VkglTestCase_005331_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005331_2 "operator.sub_assign_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005331, VkglTestCase_005331_1, VkglTestCase_005331_2);

#define VkglTestCase_005332_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005332_2 "y_operator.sub_assign_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005332, VkglTestCase_005332_1, VkglTestCase_005332_2);

#define VkglTestCase_005333_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005333_2 "_operator.sub_assign_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005333, VkglTestCase_005333_1, VkglTestCase_005333_2);

#define VkglTestCase_005334_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005334_2 "operator.sub_assign_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005334, VkglTestCase_005334_1, VkglTestCase_005334_2);

#define VkglTestCase_005335_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005335_2 "perator.sub_assign_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005335, VkglTestCase_005335_1, VkglTestCase_005335_2);

#define VkglTestCase_005336_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005336_2 "_operator.sub_assign_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005336, VkglTestCase_005336_1, VkglTestCase_005336_2);

#define VkglTestCase_005337_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005337_2 "operator.sub_assign_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005337, VkglTestCase_005337_1, VkglTestCase_005337_2);

#define VkglTestCase_005338_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005338_2 "y_operator.sub_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005338, VkglTestCase_005338_1, VkglTestCase_005338_2);

#define VkglTestCase_005339_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005339_2 "_operator.sub_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005339, VkglTestCase_005339_1, VkglTestCase_005339_2);

#define VkglTestCase_005340_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005340_2 "_operator.sub_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005340, VkglTestCase_005340_1, VkglTestCase_005340_2);

#define VkglTestCase_005341_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005341_2 "operator.sub_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005341, VkglTestCase_005341_1, VkglTestCase_005341_2);

#define VkglTestCase_005342_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005342_2 "y_operator.sub_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005342, VkglTestCase_005342_1, VkglTestCase_005342_2);

#define VkglTestCase_005343_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005343_2 "_operator.sub_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005343, VkglTestCase_005343_1, VkglTestCase_005343_2);

#define VkglTestCase_005344_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005344_2 "_operator.sub_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005344, VkglTestCase_005344_1, VkglTestCase_005344_2);

#define VkglTestCase_005345_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005345_2 "operator.sub_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005345, VkglTestCase_005345_1, VkglTestCase_005345_2);

#define VkglTestCase_005346_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005346_2 "operator.sub_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005346, VkglTestCase_005346_1, VkglTestCase_005346_2);

#define VkglTestCase_005347_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005347_2 "perator.sub_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005347, VkglTestCase_005347_1, VkglTestCase_005347_2);

#define VkglTestCase_005348_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005348_2 "_operator.sub_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005348, VkglTestCase_005348_1, VkglTestCase_005348_2);

#define VkglTestCase_005349_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005349_2 "operator.sub_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005349, VkglTestCase_005349_1, VkglTestCase_005349_2);

#define VkglTestCase_005350_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005350_2 "_operator.sub_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005350, VkglTestCase_005350_1, VkglTestCase_005350_2);

#define VkglTestCase_005351_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005351_2 "operator.sub_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005351, VkglTestCase_005351_1, VkglTestCase_005351_2);

#define VkglTestCase_005352_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005352_2 "operator.sub_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005352, VkglTestCase_005352_1, VkglTestCase_005352_2);

#define VkglTestCase_005353_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005353_2 "perator.sub_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005353, VkglTestCase_005353_1, VkglTestCase_005353_2);

#define VkglTestCase_005354_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005354_2 "_operator.sub_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005354, VkglTestCase_005354_1, VkglTestCase_005354_2);

#define VkglTestCase_005355_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005355_2 "operator.sub_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005355, VkglTestCase_005355_1, VkglTestCase_005355_2);

#define VkglTestCase_005356_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005356_2 "_operator.sub_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005356, VkglTestCase_005356_1, VkglTestCase_005356_2);

#define VkglTestCase_005357_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005357_2 "operator.sub_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005357, VkglTestCase_005357_1, VkglTestCase_005357_2);

#define VkglTestCase_005358_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005358_2 "operator.sub_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005358, VkglTestCase_005358_1, VkglTestCase_005358_2);

#define VkglTestCase_005359_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005359_2 "perator.sub_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005359, VkglTestCase_005359_1, VkglTestCase_005359_2);

#define VkglTestCase_005360_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005360_2 "_operator.sub_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005360, VkglTestCase_005360_1, VkglTestCase_005360_2);

#define VkglTestCase_005361_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005361_2 "operator.sub_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005361, VkglTestCase_005361_1, VkglTestCase_005361_2);

#define VkglTestCase_005362_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005362_2 "perator.sub_assign_result.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005362, VkglTestCase_005362_1, VkglTestCase_005362_2);

#define VkglTestCase_005363_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005363_2 "erator.sub_assign_result.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005363, VkglTestCase_005363_1, VkglTestCase_005363_2);

#define VkglTestCase_005364_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005364_2 "rator.sub_assign_result.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005364, VkglTestCase_005364_1, VkglTestCase_005364_2);

#define VkglTestCase_005365_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005365_2 "ator.sub_assign_result.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005365, VkglTestCase_005365_1, VkglTestCase_005365_2);

#define VkglTestCase_005366_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005366_2 "erator.sub_assign_result.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005366, VkglTestCase_005366_1, VkglTestCase_005366_2);

#define VkglTestCase_005367_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005367_2 "rator.sub_assign_result.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005367, VkglTestCase_005367_1, VkglTestCase_005367_2);

#define VkglTestCase_005368_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005368_2 "perator.sub_assign_result.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005368, VkglTestCase_005368_1, VkglTestCase_005368_2);

#define VkglTestCase_005369_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005369_2 "erator.sub_assign_result.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005369, VkglTestCase_005369_1, VkglTestCase_005369_2);

#define VkglTestCase_005370_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005370_2 "rator.sub_assign_result.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005370, VkglTestCase_005370_1, VkglTestCase_005370_2);

#define VkglTestCase_005371_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005371_2 "ator.sub_assign_result.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005371, VkglTestCase_005371_1, VkglTestCase_005371_2);

#define VkglTestCase_005372_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005372_2 "erator.sub_assign_result.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005372, VkglTestCase_005372_1, VkglTestCase_005372_2);

#define VkglTestCase_005373_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005373_2 "rator.sub_assign_result.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005373, VkglTestCase_005373_1, VkglTestCase_005373_2);

#define VkglTestCase_005374_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005374_2 "perator.sub_assign_result.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005374, VkglTestCase_005374_1, VkglTestCase_005374_2);

#define VkglTestCase_005375_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005375_2 "erator.sub_assign_result.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005375, VkglTestCase_005375_1, VkglTestCase_005375_2);

#define VkglTestCase_005376_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005376_2 "rator.sub_assign_result.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005376, VkglTestCase_005376_1, VkglTestCase_005376_2);

#define VkglTestCase_005377_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005377_2 "ator.sub_assign_result.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005377, VkglTestCase_005377_1, VkglTestCase_005377_2);

#define VkglTestCase_005378_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005378_2 "erator.sub_assign_result.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005378, VkglTestCase_005378_1, VkglTestCase_005378_2);

#define VkglTestCase_005379_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005379_2 "rator.sub_assign_result.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005379, VkglTestCase_005379_1, VkglTestCase_005379_2);

#define VkglTestCase_005380_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005380_2 "perator.sub_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005380, VkglTestCase_005380_1, VkglTestCase_005380_2);

#define VkglTestCase_005381_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005381_2 "erator.sub_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005381, VkglTestCase_005381_1, VkglTestCase_005381_2);

#define VkglTestCase_005382_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005382_2 "erator.sub_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005382, VkglTestCase_005382_1, VkglTestCase_005382_2);

#define VkglTestCase_005383_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005383_2 "rator.sub_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005383, VkglTestCase_005383_1, VkglTestCase_005383_2);

#define VkglTestCase_005384_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005384_2 "perator.sub_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005384, VkglTestCase_005384_1, VkglTestCase_005384_2);

#define VkglTestCase_005385_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005385_2 "erator.sub_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005385, VkglTestCase_005385_1, VkglTestCase_005385_2);

#define VkglTestCase_005386_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005386_2 "perator.sub_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005386, VkglTestCase_005386_1, VkglTestCase_005386_2);

#define VkglTestCase_005387_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005387_2 "erator.sub_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005387, VkglTestCase_005387_1, VkglTestCase_005387_2);

#define VkglTestCase_005388_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005388_2 "erator.sub_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005388, VkglTestCase_005388_1, VkglTestCase_005388_2);

#define VkglTestCase_005389_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005389_2 "rator.sub_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005389, VkglTestCase_005389_1, VkglTestCase_005389_2);

#define VkglTestCase_005390_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005390_2 "perator.sub_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005390, VkglTestCase_005390_1, VkglTestCase_005390_2);

#define VkglTestCase_005391_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005391_2 "erator.sub_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005391, VkglTestCase_005391_1, VkglTestCase_005391_2);

#define VkglTestCase_005392_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005392_2 "perator.sub_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005392, VkglTestCase_005392_1, VkglTestCase_005392_2);

#define VkglTestCase_005393_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005393_2 "erator.sub_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005393, VkglTestCase_005393_1, VkglTestCase_005393_2);

#define VkglTestCase_005394_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005394_2 "erator.sub_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005394, VkglTestCase_005394_1, VkglTestCase_005394_2);

#define VkglTestCase_005395_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005395_2 "rator.sub_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005395, VkglTestCase_005395_1, VkglTestCase_005395_2);

#define VkglTestCase_005396_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005396_2 "perator.sub_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005396, VkglTestCase_005396_1, VkglTestCase_005396_2);

#define VkglTestCase_005397_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005397_2 "erator.sub_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005397, VkglTestCase_005397_1, VkglTestCase_005397_2);
