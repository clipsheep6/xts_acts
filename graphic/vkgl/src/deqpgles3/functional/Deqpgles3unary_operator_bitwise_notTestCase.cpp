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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007432_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007432_2 "ary_operator.bitwise_not.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007432, VkglTestCase_007432_1, VkglTestCase_007432_2);

#define VkglTestCase_007433_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007433_2 "ry_operator.bitwise_not.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007433, VkglTestCase_007433_1, VkglTestCase_007433_2);

#define VkglTestCase_007434_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007434_2 "ry_operator.bitwise_not.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007434, VkglTestCase_007434_1, VkglTestCase_007434_2);

#define VkglTestCase_007435_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007435_2 "y_operator.bitwise_not.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007435, VkglTestCase_007435_1, VkglTestCase_007435_2);

#define VkglTestCase_007436_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007436_2 "ry_operator.bitwise_not.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007436, VkglTestCase_007436_1, VkglTestCase_007436_2);

#define VkglTestCase_007437_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007437_2 "y_operator.bitwise_not.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007437, VkglTestCase_007437_1, VkglTestCase_007437_2);

#define VkglTestCase_007438_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007438_2 "ry_operator.bitwise_not.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007438, VkglTestCase_007438_1, VkglTestCase_007438_2);

#define VkglTestCase_007439_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007439_2 "y_operator.bitwise_not.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007439, VkglTestCase_007439_1, VkglTestCase_007439_2);

#define VkglTestCase_007440_1 "dEQP-GLES3.functional.shaders.operator.un"
#define VkglTestCase_007440_2 "ary_operator.bitwise_not.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007440, VkglTestCase_007440_1, VkglTestCase_007440_2);

#define VkglTestCase_007441_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007441_2 "ry_operator.bitwise_not.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007441, VkglTestCase_007441_1, VkglTestCase_007441_2);

#define VkglTestCase_007442_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007442_2 "ry_operator.bitwise_not.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007442, VkglTestCase_007442_1, VkglTestCase_007442_2);

#define VkglTestCase_007443_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007443_2 "y_operator.bitwise_not.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007443, VkglTestCase_007443_1, VkglTestCase_007443_2);

#define VkglTestCase_007444_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007444_2 "ry_operator.bitwise_not.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007444, VkglTestCase_007444_1, VkglTestCase_007444_2);

#define VkglTestCase_007445_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007445_2 "y_operator.bitwise_not.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007445, VkglTestCase_007445_1, VkglTestCase_007445_2);

#define VkglTestCase_007446_1 "dEQP-GLES3.functional.shaders.operator.una"
#define VkglTestCase_007446_2 "ry_operator.bitwise_not.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007446, VkglTestCase_007446_1, VkglTestCase_007446_2);

#define VkglTestCase_007447_1 "dEQP-GLES3.functional.shaders.operator.unar"
#define VkglTestCase_007447_2 "y_operator.bitwise_not.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007447, VkglTestCase_007447_1, VkglTestCase_007447_2);
