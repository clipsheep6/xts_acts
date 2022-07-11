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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002437_1 "dEQP-GLES2.functional.shaders.scoping.i"
#define VkglTestCase_002437_2 "nvalid.redeclare_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002437, VkglTestCase_002437_1, VkglTestCase_002437_2);

#define VkglTestCase_002438_1 "dEQP-GLES2.functional.shaders.scoping.in"
#define VkglTestCase_002438_2 "valid.redeclare_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002438, VkglTestCase_002438_1, VkglTestCase_002438_2);

#define VkglTestCase_002439_1 "dEQP-GLES2.functional.shaders.scoping."
#define VkglTestCase_002439_2 "invalid.redeclare_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002439, VkglTestCase_002439_1, VkglTestCase_002439_2);

#define VkglTestCase_002440_1 "dEQP-GLES2.functional.shaders.scoping.i"
#define VkglTestCase_002440_2 "nvalid.redeclare_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002440, VkglTestCase_002440_1, VkglTestCase_002440_2);

#define VkglTestCase_002441_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002441_2 ".redeclare_for_init_statement_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002441, VkglTestCase_002441_1, VkglTestCase_002441_2);

#define VkglTestCase_002442_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002442_2 "redeclare_for_init_statement_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002442, VkglTestCase_002442_1, VkglTestCase_002442_2);

#define VkglTestCase_002443_1 "dEQP-GLES2.functional.shaders.scoping.inva"
#define VkglTestCase_002443_2 "lid.redeclare_for_condition_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002443, VkglTestCase_002443_1, VkglTestCase_002443_2);

#define VkglTestCase_002444_1 "dEQP-GLES2.functional.shaders.scoping.inval"
#define VkglTestCase_002444_2 "id.redeclare_for_condition_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002444, VkglTestCase_002444_1, VkglTestCase_002444_2);

#define VkglTestCase_002445_1 "dEQP-GLES2.functional.shaders.scoping.invalid.redecla"
#define VkglTestCase_002445_2 "re_for_init_statement_variable_in_for_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002445, VkglTestCase_002445_1, VkglTestCase_002445_2);

#define VkglTestCase_002446_1 "dEQP-GLES2.functional.shaders.scoping.invalid.redeclar"
#define VkglTestCase_002446_2 "e_for_init_statement_variable_in_for_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002446, VkglTestCase_002446_1, VkglTestCase_002446_2);

#define VkglTestCase_002447_1 "dEQP-GLES2.functional.shaders.scoping.inval"
#define VkglTestCase_002447_2 "id.redeclare_while_condition_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002447, VkglTestCase_002447_1, VkglTestCase_002447_2);

#define VkglTestCase_002448_1 "dEQP-GLES2.functional.shaders.scoping.invali"
#define VkglTestCase_002448_2 "d.redeclare_while_condition_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002448, VkglTestCase_002448_1, VkglTestCase_002448_2);

#define VkglTestCase_002449_1 "dEQP-GLES2.functional.shaders.scopi"
#define VkglTestCase_002449_2 "ng.invalid.redefine_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002449, VkglTestCase_002449_1, VkglTestCase_002449_2);

#define VkglTestCase_002450_1 "dEQP-GLES2.functional.shaders.scopin"
#define VkglTestCase_002450_2 "g.invalid.redefine_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002450, VkglTestCase_002450_1, VkglTestCase_002450_2);

#define VkglTestCase_002451_1 "dEQP-GLES2.functional.shaders.scopi"
#define VkglTestCase_002451_2 "ng.invalid.redeclare_builtin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002451, VkglTestCase_002451_1, VkglTestCase_002451_2);

#define VkglTestCase_002452_1 "dEQP-GLES2.functional.shaders.scopin"
#define VkglTestCase_002452_2 "g.invalid.redeclare_builtin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002452, VkglTestCase_002452_1, VkglTestCase_002452_2);

#define VkglTestCase_002453_1 "dEQP-GLES2.functional.shaders.scoping."
#define VkglTestCase_002453_2 "invalid.conflict_function_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002453, VkglTestCase_002453_1, VkglTestCase_002453_2);

#define VkglTestCase_002454_1 "dEQP-GLES2.functional.shaders.scoping.i"
#define VkglTestCase_002454_2 "nvalid.conflict_function_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002454, VkglTestCase_002454_1, VkglTestCase_002454_2);

#define VkglTestCase_002455_1 "dEQP-GLES2.functional.shaders.scoping.i"
#define VkglTestCase_002455_2 "nvalid.conflict_function_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002455, VkglTestCase_002455_1, VkglTestCase_002455_2);

#define VkglTestCase_002456_1 "dEQP-GLES2.functional.shaders.scoping.in"
#define VkglTestCase_002456_2 "valid.conflict_function_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002456, VkglTestCase_002456_1, VkglTestCase_002456_2);

#define VkglTestCase_002457_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002457_2 ".use_global_variable_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002457, VkglTestCase_002457_1, VkglTestCase_002457_2);

#define VkglTestCase_002458_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002458_2 "use_global_variable_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002458, VkglTestCase_002458_1, VkglTestCase_002458_2);

#define VkglTestCase_002459_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002459_2 ".use_local_variable_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002459, VkglTestCase_002459_1, VkglTestCase_002459_2);

#define VkglTestCase_002460_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002460_2 "use_local_variable_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002460, VkglTestCase_002460_1, VkglTestCase_002460_2);

#define VkglTestCase_002461_1 "dEQP-GLES2.functional.shaders.scoping.inval"
#define VkglTestCase_002461_2 "id.use_struct_type_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002461, VkglTestCase_002461_1, VkglTestCase_002461_2);

#define VkglTestCase_002462_1 "dEQP-GLES2.functional.shaders.scoping.invali"
#define VkglTestCase_002462_2 "d.use_struct_type_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002462, VkglTestCase_002462_1, VkglTestCase_002462_2);

#define VkglTestCase_002463_1 "dEQP-GLES2.functional.shaders.scoping.inva"
#define VkglTestCase_002463_2 "lid.use_function_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002463, VkglTestCase_002463_1, VkglTestCase_002463_2);

#define VkglTestCase_002464_1 "dEQP-GLES2.functional.shaders.scoping.inval"
#define VkglTestCase_002464_2 "id.use_function_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002464, VkglTestCase_002464_1, VkglTestCase_002464_2);

#define VkglTestCase_002465_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002465_2 ".use_variable_from_block_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002465, VkglTestCase_002465_1, VkglTestCase_002465_2);

#define VkglTestCase_002466_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002466_2 "use_variable_from_block_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002466, VkglTestCase_002466_1, VkglTestCase_002466_2);

#define VkglTestCase_002467_1 "dEQP-GLES2.functional.shaders.scoping.invali"
#define VkglTestCase_002467_2 "d.use_variable_from_if_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002467, VkglTestCase_002467_1, VkglTestCase_002467_2);

#define VkglTestCase_002468_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002468_2 ".use_variable_from_if_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002468, VkglTestCase_002468_1, VkglTestCase_002468_2);

#define VkglTestCase_002469_1 "dEQP-GLES2.functional.shaders.scoping.invalid"
#define VkglTestCase_002469_2 ".use_variable_from_else_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002469, VkglTestCase_002469_1, VkglTestCase_002469_2);

#define VkglTestCase_002470_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002470_2 "use_variable_from_else_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002470, VkglTestCase_002470_1, VkglTestCase_002470_2);

#define VkglTestCase_002471_1 "dEQP-GLES2.functional.shaders.scoping.in"
#define VkglTestCase_002471_2 "valid.use_variable_from_if_in_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002471, VkglTestCase_002471_1, VkglTestCase_002471_2);

#define VkglTestCase_002472_1 "dEQP-GLES2.functional.shaders.scoping.inv"
#define VkglTestCase_002472_2 "alid.use_variable_from_if_in_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002472, VkglTestCase_002472_1, VkglTestCase_002472_2);

#define VkglTestCase_002473_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use_va"
#define VkglTestCase_002473_2 "riable_from_for_init_statement_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002473, VkglTestCase_002473_1, VkglTestCase_002473_2);

#define VkglTestCase_002474_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use_var"
#define VkglTestCase_002474_2 "iable_from_for_init_statement_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002474, VkglTestCase_002474_1, VkglTestCase_002474_2);

#define VkglTestCase_002475_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use_"
#define VkglTestCase_002475_2 "variable_from_while_condition_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002475, VkglTestCase_002475_1, VkglTestCase_002475_2);

#define VkglTestCase_002476_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use_v"
#define VkglTestCase_002476_2 "ariable_from_while_condition_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002476, VkglTestCase_002476_1, VkglTestCase_002476_2);

#define VkglTestCase_002477_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use"
#define VkglTestCase_002477_2 "_parameter_names_from_function_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002477, VkglTestCase_002477_1, VkglTestCase_002477_2);

#define VkglTestCase_002478_1 "dEQP-GLES2.functional.shaders.scoping.invalid.use_"
#define VkglTestCase_002478_2 "parameter_names_from_function_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002478, VkglTestCase_002478_1, VkglTestCase_002478_2);

#define VkglTestCase_002479_1 "dEQP-GLES2.functional.shaders.scoping.invalid."
#define VkglTestCase_002479_2 "variable_not_visible_in_own_initializer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002479, VkglTestCase_002479_1, VkglTestCase_002479_2);

#define VkglTestCase_002480_1 "dEQP-GLES2.functional.shaders.scoping.invalid.v"
#define VkglTestCase_002480_2 "ariable_not_visible_in_own_initializer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002480, VkglTestCase_002480_1, VkglTestCase_002480_2);
