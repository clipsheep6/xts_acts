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

#define VkglTestCase_002918_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002918_2 "ariables.num_samples.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002918, VkglTestCase_002918_1, VkglTestCase_002918_2);

#define VkglTestCase_002919_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002919_2 "riables.num_samples.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002919, VkglTestCase_002919_1, VkglTestCase_002919_2);

#define VkglTestCase_002920_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002920_2 "riables.num_samples.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002920, VkglTestCase_002920_1, VkglTestCase_002920_2);

#define VkglTestCase_002921_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002921_2 "riables.num_samples.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002921, VkglTestCase_002921_1, VkglTestCase_002921_2);

#define VkglTestCase_002922_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002922_2 "riables.num_samples.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002922, VkglTestCase_002922_1, VkglTestCase_002922_2);

#define VkglTestCase_002923_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002923_2 "riables.num_samples.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002923, VkglTestCase_002923_1, VkglTestCase_002923_2);

#define VkglTestCase_002924_1 "dEQP-GLES31.functional.shaders.sample_var"
#define VkglTestCase_002924_2 "iables.num_samples.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002924, VkglTestCase_002924_1, VkglTestCase_002924_2);

#define VkglTestCase_002925_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002925_2 "variables.num_samples.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002925, VkglTestCase_002925_1, VkglTestCase_002925_2);

#define VkglTestCase_002926_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002926_2 "variables.num_samples.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002926, VkglTestCase_002926_1, VkglTestCase_002926_2);

#define VkglTestCase_002927_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002927_2 "variables.num_samples.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002927, VkglTestCase_002927_1, VkglTestCase_002927_2);

#define VkglTestCase_002928_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002928_2 "variables.num_samples.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002928, VkglTestCase_002928_1, VkglTestCase_002928_2);

#define VkglTestCase_002929_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002929_2 "variables.num_samples.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002929, VkglTestCase_002929_1, VkglTestCase_002929_2);

#define VkglTestCase_002930_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002930_2 "ariables.num_samples.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002930, VkglTestCase_002930_1, VkglTestCase_002930_2);
