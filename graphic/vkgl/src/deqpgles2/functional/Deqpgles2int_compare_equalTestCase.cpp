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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006708_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006708_2 "r.int_compare.equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006708, VkglTestCase_006708_1, VkglTestCase_006708_2);

#define VkglTestCase_006709_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006709_2 ".int_compare.equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006709, VkglTestCase_006709_1, VkglTestCase_006709_2);

#define VkglTestCase_006710_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006710_2 ".int_compare.equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006710, VkglTestCase_006710_1, VkglTestCase_006710_2);

#define VkglTestCase_006711_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006711_2 "int_compare.equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006711, VkglTestCase_006711_1, VkglTestCase_006711_2);

#define VkglTestCase_006712_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006712_2 "r.int_compare.equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006712, VkglTestCase_006712_1, VkglTestCase_006712_2);

#define VkglTestCase_006713_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006713_2 ".int_compare.equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006713, VkglTestCase_006713_1, VkglTestCase_006713_2);

#define VkglTestCase_006714_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006714_2 "r.int_compare.equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006714, VkglTestCase_006714_1, VkglTestCase_006714_2);

#define VkglTestCase_006715_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006715_2 ".int_compare.equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006715, VkglTestCase_006715_1, VkglTestCase_006715_2);

#define VkglTestCase_006716_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006716_2 ".int_compare.equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006716, VkglTestCase_006716_1, VkglTestCase_006716_2);

#define VkglTestCase_006717_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006717_2 "int_compare.equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006717, VkglTestCase_006717_1, VkglTestCase_006717_2);

#define VkglTestCase_006718_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006718_2 "r.int_compare.equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006718, VkglTestCase_006718_1, VkglTestCase_006718_2);

#define VkglTestCase_006719_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006719_2 ".int_compare.equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006719, VkglTestCase_006719_1, VkglTestCase_006719_2);

#define VkglTestCase_006720_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006720_2 "r.int_compare.equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006720, VkglTestCase_006720_1, VkglTestCase_006720_2);

#define VkglTestCase_006721_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006721_2 ".int_compare.equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006721, VkglTestCase_006721_1, VkglTestCase_006721_2);

#define VkglTestCase_006722_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006722_2 ".int_compare.equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006722, VkglTestCase_006722_1, VkglTestCase_006722_2);

#define VkglTestCase_006723_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006723_2 "int_compare.equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006723, VkglTestCase_006723_1, VkglTestCase_006723_2);

#define VkglTestCase_006724_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006724_2 "r.int_compare.equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006724, VkglTestCase_006724_1, VkglTestCase_006724_2);

#define VkglTestCase_006725_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006725_2 ".int_compare.equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006725, VkglTestCase_006725_1, VkglTestCase_006725_2);
