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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018581_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018581_2 "e_coverage.callbacks.fragment.scissor"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018581, VkglTestCase_018581_1, VkglTestCase_018581_2);

#define VkglTestCase_018582_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018582_2 "coverage.callbacks.fragment.depth_func"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018582, VkglTestCase_018582_1, VkglTestCase_018582_2);

#define VkglTestCase_018583_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018583_2 "_coverage.callbacks.fragment.viewport"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018583, VkglTestCase_018583_1, VkglTestCase_018583_2);

#define VkglTestCase_018584_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018584_2 "overage.callbacks.fragment.stencil_func"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018584, VkglTestCase_018584_1, VkglTestCase_018584_2);

#define VkglTestCase_018585_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018585_2 "age.callbacks.fragment.stencil_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018585, VkglTestCase_018585_1, VkglTestCase_018585_2);

#define VkglTestCase_018586_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018586_2 "coverage.callbacks.fragment.stencil_op"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018586, VkglTestCase_018586_1, VkglTestCase_018586_2);

#define VkglTestCase_018587_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018587_2 "rage.callbacks.fragment.stencil_op_separate"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018587, VkglTestCase_018587_1, VkglTestCase_018587_2);

#define VkglTestCase_018588_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018588_2 "age.callbacks.fragment.stencil_mask_separate"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018588, VkglTestCase_018588_1, VkglTestCase_018588_2);

#define VkglTestCase_018589_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018589_2 "verage.callbacks.fragment.blend_equation"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018589, VkglTestCase_018589_1, VkglTestCase_018589_2);

#define VkglTestCase_018590_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018590_2 "verage.callbacks.fragment.blend_equationi"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018590, VkglTestCase_018590_1, VkglTestCase_018590_2);

#define VkglTestCase_018591_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018591_2 "ge.callbacks.fragment.blend_equation_separate"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018591, VkglTestCase_018591_1, VkglTestCase_018591_2);

#define VkglTestCase_018592_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018592_2 "e.callbacks.fragment.blend_equation_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018592, VkglTestCase_018592_1, VkglTestCase_018592_2);

#define VkglTestCase_018593_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018593_2 "coverage.callbacks.fragment.blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018593, VkglTestCase_018593_1, VkglTestCase_018593_2);

#define VkglTestCase_018594_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018594_2 "coverage.callbacks.fragment.blend_funci"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018594, VkglTestCase_018594_1, VkglTestCase_018594_2);

#define VkglTestCase_018595_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018595_2 "rage.callbacks.fragment.blend_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018595, VkglTestCase_018595_1, VkglTestCase_018595_2);

#define VkglTestCase_018596_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018596_2 "age.callbacks.fragment.blend_func_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018596, VkglTestCase_018596_1, VkglTestCase_018596_2);

#define VkglTestCase_018597_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018597_2 "_coverage.callbacks.fragment.cull_face"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018597, VkglTestCase_018597_1, VkglTestCase_018597_2);

#define VkglTestCase_018598_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018598_2 "coverage.callbacks.fragment.front_face"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018598, VkglTestCase_018598_1, VkglTestCase_018598_2);

#define VkglTestCase_018599_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018599_2 "coverage.callbacks.fragment.line_width"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018599, VkglTestCase_018599_1, VkglTestCase_018599_2);

#define VkglTestCase_018600_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018600_2 "coverage.callbacks.fragment.gen_queries"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018600, VkglTestCase_018600_1, VkglTestCase_018600_2);

#define VkglTestCase_018601_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018601_2 "coverage.callbacks.fragment.begin_query"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018601, VkglTestCase_018601_1, VkglTestCase_018601_2);

#define VkglTestCase_018602_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018602_2 "_coverage.callbacks.fragment.end_query"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018602, VkglTestCase_018602_1, VkglTestCase_018602_2);

#define VkglTestCase_018603_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018603_2 "verage.callbacks.fragment.delete_queries"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018603, VkglTestCase_018603_1, VkglTestCase_018603_2);

#define VkglTestCase_018604_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018604_2 "coverage.callbacks.fragment.fence_sync"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018604, VkglTestCase_018604_1, VkglTestCase_018604_2);

#define VkglTestCase_018605_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018605_2 "_coverage.callbacks.fragment.wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018605, VkglTestCase_018605_1, VkglTestCase_018605_2);

#define VkglTestCase_018606_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018606_2 "erage.callbacks.fragment.client_wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018606, VkglTestCase_018606_1, VkglTestCase_018606_2);

#define VkglTestCase_018607_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018607_2 "coverage.callbacks.fragment.delete_sync"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018607, VkglTestCase_018607_1, VkglTestCase_018607_2);
