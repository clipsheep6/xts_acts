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

#define VkglTestCase_032697_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032697_2 "bo.msaa.4_samples.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032697, VkglTestCase_032697_1, VkglTestCase_032697_2);

#define VkglTestCase_032698_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032698_2 "msaa.4_samples.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032698, VkglTestCase_032698_1, VkglTestCase_032698_2);

#define VkglTestCase_032699_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032699_2 "o.msaa.4_samples.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032699, VkglTestCase_032699_1, VkglTestCase_032699_2);

#define VkglTestCase_032700_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032700_2 "bo.msaa.4_samples.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032700, VkglTestCase_032700_1, VkglTestCase_032700_2);

#define VkglTestCase_032701_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032701_2 "o.msaa.4_samples.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032701, VkglTestCase_032701_1, VkglTestCase_032701_2);

#define VkglTestCase_032702_1 "dEQP-GLES3.functional."
#define VkglTestCase_032702_2 "fbo.msaa.4_samples.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032702, VkglTestCase_032702_1, VkglTestCase_032702_2);

#define VkglTestCase_032703_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032703_2 "bo.msaa.4_samples.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032703, VkglTestCase_032703_1, VkglTestCase_032703_2);

#define VkglTestCase_032704_1 "dEQP-GLES3.functional."
#define VkglTestCase_032704_2 "fbo.msaa.4_samples.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032704, VkglTestCase_032704_1, VkglTestCase_032704_2);

#define VkglTestCase_032705_1 "dEQP-GLES3.functional"
#define VkglTestCase_032705_2 ".fbo.msaa.4_samples.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032705, VkglTestCase_032705_1, VkglTestCase_032705_2);

#define VkglTestCase_032706_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032706_2 "o.msaa.4_samples.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032706, VkglTestCase_032706_1, VkglTestCase_032706_2);

#define VkglTestCase_032707_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032707_2 "o.msaa.4_samples.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032707, VkglTestCase_032707_1, VkglTestCase_032707_2);

#define VkglTestCase_032708_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032708_2 "saa.4_samples.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032708, VkglTestCase_032708_1, VkglTestCase_032708_2);

#define VkglTestCase_032709_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032709_2 "bo.msaa.4_samples.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032709, VkglTestCase_032709_1, VkglTestCase_032709_2);

#define VkglTestCase_032710_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032710_2 "bo.msaa.4_samples.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032710, VkglTestCase_032710_1, VkglTestCase_032710_2);

#define VkglTestCase_032711_1 "dEQP-GLES3.functional."
#define VkglTestCase_032711_2 "fbo.msaa.4_samples.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032711, VkglTestCase_032711_1, VkglTestCase_032711_2);

#define VkglTestCase_032712_1 "dEQP-GLES3.functional."
#define VkglTestCase_032712_2 "fbo.msaa.4_samples.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032712, VkglTestCase_032712_1, VkglTestCase_032712_2);

#define VkglTestCase_032713_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032713_2 "a.4_samples.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032713, VkglTestCase_032713_1, VkglTestCase_032713_2);

#define VkglTestCase_032714_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032714_2 "a.4_samples.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032714, VkglTestCase_032714_1, VkglTestCase_032714_2);

#define VkglTestCase_032715_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032715_2 "a.4_samples.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032715, VkglTestCase_032715_1, VkglTestCase_032715_2);

#define VkglTestCase_032716_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032716_2 "a.4_samples.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032716, VkglTestCase_032716_1, VkglTestCase_032716_2);

#define VkglTestCase_032717_1 "dEQP-GLES3.functional.fbo.ms"
#define VkglTestCase_032717_2 "aa.4_samples.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032717, VkglTestCase_032717_1, VkglTestCase_032717_2);

#define VkglTestCase_032718_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032718_2 "saa.4_samples.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032718, VkglTestCase_032718_1, VkglTestCase_032718_2);
