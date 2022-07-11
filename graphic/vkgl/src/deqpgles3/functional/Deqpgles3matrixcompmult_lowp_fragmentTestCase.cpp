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

#define VkglTestCase_019441_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019441_2 "ns.precision.matrixcompmult.lowp_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019441, VkglTestCase_019441_1, VkglTestCase_019441_2);

#define VkglTestCase_019442_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019442_2 "s.precision.matrixcompmult.lowp_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019442, VkglTestCase_019442_1, VkglTestCase_019442_2);

#define VkglTestCase_019443_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019443_2 "s.precision.matrixcompmult.lowp_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019443, VkglTestCase_019443_1, VkglTestCase_019443_2);

#define VkglTestCase_019444_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019444_2 "s.precision.matrixcompmult.lowp_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019444, VkglTestCase_019444_1, VkglTestCase_019444_2);

#define VkglTestCase_019445_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019445_2 "ns.precision.matrixcompmult.lowp_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019445, VkglTestCase_019445_1, VkglTestCase_019445_2);

#define VkglTestCase_019446_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019446_2 "s.precision.matrixcompmult.lowp_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019446, VkglTestCase_019446_1, VkglTestCase_019446_2);

#define VkglTestCase_019447_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019447_2 "s.precision.matrixcompmult.lowp_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019447, VkglTestCase_019447_1, VkglTestCase_019447_2);

#define VkglTestCase_019448_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019448_2 "s.precision.matrixcompmult.lowp_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019448, VkglTestCase_019448_1, VkglTestCase_019448_2);

#define VkglTestCase_019449_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019449_2 "ns.precision.matrixcompmult.lowp_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019449, VkglTestCase_019449_1, VkglTestCase_019449_2);
