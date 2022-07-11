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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018391_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018391_2 "ctions.precision.sub.mediump_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018391, VkglTestCase_018391_1, VkglTestCase_018391_2);

#define VkglTestCase_018392_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018392_2 "nctions.precision.sub.mediump_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018392, VkglTestCase_018392_1, VkglTestCase_018392_2);

#define VkglTestCase_018393_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018393_2 "nctions.precision.sub.mediump_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018393, VkglTestCase_018393_1, VkglTestCase_018393_2);

#define VkglTestCase_018394_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018394_2 "nctions.precision.sub.mediump_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018394, VkglTestCase_018394_1, VkglTestCase_018394_2);
