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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000187_1 "KHR-GLESEXT.tessellation_shader.compilation_and_li"
#define VkglTestCase_000187_2 "nking_errors.tc_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "KHR-GLESEXT.tessellation_shader.compilation_and_link"
#define VkglTestCase_000188_2 "ing_errors.tc_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "KHR-GLESEXT.tessellation_shader.compilation_and_lin"
#define VkglTestCase_000189_2 "king_errors.tc_non_arrayed_per_vertex_output_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linki"
#define VkglTestCase_000190_2 "ng_errors.tc_non_arrayed_per_vertex_output_variabless"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "KHR-GLESEXT.tessellation_shader.compilation_and_li"
#define VkglTestCase_000191_2 "nking_errors.te_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "KHR-GLESEXT.tessellation_shader.compilation_and_link"
#define VkglTestCase_000192_2 "ing_errors.te_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linki"
#define VkglTestCase_000193_2 "ng_errors.tc_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linkin"
#define VkglTestCase_000194_2 "g_errors.tc_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);

#define VkglTestCase_000195_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linki"
#define VkglTestCase_000195_2 "ng_errors.te_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linkin"
#define VkglTestCase_000196_2 "g_errors.te_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "KHR-GLESEXT.tessellation_shader.compilation_and_l"
#define VkglTestCase_000197_2 "inking_errors.tc_invalid_output_patch_vertex_count"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linking_err"
#define VkglTestCase_000198_2 "ors.tc_invalid_write_operation_at_non_gl_invocation_id_index"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linking"
#define VkglTestCase_000199_2 "_errors.tc_invalid_input_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "KHR-GLESEXT.tessellation_shader.compilation_and_linking"
#define VkglTestCase_000200_2 "_errors.te_invalid_output_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "KHR-GLESEXT.tessellation_shader.compilation_and_li"
#define VkglTestCase_000201_2 "nking_errors.tc_non_matching_variable_declarations"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "KHR-GLESEXT.tessellation_shader.compilation_and_li"
#define VkglTestCase_000202_2 "nking_errors.te_lacking_primitive_mode_declaration"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "KHR-GLESEXT.tessellation_shader.compilation_and_"
#define VkglTestCase_000203_2 "linking_errors.te_accessing_glTessCoord_as_array"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "KHR-GLESEXT.tessellation_shader.compilation_and_lin"
#define VkglTestCase_000204_2 "king_errors.te_accessing_glTessCoord_as_gl_in_member"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);
