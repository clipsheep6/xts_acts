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

#define VkglTestCase_006564_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006564_2 "loat_compare.greaterThan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006564, VkglTestCase_006564_1, VkglTestCase_006564_2);

#define VkglTestCase_006565_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006565_2 "oat_compare.greaterThan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006565, VkglTestCase_006565_1, VkglTestCase_006565_2);

#define VkglTestCase_006566_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006566_2 "at_compare.greaterThan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006566, VkglTestCase_006566_1, VkglTestCase_006566_2);

#define VkglTestCase_006567_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006567_2 "t_compare.greaterThan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006567, VkglTestCase_006567_1, VkglTestCase_006567_2);

#define VkglTestCase_006568_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006568_2 "oat_compare.greaterThan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006568, VkglTestCase_006568_1, VkglTestCase_006568_2);

#define VkglTestCase_006569_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006569_2 "at_compare.greaterThan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006569, VkglTestCase_006569_1, VkglTestCase_006569_2);

#define VkglTestCase_006570_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006570_2 "loat_compare.greaterThan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006570, VkglTestCase_006570_1, VkglTestCase_006570_2);

#define VkglTestCase_006571_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006571_2 "oat_compare.greaterThan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006571, VkglTestCase_006571_1, VkglTestCase_006571_2);

#define VkglTestCase_006572_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006572_2 "at_compare.greaterThan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006572, VkglTestCase_006572_1, VkglTestCase_006572_2);

#define VkglTestCase_006573_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006573_2 "t_compare.greaterThan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006573, VkglTestCase_006573_1, VkglTestCase_006573_2);

#define VkglTestCase_006574_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006574_2 "oat_compare.greaterThan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006574, VkglTestCase_006574_1, VkglTestCase_006574_2);

#define VkglTestCase_006575_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006575_2 "at_compare.greaterThan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006575, VkglTestCase_006575_1, VkglTestCase_006575_2);

#define VkglTestCase_006576_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006576_2 "loat_compare.greaterThan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006576, VkglTestCase_006576_1, VkglTestCase_006576_2);

#define VkglTestCase_006577_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006577_2 "oat_compare.greaterThan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006577, VkglTestCase_006577_1, VkglTestCase_006577_2);

#define VkglTestCase_006578_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006578_2 "at_compare.greaterThan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006578, VkglTestCase_006578_1, VkglTestCase_006578_2);

#define VkglTestCase_006579_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006579_2 "t_compare.greaterThan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006579, VkglTestCase_006579_1, VkglTestCase_006579_2);

#define VkglTestCase_006580_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006580_2 "oat_compare.greaterThan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006580, VkglTestCase_006580_1, VkglTestCase_006580_2);

#define VkglTestCase_006581_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006581_2 "at_compare.greaterThan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006581, VkglTestCase_006581_1, VkglTestCase_006581_2);
