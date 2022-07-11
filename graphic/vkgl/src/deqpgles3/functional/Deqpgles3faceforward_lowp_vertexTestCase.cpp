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

#define VkglTestCase_019374_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019374_2 "ons.precision.faceforward.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019374, VkglTestCase_019374_1, VkglTestCase_019374_2);

#define VkglTestCase_019375_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019375_2 "ions.precision.faceforward.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019375, VkglTestCase_019375_1, VkglTestCase_019375_2);

#define VkglTestCase_019376_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019376_2 "ions.precision.faceforward.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019376, VkglTestCase_019376_1, VkglTestCase_019376_2);

#define VkglTestCase_019377_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019377_2 "ions.precision.faceforward.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019377, VkglTestCase_019377_1, VkglTestCase_019377_2);
