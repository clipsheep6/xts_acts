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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002931_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002931_2 "ariables.max_samples.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002931, VkglTestCase_002931_1, VkglTestCase_002931_2);

#define VkglTestCase_002932_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002932_2 "riables.max_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002932, VkglTestCase_002932_1, VkglTestCase_002932_2);

#define VkglTestCase_002933_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002933_2 "riables.max_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002933, VkglTestCase_002933_1, VkglTestCase_002933_2);

#define VkglTestCase_002934_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002934_2 "riables.max_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002934, VkglTestCase_002934_1, VkglTestCase_002934_2);

#define VkglTestCase_002935_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002935_2 "riables.max_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002935, VkglTestCase_002935_1, VkglTestCase_002935_2);

#define VkglTestCase_002936_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002936_2 "riables.max_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002936, VkglTestCase_002936_1, VkglTestCase_002936_2);

#define VkglTestCase_002937_1 "dEQP-GLES31.functional.shaders.sample_var"
#define VkglTestCase_002937_2 "iables.max_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002937, VkglTestCase_002937_1, VkglTestCase_002937_2);

#define VkglTestCase_002938_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002938_2 "variables.max_samples.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002938, VkglTestCase_002938_1, VkglTestCase_002938_2);

#define VkglTestCase_002939_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002939_2 "variables.max_samples.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002939, VkglTestCase_002939_1, VkglTestCase_002939_2);

#define VkglTestCase_002940_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002940_2 "variables.max_samples.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002940, VkglTestCase_002940_1, VkglTestCase_002940_2);

#define VkglTestCase_002941_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002941_2 "variables.max_samples.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002941, VkglTestCase_002941_1, VkglTestCase_002941_2);

#define VkglTestCase_002942_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002942_2 "variables.max_samples.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002942, VkglTestCase_002942_1, VkglTestCase_002942_2);

#define VkglTestCase_002943_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002943_2 "ariables.max_samples.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002943, VkglTestCase_002943_1, VkglTestCase_002943_2);
