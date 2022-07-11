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

#define VkglTestCase_012574_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012574_2 "common_functions.sign.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012574, VkglTestCase_012574_1, VkglTestCase_012574_2);

#define VkglTestCase_012575_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012575_2 "ommon_functions.sign.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012575, VkglTestCase_012575_1, VkglTestCase_012575_2);

#define VkglTestCase_012576_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012576_2 "ommon_functions.sign.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012576, VkglTestCase_012576_1, VkglTestCase_012576_2);

#define VkglTestCase_012577_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012577_2 "mmon_functions.sign.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012577, VkglTestCase_012577_1, VkglTestCase_012577_2);

#define VkglTestCase_012578_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012578_2 "common_functions.sign.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012578, VkglTestCase_012578_1, VkglTestCase_012578_2);

#define VkglTestCase_012579_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012579_2 "ommon_functions.sign.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012579, VkglTestCase_012579_1, VkglTestCase_012579_2);

#define VkglTestCase_012580_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012580_2 ".common_functions.sign.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012580, VkglTestCase_012580_1, VkglTestCase_012580_2);

#define VkglTestCase_012581_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012581_2 "common_functions.sign.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012581, VkglTestCase_012581_1, VkglTestCase_012581_2);

#define VkglTestCase_012582_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012582_2 "ommon_functions.sign.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012582, VkglTestCase_012582_1, VkglTestCase_012582_2);

#define VkglTestCase_012583_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012583_2 "mmon_functions.sign.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012583, VkglTestCase_012583_1, VkglTestCase_012583_2);

#define VkglTestCase_012584_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012584_2 "common_functions.sign.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012584, VkglTestCase_012584_1, VkglTestCase_012584_2);

#define VkglTestCase_012585_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012585_2 "ommon_functions.sign.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012585, VkglTestCase_012585_1, VkglTestCase_012585_2);

#define VkglTestCase_012586_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012586_2 ".common_functions.sign.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012586, VkglTestCase_012586_1, VkglTestCase_012586_2);

#define VkglTestCase_012587_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012587_2 "common_functions.sign.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012587, VkglTestCase_012587_1, VkglTestCase_012587_2);

#define VkglTestCase_012588_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012588_2 "ommon_functions.sign.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012588, VkglTestCase_012588_1, VkglTestCase_012588_2);

#define VkglTestCase_012589_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012589_2 "mmon_functions.sign.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012589, VkglTestCase_012589_1, VkglTestCase_012589_2);

#define VkglTestCase_012590_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012590_2 "common_functions.sign.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012590, VkglTestCase_012590_1, VkglTestCase_012590_2);

#define VkglTestCase_012591_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012591_2 "ommon_functions.sign.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012591, VkglTestCase_012591_1, VkglTestCase_012591_2);

#define VkglTestCase_012592_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012592_2 ".common_functions.sign.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012592, VkglTestCase_012592_1, VkglTestCase_012592_2);

#define VkglTestCase_012593_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012593_2 "common_functions.sign.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012593, VkglTestCase_012593_1, VkglTestCase_012593_2);

#define VkglTestCase_012594_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012594_2 "ommon_functions.sign.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012594, VkglTestCase_012594_1, VkglTestCase_012594_2);

#define VkglTestCase_012595_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012595_2 "mmon_functions.sign.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012595, VkglTestCase_012595_1, VkglTestCase_012595_2);

#define VkglTestCase_012596_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012596_2 "common_functions.sign.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012596, VkglTestCase_012596_1, VkglTestCase_012596_2);

#define VkglTestCase_012597_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012597_2 "ommon_functions.sign.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012597, VkglTestCase_012597_1, VkglTestCase_012597_2);
