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

#define VkglTestCase_005578_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005578_2 "ry_operator.less_or_equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005578, VkglTestCase_005578_1, VkglTestCase_005578_2);

#define VkglTestCase_005579_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005579_2 "y_operator.less_or_equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005579, VkglTestCase_005579_1, VkglTestCase_005579_2);

#define VkglTestCase_005580_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005580_2 "y_operator.less_or_equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005580, VkglTestCase_005580_1, VkglTestCase_005580_2);

#define VkglTestCase_005581_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005581_2 "_operator.less_or_equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005581, VkglTestCase_005581_1, VkglTestCase_005581_2);

#define VkglTestCase_005582_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005582_2 "ry_operator.less_or_equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005582, VkglTestCase_005582_1, VkglTestCase_005582_2);

#define VkglTestCase_005583_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005583_2 "y_operator.less_or_equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005583, VkglTestCase_005583_1, VkglTestCase_005583_2);

#define VkglTestCase_005584_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005584_2 "ary_operator.less_or_equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005584, VkglTestCase_005584_1, VkglTestCase_005584_2);

#define VkglTestCase_005585_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005585_2 "ry_operator.less_or_equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005585, VkglTestCase_005585_1, VkglTestCase_005585_2);

#define VkglTestCase_005586_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005586_2 "ry_operator.less_or_equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005586, VkglTestCase_005586_1, VkglTestCase_005586_2);

#define VkglTestCase_005587_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005587_2 "y_operator.less_or_equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005587, VkglTestCase_005587_1, VkglTestCase_005587_2);

#define VkglTestCase_005588_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005588_2 "ary_operator.less_or_equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005588, VkglTestCase_005588_1, VkglTestCase_005588_2);

#define VkglTestCase_005589_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005589_2 "ry_operator.less_or_equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005589, VkglTestCase_005589_1, VkglTestCase_005589_2);
