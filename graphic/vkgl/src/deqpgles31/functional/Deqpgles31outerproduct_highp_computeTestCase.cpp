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

#define VkglTestCase_002768_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002768_2 "ons.precision.outerproduct.highp_compute.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002768, VkglTestCase_002768_1, VkglTestCase_002768_2);

#define VkglTestCase_002769_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002769_2 "ns.precision.outerproduct.highp_compute.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002769, VkglTestCase_002769_1, VkglTestCase_002769_2);

#define VkglTestCase_002770_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002770_2 "ns.precision.outerproduct.highp_compute.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002770, VkglTestCase_002770_1, VkglTestCase_002770_2);

#define VkglTestCase_002771_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002771_2 "ns.precision.outerproduct.highp_compute.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002771, VkglTestCase_002771_1, VkglTestCase_002771_2);

#define VkglTestCase_002772_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002772_2 "ons.precision.outerproduct.highp_compute.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002772, VkglTestCase_002772_1, VkglTestCase_002772_2);

#define VkglTestCase_002773_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002773_2 "ns.precision.outerproduct.highp_compute.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002773, VkglTestCase_002773_1, VkglTestCase_002773_2);

#define VkglTestCase_002774_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002774_2 "ns.precision.outerproduct.highp_compute.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002774, VkglTestCase_002774_1, VkglTestCase_002774_2);

#define VkglTestCase_002775_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002775_2 "ns.precision.outerproduct.highp_compute.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002775, VkglTestCase_002775_1, VkglTestCase_002775_2);

#define VkglTestCase_002776_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002776_2 "ons.precision.outerproduct.highp_compute.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002776, VkglTestCase_002776_1, VkglTestCase_002776_2);
