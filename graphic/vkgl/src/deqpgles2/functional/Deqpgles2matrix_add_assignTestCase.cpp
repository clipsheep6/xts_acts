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

#define VkglTestCase_007547_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007547_2 ".add_assign.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007547, VkglTestCase_007547_1, VkglTestCase_007547_2);

#define VkglTestCase_007548_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007548_2 "add_assign.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007548, VkglTestCase_007548_1, VkglTestCase_007548_2);

#define VkglTestCase_007549_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007549_2 "add_assign.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007549, VkglTestCase_007549_1, VkglTestCase_007549_2);

#define VkglTestCase_007550_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_007550_2 "dd_assign.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007550, VkglTestCase_007550_1, VkglTestCase_007550_2);

#define VkglTestCase_007551_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007551_2 ".add_assign.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007551, VkglTestCase_007551_1, VkglTestCase_007551_2);

#define VkglTestCase_007552_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007552_2 "add_assign.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007552, VkglTestCase_007552_1, VkglTestCase_007552_2);

#define VkglTestCase_007553_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007553_2 ".add_assign.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007553, VkglTestCase_007553_1, VkglTestCase_007553_2);

#define VkglTestCase_007554_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007554_2 "add_assign.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007554, VkglTestCase_007554_1, VkglTestCase_007554_2);

#define VkglTestCase_007555_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007555_2 "add_assign.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007555, VkglTestCase_007555_1, VkglTestCase_007555_2);

#define VkglTestCase_007556_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_007556_2 "dd_assign.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007556, VkglTestCase_007556_1, VkglTestCase_007556_2);

#define VkglTestCase_007557_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007557_2 ".add_assign.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007557, VkglTestCase_007557_1, VkglTestCase_007557_2);

#define VkglTestCase_007558_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007558_2 "add_assign.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007558, VkglTestCase_007558_1, VkglTestCase_007558_2);

#define VkglTestCase_007559_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007559_2 ".add_assign.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007559, VkglTestCase_007559_1, VkglTestCase_007559_2);

#define VkglTestCase_007560_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007560_2 "add_assign.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007560, VkglTestCase_007560_1, VkglTestCase_007560_2);

#define VkglTestCase_007561_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007561_2 "add_assign.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007561, VkglTestCase_007561_1, VkglTestCase_007561_2);

#define VkglTestCase_007562_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_007562_2 "dd_assign.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007562, VkglTestCase_007562_1, VkglTestCase_007562_2);

#define VkglTestCase_007563_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007563_2 ".add_assign.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007563, VkglTestCase_007563_1, VkglTestCase_007563_2);

#define VkglTestCase_007564_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007564_2 "add_assign.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007564, VkglTestCase_007564_1, VkglTestCase_007564_2);
