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

#define VkglTestCase_006202_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006202_2 ".common_functions.max.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006202, VkglTestCase_006202_1, VkglTestCase_006202_2);

#define VkglTestCase_006203_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006203_2 "common_functions.max.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006203, VkglTestCase_006203_1, VkglTestCase_006203_2);

#define VkglTestCase_006204_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006204_2 "ommon_functions.max.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006204, VkglTestCase_006204_1, VkglTestCase_006204_2);

#define VkglTestCase_006205_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006205_2 "mmon_functions.max.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006205, VkglTestCase_006205_1, VkglTestCase_006205_2);

#define VkglTestCase_006206_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006206_2 "common_functions.max.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006206, VkglTestCase_006206_1, VkglTestCase_006206_2);

#define VkglTestCase_006207_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006207_2 "ommon_functions.max.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006207, VkglTestCase_006207_1, VkglTestCase_006207_2);

#define VkglTestCase_006208_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006208_2 ".common_functions.max.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006208, VkglTestCase_006208_1, VkglTestCase_006208_2);

#define VkglTestCase_006209_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006209_2 "common_functions.max.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006209, VkglTestCase_006209_1, VkglTestCase_006209_2);

#define VkglTestCase_006210_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006210_2 "common_functions.max.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006210, VkglTestCase_006210_1, VkglTestCase_006210_2);

#define VkglTestCase_006211_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006211_2 "ommon_functions.max.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006211, VkglTestCase_006211_1, VkglTestCase_006211_2);

#define VkglTestCase_006212_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006212_2 ".common_functions.max.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006212, VkglTestCase_006212_1, VkglTestCase_006212_2);

#define VkglTestCase_006213_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006213_2 "common_functions.max.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006213, VkglTestCase_006213_1, VkglTestCase_006213_2);

#define VkglTestCase_006214_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006214_2 ".common_functions.max.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006214, VkglTestCase_006214_1, VkglTestCase_006214_2);

#define VkglTestCase_006215_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006215_2 "common_functions.max.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006215, VkglTestCase_006215_1, VkglTestCase_006215_2);

#define VkglTestCase_006216_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006216_2 "common_functions.max.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006216, VkglTestCase_006216_1, VkglTestCase_006216_2);

#define VkglTestCase_006217_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006217_2 "ommon_functions.max.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006217, VkglTestCase_006217_1, VkglTestCase_006217_2);

#define VkglTestCase_006218_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006218_2 ".common_functions.max.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006218, VkglTestCase_006218_1, VkglTestCase_006218_2);

#define VkglTestCase_006219_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006219_2 "common_functions.max.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006219, VkglTestCase_006219_1, VkglTestCase_006219_2);

#define VkglTestCase_006220_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006220_2 ".common_functions.max.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006220, VkglTestCase_006220_1, VkglTestCase_006220_2);

#define VkglTestCase_006221_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006221_2 "common_functions.max.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006221, VkglTestCase_006221_1, VkglTestCase_006221_2);

#define VkglTestCase_006222_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006222_2 "common_functions.max.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006222, VkglTestCase_006222_1, VkglTestCase_006222_2);

#define VkglTestCase_006223_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006223_2 "ommon_functions.max.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006223, VkglTestCase_006223_1, VkglTestCase_006223_2);

#define VkglTestCase_006224_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006224_2 ".common_functions.max.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006224, VkglTestCase_006224_1, VkglTestCase_006224_2);

#define VkglTestCase_006225_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006225_2 "common_functions.max.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006225, VkglTestCase_006225_1, VkglTestCase_006225_2);

#define VkglTestCase_006226_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006226_2 "mmon_functions.max.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006226, VkglTestCase_006226_1, VkglTestCase_006226_2);

#define VkglTestCase_006227_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006227_2 "mon_functions.max.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006227, VkglTestCase_006227_1, VkglTestCase_006227_2);

#define VkglTestCase_006228_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006228_2 "mon_functions.max.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006228, VkglTestCase_006228_1, VkglTestCase_006228_2);

#define VkglTestCase_006229_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006229_2 "on_functions.max.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006229, VkglTestCase_006229_1, VkglTestCase_006229_2);

#define VkglTestCase_006230_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006230_2 "mmon_functions.max.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006230, VkglTestCase_006230_1, VkglTestCase_006230_2);

#define VkglTestCase_006231_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006231_2 "mon_functions.max.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006231, VkglTestCase_006231_1, VkglTestCase_006231_2);

#define VkglTestCase_006232_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006232_2 "mmon_functions.max.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006232, VkglTestCase_006232_1, VkglTestCase_006232_2);

#define VkglTestCase_006233_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006233_2 "mon_functions.max.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006233, VkglTestCase_006233_1, VkglTestCase_006233_2);

#define VkglTestCase_006234_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006234_2 "mon_functions.max.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006234, VkglTestCase_006234_1, VkglTestCase_006234_2);

#define VkglTestCase_006235_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006235_2 "on_functions.max.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006235, VkglTestCase_006235_1, VkglTestCase_006235_2);

#define VkglTestCase_006236_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006236_2 "mmon_functions.max.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006236, VkglTestCase_006236_1, VkglTestCase_006236_2);

#define VkglTestCase_006237_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006237_2 "mon_functions.max.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006237, VkglTestCase_006237_1, VkglTestCase_006237_2);

#define VkglTestCase_006238_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006238_2 "mmon_functions.max.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006238, VkglTestCase_006238_1, VkglTestCase_006238_2);

#define VkglTestCase_006239_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006239_2 "mon_functions.max.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006239, VkglTestCase_006239_1, VkglTestCase_006239_2);

#define VkglTestCase_006240_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006240_2 "mon_functions.max.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006240, VkglTestCase_006240_1, VkglTestCase_006240_2);

#define VkglTestCase_006241_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006241_2 "on_functions.max.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006241, VkglTestCase_006241_1, VkglTestCase_006241_2);

#define VkglTestCase_006242_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006242_2 "mmon_functions.max.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006242, VkglTestCase_006242_1, VkglTestCase_006242_2);

#define VkglTestCase_006243_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006243_2 "mon_functions.max.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006243, VkglTestCase_006243_1, VkglTestCase_006243_2);
