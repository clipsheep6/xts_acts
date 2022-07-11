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

#define VkglTestCase_002786_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002786_2 "ions.precision.transpose.mediump_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002786, VkglTestCase_002786_1, VkglTestCase_002786_2);

#define VkglTestCase_002787_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002787_2 "ons.precision.transpose.mediump_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002787, VkglTestCase_002787_1, VkglTestCase_002787_2);

#define VkglTestCase_002788_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002788_2 "ons.precision.transpose.mediump_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002788, VkglTestCase_002788_1, VkglTestCase_002788_2);

#define VkglTestCase_002789_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002789_2 "ons.precision.transpose.mediump_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002789, VkglTestCase_002789_1, VkglTestCase_002789_2);

#define VkglTestCase_002790_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002790_2 "ions.precision.transpose.mediump_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002790, VkglTestCase_002790_1, VkglTestCase_002790_2);

#define VkglTestCase_002791_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002791_2 "ons.precision.transpose.mediump_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002791, VkglTestCase_002791_1, VkglTestCase_002791_2);

#define VkglTestCase_002792_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002792_2 "ons.precision.transpose.mediump_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002792, VkglTestCase_002792_1, VkglTestCase_002792_2);

#define VkglTestCase_002793_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002793_2 "ons.precision.transpose.mediump_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002793, VkglTestCase_002793_1, VkglTestCase_002793_2);

#define VkglTestCase_002794_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002794_2 "ions.precision.transpose.mediump_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002794, VkglTestCase_002794_1, VkglTestCase_002794_2);
