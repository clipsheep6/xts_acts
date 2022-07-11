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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006328_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006328_2 "common_functions.step.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006328, VkglTestCase_006328_1, VkglTestCase_006328_2);

#define VkglTestCase_006329_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006329_2 "ommon_functions.step.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006329, VkglTestCase_006329_1, VkglTestCase_006329_2);

#define VkglTestCase_006330_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006330_2 "ommon_functions.step.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006330, VkglTestCase_006330_1, VkglTestCase_006330_2);

#define VkglTestCase_006331_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006331_2 "mmon_functions.step.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006331, VkglTestCase_006331_1, VkglTestCase_006331_2);

#define VkglTestCase_006332_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006332_2 "common_functions.step.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006332, VkglTestCase_006332_1, VkglTestCase_006332_2);

#define VkglTestCase_006333_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006333_2 "ommon_functions.step.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006333, VkglTestCase_006333_1, VkglTestCase_006333_2);

#define VkglTestCase_006334_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006334_2 ".common_functions.step.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006334, VkglTestCase_006334_1, VkglTestCase_006334_2);

#define VkglTestCase_006335_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006335_2 "common_functions.step.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006335, VkglTestCase_006335_1, VkglTestCase_006335_2);

#define VkglTestCase_006336_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006336_2 "ommon_functions.step.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006336, VkglTestCase_006336_1, VkglTestCase_006336_2);

#define VkglTestCase_006337_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006337_2 "mmon_functions.step.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006337, VkglTestCase_006337_1, VkglTestCase_006337_2);

#define VkglTestCase_006338_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006338_2 "common_functions.step.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006338, VkglTestCase_006338_1, VkglTestCase_006338_2);

#define VkglTestCase_006339_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006339_2 "ommon_functions.step.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006339, VkglTestCase_006339_1, VkglTestCase_006339_2);

#define VkglTestCase_006340_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006340_2 ".common_functions.step.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006340, VkglTestCase_006340_1, VkglTestCase_006340_2);

#define VkglTestCase_006341_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006341_2 "common_functions.step.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006341, VkglTestCase_006341_1, VkglTestCase_006341_2);

#define VkglTestCase_006342_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006342_2 "ommon_functions.step.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006342, VkglTestCase_006342_1, VkglTestCase_006342_2);

#define VkglTestCase_006343_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006343_2 "mmon_functions.step.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006343, VkglTestCase_006343_1, VkglTestCase_006343_2);

#define VkglTestCase_006344_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006344_2 "common_functions.step.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006344, VkglTestCase_006344_1, VkglTestCase_006344_2);

#define VkglTestCase_006345_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006345_2 "ommon_functions.step.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006345, VkglTestCase_006345_1, VkglTestCase_006345_2);

#define VkglTestCase_006346_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006346_2 ".common_functions.step.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006346, VkglTestCase_006346_1, VkglTestCase_006346_2);

#define VkglTestCase_006347_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006347_2 "common_functions.step.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006347, VkglTestCase_006347_1, VkglTestCase_006347_2);

#define VkglTestCase_006348_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006348_2 "ommon_functions.step.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006348, VkglTestCase_006348_1, VkglTestCase_006348_2);

#define VkglTestCase_006349_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006349_2 "mmon_functions.step.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006349, VkglTestCase_006349_1, VkglTestCase_006349_2);

#define VkglTestCase_006350_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006350_2 "common_functions.step.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006350, VkglTestCase_006350_1, VkglTestCase_006350_2);

#define VkglTestCase_006351_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006351_2 "ommon_functions.step.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006351, VkglTestCase_006351_1, VkglTestCase_006351_2);

#define VkglTestCase_006352_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006352_2 "mmon_functions.step.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006352, VkglTestCase_006352_1, VkglTestCase_006352_2);

#define VkglTestCase_006353_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006353_2 "mon_functions.step.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006353, VkglTestCase_006353_1, VkglTestCase_006353_2);

#define VkglTestCase_006354_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006354_2 "on_functions.step.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006354, VkglTestCase_006354_1, VkglTestCase_006354_2);

#define VkglTestCase_006355_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006355_2 "n_functions.step.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006355, VkglTestCase_006355_1, VkglTestCase_006355_2);

#define VkglTestCase_006356_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006356_2 "mon_functions.step.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006356, VkglTestCase_006356_1, VkglTestCase_006356_2);

#define VkglTestCase_006357_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006357_2 "on_functions.step.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006357, VkglTestCase_006357_1, VkglTestCase_006357_2);

#define VkglTestCase_006358_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006358_2 "mmon_functions.step.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006358, VkglTestCase_006358_1, VkglTestCase_006358_2);

#define VkglTestCase_006359_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006359_2 "mon_functions.step.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006359, VkglTestCase_006359_1, VkglTestCase_006359_2);

#define VkglTestCase_006360_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006360_2 "on_functions.step.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006360, VkglTestCase_006360_1, VkglTestCase_006360_2);

#define VkglTestCase_006361_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006361_2 "n_functions.step.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006361, VkglTestCase_006361_1, VkglTestCase_006361_2);

#define VkglTestCase_006362_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006362_2 "mon_functions.step.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006362, VkglTestCase_006362_1, VkglTestCase_006362_2);

#define VkglTestCase_006363_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006363_2 "on_functions.step.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006363, VkglTestCase_006363_1, VkglTestCase_006363_2);

#define VkglTestCase_006364_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006364_2 "mmon_functions.step.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006364, VkglTestCase_006364_1, VkglTestCase_006364_2);

#define VkglTestCase_006365_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006365_2 "mon_functions.step.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006365, VkglTestCase_006365_1, VkglTestCase_006365_2);

#define VkglTestCase_006366_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006366_2 "on_functions.step.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006366, VkglTestCase_006366_1, VkglTestCase_006366_2);

#define VkglTestCase_006367_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006367_2 "n_functions.step.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006367, VkglTestCase_006367_1, VkglTestCase_006367_2);

#define VkglTestCase_006368_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006368_2 "mon_functions.step.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006368, VkglTestCase_006368_1, VkglTestCase_006368_2);

#define VkglTestCase_006369_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006369_2 "on_functions.step.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006369, VkglTestCase_006369_1, VkglTestCase_006369_2);
