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

#define VkglTestCase_019323_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019323_2 "ns.precision.distance.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019323, VkglTestCase_019323_1, VkglTestCase_019323_2);

#define VkglTestCase_019324_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019324_2 "ons.precision.distance.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019324, VkglTestCase_019324_1, VkglTestCase_019324_2);

#define VkglTestCase_019325_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019325_2 "ons.precision.distance.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019325, VkglTestCase_019325_1, VkglTestCase_019325_2);

#define VkglTestCase_019326_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019326_2 "ons.precision.distance.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019326, VkglTestCase_019326_1, VkglTestCase_019326_2);
