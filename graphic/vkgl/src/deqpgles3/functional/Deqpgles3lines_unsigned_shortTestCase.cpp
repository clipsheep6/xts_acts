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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039966_1 "dEQP-GLES3.functional.primitive_restart."
#define VkglTestCase_039966_2 "basic.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039966, VkglTestCase_039966_1, VkglTestCase_039966_2);

#define VkglTestCase_039967_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039967_2 ".lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039967, VkglTestCase_039967_1, VkglTestCase_039967_2);

#define VkglTestCase_039968_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039968_2 "ic.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039968, VkglTestCase_039968_1, VkglTestCase_039968_2);

#define VkglTestCase_040029_1 "dEQP-GLES3.functional.primitive_restart.duplic"
#define VkglTestCase_040029_2 "ate_restarts.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040029, VkglTestCase_040029_1, VkglTestCase_040029_2);

#define VkglTestCase_040030_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040030_2 "estarts.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040030, VkglTestCase_040030_1, VkglTestCase_040030_2);

#define VkglTestCase_040031_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040031_2 "_restarts.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040031, VkglTestCase_040031_1, VkglTestCase_040031_2);

#define VkglTestCase_040092_1 "dEQP-GLES3.functional.primitive_restart.end"
#define VkglTestCase_040092_2 "_restart.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040092, VkglTestCase_040092_1, VkglTestCase_040092_2);

#define VkglTestCase_040093_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040093_2 "art.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040093, VkglTestCase_040093_1, VkglTestCase_040093_2);

#define VkglTestCase_040094_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040094_2 "start.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040094, VkglTestCase_040094_1, VkglTestCase_040094_2);

#define VkglTestCase_040155_1 "dEQP-GLES3.functional.primitive_restart.end_restart_"
#define VkglTestCase_040155_2 "duplicate_restarts.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040155, VkglTestCase_040155_1, VkglTestCase_040155_2);

#define VkglTestCase_040156_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040156_2 "cate_restarts.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040156, VkglTestCase_040156_1, VkglTestCase_040156_2);

#define VkglTestCase_040157_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040157_2 "licate_restarts.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040157, VkglTestCase_040157_1, VkglTestCase_040157_2);

#define VkglTestCase_040218_1 "dEQP-GLES3.functional.primitive_restart.begi"
#define VkglTestCase_040218_2 "n_restart.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040218, VkglTestCase_040218_1, VkglTestCase_040218_2);

#define VkglTestCase_040219_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040219_2 "tart.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040219, VkglTestCase_040219_1, VkglTestCase_040219_2);

#define VkglTestCase_040220_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040220_2 "estart.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040220, VkglTestCase_040220_1, VkglTestCase_040220_2);

#define VkglTestCase_040281_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040281_2 "_duplicate_restarts.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040281, VkglTestCase_040281_1, VkglTestCase_040281_2);

#define VkglTestCase_040282_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040282_2 "icate_restarts.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040282, VkglTestCase_040282_1, VkglTestCase_040282_2);

#define VkglTestCase_040283_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040283_2 "plicate_restarts.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040283, VkglTestCase_040283_1, VkglTestCase_040283_2);

#define VkglTestCase_040344_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040344_2 "art_end_restart.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040344, VkglTestCase_040344_1, VkglTestCase_040344_2);

#define VkglTestCase_040345_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040345_2 "nd_restart.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040345, VkglTestCase_040345_1, VkglTestCase_040345_2);

#define VkglTestCase_040346_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040346_2 "_end_restart.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040346, VkglTestCase_040346_1, VkglTestCase_040346_2);

#define VkglTestCase_040407_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040407_2 "estart_duplicate_restarts.lines.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040407, VkglTestCase_040407_1, VkglTestCase_040407_2);

#define VkglTestCase_040408_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040408_2 "t_duplicate_restarts.lines.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040408, VkglTestCase_040408_1, VkglTestCase_040408_2);

#define VkglTestCase_040409_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040409_2 "art_duplicate_restarts.lines.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040409, VkglTestCase_040409_1, VkglTestCase_040409_2);
