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

#define VkglTestCase_006546_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006546_2 "oat_compare.lessThanEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006546, VkglTestCase_006546_1, VkglTestCase_006546_2);

#define VkglTestCase_006547_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006547_2 "at_compare.lessThanEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006547, VkglTestCase_006547_1, VkglTestCase_006547_2);

#define VkglTestCase_006548_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006548_2 "t_compare.lessThanEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006548, VkglTestCase_006548_1, VkglTestCase_006548_2);

#define VkglTestCase_006549_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006549_2 "_compare.lessThanEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006549, VkglTestCase_006549_1, VkglTestCase_006549_2);

#define VkglTestCase_006550_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006550_2 "at_compare.lessThanEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006550, VkglTestCase_006550_1, VkglTestCase_006550_2);

#define VkglTestCase_006551_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006551_2 "t_compare.lessThanEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006551, VkglTestCase_006551_1, VkglTestCase_006551_2);

#define VkglTestCase_006552_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006552_2 "oat_compare.lessThanEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006552, VkglTestCase_006552_1, VkglTestCase_006552_2);

#define VkglTestCase_006553_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006553_2 "at_compare.lessThanEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006553, VkglTestCase_006553_1, VkglTestCase_006553_2);

#define VkglTestCase_006554_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006554_2 "t_compare.lessThanEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006554, VkglTestCase_006554_1, VkglTestCase_006554_2);

#define VkglTestCase_006555_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006555_2 "_compare.lessThanEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006555, VkglTestCase_006555_1, VkglTestCase_006555_2);

#define VkglTestCase_006556_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006556_2 "at_compare.lessThanEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006556, VkglTestCase_006556_1, VkglTestCase_006556_2);

#define VkglTestCase_006557_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006557_2 "t_compare.lessThanEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006557, VkglTestCase_006557_1, VkglTestCase_006557_2);

#define VkglTestCase_006558_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006558_2 "oat_compare.lessThanEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006558, VkglTestCase_006558_1, VkglTestCase_006558_2);

#define VkglTestCase_006559_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006559_2 "at_compare.lessThanEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006559, VkglTestCase_006559_1, VkglTestCase_006559_2);

#define VkglTestCase_006560_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006560_2 "t_compare.lessThanEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006560, VkglTestCase_006560_1, VkglTestCase_006560_2);

#define VkglTestCase_006561_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006561_2 "_compare.lessThanEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006561, VkglTestCase_006561_1, VkglTestCase_006561_2);

#define VkglTestCase_006562_1 "dEQP-GLES2.functional.shaders.operator.flo"
#define VkglTestCase_006562_2 "at_compare.lessThanEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006562, VkglTestCase_006562_1, VkglTestCase_006562_2);

#define VkglTestCase_006563_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006563_2 "t_compare.lessThanEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006563, VkglTestCase_006563_1, VkglTestCase_006563_2);
