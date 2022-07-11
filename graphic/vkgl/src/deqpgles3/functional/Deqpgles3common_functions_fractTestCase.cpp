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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012718_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012718_2 "common_functions.fract.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012718, VkglTestCase_012718_1, VkglTestCase_012718_2);

#define VkglTestCase_012719_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012719_2 "ommon_functions.fract.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012719, VkglTestCase_012719_1, VkglTestCase_012719_2);

#define VkglTestCase_012720_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012720_2 "mmon_functions.fract.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012720, VkglTestCase_012720_1, VkglTestCase_012720_2);

#define VkglTestCase_012721_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012721_2 "mon_functions.fract.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012721, VkglTestCase_012721_1, VkglTestCase_012721_2);

#define VkglTestCase_012722_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012722_2 "ommon_functions.fract.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012722, VkglTestCase_012722_1, VkglTestCase_012722_2);

#define VkglTestCase_012723_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012723_2 "mmon_functions.fract.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012723, VkglTestCase_012723_1, VkglTestCase_012723_2);

#define VkglTestCase_012724_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012724_2 "common_functions.fract.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012724, VkglTestCase_012724_1, VkglTestCase_012724_2);

#define VkglTestCase_012725_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012725_2 "ommon_functions.fract.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012725, VkglTestCase_012725_1, VkglTestCase_012725_2);

#define VkglTestCase_012726_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012726_2 "ommon_functions.fract.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012726, VkglTestCase_012726_1, VkglTestCase_012726_2);

#define VkglTestCase_012727_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012727_2 "mmon_functions.fract.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012727, VkglTestCase_012727_1, VkglTestCase_012727_2);

#define VkglTestCase_012728_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012728_2 "common_functions.fract.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012728, VkglTestCase_012728_1, VkglTestCase_012728_2);

#define VkglTestCase_012729_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012729_2 "ommon_functions.fract.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012729, VkglTestCase_012729_1, VkglTestCase_012729_2);

#define VkglTestCase_012730_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012730_2 "common_functions.fract.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012730, VkglTestCase_012730_1, VkglTestCase_012730_2);

#define VkglTestCase_012731_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012731_2 "ommon_functions.fract.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012731, VkglTestCase_012731_1, VkglTestCase_012731_2);

#define VkglTestCase_012732_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012732_2 "ommon_functions.fract.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012732, VkglTestCase_012732_1, VkglTestCase_012732_2);

#define VkglTestCase_012733_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012733_2 "mmon_functions.fract.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012733, VkglTestCase_012733_1, VkglTestCase_012733_2);

#define VkglTestCase_012734_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012734_2 "common_functions.fract.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012734, VkglTestCase_012734_1, VkglTestCase_012734_2);

#define VkglTestCase_012735_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012735_2 "ommon_functions.fract.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012735, VkglTestCase_012735_1, VkglTestCase_012735_2);

#define VkglTestCase_012736_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012736_2 "common_functions.fract.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012736, VkglTestCase_012736_1, VkglTestCase_012736_2);

#define VkglTestCase_012737_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012737_2 "ommon_functions.fract.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012737, VkglTestCase_012737_1, VkglTestCase_012737_2);

#define VkglTestCase_012738_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012738_2 "ommon_functions.fract.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012738, VkglTestCase_012738_1, VkglTestCase_012738_2);

#define VkglTestCase_012739_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012739_2 "mmon_functions.fract.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012739, VkglTestCase_012739_1, VkglTestCase_012739_2);

#define VkglTestCase_012740_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012740_2 "common_functions.fract.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012740, VkglTestCase_012740_1, VkglTestCase_012740_2);

#define VkglTestCase_012741_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012741_2 "ommon_functions.fract.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012741, VkglTestCase_012741_1, VkglTestCase_012741_2);
