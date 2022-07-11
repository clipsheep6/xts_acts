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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005900_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005900_2 "r.exponential.pow.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005900, VkglTestCase_005900_1, VkglTestCase_005900_2);

#define VkglTestCase_005901_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005901_2 ".exponential.pow.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005901, VkglTestCase_005901_1, VkglTestCase_005901_2);

#define VkglTestCase_005902_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005902_2 "or.exponential.pow.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005902, VkglTestCase_005902_1, VkglTestCase_005902_2);

#define VkglTestCase_005903_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005903_2 "r.exponential.pow.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005903, VkglTestCase_005903_1, VkglTestCase_005903_2);

#define VkglTestCase_005904_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005904_2 "r.exponential.pow.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005904, VkglTestCase_005904_1, VkglTestCase_005904_2);

#define VkglTestCase_005905_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005905_2 ".exponential.pow.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005905, VkglTestCase_005905_1, VkglTestCase_005905_2);

#define VkglTestCase_005906_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005906_2 "or.exponential.pow.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005906, VkglTestCase_005906_1, VkglTestCase_005906_2);

#define VkglTestCase_005907_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005907_2 "r.exponential.pow.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005907, VkglTestCase_005907_1, VkglTestCase_005907_2);

#define VkglTestCase_005908_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005908_2 "r.exponential.pow.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005908, VkglTestCase_005908_1, VkglTestCase_005908_2);

#define VkglTestCase_005909_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005909_2 ".exponential.pow.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005909, VkglTestCase_005909_1, VkglTestCase_005909_2);

#define VkglTestCase_005910_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005910_2 "or.exponential.pow.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005910, VkglTestCase_005910_1, VkglTestCase_005910_2);

#define VkglTestCase_005911_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005911_2 "r.exponential.pow.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005911, VkglTestCase_005911_1, VkglTestCase_005911_2);

#define VkglTestCase_005912_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005912_2 "r.exponential.pow.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005912, VkglTestCase_005912_1, VkglTestCase_005912_2);

#define VkglTestCase_005913_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005913_2 ".exponential.pow.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005913, VkglTestCase_005913_1, VkglTestCase_005913_2);

#define VkglTestCase_005914_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005914_2 "or.exponential.pow.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005914, VkglTestCase_005914_1, VkglTestCase_005914_2);

#define VkglTestCase_005915_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005915_2 "r.exponential.pow.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005915, VkglTestCase_005915_1, VkglTestCase_005915_2);
