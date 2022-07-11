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

#define VkglTestCase_006036_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006036_2 "common_functions.sign.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006036, VkglTestCase_006036_1, VkglTestCase_006036_2);

#define VkglTestCase_006037_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006037_2 "ommon_functions.sign.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006037, VkglTestCase_006037_1, VkglTestCase_006037_2);

#define VkglTestCase_006038_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006038_2 "ommon_functions.sign.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006038, VkglTestCase_006038_1, VkglTestCase_006038_2);

#define VkglTestCase_006039_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006039_2 "mmon_functions.sign.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006039, VkglTestCase_006039_1, VkglTestCase_006039_2);

#define VkglTestCase_006040_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006040_2 "common_functions.sign.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006040, VkglTestCase_006040_1, VkglTestCase_006040_2);

#define VkglTestCase_006041_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006041_2 "ommon_functions.sign.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006041, VkglTestCase_006041_1, VkglTestCase_006041_2);

#define VkglTestCase_006042_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006042_2 ".common_functions.sign.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006042, VkglTestCase_006042_1, VkglTestCase_006042_2);

#define VkglTestCase_006043_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006043_2 "common_functions.sign.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006043, VkglTestCase_006043_1, VkglTestCase_006043_2);

#define VkglTestCase_006044_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006044_2 "ommon_functions.sign.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006044, VkglTestCase_006044_1, VkglTestCase_006044_2);

#define VkglTestCase_006045_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006045_2 "mmon_functions.sign.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006045, VkglTestCase_006045_1, VkglTestCase_006045_2);

#define VkglTestCase_006046_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006046_2 "common_functions.sign.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006046, VkglTestCase_006046_1, VkglTestCase_006046_2);

#define VkglTestCase_006047_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006047_2 "ommon_functions.sign.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006047, VkglTestCase_006047_1, VkglTestCase_006047_2);

#define VkglTestCase_006048_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006048_2 ".common_functions.sign.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006048, VkglTestCase_006048_1, VkglTestCase_006048_2);

#define VkglTestCase_006049_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006049_2 "common_functions.sign.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006049, VkglTestCase_006049_1, VkglTestCase_006049_2);

#define VkglTestCase_006050_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006050_2 "ommon_functions.sign.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006050, VkglTestCase_006050_1, VkglTestCase_006050_2);

#define VkglTestCase_006051_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006051_2 "mmon_functions.sign.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006051, VkglTestCase_006051_1, VkglTestCase_006051_2);

#define VkglTestCase_006052_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006052_2 "common_functions.sign.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006052, VkglTestCase_006052_1, VkglTestCase_006052_2);

#define VkglTestCase_006053_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006053_2 "ommon_functions.sign.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006053, VkglTestCase_006053_1, VkglTestCase_006053_2);

#define VkglTestCase_006054_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006054_2 ".common_functions.sign.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006054, VkglTestCase_006054_1, VkglTestCase_006054_2);

#define VkglTestCase_006055_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006055_2 "common_functions.sign.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006055, VkglTestCase_006055_1, VkglTestCase_006055_2);

#define VkglTestCase_006056_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006056_2 "ommon_functions.sign.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006056, VkglTestCase_006056_1, VkglTestCase_006056_2);

#define VkglTestCase_006057_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006057_2 "mmon_functions.sign.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006057, VkglTestCase_006057_1, VkglTestCase_006057_2);

#define VkglTestCase_006058_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006058_2 "common_functions.sign.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006058, VkglTestCase_006058_1, VkglTestCase_006058_2);

#define VkglTestCase_006059_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006059_2 "ommon_functions.sign.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006059, VkglTestCase_006059_1, VkglTestCase_006059_2);
