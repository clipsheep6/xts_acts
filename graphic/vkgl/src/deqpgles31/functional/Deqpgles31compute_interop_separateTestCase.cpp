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

#define VkglTestCase_007783_1 "dEQP-GLES31.functional.draw_indirect.compu"
#define VkglTestCase_007783_2 "te_interop.separate.drawarrays_compute_cmd"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007783, VkglTestCase_007783_1, VkglTestCase_007783_2);

#define VkglTestCase_007784_1 "dEQP-GLES31.functional.draw_indirect.compu"
#define VkglTestCase_007784_2 "te_interop.separate.drawarrays_compute_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007784, VkglTestCase_007784_1, VkglTestCase_007784_2);

#define VkglTestCase_007785_1 "dEQP-GLES31.functional.draw_indirect.compute_i"
#define VkglTestCase_007785_2 "nterop.separate.drawarrays_compute_cmd_and_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007785, VkglTestCase_007785_1, VkglTestCase_007785_2);

#define VkglTestCase_007786_1 "dEQP-GLES31.functional.draw_indirect.comput"
#define VkglTestCase_007786_2 "e_interop.separate.drawelements_compute_cmd"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007786, VkglTestCase_007786_1, VkglTestCase_007786_2);

#define VkglTestCase_007787_1 "dEQP-GLES31.functional.draw_indirect.comput"
#define VkglTestCase_007787_2 "e_interop.separate.drawelements_compute_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007787, VkglTestCase_007787_1, VkglTestCase_007787_2);

#define VkglTestCase_007788_1 "dEQP-GLES31.functional.draw_indirect.compute_"
#define VkglTestCase_007788_2 "interop.separate.drawelements_compute_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007788, VkglTestCase_007788_1, VkglTestCase_007788_2);

#define VkglTestCase_007789_1 "dEQP-GLES31.functional.draw_indirect.compute_in"
#define VkglTestCase_007789_2 "terop.separate.drawelements_compute_cmd_and_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007789, VkglTestCase_007789_1, VkglTestCase_007789_2);

#define VkglTestCase_007790_1 "dEQP-GLES31.functional.draw_indirect.compute_inte"
#define VkglTestCase_007790_2 "rop.separate.drawelements_compute_cmd_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007790, VkglTestCase_007790_1, VkglTestCase_007790_2);

#define VkglTestCase_007791_1 "dEQP-GLES31.functional.draw_indirect.compute_inte"
#define VkglTestCase_007791_2 "rop.separate.drawelements_compute_data_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007791, VkglTestCase_007791_1, VkglTestCase_007791_2);

#define VkglTestCase_007792_1 "dEQP-GLES31.functional.draw_indirect.compute_interop."
#define VkglTestCase_007792_2 "separate.drawelements_compute_cmd_and_data_and_indices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007792, VkglTestCase_007792_1, VkglTestCase_007792_2);
