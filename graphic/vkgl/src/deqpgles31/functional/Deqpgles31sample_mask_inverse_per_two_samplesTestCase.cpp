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

#define VkglTestCase_003112_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003112_2 "ple_mask.inverse_per_two_samples.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003112, VkglTestCase_003112_1, VkglTestCase_003112_2);

#define VkglTestCase_003113_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003113_2 "le_mask.inverse_per_two_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003113, VkglTestCase_003113_1, VkglTestCase_003113_2);

#define VkglTestCase_003114_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003114_2 "le_mask.inverse_per_two_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003114, VkglTestCase_003114_1, VkglTestCase_003114_2);

#define VkglTestCase_003115_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003115_2 "le_mask.inverse_per_two_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003115, VkglTestCase_003115_1, VkglTestCase_003115_2);

#define VkglTestCase_003116_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003116_2 "le_mask.inverse_per_two_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003116, VkglTestCase_003116_1, VkglTestCase_003116_2);

#define VkglTestCase_003117_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003117_2 "le_mask.inverse_per_two_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003117, VkglTestCase_003117_1, VkglTestCase_003117_2);

#define VkglTestCase_003118_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003118_2 "e_mask.inverse_per_two_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003118, VkglTestCase_003118_1, VkglTestCase_003118_2);

#define VkglTestCase_003119_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003119_2 "mple_mask.inverse_per_two_samples.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003119, VkglTestCase_003119_1, VkglTestCase_003119_2);

#define VkglTestCase_003120_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003120_2 "mple_mask.inverse_per_two_samples.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003120, VkglTestCase_003120_1, VkglTestCase_003120_2);

#define VkglTestCase_003121_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003121_2 "mple_mask.inverse_per_two_samples.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003121, VkglTestCase_003121_1, VkglTestCase_003121_2);

#define VkglTestCase_003122_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003122_2 "mple_mask.inverse_per_two_samples.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003122, VkglTestCase_003122_1, VkglTestCase_003122_2);

#define VkglTestCase_003123_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003123_2 "mple_mask.inverse_per_two_samples.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003123, VkglTestCase_003123_1, VkglTestCase_003123_2);

#define VkglTestCase_003124_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003124_2 "ple_mask.inverse_per_two_samples.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003124, VkglTestCase_003124_1, VkglTestCase_003124_2);
