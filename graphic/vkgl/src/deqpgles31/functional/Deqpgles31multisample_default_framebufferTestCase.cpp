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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016165_1 "dEQP-GLES31.functional.multisample."
#define VkglTestCase_016165_2 "default_framebuffer.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016165, VkglTestCase_016165_1, VkglTestCase_016165_2);

#define VkglTestCase_016166_1 "dEQP-GLES31.functional.multisample.defaul"
#define VkglTestCase_016166_2 "t_framebuffer.sample_mask_sum_of_inverses"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016166, VkglTestCase_016166_1, VkglTestCase_016166_2);

#define VkglTestCase_016167_1 "dEQP-GLES31.functional.multisample.defaul"
#define VkglTestCase_016167_2 "t_framebuffer.proportionality_sample_mask"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016167, VkglTestCase_016167_1, VkglTestCase_016167_2);

#define VkglTestCase_016168_1 "dEQP-GLES31.functional.multisample.def"
#define VkglTestCase_016168_2 "ault_framebuffer.constancy_sample_mask"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016168, VkglTestCase_016168_1, VkglTestCase_016168_2);

#define VkglTestCase_016169_1 "dEQP-GLES31.functional.multisample.default_fram"
#define VkglTestCase_016169_2 "ebuffer.constancy_alpha_to_coverage_sample_mask"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016169, VkglTestCase_016169_1, VkglTestCase_016169_2);

#define VkglTestCase_016170_1 "dEQP-GLES31.functional.multisample.default_fra"
#define VkglTestCase_016170_2 "mebuffer.constancy_sample_coverage_sample_mask"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016170, VkglTestCase_016170_1, VkglTestCase_016170_2);

#define VkglTestCase_016171_1 "dEQP-GLES31.functional.multisample.default_framebuffer."
#define VkglTestCase_016171_2 "constancy_alpha_to_coverage_sample_coverage_sample_mask"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016171, VkglTestCase_016171_1, VkglTestCase_016171_2);

#define VkglTestCase_016172_1 "dEQP-GLES31.functional.multisample.default"
#define VkglTestCase_016172_2 "_framebuffer.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016172, VkglTestCase_016172_1, VkglTestCase_016172_2);
