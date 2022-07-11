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

#define VkglTestCase_039990_1 "dEQP-GLES3.functional.primitive_restart.b"
#define VkglTestCase_039990_2 "asic.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039990, VkglTestCase_039990_1, VkglTestCase_039990_2);

#define VkglTestCase_039991_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039991_2 "triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039991, VkglTestCase_039991_1, VkglTestCase_039991_2);

#define VkglTestCase_039992_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039992_2 "c.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039992, VkglTestCase_039992_1, VkglTestCase_039992_2);

#define VkglTestCase_040053_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040053_2 "e_restarts.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040053, VkglTestCase_040053_1, VkglTestCase_040053_2);

#define VkglTestCase_040054_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040054_2 "tarts.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040054, VkglTestCase_040054_1, VkglTestCase_040054_2);

#define VkglTestCase_040055_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040055_2 "estarts.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040055, VkglTestCase_040055_1, VkglTestCase_040055_2);

#define VkglTestCase_040116_1 "dEQP-GLES3.functional.primitive_restart.end_"
#define VkglTestCase_040116_2 "restart.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040116, VkglTestCase_040116_1, VkglTestCase_040116_2);

#define VkglTestCase_040117_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040117_2 "rt.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040117, VkglTestCase_040117_1, VkglTestCase_040117_2);

#define VkglTestCase_040118_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040118_2 "tart.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040118, VkglTestCase_040118_1, VkglTestCase_040118_2);

#define VkglTestCase_040179_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040179_2 "plicate_restarts.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040179, VkglTestCase_040179_1, VkglTestCase_040179_2);

#define VkglTestCase_040180_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040180_2 "te_restarts.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040180, VkglTestCase_040180_1, VkglTestCase_040180_2);

#define VkglTestCase_040181_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040181_2 "cate_restarts.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040181, VkglTestCase_040181_1, VkglTestCase_040181_2);

#define VkglTestCase_040242_1 "dEQP-GLES3.functional.primitive_restart.begin"
#define VkglTestCase_040242_2 "_restart.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040242, VkglTestCase_040242_1, VkglTestCase_040242_2);

#define VkglTestCase_040243_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040243_2 "art.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040243, VkglTestCase_040243_1, VkglTestCase_040243_2);

#define VkglTestCase_040244_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040244_2 "start.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040244, VkglTestCase_040244_1, VkglTestCase_040244_2);

#define VkglTestCase_040305_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040305_2 "uplicate_restarts.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040305, VkglTestCase_040305_1, VkglTestCase_040305_2);

#define VkglTestCase_040306_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040306_2 "ate_restarts.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040306, VkglTestCase_040306_1, VkglTestCase_040306_2);

#define VkglTestCase_040307_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040307_2 "icate_restarts.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040307, VkglTestCase_040307_1, VkglTestCase_040307_2);

#define VkglTestCase_040368_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040368_2 "rt_end_restart.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040368, VkglTestCase_040368_1, VkglTestCase_040368_2);

#define VkglTestCase_040369_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040369_2 "d_restart.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040369, VkglTestCase_040369_1, VkglTestCase_040369_2);

#define VkglTestCase_040370_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040370_2 "end_restart.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040370, VkglTestCase_040370_1, VkglTestCase_040370_2);

#define VkglTestCase_040431_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040431_2 "tart_duplicate_restarts.triangles.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040431, VkglTestCase_040431_1, VkglTestCase_040431_2);

#define VkglTestCase_040432_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040432_2 "duplicate_restarts.triangles.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040432, VkglTestCase_040432_1, VkglTestCase_040432_2);

#define VkglTestCase_040433_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040433_2 "t_duplicate_restarts.triangles.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040433, VkglTestCase_040433_1, VkglTestCase_040433_2);
