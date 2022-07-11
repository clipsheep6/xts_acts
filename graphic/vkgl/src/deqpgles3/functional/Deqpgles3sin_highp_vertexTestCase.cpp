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

#define VkglTestCase_018519_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018519_2 "nctions.precision.sin.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018519, VkglTestCase_018519_1, VkglTestCase_018519_2);

#define VkglTestCase_018520_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018520_2 "unctions.precision.sin.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018520, VkglTestCase_018520_1, VkglTestCase_018520_2);

#define VkglTestCase_018521_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018521_2 "unctions.precision.sin.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018521, VkglTestCase_018521_1, VkglTestCase_018521_2);

#define VkglTestCase_018522_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018522_2 "unctions.precision.sin.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018522, VkglTestCase_018522_1, VkglTestCase_018522_2);
