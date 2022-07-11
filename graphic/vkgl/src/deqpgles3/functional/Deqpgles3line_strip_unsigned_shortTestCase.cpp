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

#define VkglTestCase_039948_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039948_2 "sic.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039948, VkglTestCase_039948_1, VkglTestCase_039948_2);

#define VkglTestCase_039949_1 "dEQP-GLES3.functional.primitive_restart.basic.l"
#define VkglTestCase_039949_2 "ine_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039949, VkglTestCase_039949_1, VkglTestCase_039949_2);

#define VkglTestCase_039950_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039950_2 ".line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039950, VkglTestCase_039950_1, VkglTestCase_039950_2);

#define VkglTestCase_040011_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040011_2 "_restarts.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040011, VkglTestCase_040011_1, VkglTestCase_040011_2);

#define VkglTestCase_040012_1 "dEQP-GLES3.functional.primitive_restart.duplicate_rest"
#define VkglTestCase_040012_2 "arts.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040012, VkglTestCase_040012_1, VkglTestCase_040012_2);

#define VkglTestCase_040013_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040013_2 "starts.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040013, VkglTestCase_040013_1, VkglTestCase_040013_2);

#define VkglTestCase_040074_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040074_2 "estart.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040074, VkglTestCase_040074_1, VkglTestCase_040074_2);

#define VkglTestCase_040075_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040075_2 "t.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040075, VkglTestCase_040075_1, VkglTestCase_040075_2);

#define VkglTestCase_040076_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040076_2 "art.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040076, VkglTestCase_040076_1, VkglTestCase_040076_2);

#define VkglTestCase_040137_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040137_2 "licate_restarts.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040137, VkglTestCase_040137_1, VkglTestCase_040137_2);

#define VkglTestCase_040138_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicat"
#define VkglTestCase_040138_2 "e_restarts.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040138, VkglTestCase_040138_1, VkglTestCase_040138_2);

#define VkglTestCase_040139_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040139_2 "ate_restarts.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040139, VkglTestCase_040139_1, VkglTestCase_040139_2);

#define VkglTestCase_040200_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040200_2 "restart.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040200, VkglTestCase_040200_1, VkglTestCase_040200_2);

#define VkglTestCase_040201_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040201_2 "rt.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040201, VkglTestCase_040201_1, VkglTestCase_040201_2);

#define VkglTestCase_040202_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040202_2 "tart.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040202, VkglTestCase_040202_1, VkglTestCase_040202_2);

#define VkglTestCase_040263_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040263_2 "plicate_restarts.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040263, VkglTestCase_040263_1, VkglTestCase_040263_2);

#define VkglTestCase_040264_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplica"
#define VkglTestCase_040264_2 "te_restarts.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040264, VkglTestCase_040264_1, VkglTestCase_040264_2);

#define VkglTestCase_040265_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040265_2 "cate_restarts.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040265, VkglTestCase_040265_1, VkglTestCase_040265_2);

#define VkglTestCase_040326_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040326_2 "t_end_restart.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040326, VkglTestCase_040326_1, VkglTestCase_040326_2);

#define VkglTestCase_040327_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040327_2 "_restart.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040327, VkglTestCase_040327_1, VkglTestCase_040327_2);

#define VkglTestCase_040328_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040328_2 "nd_restart.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040328, VkglTestCase_040328_1, VkglTestCase_040328_2);

#define VkglTestCase_040389_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040389_2 "art_duplicate_restarts.line_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040389, VkglTestCase_040389_1, VkglTestCase_040389_2);

#define VkglTestCase_040390_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_d"
#define VkglTestCase_040390_2 "uplicate_restarts.line_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040390, VkglTestCase_040390_1, VkglTestCase_040390_2);

#define VkglTestCase_040391_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040391_2 "_duplicate_restarts.line_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040391, VkglTestCase_040391_1, VkglTestCase_040391_2);
