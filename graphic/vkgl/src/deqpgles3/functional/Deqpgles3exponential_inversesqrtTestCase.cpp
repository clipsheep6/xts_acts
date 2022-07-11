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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012534_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012534_2 "ponential.inversesqrt.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012534, VkglTestCase_012534_1, VkglTestCase_012534_2);

#define VkglTestCase_012535_1 "dEQP-GLES3.functional.shaders.operator.exp"
#define VkglTestCase_012535_2 "onential.inversesqrt.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012535, VkglTestCase_012535_1, VkglTestCase_012535_2);

#define VkglTestCase_012536_1 "dEQP-GLES3.functional.shaders.operator.e"
#define VkglTestCase_012536_2 "xponential.inversesqrt.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012536, VkglTestCase_012536_1, VkglTestCase_012536_2);

#define VkglTestCase_012537_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012537_2 "ponential.inversesqrt.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012537, VkglTestCase_012537_1, VkglTestCase_012537_2);

#define VkglTestCase_012538_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012538_2 "ponential.inversesqrt.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012538, VkglTestCase_012538_1, VkglTestCase_012538_2);

#define VkglTestCase_012539_1 "dEQP-GLES3.functional.shaders.operator.exp"
#define VkglTestCase_012539_2 "onential.inversesqrt.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012539, VkglTestCase_012539_1, VkglTestCase_012539_2);

#define VkglTestCase_012540_1 "dEQP-GLES3.functional.shaders.operator.e"
#define VkglTestCase_012540_2 "xponential.inversesqrt.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012540, VkglTestCase_012540_1, VkglTestCase_012540_2);

#define VkglTestCase_012541_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012541_2 "ponential.inversesqrt.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012541, VkglTestCase_012541_1, VkglTestCase_012541_2);

#define VkglTestCase_012542_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012542_2 "ponential.inversesqrt.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012542, VkglTestCase_012542_1, VkglTestCase_012542_2);

#define VkglTestCase_012543_1 "dEQP-GLES3.functional.shaders.operator.exp"
#define VkglTestCase_012543_2 "onential.inversesqrt.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012543, VkglTestCase_012543_1, VkglTestCase_012543_2);

#define VkglTestCase_012544_1 "dEQP-GLES3.functional.shaders.operator.e"
#define VkglTestCase_012544_2 "xponential.inversesqrt.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012544, VkglTestCase_012544_1, VkglTestCase_012544_2);

#define VkglTestCase_012545_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012545_2 "ponential.inversesqrt.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012545, VkglTestCase_012545_1, VkglTestCase_012545_2);

#define VkglTestCase_012546_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012546_2 "ponential.inversesqrt.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012546, VkglTestCase_012546_1, VkglTestCase_012546_2);

#define VkglTestCase_012547_1 "dEQP-GLES3.functional.shaders.operator.exp"
#define VkglTestCase_012547_2 "onential.inversesqrt.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012547, VkglTestCase_012547_1, VkglTestCase_012547_2);

#define VkglTestCase_012548_1 "dEQP-GLES3.functional.shaders.operator.e"
#define VkglTestCase_012548_2 "xponential.inversesqrt.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012548, VkglTestCase_012548_1, VkglTestCase_012548_2);

#define VkglTestCase_012549_1 "dEQP-GLES3.functional.shaders.operator.ex"
#define VkglTestCase_012549_2 "ponential.inversesqrt.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012549, VkglTestCase_012549_1, VkglTestCase_012549_2);
