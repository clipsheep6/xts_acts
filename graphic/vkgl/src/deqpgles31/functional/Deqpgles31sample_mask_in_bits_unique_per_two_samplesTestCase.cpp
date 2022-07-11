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

#define VkglTestCase_003041_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_"
#define VkglTestCase_003041_2 "mask_in.bits_unique_per_two_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003041, VkglTestCase_003041_1, VkglTestCase_003041_2);

#define VkglTestCase_003042_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_m"
#define VkglTestCase_003042_2 "ask_in.bits_unique_per_two_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003042, VkglTestCase_003042_1, VkglTestCase_003042_2);

#define VkglTestCase_003043_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_m"
#define VkglTestCase_003043_2 "ask_in.bits_unique_per_two_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003043, VkglTestCase_003043_1, VkglTestCase_003043_2);

#define VkglTestCase_003044_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_m"
#define VkglTestCase_003044_2 "ask_in.bits_unique_per_two_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003044, VkglTestCase_003044_1, VkglTestCase_003044_2);

#define VkglTestCase_003045_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_m"
#define VkglTestCase_003045_2 "ask_in.bits_unique_per_two_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003045, VkglTestCase_003045_1, VkglTestCase_003045_2);

#define VkglTestCase_003046_1 "dEQP-GLES31.functional.shaders.sample_variables.sample_m"
#define VkglTestCase_003046_2 "ask_in.bits_unique_per_two_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003046, VkglTestCase_003046_1, VkglTestCase_003046_2);
