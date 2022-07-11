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

#define VkglTestCase_006160_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006160_2 ".common_functions.min.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006160, VkglTestCase_006160_1, VkglTestCase_006160_2);

#define VkglTestCase_006161_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006161_2 "common_functions.min.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006161, VkglTestCase_006161_1, VkglTestCase_006161_2);

#define VkglTestCase_006162_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006162_2 "ommon_functions.min.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006162, VkglTestCase_006162_1, VkglTestCase_006162_2);

#define VkglTestCase_006163_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006163_2 "mmon_functions.min.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006163, VkglTestCase_006163_1, VkglTestCase_006163_2);

#define VkglTestCase_006164_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006164_2 "common_functions.min.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006164, VkglTestCase_006164_1, VkglTestCase_006164_2);

#define VkglTestCase_006165_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006165_2 "ommon_functions.min.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006165, VkglTestCase_006165_1, VkglTestCase_006165_2);

#define VkglTestCase_006166_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006166_2 ".common_functions.min.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006166, VkglTestCase_006166_1, VkglTestCase_006166_2);

#define VkglTestCase_006167_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006167_2 "common_functions.min.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006167, VkglTestCase_006167_1, VkglTestCase_006167_2);

#define VkglTestCase_006168_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006168_2 "common_functions.min.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006168, VkglTestCase_006168_1, VkglTestCase_006168_2);

#define VkglTestCase_006169_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006169_2 "ommon_functions.min.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006169, VkglTestCase_006169_1, VkglTestCase_006169_2);

#define VkglTestCase_006170_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006170_2 ".common_functions.min.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006170, VkglTestCase_006170_1, VkglTestCase_006170_2);

#define VkglTestCase_006171_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006171_2 "common_functions.min.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006171, VkglTestCase_006171_1, VkglTestCase_006171_2);

#define VkglTestCase_006172_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006172_2 ".common_functions.min.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006172, VkglTestCase_006172_1, VkglTestCase_006172_2);

#define VkglTestCase_006173_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006173_2 "common_functions.min.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006173, VkglTestCase_006173_1, VkglTestCase_006173_2);

#define VkglTestCase_006174_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006174_2 "common_functions.min.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006174, VkglTestCase_006174_1, VkglTestCase_006174_2);

#define VkglTestCase_006175_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006175_2 "ommon_functions.min.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006175, VkglTestCase_006175_1, VkglTestCase_006175_2);

#define VkglTestCase_006176_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006176_2 ".common_functions.min.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006176, VkglTestCase_006176_1, VkglTestCase_006176_2);

#define VkglTestCase_006177_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006177_2 "common_functions.min.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006177, VkglTestCase_006177_1, VkglTestCase_006177_2);

#define VkglTestCase_006178_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006178_2 ".common_functions.min.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006178, VkglTestCase_006178_1, VkglTestCase_006178_2);

#define VkglTestCase_006179_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006179_2 "common_functions.min.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006179, VkglTestCase_006179_1, VkglTestCase_006179_2);

#define VkglTestCase_006180_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006180_2 "common_functions.min.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006180, VkglTestCase_006180_1, VkglTestCase_006180_2);

#define VkglTestCase_006181_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006181_2 "ommon_functions.min.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006181, VkglTestCase_006181_1, VkglTestCase_006181_2);

#define VkglTestCase_006182_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006182_2 ".common_functions.min.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006182, VkglTestCase_006182_1, VkglTestCase_006182_2);

#define VkglTestCase_006183_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006183_2 "common_functions.min.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006183, VkglTestCase_006183_1, VkglTestCase_006183_2);

#define VkglTestCase_006184_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006184_2 "mmon_functions.min.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006184, VkglTestCase_006184_1, VkglTestCase_006184_2);

#define VkglTestCase_006185_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006185_2 "mon_functions.min.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006185, VkglTestCase_006185_1, VkglTestCase_006185_2);

#define VkglTestCase_006186_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006186_2 "mon_functions.min.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006186, VkglTestCase_006186_1, VkglTestCase_006186_2);

#define VkglTestCase_006187_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006187_2 "on_functions.min.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006187, VkglTestCase_006187_1, VkglTestCase_006187_2);

#define VkglTestCase_006188_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006188_2 "mmon_functions.min.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006188, VkglTestCase_006188_1, VkglTestCase_006188_2);

#define VkglTestCase_006189_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006189_2 "mon_functions.min.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006189, VkglTestCase_006189_1, VkglTestCase_006189_2);

#define VkglTestCase_006190_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006190_2 "mmon_functions.min.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006190, VkglTestCase_006190_1, VkglTestCase_006190_2);

#define VkglTestCase_006191_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006191_2 "mon_functions.min.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006191, VkglTestCase_006191_1, VkglTestCase_006191_2);

#define VkglTestCase_006192_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006192_2 "mon_functions.min.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006192, VkglTestCase_006192_1, VkglTestCase_006192_2);

#define VkglTestCase_006193_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006193_2 "on_functions.min.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006193, VkglTestCase_006193_1, VkglTestCase_006193_2);

#define VkglTestCase_006194_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006194_2 "mmon_functions.min.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006194, VkglTestCase_006194_1, VkglTestCase_006194_2);

#define VkglTestCase_006195_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006195_2 "mon_functions.min.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006195, VkglTestCase_006195_1, VkglTestCase_006195_2);

#define VkglTestCase_006196_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006196_2 "mmon_functions.min.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006196, VkglTestCase_006196_1, VkglTestCase_006196_2);

#define VkglTestCase_006197_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006197_2 "mon_functions.min.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006197, VkglTestCase_006197_1, VkglTestCase_006197_2);

#define VkglTestCase_006198_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006198_2 "mon_functions.min.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006198, VkglTestCase_006198_1, VkglTestCase_006198_2);

#define VkglTestCase_006199_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006199_2 "on_functions.min.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006199, VkglTestCase_006199_1, VkglTestCase_006199_2);

#define VkglTestCase_006200_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006200_2 "mmon_functions.min.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006200, VkglTestCase_006200_1, VkglTestCase_006200_2);

#define VkglTestCase_006201_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006201_2 "mon_functions.min.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006201, VkglTestCase_006201_1, VkglTestCase_006201_2);
