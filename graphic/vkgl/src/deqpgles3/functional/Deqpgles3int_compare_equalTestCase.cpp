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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013570_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013570_2 "r.int_compare.equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013570, VkglTestCase_013570_1, VkglTestCase_013570_2);

#define VkglTestCase_013571_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013571_2 ".int_compare.equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013571, VkglTestCase_013571_1, VkglTestCase_013571_2);

#define VkglTestCase_013572_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013572_2 ".int_compare.equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013572, VkglTestCase_013572_1, VkglTestCase_013572_2);

#define VkglTestCase_013573_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013573_2 "int_compare.equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013573, VkglTestCase_013573_1, VkglTestCase_013573_2);

#define VkglTestCase_013574_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013574_2 "r.int_compare.equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013574, VkglTestCase_013574_1, VkglTestCase_013574_2);

#define VkglTestCase_013575_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013575_2 ".int_compare.equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013575, VkglTestCase_013575_1, VkglTestCase_013575_2);

#define VkglTestCase_013576_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013576_2 "r.int_compare.equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013576, VkglTestCase_013576_1, VkglTestCase_013576_2);

#define VkglTestCase_013577_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013577_2 ".int_compare.equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013577, VkglTestCase_013577_1, VkglTestCase_013577_2);

#define VkglTestCase_013578_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013578_2 ".int_compare.equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013578, VkglTestCase_013578_1, VkglTestCase_013578_2);

#define VkglTestCase_013579_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013579_2 "int_compare.equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013579, VkglTestCase_013579_1, VkglTestCase_013579_2);

#define VkglTestCase_013580_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013580_2 "r.int_compare.equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013580, VkglTestCase_013580_1, VkglTestCase_013580_2);

#define VkglTestCase_013581_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013581_2 ".int_compare.equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013581, VkglTestCase_013581_1, VkglTestCase_013581_2);

#define VkglTestCase_013582_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013582_2 "r.int_compare.equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013582, VkglTestCase_013582_1, VkglTestCase_013582_2);

#define VkglTestCase_013583_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013583_2 ".int_compare.equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013583, VkglTestCase_013583_1, VkglTestCase_013583_2);

#define VkglTestCase_013584_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013584_2 ".int_compare.equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013584, VkglTestCase_013584_1, VkglTestCase_013584_2);

#define VkglTestCase_013585_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013585_2 "int_compare.equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013585, VkglTestCase_013585_1, VkglTestCase_013585_2);

#define VkglTestCase_013586_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013586_2 "r.int_compare.equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013586, VkglTestCase_013586_1, VkglTestCase_013586_2);

#define VkglTestCase_013587_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013587_2 ".int_compare.equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013587, VkglTestCase_013587_1, VkglTestCase_013587_2);
