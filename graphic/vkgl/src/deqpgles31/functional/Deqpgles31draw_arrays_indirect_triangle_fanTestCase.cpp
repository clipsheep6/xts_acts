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

#define VkglTestCase_007716_1 "dEQP-GLES31.functional.draw_indirect.draw_a"
#define VkglTestCase_007716_2 "rrays_indirect.triangle_fan.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007716, VkglTestCase_007716_1, VkglTestCase_007716_2);

#define VkglTestCase_007717_1 "dEQP-GLES31.functional.draw_indirect.draw_arr"
#define VkglTestCase_007717_2 "ays_indirect.triangle_fan.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007717, VkglTestCase_007717_1, VkglTestCase_007717_2);

#define VkglTestCase_007718_1 "dEQP-GLES31.functional.draw_indirect.draw_arr"
#define VkglTestCase_007718_2 "ays_indirect.triangle_fan.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007718, VkglTestCase_007718_1, VkglTestCase_007718_2);

#define VkglTestCase_007719_1 "dEQP-GLES31.functional.draw_indirect.draw_ar"
#define VkglTestCase_007719_2 "rays_indirect.triangle_fan.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007719, VkglTestCase_007719_1, VkglTestCase_007719_2);
