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

#define VkglTestCase_007529_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007529_2 "ost_decrement.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007529, VkglTestCase_007529_1, VkglTestCase_007529_2);

#define VkglTestCase_007530_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007530_2 "st_decrement.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007530, VkglTestCase_007530_1, VkglTestCase_007530_2);

#define VkglTestCase_007531_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007531_2 "st_decrement.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007531, VkglTestCase_007531_1, VkglTestCase_007531_2);

#define VkglTestCase_007532_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007532_2 "t_decrement.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007532, VkglTestCase_007532_1, VkglTestCase_007532_2);

#define VkglTestCase_007533_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007533_2 "ost_decrement.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007533, VkglTestCase_007533_1, VkglTestCase_007533_2);

#define VkglTestCase_007534_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007534_2 "st_decrement.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007534, VkglTestCase_007534_1, VkglTestCase_007534_2);

#define VkglTestCase_007535_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007535_2 "ost_decrement.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007535, VkglTestCase_007535_1, VkglTestCase_007535_2);

#define VkglTestCase_007536_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007536_2 "st_decrement.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007536, VkglTestCase_007536_1, VkglTestCase_007536_2);

#define VkglTestCase_007537_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007537_2 "st_decrement.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007537, VkglTestCase_007537_1, VkglTestCase_007537_2);

#define VkglTestCase_007538_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007538_2 "t_decrement.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007538, VkglTestCase_007538_1, VkglTestCase_007538_2);

#define VkglTestCase_007539_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007539_2 "ost_decrement.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007539, VkglTestCase_007539_1, VkglTestCase_007539_2);

#define VkglTestCase_007540_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007540_2 "st_decrement.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007540, VkglTestCase_007540_1, VkglTestCase_007540_2);

#define VkglTestCase_007541_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007541_2 "ost_decrement.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007541, VkglTestCase_007541_1, VkglTestCase_007541_2);

#define VkglTestCase_007542_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007542_2 "st_decrement.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007542, VkglTestCase_007542_1, VkglTestCase_007542_2);

#define VkglTestCase_007543_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007543_2 "st_decrement.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007543, VkglTestCase_007543_1, VkglTestCase_007543_2);

#define VkglTestCase_007544_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007544_2 "t_decrement.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007544, VkglTestCase_007544_1, VkglTestCase_007544_2);

#define VkglTestCase_007545_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007545_2 "ost_decrement.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007545, VkglTestCase_007545_1, VkglTestCase_007545_2);

#define VkglTestCase_007546_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007546_2 "st_decrement.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007546, VkglTestCase_007546_1, VkglTestCase_007546_2);
