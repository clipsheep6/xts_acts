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

#define VkglTestCase_019390_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019390_2 "ons.precision.faceforward.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019390, VkglTestCase_019390_1, VkglTestCase_019390_2);

#define VkglTestCase_019391_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019391_2 "ions.precision.faceforward.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019391, VkglTestCase_019391_1, VkglTestCase_019391_2);

#define VkglTestCase_019392_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019392_2 "ions.precision.faceforward.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019392, VkglTestCase_019392_1, VkglTestCase_019392_2);

#define VkglTestCase_019393_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019393_2 "ions.precision.faceforward.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019393, VkglTestCase_019393_1, VkglTestCase_019393_2);
