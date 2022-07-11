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

#define VkglTestCase_018671_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018671_2 "ions.precision.cosh.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018671, VkglTestCase_018671_1, VkglTestCase_018671_2);

#define VkglTestCase_018672_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018672_2 "tions.precision.cosh.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018672, VkglTestCase_018672_1, VkglTestCase_018672_2);

#define VkglTestCase_018673_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018673_2 "tions.precision.cosh.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018673, VkglTestCase_018673_1, VkglTestCase_018673_2);

#define VkglTestCase_018674_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018674_2 "tions.precision.cosh.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018674, VkglTestCase_018674_1, VkglTestCase_018674_2);
