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

#define VkglTestCase_007720_1 "dEQP-GLES31.functional.draw_indirect.draw_ar"
#define VkglTestCase_007720_2 "rays_indirect.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007720, VkglTestCase_007720_1, VkglTestCase_007720_2);

#define VkglTestCase_007721_1 "dEQP-GLES31.functional.draw_indirect.draw_arra"
#define VkglTestCase_007721_2 "ys_indirect.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007721, VkglTestCase_007721_1, VkglTestCase_007721_2);

#define VkglTestCase_007722_1 "dEQP-GLES31.functional.draw_indirect.draw_arra"
#define VkglTestCase_007722_2 "ys_indirect.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007722, VkglTestCase_007722_1, VkglTestCase_007722_2);

#define VkglTestCase_007723_1 "dEQP-GLES31.functional.draw_indirect.draw_arr"
#define VkglTestCase_007723_2 "ays_indirect.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007723, VkglTestCase_007723_1, VkglTestCase_007723_2);
