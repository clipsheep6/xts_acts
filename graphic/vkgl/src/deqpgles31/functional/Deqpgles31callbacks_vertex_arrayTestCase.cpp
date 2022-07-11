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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018608_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018608_2 "rage.callbacks.vertex_array.vertex_attribf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018608, VkglTestCase_018608_1, VkglTestCase_018608_2);

#define VkglTestCase_018609_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018609_2 "rage.callbacks.vertex_array.vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018609, VkglTestCase_018609_1, VkglTestCase_018609_2);

#define VkglTestCase_018610_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018610_2 "rage.callbacks.vertex_array.vertex_attribi4"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018610, VkglTestCase_018610_1, VkglTestCase_018610_2);

#define VkglTestCase_018611_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018611_2 "age.callbacks.vertex_array.vertex_attribi4v"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018611, VkglTestCase_018611_1, VkglTestCase_018611_2);

#define VkglTestCase_018612_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018612_2 "e.callbacks.vertex_array.vertex_attrib_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018612, VkglTestCase_018612_1, VkglTestCase_018612_2);

#define VkglTestCase_018613_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018613_2 ".callbacks.vertex_array.vertex_attrib_i_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018613, VkglTestCase_018613_1, VkglTestCase_018613_2);

#define VkglTestCase_018614_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018614_2 "e.callbacks.vertex_array.vertex_attrib_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018614, VkglTestCase_018614_1, VkglTestCase_018614_2);

#define VkglTestCase_018615_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018615_2 ".callbacks.vertex_array.vertex_attrib_i_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018615, VkglTestCase_018615_1, VkglTestCase_018615_2);

#define VkglTestCase_018616_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018616_2 "allbacks.vertex_array.enable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018616, VkglTestCase_018616_1, VkglTestCase_018616_2);

#define VkglTestCase_018617_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018617_2 "allbacks.vertex_array.disable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018617, VkglTestCase_018617_1, VkglTestCase_018617_2);

#define VkglTestCase_018618_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018618_2 "age.callbacks.vertex_array.gen_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018618, VkglTestCase_018618_1, VkglTestCase_018618_2);

#define VkglTestCase_018619_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018619_2 "age.callbacks.vertex_array.bind_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018619, VkglTestCase_018619_1, VkglTestCase_018619_2);

#define VkglTestCase_018620_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018620_2 "e.callbacks.vertex_array.delete_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018620, VkglTestCase_018620_1, VkglTestCase_018620_2);

#define VkglTestCase_018621_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018621_2 "e.callbacks.vertex_array.vertex_attrib_divisor"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018621, VkglTestCase_018621_1, VkglTestCase_018621_2);

#define VkglTestCase_018622_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018622_2 "verage.callbacks.vertex_array.draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018622, VkglTestCase_018622_1, VkglTestCase_018622_2);

#define VkglTestCase_018623_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018623_2 "allbacks.vertex_array.draw_arrays_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018623, VkglTestCase_018623_1, VkglTestCase_018623_2);

#define VkglTestCase_018624_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018624_2 "backs.vertex_array.draw_arrays_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018624, VkglTestCase_018624_1, VkglTestCase_018624_2);

#define VkglTestCase_018625_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018625_2 "erage.callbacks.vertex_array.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018625, VkglTestCase_018625_1, VkglTestCase_018625_2);

#define VkglTestCase_018626_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018626_2 "callbacks.vertex_array.draw_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018626, VkglTestCase_018626_1, VkglTestCase_018626_2);

#define VkglTestCase_018627_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.ve"
#define VkglTestCase_018627_2 "rtex_array.draw_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018627, VkglTestCase_018627_1, VkglTestCase_018627_2);

#define VkglTestCase_018628_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018628_2 "llbacks.vertex_array.draw_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018628, VkglTestCase_018628_1, VkglTestCase_018628_2);

#define VkglTestCase_018629_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018629_2 "acks.vertex_array.draw_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018629, VkglTestCase_018629_1, VkglTestCase_018629_2);

#define VkglTestCase_018630_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018630_2 "e.callbacks.vertex_array.draw_arrays_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018630, VkglTestCase_018630_1, VkglTestCase_018630_2);

#define VkglTestCase_018631_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018631_2 "cks.vertex_array.draw_arrays_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018631, VkglTestCase_018631_1, VkglTestCase_018631_2);

#define VkglTestCase_018632_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks"
#define VkglTestCase_018632_2 ".vertex_array.draw_arrays_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018632, VkglTestCase_018632_1, VkglTestCase_018632_2);

#define VkglTestCase_018633_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018633_2 ".callbacks.vertex_array.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018633, VkglTestCase_018633_1, VkglTestCase_018633_2);

#define VkglTestCase_018634_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018634_2 "ks.vertex_array.draw_elements_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018634, VkglTestCase_018634_1, VkglTestCase_018634_2);

#define VkglTestCase_018635_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks."
#define VkglTestCase_018635_2 "vertex_array.draw_elements_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018635, VkglTestCase_018635_1, VkglTestCase_018635_2);

#define VkglTestCase_018636_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018636_2 "acks.vertex_array.draw_elements_instanced_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018636, VkglTestCase_018636_1, VkglTestCase_018636_2);

#define VkglTestCase_018637_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.vertex_"
#define VkglTestCase_018637_2 "array.draw_elements_instanced_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018637, VkglTestCase_018637_1, VkglTestCase_018637_2);

#define VkglTestCase_018638_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018638_2 "ge.callbacks.vertex_array.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018638, VkglTestCase_018638_1, VkglTestCase_018638_2);

#define VkglTestCase_018639_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018639_2 "acks.vertex_array.draw_range_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018639, VkglTestCase_018639_1, VkglTestCase_018639_2);

#define VkglTestCase_018640_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018640_2 "s.vertex_array.draw_range_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018640, VkglTestCase_018640_1, VkglTestCase_018640_2);

#define VkglTestCase_018641_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018641_2 "lbacks.vertex_array.draw_range_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018641, VkglTestCase_018641_1, VkglTestCase_018641_2);

#define VkglTestCase_018642_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.verte"
#define VkglTestCase_018642_2 "x_array.draw_range_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018642, VkglTestCase_018642_1, VkglTestCase_018642_2);
