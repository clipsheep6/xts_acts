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

#define VkglTestCase_018455_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018455_2 "tions.precision.radians.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018455, VkglTestCase_018455_1, VkglTestCase_018455_2);

#define VkglTestCase_018456_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018456_2 "ctions.precision.radians.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018456, VkglTestCase_018456_1, VkglTestCase_018456_2);

#define VkglTestCase_018457_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018457_2 "ctions.precision.radians.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018457, VkglTestCase_018457_1, VkglTestCase_018457_2);

#define VkglTestCase_018458_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018458_2 "ctions.precision.radians.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018458, VkglTestCase_018458_1, VkglTestCase_018458_2);
