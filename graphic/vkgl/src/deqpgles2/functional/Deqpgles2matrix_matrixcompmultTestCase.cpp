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

#define VkglTestCase_007421_1 "dEQP-GLES2.functional.shaders.matrix.mat"
#define VkglTestCase_007421_2 "rixcompmult.dynamic_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007421, VkglTestCase_007421_1, VkglTestCase_007421_2);

#define VkglTestCase_007422_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007422_2 "ixcompmult.dynamic_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007422, VkglTestCase_007422_1, VkglTestCase_007422_2);

#define VkglTestCase_007423_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007423_2 "xcompmult.dynamic_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007423, VkglTestCase_007423_1, VkglTestCase_007423_2);

#define VkglTestCase_007424_1 "dEQP-GLES2.functional.shaders.matrix.matrix"
#define VkglTestCase_007424_2 "compmult.dynamic_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007424, VkglTestCase_007424_1, VkglTestCase_007424_2);

#define VkglTestCase_007425_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007425_2 "ixcompmult.dynamic_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007425, VkglTestCase_007425_1, VkglTestCase_007425_2);

#define VkglTestCase_007426_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007426_2 "xcompmult.dynamic_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007426, VkglTestCase_007426_1, VkglTestCase_007426_2);

#define VkglTestCase_007427_1 "dEQP-GLES2.functional.shaders.matrix.mat"
#define VkglTestCase_007427_2 "rixcompmult.dynamic_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007427, VkglTestCase_007427_1, VkglTestCase_007427_2);

#define VkglTestCase_007428_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007428_2 "ixcompmult.dynamic_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007428, VkglTestCase_007428_1, VkglTestCase_007428_2);

#define VkglTestCase_007429_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007429_2 "xcompmult.dynamic_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007429, VkglTestCase_007429_1, VkglTestCase_007429_2);

#define VkglTestCase_007430_1 "dEQP-GLES2.functional.shaders.matrix.matrix"
#define VkglTestCase_007430_2 "compmult.dynamic_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007430, VkglTestCase_007430_1, VkglTestCase_007430_2);

#define VkglTestCase_007431_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007431_2 "ixcompmult.dynamic_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007431, VkglTestCase_007431_1, VkglTestCase_007431_2);

#define VkglTestCase_007432_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007432_2 "xcompmult.dynamic_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007432, VkglTestCase_007432_1, VkglTestCase_007432_2);

#define VkglTestCase_007433_1 "dEQP-GLES2.functional.shaders.matrix.mat"
#define VkglTestCase_007433_2 "rixcompmult.dynamic_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007433, VkglTestCase_007433_1, VkglTestCase_007433_2);

#define VkglTestCase_007434_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007434_2 "ixcompmult.dynamic_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007434, VkglTestCase_007434_1, VkglTestCase_007434_2);

#define VkglTestCase_007435_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007435_2 "xcompmult.dynamic_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007435, VkglTestCase_007435_1, VkglTestCase_007435_2);

#define VkglTestCase_007436_1 "dEQP-GLES2.functional.shaders.matrix.matrix"
#define VkglTestCase_007436_2 "compmult.dynamic_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007436, VkglTestCase_007436_1, VkglTestCase_007436_2);

#define VkglTestCase_007437_1 "dEQP-GLES2.functional.shaders.matrix.matr"
#define VkglTestCase_007437_2 "ixcompmult.dynamic_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007437, VkglTestCase_007437_1, VkglTestCase_007437_2);

#define VkglTestCase_007438_1 "dEQP-GLES2.functional.shaders.matrix.matri"
#define VkglTestCase_007438_2 "xcompmult.dynamic_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007438, VkglTestCase_007438_1, VkglTestCase_007438_2);
