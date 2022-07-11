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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002593_1 "KHR-GLES31.core.tessellation_shader.compilation_and_"
#define VkglTestCase_002593_2 "linking_errors.tc_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002593, VkglTestCase_002593_1, VkglTestCase_002593_2);

#define VkglTestCase_002594_1 "KHR-GLES31.core.tessellation_shader.compilation_and_li"
#define VkglTestCase_002594_2 "nking_errors.tc_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002594, VkglTestCase_002594_1, VkglTestCase_002594_2);

#define VkglTestCase_002595_1 "KHR-GLES31.core.tessellation_shader.compilation_and_l"
#define VkglTestCase_002595_2 "inking_errors.tc_non_arrayed_per_vertex_output_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002595, VkglTestCase_002595_1, VkglTestCase_002595_2);

#define VkglTestCase_002596_1 "KHR-GLES31.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_002596_2 "king_errors.tc_non_arrayed_per_vertex_output_variabless"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002596, VkglTestCase_002596_1, VkglTestCase_002596_2);

#define VkglTestCase_002597_1 "KHR-GLES31.core.tessellation_shader.compilation_and_"
#define VkglTestCase_002597_2 "linking_errors.te_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002597, VkglTestCase_002597_1, VkglTestCase_002597_2);

#define VkglTestCase_002598_1 "KHR-GLES31.core.tessellation_shader.compilation_and_li"
#define VkglTestCase_002598_2 "nking_errors.te_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002598, VkglTestCase_002598_1, VkglTestCase_002598_2);

#define VkglTestCase_002599_1 "KHR-GLES31.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_002599_2 "king_errors.tc_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002599, VkglTestCase_002599_1, VkglTestCase_002599_2);

#define VkglTestCase_002600_1 "KHR-GLES31.core.tessellation_shader.compilation_and_link"
#define VkglTestCase_002600_2 "ing_errors.tc_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002600, VkglTestCase_002600_1, VkglTestCase_002600_2);

#define VkglTestCase_002601_1 "KHR-GLES31.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_002601_2 "king_errors.te_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002601, VkglTestCase_002601_1, VkglTestCase_002601_2);

#define VkglTestCase_002602_1 "KHR-GLES31.core.tessellation_shader.compilation_and_link"
#define VkglTestCase_002602_2 "ing_errors.te_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002602, VkglTestCase_002602_1, VkglTestCase_002602_2);

#define VkglTestCase_002603_1 "KHR-GLES31.core.tessellation_shader.compilation_and"
#define VkglTestCase_002603_2 "_linking_errors.tc_invalid_output_patch_vertex_count"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002603, VkglTestCase_002603_1, VkglTestCase_002603_2);

#define VkglTestCase_002604_1 "KHR-GLES31.core.tessellation_shader.compilation_and_linking_e"
#define VkglTestCase_002604_2 "rrors.tc_invalid_write_operation_at_non_gl_invocation_id_index"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002604, VkglTestCase_002604_1, VkglTestCase_002604_2);

#define VkglTestCase_002605_1 "KHR-GLES31.core.tessellation_shader.compilation_and_linki"
#define VkglTestCase_002605_2 "ng_errors.tc_invalid_input_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002605, VkglTestCase_002605_1, VkglTestCase_002605_2);

#define VkglTestCase_002606_1 "KHR-GLES31.core.tessellation_shader.compilation_and_linki"
#define VkglTestCase_002606_2 "ng_errors.te_invalid_output_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002606, VkglTestCase_002606_1, VkglTestCase_002606_2);

#define VkglTestCase_002607_1 "KHR-GLES31.core.tessellation_shader.compilation_and_"
#define VkglTestCase_002607_2 "linking_errors.tc_non_matching_variable_declarations"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002607, VkglTestCase_002607_1, VkglTestCase_002607_2);

#define VkglTestCase_002608_1 "KHR-GLES31.core.tessellation_shader.compilation_and_"
#define VkglTestCase_002608_2 "linking_errors.te_lacking_primitive_mode_declaration"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002608, VkglTestCase_002608_1, VkglTestCase_002608_2);

#define VkglTestCase_002609_1 "KHR-GLES31.core.tessellation_shader.compilation_an"
#define VkglTestCase_002609_2 "d_linking_errors.te_accessing_glTessCoord_as_array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002609, VkglTestCase_002609_1, VkglTestCase_002609_2);

#define VkglTestCase_002610_1 "KHR-GLES31.core.tessellation_shader.compilation_and_l"
#define VkglTestCase_002610_2 "inking_errors.te_accessing_glTessCoord_as_gl_in_member"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002610, VkglTestCase_002610_1, VkglTestCase_002610_2);
