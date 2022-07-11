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

#define VkglTestCase_019193_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019193_2 "ctions.precision.max.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019193, VkglTestCase_019193_1, VkglTestCase_019193_2);

#define VkglTestCase_019194_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019194_2 "nctions.precision.max.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019194, VkglTestCase_019194_1, VkglTestCase_019194_2);

#define VkglTestCase_019195_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019195_2 "nctions.precision.max.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019195, VkglTestCase_019195_1, VkglTestCase_019195_2);

#define VkglTestCase_019196_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019196_2 "nctions.precision.max.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019196, VkglTestCase_019196_1, VkglTestCase_019196_2);
