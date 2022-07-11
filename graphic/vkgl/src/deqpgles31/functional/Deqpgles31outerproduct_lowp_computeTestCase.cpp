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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002750_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002750_2 "ions.precision.outerproduct.lowp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002750, VkglTestCase_002750_1, VkglTestCase_002750_2);

#define VkglTestCase_002751_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002751_2 "ons.precision.outerproduct.lowp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002751, VkglTestCase_002751_1, VkglTestCase_002751_2);

#define VkglTestCase_002752_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002752_2 "ons.precision.outerproduct.lowp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002752, VkglTestCase_002752_1, VkglTestCase_002752_2);

#define VkglTestCase_002753_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002753_2 "ons.precision.outerproduct.lowp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002753, VkglTestCase_002753_1, VkglTestCase_002753_2);

#define VkglTestCase_002754_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002754_2 "ions.precision.outerproduct.lowp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002754, VkglTestCase_002754_1, VkglTestCase_002754_2);

#define VkglTestCase_002755_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002755_2 "ons.precision.outerproduct.lowp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002755, VkglTestCase_002755_1, VkglTestCase_002755_2);

#define VkglTestCase_002756_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002756_2 "ons.precision.outerproduct.lowp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002756, VkglTestCase_002756_1, VkglTestCase_002756_2);

#define VkglTestCase_002757_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002757_2 "ons.precision.outerproduct.lowp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002757, VkglTestCase_002757_1, VkglTestCase_002757_2);

#define VkglTestCase_002758_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002758_2 "ions.precision.outerproduct.lowp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002758, VkglTestCase_002758_1, VkglTestCase_002758_2);
