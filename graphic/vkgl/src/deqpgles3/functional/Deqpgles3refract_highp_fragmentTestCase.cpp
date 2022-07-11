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

#define VkglTestCase_019428_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019428_2 "ions.precision.refract.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019428, VkglTestCase_019428_1, VkglTestCase_019428_2);

#define VkglTestCase_019429_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019429_2 "tions.precision.refract.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019429, VkglTestCase_019429_1, VkglTestCase_019429_2);

#define VkglTestCase_019430_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019430_2 "tions.precision.refract.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019430, VkglTestCase_019430_1, VkglTestCase_019430_2);

#define VkglTestCase_019431_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019431_2 "tions.precision.refract.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019431, VkglTestCase_019431_1, VkglTestCase_019431_2);
