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

#define VkglTestCase_039996_1 "dEQP-GLES3.functional.primitive_restart.b"
#define VkglTestCase_039996_2 "asic.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039996, VkglTestCase_039996_1, VkglTestCase_039996_2);

#define VkglTestCase_039997_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039997_2 "triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039997, VkglTestCase_039997_1, VkglTestCase_039997_2);

#define VkglTestCase_039998_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039998_2 "c.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039998, VkglTestCase_039998_1, VkglTestCase_039998_2);

#define VkglTestCase_040059_1 "dEQP-GLES3.functional.primitive_restart.duplica"
#define VkglTestCase_040059_2 "te_restarts.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040059, VkglTestCase_040059_1, VkglTestCase_040059_2);

#define VkglTestCase_040060_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040060_2 "starts.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040060, VkglTestCase_040060_1, VkglTestCase_040060_2);

#define VkglTestCase_040061_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040061_2 "restarts.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040061, VkglTestCase_040061_1, VkglTestCase_040061_2);

#define VkglTestCase_040122_1 "dEQP-GLES3.functional.primitive_restart.end_"
#define VkglTestCase_040122_2 "restart.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040122, VkglTestCase_040122_1, VkglTestCase_040122_2);

#define VkglTestCase_040123_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040123_2 "rt.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040123, VkglTestCase_040123_1, VkglTestCase_040123_2);

#define VkglTestCase_040124_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040124_2 "tart.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040124, VkglTestCase_040124_1, VkglTestCase_040124_2);

#define VkglTestCase_040185_1 "dEQP-GLES3.functional.primitive_restart.end_restart_d"
#define VkglTestCase_040185_2 "uplicate_restarts.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040185, VkglTestCase_040185_1, VkglTestCase_040185_2);

#define VkglTestCase_040186_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040186_2 "ate_restarts.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040186, VkglTestCase_040186_1, VkglTestCase_040186_2);

#define VkglTestCase_040187_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040187_2 "icate_restarts.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040187, VkglTestCase_040187_1, VkglTestCase_040187_2);

#define VkglTestCase_040248_1 "dEQP-GLES3.functional.primitive_restart.begin"
#define VkglTestCase_040248_2 "_restart.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040248, VkglTestCase_040248_1, VkglTestCase_040248_2);

#define VkglTestCase_040249_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040249_2 "art.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040249, VkglTestCase_040249_1, VkglTestCase_040249_2);

#define VkglTestCase_040250_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040250_2 "start.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040250, VkglTestCase_040250_1, VkglTestCase_040250_2);

#define VkglTestCase_040311_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040311_2 "duplicate_restarts.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040311, VkglTestCase_040311_1, VkglTestCase_040311_2);

#define VkglTestCase_040312_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040312_2 "cate_restarts.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040312, VkglTestCase_040312_1, VkglTestCase_040312_2);

#define VkglTestCase_040313_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040313_2 "licate_restarts.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040313, VkglTestCase_040313_1, VkglTestCase_040313_2);

#define VkglTestCase_040374_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040374_2 "rt_end_restart.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040374, VkglTestCase_040374_1, VkglTestCase_040374_2);

#define VkglTestCase_040375_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040375_2 "d_restart.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040375, VkglTestCase_040375_1, VkglTestCase_040375_2);

#define VkglTestCase_040376_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040376_2 "end_restart.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040376, VkglTestCase_040376_1, VkglTestCase_040376_2);

#define VkglTestCase_040437_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_re"
#define VkglTestCase_040437_2 "start_duplicate_restarts.triangles.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040437, VkglTestCase_040437_1, VkglTestCase_040437_2);

#define VkglTestCase_040438_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040438_2 "_duplicate_restarts.triangles.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040438, VkglTestCase_040438_1, VkglTestCase_040438_2);

#define VkglTestCase_040439_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040439_2 "rt_duplicate_restarts.triangles.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040439, VkglTestCase_040439_1, VkglTestCase_040439_2);
