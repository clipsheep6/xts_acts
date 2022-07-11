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

#define VkglTestCase_012742_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012742_2 "ommon_functions.mod.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012742, VkglTestCase_012742_1, VkglTestCase_012742_2);

#define VkglTestCase_012743_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012743_2 "mmon_functions.mod.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012743, VkglTestCase_012743_1, VkglTestCase_012743_2);

#define VkglTestCase_012744_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012744_2 "common_functions.mod.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012744, VkglTestCase_012744_1, VkglTestCase_012744_2);

#define VkglTestCase_012745_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012745_2 "ommon_functions.mod.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012745, VkglTestCase_012745_1, VkglTestCase_012745_2);

#define VkglTestCase_012746_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012746_2 "common_functions.mod.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012746, VkglTestCase_012746_1, VkglTestCase_012746_2);

#define VkglTestCase_012747_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012747_2 "ommon_functions.mod.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012747, VkglTestCase_012747_1, VkglTestCase_012747_2);

#define VkglTestCase_012748_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012748_2 ".common_functions.mod.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012748, VkglTestCase_012748_1, VkglTestCase_012748_2);

#define VkglTestCase_012749_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012749_2 "common_functions.mod.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012749, VkglTestCase_012749_1, VkglTestCase_012749_2);

#define VkglTestCase_012750_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012750_2 "common_functions.mod.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012750, VkglTestCase_012750_1, VkglTestCase_012750_2);

#define VkglTestCase_012751_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012751_2 "ommon_functions.mod.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012751, VkglTestCase_012751_1, VkglTestCase_012751_2);

#define VkglTestCase_012752_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012752_2 ".common_functions.mod.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012752, VkglTestCase_012752_1, VkglTestCase_012752_2);

#define VkglTestCase_012753_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012753_2 "common_functions.mod.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012753, VkglTestCase_012753_1, VkglTestCase_012753_2);

#define VkglTestCase_012754_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012754_2 "common_functions.mod.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012754, VkglTestCase_012754_1, VkglTestCase_012754_2);

#define VkglTestCase_012755_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012755_2 "ommon_functions.mod.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012755, VkglTestCase_012755_1, VkglTestCase_012755_2);

#define VkglTestCase_012756_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012756_2 ".common_functions.mod.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012756, VkglTestCase_012756_1, VkglTestCase_012756_2);

#define VkglTestCase_012757_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012757_2 "common_functions.mod.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012757, VkglTestCase_012757_1, VkglTestCase_012757_2);

#define VkglTestCase_012758_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012758_2 "mon_functions.mod.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012758, VkglTestCase_012758_1, VkglTestCase_012758_2);

#define VkglTestCase_012759_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012759_2 "on_functions.mod.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012759, VkglTestCase_012759_1, VkglTestCase_012759_2);

#define VkglTestCase_012760_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012760_2 "mmon_functions.mod.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012760, VkglTestCase_012760_1, VkglTestCase_012760_2);

#define VkglTestCase_012761_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012761_2 "mon_functions.mod.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012761, VkglTestCase_012761_1, VkglTestCase_012761_2);

#define VkglTestCase_012762_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012762_2 "mon_functions.mod.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012762, VkglTestCase_012762_1, VkglTestCase_012762_2);

#define VkglTestCase_012763_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012763_2 "on_functions.mod.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012763, VkglTestCase_012763_1, VkglTestCase_012763_2);

#define VkglTestCase_012764_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012764_2 "mmon_functions.mod.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012764, VkglTestCase_012764_1, VkglTestCase_012764_2);

#define VkglTestCase_012765_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012765_2 "mon_functions.mod.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012765, VkglTestCase_012765_1, VkglTestCase_012765_2);

#define VkglTestCase_012766_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012766_2 "mon_functions.mod.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012766, VkglTestCase_012766_1, VkglTestCase_012766_2);

#define VkglTestCase_012767_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012767_2 "on_functions.mod.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012767, VkglTestCase_012767_1, VkglTestCase_012767_2);

#define VkglTestCase_012768_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012768_2 "mmon_functions.mod.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012768, VkglTestCase_012768_1, VkglTestCase_012768_2);

#define VkglTestCase_012769_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012769_2 "mon_functions.mod.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012769, VkglTestCase_012769_1, VkglTestCase_012769_2);
