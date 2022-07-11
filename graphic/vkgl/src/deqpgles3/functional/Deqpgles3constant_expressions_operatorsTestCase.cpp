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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019656_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019656_2 "expressions.operators.math_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019656, VkglTestCase_019656_1, VkglTestCase_019656_2);

#define VkglTestCase_019657_1 "dEQP-GLES3.functional.shaders.constant_e"
#define VkglTestCase_019657_2 "xpressions.operators.math_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019657, VkglTestCase_019657_1, VkglTestCase_019657_2);

#define VkglTestCase_019658_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019658_2 "_expressions.operators.math_vec_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019658, VkglTestCase_019658_1, VkglTestCase_019658_2);

#define VkglTestCase_019659_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019659_2 "expressions.operators.math_vec_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019659, VkglTestCase_019659_1, VkglTestCase_019659_2);

#define VkglTestCase_019660_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019660_2 "_expressions.operators.math_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019660, VkglTestCase_019660_1, VkglTestCase_019660_2);

#define VkglTestCase_019661_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019661_2 "expressions.operators.math_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019661, VkglTestCase_019661_1, VkglTestCase_019661_2);

#define VkglTestCase_019662_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019662_2 "_expressions.operators.math_ivec_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019662, VkglTestCase_019662_1, VkglTestCase_019662_2);

#define VkglTestCase_019663_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019663_2 "expressions.operators.math_ivec_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019663, VkglTestCase_019663_1, VkglTestCase_019663_2);

#define VkglTestCase_019664_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019664_2 "_expressions.operators.math_mat_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019664, VkglTestCase_019664_1, VkglTestCase_019664_2);

#define VkglTestCase_019665_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019665_2 "expressions.operators.math_mat_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019665, VkglTestCase_019665_1, VkglTestCase_019665_2);

#define VkglTestCase_019666_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_019666_2 "t_expressions.operators.bitwise_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019666, VkglTestCase_019666_1, VkglTestCase_019666_2);

#define VkglTestCase_019667_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019667_2 "_expressions.operators.bitwise_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019667, VkglTestCase_019667_1, VkglTestCase_019667_2);

#define VkglTestCase_019668_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_019668_2 "t_expressions.operators.logical_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019668, VkglTestCase_019668_1, VkglTestCase_019668_2);

#define VkglTestCase_019669_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019669_2 "_expressions.operators.logical_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019669, VkglTestCase_019669_1, VkglTestCase_019669_2);

#define VkglTestCase_019670_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_019670_2 "t_expressions.operators.compare_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019670, VkglTestCase_019670_1, VkglTestCase_019670_2);

#define VkglTestCase_019671_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019671_2 "_expressions.operators.compare_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019671, VkglTestCase_019671_1, VkglTestCase_019671_2);

#define VkglTestCase_019672_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019672_2 "_expressions.operators.selection_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019672, VkglTestCase_019672_1, VkglTestCase_019672_2);

#define VkglTestCase_019673_1 "dEQP-GLES3.functional.shaders.constant_"
#define VkglTestCase_019673_2 "expressions.operators.selection_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019673, VkglTestCase_019673_1, VkglTestCase_019673_2);
