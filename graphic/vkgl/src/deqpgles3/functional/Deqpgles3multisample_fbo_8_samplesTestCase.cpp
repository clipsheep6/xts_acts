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

#define VkglTestCase_042258_1 "dEQP-GLES3.functional.multisample"
#define VkglTestCase_042258_2 ".fbo_8_samples.num_samples_polygon"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042258, VkglTestCase_042258_1, VkglTestCase_042258_2);

#define VkglTestCase_042259_1 "dEQP-GLES3.functional.multisampl"
#define VkglTestCase_042259_2 "e.fbo_8_samples.num_samples_line"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042259, VkglTestCase_042259_1, VkglTestCase_042259_2);

#define VkglTestCase_042260_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042260_2 "bo_8_samples.common_edge_small_quads"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042260, VkglTestCase_042260_1, VkglTestCase_042260_2);

#define VkglTestCase_042261_1 "dEQP-GLES3.functional.multisample."
#define VkglTestCase_042261_2 "fbo_8_samples.common_edge_big_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042261, VkglTestCase_042261_1, VkglTestCase_042261_2);

#define VkglTestCase_042262_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042262_2 "o_8_samples.common_edge_viewport_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042262, VkglTestCase_042262_1, VkglTestCase_042262_2);

#define VkglTestCase_042263_1 "dEQP-GLES3.functional.mult"
#define VkglTestCase_042263_2 "isample.fbo_8_samples.depth"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042263, VkglTestCase_042263_1, VkglTestCase_042263_2);

#define VkglTestCase_042264_1 "dEQP-GLES3.functional.multi"
#define VkglTestCase_042264_2 "sample.fbo_8_samples.stencil"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042264, VkglTestCase_042264_1, VkglTestCase_042264_2);

#define VkglTestCase_042265_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042265_2 "bo_8_samples.sample_coverage_invert"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042265, VkglTestCase_042265_1, VkglTestCase_042265_2);

#define VkglTestCase_042266_1 "dEQP-GLES3.functional.multisample.fbo_8_"
#define VkglTestCase_042266_2 "samples.proportionality_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042266, VkglTestCase_042266_1, VkglTestCase_042266_2);

#define VkglTestCase_042267_1 "dEQP-GLES3.functional.multisample.fbo_8"
#define VkglTestCase_042267_2 "_samples.proportionality_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042267, VkglTestCase_042267_1, VkglTestCase_042267_2);

#define VkglTestCase_042268_1 "dEQP-GLES3.functional.multisample.fbo_8_samp"
#define VkglTestCase_042268_2 "les.proportionality_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042268, VkglTestCase_042268_1, VkglTestCase_042268_2);

#define VkglTestCase_042269_1 "dEQP-GLES3.functional.multisample.fbo"
#define VkglTestCase_042269_2 "_8_samples.constancy_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042269, VkglTestCase_042269_1, VkglTestCase_042269_2);

#define VkglTestCase_042270_1 "dEQP-GLES3.functional.multisample.fb"
#define VkglTestCase_042270_2 "o_8_samples.constancy_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042270, VkglTestCase_042270_1, VkglTestCase_042270_2);

#define VkglTestCase_042271_1 "dEQP-GLES3.functional.multisample.fbo_8_s"
#define VkglTestCase_042271_2 "amples.constancy_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042271, VkglTestCase_042271_1, VkglTestCase_042271_2);

#define VkglTestCase_042272_1 "dEQP-GLES3.functional.multisamp"
#define VkglTestCase_042272_2 "le.fbo_8_samples.constancy_both"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042272, VkglTestCase_042272_1, VkglTestCase_042272_2);

#define VkglTestCase_042273_1 "dEQP-GLES3.functional.multisample.f"
#define VkglTestCase_042273_2 "bo_8_samples.constancy_both_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042273, VkglTestCase_042273_1, VkglTestCase_042273_2);
