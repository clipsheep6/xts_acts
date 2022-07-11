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

#define VkglTestCase_006244_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006244_2 "common_functions.clamp.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006244, VkglTestCase_006244_1, VkglTestCase_006244_2);

#define VkglTestCase_006245_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006245_2 "ommon_functions.clamp.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006245, VkglTestCase_006245_1, VkglTestCase_006245_2);

#define VkglTestCase_006246_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006246_2 "mmon_functions.clamp.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006246, VkglTestCase_006246_1, VkglTestCase_006246_2);

#define VkglTestCase_006247_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006247_2 "mon_functions.clamp.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006247, VkglTestCase_006247_1, VkglTestCase_006247_2);

#define VkglTestCase_006248_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006248_2 "ommon_functions.clamp.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006248, VkglTestCase_006248_1, VkglTestCase_006248_2);

#define VkglTestCase_006249_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006249_2 "mmon_functions.clamp.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006249, VkglTestCase_006249_1, VkglTestCase_006249_2);

#define VkglTestCase_006250_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006250_2 "common_functions.clamp.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006250, VkglTestCase_006250_1, VkglTestCase_006250_2);

#define VkglTestCase_006251_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006251_2 "ommon_functions.clamp.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006251, VkglTestCase_006251_1, VkglTestCase_006251_2);

#define VkglTestCase_006252_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006252_2 "ommon_functions.clamp.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006252, VkglTestCase_006252_1, VkglTestCase_006252_2);

#define VkglTestCase_006253_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006253_2 "mmon_functions.clamp.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006253, VkglTestCase_006253_1, VkglTestCase_006253_2);

#define VkglTestCase_006254_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006254_2 "common_functions.clamp.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006254, VkglTestCase_006254_1, VkglTestCase_006254_2);

#define VkglTestCase_006255_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006255_2 "ommon_functions.clamp.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006255, VkglTestCase_006255_1, VkglTestCase_006255_2);

#define VkglTestCase_006256_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006256_2 "common_functions.clamp.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006256, VkglTestCase_006256_1, VkglTestCase_006256_2);

#define VkglTestCase_006257_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006257_2 "ommon_functions.clamp.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006257, VkglTestCase_006257_1, VkglTestCase_006257_2);

#define VkglTestCase_006258_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006258_2 "ommon_functions.clamp.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006258, VkglTestCase_006258_1, VkglTestCase_006258_2);

#define VkglTestCase_006259_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006259_2 "mmon_functions.clamp.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006259, VkglTestCase_006259_1, VkglTestCase_006259_2);

#define VkglTestCase_006260_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006260_2 "common_functions.clamp.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006260, VkglTestCase_006260_1, VkglTestCase_006260_2);

#define VkglTestCase_006261_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006261_2 "ommon_functions.clamp.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006261, VkglTestCase_006261_1, VkglTestCase_006261_2);

#define VkglTestCase_006262_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006262_2 "common_functions.clamp.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006262, VkglTestCase_006262_1, VkglTestCase_006262_2);

#define VkglTestCase_006263_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006263_2 "ommon_functions.clamp.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006263, VkglTestCase_006263_1, VkglTestCase_006263_2);

#define VkglTestCase_006264_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006264_2 "ommon_functions.clamp.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006264, VkglTestCase_006264_1, VkglTestCase_006264_2);

#define VkglTestCase_006265_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006265_2 "mmon_functions.clamp.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006265, VkglTestCase_006265_1, VkglTestCase_006265_2);

#define VkglTestCase_006266_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006266_2 "common_functions.clamp.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006266, VkglTestCase_006266_1, VkglTestCase_006266_2);

#define VkglTestCase_006267_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006267_2 "ommon_functions.clamp.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006267, VkglTestCase_006267_1, VkglTestCase_006267_2);

#define VkglTestCase_006268_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006268_2 "mon_functions.clamp.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006268, VkglTestCase_006268_1, VkglTestCase_006268_2);

#define VkglTestCase_006269_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006269_2 "on_functions.clamp.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006269, VkglTestCase_006269_1, VkglTestCase_006269_2);

#define VkglTestCase_006270_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006270_2 "on_functions.clamp.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006270, VkglTestCase_006270_1, VkglTestCase_006270_2);

#define VkglTestCase_006271_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006271_2 "n_functions.clamp.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006271, VkglTestCase_006271_1, VkglTestCase_006271_2);

#define VkglTestCase_006272_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006272_2 "mon_functions.clamp.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006272, VkglTestCase_006272_1, VkglTestCase_006272_2);

#define VkglTestCase_006273_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006273_2 "on_functions.clamp.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006273, VkglTestCase_006273_1, VkglTestCase_006273_2);

#define VkglTestCase_006274_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006274_2 "mon_functions.clamp.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006274, VkglTestCase_006274_1, VkglTestCase_006274_2);

#define VkglTestCase_006275_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006275_2 "on_functions.clamp.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006275, VkglTestCase_006275_1, VkglTestCase_006275_2);

#define VkglTestCase_006276_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006276_2 "on_functions.clamp.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006276, VkglTestCase_006276_1, VkglTestCase_006276_2);

#define VkglTestCase_006277_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006277_2 "n_functions.clamp.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006277, VkglTestCase_006277_1, VkglTestCase_006277_2);

#define VkglTestCase_006278_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006278_2 "mon_functions.clamp.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006278, VkglTestCase_006278_1, VkglTestCase_006278_2);

#define VkglTestCase_006279_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006279_2 "on_functions.clamp.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006279, VkglTestCase_006279_1, VkglTestCase_006279_2);

#define VkglTestCase_006280_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006280_2 "mon_functions.clamp.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006280, VkglTestCase_006280_1, VkglTestCase_006280_2);

#define VkglTestCase_006281_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006281_2 "on_functions.clamp.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006281, VkglTestCase_006281_1, VkglTestCase_006281_2);

#define VkglTestCase_006282_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006282_2 "on_functions.clamp.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006282, VkglTestCase_006282_1, VkglTestCase_006282_2);

#define VkglTestCase_006283_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006283_2 "n_functions.clamp.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006283, VkglTestCase_006283_1, VkglTestCase_006283_2);

#define VkglTestCase_006284_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006284_2 "mon_functions.clamp.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006284, VkglTestCase_006284_1, VkglTestCase_006284_2);

#define VkglTestCase_006285_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006285_2 "on_functions.clamp.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006285, VkglTestCase_006285_1, VkglTestCase_006285_2);
