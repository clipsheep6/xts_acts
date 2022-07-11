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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042274_1 "dEQP-GLES3.functional.multisample."
#define VkglTestCase_042274_2 "fbo_max_samples.num_samples_polygon"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042274, VkglTestCase_042274_1, VkglTestCase_042274_2);

#define VkglTestCase_042275_1 "dEQP-GLES3.functional.multisample"
#define VkglTestCase_042275_2 ".fbo_max_samples.num_samples_line"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042275, VkglTestCase_042275_1, VkglTestCase_042275_2);

#define VkglTestCase_042276_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042276_2 "o_max_samples.common_edge_small_quads"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042276, VkglTestCase_042276_1, VkglTestCase_042276_2);

#define VkglTestCase_042277_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042277_2 "bo_max_samples.common_edge_big_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042277, VkglTestCase_042277_1, VkglTestCase_042277_2);

#define VkglTestCase_042278_1 "dEQP-GLES3.functional.multisample.fbo"
#define VkglTestCase_042278_2 "_max_samples.common_edge_viewport_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042278, VkglTestCase_042278_1, VkglTestCase_042278_2);

#define VkglTestCase_042279_1 "dEQP-GLES3.functional.multi"
#define VkglTestCase_042279_2 "sample.fbo_max_samples.depth"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042279, VkglTestCase_042279_1, VkglTestCase_042279_2);

#define VkglTestCase_042280_1 "dEQP-GLES3.functional.multis"
#define VkglTestCase_042280_2 "ample.fbo_max_samples.stencil"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042280, VkglTestCase_042280_1, VkglTestCase_042280_2);

#define VkglTestCase_042281_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042281_2 "o_max_samples.sample_coverage_invert"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042281, VkglTestCase_042281_1, VkglTestCase_042281_2);

#define VkglTestCase_042282_1 "dEQP-GLES3.functional.multisample.fbo_max"
#define VkglTestCase_042282_2 "_samples.proportionality_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042282, VkglTestCase_042282_1, VkglTestCase_042282_2);

#define VkglTestCase_042283_1 "dEQP-GLES3.functional.multisample.fbo_ma"
#define VkglTestCase_042283_2 "x_samples.proportionality_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042283, VkglTestCase_042283_1, VkglTestCase_042283_2);

#define VkglTestCase_042284_1 "dEQP-GLES3.functional.multisample.fbo_max_sam"
#define VkglTestCase_042284_2 "ples.proportionality_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042284, VkglTestCase_042284_1, VkglTestCase_042284_2);

#define VkglTestCase_042285_1 "dEQP-GLES3.functional.multisample.fbo_"
#define VkglTestCase_042285_2 "max_samples.constancy_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042285, VkglTestCase_042285_1, VkglTestCase_042285_2);

#define VkglTestCase_042286_1 "dEQP-GLES3.functional.multisample.fbo"
#define VkglTestCase_042286_2 "_max_samples.constancy_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042286, VkglTestCase_042286_1, VkglTestCase_042286_2);

#define VkglTestCase_042287_1 "dEQP-GLES3.functional.multisample.fbo_max_"
#define VkglTestCase_042287_2 "samples.constancy_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042287, VkglTestCase_042287_1, VkglTestCase_042287_2);

#define VkglTestCase_042288_1 "dEQP-GLES3.functional.multisampl"
#define VkglTestCase_042288_2 "e.fbo_max_samples.constancy_both"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042288, VkglTestCase_042288_1, VkglTestCase_042288_2);

#define VkglTestCase_042289_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042289_2 "o_max_samples.constancy_both_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042289, VkglTestCase_042289_1, VkglTestCase_042289_2);
