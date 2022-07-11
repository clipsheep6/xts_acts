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

#define VkglTestCase_044385_1 "dEQP-GLES3.functional.lifetime.attac"
#define VkglTestCase_044385_2 "h.deleted_output.texture_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044385, VkglTestCase_044385_1, VkglTestCase_044385_2);

#define VkglTestCase_044386_1 "dEQP-GLES3.functional.lifetime.attach."
#define VkglTestCase_044386_2 "deleted_output.renderbuffer_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044386, VkglTestCase_044386_1, VkglTestCase_044386_2);

#define VkglTestCase_044387_1 "dEQP-GLES3.functional.lifetime.attach.d"
#define VkglTestCase_044387_2 "eleted_output.buffer_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044387, VkglTestCase_044387_1, VkglTestCase_044387_2);
