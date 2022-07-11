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

#define VkglTestCase_039963_1 "dEQP-GLES3.functional.primitive_restart"
#define VkglTestCase_039963_2 ".basic.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039963, VkglTestCase_039963_1, VkglTestCase_039963_2);

#define VkglTestCase_039964_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039964_2 "c.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039964, VkglTestCase_039964_1, VkglTestCase_039964_2);

#define VkglTestCase_039965_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039965_2 "sic.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039965, VkglTestCase_039965_1, VkglTestCase_039965_2);

#define VkglTestCase_040026_1 "dEQP-GLES3.functional.primitive_restart.duplic"
#define VkglTestCase_040026_2 "ate_restarts.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040026, VkglTestCase_040026_1, VkglTestCase_040026_2);

#define VkglTestCase_040027_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040027_2 "estarts.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040027, VkglTestCase_040027_1, VkglTestCase_040027_2);

#define VkglTestCase_040028_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040028_2 "_restarts.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040028, VkglTestCase_040028_1, VkglTestCase_040028_2);

#define VkglTestCase_040089_1 "dEQP-GLES3.functional.primitive_restart.en"
#define VkglTestCase_040089_2 "d_restart.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040089, VkglTestCase_040089_1, VkglTestCase_040089_2);

#define VkglTestCase_040090_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040090_2 "tart.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040090, VkglTestCase_040090_1, VkglTestCase_040090_2);

#define VkglTestCase_040091_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040091_2 "estart.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040091, VkglTestCase_040091_1, VkglTestCase_040091_2);

#define VkglTestCase_040152_1 "dEQP-GLES3.functional.primitive_restart.end_restart_"
#define VkglTestCase_040152_2 "duplicate_restarts.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040152, VkglTestCase_040152_1, VkglTestCase_040152_2);

#define VkglTestCase_040153_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040153_2 "cate_restarts.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040153, VkglTestCase_040153_1, VkglTestCase_040153_2);

#define VkglTestCase_040154_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040154_2 "licate_restarts.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040154, VkglTestCase_040154_1, VkglTestCase_040154_2);

#define VkglTestCase_040215_1 "dEQP-GLES3.functional.primitive_restart.beg"
#define VkglTestCase_040215_2 "in_restart.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040215, VkglTestCase_040215_1, VkglTestCase_040215_2);

#define VkglTestCase_040216_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040216_2 "start.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040216, VkglTestCase_040216_1, VkglTestCase_040216_2);

#define VkglTestCase_040217_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040217_2 "restart.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040217, VkglTestCase_040217_1, VkglTestCase_040217_2);

#define VkglTestCase_040278_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040278_2 "_duplicate_restarts.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040278, VkglTestCase_040278_1, VkglTestCase_040278_2);

#define VkglTestCase_040279_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040279_2 "icate_restarts.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040279, VkglTestCase_040279_1, VkglTestCase_040279_2);

#define VkglTestCase_040280_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040280_2 "plicate_restarts.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040280, VkglTestCase_040280_1, VkglTestCase_040280_2);

#define VkglTestCase_040341_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040341_2 "tart_end_restart.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040341, VkglTestCase_040341_1, VkglTestCase_040341_2);

#define VkglTestCase_040342_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040342_2 "end_restart.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040342, VkglTestCase_040342_1, VkglTestCase_040342_2);

#define VkglTestCase_040343_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040343_2 "t_end_restart.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040343, VkglTestCase_040343_1, VkglTestCase_040343_2);

#define VkglTestCase_040404_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040404_2 "estart_duplicate_restarts.lines.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040404, VkglTestCase_040404_1, VkglTestCase_040404_2);

#define VkglTestCase_040405_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040405_2 "t_duplicate_restarts.lines.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040405, VkglTestCase_040405_1, VkglTestCase_040405_2);

#define VkglTestCase_040406_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040406_2 "art_duplicate_restarts.lines.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040406, VkglTestCase_040406_1, VkglTestCase_040406_2);
