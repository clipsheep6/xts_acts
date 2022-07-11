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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004926_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004926_2 ".local_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004926, VkglTestCase_004926_1, VkglTestCase_004926_2);

#define VkglTestCase_004927_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004927_2 "local_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004927, VkglTestCase_004927_1, VkglTestCase_004927_2);

#define VkglTestCase_004928_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004928_2 ".block_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004928, VkglTestCase_004928_1, VkglTestCase_004928_2);

#define VkglTestCase_004929_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004929_2 "block_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004929, VkglTestCase_004929_1, VkglTestCase_004929_2);

#define VkglTestCase_004930_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004930_2 ".block_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004930, VkglTestCase_004930_1, VkglTestCase_004930_2);

#define VkglTestCase_004931_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004931_2 "block_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004931, VkglTestCase_004931_1, VkglTestCase_004931_2);

#define VkglTestCase_004932_1 "dEQP-GLES3.functional.shaders.scoping.valid.for_i"
#define VkglTestCase_004932_2 "nit_statement_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004932, VkglTestCase_004932_1, VkglTestCase_004932_2);

#define VkglTestCase_004933_1 "dEQP-GLES3.functional.shaders.scoping.valid.for_in"
#define VkglTestCase_004933_2 "it_statement_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004933, VkglTestCase_004933_1, VkglTestCase_004933_2);

#define VkglTestCase_004934_1 "dEQP-GLES3.functional.shaders.scoping.valid.whil"
#define VkglTestCase_004934_2 "e_condition_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004934, VkglTestCase_004934_1, VkglTestCase_004934_2);

#define VkglTestCase_004935_1 "dEQP-GLES3.functional.shaders.scoping.valid.while"
#define VkglTestCase_004935_2 "_condition_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004935, VkglTestCase_004935_1, VkglTestCase_004935_2);

#define VkglTestCase_004936_1 "dEQP-GLES3.functional.shaders.scoping.valid.for_in"
#define VkglTestCase_004936_2 "it_statement_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004936, VkglTestCase_004936_1, VkglTestCase_004936_2);

#define VkglTestCase_004937_1 "dEQP-GLES3.functional.shaders.scoping.valid.for_ini"
#define VkglTestCase_004937_2 "t_statement_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004937, VkglTestCase_004937_1, VkglTestCase_004937_2);

#define VkglTestCase_004938_1 "dEQP-GLES3.functional.shaders.scoping.valid.whil"
#define VkglTestCase_004938_2 "e_condition_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004938, VkglTestCase_004938_1, VkglTestCase_004938_2);

#define VkglTestCase_004939_1 "dEQP-GLES3.functional.shaders.scoping.valid.while"
#define VkglTestCase_004939_2 "_condition_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004939, VkglTestCase_004939_1, VkglTestCase_004939_2);

#define VkglTestCase_004940_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004940_2 ".variable_in_if_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004940, VkglTestCase_004940_1, VkglTestCase_004940_2);

#define VkglTestCase_004941_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004941_2 "variable_in_if_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004941, VkglTestCase_004941_1, VkglTestCase_004941_2);

#define VkglTestCase_004942_1 "dEQP-GLES3.functional.shaders.scoping.valid.varia"
#define VkglTestCase_004942_2 "ble_from_outer_scope_visible_in_initializer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004942, VkglTestCase_004942_1, VkglTestCase_004942_2);

#define VkglTestCase_004943_1 "dEQP-GLES3.functional.shaders.scoping.valid.variab"
#define VkglTestCase_004943_2 "le_from_outer_scope_visible_in_initializer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004943, VkglTestCase_004943_1, VkglTestCase_004943_2);

#define VkglTestCase_004944_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004944_2 ".local_int_variable_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004944, VkglTestCase_004944_1, VkglTestCase_004944_2);

#define VkglTestCase_004945_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004945_2 "local_int_variable_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004945, VkglTestCase_004945_1, VkglTestCase_004945_2);

#define VkglTestCase_004946_1 "dEQP-GLES3.functional.shaders.scoping.valid.l"
#define VkglTestCase_004946_2 "ocal_struct_variable_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004946, VkglTestCase_004946_1, VkglTestCase_004946_2);

#define VkglTestCase_004947_1 "dEQP-GLES3.functional.shaders.scoping.valid.lo"
#define VkglTestCase_004947_2 "cal_struct_variable_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004947, VkglTestCase_004947_1, VkglTestCase_004947_2);

#define VkglTestCase_004948_1 "dEQP-GLES3.functional.shaders.scoping.va"
#define VkglTestCase_004948_2 "lid.local_variable_hides_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004948, VkglTestCase_004948_1, VkglTestCase_004948_2);

#define VkglTestCase_004949_1 "dEQP-GLES3.functional.shaders.scoping.val"
#define VkglTestCase_004949_2 "id.local_variable_hides_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004949, VkglTestCase_004949_1, VkglTestCase_004949_2);

#define VkglTestCase_004950_1 "dEQP-GLES3.functional.shaders.scoping.valid.f"
#define VkglTestCase_004950_2 "unction_parameter_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004950, VkglTestCase_004950_1, VkglTestCase_004950_2);

#define VkglTestCase_004951_1 "dEQP-GLES3.functional.shaders.scoping.valid.fu"
#define VkglTestCase_004951_2 "nction_parameter_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004951, VkglTestCase_004951_1, VkglTestCase_004951_2);

#define VkglTestCase_004952_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004952_2 ".function_parameter_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004952, VkglTestCase_004952_1, VkglTestCase_004952_2);

#define VkglTestCase_004953_1 "dEQP-GLES3.functional.shaders.scoping.valid."
#define VkglTestCase_004953_2 "function_parameter_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004953, VkglTestCase_004953_1, VkglTestCase_004953_2);

#define VkglTestCase_004954_1 "dEQP-GLES3.functional.shaders.scoping.vali"
#define VkglTestCase_004954_2 "d.function_parameter_hides_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004954, VkglTestCase_004954_1, VkglTestCase_004954_2);

#define VkglTestCase_004955_1 "dEQP-GLES3.functional.shaders.scoping.valid"
#define VkglTestCase_004955_2 ".function_parameter_hides_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004955, VkglTestCase_004955_1, VkglTestCase_004955_2);

#define VkglTestCase_004956_1 "dEQP-GLES3.functional.shaders.scoping.valid.local_va"
#define VkglTestCase_004956_2 "riable_in_inner_scope_hides_function_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004956, VkglTestCase_004956_1, VkglTestCase_004956_2);

#define VkglTestCase_004957_1 "dEQP-GLES3.functional.shaders.scoping.valid.local_var"
#define VkglTestCase_004957_2 "iable_in_inner_scope_hides_function_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004957, VkglTestCase_004957_1, VkglTestCase_004957_2);

#define VkglTestCase_004958_1 "dEQP-GLES3.functional.shaders.scop"
#define VkglTestCase_004958_2 "ing.valid.redeclare_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004958, VkglTestCase_004958_1, VkglTestCase_004958_2);

#define VkglTestCase_004959_1 "dEQP-GLES3.functional.shaders.scopi"
#define VkglTestCase_004959_2 "ng.valid.redeclare_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004959, VkglTestCase_004959_1, VkglTestCase_004959_2);
