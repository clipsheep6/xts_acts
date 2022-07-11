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

#define VkglTestCase_039936_1 "dEQP-GLES3.functional.primitive_restart."
#define VkglTestCase_039936_2 "basic.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039936, VkglTestCase_039936_1, VkglTestCase_039936_2);

#define VkglTestCase_039937_1 "dEQP-GLES3.functional.primitive_restart.basic"
#define VkglTestCase_039937_2 ".points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039937, VkglTestCase_039937_1, VkglTestCase_039937_2);

#define VkglTestCase_039938_1 "dEQP-GLES3.functional.primitive_restart.bas"
#define VkglTestCase_039938_2 "ic.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039938, VkglTestCase_039938_1, VkglTestCase_039938_2);

#define VkglTestCase_039999_1 "dEQP-GLES3.functional.primitive_restart.duplic"
#define VkglTestCase_039999_2 "ate_restarts.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039999, VkglTestCase_039999_1, VkglTestCase_039999_2);

#define VkglTestCase_040000_1 "dEQP-GLES3.functional.primitive_restart.duplicate_r"
#define VkglTestCase_040000_2 "estarts.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040000, VkglTestCase_040000_1, VkglTestCase_040000_2);

#define VkglTestCase_040001_1 "dEQP-GLES3.functional.primitive_restart.duplicate"
#define VkglTestCase_040001_2 "_restarts.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040001, VkglTestCase_040001_1, VkglTestCase_040001_2);

#define VkglTestCase_040062_1 "dEQP-GLES3.functional.primitive_restart.end"
#define VkglTestCase_040062_2 "_restart.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040062, VkglTestCase_040062_1, VkglTestCase_040062_2);

#define VkglTestCase_040063_1 "dEQP-GLES3.functional.primitive_restart.end_rest"
#define VkglTestCase_040063_2 "art.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040063, VkglTestCase_040063_1, VkglTestCase_040063_2);

#define VkglTestCase_040064_1 "dEQP-GLES3.functional.primitive_restart.end_re"
#define VkglTestCase_040064_2 "start.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040064, VkglTestCase_040064_1, VkglTestCase_040064_2);

#define VkglTestCase_040125_1 "dEQP-GLES3.functional.primitive_restart.end_restart_"
#define VkglTestCase_040125_2 "duplicate_restarts.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040125, VkglTestCase_040125_1, VkglTestCase_040125_2);

#define VkglTestCase_040126_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dupli"
#define VkglTestCase_040126_2 "cate_restarts.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040126, VkglTestCase_040126_1, VkglTestCase_040126_2);

#define VkglTestCase_040127_1 "dEQP-GLES3.functional.primitive_restart.end_restart_dup"
#define VkglTestCase_040127_2 "licate_restarts.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040127, VkglTestCase_040127_1, VkglTestCase_040127_2);

#define VkglTestCase_040188_1 "dEQP-GLES3.functional.primitive_restart.begi"
#define VkglTestCase_040188_2 "n_restart.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040188, VkglTestCase_040188_1, VkglTestCase_040188_2);

#define VkglTestCase_040189_1 "dEQP-GLES3.functional.primitive_restart.begin_res"
#define VkglTestCase_040189_2 "tart.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040189, VkglTestCase_040189_1, VkglTestCase_040189_2);

#define VkglTestCase_040190_1 "dEQP-GLES3.functional.primitive_restart.begin_r"
#define VkglTestCase_040190_2 "estart.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040190, VkglTestCase_040190_1, VkglTestCase_040190_2);

#define VkglTestCase_040251_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040251_2 "_duplicate_restarts.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040251, VkglTestCase_040251_1, VkglTestCase_040251_2);

#define VkglTestCase_040252_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_dupl"
#define VkglTestCase_040252_2 "icate_restarts.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040252, VkglTestCase_040252_1, VkglTestCase_040252_2);

#define VkglTestCase_040253_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_du"
#define VkglTestCase_040253_2 "plicate_restarts.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040253, VkglTestCase_040253_1, VkglTestCase_040253_2);

#define VkglTestCase_040314_1 "dEQP-GLES3.functional.primitive_restart.begin_rest"
#define VkglTestCase_040314_2 "art_end_restart.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040314, VkglTestCase_040314_1, VkglTestCase_040314_2);

#define VkglTestCase_040315_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_e"
#define VkglTestCase_040315_2 "nd_restart.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040315, VkglTestCase_040315_1, VkglTestCase_040315_2);

#define VkglTestCase_040316_1 "dEQP-GLES3.functional.primitive_restart.begin_restart"
#define VkglTestCase_040316_2 "_end_restart.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040316, VkglTestCase_040316_1, VkglTestCase_040316_2);

#define VkglTestCase_040377_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_r"
#define VkglTestCase_040377_2 "estart_duplicate_restarts.points.unsigned_byte.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040377, VkglTestCase_040377_1, VkglTestCase_040377_2);

#define VkglTestCase_040378_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_restar"
#define VkglTestCase_040378_2 "t_duplicate_restarts.points.unsigned_byte.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040378, VkglTestCase_040378_1, VkglTestCase_040378_2);

#define VkglTestCase_040379_1 "dEQP-GLES3.functional.primitive_restart.begin_restart_end_rest"
#define VkglTestCase_040379_2 "art_duplicate_restarts.points.unsigned_byte.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_040379, VkglTestCase_040379_1, VkglTestCase_040379_2);
