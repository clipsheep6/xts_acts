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

#define VkglTestCase_039975_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039975_2 "c.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039975, VkglTestCase_039975_1, VkglTestCase_039975_2);

#define VkglTestCase_039976_1 "dEQP-GLES3.functional.primitive_restart.basic.tri"
#define VkglTestCase_039976_2 "angle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039976, VkglTestCase_039976_1, VkglTestCase_039976_2);

#define VkglTestCase_039977_1 "dEQP-GLES3.functional.primitive_restart.basic.t"
#define VkglTestCase_039977_2 "riangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039977, VkglTestCase_039977_1, VkglTestCase_039977_2);

#define VkglTestCase_040038_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040038_2 "estarts.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040038, VkglTestCase_040038_1, VkglTestCase_040038_2);

#define VkglTestCase_040039_1 "dEQP-GLES3.functional.primitive_restart.duplicate_restar"
#define VkglTestCase_040039_2 "ts.triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040039, VkglTestCase_040039_1, VkglTestCase_040039_2);

#define VkglTestCase_040040_1 "dEQP-GLES3.functional.primitive_restart.duplicate_rest"
#define VkglTestCase_040040_2 "arts.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040040, VkglTestCase_040040_1, VkglTestCase_040040_2);

#define VkglTestCase_040101_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040101_2 "tart.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040101, VkglTestCase_040101_1, VkglTestCase_040101_2);

#define VkglTestCase_040102_1 "dEQP-GLES3.functional.primitive_restart.end_restart."
#define VkglTestCase_040102_2 "triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040102, VkglTestCase_040102_1, VkglTestCase_040102_2);

#define VkglTestCase_040103_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040103_2 "t.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040103, VkglTestCase_040103_1, VkglTestCase_040103_2);

#define VkglTestCase_040164_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040164_2 "cate_restarts.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040164, VkglTestCase_040164_1, VkglTestCase_040164_2);

#define VkglTestCase_040165_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicate_"
#define VkglTestCase_040165_2 "restarts.triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040165, VkglTestCase_040165_1, VkglTestCase_040165_2);

#define VkglTestCase_040166_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicat"
#define VkglTestCase_040166_2 "e_restarts.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040166, VkglTestCase_040166_1, VkglTestCase_040166_2);

#define VkglTestCase_040227_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040227_2 "start.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040227, VkglTestCase_040227_1, VkglTestCase_040227_2);

#define VkglTestCase_040228_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040228_2 ".triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040228, VkglTestCase_040228_1, VkglTestCase_040228_2);

#define VkglTestCase_040229_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040229_2 "rt.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040229, VkglTestCase_040229_1, VkglTestCase_040229_2);

#define VkglTestCase_040290_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040290_2 "icate_restarts.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040290, VkglTestCase_040290_1, VkglTestCase_040290_2);

#define VkglTestCase_040291_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplicate"
#define VkglTestCase_040291_2 "_restarts.triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040291, VkglTestCase_040291_1, VkglTestCase_040291_2);

#define VkglTestCase_040292_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplica"
#define VkglTestCase_040292_2 "te_restarts.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040292, VkglTestCase_040292_1, VkglTestCase_040292_2);

#define VkglTestCase_040353_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040353_2 "end_restart.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040353, VkglTestCase_040353_1, VkglTestCase_040353_2);

#define VkglTestCase_040354_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040354_2 "estart.triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040354, VkglTestCase_040354_1, VkglTestCase_040354_2);

#define VkglTestCase_040355_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040355_2 "_restart.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040355, VkglTestCase_040355_1, VkglTestCase_040355_2);

#define VkglTestCase_040416_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040416_2 "t_duplicate_restarts.triangle_strip.unsigned_short.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040416, VkglTestCase_040416_1, VkglTestCase_040416_2);

#define VkglTestCase_040417_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_dup"
#define VkglTestCase_040417_2 "licate_restarts.triangle_strip.unsigned_short.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040417, VkglTestCase_040417_1, VkglTestCase_040417_2);

#define VkglTestCase_040418_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_d"
#define VkglTestCase_040418_2 "uplicate_restarts.triangle_strip.unsigned_short.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040418, VkglTestCase_040418_1, VkglTestCase_040418_2);
