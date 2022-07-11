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

#define VkglTestCase_039945_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039945_2 "sic.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039945, VkglTestCase_039945_1, VkglTestCase_039945_2);

#define VkglTestCase_039946_1 "dEQP-GLES3.functional.primitive_restart.basic.l"
#define VkglTestCase_039946_2 "ine_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039946, VkglTestCase_039946_1, VkglTestCase_039946_2);

#define VkglTestCase_039947_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039947_2 ".line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039947, VkglTestCase_039947_1, VkglTestCase_039947_2);

#define VkglTestCase_040008_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040008_2 "e_restarts.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040008, VkglTestCase_040008_1, VkglTestCase_040008_2);

#define VkglTestCase_040009_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040009_2 "tarts.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040009, VkglTestCase_040009_1, VkglTestCase_040009_2);

#define VkglTestCase_040010_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040010_2 "estarts.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040010, VkglTestCase_040010_1, VkglTestCase_040010_2);

#define VkglTestCase_040071_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040071_2 "estart.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040071, VkglTestCase_040071_1, VkglTestCase_040071_2);

#define VkglTestCase_040072_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040072_2 "t.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040072, VkglTestCase_040072_1, VkglTestCase_040072_2);

#define VkglTestCase_040073_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040073_2 "art.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040073, VkglTestCase_040073_1, VkglTestCase_040073_2);

#define VkglTestCase_040134_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040134_2 "plicate_restarts.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040134, VkglTestCase_040134_1, VkglTestCase_040134_2);

#define VkglTestCase_040135_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040135_2 "te_restarts.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040135, VkglTestCase_040135_1, VkglTestCase_040135_2);

#define VkglTestCase_040136_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040136_2 "cate_restarts.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040136, VkglTestCase_040136_1, VkglTestCase_040136_2);

#define VkglTestCase_040197_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040197_2 "restart.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040197, VkglTestCase_040197_1, VkglTestCase_040197_2);

#define VkglTestCase_040198_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040198_2 "rt.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040198, VkglTestCase_040198_1, VkglTestCase_040198_2);

#define VkglTestCase_040199_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040199_2 "tart.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040199, VkglTestCase_040199_1, VkglTestCase_040199_2);

#define VkglTestCase_040260_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040260_2 "uplicate_restarts.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040260, VkglTestCase_040260_1, VkglTestCase_040260_2);

#define VkglTestCase_040261_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040261_2 "ate_restarts.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040261, VkglTestCase_040261_1, VkglTestCase_040261_2);

#define VkglTestCase_040262_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040262_2 "icate_restarts.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040262, VkglTestCase_040262_1, VkglTestCase_040262_2);

#define VkglTestCase_040323_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040323_2 "t_end_restart.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040323, VkglTestCase_040323_1, VkglTestCase_040323_2);

#define VkglTestCase_040324_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040324_2 "_restart.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040324, VkglTestCase_040324_1, VkglTestCase_040324_2);

#define VkglTestCase_040325_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040325_2 "nd_restart.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040325, VkglTestCase_040325_1, VkglTestCase_040325_2);

#define VkglTestCase_040386_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040386_2 "tart_duplicate_restarts.line_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040386, VkglTestCase_040386_1, VkglTestCase_040386_2);

#define VkglTestCase_040387_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040387_2 "duplicate_restarts.line_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040387, VkglTestCase_040387_1, VkglTestCase_040387_2);

#define VkglTestCase_040388_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040388_2 "t_duplicate_restarts.line_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040388, VkglTestCase_040388_1, VkglTestCase_040388_2);
