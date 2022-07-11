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

#define VkglTestCase_007712_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007712_2 "arrays_indirect.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007712, VkglTestCase_007712_1, VkglTestCase_007712_2);

#define VkglTestCase_007713_1 "dEQP-GLES31.functional.draw_indirect.draw_a"
#define VkglTestCase_007713_2 "rrays_indirect.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007713, VkglTestCase_007713_1, VkglTestCase_007713_2);

#define VkglTestCase_007714_1 "dEQP-GLES31.functional.draw_indirect.draw_ar"
#define VkglTestCase_007714_2 "rays_indirect.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007714, VkglTestCase_007714_1, VkglTestCase_007714_2);

#define VkglTestCase_007715_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007715_2 "arrays_indirect.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007715, VkglTestCase_007715_1, VkglTestCase_007715_2);
