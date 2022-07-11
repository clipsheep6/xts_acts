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

#define VkglTestCase_039993_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039993_2 "sic.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039993, VkglTestCase_039993_1, VkglTestCase_039993_2);

#define VkglTestCase_039994_1 "dEQP-GLES3.functional.primitive_restart.basic.t"
#define VkglTestCase_039994_2 "riangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039994, VkglTestCase_039994_1, VkglTestCase_039994_2);

#define VkglTestCase_039995_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039995_2 ".triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039995, VkglTestCase_039995_1, VkglTestCase_039995_2);

#define VkglTestCase_040056_1 "dEQP-GLES3.functional.primitive_restart.duplicat"
#define VkglTestCase_040056_2 "e_restarts.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040056, VkglTestCase_040056_1, VkglTestCase_040056_2);

#define VkglTestCase_040057_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040057_2 "tarts.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040057, VkglTestCase_040057_1, VkglTestCase_040057_2);

#define VkglTestCase_040058_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040058_2 "estarts.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040058, VkglTestCase_040058_1, VkglTestCase_040058_2);

#define VkglTestCase_040119_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040119_2 "estart.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040119, VkglTestCase_040119_1, VkglTestCase_040119_2);

#define VkglTestCase_040120_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040120_2 "t.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040120, VkglTestCase_040120_1, VkglTestCase_040120_2);

#define VkglTestCase_040121_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040121_2 "art.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040121, VkglTestCase_040121_1, VkglTestCase_040121_2);

#define VkglTestCase_040182_1 "dEQP-GLES3.functional.primitive_restart.end_restart_du"
#define VkglTestCase_040182_2 "plicate_restarts.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040182, VkglTestCase_040182_1, VkglTestCase_040182_2);

#define VkglTestCase_040183_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040183_2 "te_restarts.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040183, VkglTestCase_040183_1, VkglTestCase_040183_2);

#define VkglTestCase_040184_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040184_2 "cate_restarts.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040184, VkglTestCase_040184_1, VkglTestCase_040184_2);

#define VkglTestCase_040245_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040245_2 "restart.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040245, VkglTestCase_040245_1, VkglTestCase_040245_2);

#define VkglTestCase_040246_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040246_2 "rt.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040246, VkglTestCase_040246_1, VkglTestCase_040246_2);

#define VkglTestCase_040247_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040247_2 "tart.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040247, VkglTestCase_040247_1, VkglTestCase_040247_2);

#define VkglTestCase_040308_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_d"
#define VkglTestCase_040308_2 "uplicate_restarts.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040308, VkglTestCase_040308_1, VkglTestCase_040308_2);

#define VkglTestCase_040309_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040309_2 "ate_restarts.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040309, VkglTestCase_040309_1, VkglTestCase_040309_2);

#define VkglTestCase_040310_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040310_2 "icate_restarts.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040310, VkglTestCase_040310_1, VkglTestCase_040310_2);

#define VkglTestCase_040371_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040371_2 "t_end_restart.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040371, VkglTestCase_040371_1, VkglTestCase_040371_2);

#define VkglTestCase_040372_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040372_2 "_restart.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040372, VkglTestCase_040372_1, VkglTestCase_040372_2);

#define VkglTestCase_040373_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040373_2 "nd_restart.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040373, VkglTestCase_040373_1, VkglTestCase_040373_2);

#define VkglTestCase_040434_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_res"
#define VkglTestCase_040434_2 "tart_duplicate_restarts.triangles.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040434, VkglTestCase_040434_1, VkglTestCase_040434_2);

#define VkglTestCase_040435_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040435_2 "duplicate_restarts.triangles.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040435, VkglTestCase_040435_1, VkglTestCase_040435_2);

#define VkglTestCase_040436_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040436_2 "t_duplicate_restarts.triangles.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040436, VkglTestCase_040436_1, VkglTestCase_040436_2);
