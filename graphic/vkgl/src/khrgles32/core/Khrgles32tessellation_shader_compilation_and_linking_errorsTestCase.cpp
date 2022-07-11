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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000215_1 "KHR-GLES32.core.tessellation_shader.compilation_and_"
#define VkglTestCase_000215_2 "linking_errors.tc_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "KHR-GLES32.core.tessellation_shader.compilation_and_li"
#define VkglTestCase_000216_2 "nking_errors.tc_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "KHR-GLES32.core.tessellation_shader.compilation_and_l"
#define VkglTestCase_000217_2 "inking_errors.tc_non_arrayed_per_vertex_output_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "KHR-GLES32.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_000218_2 "king_errors.tc_non_arrayed_per_vertex_output_variabless"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "KHR-GLES32.core.tessellation_shader.compilation_and_"
#define VkglTestCase_000219_2 "linking_errors.te_non_arrayed_per_vertex_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "KHR-GLES32.core.tessellation_shader.compilation_and_li"
#define VkglTestCase_000220_2 "nking_errors.te_non_arrayed_per_vertex_input_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "KHR-GLES32.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_000221_2 "king_errors.tc_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "KHR-GLES32.core.tessellation_shader.compilation_and_link"
#define VkglTestCase_000222_2 "ing_errors.tc_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "KHR-GLES32.core.tessellation_shader.compilation_and_lin"
#define VkglTestCase_000223_2 "king_errors.te_invalid_array_size_used_for_input_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "KHR-GLES32.core.tessellation_shader.compilation_and_link"
#define VkglTestCase_000224_2 "ing_errors.te_invalid_array_size_used_for_input_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "KHR-GLES32.core.tessellation_shader.compilation_and"
#define VkglTestCase_000225_2 "_linking_errors.tc_invalid_output_patch_vertex_count"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "KHR-GLES32.core.tessellation_shader.compilation_and_linking_e"
#define VkglTestCase_000226_2 "rrors.tc_invalid_write_operation_at_non_gl_invocation_id_index"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "KHR-GLES32.core.tessellation_shader.compilation_and_linki"
#define VkglTestCase_000227_2 "ng_errors.tc_invalid_input_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "KHR-GLES32.core.tessellation_shader.compilation_and_linki"
#define VkglTestCase_000228_2 "ng_errors.te_invalid_output_per_patch_attribute_definition"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "KHR-GLES32.core.tessellation_shader.compilation_and_"
#define VkglTestCase_000229_2 "linking_errors.tc_non_matching_variable_declarations"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "KHR-GLES32.core.tessellation_shader.compilation_and_"
#define VkglTestCase_000230_2 "linking_errors.te_lacking_primitive_mode_declaration"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "KHR-GLES32.core.tessellation_shader.compilation_an"
#define VkglTestCase_000231_2 "d_linking_errors.te_accessing_glTessCoord_as_array"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "KHR-GLES32.core.tessellation_shader.compilation_and_l"
#define VkglTestCase_000232_2 "inking_errors.te_accessing_glTessCoord_as_gl_in_member"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);
