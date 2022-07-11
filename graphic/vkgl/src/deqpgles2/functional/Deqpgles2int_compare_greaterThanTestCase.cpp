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

#define VkglTestCase_006672_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006672_2 "nt_compare.greaterThan.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006672, VkglTestCase_006672_1, VkglTestCase_006672_2);

#define VkglTestCase_006673_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006673_2 "t_compare.greaterThan.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006673, VkglTestCase_006673_1, VkglTestCase_006673_2);

#define VkglTestCase_006674_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006674_2 "t_compare.greaterThan.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006674, VkglTestCase_006674_1, VkglTestCase_006674_2);

#define VkglTestCase_006675_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006675_2 "_compare.greaterThan.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006675, VkglTestCase_006675_1, VkglTestCase_006675_2);

#define VkglTestCase_006676_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006676_2 "nt_compare.greaterThan.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006676, VkglTestCase_006676_1, VkglTestCase_006676_2);

#define VkglTestCase_006677_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006677_2 "t_compare.greaterThan.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006677, VkglTestCase_006677_1, VkglTestCase_006677_2);

#define VkglTestCase_006678_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006678_2 "nt_compare.greaterThan.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006678, VkglTestCase_006678_1, VkglTestCase_006678_2);

#define VkglTestCase_006679_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006679_2 "t_compare.greaterThan.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006679, VkglTestCase_006679_1, VkglTestCase_006679_2);

#define VkglTestCase_006680_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006680_2 "t_compare.greaterThan.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006680, VkglTestCase_006680_1, VkglTestCase_006680_2);

#define VkglTestCase_006681_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006681_2 "_compare.greaterThan.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006681, VkglTestCase_006681_1, VkglTestCase_006681_2);

#define VkglTestCase_006682_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006682_2 "nt_compare.greaterThan.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006682, VkglTestCase_006682_1, VkglTestCase_006682_2);

#define VkglTestCase_006683_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006683_2 "t_compare.greaterThan.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006683, VkglTestCase_006683_1, VkglTestCase_006683_2);

#define VkglTestCase_006684_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006684_2 "nt_compare.greaterThan.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006684, VkglTestCase_006684_1, VkglTestCase_006684_2);

#define VkglTestCase_006685_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006685_2 "t_compare.greaterThan.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006685, VkglTestCase_006685_1, VkglTestCase_006685_2);

#define VkglTestCase_006686_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006686_2 "t_compare.greaterThan.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006686, VkglTestCase_006686_1, VkglTestCase_006686_2);

#define VkglTestCase_006687_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006687_2 "_compare.greaterThan.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006687, VkglTestCase_006687_1, VkglTestCase_006687_2);

#define VkglTestCase_006688_1 "dEQP-GLES2.functional.shaders.operator.i"
#define VkglTestCase_006688_2 "nt_compare.greaterThan.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006688, VkglTestCase_006688_1, VkglTestCase_006688_2);

#define VkglTestCase_006689_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006689_2 "t_compare.greaterThan.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006689, VkglTestCase_006689_1, VkglTestCase_006689_2);
