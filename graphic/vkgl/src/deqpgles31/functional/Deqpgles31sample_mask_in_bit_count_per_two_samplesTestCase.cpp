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

#define VkglTestCase_003022_1 "dEQP-GLES31.functional.shaders.sample_variables.sample"
#define VkglTestCase_003022_2 "_mask_in.bit_count_per_two_samples.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003022, VkglTestCase_003022_1, VkglTestCase_003022_2);

#define VkglTestCase_003023_1 "dEQP-GLES31.functional.shaders.sample_variables.sample"
#define VkglTestCase_003023_2 "_mask_in.bit_count_per_two_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003023, VkglTestCase_003023_1, VkglTestCase_003023_2);

#define VkglTestCase_003024_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003024_2 "mask_in.bit_count_per_two_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003024, VkglTestCase_003024_1, VkglTestCase_003024_2);

#define VkglTestCase_003025_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003025_2 "mask_in.bit_count_per_two_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003025, VkglTestCase_003025_1, VkglTestCase_003025_2);

#define VkglTestCase_003026_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003026_2 "mask_in.bit_count_per_two_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003026, VkglTestCase_003026_1, VkglTestCase_003026_2);

#define VkglTestCase_003027_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003027_2 "mask_in.bit_count_per_two_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003027, VkglTestCase_003027_1, VkglTestCase_003027_2);

#define VkglTestCase_003028_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003028_2 "mask_in.bit_count_per_two_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003028, VkglTestCase_003028_1, VkglTestCase_003028_2);

#define VkglTestCase_003029_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003029_2 "le_mask_in.bit_count_per_two_samples.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003029, VkglTestCase_003029_1, VkglTestCase_003029_2);

#define VkglTestCase_003030_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003030_2 "e_mask_in.bit_count_per_two_samples.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003030, VkglTestCase_003030_1, VkglTestCase_003030_2);

#define VkglTestCase_003031_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003031_2 "e_mask_in.bit_count_per_two_samples.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003031, VkglTestCase_003031_1, VkglTestCase_003031_2);

#define VkglTestCase_003032_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003032_2 "e_mask_in.bit_count_per_two_samples.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003032, VkglTestCase_003032_1, VkglTestCase_003032_2);

#define VkglTestCase_003033_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003033_2 "e_mask_in.bit_count_per_two_samples.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003033, VkglTestCase_003033_1, VkglTestCase_003033_2);

#define VkglTestCase_003034_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003034_2 "e_mask_in.bit_count_per_two_samples.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003034, VkglTestCase_003034_1, VkglTestCase_003034_2);
