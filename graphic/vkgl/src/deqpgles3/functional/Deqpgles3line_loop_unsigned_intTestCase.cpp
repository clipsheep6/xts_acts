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

#define VkglTestCase_039960_1 "dEQP-GLES3.functional.primitive_restart.b"
#define VkglTestCase_039960_2 "asic.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039960, VkglTestCase_039960_1, VkglTestCase_039960_2);

#define VkglTestCase_039961_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039961_2 "line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039961, VkglTestCase_039961_1, VkglTestCase_039961_2);

#define VkglTestCase_039962_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039962_2 "c.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039962, VkglTestCase_039962_1, VkglTestCase_039962_2);

#define VkglTestCase_040023_1 "dEQP-GLES3.functional.primitive_restart.duplica"
#define VkglTestCase_040023_2 "te_restarts.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040023, VkglTestCase_040023_1, VkglTestCase_040023_2);

#define VkglTestCase_040024_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040024_2 "starts.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040024, VkglTestCase_040024_1, VkglTestCase_040024_2);

#define VkglTestCase_040025_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040025_2 "restarts.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040025, VkglTestCase_040025_1, VkglTestCase_040025_2);

#define VkglTestCase_040086_1 "dEQP-GLES3.functional.primitive_restart.end_"
#define VkglTestCase_040086_2 "restart.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040086, VkglTestCase_040086_1, VkglTestCase_040086_2);

#define VkglTestCase_040087_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040087_2 "rt.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040087, VkglTestCase_040087_1, VkglTestCase_040087_2);

#define VkglTestCase_040088_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040088_2 "tart.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040088, VkglTestCase_040088_1, VkglTestCase_040088_2);

#define VkglTestCase_040149_1 "dEQP-GLES3.functional.primitive_restart.end_restart_d"
#define VkglTestCase_040149_2 "uplicate_restarts.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040149, VkglTestCase_040149_1, VkglTestCase_040149_2);

#define VkglTestCase_040150_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040150_2 "ate_restarts.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040150, VkglTestCase_040150_1, VkglTestCase_040150_2);

#define VkglTestCase_040151_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040151_2 "icate_restarts.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040151, VkglTestCase_040151_1, VkglTestCase_040151_2);

#define VkglTestCase_040212_1 "dEQP-GLES3.functional.primitive_restart.begin"
#define VkglTestCase_040212_2 "_restart.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040212, VkglTestCase_040212_1, VkglTestCase_040212_2);

#define VkglTestCase_040213_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040213_2 "art.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040213, VkglTestCase_040213_1, VkglTestCase_040213_2);

#define VkglTestCase_040214_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040214_2 "start.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040214, VkglTestCase_040214_1, VkglTestCase_040214_2);

#define VkglTestCase_040275_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040275_2 "duplicate_restarts.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040275, VkglTestCase_040275_1, VkglTestCase_040275_2);

#define VkglTestCase_040276_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040276_2 "cate_restarts.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040276, VkglTestCase_040276_1, VkglTestCase_040276_2);

#define VkglTestCase_040277_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040277_2 "licate_restarts.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040277, VkglTestCase_040277_1, VkglTestCase_040277_2);

#define VkglTestCase_040338_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040338_2 "rt_end_restart.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040338, VkglTestCase_040338_1, VkglTestCase_040338_2);

#define VkglTestCase_040339_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040339_2 "d_restart.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040339, VkglTestCase_040339_1, VkglTestCase_040339_2);

#define VkglTestCase_040340_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040340_2 "end_restart.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040340, VkglTestCase_040340_1, VkglTestCase_040340_2);

#define VkglTestCase_040401_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_re"
#define VkglTestCase_040401_2 "start_duplicate_restarts.line_loop.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040401, VkglTestCase_040401_1, VkglTestCase_040401_2);

#define VkglTestCase_040402_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040402_2 "_duplicate_restarts.line_loop.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040402, VkglTestCase_040402_1, VkglTestCase_040402_2);

#define VkglTestCase_040403_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040403_2 "rt_duplicate_restarts.line_loop.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040403, VkglTestCase_040403_1, VkglTestCase_040403_2);
