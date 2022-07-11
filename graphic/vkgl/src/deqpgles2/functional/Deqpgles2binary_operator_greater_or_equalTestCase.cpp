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

#define VkglTestCase_005602_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005602_2 "y_operator.greater_or_equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005602, VkglTestCase_005602_1, VkglTestCase_005602_2);

#define VkglTestCase_005603_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005603_2 "_operator.greater_or_equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005603, VkglTestCase_005603_1, VkglTestCase_005603_2);

#define VkglTestCase_005604_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005604_2 "operator.greater_or_equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005604, VkglTestCase_005604_1, VkglTestCase_005604_2);

#define VkglTestCase_005605_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005605_2 "perator.greater_or_equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005605, VkglTestCase_005605_1, VkglTestCase_005605_2);

#define VkglTestCase_005606_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005606_2 "_operator.greater_or_equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005606, VkglTestCase_005606_1, VkglTestCase_005606_2);

#define VkglTestCase_005607_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005607_2 "operator.greater_or_equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005607, VkglTestCase_005607_1, VkglTestCase_005607_2);

#define VkglTestCase_005608_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005608_2 "ry_operator.greater_or_equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005608, VkglTestCase_005608_1, VkglTestCase_005608_2);

#define VkglTestCase_005609_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005609_2 "y_operator.greater_or_equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005609, VkglTestCase_005609_1, VkglTestCase_005609_2);

#define VkglTestCase_005610_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005610_2 "_operator.greater_or_equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005610, VkglTestCase_005610_1, VkglTestCase_005610_2);

#define VkglTestCase_005611_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005611_2 "operator.greater_or_equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005611, VkglTestCase_005611_1, VkglTestCase_005611_2);

#define VkglTestCase_005612_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005612_2 "y_operator.greater_or_equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005612, VkglTestCase_005612_1, VkglTestCase_005612_2);

#define VkglTestCase_005613_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005613_2 "_operator.greater_or_equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005613, VkglTestCase_005613_1, VkglTestCase_005613_2);
