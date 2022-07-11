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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032675_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032675_2 "bo.msaa.2_samples.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032675, VkglTestCase_032675_1, VkglTestCase_032675_2);

#define VkglTestCase_032676_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032676_2 "msaa.2_samples.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032676, VkglTestCase_032676_1, VkglTestCase_032676_2);

#define VkglTestCase_032677_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032677_2 "o.msaa.2_samples.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032677, VkglTestCase_032677_1, VkglTestCase_032677_2);

#define VkglTestCase_032678_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032678_2 "bo.msaa.2_samples.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032678, VkglTestCase_032678_1, VkglTestCase_032678_2);

#define VkglTestCase_032679_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032679_2 "o.msaa.2_samples.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032679, VkglTestCase_032679_1, VkglTestCase_032679_2);

#define VkglTestCase_032680_1 "dEQP-GLES3.functional."
#define VkglTestCase_032680_2 "fbo.msaa.2_samples.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032680, VkglTestCase_032680_1, VkglTestCase_032680_2);

#define VkglTestCase_032681_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032681_2 "bo.msaa.2_samples.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032681, VkglTestCase_032681_1, VkglTestCase_032681_2);

#define VkglTestCase_032682_1 "dEQP-GLES3.functional."
#define VkglTestCase_032682_2 "fbo.msaa.2_samples.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032682, VkglTestCase_032682_1, VkglTestCase_032682_2);

#define VkglTestCase_032683_1 "dEQP-GLES3.functional"
#define VkglTestCase_032683_2 ".fbo.msaa.2_samples.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032683, VkglTestCase_032683_1, VkglTestCase_032683_2);

#define VkglTestCase_032684_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032684_2 "o.msaa.2_samples.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032684, VkglTestCase_032684_1, VkglTestCase_032684_2);

#define VkglTestCase_032685_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032685_2 "o.msaa.2_samples.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032685, VkglTestCase_032685_1, VkglTestCase_032685_2);

#define VkglTestCase_032686_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032686_2 "saa.2_samples.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032686, VkglTestCase_032686_1, VkglTestCase_032686_2);

#define VkglTestCase_032687_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032687_2 "bo.msaa.2_samples.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032687, VkglTestCase_032687_1, VkglTestCase_032687_2);

#define VkglTestCase_032688_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032688_2 "bo.msaa.2_samples.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032688, VkglTestCase_032688_1, VkglTestCase_032688_2);

#define VkglTestCase_032689_1 "dEQP-GLES3.functional."
#define VkglTestCase_032689_2 "fbo.msaa.2_samples.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032689, VkglTestCase_032689_1, VkglTestCase_032689_2);

#define VkglTestCase_032690_1 "dEQP-GLES3.functional."
#define VkglTestCase_032690_2 "fbo.msaa.2_samples.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032690, VkglTestCase_032690_1, VkglTestCase_032690_2);

#define VkglTestCase_032691_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032691_2 "a.2_samples.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032691, VkglTestCase_032691_1, VkglTestCase_032691_2);

#define VkglTestCase_032692_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032692_2 "a.2_samples.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032692, VkglTestCase_032692_1, VkglTestCase_032692_2);

#define VkglTestCase_032693_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032693_2 "a.2_samples.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032693, VkglTestCase_032693_1, VkglTestCase_032693_2);

#define VkglTestCase_032694_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032694_2 "a.2_samples.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032694, VkglTestCase_032694_1, VkglTestCase_032694_2);

#define VkglTestCase_032695_1 "dEQP-GLES3.functional.fbo.ms"
#define VkglTestCase_032695_2 "aa.2_samples.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032695, VkglTestCase_032695_1, VkglTestCase_032695_2);

#define VkglTestCase_032696_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032696_2 "saa.2_samples.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032696, VkglTestCase_032696_1, VkglTestCase_032696_2);
