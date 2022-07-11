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

#define VkglTestCase_019079_1 "dEQP-GLES31.functional.debug.nega"
#define VkglTestCase_019079_2 "tive_coverage.log.fragment.scissor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019079, VkglTestCase_019079_1, VkglTestCase_019079_2);

#define VkglTestCase_019080_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019080_2 "ve_coverage.log.fragment.depth_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019080, VkglTestCase_019080_1, VkglTestCase_019080_2);

#define VkglTestCase_019081_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019081_2 "ive_coverage.log.fragment.viewport"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019081, VkglTestCase_019081_1, VkglTestCase_019081_2);

#define VkglTestCase_019082_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019082_2 "e_coverage.log.fragment.stencil_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019082, VkglTestCase_019082_1, VkglTestCase_019082_2);

#define VkglTestCase_019083_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019083_2 "verage.log.fragment.stencil_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019083, VkglTestCase_019083_1, VkglTestCase_019083_2);

#define VkglTestCase_019084_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019084_2 "ve_coverage.log.fragment.stencil_op"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019084, VkglTestCase_019084_1, VkglTestCase_019084_2);

#define VkglTestCase_019085_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019085_2 "overage.log.fragment.stencil_op_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019085, VkglTestCase_019085_1, VkglTestCase_019085_2);

#define VkglTestCase_019086_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019086_2 "verage.log.fragment.stencil_mask_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019086, VkglTestCase_019086_1, VkglTestCase_019086_2);

#define VkglTestCase_019087_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019087_2 "_coverage.log.fragment.blend_equation"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019087, VkglTestCase_019087_1, VkglTestCase_019087_2);

#define VkglTestCase_019088_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019088_2 "_coverage.log.fragment.blend_equationi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019088, VkglTestCase_019088_1, VkglTestCase_019088_2);

#define VkglTestCase_019089_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019089_2 "erage.log.fragment.blend_equation_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019089, VkglTestCase_019089_1, VkglTestCase_019089_2);

#define VkglTestCase_019090_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019090_2 "rage.log.fragment.blend_equation_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019090, VkglTestCase_019090_1, VkglTestCase_019090_2);

#define VkglTestCase_019091_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019091_2 "ve_coverage.log.fragment.blend_func"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019091, VkglTestCase_019091_1, VkglTestCase_019091_2);

#define VkglTestCase_019092_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019092_2 "ve_coverage.log.fragment.blend_funci"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019092, VkglTestCase_019092_1, VkglTestCase_019092_2);

#define VkglTestCase_019093_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019093_2 "overage.log.fragment.blend_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019093, VkglTestCase_019093_1, VkglTestCase_019093_2);

#define VkglTestCase_019094_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019094_2 "verage.log.fragment.blend_func_separatei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019094, VkglTestCase_019094_1, VkglTestCase_019094_2);

#define VkglTestCase_019095_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019095_2 "ive_coverage.log.fragment.cull_face"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019095, VkglTestCase_019095_1, VkglTestCase_019095_2);

#define VkglTestCase_019096_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019096_2 "ve_coverage.log.fragment.front_face"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019096, VkglTestCase_019096_1, VkglTestCase_019096_2);

#define VkglTestCase_019097_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019097_2 "ve_coverage.log.fragment.line_width"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019097, VkglTestCase_019097_1, VkglTestCase_019097_2);

#define VkglTestCase_019098_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019098_2 "ve_coverage.log.fragment.gen_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019098, VkglTestCase_019098_1, VkglTestCase_019098_2);

#define VkglTestCase_019099_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019099_2 "ve_coverage.log.fragment.begin_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019099, VkglTestCase_019099_1, VkglTestCase_019099_2);

#define VkglTestCase_019100_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019100_2 "ive_coverage.log.fragment.end_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019100, VkglTestCase_019100_1, VkglTestCase_019100_2);

#define VkglTestCase_019101_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019101_2 "_coverage.log.fragment.delete_queries"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019101, VkglTestCase_019101_1, VkglTestCase_019101_2);

#define VkglTestCase_019102_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019102_2 "ve_coverage.log.fragment.fence_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019102, VkglTestCase_019102_1, VkglTestCase_019102_2);

#define VkglTestCase_019103_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019103_2 "ive_coverage.log.fragment.wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019103, VkglTestCase_019103_1, VkglTestCase_019103_2);

#define VkglTestCase_019104_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019104_2 "coverage.log.fragment.client_wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019104, VkglTestCase_019104_1, VkglTestCase_019104_2);

#define VkglTestCase_019105_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019105_2 "ve_coverage.log.fragment.delete_sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019105, VkglTestCase_019105_1, VkglTestCase_019105_2);
