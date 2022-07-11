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

#define VkglTestCase_032719_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032719_2 "bo.msaa.8_samples.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032719, VkglTestCase_032719_1, VkglTestCase_032719_2);

#define VkglTestCase_032720_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032720_2 "msaa.8_samples.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032720, VkglTestCase_032720_1, VkglTestCase_032720_2);

#define VkglTestCase_032721_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032721_2 "o.msaa.8_samples.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032721, VkglTestCase_032721_1, VkglTestCase_032721_2);

#define VkglTestCase_032722_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032722_2 "bo.msaa.8_samples.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032722, VkglTestCase_032722_1, VkglTestCase_032722_2);

#define VkglTestCase_032723_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032723_2 "o.msaa.8_samples.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032723, VkglTestCase_032723_1, VkglTestCase_032723_2);

#define VkglTestCase_032724_1 "dEQP-GLES3.functional."
#define VkglTestCase_032724_2 "fbo.msaa.8_samples.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032724, VkglTestCase_032724_1, VkglTestCase_032724_2);

#define VkglTestCase_032725_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032725_2 "bo.msaa.8_samples.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032725, VkglTestCase_032725_1, VkglTestCase_032725_2);

#define VkglTestCase_032726_1 "dEQP-GLES3.functional."
#define VkglTestCase_032726_2 "fbo.msaa.8_samples.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032726, VkglTestCase_032726_1, VkglTestCase_032726_2);

#define VkglTestCase_032727_1 "dEQP-GLES3.functional"
#define VkglTestCase_032727_2 ".fbo.msaa.8_samples.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032727, VkglTestCase_032727_1, VkglTestCase_032727_2);

#define VkglTestCase_032728_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032728_2 "o.msaa.8_samples.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032728, VkglTestCase_032728_1, VkglTestCase_032728_2);

#define VkglTestCase_032729_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032729_2 "o.msaa.8_samples.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032729, VkglTestCase_032729_1, VkglTestCase_032729_2);

#define VkglTestCase_032730_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032730_2 "saa.8_samples.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032730, VkglTestCase_032730_1, VkglTestCase_032730_2);

#define VkglTestCase_032731_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032731_2 "bo.msaa.8_samples.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032731, VkglTestCase_032731_1, VkglTestCase_032731_2);

#define VkglTestCase_032732_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032732_2 "bo.msaa.8_samples.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032732, VkglTestCase_032732_1, VkglTestCase_032732_2);

#define VkglTestCase_032733_1 "dEQP-GLES3.functional."
#define VkglTestCase_032733_2 "fbo.msaa.8_samples.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032733, VkglTestCase_032733_1, VkglTestCase_032733_2);

#define VkglTestCase_032734_1 "dEQP-GLES3.functional."
#define VkglTestCase_032734_2 "fbo.msaa.8_samples.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032734, VkglTestCase_032734_1, VkglTestCase_032734_2);

#define VkglTestCase_032735_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032735_2 "a.8_samples.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032735, VkglTestCase_032735_1, VkglTestCase_032735_2);

#define VkglTestCase_032736_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032736_2 "a.8_samples.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032736, VkglTestCase_032736_1, VkglTestCase_032736_2);

#define VkglTestCase_032737_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032737_2 "a.8_samples.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032737, VkglTestCase_032737_1, VkglTestCase_032737_2);

#define VkglTestCase_032738_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032738_2 "a.8_samples.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032738, VkglTestCase_032738_1, VkglTestCase_032738_2);

#define VkglTestCase_032739_1 "dEQP-GLES3.functional.fbo.ms"
#define VkglTestCase_032739_2 "aa.8_samples.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032739, VkglTestCase_032739_1, VkglTestCase_032739_2);

#define VkglTestCase_032740_1 "dEQP-GLES3.functional.fbo.m"
#define VkglTestCase_032740_2 "saa.8_samples.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032740, VkglTestCase_032740_1, VkglTestCase_032740_2);
