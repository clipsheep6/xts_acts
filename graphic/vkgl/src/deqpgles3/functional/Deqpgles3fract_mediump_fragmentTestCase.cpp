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

#define VkglTestCase_019107_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019107_2 "ions.precision.fract.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019107, VkglTestCase_019107_1, VkglTestCase_019107_2);

#define VkglTestCase_019108_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019108_2 "tions.precision.fract.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019108, VkglTestCase_019108_1, VkglTestCase_019108_2);

#define VkglTestCase_019109_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019109_2 "tions.precision.fract.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019109, VkglTestCase_019109_1, VkglTestCase_019109_2);

#define VkglTestCase_019110_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019110_2 "tions.precision.fract.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019110, VkglTestCase_019110_1, VkglTestCase_019110_2);
