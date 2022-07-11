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

#define VkglTestCase_039954_1 "dEQP-GLES3.functional.primitive_restart.b"
#define VkglTestCase_039954_2 "asic.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039954, VkglTestCase_039954_1, VkglTestCase_039954_2);

#define VkglTestCase_039955_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039955_2 "line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039955, VkglTestCase_039955_1, VkglTestCase_039955_2);

#define VkglTestCase_039956_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039956_2 "c.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039956, VkglTestCase_039956_1, VkglTestCase_039956_2);

#define VkglTestCase_040017_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040017_2 "e_restarts.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040017, VkglTestCase_040017_1, VkglTestCase_040017_2);

#define VkglTestCase_040018_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040018_2 "tarts.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040018, VkglTestCase_040018_1, VkglTestCase_040018_2);

#define VkglTestCase_040019_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040019_2 "estarts.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040019, VkglTestCase_040019_1, VkglTestCase_040019_2);

#define VkglTestCase_040080_1 "dEQP-GLES3.functional.primitive_restart.end_"
#define VkglTestCase_040080_2 "restart.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040080, VkglTestCase_040080_1, VkglTestCase_040080_2);

#define VkglTestCase_040081_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040081_2 "rt.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040081, VkglTestCase_040081_1, VkglTestCase_040081_2);

#define VkglTestCase_040082_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040082_2 "tart.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040082, VkglTestCase_040082_1, VkglTestCase_040082_2);

#define VkglTestCase_040143_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040143_2 "plicate_restarts.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040143, VkglTestCase_040143_1, VkglTestCase_040143_2);

#define VkglTestCase_040144_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040144_2 "te_restarts.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040144, VkglTestCase_040144_1, VkglTestCase_040144_2);

#define VkglTestCase_040145_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040145_2 "cate_restarts.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040145, VkglTestCase_040145_1, VkglTestCase_040145_2);

#define VkglTestCase_040206_1 "dEQP-GLES3.functional.primitive_restart.begin"
#define VkglTestCase_040206_2 "_restart.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040206, VkglTestCase_040206_1, VkglTestCase_040206_2);

#define VkglTestCase_040207_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040207_2 "art.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040207, VkglTestCase_040207_1, VkglTestCase_040207_2);

#define VkglTestCase_040208_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040208_2 "start.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040208, VkglTestCase_040208_1, VkglTestCase_040208_2);

#define VkglTestCase_040269_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040269_2 "uplicate_restarts.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040269, VkglTestCase_040269_1, VkglTestCase_040269_2);

#define VkglTestCase_040270_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040270_2 "ate_restarts.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040270, VkglTestCase_040270_1, VkglTestCase_040270_2);

#define VkglTestCase_040271_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040271_2 "icate_restarts.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040271, VkglTestCase_040271_1, VkglTestCase_040271_2);

#define VkglTestCase_040332_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040332_2 "rt_end_restart.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040332, VkglTestCase_040332_1, VkglTestCase_040332_2);

#define VkglTestCase_040333_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040333_2 "d_restart.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040333, VkglTestCase_040333_1, VkglTestCase_040333_2);

#define VkglTestCase_040334_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040334_2 "end_restart.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040334, VkglTestCase_040334_1, VkglTestCase_040334_2);

#define VkglTestCase_040395_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040395_2 "tart_duplicate_restarts.line_loop.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040395, VkglTestCase_040395_1, VkglTestCase_040395_2);

#define VkglTestCase_040396_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040396_2 "duplicate_restarts.line_loop.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040396, VkglTestCase_040396_1, VkglTestCase_040396_2);

#define VkglTestCase_040397_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040397_2 "t_duplicate_restarts.line_loop.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040397, VkglTestCase_040397_1, VkglTestCase_040397_2);
