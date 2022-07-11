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

#define VkglTestCase_006496_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006496_2 ".geometric.reflect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006496, VkglTestCase_006496_1, VkglTestCase_006496_2);

#define VkglTestCase_006497_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006497_2 "geometric.reflect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006497, VkglTestCase_006497_1, VkglTestCase_006497_2);

#define VkglTestCase_006498_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006498_2 "r.geometric.reflect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006498, VkglTestCase_006498_1, VkglTestCase_006498_2);

#define VkglTestCase_006499_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006499_2 ".geometric.reflect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006499, VkglTestCase_006499_1, VkglTestCase_006499_2);

#define VkglTestCase_006500_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006500_2 ".geometric.reflect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006500, VkglTestCase_006500_1, VkglTestCase_006500_2);

#define VkglTestCase_006501_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006501_2 "geometric.reflect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006501, VkglTestCase_006501_1, VkglTestCase_006501_2);

#define VkglTestCase_006502_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006502_2 "r.geometric.reflect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006502, VkglTestCase_006502_1, VkglTestCase_006502_2);

#define VkglTestCase_006503_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006503_2 ".geometric.reflect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006503, VkglTestCase_006503_1, VkglTestCase_006503_2);

#define VkglTestCase_006504_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006504_2 ".geometric.reflect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006504, VkglTestCase_006504_1, VkglTestCase_006504_2);

#define VkglTestCase_006505_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006505_2 "geometric.reflect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006505, VkglTestCase_006505_1, VkglTestCase_006505_2);

#define VkglTestCase_006506_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006506_2 "r.geometric.reflect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006506, VkglTestCase_006506_1, VkglTestCase_006506_2);

#define VkglTestCase_006507_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006507_2 ".geometric.reflect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006507, VkglTestCase_006507_1, VkglTestCase_006507_2);

#define VkglTestCase_006508_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006508_2 ".geometric.reflect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006508, VkglTestCase_006508_1, VkglTestCase_006508_2);

#define VkglTestCase_006509_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006509_2 "geometric.reflect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006509, VkglTestCase_006509_1, VkglTestCase_006509_2);

#define VkglTestCase_006510_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006510_2 "r.geometric.reflect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006510, VkglTestCase_006510_1, VkglTestCase_006510_2);

#define VkglTestCase_006511_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006511_2 ".geometric.reflect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006511, VkglTestCase_006511_1, VkglTestCase_006511_2);
