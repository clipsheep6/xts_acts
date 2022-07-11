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

#define VkglTestCase_039972_1 "dEQP-GLES3.functional.primitive_restart.basi"
#define VkglTestCase_039972_2 "c.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039972, VkglTestCase_039972_1, VkglTestCase_039972_2);

#define VkglTestCase_039973_1 "dEQP-GLES3.functional.primitive_restart.basic.tri"
#define VkglTestCase_039973_2 "angle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039973, VkglTestCase_039973_1, VkglTestCase_039973_2);

#define VkglTestCase_039974_1 "dEQP-GLES3.functional.primitive_restart.basic.t"
#define VkglTestCase_039974_2 "riangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039974, VkglTestCase_039974_1, VkglTestCase_039974_2);

#define VkglTestCase_040035_1 "dEQP-GLES3.functional.primitive_restart.duplicate_"
#define VkglTestCase_040035_2 "restarts.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040035, VkglTestCase_040035_1, VkglTestCase_040035_2);

#define VkglTestCase_040036_1 "dEQP-GLES3.functional.primitive_restart.duplicate_resta"
#define VkglTestCase_040036_2 "rts.triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040036, VkglTestCase_040036_1, VkglTestCase_040036_2);

#define VkglTestCase_040037_1 "dEQP-GLES3.functional.primitive_restart.duplicate_res"
#define VkglTestCase_040037_2 "tarts.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040037, VkglTestCase_040037_1, VkglTestCase_040037_2);

#define VkglTestCase_040098_1 "dEQP-GLES3.functional.primitive_restart.end_res"
#define VkglTestCase_040098_2 "tart.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040098, VkglTestCase_040098_1, VkglTestCase_040098_2);

#define VkglTestCase_040099_1 "dEQP-GLES3.functional.primitive_restart.end_restart."
#define VkglTestCase_040099_2 "triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040099, VkglTestCase_040099_1, VkglTestCase_040099_2);

#define VkglTestCase_040100_1 "dEQP-GLES3.functional.primitive_restart.end_restar"
#define VkglTestCase_040100_2 "t.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040100, VkglTestCase_040100_1, VkglTestCase_040100_2);

#define VkglTestCase_040161_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupl"
#define VkglTestCase_040161_2 "icate_restarts.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040161, VkglTestCase_040161_1, VkglTestCase_040161_2);

#define VkglTestCase_040162_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplicate"
#define VkglTestCase_040162_2 "_restarts.triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040162, VkglTestCase_040162_1, VkglTestCase_040162_2);

#define VkglTestCase_040163_1 "dEQP-GLES3.functional.primitive_restart.end_restart_duplica"
#define VkglTestCase_040163_2 "te_restarts.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040163, VkglTestCase_040163_1, VkglTestCase_040163_2);

#define VkglTestCase_040224_1 "dEQP-GLES3.functional.primitive_restart.begin_re"
#define VkglTestCase_040224_2 "start.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040224, VkglTestCase_040224_1, VkglTestCase_040224_2);

#define VkglTestCase_040225_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040225_2 ".triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040225, VkglTestCase_040225_1, VkglTestCase_040225_2);

#define VkglTestCase_040226_1 "dEQP-GLES3.functional.primitive_restart.begin_resta"
#define VkglTestCase_040226_2 "rt.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040226, VkglTestCase_040226_1, VkglTestCase_040226_2);

#define VkglTestCase_040287_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dup"
#define VkglTestCase_040287_2 "licate_restarts.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040287, VkglTestCase_040287_1, VkglTestCase_040287_2);

#define VkglTestCase_040288_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplicat"
#define VkglTestCase_040288_2 "e_restarts.triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040288, VkglTestCase_040288_1, VkglTestCase_040288_2);

#define VkglTestCase_040289_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_duplic"
#define VkglTestCase_040289_2 "ate_restarts.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040289, VkglTestCase_040289_1, VkglTestCase_040289_2);

#define VkglTestCase_040350_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_"
#define VkglTestCase_040350_2 "end_restart.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040350, VkglTestCase_040350_1, VkglTestCase_040350_2);

#define VkglTestCase_040351_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040351_2 "estart.triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040351, VkglTestCase_040351_1, VkglTestCase_040351_2);

#define VkglTestCase_040352_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end"
#define VkglTestCase_040352_2 "_restart.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040352, VkglTestCase_040352_1, VkglTestCase_040352_2);

#define VkglTestCase_040413_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_resta"
#define VkglTestCase_040413_2 "rt_duplicate_restarts.triangle_strip.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040413, VkglTestCase_040413_1, VkglTestCase_040413_2);

#define VkglTestCase_040414_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_du"
#define VkglTestCase_040414_2 "plicate_restarts.triangle_strip.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040414, VkglTestCase_040414_1, VkglTestCase_040414_2);

#define VkglTestCase_040415_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restart_"
#define VkglTestCase_040415_2 "duplicate_restarts.triangle_strip.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040415, VkglTestCase_040415_1, VkglTestCase_040415_2);
