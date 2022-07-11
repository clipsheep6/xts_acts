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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005566_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005566_2 ".binary_operator.less.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005566, VkglTestCase_005566_1, VkglTestCase_005566_2);

#define VkglTestCase_005567_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005567_2 "binary_operator.less.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005567, VkglTestCase_005567_1, VkglTestCase_005567_2);

#define VkglTestCase_005568_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005568_2 "inary_operator.less.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005568, VkglTestCase_005568_1, VkglTestCase_005568_2);

#define VkglTestCase_005569_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005569_2 "nary_operator.less.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005569, VkglTestCase_005569_1, VkglTestCase_005569_2);

#define VkglTestCase_005570_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005570_2 "binary_operator.less.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005570, VkglTestCase_005570_1, VkglTestCase_005570_2);

#define VkglTestCase_005571_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005571_2 "inary_operator.less.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005571, VkglTestCase_005571_1, VkglTestCase_005571_2);

#define VkglTestCase_005572_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005572_2 "r.binary_operator.less.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005572, VkglTestCase_005572_1, VkglTestCase_005572_2);

#define VkglTestCase_005573_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005573_2 ".binary_operator.less.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005573, VkglTestCase_005573_1, VkglTestCase_005573_2);

#define VkglTestCase_005574_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005574_2 "binary_operator.less.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005574, VkglTestCase_005574_1, VkglTestCase_005574_2);

#define VkglTestCase_005575_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005575_2 "inary_operator.less.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005575, VkglTestCase_005575_1, VkglTestCase_005575_2);

#define VkglTestCase_005576_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005576_2 ".binary_operator.less.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005576, VkglTestCase_005576_1, VkglTestCase_005576_2);

#define VkglTestCase_005577_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005577_2 "binary_operator.less.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005577, VkglTestCase_005577_1, VkglTestCase_005577_2);
