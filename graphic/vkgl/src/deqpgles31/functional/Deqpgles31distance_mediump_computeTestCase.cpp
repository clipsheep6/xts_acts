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

#define VkglTestCase_002652_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002652_2 "ons.precision.distance.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002652, VkglTestCase_002652_1, VkglTestCase_002652_2);

#define VkglTestCase_002653_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002653_2 "ions.precision.distance.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002653, VkglTestCase_002653_1, VkglTestCase_002653_2);

#define VkglTestCase_002654_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002654_2 "ions.precision.distance.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002654, VkglTestCase_002654_1, VkglTestCase_002654_2);

#define VkglTestCase_002655_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002655_2 "ions.precision.distance.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002655, VkglTestCase_002655_1, VkglTestCase_002655_2);
