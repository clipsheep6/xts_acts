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

#define VkglTestCase_006012_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006012_2 ".common_functions.abs.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006012, VkglTestCase_006012_1, VkglTestCase_006012_2);

#define VkglTestCase_006013_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006013_2 "common_functions.abs.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006013, VkglTestCase_006013_1, VkglTestCase_006013_2);

#define VkglTestCase_006014_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006014_2 "ommon_functions.abs.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006014, VkglTestCase_006014_1, VkglTestCase_006014_2);

#define VkglTestCase_006015_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006015_2 "mmon_functions.abs.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006015, VkglTestCase_006015_1, VkglTestCase_006015_2);

#define VkglTestCase_006016_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006016_2 "common_functions.abs.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006016, VkglTestCase_006016_1, VkglTestCase_006016_2);

#define VkglTestCase_006017_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006017_2 "ommon_functions.abs.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006017, VkglTestCase_006017_1, VkglTestCase_006017_2);

#define VkglTestCase_006018_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006018_2 ".common_functions.abs.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006018, VkglTestCase_006018_1, VkglTestCase_006018_2);

#define VkglTestCase_006019_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006019_2 "common_functions.abs.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006019, VkglTestCase_006019_1, VkglTestCase_006019_2);

#define VkglTestCase_006020_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006020_2 "common_functions.abs.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006020, VkglTestCase_006020_1, VkglTestCase_006020_2);

#define VkglTestCase_006021_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006021_2 "ommon_functions.abs.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006021, VkglTestCase_006021_1, VkglTestCase_006021_2);

#define VkglTestCase_006022_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006022_2 ".common_functions.abs.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006022, VkglTestCase_006022_1, VkglTestCase_006022_2);

#define VkglTestCase_006023_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006023_2 "common_functions.abs.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006023, VkglTestCase_006023_1, VkglTestCase_006023_2);

#define VkglTestCase_006024_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006024_2 ".common_functions.abs.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006024, VkglTestCase_006024_1, VkglTestCase_006024_2);

#define VkglTestCase_006025_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006025_2 "common_functions.abs.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006025, VkglTestCase_006025_1, VkglTestCase_006025_2);

#define VkglTestCase_006026_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006026_2 "common_functions.abs.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006026, VkglTestCase_006026_1, VkglTestCase_006026_2);

#define VkglTestCase_006027_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006027_2 "ommon_functions.abs.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006027, VkglTestCase_006027_1, VkglTestCase_006027_2);

#define VkglTestCase_006028_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006028_2 ".common_functions.abs.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006028, VkglTestCase_006028_1, VkglTestCase_006028_2);

#define VkglTestCase_006029_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006029_2 "common_functions.abs.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006029, VkglTestCase_006029_1, VkglTestCase_006029_2);

#define VkglTestCase_006030_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006030_2 ".common_functions.abs.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006030, VkglTestCase_006030_1, VkglTestCase_006030_2);

#define VkglTestCase_006031_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006031_2 "common_functions.abs.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006031, VkglTestCase_006031_1, VkglTestCase_006031_2);

#define VkglTestCase_006032_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006032_2 "common_functions.abs.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006032, VkglTestCase_006032_1, VkglTestCase_006032_2);

#define VkglTestCase_006033_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006033_2 "ommon_functions.abs.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006033, VkglTestCase_006033_1, VkglTestCase_006033_2);

#define VkglTestCase_006034_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006034_2 ".common_functions.abs.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006034, VkglTestCase_006034_1, VkglTestCase_006034_2);

#define VkglTestCase_006035_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006035_2 "common_functions.abs.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006035, VkglTestCase_006035_1, VkglTestCase_006035_2);
