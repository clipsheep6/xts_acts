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

#define VkglTestCase_019161_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019161_2 "tions.precision.min.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019161, VkglTestCase_019161_1, VkglTestCase_019161_2);

#define VkglTestCase_019162_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019162_2 "ctions.precision.min.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019162, VkglTestCase_019162_1, VkglTestCase_019162_2);

#define VkglTestCase_019163_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019163_2 "ctions.precision.min.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019163, VkglTestCase_019163_1, VkglTestCase_019163_2);

#define VkglTestCase_019164_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019164_2 "ctions.precision.min.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019164, VkglTestCase_019164_1, VkglTestCase_019164_2);
