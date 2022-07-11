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

#define VkglTestCase_002795_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002795_2 "tions.precision.transpose.highp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002795, VkglTestCase_002795_1, VkglTestCase_002795_2);

#define VkglTestCase_002796_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002796_2 "ions.precision.transpose.highp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002796, VkglTestCase_002796_1, VkglTestCase_002796_2);

#define VkglTestCase_002797_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002797_2 "ions.precision.transpose.highp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002797, VkglTestCase_002797_1, VkglTestCase_002797_2);

#define VkglTestCase_002798_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002798_2 "ions.precision.transpose.highp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002798, VkglTestCase_002798_1, VkglTestCase_002798_2);

#define VkglTestCase_002799_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002799_2 "tions.precision.transpose.highp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002799, VkglTestCase_002799_1, VkglTestCase_002799_2);

#define VkglTestCase_002800_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002800_2 "ions.precision.transpose.highp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002800, VkglTestCase_002800_1, VkglTestCase_002800_2);

#define VkglTestCase_002801_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002801_2 "ions.precision.transpose.highp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002801, VkglTestCase_002801_1, VkglTestCase_002801_2);

#define VkglTestCase_002802_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002802_2 "ions.precision.transpose.highp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002802, VkglTestCase_002802_1, VkglTestCase_002802_2);

#define VkglTestCase_002803_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002803_2 "tions.precision.transpose.highp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002803, VkglTestCase_002803_1, VkglTestCase_002803_2);
