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

#define VkglTestCase_002741_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002741_2 "ns.precision.matrixcompmult.highp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002741, VkglTestCase_002741_1, VkglTestCase_002741_2);

#define VkglTestCase_002742_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002742_2 "s.precision.matrixcompmult.highp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002742, VkglTestCase_002742_1, VkglTestCase_002742_2);

#define VkglTestCase_002743_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002743_2 "s.precision.matrixcompmult.highp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002743, VkglTestCase_002743_1, VkglTestCase_002743_2);

#define VkglTestCase_002744_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002744_2 "s.precision.matrixcompmult.highp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002744, VkglTestCase_002744_1, VkglTestCase_002744_2);

#define VkglTestCase_002745_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002745_2 "ns.precision.matrixcompmult.highp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002745, VkglTestCase_002745_1, VkglTestCase_002745_2);

#define VkglTestCase_002746_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002746_2 "s.precision.matrixcompmult.highp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002746, VkglTestCase_002746_1, VkglTestCase_002746_2);

#define VkglTestCase_002747_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002747_2 "s.precision.matrixcompmult.highp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002747, VkglTestCase_002747_1, VkglTestCase_002747_2);

#define VkglTestCase_002748_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002748_2 "s.precision.matrixcompmult.highp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002748, VkglTestCase_002748_1, VkglTestCase_002748_2);

#define VkglTestCase_002749_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002749_2 "ns.precision.matrixcompmult.highp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002749, VkglTestCase_002749_1, VkglTestCase_002749_2);
