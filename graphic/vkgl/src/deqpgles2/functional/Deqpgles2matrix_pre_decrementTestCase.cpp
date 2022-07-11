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

#define VkglTestCase_007493_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007493_2 "pre_decrement.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007493, VkglTestCase_007493_1, VkglTestCase_007493_2);

#define VkglTestCase_007494_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007494_2 "re_decrement.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007494, VkglTestCase_007494_1, VkglTestCase_007494_2);

#define VkglTestCase_007495_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007495_2 "e_decrement.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007495, VkglTestCase_007495_1, VkglTestCase_007495_2);

#define VkglTestCase_007496_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007496_2 "_decrement.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007496, VkglTestCase_007496_1, VkglTestCase_007496_2);

#define VkglTestCase_007497_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007497_2 "re_decrement.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007497, VkglTestCase_007497_1, VkglTestCase_007497_2);

#define VkglTestCase_007498_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007498_2 "e_decrement.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007498, VkglTestCase_007498_1, VkglTestCase_007498_2);

#define VkglTestCase_007499_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007499_2 "pre_decrement.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007499, VkglTestCase_007499_1, VkglTestCase_007499_2);

#define VkglTestCase_007500_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007500_2 "re_decrement.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007500, VkglTestCase_007500_1, VkglTestCase_007500_2);

#define VkglTestCase_007501_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007501_2 "e_decrement.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007501, VkglTestCase_007501_1, VkglTestCase_007501_2);

#define VkglTestCase_007502_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007502_2 "_decrement.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007502, VkglTestCase_007502_1, VkglTestCase_007502_2);

#define VkglTestCase_007503_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007503_2 "re_decrement.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007503, VkglTestCase_007503_1, VkglTestCase_007503_2);

#define VkglTestCase_007504_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007504_2 "e_decrement.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007504, VkglTestCase_007504_1, VkglTestCase_007504_2);

#define VkglTestCase_007505_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007505_2 "pre_decrement.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007505, VkglTestCase_007505_1, VkglTestCase_007505_2);

#define VkglTestCase_007506_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007506_2 "re_decrement.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007506, VkglTestCase_007506_1, VkglTestCase_007506_2);

#define VkglTestCase_007507_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007507_2 "e_decrement.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007507, VkglTestCase_007507_1, VkglTestCase_007507_2);

#define VkglTestCase_007508_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007508_2 "_decrement.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007508, VkglTestCase_007508_1, VkglTestCase_007508_2);

#define VkglTestCase_007509_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007509_2 "re_decrement.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007509, VkglTestCase_007509_1, VkglTestCase_007509_2);

#define VkglTestCase_007510_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007510_2 "e_decrement.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007510, VkglTestCase_007510_1, VkglTestCase_007510_2);
