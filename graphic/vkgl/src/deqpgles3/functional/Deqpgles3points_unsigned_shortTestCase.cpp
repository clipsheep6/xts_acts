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

#define VkglTestCase_039939_1 "dEQP-GLES3.functional.primitive_restart."
#define VkglTestCase_039939_2 "basic.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039939, VkglTestCase_039939_1, VkglTestCase_039939_2);

#define VkglTestCase_039940_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039940_2 ".points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039940, VkglTestCase_039940_1, VkglTestCase_039940_2);

#define VkglTestCase_039941_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039941_2 "ic.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039941, VkglTestCase_039941_1, VkglTestCase_039941_2);

#define VkglTestCase_040002_1 "dEQP-GLES3.functional.primitive_restart.duplica"
#define VkglTestCase_040002_2 "te_restarts.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040002, VkglTestCase_040002_1, VkglTestCase_040002_2);

#define VkglTestCase_040003_1 "dEQP-GLES3.functional.primitive_restart.duplicate_re"
#define VkglTestCase_040003_2 "starts.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040003, VkglTestCase_040003_1, VkglTestCase_040003_2);

#define VkglTestCase_040004_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040004_2 "restarts.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040004, VkglTestCase_040004_1, VkglTestCase_040004_2);

#define VkglTestCase_040065_1 "dEQP-GLES3.functional.primitive_restart.end"
#define VkglTestCase_040065_2 "_restart.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040065, VkglTestCase_040065_1, VkglTestCase_040065_2);

#define VkglTestCase_040066_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040066_2 "art.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040066, VkglTestCase_040066_1, VkglTestCase_040066_2);

#define VkglTestCase_040067_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040067_2 "start.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040067, VkglTestCase_040067_1, VkglTestCase_040067_2);

#define VkglTestCase_040128_1 "dEQP-GLES3.functional.primitive_restart.end_restart_d"
#define VkglTestCase_040128_2 "uplicate_restarts.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040128, VkglTestCase_040128_1, VkglTestCase_040128_2);

#define VkglTestCase_040129_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplic"
#define VkglTestCase_040129_2 "ate_restarts.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040129, VkglTestCase_040129_1, VkglTestCase_040129_2);

#define VkglTestCase_040130_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040130_2 "icate_restarts.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040130, VkglTestCase_040130_1, VkglTestCase_040130_2);

#define VkglTestCase_040191_1 "dEQP-GLES3.functional.primitive_restart.begi"
#define VkglTestCase_040191_2 "n_restart.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040191, VkglTestCase_040191_1, VkglTestCase_040191_2);

#define VkglTestCase_040192_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040192_2 "tart.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040192, VkglTestCase_040192_1, VkglTestCase_040192_2);

#define VkglTestCase_040193_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040193_2 "estart.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040193, VkglTestCase_040193_1, VkglTestCase_040193_2);

#define VkglTestCase_040254_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040254_2 "duplicate_restarts.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040254, VkglTestCase_040254_1, VkglTestCase_040254_2);

#define VkglTestCase_040255_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupli"
#define VkglTestCase_040255_2 "cate_restarts.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040255, VkglTestCase_040255_1, VkglTestCase_040255_2);

#define VkglTestCase_040256_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040256_2 "licate_restarts.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040256, VkglTestCase_040256_1, VkglTestCase_040256_2);

#define VkglTestCase_040317_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040317_2 "art_end_restart.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040317, VkglTestCase_040317_1, VkglTestCase_040317_2);

#define VkglTestCase_040318_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040318_2 "nd_restart.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040318, VkglTestCase_040318_1, VkglTestCase_040318_2);

#define VkglTestCase_040319_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040319_2 "_end_restart.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040319, VkglTestCase_040319_1, VkglTestCase_040319_2);

#define VkglTestCase_040380_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_re"
#define VkglTestCase_040380_2 "start_duplicate_restarts.points.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040380, VkglTestCase_040380_1, VkglTestCase_040380_2);

#define VkglTestCase_040381_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart"
#define VkglTestCase_040381_2 "_duplicate_restarts.points.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040381, VkglTestCase_040381_1, VkglTestCase_040381_2);

#define VkglTestCase_040382_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040382_2 "rt_duplicate_restarts.points.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040382, VkglTestCase_040382_1, VkglTestCase_040382_2);
