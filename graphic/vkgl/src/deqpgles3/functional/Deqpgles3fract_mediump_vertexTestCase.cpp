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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019103_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019103_2 "tions.precision.fract.mediump_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019103, VkglTestCase_019103_1, VkglTestCase_019103_2);

#define VkglTestCase_019104_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019104_2 "ctions.precision.fract.mediump_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019104, VkglTestCase_019104_1, VkglTestCase_019104_2);

#define VkglTestCase_019105_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019105_2 "ctions.precision.fract.mediump_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019105, VkglTestCase_019105_1, VkglTestCase_019105_2);

#define VkglTestCase_019106_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019106_2 "ctions.precision.fract.mediump_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019106, VkglTestCase_019106_1, VkglTestCase_019106_2);
