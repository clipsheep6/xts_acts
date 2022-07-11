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

#define VkglTestCase_003060_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003060_2 "ple_mask.discard_half_per_sample.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003060, VkglTestCase_003060_1, VkglTestCase_003060_2);

#define VkglTestCase_003061_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003061_2 "le_mask.discard_half_per_sample.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003061, VkglTestCase_003061_1, VkglTestCase_003061_2);

#define VkglTestCase_003062_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003062_2 "le_mask.discard_half_per_sample.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003062, VkglTestCase_003062_1, VkglTestCase_003062_2);

#define VkglTestCase_003063_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003063_2 "le_mask.discard_half_per_sample.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003063, VkglTestCase_003063_1, VkglTestCase_003063_2);

#define VkglTestCase_003064_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003064_2 "le_mask.discard_half_per_sample.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003064, VkglTestCase_003064_1, VkglTestCase_003064_2);

#define VkglTestCase_003065_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003065_2 "le_mask.discard_half_per_sample.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003065, VkglTestCase_003065_1, VkglTestCase_003065_2);

#define VkglTestCase_003066_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003066_2 "e_mask.discard_half_per_sample.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003066, VkglTestCase_003066_1, VkglTestCase_003066_2);

#define VkglTestCase_003067_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003067_2 "mple_mask.discard_half_per_sample.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003067, VkglTestCase_003067_1, VkglTestCase_003067_2);

#define VkglTestCase_003068_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003068_2 "mple_mask.discard_half_per_sample.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003068, VkglTestCase_003068_1, VkglTestCase_003068_2);

#define VkglTestCase_003069_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003069_2 "mple_mask.discard_half_per_sample.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003069, VkglTestCase_003069_1, VkglTestCase_003069_2);

#define VkglTestCase_003070_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003070_2 "mple_mask.discard_half_per_sample.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003070, VkglTestCase_003070_1, VkglTestCase_003070_2);

#define VkglTestCase_003071_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003071_2 "mple_mask.discard_half_per_sample.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003071, VkglTestCase_003071_1, VkglTestCase_003071_2);

#define VkglTestCase_003072_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003072_2 "ple_mask.discard_half_per_sample.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003072, VkglTestCase_003072_1, VkglTestCase_003072_2);
