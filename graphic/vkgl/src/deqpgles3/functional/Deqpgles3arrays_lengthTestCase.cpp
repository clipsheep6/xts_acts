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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004447_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004447_2 "s.arrays.length.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004447, VkglTestCase_004447_1, VkglTestCase_004447_2);

#define VkglTestCase_004448_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004448_2 ".arrays.length.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004448, VkglTestCase_004448_1, VkglTestCase_004448_2);

#define VkglTestCase_004449_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_004449_2 "rs.arrays.length.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004449, VkglTestCase_004449_1, VkglTestCase_004449_2);

#define VkglTestCase_004450_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004450_2 "s.arrays.length.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004450, VkglTestCase_004450_1, VkglTestCase_004450_2);

#define VkglTestCase_004451_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_004451_2 "rs.arrays.length.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004451, VkglTestCase_004451_1, VkglTestCase_004451_2);

#define VkglTestCase_004452_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004452_2 "s.arrays.length.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004452, VkglTestCase_004452_1, VkglTestCase_004452_2);

#define VkglTestCase_004453_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004453_2 "s.arrays.length.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004453, VkglTestCase_004453_1, VkglTestCase_004453_2);

#define VkglTestCase_004454_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004454_2 ".arrays.length.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004454, VkglTestCase_004454_1, VkglTestCase_004454_2);
