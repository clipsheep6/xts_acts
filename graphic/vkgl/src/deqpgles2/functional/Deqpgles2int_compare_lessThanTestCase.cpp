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

#define VkglTestCase_006636_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006636_2 ".int_compare.lessThan.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006636, VkglTestCase_006636_1, VkglTestCase_006636_2);

#define VkglTestCase_006637_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006637_2 "int_compare.lessThan.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006637, VkglTestCase_006637_1, VkglTestCase_006637_2);

#define VkglTestCase_006638_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006638_2 "nt_compare.lessThan.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006638, VkglTestCase_006638_1, VkglTestCase_006638_2);

#define VkglTestCase_006639_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006639_2 "t_compare.lessThan.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006639, VkglTestCase_006639_1, VkglTestCase_006639_2);

#define VkglTestCase_006640_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006640_2 "int_compare.lessThan.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006640, VkglTestCase_006640_1, VkglTestCase_006640_2);

#define VkglTestCase_006641_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006641_2 "nt_compare.lessThan.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006641, VkglTestCase_006641_1, VkglTestCase_006641_2);

#define VkglTestCase_006642_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006642_2 ".int_compare.lessThan.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006642, VkglTestCase_006642_1, VkglTestCase_006642_2);

#define VkglTestCase_006643_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006643_2 "int_compare.lessThan.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006643, VkglTestCase_006643_1, VkglTestCase_006643_2);

#define VkglTestCase_006644_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006644_2 "nt_compare.lessThan.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006644, VkglTestCase_006644_1, VkglTestCase_006644_2);

#define VkglTestCase_006645_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006645_2 "t_compare.lessThan.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006645, VkglTestCase_006645_1, VkglTestCase_006645_2);

#define VkglTestCase_006646_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006646_2 "int_compare.lessThan.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006646, VkglTestCase_006646_1, VkglTestCase_006646_2);

#define VkglTestCase_006647_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006647_2 "nt_compare.lessThan.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006647, VkglTestCase_006647_1, VkglTestCase_006647_2);

#define VkglTestCase_006648_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006648_2 ".int_compare.lessThan.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006648, VkglTestCase_006648_1, VkglTestCase_006648_2);

#define VkglTestCase_006649_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006649_2 "int_compare.lessThan.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006649, VkglTestCase_006649_1, VkglTestCase_006649_2);

#define VkglTestCase_006650_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006650_2 "nt_compare.lessThan.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006650, VkglTestCase_006650_1, VkglTestCase_006650_2);

#define VkglTestCase_006651_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006651_2 "t_compare.lessThan.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006651, VkglTestCase_006651_1, VkglTestCase_006651_2);

#define VkglTestCase_006652_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006652_2 "int_compare.lessThan.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006652, VkglTestCase_006652_1, VkglTestCase_006652_2);

#define VkglTestCase_006653_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006653_2 "nt_compare.lessThan.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006653, VkglTestCase_006653_1, VkglTestCase_006653_2);
