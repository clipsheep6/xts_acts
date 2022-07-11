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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016146_1 "dEQP-GLES31.functional.state_query.framebuffer_default"
#define VkglTestCase_016146_2 ".framebuffer_default_width_get_framebuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016146, VkglTestCase_016146_1, VkglTestCase_016146_2);

#define VkglTestCase_016147_1 "dEQP-GLES31.functional.state_query.framebuffer_default"
#define VkglTestCase_016147_2 ".framebuffer_default_height_get_framebuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016147, VkglTestCase_016147_1, VkglTestCase_016147_2);

#define VkglTestCase_016148_1 "dEQP-GLES31.functional.state_query.framebuffer_default."
#define VkglTestCase_016148_2 "framebuffer_default_samples_get_framebuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016148, VkglTestCase_016148_1, VkglTestCase_016148_2);

#define VkglTestCase_016149_1 "dEQP-GLES31.functional.state_query.framebuffer_default.framebu"
#define VkglTestCase_016149_2 "ffer_default_fixed_sample_locations_get_framebuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016149, VkglTestCase_016149_1, VkglTestCase_016149_2);
