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

#define VkglTestCase_002732_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002732_2 "s.precision.matrixcompmult.mediump_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002732, VkglTestCase_002732_1, VkglTestCase_002732_2);

#define VkglTestCase_002733_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002733_2 ".precision.matrixcompmult.mediump_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002733, VkglTestCase_002733_1, VkglTestCase_002733_2);

#define VkglTestCase_002734_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002734_2 ".precision.matrixcompmult.mediump_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002734, VkglTestCase_002734_1, VkglTestCase_002734_2);

#define VkglTestCase_002735_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002735_2 ".precision.matrixcompmult.mediump_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002735, VkglTestCase_002735_1, VkglTestCase_002735_2);

#define VkglTestCase_002736_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002736_2 "s.precision.matrixcompmult.mediump_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002736, VkglTestCase_002736_1, VkglTestCase_002736_2);

#define VkglTestCase_002737_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002737_2 ".precision.matrixcompmult.mediump_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002737, VkglTestCase_002737_1, VkglTestCase_002737_2);

#define VkglTestCase_002738_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002738_2 ".precision.matrixcompmult.mediump_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002738, VkglTestCase_002738_1, VkglTestCase_002738_2);

#define VkglTestCase_002739_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_002739_2 ".precision.matrixcompmult.mediump_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002739, VkglTestCase_002739_1, VkglTestCase_002739_2);

#define VkglTestCase_002740_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002740_2 "s.precision.matrixcompmult.mediump_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002740, VkglTestCase_002740_1, VkglTestCase_002740_2);
