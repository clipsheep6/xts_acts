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

#define VkglTestCase_006582_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006582_2 "t_compare.greaterThanEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006582, VkglTestCase_006582_1, VkglTestCase_006582_2);

#define VkglTestCase_006583_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006583_2 "_compare.greaterThanEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006583, VkglTestCase_006583_1, VkglTestCase_006583_2);

#define VkglTestCase_006584_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006584_2 "_compare.greaterThanEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006584, VkglTestCase_006584_1, VkglTestCase_006584_2);

#define VkglTestCase_006585_1 "dEQP-GLES2.functional.shaders.operator.float_"
#define VkglTestCase_006585_2 "compare.greaterThanEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006585, VkglTestCase_006585_1, VkglTestCase_006585_2);

#define VkglTestCase_006586_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006586_2 "t_compare.greaterThanEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006586, VkglTestCase_006586_1, VkglTestCase_006586_2);

#define VkglTestCase_006587_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006587_2 "_compare.greaterThanEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006587, VkglTestCase_006587_1, VkglTestCase_006587_2);

#define VkglTestCase_006588_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006588_2 "t_compare.greaterThanEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006588, VkglTestCase_006588_1, VkglTestCase_006588_2);

#define VkglTestCase_006589_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006589_2 "_compare.greaterThanEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006589, VkglTestCase_006589_1, VkglTestCase_006589_2);

#define VkglTestCase_006590_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006590_2 "_compare.greaterThanEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006590, VkglTestCase_006590_1, VkglTestCase_006590_2);

#define VkglTestCase_006591_1 "dEQP-GLES2.functional.shaders.operator.float_"
#define VkglTestCase_006591_2 "compare.greaterThanEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006591, VkglTestCase_006591_1, VkglTestCase_006591_2);

#define VkglTestCase_006592_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006592_2 "t_compare.greaterThanEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006592, VkglTestCase_006592_1, VkglTestCase_006592_2);

#define VkglTestCase_006593_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006593_2 "_compare.greaterThanEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006593, VkglTestCase_006593_1, VkglTestCase_006593_2);

#define VkglTestCase_006594_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006594_2 "t_compare.greaterThanEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006594, VkglTestCase_006594_1, VkglTestCase_006594_2);

#define VkglTestCase_006595_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006595_2 "_compare.greaterThanEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006595, VkglTestCase_006595_1, VkglTestCase_006595_2);

#define VkglTestCase_006596_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006596_2 "_compare.greaterThanEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006596, VkglTestCase_006596_1, VkglTestCase_006596_2);

#define VkglTestCase_006597_1 "dEQP-GLES2.functional.shaders.operator.float_"
#define VkglTestCase_006597_2 "compare.greaterThanEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006597, VkglTestCase_006597_1, VkglTestCase_006597_2);

#define VkglTestCase_006598_1 "dEQP-GLES2.functional.shaders.operator.floa"
#define VkglTestCase_006598_2 "t_compare.greaterThanEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006598, VkglTestCase_006598_1, VkglTestCase_006598_2);

#define VkglTestCase_006599_1 "dEQP-GLES2.functional.shaders.operator.float"
#define VkglTestCase_006599_2 "_compare.greaterThanEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006599, VkglTestCase_006599_1, VkglTestCase_006599_2);
