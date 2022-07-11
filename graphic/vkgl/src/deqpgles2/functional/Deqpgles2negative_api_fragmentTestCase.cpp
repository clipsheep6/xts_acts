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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013647_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013647_2 "ative_api.fragment.scissor"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013647, VkglTestCase_013647_1, VkglTestCase_013647_2);

#define VkglTestCase_013648_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013648_2 "ive_api.fragment.depth_func"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013648, VkglTestCase_013648_1, VkglTestCase_013648_2);

#define VkglTestCase_013649_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013649_2 "tive_api.fragment.viewport"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013649, VkglTestCase_013649_1, VkglTestCase_013649_2);

#define VkglTestCase_013650_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013650_2 "ve_api.fragment.stencil_func"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013650, VkglTestCase_013650_1, VkglTestCase_013650_2);

#define VkglTestCase_013651_1 "dEQP-GLES2.functional.negative_a"
#define VkglTestCase_013651_2 "pi.fragment.stencil_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013651, VkglTestCase_013651_1, VkglTestCase_013651_2);

#define VkglTestCase_013652_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013652_2 "ive_api.fragment.stencil_op"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013652, VkglTestCase_013652_1, VkglTestCase_013652_2);

#define VkglTestCase_013653_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013653_2 "api.fragment.stencil_op_separate"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013653, VkglTestCase_013653_1, VkglTestCase_013653_2);

#define VkglTestCase_013654_1 "dEQP-GLES2.functional.negative_a"
#define VkglTestCase_013654_2 "pi.fragment.stencil_mask_separate"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013654, VkglTestCase_013654_1, VkglTestCase_013654_2);

#define VkglTestCase_013655_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013655_2 "e_api.fragment.blend_equation"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013655, VkglTestCase_013655_1, VkglTestCase_013655_2);

#define VkglTestCase_013656_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013656_2 "i.fragment.blend_equation_separate"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013656, VkglTestCase_013656_1, VkglTestCase_013656_2);

#define VkglTestCase_013657_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013657_2 "api.fragment.blend_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013657, VkglTestCase_013657_1, VkglTestCase_013657_2);

#define VkglTestCase_013658_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013658_2 "ive_api.fragment.blend_func"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013658, VkglTestCase_013658_1, VkglTestCase_013658_2);

#define VkglTestCase_013659_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013659_2 "tive_api.fragment.cull_face"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013659, VkglTestCase_013659_1, VkglTestCase_013659_2);

#define VkglTestCase_013660_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013660_2 "ive_api.fragment.front_face"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013660, VkglTestCase_013660_1, VkglTestCase_013660_2);

#define VkglTestCase_013661_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013661_2 "ive_api.fragment.line_width"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013661, VkglTestCase_013661_1, VkglTestCase_013661_2);
