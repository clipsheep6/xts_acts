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

#define VkglTestCase_006726_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006726_2 ".int_compare.notEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006726, VkglTestCase_006726_1, VkglTestCase_006726_2);

#define VkglTestCase_006727_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006727_2 "int_compare.notEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006727, VkglTestCase_006727_1, VkglTestCase_006727_2);

#define VkglTestCase_006728_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006728_2 "nt_compare.notEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006728, VkglTestCase_006728_1, VkglTestCase_006728_2);

#define VkglTestCase_006729_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006729_2 "t_compare.notEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006729, VkglTestCase_006729_1, VkglTestCase_006729_2);

#define VkglTestCase_006730_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006730_2 "int_compare.notEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006730, VkglTestCase_006730_1, VkglTestCase_006730_2);

#define VkglTestCase_006731_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006731_2 "nt_compare.notEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006731, VkglTestCase_006731_1, VkglTestCase_006731_2);

#define VkglTestCase_006732_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006732_2 ".int_compare.notEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006732, VkglTestCase_006732_1, VkglTestCase_006732_2);

#define VkglTestCase_006733_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006733_2 "int_compare.notEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006733, VkglTestCase_006733_1, VkglTestCase_006733_2);

#define VkglTestCase_006734_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006734_2 "nt_compare.notEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006734, VkglTestCase_006734_1, VkglTestCase_006734_2);

#define VkglTestCase_006735_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006735_2 "t_compare.notEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006735, VkglTestCase_006735_1, VkglTestCase_006735_2);

#define VkglTestCase_006736_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006736_2 "int_compare.notEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006736, VkglTestCase_006736_1, VkglTestCase_006736_2);

#define VkglTestCase_006737_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006737_2 "nt_compare.notEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006737, VkglTestCase_006737_1, VkglTestCase_006737_2);

#define VkglTestCase_006738_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006738_2 ".int_compare.notEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006738, VkglTestCase_006738_1, VkglTestCase_006738_2);

#define VkglTestCase_006739_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006739_2 "int_compare.notEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006739, VkglTestCase_006739_1, VkglTestCase_006739_2);

#define VkglTestCase_006740_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006740_2 "nt_compare.notEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006740, VkglTestCase_006740_1, VkglTestCase_006740_2);

#define VkglTestCase_006741_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006741_2 "t_compare.notEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006741, VkglTestCase_006741_1, VkglTestCase_006741_2);

#define VkglTestCase_006742_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006742_2 "int_compare.notEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006742, VkglTestCase_006742_1, VkglTestCase_006742_2);

#define VkglTestCase_006743_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006743_2 "nt_compare.notEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006743, VkglTestCase_006743_1, VkglTestCase_006743_2);
