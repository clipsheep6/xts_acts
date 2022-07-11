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

#define VkglTestCase_042242_1 "dEQP-GLES3.functional.multisample"
#define VkglTestCase_042242_2 ".fbo_4_samples.num_samples_polygon"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042242, VkglTestCase_042242_1, VkglTestCase_042242_2);

#define VkglTestCase_042243_1 "dEQP-GLES3.functional.multisampl"
#define VkglTestCase_042243_2 "e.fbo_4_samples.num_samples_line"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042243, VkglTestCase_042243_1, VkglTestCase_042243_2);

#define VkglTestCase_042244_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042244_2 "bo_4_samples.common_edge_small_quads"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042244, VkglTestCase_042244_1, VkglTestCase_042244_2);

#define VkglTestCase_042245_1 "dEQP-GLES3.functional.multisample."
#define VkglTestCase_042245_2 "fbo_4_samples.common_edge_big_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042245, VkglTestCase_042245_1, VkglTestCase_042245_2);

#define VkglTestCase_042246_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042246_2 "o_4_samples.common_edge_viewport_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042246, VkglTestCase_042246_1, VkglTestCase_042246_2);

#define VkglTestCase_042247_1 "dEQP-GLES3.functional.mult"
#define VkglTestCase_042247_2 "isample.fbo_4_samples.depth"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042247, VkglTestCase_042247_1, VkglTestCase_042247_2);

#define VkglTestCase_042248_1 "dEQP-GLES3.functional.multi"
#define VkglTestCase_042248_2 "sample.fbo_4_samples.stencil"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042248, VkglTestCase_042248_1, VkglTestCase_042248_2);

#define VkglTestCase_042249_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042249_2 "bo_4_samples.sample_coverage_invert"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042249, VkglTestCase_042249_1, VkglTestCase_042249_2);

#define VkglTestCase_042250_1 "dEQP-GLES3.functional.multisample.fbo_4_"
#define VkglTestCase_042250_2 "samples.proportionality_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042250, VkglTestCase_042250_1, VkglTestCase_042250_2);

#define VkglTestCase_042251_1 "dEQP-GLES3.functional.multisample.fbo_4"
#define VkglTestCase_042251_2 "_samples.proportionality_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042251, VkglTestCase_042251_1, VkglTestCase_042251_2);

#define VkglTestCase_042252_1 "dEQP-GLES3.functional.multisample.fbo_4_samp"
#define VkglTestCase_042252_2 "les.proportionality_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042252, VkglTestCase_042252_1, VkglTestCase_042252_2);

#define VkglTestCase_042253_1 "dEQP-GLES3.functional.multisample.fbo"
#define VkglTestCase_042253_2 "_4_samples.constancy_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042253, VkglTestCase_042253_1, VkglTestCase_042253_2);

#define VkglTestCase_042254_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042254_2 "o_4_samples.constancy_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042254, VkglTestCase_042254_1, VkglTestCase_042254_2);

#define VkglTestCase_042255_1 "dEQP-GLES3.functional.multisample.fbo_4_s"
#define VkglTestCase_042255_2 "amples.constancy_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042255, VkglTestCase_042255_1, VkglTestCase_042255_2);

#define VkglTestCase_042256_1 "dEQP-GLES3.functional.multisamp"
#define VkglTestCase_042256_2 "le.fbo_4_samples.constancy_both"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042256, VkglTestCase_042256_1, VkglTestCase_042256_2);

#define VkglTestCase_042257_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042257_2 "bo_4_samples.constancy_both_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042257, VkglTestCase_042257_1, VkglTestCase_042257_2);
