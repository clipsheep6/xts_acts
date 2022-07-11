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

#define VkglTestCase_002759_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002759_2 "ns.precision.outerproduct.mediump_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002759, VkglTestCase_002759_1, VkglTestCase_002759_2);

#define VkglTestCase_002760_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002760_2 "s.precision.outerproduct.mediump_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002760, VkglTestCase_002760_1, VkglTestCase_002760_2);

#define VkglTestCase_002761_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002761_2 "s.precision.outerproduct.mediump_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002761, VkglTestCase_002761_1, VkglTestCase_002761_2);

#define VkglTestCase_002762_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002762_2 "s.precision.outerproduct.mediump_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002762, VkglTestCase_002762_1, VkglTestCase_002762_2);

#define VkglTestCase_002763_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002763_2 "ns.precision.outerproduct.mediump_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002763, VkglTestCase_002763_1, VkglTestCase_002763_2);

#define VkglTestCase_002764_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002764_2 "s.precision.outerproduct.mediump_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002764, VkglTestCase_002764_1, VkglTestCase_002764_2);

#define VkglTestCase_002765_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002765_2 "s.precision.outerproduct.mediump_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002765, VkglTestCase_002765_1, VkglTestCase_002765_2);

#define VkglTestCase_002766_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_002766_2 "s.precision.outerproduct.mediump_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002766, VkglTestCase_002766_1, VkglTestCase_002766_2);

#define VkglTestCase_002767_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002767_2 "ns.precision.outerproduct.mediump_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002767, VkglTestCase_002767_1, VkglTestCase_002767_2);
