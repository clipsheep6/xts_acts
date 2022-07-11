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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000215_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000215_2 "ocessor.recursion.recursion_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000216_2 "cessor.recursion.recursion_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000217_2 "ocessor.recursion.recursion_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000218_2 "cessor.recursion.recursion_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000219_2 "ocessor.recursion.recursion_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000220_2 "cessor.recursion.recursion_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000221_2 "ocessor.recursion.recursion_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000222_2 "cessor.recursion.recursion_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000223_2 "ocessor.recursion.recursion_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000224_2 "cessor.recursion.recursion_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);
