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

#define VkglTestCase_007793_1 "dEQP-GLES31.functional.draw_indirect.compute_i"
#define VkglTestCase_007793_2 "nterop.combined.drawarrays_compute_cmd_and_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007793, VkglTestCase_007793_1, VkglTestCase_007793_2);

#define VkglTestCase_007794_1 "dEQP-GLES31.functional.draw_indirect.compute_in"
#define VkglTestCase_007794_2 "terop.combined.drawelements_compute_cmd_and_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007794, VkglTestCase_007794_1, VkglTestCase_007794_2);

#define VkglTestCase_007795_1 "dEQP-GLES31.functional.draw_indirect.compute_inte"
#define VkglTestCase_007795_2 "rop.combined.drawelements_compute_cmd_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007795, VkglTestCase_007795_1, VkglTestCase_007795_2);

#define VkglTestCase_007796_1 "dEQP-GLES31.functional.draw_indirect.compute_inte"
#define VkglTestCase_007796_2 "rop.combined.drawelements_compute_data_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007796, VkglTestCase_007796_1, VkglTestCase_007796_2);

#define VkglTestCase_007797_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007797_2 "combined.drawelements_compute_cmd_and_data_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007797, VkglTestCase_007797_1, VkglTestCase_007797_2);
