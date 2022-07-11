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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044084_1 "dEQP-GLES3.functional.draw.instanc"
#define VkglTestCase_044084_2 "ing.draw_arrays_instanced_grid_2x2"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044084, VkglTestCase_044084_1, VkglTestCase_044084_2);

#define VkglTestCase_044085_1 "dEQP-GLES3.functional.draw.instanc"
#define VkglTestCase_044085_2 "ing.draw_arrays_instanced_grid_5x5"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044085, VkglTestCase_044085_1, VkglTestCase_044085_2);

#define VkglTestCase_044086_1 "dEQP-GLES3.functional.draw.instanci"
#define VkglTestCase_044086_2 "ng.draw_arrays_instanced_grid_10x10"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044086, VkglTestCase_044086_1, VkglTestCase_044086_2);

#define VkglTestCase_044087_1 "dEQP-GLES3.functional.draw.instanci"
#define VkglTestCase_044087_2 "ng.draw_arrays_instanced_grid_32x32"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044087, VkglTestCase_044087_1, VkglTestCase_044087_2);

#define VkglTestCase_044088_1 "dEQP-GLES3.functional.draw.instancin"
#define VkglTestCase_044088_2 "g.draw_arrays_instanced_grid_100x100"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044088, VkglTestCase_044088_1, VkglTestCase_044088_2);

#define VkglTestCase_044089_1 "dEQP-GLES3.functional.draw.instanci"
#define VkglTestCase_044089_2 "ng.draw_elements_instanced_grid_2x2"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044089, VkglTestCase_044089_1, VkglTestCase_044089_2);

#define VkglTestCase_044090_1 "dEQP-GLES3.functional.draw.instanci"
#define VkglTestCase_044090_2 "ng.draw_elements_instanced_grid_5x5"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044090, VkglTestCase_044090_1, VkglTestCase_044090_2);

#define VkglTestCase_044091_1 "dEQP-GLES3.functional.draw.instancin"
#define VkglTestCase_044091_2 "g.draw_elements_instanced_grid_10x10"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044091, VkglTestCase_044091_1, VkglTestCase_044091_2);

#define VkglTestCase_044092_1 "dEQP-GLES3.functional.draw.instancin"
#define VkglTestCase_044092_2 "g.draw_elements_instanced_grid_32x32"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044092, VkglTestCase_044092_1, VkglTestCase_044092_2);

#define VkglTestCase_044093_1 "dEQP-GLES3.functional.draw.instancing"
#define VkglTestCase_044093_2 ".draw_elements_instanced_grid_100x100"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044093, VkglTestCase_044093_1, VkglTestCase_044093_2);
