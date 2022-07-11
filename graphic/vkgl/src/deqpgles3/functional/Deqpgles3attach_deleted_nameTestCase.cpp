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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044376_1 "dEQP-GLES3.functional.lifetime.atta"
#define VkglTestCase_044376_2 "ch.deleted_name.texture_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044376, VkglTestCase_044376_1, VkglTestCase_044376_2);

#define VkglTestCase_044377_1 "dEQP-GLES3.functional.lifetime.attach"
#define VkglTestCase_044377_2 ".deleted_name.renderbuffer_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044377, VkglTestCase_044377_1, VkglTestCase_044377_2);

#define VkglTestCase_044378_1 "dEQP-GLES3.functional.lifetime.a"
#define VkglTestCase_044378_2 "ttach.deleted_name.shader_program"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044378, VkglTestCase_044378_1, VkglTestCase_044378_2);

#define VkglTestCase_044379_1 "dEQP-GLES3.functional.lifetime.atta"
#define VkglTestCase_044379_2 "ch.deleted_name.buffer_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044379, VkglTestCase_044379_1, VkglTestCase_044379_2);

#define VkglTestCase_044380_1 "dEQP-GLES3.functional.lifetime.attach."
#define VkglTestCase_044380_2 "deleted_name.buffer_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044380, VkglTestCase_044380_1, VkglTestCase_044380_2);
