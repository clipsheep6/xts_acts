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

#define VkglTestCase_019432_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019432_2 "ons.precision.matrixcompmult.lowp_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019432, VkglTestCase_019432_1, VkglTestCase_019432_2);

#define VkglTestCase_019433_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019433_2 "ns.precision.matrixcompmult.lowp_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019433, VkglTestCase_019433_1, VkglTestCase_019433_2);

#define VkglTestCase_019434_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019434_2 "ns.precision.matrixcompmult.lowp_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019434, VkglTestCase_019434_1, VkglTestCase_019434_2);

#define VkglTestCase_019435_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019435_2 "ns.precision.matrixcompmult.lowp_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019435, VkglTestCase_019435_1, VkglTestCase_019435_2);

#define VkglTestCase_019436_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019436_2 "ons.precision.matrixcompmult.lowp_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019436, VkglTestCase_019436_1, VkglTestCase_019436_2);

#define VkglTestCase_019437_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019437_2 "ns.precision.matrixcompmult.lowp_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019437, VkglTestCase_019437_1, VkglTestCase_019437_2);

#define VkglTestCase_019438_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019438_2 "ns.precision.matrixcompmult.lowp_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019438, VkglTestCase_019438_1, VkglTestCase_019438_2);

#define VkglTestCase_019439_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019439_2 "ns.precision.matrixcompmult.lowp_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019439, VkglTestCase_019439_1, VkglTestCase_019439_2);

#define VkglTestCase_019440_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019440_2 "ons.precision.matrixcompmult.lowp_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019440, VkglTestCase_019440_1, VkglTestCase_019440_2);
