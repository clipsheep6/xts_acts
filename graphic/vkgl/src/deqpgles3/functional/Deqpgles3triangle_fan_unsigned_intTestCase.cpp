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

#define VkglTestCase_039987_1 "dEQP-GLES3.functional.primitive_restart.ba"
#define VkglTestCase_039987_2 "sic.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039987, VkglTestCase_039987_1, VkglTestCase_039987_2);

#define VkglTestCase_039988_1 "dEQP-GLES3.functional.primitive_restart.basic.t"
#define VkglTestCase_039988_2 "riangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039988, VkglTestCase_039988_1, VkglTestCase_039988_2);

#define VkglTestCase_039989_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039989_2 ".triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039989, VkglTestCase_039989_1, VkglTestCase_039989_2);

#define VkglTestCase_040050_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040050_2 "_restarts.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040050, VkglTestCase_040050_1, VkglTestCase_040050_2);

#define VkglTestCase_040051_1 "dEQP-GLES3.functional.primitive_restart.duplicate_rest"
#define VkglTestCase_040051_2 "arts.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040051, VkglTestCase_040051_1, VkglTestCase_040051_2);

#define VkglTestCase_040052_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040052_2 "starts.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040052, VkglTestCase_040052_1, VkglTestCase_040052_2);

#define VkglTestCase_040113_1 "dEQP-GLES3.functional.primitive_restart.end_r"
#define VkglTestCase_040113_2 "estart.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040113, VkglTestCase_040113_1, VkglTestCase_040113_2);

#define VkglTestCase_040114_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040114_2 "t.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040114, VkglTestCase_040114_1, VkglTestCase_040114_2);

#define VkglTestCase_040115_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040115_2 "art.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040115, VkglTestCase_040115_1, VkglTestCase_040115_2);

#define VkglTestCase_040176_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040176_2 "licate_restarts.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040176, VkglTestCase_040176_1, VkglTestCase_040176_2);

#define VkglTestCase_040177_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicat"
#define VkglTestCase_040177_2 "e_restarts.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040177, VkglTestCase_040177_1, VkglTestCase_040177_2);

#define VkglTestCase_040178_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040178_2 "ate_restarts.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040178, VkglTestCase_040178_1, VkglTestCase_040178_2);

#define VkglTestCase_040239_1 "dEQP-GLES3.functional.primitive_restart.begin_"
#define VkglTestCase_040239_2 "restart.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040239, VkglTestCase_040239_1, VkglTestCase_040239_2);

#define VkglTestCase_040240_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040240_2 "rt.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040240, VkglTestCase_040240_1, VkglTestCase_040240_2);

#define VkglTestCase_040241_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040241_2 "tart.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040241, VkglTestCase_040241_1, VkglTestCase_040241_2);

#define VkglTestCase_040302_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040302_2 "plicate_restarts.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040302, VkglTestCase_040302_1, VkglTestCase_040302_2);

#define VkglTestCase_040303_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplica"
#define VkglTestCase_040303_2 "te_restarts.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040303, VkglTestCase_040303_1, VkglTestCase_040303_2);

#define VkglTestCase_040304_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040304_2 "cate_restarts.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040304, VkglTestCase_040304_1, VkglTestCase_040304_2);

#define VkglTestCase_040365_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040365_2 "t_end_restart.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040365, VkglTestCase_040365_1, VkglTestCase_040365_2);

#define VkglTestCase_040366_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040366_2 "_restart.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040366, VkglTestCase_040366_1, VkglTestCase_040366_2);

#define VkglTestCase_040367_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040367_2 "nd_restart.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040367, VkglTestCase_040367_1, VkglTestCase_040367_2);

#define VkglTestCase_040428_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040428_2 "art_duplicate_restarts.triangle_fan.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040428, VkglTestCase_040428_1, VkglTestCase_040428_2);

#define VkglTestCase_040429_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_d"
#define VkglTestCase_040429_2 "uplicate_restarts.triangle_fan.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040429, VkglTestCase_040429_1, VkglTestCase_040429_2);

#define VkglTestCase_040430_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040430_2 "_duplicate_restarts.triangle_fan.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040430, VkglTestCase_040430_1, VkglTestCase_040430_2);
