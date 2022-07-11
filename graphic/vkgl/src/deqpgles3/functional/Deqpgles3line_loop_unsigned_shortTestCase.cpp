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

#define VkglTestCase_039957_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039957_2 "sic.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039957, VkglTestCase_039957_1, VkglTestCase_039957_2);

#define VkglTestCase_039958_1 "dEQP-GLES3.functional.primitive_restart.basic.l"
#define VkglTestCase_039958_2 "ine_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039958, VkglTestCase_039958_1, VkglTestCase_039958_2);

#define VkglTestCase_039959_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039959_2 ".line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039959, VkglTestCase_039959_1, VkglTestCase_039959_2);

#define VkglTestCase_040020_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040020_2 "e_restarts.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040020, VkglTestCase_040020_1, VkglTestCase_040020_2);

#define VkglTestCase_040021_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040021_2 "tarts.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040021, VkglTestCase_040021_1, VkglTestCase_040021_2);

#define VkglTestCase_040022_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040022_2 "estarts.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040022, VkglTestCase_040022_1, VkglTestCase_040022_2);

#define VkglTestCase_040083_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040083_2 "estart.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040083, VkglTestCase_040083_1, VkglTestCase_040083_2);

#define VkglTestCase_040084_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040084_2 "t.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040084, VkglTestCase_040084_1, VkglTestCase_040084_2);

#define VkglTestCase_040085_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040085_2 "art.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040085, VkglTestCase_040085_1, VkglTestCase_040085_2);

#define VkglTestCase_040146_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040146_2 "plicate_restarts.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040146, VkglTestCase_040146_1, VkglTestCase_040146_2);

#define VkglTestCase_040147_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040147_2 "te_restarts.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040147, VkglTestCase_040147_1, VkglTestCase_040147_2);

#define VkglTestCase_040148_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040148_2 "cate_restarts.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040148, VkglTestCase_040148_1, VkglTestCase_040148_2);

#define VkglTestCase_040209_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040209_2 "restart.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040209, VkglTestCase_040209_1, VkglTestCase_040209_2);

#define VkglTestCase_040210_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040210_2 "rt.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040210, VkglTestCase_040210_1, VkglTestCase_040210_2);

#define VkglTestCase_040211_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040211_2 "tart.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040211, VkglTestCase_040211_1, VkglTestCase_040211_2);

#define VkglTestCase_040272_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040272_2 "uplicate_restarts.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040272, VkglTestCase_040272_1, VkglTestCase_040272_2);

#define VkglTestCase_040273_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040273_2 "ate_restarts.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040273, VkglTestCase_040273_1, VkglTestCase_040273_2);

#define VkglTestCase_040274_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040274_2 "icate_restarts.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040274, VkglTestCase_040274_1, VkglTestCase_040274_2);

#define VkglTestCase_040335_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040335_2 "t_end_restart.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040335, VkglTestCase_040335_1, VkglTestCase_040335_2);

#define VkglTestCase_040336_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040336_2 "_restart.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040336, VkglTestCase_040336_1, VkglTestCase_040336_2);

#define VkglTestCase_040337_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040337_2 "nd_restart.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040337, VkglTestCase_040337_1, VkglTestCase_040337_2);

#define VkglTestCase_040398_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040398_2 "tart_duplicate_restarts.line_loop.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040398, VkglTestCase_040398_1, VkglTestCase_040398_2);

#define VkglTestCase_040399_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040399_2 "duplicate_restarts.line_loop.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040399, VkglTestCase_040399_1, VkglTestCase_040399_2);

#define VkglTestCase_040400_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040400_2 "t_duplicate_restarts.line_loop.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040400, VkglTestCase_040400_1, VkglTestCase_040400_2);
