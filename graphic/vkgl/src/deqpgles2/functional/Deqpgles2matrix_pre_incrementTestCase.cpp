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

#define VkglTestCase_007475_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007475_2 "pre_increment.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007475, VkglTestCase_007475_1, VkglTestCase_007475_2);

#define VkglTestCase_007476_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007476_2 "re_increment.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007476, VkglTestCase_007476_1, VkglTestCase_007476_2);

#define VkglTestCase_007477_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007477_2 "e_increment.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007477, VkglTestCase_007477_1, VkglTestCase_007477_2);

#define VkglTestCase_007478_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007478_2 "_increment.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007478, VkglTestCase_007478_1, VkglTestCase_007478_2);

#define VkglTestCase_007479_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007479_2 "re_increment.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007479, VkglTestCase_007479_1, VkglTestCase_007479_2);

#define VkglTestCase_007480_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007480_2 "e_increment.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007480, VkglTestCase_007480_1, VkglTestCase_007480_2);

#define VkglTestCase_007481_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007481_2 "pre_increment.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007481, VkglTestCase_007481_1, VkglTestCase_007481_2);

#define VkglTestCase_007482_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007482_2 "re_increment.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007482, VkglTestCase_007482_1, VkglTestCase_007482_2);

#define VkglTestCase_007483_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007483_2 "e_increment.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007483, VkglTestCase_007483_1, VkglTestCase_007483_2);

#define VkglTestCase_007484_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007484_2 "_increment.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007484, VkglTestCase_007484_1, VkglTestCase_007484_2);

#define VkglTestCase_007485_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007485_2 "re_increment.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007485, VkglTestCase_007485_1, VkglTestCase_007485_2);

#define VkglTestCase_007486_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007486_2 "e_increment.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007486, VkglTestCase_007486_1, VkglTestCase_007486_2);

#define VkglTestCase_007487_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007487_2 "pre_increment.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007487, VkglTestCase_007487_1, VkglTestCase_007487_2);

#define VkglTestCase_007488_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007488_2 "re_increment.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007488, VkglTestCase_007488_1, VkglTestCase_007488_2);

#define VkglTestCase_007489_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007489_2 "e_increment.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007489, VkglTestCase_007489_1, VkglTestCase_007489_2);

#define VkglTestCase_007490_1 "dEQP-GLES2.functional.shaders.matrix.pre"
#define VkglTestCase_007490_2 "_increment.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007490, VkglTestCase_007490_1, VkglTestCase_007490_2);

#define VkglTestCase_007491_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007491_2 "re_increment.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007491, VkglTestCase_007491_1, VkglTestCase_007491_2);

#define VkglTestCase_007492_1 "dEQP-GLES2.functional.shaders.matrix.pr"
#define VkglTestCase_007492_2 "e_increment.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007492, VkglTestCase_007492_1, VkglTestCase_007492_2);
