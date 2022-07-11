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

#define VkglTestCase_006412_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006412_2 ".geometric.length.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006412, VkglTestCase_006412_1, VkglTestCase_006412_2);

#define VkglTestCase_006413_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006413_2 "geometric.length.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006413, VkglTestCase_006413_1, VkglTestCase_006413_2);

#define VkglTestCase_006414_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006414_2 "r.geometric.length.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006414, VkglTestCase_006414_1, VkglTestCase_006414_2);

#define VkglTestCase_006415_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006415_2 ".geometric.length.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006415, VkglTestCase_006415_1, VkglTestCase_006415_2);

#define VkglTestCase_006416_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006416_2 "r.geometric.length.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006416, VkglTestCase_006416_1, VkglTestCase_006416_2);

#define VkglTestCase_006417_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006417_2 ".geometric.length.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006417, VkglTestCase_006417_1, VkglTestCase_006417_2);

#define VkglTestCase_006418_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006418_2 "or.geometric.length.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006418, VkglTestCase_006418_1, VkglTestCase_006418_2);

#define VkglTestCase_006419_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006419_2 "r.geometric.length.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006419, VkglTestCase_006419_1, VkglTestCase_006419_2);

#define VkglTestCase_006420_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006420_2 "r.geometric.length.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006420, VkglTestCase_006420_1, VkglTestCase_006420_2);

#define VkglTestCase_006421_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006421_2 ".geometric.length.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006421, VkglTestCase_006421_1, VkglTestCase_006421_2);

#define VkglTestCase_006422_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006422_2 "or.geometric.length.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006422, VkglTestCase_006422_1, VkglTestCase_006422_2);

#define VkglTestCase_006423_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006423_2 "r.geometric.length.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006423, VkglTestCase_006423_1, VkglTestCase_006423_2);

#define VkglTestCase_006424_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006424_2 "r.geometric.length.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006424, VkglTestCase_006424_1, VkglTestCase_006424_2);

#define VkglTestCase_006425_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006425_2 ".geometric.length.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006425, VkglTestCase_006425_1, VkglTestCase_006425_2);

#define VkglTestCase_006426_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_006426_2 "or.geometric.length.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006426, VkglTestCase_006426_1, VkglTestCase_006426_2);

#define VkglTestCase_006427_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006427_2 "r.geometric.length.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006427, VkglTestCase_006427_1, VkglTestCase_006427_2);
