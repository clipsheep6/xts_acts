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

#define VkglTestCase_006600_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006600_2 "r.float_compare.equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006600, VkglTestCase_006600_1, VkglTestCase_006600_2);

#define VkglTestCase_006601_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006601_2 ".float_compare.equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006601, VkglTestCase_006601_1, VkglTestCase_006601_2);

#define VkglTestCase_006602_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006602_2 "float_compare.equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006602, VkglTestCase_006602_1, VkglTestCase_006602_2);

#define VkglTestCase_006603_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006603_2 "loat_compare.equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006603, VkglTestCase_006603_1, VkglTestCase_006603_2);

#define VkglTestCase_006604_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006604_2 ".float_compare.equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006604, VkglTestCase_006604_1, VkglTestCase_006604_2);

#define VkglTestCase_006605_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006605_2 "float_compare.equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006605, VkglTestCase_006605_1, VkglTestCase_006605_2);

#define VkglTestCase_006606_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006606_2 "r.float_compare.equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006606, VkglTestCase_006606_1, VkglTestCase_006606_2);

#define VkglTestCase_006607_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006607_2 ".float_compare.equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006607, VkglTestCase_006607_1, VkglTestCase_006607_2);

#define VkglTestCase_006608_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006608_2 "float_compare.equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006608, VkglTestCase_006608_1, VkglTestCase_006608_2);

#define VkglTestCase_006609_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006609_2 "loat_compare.equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006609, VkglTestCase_006609_1, VkglTestCase_006609_2);

#define VkglTestCase_006610_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006610_2 ".float_compare.equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006610, VkglTestCase_006610_1, VkglTestCase_006610_2);

#define VkglTestCase_006611_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006611_2 "float_compare.equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006611, VkglTestCase_006611_1, VkglTestCase_006611_2);

#define VkglTestCase_006612_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006612_2 "r.float_compare.equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006612, VkglTestCase_006612_1, VkglTestCase_006612_2);

#define VkglTestCase_006613_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006613_2 ".float_compare.equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006613, VkglTestCase_006613_1, VkglTestCase_006613_2);

#define VkglTestCase_006614_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006614_2 "float_compare.equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006614, VkglTestCase_006614_1, VkglTestCase_006614_2);

#define VkglTestCase_006615_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006615_2 "loat_compare.equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006615, VkglTestCase_006615_1, VkglTestCase_006615_2);

#define VkglTestCase_006616_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006616_2 ".float_compare.equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006616, VkglTestCase_006616_1, VkglTestCase_006616_2);

#define VkglTestCase_006617_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006617_2 "float_compare.equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006617, VkglTestCase_006617_1, VkglTestCase_006617_2);
