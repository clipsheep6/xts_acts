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

#define VkglTestCase_002944_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002944_2 "variables.sample_id.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002944, VkglTestCase_002944_1, VkglTestCase_002944_2);

#define VkglTestCase_002945_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002945_2 "ariables.sample_id.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002945, VkglTestCase_002945_1, VkglTestCase_002945_2);

#define VkglTestCase_002946_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002946_2 "ariables.sample_id.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002946, VkglTestCase_002946_1, VkglTestCase_002946_2);

#define VkglTestCase_002947_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002947_2 "ariables.sample_id.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002947, VkglTestCase_002947_1, VkglTestCase_002947_2);

#define VkglTestCase_002948_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002948_2 "ariables.sample_id.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002948, VkglTestCase_002948_1, VkglTestCase_002948_2);

#define VkglTestCase_002949_1 "dEQP-GLES31.functional.shaders.sample_v"
#define VkglTestCase_002949_2 "ariables.sample_id.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002949, VkglTestCase_002949_1, VkglTestCase_002949_2);

#define VkglTestCase_002950_1 "dEQP-GLES31.functional.shaders.sample_va"
#define VkglTestCase_002950_2 "riables.sample_id.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002950, VkglTestCase_002950_1, VkglTestCase_002950_2);

#define VkglTestCase_002951_1 "dEQP-GLES31.functional.shaders.sample"
#define VkglTestCase_002951_2 "_variables.sample_id.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002951, VkglTestCase_002951_1, VkglTestCase_002951_2);

#define VkglTestCase_002952_1 "dEQP-GLES31.functional.shaders.sample"
#define VkglTestCase_002952_2 "_variables.sample_id.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002952, VkglTestCase_002952_1, VkglTestCase_002952_2);

#define VkglTestCase_002953_1 "dEQP-GLES31.functional.shaders.sample"
#define VkglTestCase_002953_2 "_variables.sample_id.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002953, VkglTestCase_002953_1, VkglTestCase_002953_2);

#define VkglTestCase_002954_1 "dEQP-GLES31.functional.shaders.sample"
#define VkglTestCase_002954_2 "_variables.sample_id.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002954, VkglTestCase_002954_1, VkglTestCase_002954_2);

#define VkglTestCase_002955_1 "dEQP-GLES31.functional.shaders.sample"
#define VkglTestCase_002955_2 "_variables.sample_id.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002955, VkglTestCase_002955_1, VkglTestCase_002955_2);

#define VkglTestCase_002956_1 "dEQP-GLES31.functional.shaders.sample_"
#define VkglTestCase_002956_2 "variables.sample_id.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002956, VkglTestCase_002956_1, VkglTestCase_002956_2);
