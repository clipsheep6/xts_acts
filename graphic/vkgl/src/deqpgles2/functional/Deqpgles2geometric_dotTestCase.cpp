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

#define VkglTestCase_006444_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006444_2 "or.geometric.dot.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006444, VkglTestCase_006444_1, VkglTestCase_006444_2);

#define VkglTestCase_006445_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006445_2 "r.geometric.dot.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006445, VkglTestCase_006445_1, VkglTestCase_006445_2);

#define VkglTestCase_006446_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006446_2 "tor.geometric.dot.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006446, VkglTestCase_006446_1, VkglTestCase_006446_2);

#define VkglTestCase_006447_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006447_2 "or.geometric.dot.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006447, VkglTestCase_006447_1, VkglTestCase_006447_2);

#define VkglTestCase_006448_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006448_2 "or.geometric.dot.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006448, VkglTestCase_006448_1, VkglTestCase_006448_2);

#define VkglTestCase_006449_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006449_2 "r.geometric.dot.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006449, VkglTestCase_006449_1, VkglTestCase_006449_2);

#define VkglTestCase_006450_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006450_2 "tor.geometric.dot.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006450, VkglTestCase_006450_1, VkglTestCase_006450_2);

#define VkglTestCase_006451_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006451_2 "or.geometric.dot.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006451, VkglTestCase_006451_1, VkglTestCase_006451_2);

#define VkglTestCase_006452_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006452_2 "or.geometric.dot.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006452, VkglTestCase_006452_1, VkglTestCase_006452_2);

#define VkglTestCase_006453_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006453_2 "r.geometric.dot.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006453, VkglTestCase_006453_1, VkglTestCase_006453_2);

#define VkglTestCase_006454_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006454_2 "tor.geometric.dot.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006454, VkglTestCase_006454_1, VkglTestCase_006454_2);

#define VkglTestCase_006455_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006455_2 "or.geometric.dot.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006455, VkglTestCase_006455_1, VkglTestCase_006455_2);

#define VkglTestCase_006456_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006456_2 "or.geometric.dot.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006456, VkglTestCase_006456_1, VkglTestCase_006456_2);

#define VkglTestCase_006457_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006457_2 "r.geometric.dot.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006457, VkglTestCase_006457_1, VkglTestCase_006457_2);

#define VkglTestCase_006458_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006458_2 "tor.geometric.dot.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006458, VkglTestCase_006458_1, VkglTestCase_006458_2);

#define VkglTestCase_006459_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006459_2 "or.geometric.dot.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006459, VkglTestCase_006459_1, VkglTestCase_006459_2);
