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

#define VkglTestCase_006480_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006480_2 "eometric.faceforward.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006480, VkglTestCase_006480_1, VkglTestCase_006480_2);

#define VkglTestCase_006481_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006481_2 "ometric.faceforward.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006481, VkglTestCase_006481_1, VkglTestCase_006481_2);

#define VkglTestCase_006482_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006482_2 "geometric.faceforward.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006482, VkglTestCase_006482_1, VkglTestCase_006482_2);

#define VkglTestCase_006483_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006483_2 "eometric.faceforward.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006483, VkglTestCase_006483_1, VkglTestCase_006483_2);

#define VkglTestCase_006484_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006484_2 "eometric.faceforward.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006484, VkglTestCase_006484_1, VkglTestCase_006484_2);

#define VkglTestCase_006485_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006485_2 "ometric.faceforward.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006485, VkglTestCase_006485_1, VkglTestCase_006485_2);

#define VkglTestCase_006486_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006486_2 "geometric.faceforward.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006486, VkglTestCase_006486_1, VkglTestCase_006486_2);

#define VkglTestCase_006487_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006487_2 "eometric.faceforward.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006487, VkglTestCase_006487_1, VkglTestCase_006487_2);

#define VkglTestCase_006488_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006488_2 "eometric.faceforward.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006488, VkglTestCase_006488_1, VkglTestCase_006488_2);

#define VkglTestCase_006489_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006489_2 "ometric.faceforward.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006489, VkglTestCase_006489_1, VkglTestCase_006489_2);

#define VkglTestCase_006490_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006490_2 "geometric.faceforward.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006490, VkglTestCase_006490_1, VkglTestCase_006490_2);

#define VkglTestCase_006491_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006491_2 "eometric.faceforward.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006491, VkglTestCase_006491_1, VkglTestCase_006491_2);

#define VkglTestCase_006492_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006492_2 "eometric.faceforward.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006492, VkglTestCase_006492_1, VkglTestCase_006492_2);

#define VkglTestCase_006493_1 "dEQP-GLES2.functional.shaders.operator.ge"
#define VkglTestCase_006493_2 "ometric.faceforward.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006493, VkglTestCase_006493_1, VkglTestCase_006493_2);

#define VkglTestCase_006494_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006494_2 "geometric.faceforward.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006494, VkglTestCase_006494_1, VkglTestCase_006494_2);

#define VkglTestCase_006495_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006495_2 "eometric.faceforward.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006495, VkglTestCase_006495_1, VkglTestCase_006495_2);
