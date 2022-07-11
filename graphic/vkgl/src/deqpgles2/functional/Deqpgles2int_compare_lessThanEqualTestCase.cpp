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

#define VkglTestCase_006654_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006654_2 "t_compare.lessThanEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006654, VkglTestCase_006654_1, VkglTestCase_006654_2);

#define VkglTestCase_006655_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006655_2 "_compare.lessThanEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006655, VkglTestCase_006655_1, VkglTestCase_006655_2);

#define VkglTestCase_006656_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006656_2 "_compare.lessThanEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006656, VkglTestCase_006656_1, VkglTestCase_006656_2);

#define VkglTestCase_006657_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006657_2 "compare.lessThanEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006657, VkglTestCase_006657_1, VkglTestCase_006657_2);

#define VkglTestCase_006658_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006658_2 "t_compare.lessThanEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006658, VkglTestCase_006658_1, VkglTestCase_006658_2);

#define VkglTestCase_006659_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006659_2 "_compare.lessThanEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006659, VkglTestCase_006659_1, VkglTestCase_006659_2);

#define VkglTestCase_006660_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006660_2 "t_compare.lessThanEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006660, VkglTestCase_006660_1, VkglTestCase_006660_2);

#define VkglTestCase_006661_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006661_2 "_compare.lessThanEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006661, VkglTestCase_006661_1, VkglTestCase_006661_2);

#define VkglTestCase_006662_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006662_2 "_compare.lessThanEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006662, VkglTestCase_006662_1, VkglTestCase_006662_2);

#define VkglTestCase_006663_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006663_2 "compare.lessThanEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006663, VkglTestCase_006663_1, VkglTestCase_006663_2);

#define VkglTestCase_006664_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006664_2 "t_compare.lessThanEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006664, VkglTestCase_006664_1, VkglTestCase_006664_2);

#define VkglTestCase_006665_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006665_2 "_compare.lessThanEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006665, VkglTestCase_006665_1, VkglTestCase_006665_2);

#define VkglTestCase_006666_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006666_2 "t_compare.lessThanEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006666, VkglTestCase_006666_1, VkglTestCase_006666_2);

#define VkglTestCase_006667_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006667_2 "_compare.lessThanEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006667, VkglTestCase_006667_1, VkglTestCase_006667_2);

#define VkglTestCase_006668_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006668_2 "_compare.lessThanEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006668, VkglTestCase_006668_1, VkglTestCase_006668_2);

#define VkglTestCase_006669_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006669_2 "compare.lessThanEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006669, VkglTestCase_006669_1, VkglTestCase_006669_2);

#define VkglTestCase_006670_1 "dEQP-GLES2.functional.shaders.operator.in"
#define VkglTestCase_006670_2 "t_compare.lessThanEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006670, VkglTestCase_006670_1, VkglTestCase_006670_2);

#define VkglTestCase_006671_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006671_2 "_compare.lessThanEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006671, VkglTestCase_006671_1, VkglTestCase_006671_2);
