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

#define VkglTestCase_005590_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005590_2 "inary_operator.greater.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005590, VkglTestCase_005590_1, VkglTestCase_005590_2);

#define VkglTestCase_005591_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005591_2 "nary_operator.greater.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005591, VkglTestCase_005591_1, VkglTestCase_005591_2);

#define VkglTestCase_005592_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005592_2 "nary_operator.greater.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005592, VkglTestCase_005592_1, VkglTestCase_005592_2);

#define VkglTestCase_005593_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005593_2 "ary_operator.greater.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005593, VkglTestCase_005593_1, VkglTestCase_005593_2);

#define VkglTestCase_005594_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005594_2 "inary_operator.greater.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005594, VkglTestCase_005594_1, VkglTestCase_005594_2);

#define VkglTestCase_005595_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005595_2 "nary_operator.greater.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005595, VkglTestCase_005595_1, VkglTestCase_005595_2);

#define VkglTestCase_005596_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005596_2 "binary_operator.greater.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005596, VkglTestCase_005596_1, VkglTestCase_005596_2);

#define VkglTestCase_005597_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005597_2 "inary_operator.greater.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005597, VkglTestCase_005597_1, VkglTestCase_005597_2);

#define VkglTestCase_005598_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005598_2 "inary_operator.greater.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005598, VkglTestCase_005598_1, VkglTestCase_005598_2);

#define VkglTestCase_005599_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005599_2 "nary_operator.greater.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005599, VkglTestCase_005599_1, VkglTestCase_005599_2);

#define VkglTestCase_005600_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005600_2 "binary_operator.greater.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005600, VkglTestCase_005600_1, VkglTestCase_005600_2);

#define VkglTestCase_005601_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005601_2 "inary_operator.greater.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005601, VkglTestCase_005601_1, VkglTestCase_005601_2);
