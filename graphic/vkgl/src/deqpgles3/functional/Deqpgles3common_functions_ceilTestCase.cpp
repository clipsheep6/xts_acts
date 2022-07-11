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

#define VkglTestCase_012694_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012694_2 "common_functions.ceil.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012694, VkglTestCase_012694_1, VkglTestCase_012694_2);

#define VkglTestCase_012695_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012695_2 "ommon_functions.ceil.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012695, VkglTestCase_012695_1, VkglTestCase_012695_2);

#define VkglTestCase_012696_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012696_2 "ommon_functions.ceil.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012696, VkglTestCase_012696_1, VkglTestCase_012696_2);

#define VkglTestCase_012697_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012697_2 "mmon_functions.ceil.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012697, VkglTestCase_012697_1, VkglTestCase_012697_2);

#define VkglTestCase_012698_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012698_2 "common_functions.ceil.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012698, VkglTestCase_012698_1, VkglTestCase_012698_2);

#define VkglTestCase_012699_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012699_2 "ommon_functions.ceil.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012699, VkglTestCase_012699_1, VkglTestCase_012699_2);

#define VkglTestCase_012700_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012700_2 ".common_functions.ceil.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012700, VkglTestCase_012700_1, VkglTestCase_012700_2);

#define VkglTestCase_012701_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012701_2 "common_functions.ceil.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012701, VkglTestCase_012701_1, VkglTestCase_012701_2);

#define VkglTestCase_012702_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012702_2 "ommon_functions.ceil.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012702, VkglTestCase_012702_1, VkglTestCase_012702_2);

#define VkglTestCase_012703_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012703_2 "mmon_functions.ceil.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012703, VkglTestCase_012703_1, VkglTestCase_012703_2);

#define VkglTestCase_012704_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012704_2 "common_functions.ceil.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012704, VkglTestCase_012704_1, VkglTestCase_012704_2);

#define VkglTestCase_012705_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012705_2 "ommon_functions.ceil.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012705, VkglTestCase_012705_1, VkglTestCase_012705_2);

#define VkglTestCase_012706_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012706_2 ".common_functions.ceil.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012706, VkglTestCase_012706_1, VkglTestCase_012706_2);

#define VkglTestCase_012707_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012707_2 "common_functions.ceil.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012707, VkglTestCase_012707_1, VkglTestCase_012707_2);

#define VkglTestCase_012708_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012708_2 "ommon_functions.ceil.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012708, VkglTestCase_012708_1, VkglTestCase_012708_2);

#define VkglTestCase_012709_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012709_2 "mmon_functions.ceil.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012709, VkglTestCase_012709_1, VkglTestCase_012709_2);

#define VkglTestCase_012710_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012710_2 "common_functions.ceil.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012710, VkglTestCase_012710_1, VkglTestCase_012710_2);

#define VkglTestCase_012711_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012711_2 "ommon_functions.ceil.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012711, VkglTestCase_012711_1, VkglTestCase_012711_2);

#define VkglTestCase_012712_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012712_2 ".common_functions.ceil.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012712, VkglTestCase_012712_1, VkglTestCase_012712_2);

#define VkglTestCase_012713_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012713_2 "common_functions.ceil.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012713, VkglTestCase_012713_1, VkglTestCase_012713_2);

#define VkglTestCase_012714_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012714_2 "ommon_functions.ceil.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012714, VkglTestCase_012714_1, VkglTestCase_012714_2);

#define VkglTestCase_012715_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012715_2 "mmon_functions.ceil.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012715, VkglTestCase_012715_1, VkglTestCase_012715_2);

#define VkglTestCase_012716_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012716_2 "common_functions.ceil.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012716, VkglTestCase_012716_1, VkglTestCase_012716_2);

#define VkglTestCase_012717_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012717_2 "ommon_functions.ceil.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012717, VkglTestCase_012717_1, VkglTestCase_012717_2);
