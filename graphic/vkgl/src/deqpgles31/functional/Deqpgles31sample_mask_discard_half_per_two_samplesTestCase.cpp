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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003073_1 "dEQP-GLES31.functional.shaders.sample_variables.sample"
#define VkglTestCase_003073_2 "_mask.discard_half_per_two_samples.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003073, VkglTestCase_003073_1, VkglTestCase_003073_2);

#define VkglTestCase_003074_1 "dEQP-GLES31.functional.shaders.sample_variables.sample"
#define VkglTestCase_003074_2 "_mask.discard_half_per_two_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003074, VkglTestCase_003074_1, VkglTestCase_003074_2);

#define VkglTestCase_003075_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003075_2 "mask.discard_half_per_two_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003075, VkglTestCase_003075_1, VkglTestCase_003075_2);

#define VkglTestCase_003076_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003076_2 "mask.discard_half_per_two_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003076, VkglTestCase_003076_1, VkglTestCase_003076_2);

#define VkglTestCase_003077_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003077_2 "mask.discard_half_per_two_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003077, VkglTestCase_003077_1, VkglTestCase_003077_2);

#define VkglTestCase_003078_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003078_2 "mask.discard_half_per_two_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003078, VkglTestCase_003078_1, VkglTestCase_003078_2);

#define VkglTestCase_003079_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003079_2 "mask.discard_half_per_two_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003079, VkglTestCase_003079_1, VkglTestCase_003079_2);

#define VkglTestCase_003080_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003080_2 "le_mask.discard_half_per_two_samples.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003080, VkglTestCase_003080_1, VkglTestCase_003080_2);

#define VkglTestCase_003081_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003081_2 "e_mask.discard_half_per_two_samples.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003081, VkglTestCase_003081_1, VkglTestCase_003081_2);

#define VkglTestCase_003082_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003082_2 "e_mask.discard_half_per_two_samples.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003082, VkglTestCase_003082_1, VkglTestCase_003082_2);

#define VkglTestCase_003083_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003083_2 "e_mask.discard_half_per_two_samples.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003083, VkglTestCase_003083_1, VkglTestCase_003083_2);

#define VkglTestCase_003084_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003084_2 "e_mask.discard_half_per_two_samples.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003084, VkglTestCase_003084_1, VkglTestCase_003084_2);

#define VkglTestCase_003085_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003085_2 "e_mask.discard_half_per_two_samples.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003085, VkglTestCase_003085_1, VkglTestCase_003085_2);
