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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002333_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002333_2 "nctions.precision.cosh.lowp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002333, VkglTestCase_002333_1, VkglTestCase_002333_2);

#define VkglTestCase_002334_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002334_2 "unctions.precision.cosh.lowp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002334, VkglTestCase_002334_1, VkglTestCase_002334_2);

#define VkglTestCase_002335_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002335_2 "unctions.precision.cosh.lowp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002335, VkglTestCase_002335_1, VkglTestCase_002335_2);

#define VkglTestCase_002336_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002336_2 "unctions.precision.cosh.lowp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002336, VkglTestCase_002336_1, VkglTestCase_002336_2);
