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

#define VkglTestCase_018995_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018995_2 "tions.precision.floor.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018995, VkglTestCase_018995_1, VkglTestCase_018995_2);

#define VkglTestCase_018996_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018996_2 "ctions.precision.floor.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018996, VkglTestCase_018996_1, VkglTestCase_018996_2);

#define VkglTestCase_018997_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018997_2 "ctions.precision.floor.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018997, VkglTestCase_018997_1, VkglTestCase_018997_2);

#define VkglTestCase_018998_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018998_2 "ctions.precision.floor.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018998, VkglTestCase_018998_1, VkglTestCase_018998_2);
