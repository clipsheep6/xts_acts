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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019576_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019576_2 "e_coverage.get_error.fragment.scissor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019576, VkglTestCase_019576_1, VkglTestCase_019576_2);

#define VkglTestCase_019577_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019577_2 "coverage.get_error.fragment.depth_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019577, VkglTestCase_019577_1, VkglTestCase_019577_2);

#define VkglTestCase_019578_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019578_2 "_coverage.get_error.fragment.viewport"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019578, VkglTestCase_019578_1, VkglTestCase_019578_2);

#define VkglTestCase_019579_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019579_2 "overage.get_error.fragment.stencil_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019579, VkglTestCase_019579_1, VkglTestCase_019579_2);

#define VkglTestCase_019580_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019580_2 "age.get_error.fragment.stencil_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019580, VkglTestCase_019580_1, VkglTestCase_019580_2);

#define VkglTestCase_019581_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019581_2 "coverage.get_error.fragment.stencil_op"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019581, VkglTestCase_019581_1, VkglTestCase_019581_2);

#define VkglTestCase_019582_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019582_2 "rage.get_error.fragment.stencil_op_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019582, VkglTestCase_019582_1, VkglTestCase_019582_2);

#define VkglTestCase_019583_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019583_2 "age.get_error.fragment.stencil_mask_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019583, VkglTestCase_019583_1, VkglTestCase_019583_2);

#define VkglTestCase_019584_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019584_2 "verage.get_error.fragment.blend_equation"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019584, VkglTestCase_019584_1, VkglTestCase_019584_2);

#define VkglTestCase_019585_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019585_2 "verage.get_error.fragment.blend_equationi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019585, VkglTestCase_019585_1, VkglTestCase_019585_2);

#define VkglTestCase_019586_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019586_2 "ge.get_error.fragment.blend_equation_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019586, VkglTestCase_019586_1, VkglTestCase_019586_2);

#define VkglTestCase_019587_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019587_2 "e.get_error.fragment.blend_equation_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019587, VkglTestCase_019587_1, VkglTestCase_019587_2);

#define VkglTestCase_019588_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019588_2 "coverage.get_error.fragment.blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019588, VkglTestCase_019588_1, VkglTestCase_019588_2);

#define VkglTestCase_019589_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019589_2 "coverage.get_error.fragment.blend_funci"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019589, VkglTestCase_019589_1, VkglTestCase_019589_2);

#define VkglTestCase_019590_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019590_2 "rage.get_error.fragment.blend_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019590, VkglTestCase_019590_1, VkglTestCase_019590_2);

#define VkglTestCase_019591_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019591_2 "age.get_error.fragment.blend_func_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019591, VkglTestCase_019591_1, VkglTestCase_019591_2);

#define VkglTestCase_019592_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019592_2 "_coverage.get_error.fragment.cull_face"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019592, VkglTestCase_019592_1, VkglTestCase_019592_2);

#define VkglTestCase_019593_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019593_2 "coverage.get_error.fragment.front_face"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019593, VkglTestCase_019593_1, VkglTestCase_019593_2);

#define VkglTestCase_019594_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019594_2 "coverage.get_error.fragment.line_width"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019594, VkglTestCase_019594_1, VkglTestCase_019594_2);

#define VkglTestCase_019595_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019595_2 "coverage.get_error.fragment.gen_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019595, VkglTestCase_019595_1, VkglTestCase_019595_2);

#define VkglTestCase_019596_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019596_2 "coverage.get_error.fragment.begin_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019596, VkglTestCase_019596_1, VkglTestCase_019596_2);

#define VkglTestCase_019597_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019597_2 "_coverage.get_error.fragment.end_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019597, VkglTestCase_019597_1, VkglTestCase_019597_2);

#define VkglTestCase_019598_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019598_2 "verage.get_error.fragment.delete_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019598, VkglTestCase_019598_1, VkglTestCase_019598_2);

#define VkglTestCase_019599_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019599_2 "coverage.get_error.fragment.fence_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019599, VkglTestCase_019599_1, VkglTestCase_019599_2);

#define VkglTestCase_019600_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019600_2 "_coverage.get_error.fragment.wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019600, VkglTestCase_019600_1, VkglTestCase_019600_2);

#define VkglTestCase_019601_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019601_2 "erage.get_error.fragment.client_wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019601, VkglTestCase_019601_1, VkglTestCase_019601_2);

#define VkglTestCase_019602_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019602_2 "coverage.get_error.fragment.delete_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019602, VkglTestCase_019602_1, VkglTestCase_019602_2);
