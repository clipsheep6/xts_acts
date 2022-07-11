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

#define VkglTestCase_039984_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039984_2 "ic.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039984, VkglTestCase_039984_1, VkglTestCase_039984_2);

#define VkglTestCase_039985_1 "dEQP-GLES3.functional.primitive_restart.basic.tr"
#define VkglTestCase_039985_2 "iangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039985, VkglTestCase_039985_1, VkglTestCase_039985_2);

#define VkglTestCase_039986_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039986_2 "triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039986, VkglTestCase_039986_1, VkglTestCase_039986_2);

#define VkglTestCase_040047_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040047_2 "restarts.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040047, VkglTestCase_040047_1, VkglTestCase_040047_2);

#define VkglTestCase_040048_1 "dEQP-GLES3.functional.primitive_restart.duplicate_resta"
#define VkglTestCase_040048_2 "rts.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040048, VkglTestCase_040048_1, VkglTestCase_040048_2);

#define VkglTestCase_040049_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040049_2 "tarts.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040049, VkglTestCase_040049_1, VkglTestCase_040049_2);

#define VkglTestCase_040110_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040110_2 "start.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040110, VkglTestCase_040110_1, VkglTestCase_040110_2);

#define VkglTestCase_040111_1 "dEQP-GLES3.functional.primitive_restart.end_restart"
#define VkglTestCase_040111_2 ".triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040111, VkglTestCase_040111_1, VkglTestCase_040111_2);

#define VkglTestCase_040112_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040112_2 "rt.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040112, VkglTestCase_040112_1, VkglTestCase_040112_2);

#define VkglTestCase_040173_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040173_2 "icate_restarts.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040173, VkglTestCase_040173_1, VkglTestCase_040173_2);

#define VkglTestCase_040174_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicate"
#define VkglTestCase_040174_2 "_restarts.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040174, VkglTestCase_040174_1, VkglTestCase_040174_2);

#define VkglTestCase_040175_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040175_2 "te_restarts.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040175, VkglTestCase_040175_1, VkglTestCase_040175_2);

#define VkglTestCase_040236_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040236_2 "estart.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040236, VkglTestCase_040236_1, VkglTestCase_040236_2);

#define VkglTestCase_040237_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040237_2 "t.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040237, VkglTestCase_040237_1, VkglTestCase_040237_2);

#define VkglTestCase_040238_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040238_2 "art.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040238, VkglTestCase_040238_1, VkglTestCase_040238_2);

#define VkglTestCase_040299_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040299_2 "licate_restarts.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040299, VkglTestCase_040299_1, VkglTestCase_040299_2);

#define VkglTestCase_040300_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplicat"
#define VkglTestCase_040300_2 "e_restarts.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040300, VkglTestCase_040300_1, VkglTestCase_040300_2);

#define VkglTestCase_040301_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040301_2 "ate_restarts.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040301, VkglTestCase_040301_1, VkglTestCase_040301_2);

#define VkglTestCase_040362_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040362_2 "_end_restart.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040362, VkglTestCase_040362_1, VkglTestCase_040362_2);

#define VkglTestCase_040363_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_"
#define VkglTestCase_040363_2 "restart.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040363, VkglTestCase_040363_1, VkglTestCase_040363_2);

#define VkglTestCase_040364_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040364_2 "d_restart.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040364, VkglTestCase_040364_1, VkglTestCase_040364_2);

#define VkglTestCase_040425_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040425_2 "rt_duplicate_restarts.triangle_fan.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040425, VkglTestCase_040425_1, VkglTestCase_040425_2);

#define VkglTestCase_040426_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_du"
#define VkglTestCase_040426_2 "plicate_restarts.triangle_fan.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040426, VkglTestCase_040426_1, VkglTestCase_040426_2);

#define VkglTestCase_040427_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040427_2 "duplicate_restarts.triangle_fan.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040427, VkglTestCase_040427_1, VkglTestCase_040427_2);
