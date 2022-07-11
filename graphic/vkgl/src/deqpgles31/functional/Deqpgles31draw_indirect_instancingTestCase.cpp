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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007773_1 "dEQP-GLES31.functional.draw_indirect.i"
#define VkglTestCase_007773_2 "nstancing.draw_arrays_indirect_grid_2x2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007773, VkglTestCase_007773_1, VkglTestCase_007773_2);

#define VkglTestCase_007774_1 "dEQP-GLES31.functional.draw_indirect.i"
#define VkglTestCase_007774_2 "nstancing.draw_arrays_indirect_grid_5x5"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007774, VkglTestCase_007774_1, VkglTestCase_007774_2);

#define VkglTestCase_007775_1 "dEQP-GLES31.functional.draw_indirect.in"
#define VkglTestCase_007775_2 "stancing.draw_arrays_indirect_grid_10x10"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007775, VkglTestCase_007775_1, VkglTestCase_007775_2);

#define VkglTestCase_007776_1 "dEQP-GLES31.functional.draw_indirect.in"
#define VkglTestCase_007776_2 "stancing.draw_arrays_indirect_grid_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007776, VkglTestCase_007776_1, VkglTestCase_007776_2);

#define VkglTestCase_007777_1 "dEQP-GLES31.functional.draw_indirect.ins"
#define VkglTestCase_007777_2 "tancing.draw_arrays_indirect_grid_100x100"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007777, VkglTestCase_007777_1, VkglTestCase_007777_2);

#define VkglTestCase_007778_1 "dEQP-GLES31.functional.draw_indirect.in"
#define VkglTestCase_007778_2 "stancing.draw_elements_indirect_grid_2x2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007778, VkglTestCase_007778_1, VkglTestCase_007778_2);

#define VkglTestCase_007779_1 "dEQP-GLES31.functional.draw_indirect.in"
#define VkglTestCase_007779_2 "stancing.draw_elements_indirect_grid_5x5"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007779, VkglTestCase_007779_1, VkglTestCase_007779_2);

#define VkglTestCase_007780_1 "dEQP-GLES31.functional.draw_indirect.ins"
#define VkglTestCase_007780_2 "tancing.draw_elements_indirect_grid_10x10"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007780, VkglTestCase_007780_1, VkglTestCase_007780_2);

#define VkglTestCase_007781_1 "dEQP-GLES31.functional.draw_indirect.ins"
#define VkglTestCase_007781_2 "tancing.draw_elements_indirect_grid_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007781, VkglTestCase_007781_1, VkglTestCase_007781_2);

#define VkglTestCase_007782_1 "dEQP-GLES31.functional.draw_indirect.inst"
#define VkglTestCase_007782_2 "ancing.draw_elements_indirect_grid_100x100"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007782, VkglTestCase_007782_1, VkglTestCase_007782_2);
