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

#define VkglTestCase_039951_1 "dEQP-GLES3.functional.primitive_restart.b"
#define VkglTestCase_039951_2 "asic.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039951, VkglTestCase_039951_1, VkglTestCase_039951_2);

#define VkglTestCase_039952_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039952_2 "line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039952, VkglTestCase_039952_1, VkglTestCase_039952_2);

#define VkglTestCase_039953_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039953_2 "c.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039953, VkglTestCase_039953_1, VkglTestCase_039953_2);

#define VkglTestCase_040014_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040014_2 "e_restarts.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040014, VkglTestCase_040014_1, VkglTestCase_040014_2);

#define VkglTestCase_040015_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040015_2 "tarts.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040015, VkglTestCase_040015_1, VkglTestCase_040015_2);

#define VkglTestCase_040016_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040016_2 "estarts.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040016, VkglTestCase_040016_1, VkglTestCase_040016_2);

#define VkglTestCase_040077_1 "dEQP-GLES3.functional.primitive_restart.end_"
#define VkglTestCase_040077_2 "restart.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040077, VkglTestCase_040077_1, VkglTestCase_040077_2);

#define VkglTestCase_040078_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040078_2 "rt.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040078, VkglTestCase_040078_1, VkglTestCase_040078_2);

#define VkglTestCase_040079_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040079_2 "tart.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040079, VkglTestCase_040079_1, VkglTestCase_040079_2);

#define VkglTestCase_040140_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040140_2 "plicate_restarts.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040140, VkglTestCase_040140_1, VkglTestCase_040140_2);

#define VkglTestCase_040141_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040141_2 "te_restarts.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040141, VkglTestCase_040141_1, VkglTestCase_040141_2);

#define VkglTestCase_040142_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040142_2 "cate_restarts.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040142, VkglTestCase_040142_1, VkglTestCase_040142_2);

#define VkglTestCase_040203_1 "dEQP-GLES3.functional.primitive_restart.begin"
#define VkglTestCase_040203_2 "_restart.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040203, VkglTestCase_040203_1, VkglTestCase_040203_2);

#define VkglTestCase_040204_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040204_2 "art.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040204, VkglTestCase_040204_1, VkglTestCase_040204_2);

#define VkglTestCase_040205_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040205_2 "start.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040205, VkglTestCase_040205_1, VkglTestCase_040205_2);

#define VkglTestCase_040266_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040266_2 "uplicate_restarts.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040266, VkglTestCase_040266_1, VkglTestCase_040266_2);

#define VkglTestCase_040267_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040267_2 "ate_restarts.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040267, VkglTestCase_040267_1, VkglTestCase_040267_2);

#define VkglTestCase_040268_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040268_2 "icate_restarts.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040268, VkglTestCase_040268_1, VkglTestCase_040268_2);

#define VkglTestCase_040329_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040329_2 "rt_end_restart.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040329, VkglTestCase_040329_1, VkglTestCase_040329_2);

#define VkglTestCase_040330_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040330_2 "d_restart.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040330, VkglTestCase_040330_1, VkglTestCase_040330_2);

#define VkglTestCase_040331_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040331_2 "end_restart.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040331, VkglTestCase_040331_1, VkglTestCase_040331_2);

#define VkglTestCase_040392_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040392_2 "tart_duplicate_restarts.line_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040392, VkglTestCase_040392_1, VkglTestCase_040392_2);

#define VkglTestCase_040393_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040393_2 "duplicate_restarts.line_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040393, VkglTestCase_040393_1, VkglTestCase_040393_2);

#define VkglTestCase_040394_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040394_2 "t_duplicate_restarts.line_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040394, VkglTestCase_040394_1, VkglTestCase_040394_2);
