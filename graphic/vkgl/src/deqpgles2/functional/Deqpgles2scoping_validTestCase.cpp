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

#define VkglTestCase_002405_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002405_2 ".local_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002405, VkglTestCase_002405_1, VkglTestCase_002405_2);

#define VkglTestCase_002406_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002406_2 "local_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002406, VkglTestCase_002406_1, VkglTestCase_002406_2);

#define VkglTestCase_002407_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002407_2 ".block_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002407, VkglTestCase_002407_1, VkglTestCase_002407_2);

#define VkglTestCase_002408_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002408_2 "block_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002408, VkglTestCase_002408_1, VkglTestCase_002408_2);

#define VkglTestCase_002409_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002409_2 ".block_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002409, VkglTestCase_002409_1, VkglTestCase_002409_2);

#define VkglTestCase_002410_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002410_2 "block_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002410, VkglTestCase_002410_1, VkglTestCase_002410_2);

#define VkglTestCase_002411_1 "dEQP-GLES2.functional.shaders.scoping.valid.for_i"
#define VkglTestCase_002411_2 "nit_statement_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002411, VkglTestCase_002411_1, VkglTestCase_002411_2);

#define VkglTestCase_002412_1 "dEQP-GLES2.functional.shaders.scoping.valid.for_in"
#define VkglTestCase_002412_2 "it_statement_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002412, VkglTestCase_002412_1, VkglTestCase_002412_2);

#define VkglTestCase_002413_1 "dEQP-GLES2.functional.shaders.scoping.valid.whil"
#define VkglTestCase_002413_2 "e_condition_variable_hides_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002413, VkglTestCase_002413_1, VkglTestCase_002413_2);

#define VkglTestCase_002414_1 "dEQP-GLES2.functional.shaders.scoping.valid.while"
#define VkglTestCase_002414_2 "_condition_variable_hides_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002414, VkglTestCase_002414_1, VkglTestCase_002414_2);

#define VkglTestCase_002415_1 "dEQP-GLES2.functional.shaders.scoping.valid.for_in"
#define VkglTestCase_002415_2 "it_statement_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002415, VkglTestCase_002415_1, VkglTestCase_002415_2);

#define VkglTestCase_002416_1 "dEQP-GLES2.functional.shaders.scoping.valid.for_ini"
#define VkglTestCase_002416_2 "t_statement_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002416, VkglTestCase_002416_1, VkglTestCase_002416_2);

#define VkglTestCase_002417_1 "dEQP-GLES2.functional.shaders.scoping.valid.whil"
#define VkglTestCase_002417_2 "e_condition_variable_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002417, VkglTestCase_002417_1, VkglTestCase_002417_2);

#define VkglTestCase_002418_1 "dEQP-GLES2.functional.shaders.scoping.valid.while"
#define VkglTestCase_002418_2 "_condition_variable_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002418, VkglTestCase_002418_1, VkglTestCase_002418_2);

#define VkglTestCase_002419_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002419_2 ".variable_in_if_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002419, VkglTestCase_002419_1, VkglTestCase_002419_2);

#define VkglTestCase_002420_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002420_2 "variable_in_if_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002420, VkglTestCase_002420_1, VkglTestCase_002420_2);

#define VkglTestCase_002421_1 "dEQP-GLES2.functional.shaders.scoping.valid.varia"
#define VkglTestCase_002421_2 "ble_from_outer_scope_visible_in_initializer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002421, VkglTestCase_002421_1, VkglTestCase_002421_2);

#define VkglTestCase_002422_1 "dEQP-GLES2.functional.shaders.scoping.valid.variab"
#define VkglTestCase_002422_2 "le_from_outer_scope_visible_in_initializer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002422, VkglTestCase_002422_1, VkglTestCase_002422_2);

#define VkglTestCase_002423_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002423_2 ".local_int_variable_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002423, VkglTestCase_002423_1, VkglTestCase_002423_2);

#define VkglTestCase_002424_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002424_2 "local_int_variable_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002424, VkglTestCase_002424_1, VkglTestCase_002424_2);

#define VkglTestCase_002425_1 "dEQP-GLES2.functional.shaders.scoping.valid.l"
#define VkglTestCase_002425_2 "ocal_struct_variable_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002425, VkglTestCase_002425_1, VkglTestCase_002425_2);

#define VkglTestCase_002426_1 "dEQP-GLES2.functional.shaders.scoping.valid.lo"
#define VkglTestCase_002426_2 "cal_struct_variable_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002426, VkglTestCase_002426_1, VkglTestCase_002426_2);

#define VkglTestCase_002427_1 "dEQP-GLES2.functional.shaders.scoping.va"
#define VkglTestCase_002427_2 "lid.local_variable_hides_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002427, VkglTestCase_002427_1, VkglTestCase_002427_2);

#define VkglTestCase_002428_1 "dEQP-GLES2.functional.shaders.scoping.val"
#define VkglTestCase_002428_2 "id.local_variable_hides_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002428, VkglTestCase_002428_1, VkglTestCase_002428_2);

#define VkglTestCase_002429_1 "dEQP-GLES2.functional.shaders.scoping.valid.f"
#define VkglTestCase_002429_2 "unction_parameter_hides_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002429, VkglTestCase_002429_1, VkglTestCase_002429_2);

#define VkglTestCase_002430_1 "dEQP-GLES2.functional.shaders.scoping.valid.fu"
#define VkglTestCase_002430_2 "nction_parameter_hides_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002430, VkglTestCase_002430_1, VkglTestCase_002430_2);

#define VkglTestCase_002431_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002431_2 ".function_parameter_hides_struct_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002431, VkglTestCase_002431_1, VkglTestCase_002431_2);

#define VkglTestCase_002432_1 "dEQP-GLES2.functional.shaders.scoping.valid."
#define VkglTestCase_002432_2 "function_parameter_hides_struct_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002432, VkglTestCase_002432_1, VkglTestCase_002432_2);

#define VkglTestCase_002433_1 "dEQP-GLES2.functional.shaders.scoping.vali"
#define VkglTestCase_002433_2 "d.function_parameter_hides_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002433, VkglTestCase_002433_1, VkglTestCase_002433_2);

#define VkglTestCase_002434_1 "dEQP-GLES2.functional.shaders.scoping.valid"
#define VkglTestCase_002434_2 ".function_parameter_hides_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002434, VkglTestCase_002434_1, VkglTestCase_002434_2);

#define VkglTestCase_002435_1 "dEQP-GLES2.functional.shaders.scoping.valid.local_va"
#define VkglTestCase_002435_2 "riable_in_inner_scope_hides_function_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002435, VkglTestCase_002435_1, VkglTestCase_002435_2);

#define VkglTestCase_002436_1 "dEQP-GLES2.functional.shaders.scoping.valid.local_var"
#define VkglTestCase_002436_2 "iable_in_inner_scope_hides_function_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002436, VkglTestCase_002436_1, VkglTestCase_002436_2);
