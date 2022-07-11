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

#define VkglTestCase_002777_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002777_2 "tions.precision.transpose.lowp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002777, VkglTestCase_002777_1, VkglTestCase_002777_2);

#define VkglTestCase_002778_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002778_2 "ions.precision.transpose.lowp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002778, VkglTestCase_002778_1, VkglTestCase_002778_2);

#define VkglTestCase_002779_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002779_2 "ions.precision.transpose.lowp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002779, VkglTestCase_002779_1, VkglTestCase_002779_2);

#define VkglTestCase_002780_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002780_2 "ions.precision.transpose.lowp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002780, VkglTestCase_002780_1, VkglTestCase_002780_2);

#define VkglTestCase_002781_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002781_2 "tions.precision.transpose.lowp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002781, VkglTestCase_002781_1, VkglTestCase_002781_2);

#define VkglTestCase_002782_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002782_2 "ions.precision.transpose.lowp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002782, VkglTestCase_002782_1, VkglTestCase_002782_2);

#define VkglTestCase_002783_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002783_2 "ions.precision.transpose.lowp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002783, VkglTestCase_002783_1, VkglTestCase_002783_2);

#define VkglTestCase_002784_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002784_2 "ions.precision.transpose.lowp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002784, VkglTestCase_002784_1, VkglTestCase_002784_2);

#define VkglTestCase_002785_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002785_2 "tions.precision.transpose.lowp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002785, VkglTestCase_002785_1, VkglTestCase_002785_2);
