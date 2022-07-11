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

#define VkglTestCase_039978_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039978_2 "ic.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039978, VkglTestCase_039978_1, VkglTestCase_039978_2);

#define VkglTestCase_039979_1 "dEQP-GLES3.functional.primitive_restart.basic.tr"
#define VkglTestCase_039979_2 "iangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039979, VkglTestCase_039979_1, VkglTestCase_039979_2);

#define VkglTestCase_039980_1 "dEQP-GLES3.functional.primitive_restart.basic."
#define VkglTestCase_039980_2 "triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039980, VkglTestCase_039980_1, VkglTestCase_039980_2);

#define VkglTestCase_040041_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040041_2 "restarts.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040041, VkglTestCase_040041_1, VkglTestCase_040041_2);

#define VkglTestCase_040042_1 "dEQP-GLES3.functional.primitive_restart.duplicate_resta"
#define VkglTestCase_040042_2 "rts.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040042, VkglTestCase_040042_1, VkglTestCase_040042_2);

#define VkglTestCase_040043_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040043_2 "tarts.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040043, VkglTestCase_040043_1, VkglTestCase_040043_2);

#define VkglTestCase_040104_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040104_2 "start.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040104, VkglTestCase_040104_1, VkglTestCase_040104_2);

#define VkglTestCase_040105_1 "dEQP-GLES3.functional.primitive_restart.end_restart"
#define VkglTestCase_040105_2 ".triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040105, VkglTestCase_040105_1, VkglTestCase_040105_2);

#define VkglTestCase_040106_1 "dEQP-GLES3.functional.primitive_restart.end_resta"
#define VkglTestCase_040106_2 "rt.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040106, VkglTestCase_040106_1, VkglTestCase_040106_2);

#define VkglTestCase_040167_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040167_2 "icate_restarts.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040167, VkglTestCase_040167_1, VkglTestCase_040167_2);

#define VkglTestCase_040168_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicate"
#define VkglTestCase_040168_2 "_restarts.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040168, VkglTestCase_040168_1, VkglTestCase_040168_2);

#define VkglTestCase_040169_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040169_2 "te_restarts.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040169, VkglTestCase_040169_1, VkglTestCase_040169_2);

#define VkglTestCase_040230_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040230_2 "estart.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040230, VkglTestCase_040230_1, VkglTestCase_040230_2);

#define VkglTestCase_040231_1 "dEQP-GLES3.functional.primitive_restart.begin_restar"
#define VkglTestCase_040231_2 "t.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040231, VkglTestCase_040231_1, VkglTestCase_040231_2);

#define VkglTestCase_040232_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040232_2 "art.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040232, VkglTestCase_040232_1, VkglTestCase_040232_2);

#define VkglTestCase_040293_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040293_2 "licate_restarts.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040293, VkglTestCase_040293_1, VkglTestCase_040293_2);

#define VkglTestCase_040294_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplicat"
#define VkglTestCase_040294_2 "e_restarts.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040294, VkglTestCase_040294_1, VkglTestCase_040294_2);

#define VkglTestCase_040295_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040295_2 "ate_restarts.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040295, VkglTestCase_040295_1, VkglTestCase_040295_2);

#define VkglTestCase_040356_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040356_2 "_end_restart.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040356, VkglTestCase_040356_1, VkglTestCase_040356_2);

#define VkglTestCase_040357_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_"
#define VkglTestCase_040357_2 "restart.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040357, VkglTestCase_040357_1, VkglTestCase_040357_2);

#define VkglTestCase_040358_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_en"
#define VkglTestCase_040358_2 "d_restart.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040358, VkglTestCase_040358_1, VkglTestCase_040358_2);

#define VkglTestCase_040419_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040419_2 "rt_duplicate_restarts.triangle_strip.unsigned_int.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040419, VkglTestCase_040419_1, VkglTestCase_040419_2);

#define VkglTestCase_040420_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_du"
#define VkglTestCase_040420_2 "plicate_restarts.triangle_strip.unsigned_int.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040420, VkglTestCase_040420_1, VkglTestCase_040420_2);

#define VkglTestCase_040421_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040421_2 "duplicate_restarts.triangle_strip.unsigned_int.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040421, VkglTestCase_040421_1, VkglTestCase_040421_2);
