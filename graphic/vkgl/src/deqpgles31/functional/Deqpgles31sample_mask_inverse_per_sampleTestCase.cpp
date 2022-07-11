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

#define VkglTestCase_003099_1 "dEQP-GLES31.functional.shaders.sample_variables.s"
#define VkglTestCase_003099_2 "ample_mask.inverse_per_sample.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003099, VkglTestCase_003099_1, VkglTestCase_003099_2);

#define VkglTestCase_003100_1 "dEQP-GLES31.functional.shaders.sample_variables.s"
#define VkglTestCase_003100_2 "ample_mask.inverse_per_sample.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003100, VkglTestCase_003100_1, VkglTestCase_003100_2);

#define VkglTestCase_003101_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003101_2 "mple_mask.inverse_per_sample.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003101, VkglTestCase_003101_1, VkglTestCase_003101_2);

#define VkglTestCase_003102_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003102_2 "mple_mask.inverse_per_sample.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003102, VkglTestCase_003102_1, VkglTestCase_003102_2);

#define VkglTestCase_003103_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003103_2 "mple_mask.inverse_per_sample.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003103, VkglTestCase_003103_1, VkglTestCase_003103_2);

#define VkglTestCase_003104_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003104_2 "mple_mask.inverse_per_sample.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003104, VkglTestCase_003104_1, VkglTestCase_003104_2);

#define VkglTestCase_003105_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003105_2 "mple_mask.inverse_per_sample.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003105, VkglTestCase_003105_1, VkglTestCase_003105_2);

#define VkglTestCase_003106_1 "dEQP-GLES31.functional.shaders.sample_variables"
#define VkglTestCase_003106_2 ".sample_mask.inverse_per_sample.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003106, VkglTestCase_003106_1, VkglTestCase_003106_2);

#define VkglTestCase_003107_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_003107_2 "sample_mask.inverse_per_sample.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003107, VkglTestCase_003107_1, VkglTestCase_003107_2);

#define VkglTestCase_003108_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_003108_2 "sample_mask.inverse_per_sample.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003108, VkglTestCase_003108_1, VkglTestCase_003108_2);

#define VkglTestCase_003109_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_003109_2 "sample_mask.inverse_per_sample.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003109, VkglTestCase_003109_1, VkglTestCase_003109_2);

#define VkglTestCase_003110_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_003110_2 "sample_mask.inverse_per_sample.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003110, VkglTestCase_003110_1, VkglTestCase_003110_2);

#define VkglTestCase_003111_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_003111_2 "sample_mask.inverse_per_sample.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003111, VkglTestCase_003111_1, VkglTestCase_003111_2);
