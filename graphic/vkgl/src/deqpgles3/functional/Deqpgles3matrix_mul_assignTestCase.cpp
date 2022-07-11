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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016338_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016338_2 "x.mul_assign.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016338, VkglTestCase_016338_1, VkglTestCase_016338_2);

#define VkglTestCase_016339_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016339_2 ".mul_assign.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016339, VkglTestCase_016339_1, VkglTestCase_016339_2);

#define VkglTestCase_016340_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016340_2 ".mul_assign.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016340, VkglTestCase_016340_1, VkglTestCase_016340_2);

#define VkglTestCase_016341_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016341_2 "mul_assign.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016341, VkglTestCase_016341_1, VkglTestCase_016341_2);

#define VkglTestCase_016342_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016342_2 "x.mul_assign.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016342, VkglTestCase_016342_1, VkglTestCase_016342_2);

#define VkglTestCase_016343_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016343_2 ".mul_assign.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016343, VkglTestCase_016343_1, VkglTestCase_016343_2);

#define VkglTestCase_016344_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016344_2 "x.mul_assign.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016344, VkglTestCase_016344_1, VkglTestCase_016344_2);

#define VkglTestCase_016345_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016345_2 ".mul_assign.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016345, VkglTestCase_016345_1, VkglTestCase_016345_2);

#define VkglTestCase_016346_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016346_2 ".mul_assign.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016346, VkglTestCase_016346_1, VkglTestCase_016346_2);

#define VkglTestCase_016347_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016347_2 "mul_assign.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016347, VkglTestCase_016347_1, VkglTestCase_016347_2);

#define VkglTestCase_016348_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016348_2 "x.mul_assign.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016348, VkglTestCase_016348_1, VkglTestCase_016348_2);

#define VkglTestCase_016349_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016349_2 ".mul_assign.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016349, VkglTestCase_016349_1, VkglTestCase_016349_2);

#define VkglTestCase_016350_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016350_2 "x.mul_assign.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016350, VkglTestCase_016350_1, VkglTestCase_016350_2);

#define VkglTestCase_016351_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016351_2 ".mul_assign.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016351, VkglTestCase_016351_1, VkglTestCase_016351_2);

#define VkglTestCase_016352_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016352_2 ".mul_assign.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016352, VkglTestCase_016352_1, VkglTestCase_016352_2);

#define VkglTestCase_016353_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016353_2 "mul_assign.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016353, VkglTestCase_016353_1, VkglTestCase_016353_2);

#define VkglTestCase_016354_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016354_2 "x.mul_assign.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016354, VkglTestCase_016354_1, VkglTestCase_016354_2);

#define VkglTestCase_016355_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016355_2 ".mul_assign.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016355, VkglTestCase_016355_1, VkglTestCase_016355_2);
