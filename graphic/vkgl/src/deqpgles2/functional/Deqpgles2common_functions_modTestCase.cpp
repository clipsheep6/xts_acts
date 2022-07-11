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

#define VkglTestCase_006132_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006132_2 "ommon_functions.mod.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006132, VkglTestCase_006132_1, VkglTestCase_006132_2);

#define VkglTestCase_006133_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006133_2 "mmon_functions.mod.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006133, VkglTestCase_006133_1, VkglTestCase_006133_2);

#define VkglTestCase_006134_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006134_2 "common_functions.mod.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006134, VkglTestCase_006134_1, VkglTestCase_006134_2);

#define VkglTestCase_006135_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006135_2 "ommon_functions.mod.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006135, VkglTestCase_006135_1, VkglTestCase_006135_2);

#define VkglTestCase_006136_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006136_2 "common_functions.mod.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006136, VkglTestCase_006136_1, VkglTestCase_006136_2);

#define VkglTestCase_006137_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006137_2 "ommon_functions.mod.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006137, VkglTestCase_006137_1, VkglTestCase_006137_2);

#define VkglTestCase_006138_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006138_2 ".common_functions.mod.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006138, VkglTestCase_006138_1, VkglTestCase_006138_2);

#define VkglTestCase_006139_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006139_2 "common_functions.mod.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006139, VkglTestCase_006139_1, VkglTestCase_006139_2);

#define VkglTestCase_006140_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006140_2 "common_functions.mod.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006140, VkglTestCase_006140_1, VkglTestCase_006140_2);

#define VkglTestCase_006141_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006141_2 "ommon_functions.mod.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006141, VkglTestCase_006141_1, VkglTestCase_006141_2);

#define VkglTestCase_006142_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006142_2 ".common_functions.mod.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006142, VkglTestCase_006142_1, VkglTestCase_006142_2);

#define VkglTestCase_006143_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006143_2 "common_functions.mod.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006143, VkglTestCase_006143_1, VkglTestCase_006143_2);

#define VkglTestCase_006144_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006144_2 "common_functions.mod.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006144, VkglTestCase_006144_1, VkglTestCase_006144_2);

#define VkglTestCase_006145_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006145_2 "ommon_functions.mod.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006145, VkglTestCase_006145_1, VkglTestCase_006145_2);

#define VkglTestCase_006146_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006146_2 ".common_functions.mod.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006146, VkglTestCase_006146_1, VkglTestCase_006146_2);

#define VkglTestCase_006147_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006147_2 "common_functions.mod.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006147, VkglTestCase_006147_1, VkglTestCase_006147_2);

#define VkglTestCase_006148_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006148_2 "mon_functions.mod.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006148, VkglTestCase_006148_1, VkglTestCase_006148_2);

#define VkglTestCase_006149_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006149_2 "on_functions.mod.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006149, VkglTestCase_006149_1, VkglTestCase_006149_2);

#define VkglTestCase_006150_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006150_2 "mmon_functions.mod.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006150, VkglTestCase_006150_1, VkglTestCase_006150_2);

#define VkglTestCase_006151_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006151_2 "mon_functions.mod.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006151, VkglTestCase_006151_1, VkglTestCase_006151_2);

#define VkglTestCase_006152_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006152_2 "mon_functions.mod.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006152, VkglTestCase_006152_1, VkglTestCase_006152_2);

#define VkglTestCase_006153_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006153_2 "on_functions.mod.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006153, VkglTestCase_006153_1, VkglTestCase_006153_2);

#define VkglTestCase_006154_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006154_2 "mmon_functions.mod.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006154, VkglTestCase_006154_1, VkglTestCase_006154_2);

#define VkglTestCase_006155_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006155_2 "mon_functions.mod.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006155, VkglTestCase_006155_1, VkglTestCase_006155_2);

#define VkglTestCase_006156_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006156_2 "mon_functions.mod.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006156, VkglTestCase_006156_1, VkglTestCase_006156_2);

#define VkglTestCase_006157_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006157_2 "on_functions.mod.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006157, VkglTestCase_006157_1, VkglTestCase_006157_2);

#define VkglTestCase_006158_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006158_2 "mmon_functions.mod.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006158, VkglTestCase_006158_1, VkglTestCase_006158_2);

#define VkglTestCase_006159_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006159_2 "mon_functions.mod.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006159, VkglTestCase_006159_1, VkglTestCase_006159_2);
