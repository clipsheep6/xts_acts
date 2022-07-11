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

#define VkglTestCase_042226_1 "dEQP-GLES3.functional.multisample.de"
#define VkglTestCase_042226_2 "fault_framebuffer.num_samples_polygon"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042226, VkglTestCase_042226_1, VkglTestCase_042226_2);

#define VkglTestCase_042227_1 "dEQP-GLES3.functional.multisample.d"
#define VkglTestCase_042227_2 "efault_framebuffer.num_samples_line"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042227, VkglTestCase_042227_1, VkglTestCase_042227_2);

#define VkglTestCase_042228_1 "dEQP-GLES3.functional.multisample.defa"
#define VkglTestCase_042228_2 "ult_framebuffer.common_edge_small_quads"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042228, VkglTestCase_042228_1, VkglTestCase_042228_2);

#define VkglTestCase_042229_1 "dEQP-GLES3.functional.multisample.def"
#define VkglTestCase_042229_2 "ault_framebuffer.common_edge_big_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042229, VkglTestCase_042229_1, VkglTestCase_042229_2);

#define VkglTestCase_042230_1 "dEQP-GLES3.functional.multisample.defau"
#define VkglTestCase_042230_2 "lt_framebuffer.common_edge_viewport_quad"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042230, VkglTestCase_042230_1, VkglTestCase_042230_2);

#define VkglTestCase_042231_1 "dEQP-GLES3.functional.multisa"
#define VkglTestCase_042231_2 "mple.default_framebuffer.depth"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042231, VkglTestCase_042231_1, VkglTestCase_042231_2);

#define VkglTestCase_042232_1 "dEQP-GLES3.functional.multisam"
#define VkglTestCase_042232_2 "ple.default_framebuffer.stencil"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042232, VkglTestCase_042232_1, VkglTestCase_042232_2);

#define VkglTestCase_042233_1 "dEQP-GLES3.functional.multisample.defa"
#define VkglTestCase_042233_2 "ult_framebuffer.sample_coverage_invert"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042233, VkglTestCase_042233_1, VkglTestCase_042233_2);

#define VkglTestCase_042234_1 "dEQP-GLES3.functional.multisample.default_f"
#define VkglTestCase_042234_2 "ramebuffer.proportionality_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042234, VkglTestCase_042234_1, VkglTestCase_042234_2);

#define VkglTestCase_042235_1 "dEQP-GLES3.functional.multisample.default_"
#define VkglTestCase_042235_2 "framebuffer.proportionality_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042235, VkglTestCase_042235_1, VkglTestCase_042235_2);

#define VkglTestCase_042236_1 "dEQP-GLES3.functional.multisample.default_frame"
#define VkglTestCase_042236_2 "buffer.proportionality_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042236, VkglTestCase_042236_1, VkglTestCase_042236_2);

#define VkglTestCase_042237_1 "dEQP-GLES3.functional.multisample.defaul"
#define VkglTestCase_042237_2 "t_framebuffer.constancy_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042237, VkglTestCase_042237_1, VkglTestCase_042237_2);

#define VkglTestCase_042238_1 "dEQP-GLES3.functional.multisample.defau"
#define VkglTestCase_042238_2 "lt_framebuffer.constancy_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042238, VkglTestCase_042238_1, VkglTestCase_042238_2);

#define VkglTestCase_042239_1 "dEQP-GLES3.functional.multisample.default_fr"
#define VkglTestCase_042239_2 "amebuffer.constancy_sample_coverage_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042239, VkglTestCase_042239_1, VkglTestCase_042239_2);

#define VkglTestCase_042240_1 "dEQP-GLES3.functional.multisample."
#define VkglTestCase_042240_2 "default_framebuffer.constancy_both"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042240, VkglTestCase_042240_1, VkglTestCase_042240_2);

#define VkglTestCase_042241_1 "dEQP-GLES3.functional.multisample.defa"
#define VkglTestCase_042241_2 "ult_framebuffer.constancy_both_inverted"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042241, VkglTestCase_042241_1, VkglTestCase_042241_2);
