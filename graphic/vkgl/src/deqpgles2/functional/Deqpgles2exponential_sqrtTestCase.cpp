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

#define VkglTestCase_005980_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005980_2 ".exponential.sqrt.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005980, VkglTestCase_005980_1, VkglTestCase_005980_2);

#define VkglTestCase_005981_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005981_2 "exponential.sqrt.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005981, VkglTestCase_005981_1, VkglTestCase_005981_2);

#define VkglTestCase_005982_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005982_2 "r.exponential.sqrt.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005982, VkglTestCase_005982_1, VkglTestCase_005982_2);

#define VkglTestCase_005983_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005983_2 ".exponential.sqrt.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005983, VkglTestCase_005983_1, VkglTestCase_005983_2);

#define VkglTestCase_005984_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005984_2 "r.exponential.sqrt.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005984, VkglTestCase_005984_1, VkglTestCase_005984_2);

#define VkglTestCase_005985_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005985_2 ".exponential.sqrt.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005985, VkglTestCase_005985_1, VkglTestCase_005985_2);

#define VkglTestCase_005986_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005986_2 "or.exponential.sqrt.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005986, VkglTestCase_005986_1, VkglTestCase_005986_2);

#define VkglTestCase_005987_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005987_2 "r.exponential.sqrt.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005987, VkglTestCase_005987_1, VkglTestCase_005987_2);

#define VkglTestCase_005988_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005988_2 "r.exponential.sqrt.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005988, VkglTestCase_005988_1, VkglTestCase_005988_2);

#define VkglTestCase_005989_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005989_2 ".exponential.sqrt.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005989, VkglTestCase_005989_1, VkglTestCase_005989_2);

#define VkglTestCase_005990_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005990_2 "or.exponential.sqrt.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005990, VkglTestCase_005990_1, VkglTestCase_005990_2);

#define VkglTestCase_005991_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005991_2 "r.exponential.sqrt.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005991, VkglTestCase_005991_1, VkglTestCase_005991_2);

#define VkglTestCase_005992_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005992_2 "r.exponential.sqrt.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005992, VkglTestCase_005992_1, VkglTestCase_005992_2);

#define VkglTestCase_005993_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005993_2 ".exponential.sqrt.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005993, VkglTestCase_005993_1, VkglTestCase_005993_2);

#define VkglTestCase_005994_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005994_2 "or.exponential.sqrt.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005994, VkglTestCase_005994_1, VkglTestCase_005994_2);

#define VkglTestCase_005995_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005995_2 "r.exponential.sqrt.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005995, VkglTestCase_005995_1, VkglTestCase_005995_2);
