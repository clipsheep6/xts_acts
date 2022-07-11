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

#define VkglTestCase_039969_1 "dEQP-GLES3.functional.primitive_restart"
#define VkglTestCase_039969_2 ".basic.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039969, VkglTestCase_039969_1, VkglTestCase_039969_2);

#define VkglTestCase_039970_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039970_2 "c.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039970, VkglTestCase_039970_1, VkglTestCase_039970_2);

#define VkglTestCase_039971_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039971_2 "sic.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039971, VkglTestCase_039971_1, VkglTestCase_039971_2);

#define VkglTestCase_040032_1 "dEQP-GLES3.functional.primitive_restart.dupli"
#define VkglTestCase_040032_2 "cate_restarts.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040032, VkglTestCase_040032_1, VkglTestCase_040032_2);

#define VkglTestCase_040033_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040033_2 "restarts.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040033, VkglTestCase_040033_1, VkglTestCase_040033_2);

#define VkglTestCase_040034_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040034_2 "e_restarts.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040034, VkglTestCase_040034_1, VkglTestCase_040034_2);

#define VkglTestCase_040095_1 "dEQP-GLES3.functional.primitive_restart.en"
#define VkglTestCase_040095_2 "d_restart.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040095, VkglTestCase_040095_1, VkglTestCase_040095_2);

#define VkglTestCase_040096_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040096_2 "tart.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040096, VkglTestCase_040096_1, VkglTestCase_040096_2);

#define VkglTestCase_040097_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040097_2 "estart.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040097, VkglTestCase_040097_1, VkglTestCase_040097_2);

#define VkglTestCase_040158_1 "dEQP-GLES3.functional.primitive_restart.end_restart"
#define VkglTestCase_040158_2 "_duplicate_restarts.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040158, VkglTestCase_040158_1, VkglTestCase_040158_2);

#define VkglTestCase_040159_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040159_2 "icate_restarts.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040159, VkglTestCase_040159_1, VkglTestCase_040159_2);

#define VkglTestCase_040160_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040160_2 "plicate_restarts.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040160, VkglTestCase_040160_1, VkglTestCase_040160_2);

#define VkglTestCase_040221_1 "dEQP-GLES3.functional.primitive_restart.beg"
#define VkglTestCase_040221_2 "in_restart.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040221, VkglTestCase_040221_1, VkglTestCase_040221_2);

#define VkglTestCase_040222_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040222_2 "start.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040222, VkglTestCase_040222_1, VkglTestCase_040222_2);

#define VkglTestCase_040223_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040223_2 "restart.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040223, VkglTestCase_040223_1, VkglTestCase_040223_2);

#define VkglTestCase_040284_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040284_2 "t_duplicate_restarts.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040284, VkglTestCase_040284_1, VkglTestCase_040284_2);

#define VkglTestCase_040285_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040285_2 "licate_restarts.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040285, VkglTestCase_040285_1, VkglTestCase_040285_2);

#define VkglTestCase_040286_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040286_2 "uplicate_restarts.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040286, VkglTestCase_040286_1, VkglTestCase_040286_2);

#define VkglTestCase_040347_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040347_2 "tart_end_restart.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040347, VkglTestCase_040347_1, VkglTestCase_040347_2);

#define VkglTestCase_040348_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040348_2 "end_restart.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040348, VkglTestCase_040348_1, VkglTestCase_040348_2);

#define VkglTestCase_040349_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040349_2 "t_end_restart.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040349, VkglTestCase_040349_1, VkglTestCase_040349_2);

#define VkglTestCase_040410_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_"
#define VkglTestCase_040410_2 "restart_duplicate_restarts.lines.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040410, VkglTestCase_040410_1, VkglTestCase_040410_2);

#define VkglTestCase_040411_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040411_2 "rt_duplicate_restarts.lines.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040411, VkglTestCase_040411_1, VkglTestCase_040411_2);

#define VkglTestCase_040412_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040412_2 "tart_duplicate_restarts.lines.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040412, VkglTestCase_040412_1, VkglTestCase_040412_2);
