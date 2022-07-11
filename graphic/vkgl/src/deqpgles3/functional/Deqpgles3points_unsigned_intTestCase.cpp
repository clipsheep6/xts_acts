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

#define VkglTestCase_039942_1 "dEQP-GLES3.functional.primitive_restart"
#define VkglTestCase_039942_2 ".basic.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039942, VkglTestCase_039942_1, VkglTestCase_039942_2);

#define VkglTestCase_039943_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039943_2 "c.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039943, VkglTestCase_039943_1, VkglTestCase_039943_2);

#define VkglTestCase_039944_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039944_2 "sic.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039944, VkglTestCase_039944_1, VkglTestCase_039944_2);

#define VkglTestCase_040005_1 "dEQP-GLES3.functional.primitive_restart.duplic"
#define VkglTestCase_040005_2 "ate_restarts.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040005, VkglTestCase_040005_1, VkglTestCase_040005_2);

#define VkglTestCase_040006_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040006_2 "estarts.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040006, VkglTestCase_040006_1, VkglTestCase_040006_2);

#define VkglTestCase_040007_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040007_2 "_restarts.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040007, VkglTestCase_040007_1, VkglTestCase_040007_2);

#define VkglTestCase_040068_1 "dEQP-GLES3.functional.primitive_restart.en"
#define VkglTestCase_040068_2 "d_restart.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040068, VkglTestCase_040068_1, VkglTestCase_040068_2);

#define VkglTestCase_040069_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040069_2 "tart.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040069, VkglTestCase_040069_1, VkglTestCase_040069_2);

#define VkglTestCase_040070_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040070_2 "estart.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040070, VkglTestCase_040070_1, VkglTestCase_040070_2);

#define VkglTestCase_040131_1 "dEQP-GLES3.functional.primitive_restart.end_restart_"
#define VkglTestCase_040131_2 "duplicate_restarts.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040131, VkglTestCase_040131_1, VkglTestCase_040131_2);

#define VkglTestCase_040132_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040132_2 "cate_restarts.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040132, VkglTestCase_040132_1, VkglTestCase_040132_2);

#define VkglTestCase_040133_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040133_2 "licate_restarts.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040133, VkglTestCase_040133_1, VkglTestCase_040133_2);

#define VkglTestCase_040194_1 "dEQP-GLES3.functional.primitive_restart.beg"
#define VkglTestCase_040194_2 "in_restart.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040194, VkglTestCase_040194_1, VkglTestCase_040194_2);

#define VkglTestCase_040195_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040195_2 "start.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040195, VkglTestCase_040195_1, VkglTestCase_040195_2);

#define VkglTestCase_040196_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040196_2 "restart.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040196, VkglTestCase_040196_1, VkglTestCase_040196_2);

#define VkglTestCase_040257_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040257_2 "_duplicate_restarts.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040257, VkglTestCase_040257_1, VkglTestCase_040257_2);

#define VkglTestCase_040258_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040258_2 "icate_restarts.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040258, VkglTestCase_040258_1, VkglTestCase_040258_2);

#define VkglTestCase_040259_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040259_2 "plicate_restarts.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040259, VkglTestCase_040259_1, VkglTestCase_040259_2);

#define VkglTestCase_040320_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040320_2 "tart_end_restart.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040320, VkglTestCase_040320_1, VkglTestCase_040320_2);

#define VkglTestCase_040321_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040321_2 "end_restart.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040321, VkglTestCase_040321_1, VkglTestCase_040321_2);

#define VkglTestCase_040322_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040322_2 "t_end_restart.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040322, VkglTestCase_040322_1, VkglTestCase_040322_2);

#define VkglTestCase_040383_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040383_2 "estart_duplicate_restarts.points.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040383, VkglTestCase_040383_1, VkglTestCase_040383_2);

#define VkglTestCase_040384_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040384_2 "t_duplicate_restarts.points.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040384, VkglTestCase_040384_1, VkglTestCase_040384_2);

#define VkglTestCase_040385_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040385_2 "art_duplicate_restarts.points.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040385, VkglTestCase_040385_1, VkglTestCase_040385_2);
