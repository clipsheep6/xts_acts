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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007439_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007439_2 "nary_addition.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007439, VkglTestCase_007439_1, VkglTestCase_007439_2);

#define VkglTestCase_007440_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007440_2 "ary_addition.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007440, VkglTestCase_007440_1, VkglTestCase_007440_2);

#define VkglTestCase_007441_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007441_2 "ary_addition.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007441, VkglTestCase_007441_1, VkglTestCase_007441_2);

#define VkglTestCase_007442_1 "dEQP-GLES2.functional.shaders.matrix.una"
#define VkglTestCase_007442_2 "ry_addition.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007442, VkglTestCase_007442_1, VkglTestCase_007442_2);

#define VkglTestCase_007443_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007443_2 "nary_addition.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007443, VkglTestCase_007443_1, VkglTestCase_007443_2);

#define VkglTestCase_007444_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007444_2 "ary_addition.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007444, VkglTestCase_007444_1, VkglTestCase_007444_2);

#define VkglTestCase_007445_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007445_2 "nary_addition.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007445, VkglTestCase_007445_1, VkglTestCase_007445_2);

#define VkglTestCase_007446_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007446_2 "ary_addition.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007446, VkglTestCase_007446_1, VkglTestCase_007446_2);

#define VkglTestCase_007447_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007447_2 "ary_addition.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007447, VkglTestCase_007447_1, VkglTestCase_007447_2);

#define VkglTestCase_007448_1 "dEQP-GLES2.functional.shaders.matrix.una"
#define VkglTestCase_007448_2 "ry_addition.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007448, VkglTestCase_007448_1, VkglTestCase_007448_2);

#define VkglTestCase_007449_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007449_2 "nary_addition.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007449, VkglTestCase_007449_1, VkglTestCase_007449_2);

#define VkglTestCase_007450_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007450_2 "ary_addition.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007450, VkglTestCase_007450_1, VkglTestCase_007450_2);

#define VkglTestCase_007451_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007451_2 "nary_addition.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007451, VkglTestCase_007451_1, VkglTestCase_007451_2);

#define VkglTestCase_007452_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007452_2 "ary_addition.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007452, VkglTestCase_007452_1, VkglTestCase_007452_2);

#define VkglTestCase_007453_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007453_2 "ary_addition.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007453, VkglTestCase_007453_1, VkglTestCase_007453_2);

#define VkglTestCase_007454_1 "dEQP-GLES2.functional.shaders.matrix.una"
#define VkglTestCase_007454_2 "ry_addition.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007454, VkglTestCase_007454_1, VkglTestCase_007454_2);

#define VkglTestCase_007455_1 "dEQP-GLES2.functional.shaders.matrix.u"
#define VkglTestCase_007455_2 "nary_addition.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007455, VkglTestCase_007455_1, VkglTestCase_007455_2);

#define VkglTestCase_007456_1 "dEQP-GLES2.functional.shaders.matrix.un"
#define VkglTestCase_007456_2 "ary_addition.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007456, VkglTestCase_007456_1, VkglTestCase_007456_2);
