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

#define VkglTestCase_018483_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018483_2 "ions.precision.degrees.lowp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018483, VkglTestCase_018483_1, VkglTestCase_018483_2);

#define VkglTestCase_018484_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018484_2 "tions.precision.degrees.lowp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018484, VkglTestCase_018484_1, VkglTestCase_018484_2);

#define VkglTestCase_018485_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018485_2 "tions.precision.degrees.lowp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018485, VkglTestCase_018485_1, VkglTestCase_018485_2);

#define VkglTestCase_018486_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018486_2 "tions.precision.degrees.lowp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018486, VkglTestCase_018486_1, VkglTestCase_018486_2);
