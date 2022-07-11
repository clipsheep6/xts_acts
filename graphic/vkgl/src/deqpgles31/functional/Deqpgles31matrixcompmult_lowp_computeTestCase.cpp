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

#define VkglTestCase_002723_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002723_2 "ons.precision.matrixcompmult.lowp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002723, VkglTestCase_002723_1, VkglTestCase_002723_2);

#define VkglTestCase_002724_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002724_2 "ns.precision.matrixcompmult.lowp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002724, VkglTestCase_002724_1, VkglTestCase_002724_2);

#define VkglTestCase_002725_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002725_2 "ns.precision.matrixcompmult.lowp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002725, VkglTestCase_002725_1, VkglTestCase_002725_2);

#define VkglTestCase_002726_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002726_2 "ns.precision.matrixcompmult.lowp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002726, VkglTestCase_002726_1, VkglTestCase_002726_2);

#define VkglTestCase_002727_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002727_2 "ons.precision.matrixcompmult.lowp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002727, VkglTestCase_002727_1, VkglTestCase_002727_2);

#define VkglTestCase_002728_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002728_2 "ns.precision.matrixcompmult.lowp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002728, VkglTestCase_002728_1, VkglTestCase_002728_2);

#define VkglTestCase_002729_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002729_2 "ns.precision.matrixcompmult.lowp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002729, VkglTestCase_002729_1, VkglTestCase_002729_2);

#define VkglTestCase_002730_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002730_2 "ns.precision.matrixcompmult.lowp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002730, VkglTestCase_002730_1, VkglTestCase_002730_2);

#define VkglTestCase_002731_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002731_2 "ons.precision.matrixcompmult.lowp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002731, VkglTestCase_002731_1, VkglTestCase_002731_2);
