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

#define VkglTestCase_006060_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006060_2 "common_functions.floor.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006060, VkglTestCase_006060_1, VkglTestCase_006060_2);

#define VkglTestCase_006061_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006061_2 "ommon_functions.floor.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006061, VkglTestCase_006061_1, VkglTestCase_006061_2);

#define VkglTestCase_006062_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006062_2 "mmon_functions.floor.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006062, VkglTestCase_006062_1, VkglTestCase_006062_2);

#define VkglTestCase_006063_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006063_2 "mon_functions.floor.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006063, VkglTestCase_006063_1, VkglTestCase_006063_2);

#define VkglTestCase_006064_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006064_2 "ommon_functions.floor.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006064, VkglTestCase_006064_1, VkglTestCase_006064_2);

#define VkglTestCase_006065_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006065_2 "mmon_functions.floor.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006065, VkglTestCase_006065_1, VkglTestCase_006065_2);

#define VkglTestCase_006066_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006066_2 "common_functions.floor.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006066, VkglTestCase_006066_1, VkglTestCase_006066_2);

#define VkglTestCase_006067_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006067_2 "ommon_functions.floor.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006067, VkglTestCase_006067_1, VkglTestCase_006067_2);

#define VkglTestCase_006068_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006068_2 "ommon_functions.floor.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006068, VkglTestCase_006068_1, VkglTestCase_006068_2);

#define VkglTestCase_006069_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006069_2 "mmon_functions.floor.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006069, VkglTestCase_006069_1, VkglTestCase_006069_2);

#define VkglTestCase_006070_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006070_2 "common_functions.floor.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006070, VkglTestCase_006070_1, VkglTestCase_006070_2);

#define VkglTestCase_006071_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006071_2 "ommon_functions.floor.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006071, VkglTestCase_006071_1, VkglTestCase_006071_2);

#define VkglTestCase_006072_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006072_2 "common_functions.floor.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006072, VkglTestCase_006072_1, VkglTestCase_006072_2);

#define VkglTestCase_006073_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006073_2 "ommon_functions.floor.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006073, VkglTestCase_006073_1, VkglTestCase_006073_2);

#define VkglTestCase_006074_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006074_2 "ommon_functions.floor.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006074, VkglTestCase_006074_1, VkglTestCase_006074_2);

#define VkglTestCase_006075_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006075_2 "mmon_functions.floor.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006075, VkglTestCase_006075_1, VkglTestCase_006075_2);

#define VkglTestCase_006076_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006076_2 "common_functions.floor.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006076, VkglTestCase_006076_1, VkglTestCase_006076_2);

#define VkglTestCase_006077_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006077_2 "ommon_functions.floor.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006077, VkglTestCase_006077_1, VkglTestCase_006077_2);

#define VkglTestCase_006078_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006078_2 "common_functions.floor.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006078, VkglTestCase_006078_1, VkglTestCase_006078_2);

#define VkglTestCase_006079_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006079_2 "ommon_functions.floor.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006079, VkglTestCase_006079_1, VkglTestCase_006079_2);

#define VkglTestCase_006080_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006080_2 "ommon_functions.floor.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006080, VkglTestCase_006080_1, VkglTestCase_006080_2);

#define VkglTestCase_006081_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006081_2 "mmon_functions.floor.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006081, VkglTestCase_006081_1, VkglTestCase_006081_2);

#define VkglTestCase_006082_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006082_2 "common_functions.floor.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006082, VkglTestCase_006082_1, VkglTestCase_006082_2);

#define VkglTestCase_006083_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006083_2 "ommon_functions.floor.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006083, VkglTestCase_006083_1, VkglTestCase_006083_2);
