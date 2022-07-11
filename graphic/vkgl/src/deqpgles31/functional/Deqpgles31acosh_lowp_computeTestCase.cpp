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

#define VkglTestCase_002369_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002369_2 "ctions.precision.acosh.lowp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002369, VkglTestCase_002369_1, VkglTestCase_002369_2);

#define VkglTestCase_002370_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002370_2 "nctions.precision.acosh.lowp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002370, VkglTestCase_002370_1, VkglTestCase_002370_2);

#define VkglTestCase_002371_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002371_2 "nctions.precision.acosh.lowp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002371, VkglTestCase_002371_1, VkglTestCase_002371_2);

#define VkglTestCase_002372_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002372_2 "nctions.precision.acosh.lowp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002372, VkglTestCase_002372_1, VkglTestCase_002372_2);
