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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019603_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019603_2 "rage.get_error.vertex_array.vertex_attribf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019603, VkglTestCase_019603_1, VkglTestCase_019603_2);

#define VkglTestCase_019604_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019604_2 "rage.get_error.vertex_array.vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019604, VkglTestCase_019604_1, VkglTestCase_019604_2);

#define VkglTestCase_019605_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019605_2 "rage.get_error.vertex_array.vertex_attribi4"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019605, VkglTestCase_019605_1, VkglTestCase_019605_2);

#define VkglTestCase_019606_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019606_2 "age.get_error.vertex_array.vertex_attribi4v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019606, VkglTestCase_019606_1, VkglTestCase_019606_2);

#define VkglTestCase_019607_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019607_2 "e.get_error.vertex_array.vertex_attrib_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019607, VkglTestCase_019607_1, VkglTestCase_019607_2);

#define VkglTestCase_019608_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019608_2 ".get_error.vertex_array.vertex_attrib_i_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019608, VkglTestCase_019608_1, VkglTestCase_019608_2);

#define VkglTestCase_019609_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019609_2 "e.get_error.vertex_array.vertex_attrib_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019609, VkglTestCase_019609_1, VkglTestCase_019609_2);

#define VkglTestCase_019610_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019610_2 ".get_error.vertex_array.vertex_attrib_i_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019610, VkglTestCase_019610_1, VkglTestCase_019610_2);

#define VkglTestCase_019611_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019611_2 "et_error.vertex_array.enable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019611, VkglTestCase_019611_1, VkglTestCase_019611_2);

#define VkglTestCase_019612_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019612_2 "et_error.vertex_array.disable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019612, VkglTestCase_019612_1, VkglTestCase_019612_2);

#define VkglTestCase_019613_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019613_2 "age.get_error.vertex_array.gen_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019613, VkglTestCase_019613_1, VkglTestCase_019613_2);

#define VkglTestCase_019614_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019614_2 "age.get_error.vertex_array.bind_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019614, VkglTestCase_019614_1, VkglTestCase_019614_2);

#define VkglTestCase_019615_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019615_2 "e.get_error.vertex_array.delete_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019615, VkglTestCase_019615_1, VkglTestCase_019615_2);

#define VkglTestCase_019616_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019616_2 "e.get_error.vertex_array.vertex_attrib_divisor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019616, VkglTestCase_019616_1, VkglTestCase_019616_2);

#define VkglTestCase_019617_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019617_2 "verage.get_error.vertex_array.draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019617, VkglTestCase_019617_1, VkglTestCase_019617_2);

#define VkglTestCase_019618_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019618_2 "et_error.vertex_array.draw_arrays_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019618, VkglTestCase_019618_1, VkglTestCase_019618_2);

#define VkglTestCase_019619_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019619_2 "error.vertex_array.draw_arrays_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019619, VkglTestCase_019619_1, VkglTestCase_019619_2);

#define VkglTestCase_019620_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019620_2 "erage.get_error.vertex_array.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019620, VkglTestCase_019620_1, VkglTestCase_019620_2);

#define VkglTestCase_019621_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019621_2 "get_error.vertex_array.draw_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019621, VkglTestCase_019621_1, VkglTestCase_019621_2);

#define VkglTestCase_019622_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.ve"
#define VkglTestCase_019622_2 "rtex_array.draw_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019622, VkglTestCase_019622_1, VkglTestCase_019622_2);

#define VkglTestCase_019623_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019623_2 "t_error.vertex_array.draw_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019623, VkglTestCase_019623_1, VkglTestCase_019623_2);

#define VkglTestCase_019624_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019624_2 "rror.vertex_array.draw_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019624, VkglTestCase_019624_1, VkglTestCase_019624_2);

#define VkglTestCase_019625_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019625_2 "e.get_error.vertex_array.draw_arrays_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019625, VkglTestCase_019625_1, VkglTestCase_019625_2);

#define VkglTestCase_019626_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019626_2 "ror.vertex_array.draw_arrays_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019626, VkglTestCase_019626_1, VkglTestCase_019626_2);

#define VkglTestCase_019627_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error"
#define VkglTestCase_019627_2 ".vertex_array.draw_arrays_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019627, VkglTestCase_019627_1, VkglTestCase_019627_2);

#define VkglTestCase_019628_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019628_2 ".get_error.vertex_array.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019628, VkglTestCase_019628_1, VkglTestCase_019628_2);

#define VkglTestCase_019629_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019629_2 "or.vertex_array.draw_elements_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019629, VkglTestCase_019629_1, VkglTestCase_019629_2);

#define VkglTestCase_019630_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error."
#define VkglTestCase_019630_2 "vertex_array.draw_elements_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019630, VkglTestCase_019630_1, VkglTestCase_019630_2);

#define VkglTestCase_019631_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019631_2 "rror.vertex_array.draw_elements_instanced_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019631, VkglTestCase_019631_1, VkglTestCase_019631_2);

#define VkglTestCase_019632_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.vertex_"
#define VkglTestCase_019632_2 "array.draw_elements_instanced_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019632, VkglTestCase_019632_1, VkglTestCase_019632_2);

#define VkglTestCase_019633_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019633_2 "ge.get_error.vertex_array.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019633, VkglTestCase_019633_1, VkglTestCase_019633_2);

#define VkglTestCase_019634_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019634_2 "rror.vertex_array.draw_range_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019634, VkglTestCase_019634_1, VkglTestCase_019634_2);

#define VkglTestCase_019635_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019635_2 "r.vertex_array.draw_range_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019635, VkglTestCase_019635_1, VkglTestCase_019635_2);

#define VkglTestCase_019636_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019636_2 "_error.vertex_array.draw_range_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019636, VkglTestCase_019636_1, VkglTestCase_019636_2);

#define VkglTestCase_019637_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.verte"
#define VkglTestCase_019637_2 "x_array.draw_range_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019637, VkglTestCase_019637_1, VkglTestCase_019637_2);
