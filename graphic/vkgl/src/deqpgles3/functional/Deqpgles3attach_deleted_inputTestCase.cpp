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

#define VkglTestCase_044381_1 "dEQP-GLES3.functional.lifetime.atta"
#define VkglTestCase_044381_2 "ch.deleted_input.texture_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044381, VkglTestCase_044381_1, VkglTestCase_044381_2);

#define VkglTestCase_044382_1 "dEQP-GLES3.functional.lifetime.attach."
#define VkglTestCase_044382_2 "deleted_input.renderbuffer_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044382, VkglTestCase_044382_1, VkglTestCase_044382_2);

#define VkglTestCase_044383_1 "dEQP-GLES3.functional.lifetime.at"
#define VkglTestCase_044383_2 "tach.deleted_input.shader_program"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044383, VkglTestCase_044383_1, VkglTestCase_044383_2);

#define VkglTestCase_044384_1 "dEQP-GLES3.functional.lifetime.atta"
#define VkglTestCase_044384_2 "ch.deleted_input.buffer_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044384, VkglTestCase_044384_1, VkglTestCase_044384_2);
