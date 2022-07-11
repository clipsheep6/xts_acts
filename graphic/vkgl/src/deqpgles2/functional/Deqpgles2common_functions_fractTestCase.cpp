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

#define VkglTestCase_006108_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006108_2 "common_functions.fract.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006108, VkglTestCase_006108_1, VkglTestCase_006108_2);

#define VkglTestCase_006109_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006109_2 "ommon_functions.fract.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006109, VkglTestCase_006109_1, VkglTestCase_006109_2);

#define VkglTestCase_006110_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006110_2 "mmon_functions.fract.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006110, VkglTestCase_006110_1, VkglTestCase_006110_2);

#define VkglTestCase_006111_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006111_2 "mon_functions.fract.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006111, VkglTestCase_006111_1, VkglTestCase_006111_2);

#define VkglTestCase_006112_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006112_2 "ommon_functions.fract.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006112, VkglTestCase_006112_1, VkglTestCase_006112_2);

#define VkglTestCase_006113_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006113_2 "mmon_functions.fract.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006113, VkglTestCase_006113_1, VkglTestCase_006113_2);

#define VkglTestCase_006114_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006114_2 "common_functions.fract.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006114, VkglTestCase_006114_1, VkglTestCase_006114_2);

#define VkglTestCase_006115_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006115_2 "ommon_functions.fract.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006115, VkglTestCase_006115_1, VkglTestCase_006115_2);

#define VkglTestCase_006116_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006116_2 "ommon_functions.fract.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006116, VkglTestCase_006116_1, VkglTestCase_006116_2);

#define VkglTestCase_006117_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006117_2 "mmon_functions.fract.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006117, VkglTestCase_006117_1, VkglTestCase_006117_2);

#define VkglTestCase_006118_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006118_2 "common_functions.fract.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006118, VkglTestCase_006118_1, VkglTestCase_006118_2);

#define VkglTestCase_006119_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006119_2 "ommon_functions.fract.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006119, VkglTestCase_006119_1, VkglTestCase_006119_2);

#define VkglTestCase_006120_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006120_2 "common_functions.fract.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006120, VkglTestCase_006120_1, VkglTestCase_006120_2);

#define VkglTestCase_006121_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006121_2 "ommon_functions.fract.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006121, VkglTestCase_006121_1, VkglTestCase_006121_2);

#define VkglTestCase_006122_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006122_2 "ommon_functions.fract.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006122, VkglTestCase_006122_1, VkglTestCase_006122_2);

#define VkglTestCase_006123_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006123_2 "mmon_functions.fract.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006123, VkglTestCase_006123_1, VkglTestCase_006123_2);

#define VkglTestCase_006124_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006124_2 "common_functions.fract.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006124, VkglTestCase_006124_1, VkglTestCase_006124_2);

#define VkglTestCase_006125_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006125_2 "ommon_functions.fract.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006125, VkglTestCase_006125_1, VkglTestCase_006125_2);

#define VkglTestCase_006126_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006126_2 "common_functions.fract.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006126, VkglTestCase_006126_1, VkglTestCase_006126_2);

#define VkglTestCase_006127_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006127_2 "ommon_functions.fract.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006127, VkglTestCase_006127_1, VkglTestCase_006127_2);

#define VkglTestCase_006128_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006128_2 "ommon_functions.fract.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006128, VkglTestCase_006128_1, VkglTestCase_006128_2);

#define VkglTestCase_006129_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006129_2 "mmon_functions.fract.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006129, VkglTestCase_006129_1, VkglTestCase_006129_2);

#define VkglTestCase_006130_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006130_2 "common_functions.fract.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006130, VkglTestCase_006130_1, VkglTestCase_006130_2);

#define VkglTestCase_006131_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006131_2 "ommon_functions.fract.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006131, VkglTestCase_006131_1, VkglTestCase_006131_2);
