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

#define VkglTestCase_002632_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002632_2 "ons.precision.smoothstep.highp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002632, VkglTestCase_002632_1, VkglTestCase_002632_2);

#define VkglTestCase_002633_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002633_2 "ions.precision.smoothstep.highp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002633, VkglTestCase_002633_1, VkglTestCase_002633_2);

#define VkglTestCase_002634_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002634_2 "ions.precision.smoothstep.highp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002634, VkglTestCase_002634_1, VkglTestCase_002634_2);

#define VkglTestCase_002635_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002635_2 "ions.precision.smoothstep.highp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002635, VkglTestCase_002635_1, VkglTestCase_002635_2);
