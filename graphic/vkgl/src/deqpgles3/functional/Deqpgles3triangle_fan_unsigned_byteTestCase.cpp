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

#define VkglTestCase_039981_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039981_2 "ic.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039981, VkglTestCase_039981_1, VkglTestCase_039981_2);

#define VkglTestCase_039982_1 "dEQP-GLES3.functional.primitive_restart.basic.tr"
#define VkglTestCase_039982_2 "iangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039982, VkglTestCase_039982_1, VkglTestCase_039982_2);

#define VkglTestCase_039983_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039983_2 "triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039983, VkglTestCase_039983_1, VkglTestCase_039983_2);

#define VkglTestCase_040044_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040044_2 "_restarts.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040044, VkglTestCase_040044_1, VkglTestCase_040044_2);

#define VkglTestCase_040045_1 "dEQP-GLES3.functional.primitive_restart.duplicate_rest"
#define VkglTestCase_040045_2 "arts.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040045, VkglTestCase_040045_1, VkglTestCase_040045_2);

#define VkglTestCase_040046_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040046_2 "starts.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040046, VkglTestCase_040046_1, VkglTestCase_040046_2);

#define VkglTestCase_040107_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040107_2 "start.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040107, VkglTestCase_040107_1, VkglTestCase_040107_2);

#define VkglTestCase_040108_1 "dEQP-GLES3.functional.primitive_restart.end_restart"
#define VkglTestCase_040108_2 ".triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040108, VkglTestCase_040108_1, VkglTestCase_040108_2);

#define VkglTestCase_040109_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040109_2 "rt.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040109, VkglTestCase_040109_1, VkglTestCase_040109_2);

#define VkglTestCase_040170_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040170_2 "licate_restarts.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040170, VkglTestCase_040170_1, VkglTestCase_040170_2);

#define VkglTestCase_040171_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicat"
#define VkglTestCase_040171_2 "e_restarts.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040171, VkglTestCase_040171_1, VkglTestCase_040171_2);

#define VkglTestCase_040172_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040172_2 "ate_restarts.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040172, VkglTestCase_040172_1, VkglTestCase_040172_2);

#define VkglTestCase_040233_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040233_2 "estart.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040233, VkglTestCase_040233_1, VkglTestCase_040233_2);

#define VkglTestCase_040234_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040234_2 "t.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040234, VkglTestCase_040234_1, VkglTestCase_040234_2);

#define VkglTestCase_040235_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040235_2 "art.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040235, VkglTestCase_040235_1, VkglTestCase_040235_2);

#define VkglTestCase_040296_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040296_2 "plicate_restarts.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040296, VkglTestCase_040296_1, VkglTestCase_040296_2);

#define VkglTestCase_040297_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplica"
#define VkglTestCase_040297_2 "te_restarts.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040297, VkglTestCase_040297_1, VkglTestCase_040297_2);

#define VkglTestCase_040298_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040298_2 "cate_restarts.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040298, VkglTestCase_040298_1, VkglTestCase_040298_2);

#define VkglTestCase_040359_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040359_2 "_end_restart.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040359, VkglTestCase_040359_1, VkglTestCase_040359_2);

#define VkglTestCase_040360_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_"
#define VkglTestCase_040360_2 "restart.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040360, VkglTestCase_040360_1, VkglTestCase_040360_2);

#define VkglTestCase_040361_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040361_2 "d_restart.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040361, VkglTestCase_040361_1, VkglTestCase_040361_2);

#define VkglTestCase_040422_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040422_2 "art_duplicate_restarts.triangle_fan.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040422, VkglTestCase_040422_1, VkglTestCase_040422_2);

#define VkglTestCase_040423_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_d"
#define VkglTestCase_040423_2 "uplicate_restarts.triangle_fan.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040423, VkglTestCase_040423_1, VkglTestCase_040423_2);

#define VkglTestCase_040424_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040424_2 "_duplicate_restarts.triangle_fan.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040424, VkglTestCase_040424_1, VkglTestCase_040424_2);
