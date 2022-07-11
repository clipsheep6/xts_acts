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

#define VkglTestCase_007511_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007511_2 "ost_increment.dynamic_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007511, VkglTestCase_007511_1, VkglTestCase_007511_2);

#define VkglTestCase_007512_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007512_2 "st_increment.dynamic_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007512, VkglTestCase_007512_1, VkglTestCase_007512_2);

#define VkglTestCase_007513_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007513_2 "st_increment.dynamic_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007513, VkglTestCase_007513_1, VkglTestCase_007513_2);

#define VkglTestCase_007514_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007514_2 "t_increment.dynamic_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007514, VkglTestCase_007514_1, VkglTestCase_007514_2);

#define VkglTestCase_007515_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007515_2 "ost_increment.dynamic_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007515, VkglTestCase_007515_1, VkglTestCase_007515_2);

#define VkglTestCase_007516_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007516_2 "st_increment.dynamic_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007516, VkglTestCase_007516_1, VkglTestCase_007516_2);

#define VkglTestCase_007517_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007517_2 "ost_increment.dynamic_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007517, VkglTestCase_007517_1, VkglTestCase_007517_2);

#define VkglTestCase_007518_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007518_2 "st_increment.dynamic_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007518, VkglTestCase_007518_1, VkglTestCase_007518_2);

#define VkglTestCase_007519_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007519_2 "st_increment.dynamic_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007519, VkglTestCase_007519_1, VkglTestCase_007519_2);

#define VkglTestCase_007520_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007520_2 "t_increment.dynamic_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007520, VkglTestCase_007520_1, VkglTestCase_007520_2);

#define VkglTestCase_007521_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007521_2 "ost_increment.dynamic_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007521, VkglTestCase_007521_1, VkglTestCase_007521_2);

#define VkglTestCase_007522_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007522_2 "st_increment.dynamic_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007522, VkglTestCase_007522_1, VkglTestCase_007522_2);

#define VkglTestCase_007523_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007523_2 "ost_increment.dynamic_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007523, VkglTestCase_007523_1, VkglTestCase_007523_2);

#define VkglTestCase_007524_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007524_2 "st_increment.dynamic_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007524, VkglTestCase_007524_1, VkglTestCase_007524_2);

#define VkglTestCase_007525_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007525_2 "st_increment.dynamic_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007525, VkglTestCase_007525_1, VkglTestCase_007525_2);

#define VkglTestCase_007526_1 "dEQP-GLES2.functional.shaders.matrix.pos"
#define VkglTestCase_007526_2 "t_increment.dynamic_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007526, VkglTestCase_007526_1, VkglTestCase_007526_2);

#define VkglTestCase_007527_1 "dEQP-GLES2.functional.shaders.matrix.p"
#define VkglTestCase_007527_2 "ost_increment.dynamic_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007527, VkglTestCase_007527_1, VkglTestCase_007527_2);

#define VkglTestCase_007528_1 "dEQP-GLES2.functional.shaders.matrix.po"
#define VkglTestCase_007528_2 "st_increment.dynamic_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007528, VkglTestCase_007528_1, VkglTestCase_007528_2);
