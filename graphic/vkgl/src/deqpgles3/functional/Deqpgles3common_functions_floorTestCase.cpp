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

#define VkglTestCase_012598_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012598_2 "common_functions.floor.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012598, VkglTestCase_012598_1, VkglTestCase_012598_2);

#define VkglTestCase_012599_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012599_2 "ommon_functions.floor.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012599, VkglTestCase_012599_1, VkglTestCase_012599_2);

#define VkglTestCase_012600_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012600_2 "mmon_functions.floor.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012600, VkglTestCase_012600_1, VkglTestCase_012600_2);

#define VkglTestCase_012601_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012601_2 "mon_functions.floor.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012601, VkglTestCase_012601_1, VkglTestCase_012601_2);

#define VkglTestCase_012602_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012602_2 "ommon_functions.floor.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012602, VkglTestCase_012602_1, VkglTestCase_012602_2);

#define VkglTestCase_012603_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012603_2 "mmon_functions.floor.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012603, VkglTestCase_012603_1, VkglTestCase_012603_2);

#define VkglTestCase_012604_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012604_2 "common_functions.floor.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012604, VkglTestCase_012604_1, VkglTestCase_012604_2);

#define VkglTestCase_012605_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012605_2 "ommon_functions.floor.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012605, VkglTestCase_012605_1, VkglTestCase_012605_2);

#define VkglTestCase_012606_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012606_2 "ommon_functions.floor.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012606, VkglTestCase_012606_1, VkglTestCase_012606_2);

#define VkglTestCase_012607_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012607_2 "mmon_functions.floor.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012607, VkglTestCase_012607_1, VkglTestCase_012607_2);

#define VkglTestCase_012608_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012608_2 "common_functions.floor.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012608, VkglTestCase_012608_1, VkglTestCase_012608_2);

#define VkglTestCase_012609_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012609_2 "ommon_functions.floor.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012609, VkglTestCase_012609_1, VkglTestCase_012609_2);

#define VkglTestCase_012610_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012610_2 "common_functions.floor.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012610, VkglTestCase_012610_1, VkglTestCase_012610_2);

#define VkglTestCase_012611_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012611_2 "ommon_functions.floor.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012611, VkglTestCase_012611_1, VkglTestCase_012611_2);

#define VkglTestCase_012612_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012612_2 "ommon_functions.floor.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012612, VkglTestCase_012612_1, VkglTestCase_012612_2);

#define VkglTestCase_012613_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012613_2 "mmon_functions.floor.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012613, VkglTestCase_012613_1, VkglTestCase_012613_2);

#define VkglTestCase_012614_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012614_2 "common_functions.floor.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012614, VkglTestCase_012614_1, VkglTestCase_012614_2);

#define VkglTestCase_012615_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012615_2 "ommon_functions.floor.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012615, VkglTestCase_012615_1, VkglTestCase_012615_2);

#define VkglTestCase_012616_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012616_2 "common_functions.floor.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012616, VkglTestCase_012616_1, VkglTestCase_012616_2);

#define VkglTestCase_012617_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012617_2 "ommon_functions.floor.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012617, VkglTestCase_012617_1, VkglTestCase_012617_2);

#define VkglTestCase_012618_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012618_2 "ommon_functions.floor.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012618, VkglTestCase_012618_1, VkglTestCase_012618_2);

#define VkglTestCase_012619_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012619_2 "mmon_functions.floor.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012619, VkglTestCase_012619_1, VkglTestCase_012619_2);

#define VkglTestCase_012620_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012620_2 "common_functions.floor.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012620, VkglTestCase_012620_1, VkglTestCase_012620_2);

#define VkglTestCase_012621_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012621_2 "ommon_functions.floor.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012621, VkglTestCase_012621_1, VkglTestCase_012621_2);
