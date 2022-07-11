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

#define VkglTestCase_007657_1 "dEQP-GLES2.functional.sha"
#define VkglTestCase_007657_2 "ders.discard.basic_always"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007657, VkglTestCase_007657_1, VkglTestCase_007657_2);

#define VkglTestCase_007658_1 "dEQP-GLES2.functional.sh"
#define VkglTestCase_007658_2 "aders.discard.basic_never"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007658, VkglTestCase_007658_1, VkglTestCase_007658_2);

#define VkglTestCase_007659_1 "dEQP-GLES2.functional.sha"
#define VkglTestCase_007659_2 "ders.discard.basic_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007659, VkglTestCase_007659_1, VkglTestCase_007659_2);

#define VkglTestCase_007660_1 "dEQP-GLES2.functional.sha"
#define VkglTestCase_007660_2 "ders.discard.basic_dynamic"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007660, VkglTestCase_007660_1, VkglTestCase_007660_2);

#define VkglTestCase_007661_1 "dEQP-GLES2.functional.sha"
#define VkglTestCase_007661_2 "ders.discard.basic_texture"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007661, VkglTestCase_007661_1, VkglTestCase_007661_2);

#define VkglTestCase_007662_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007662_2 "ers.discard.function_always"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007662, VkglTestCase_007662_1, VkglTestCase_007662_2);

#define VkglTestCase_007663_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_007663_2 "ers.discard.function_never"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007663, VkglTestCase_007663_1, VkglTestCase_007663_2);

#define VkglTestCase_007664_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_007664_2 "rs.discard.function_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007664, VkglTestCase_007664_1, VkglTestCase_007664_2);

#define VkglTestCase_007665_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_007665_2 "rs.discard.function_dynamic"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007665, VkglTestCase_007665_1, VkglTestCase_007665_2);

#define VkglTestCase_007666_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_007666_2 "rs.discard.function_texture"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007666, VkglTestCase_007666_1, VkglTestCase_007666_2);

#define VkglTestCase_007667_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007667_2 "s.discard.static_loop_always"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007667, VkglTestCase_007667_1, VkglTestCase_007667_2);

#define VkglTestCase_007668_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_007668_2 "rs.discard.static_loop_never"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007668, VkglTestCase_007668_1, VkglTestCase_007668_2);

#define VkglTestCase_007669_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007669_2 "s.discard.static_loop_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007669, VkglTestCase_007669_1, VkglTestCase_007669_2);

#define VkglTestCase_007670_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007670_2 "s.discard.static_loop_dynamic"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007670, VkglTestCase_007670_1, VkglTestCase_007670_2);

#define VkglTestCase_007671_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007671_2 "s.discard.static_loop_texture"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007671, VkglTestCase_007671_1, VkglTestCase_007671_2);

#define VkglTestCase_007672_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007672_2 "s.discard.dynamic_loop_always"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007672, VkglTestCase_007672_1, VkglTestCase_007672_2);

#define VkglTestCase_007673_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007673_2 "s.discard.dynamic_loop_never"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007673, VkglTestCase_007673_1, VkglTestCase_007673_2);

#define VkglTestCase_007674_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007674_2 ".discard.dynamic_loop_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007674, VkglTestCase_007674_1, VkglTestCase_007674_2);

#define VkglTestCase_007675_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007675_2 ".discard.dynamic_loop_dynamic"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007675, VkglTestCase_007675_1, VkglTestCase_007675_2);

#define VkglTestCase_007676_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007676_2 ".discard.dynamic_loop_texture"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007676, VkglTestCase_007676_1, VkglTestCase_007676_2);

#define VkglTestCase_007677_1 "dEQP-GLES2.functional.shaders.di"
#define VkglTestCase_007677_2 "scard.function_static_loop_always"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007677, VkglTestCase_007677_1, VkglTestCase_007677_2);

#define VkglTestCase_007678_1 "dEQP-GLES2.functional.shaders.di"
#define VkglTestCase_007678_2 "scard.function_static_loop_never"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007678, VkglTestCase_007678_1, VkglTestCase_007678_2);

#define VkglTestCase_007679_1 "dEQP-GLES2.functional.shaders.dis"
#define VkglTestCase_007679_2 "card.function_static_loop_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007679, VkglTestCase_007679_1, VkglTestCase_007679_2);

#define VkglTestCase_007680_1 "dEQP-GLES2.functional.shaders.dis"
#define VkglTestCase_007680_2 "card.function_static_loop_dynamic"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007680, VkglTestCase_007680_1, VkglTestCase_007680_2);

#define VkglTestCase_007681_1 "dEQP-GLES2.functional.shaders.dis"
#define VkglTestCase_007681_2 "card.function_static_loop_texture"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007681, VkglTestCase_007681_1, VkglTestCase_007681_2);
