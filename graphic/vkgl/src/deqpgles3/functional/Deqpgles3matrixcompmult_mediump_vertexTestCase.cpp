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

#define VkglTestCase_019450_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019450_2 "s.precision.matrixcompmult.mediump_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019450, VkglTestCase_019450_1, VkglTestCase_019450_2);

#define VkglTestCase_019451_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019451_2 ".precision.matrixcompmult.mediump_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019451, VkglTestCase_019451_1, VkglTestCase_019451_2);

#define VkglTestCase_019452_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019452_2 ".precision.matrixcompmult.mediump_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019452, VkglTestCase_019452_1, VkglTestCase_019452_2);

#define VkglTestCase_019453_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019453_2 ".precision.matrixcompmult.mediump_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019453, VkglTestCase_019453_1, VkglTestCase_019453_2);

#define VkglTestCase_019454_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019454_2 "s.precision.matrixcompmult.mediump_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019454, VkglTestCase_019454_1, VkglTestCase_019454_2);

#define VkglTestCase_019455_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019455_2 ".precision.matrixcompmult.mediump_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019455, VkglTestCase_019455_1, VkglTestCase_019455_2);

#define VkglTestCase_019456_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019456_2 ".precision.matrixcompmult.mediump_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019456, VkglTestCase_019456_1, VkglTestCase_019456_2);

#define VkglTestCase_019457_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019457_2 ".precision.matrixcompmult.mediump_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019457, VkglTestCase_019457_1, VkglTestCase_019457_2);

#define VkglTestCase_019458_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019458_2 "s.precision.matrixcompmult.mediump_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019458, VkglTestCase_019458_1, VkglTestCase_019458_2);
