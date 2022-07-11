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

#define VkglTestCase_019504_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019504_2 "ns.precision.outerproduct.mediump_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019504, VkglTestCase_019504_1, VkglTestCase_019504_2);

#define VkglTestCase_019505_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019505_2 "s.precision.outerproduct.mediump_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019505, VkglTestCase_019505_1, VkglTestCase_019505_2);

#define VkglTestCase_019506_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019506_2 "s.precision.outerproduct.mediump_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019506, VkglTestCase_019506_1, VkglTestCase_019506_2);

#define VkglTestCase_019507_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019507_2 "s.precision.outerproduct.mediump_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019507, VkglTestCase_019507_1, VkglTestCase_019507_2);

#define VkglTestCase_019508_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019508_2 "ns.precision.outerproduct.mediump_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019508, VkglTestCase_019508_1, VkglTestCase_019508_2);

#define VkglTestCase_019509_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019509_2 "s.precision.outerproduct.mediump_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019509, VkglTestCase_019509_1, VkglTestCase_019509_2);

#define VkglTestCase_019510_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019510_2 "s.precision.outerproduct.mediump_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019510, VkglTestCase_019510_1, VkglTestCase_019510_2);

#define VkglTestCase_019511_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019511_2 "s.precision.outerproduct.mediump_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019511, VkglTestCase_019511_1, VkglTestCase_019511_2);

#define VkglTestCase_019512_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019512_2 "ns.precision.outerproduct.mediump_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019512, VkglTestCase_019512_1, VkglTestCase_019512_2);
