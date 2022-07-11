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

#define VkglTestCase_018375_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018375_2 "nctions.precision.add.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018375, VkglTestCase_018375_1, VkglTestCase_018375_2);

#define VkglTestCase_018376_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018376_2 "unctions.precision.add.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018376, VkglTestCase_018376_1, VkglTestCase_018376_2);

#define VkglTestCase_018377_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018377_2 "unctions.precision.add.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018377, VkglTestCase_018377_1, VkglTestCase_018377_2);

#define VkglTestCase_018378_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018378_2 "unctions.precision.add.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018378, VkglTestCase_018378_1, VkglTestCase_018378_2);
