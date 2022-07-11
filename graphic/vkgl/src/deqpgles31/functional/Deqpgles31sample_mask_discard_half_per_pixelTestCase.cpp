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

#define VkglTestCase_003047_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003047_2 "ple_mask.discard_half_per_pixel.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003047, VkglTestCase_003047_1, VkglTestCase_003047_2);

#define VkglTestCase_003048_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003048_2 "ple_mask.discard_half_per_pixel.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003048, VkglTestCase_003048_1, VkglTestCase_003048_2);

#define VkglTestCase_003049_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003049_2 "le_mask.discard_half_per_pixel.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003049, VkglTestCase_003049_1, VkglTestCase_003049_2);

#define VkglTestCase_003050_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003050_2 "le_mask.discard_half_per_pixel.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003050, VkglTestCase_003050_1, VkglTestCase_003050_2);

#define VkglTestCase_003051_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003051_2 "le_mask.discard_half_per_pixel.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003051, VkglTestCase_003051_1, VkglTestCase_003051_2);

#define VkglTestCase_003052_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003052_2 "le_mask.discard_half_per_pixel.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003052, VkglTestCase_003052_1, VkglTestCase_003052_2);

#define VkglTestCase_003053_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003053_2 "le_mask.discard_half_per_pixel.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003053, VkglTestCase_003053_1, VkglTestCase_003053_2);

#define VkglTestCase_003054_1 "dEQP-GLES31.functional.shaders.sample_variables.s"
#define VkglTestCase_003054_2 "ample_mask.discard_half_per_pixel.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003054, VkglTestCase_003054_1, VkglTestCase_003054_2);

#define VkglTestCase_003055_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003055_2 "mple_mask.discard_half_per_pixel.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003055, VkglTestCase_003055_1, VkglTestCase_003055_2);

#define VkglTestCase_003056_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003056_2 "mple_mask.discard_half_per_pixel.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003056, VkglTestCase_003056_1, VkglTestCase_003056_2);

#define VkglTestCase_003057_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003057_2 "mple_mask.discard_half_per_pixel.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003057, VkglTestCase_003057_1, VkglTestCase_003057_2);

#define VkglTestCase_003058_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003058_2 "mple_mask.discard_half_per_pixel.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003058, VkglTestCase_003058_1, VkglTestCase_003058_2);

#define VkglTestCase_003059_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003059_2 "mple_mask.discard_half_per_pixel.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003059, VkglTestCase_003059_1, VkglTestCase_003059_2);
