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

#define VkglTestCase_006084_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006084_2 "common_functions.ceil.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006084, VkglTestCase_006084_1, VkglTestCase_006084_2);

#define VkglTestCase_006085_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006085_2 "ommon_functions.ceil.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006085, VkglTestCase_006085_1, VkglTestCase_006085_2);

#define VkglTestCase_006086_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006086_2 "ommon_functions.ceil.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006086, VkglTestCase_006086_1, VkglTestCase_006086_2);

#define VkglTestCase_006087_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006087_2 "mmon_functions.ceil.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006087, VkglTestCase_006087_1, VkglTestCase_006087_2);

#define VkglTestCase_006088_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006088_2 "common_functions.ceil.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006088, VkglTestCase_006088_1, VkglTestCase_006088_2);

#define VkglTestCase_006089_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006089_2 "ommon_functions.ceil.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006089, VkglTestCase_006089_1, VkglTestCase_006089_2);

#define VkglTestCase_006090_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006090_2 ".common_functions.ceil.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006090, VkglTestCase_006090_1, VkglTestCase_006090_2);

#define VkglTestCase_006091_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006091_2 "common_functions.ceil.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006091, VkglTestCase_006091_1, VkglTestCase_006091_2);

#define VkglTestCase_006092_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006092_2 "ommon_functions.ceil.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006092, VkglTestCase_006092_1, VkglTestCase_006092_2);

#define VkglTestCase_006093_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006093_2 "mmon_functions.ceil.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006093, VkglTestCase_006093_1, VkglTestCase_006093_2);

#define VkglTestCase_006094_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006094_2 "common_functions.ceil.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006094, VkglTestCase_006094_1, VkglTestCase_006094_2);

#define VkglTestCase_006095_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006095_2 "ommon_functions.ceil.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006095, VkglTestCase_006095_1, VkglTestCase_006095_2);

#define VkglTestCase_006096_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006096_2 ".common_functions.ceil.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006096, VkglTestCase_006096_1, VkglTestCase_006096_2);

#define VkglTestCase_006097_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006097_2 "common_functions.ceil.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006097, VkglTestCase_006097_1, VkglTestCase_006097_2);

#define VkglTestCase_006098_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006098_2 "ommon_functions.ceil.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006098, VkglTestCase_006098_1, VkglTestCase_006098_2);

#define VkglTestCase_006099_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006099_2 "mmon_functions.ceil.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006099, VkglTestCase_006099_1, VkglTestCase_006099_2);

#define VkglTestCase_006100_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006100_2 "common_functions.ceil.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006100, VkglTestCase_006100_1, VkglTestCase_006100_2);

#define VkglTestCase_006101_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006101_2 "ommon_functions.ceil.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006101, VkglTestCase_006101_1, VkglTestCase_006101_2);

#define VkglTestCase_006102_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006102_2 ".common_functions.ceil.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006102, VkglTestCase_006102_1, VkglTestCase_006102_2);

#define VkglTestCase_006103_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006103_2 "common_functions.ceil.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006103, VkglTestCase_006103_1, VkglTestCase_006103_2);

#define VkglTestCase_006104_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006104_2 "ommon_functions.ceil.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006104, VkglTestCase_006104_1, VkglTestCase_006104_2);

#define VkglTestCase_006105_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006105_2 "mmon_functions.ceil.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006105, VkglTestCase_006105_1, VkglTestCase_006105_2);

#define VkglTestCase_006106_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006106_2 "common_functions.ceil.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006106, VkglTestCase_006106_1, VkglTestCase_006106_2);

#define VkglTestCase_006107_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006107_2 "ommon_functions.ceil.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006107, VkglTestCase_006107_1, VkglTestCase_006107_2);
