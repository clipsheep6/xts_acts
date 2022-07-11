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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020050_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020050_2 "ery.uniform.resource_list.default_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020050, VkglTestCase_020050_1, VkglTestCase_020050_2);

#define VkglTestCase_020051_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020051_2 ".uniform.resource_list.default_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020051, VkglTestCase_020051_1, VkglTestCase_020051_2);

#define VkglTestCase_020052_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020052_2 "form.resource_list.default_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020052, VkglTestCase_020052_1, VkglTestCase_020052_2);

#define VkglTestCase_020053_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020053_2 "m.resource_list.default_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020053, VkglTestCase_020053_1, VkglTestCase_020053_2);

#define VkglTestCase_020054_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_020054_2 "source_list.default_block.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020054, VkglTestCase_020054_1, VkglTestCase_020054_2);

#define VkglTestCase_020055_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020055_2 "esource_list.default_block.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020055, VkglTestCase_020055_1, VkglTestCase_020055_2);

#define VkglTestCase_020056_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020056_2 "m.resource_list.default_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020056, VkglTestCase_020056_1, VkglTestCase_020056_2);

#define VkglTestCase_020057_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020057_2 "esource_list.default_block.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020057, VkglTestCase_020057_1, VkglTestCase_020057_2);

#define VkglTestCase_020058_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020058_2 "esource_list.default_block.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020058, VkglTestCase_020058_1, VkglTestCase_020058_2);

#define VkglTestCase_020059_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020059_2 "iform.resource_list.default_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020059, VkglTestCase_020059_1, VkglTestCase_020059_2);

#define VkglTestCase_020060_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020060_2 "m.resource_list.default_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020060, VkglTestCase_020060_1, VkglTestCase_020060_2);

#define VkglTestCase_020061_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020061_2 "esource_list.default_block.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020061, VkglTestCase_020061_1, VkglTestCase_020061_2);

#define VkglTestCase_020062_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020062_2 "esource_list.default_block.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020062, VkglTestCase_020062_1, VkglTestCase_020062_2);

#define VkglTestCase_020063_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020063_2 "rm.resource_list.default_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020063, VkglTestCase_020063_1, VkglTestCase_020063_2);

#define VkglTestCase_020064_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020064_2 "esource_list.default_block.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020064, VkglTestCase_020064_1, VkglTestCase_020064_2);

#define VkglTestCase_020065_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020065_2 "resource_list.default_block.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020065, VkglTestCase_020065_1, VkglTestCase_020065_2);

#define VkglTestCase_020066_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020066_2 ".uniform.resource_list.default_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020066, VkglTestCase_020066_1, VkglTestCase_020066_2);

#define VkglTestCase_020067_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020067_2 "iform.resource_list.default_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020067, VkglTestCase_020067_1, VkglTestCase_020067_2);

#define VkglTestCase_020068_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020068_2 "m.resource_list.default_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020068, VkglTestCase_020068_1, VkglTestCase_020068_2);

#define VkglTestCase_020069_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020069_2 "esource_list.default_block.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020069, VkglTestCase_020069_1, VkglTestCase_020069_2);

#define VkglTestCase_020070_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020070_2 "esource_list.default_block.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020070, VkglTestCase_020070_1, VkglTestCase_020070_2);

#define VkglTestCase_020071_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020071_2 "rm.resource_list.default_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020071, VkglTestCase_020071_1, VkglTestCase_020071_2);

#define VkglTestCase_020072_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020072_2 "esource_list.default_block.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020072, VkglTestCase_020072_1, VkglTestCase_020072_2);

#define VkglTestCase_020073_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020073_2 "resource_list.default_block.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020073, VkglTestCase_020073_1, VkglTestCase_020073_2);

#define VkglTestCase_020074_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020074_2 "iform.resource_list.default_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020074, VkglTestCase_020074_1, VkglTestCase_020074_2);

#define VkglTestCase_020075_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020075_2 "rm.resource_list.default_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020075, VkglTestCase_020075_1, VkglTestCase_020075_2);

#define VkglTestCase_020076_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020076_2 "esource_list.default_block.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020076, VkglTestCase_020076_1, VkglTestCase_020076_2);

#define VkglTestCase_020077_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020077_2 "resource_list.default_block.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020077, VkglTestCase_020077_1, VkglTestCase_020077_2);

#define VkglTestCase_020078_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020078_2 "rm.resource_list.default_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020078, VkglTestCase_020078_1, VkglTestCase_020078_2);

#define VkglTestCase_020079_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020079_2 "resource_list.default_block.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020079, VkglTestCase_020079_1, VkglTestCase_020079_2);

#define VkglTestCase_020080_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020080_2 "resource_list.default_block.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020080, VkglTestCase_020080_1, VkglTestCase_020080_2);
