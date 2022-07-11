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

#define VkglTestCase_004455_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004455_2 "invalid.multidimensional_array1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004455, VkglTestCase_004455_1, VkglTestCase_004455_2);

#define VkglTestCase_004456_1 "dEQP-GLES3.functional.shaders.arrays.i"
#define VkglTestCase_004456_2 "nvalid.multidimensional_array1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004456, VkglTestCase_004456_1, VkglTestCase_004456_2);

#define VkglTestCase_004457_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004457_2 "invalid.multidimensional_array2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004457, VkglTestCase_004457_1, VkglTestCase_004457_2);

#define VkglTestCase_004458_1 "dEQP-GLES3.functional.shaders.arrays.i"
#define VkglTestCase_004458_2 "nvalid.multidimensional_array2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004458, VkglTestCase_004458_1, VkglTestCase_004458_2);

#define VkglTestCase_004459_1 "dEQP-GLES3.functional.shaders.arrays.inva"
#define VkglTestCase_004459_2 "lid.multidimensional_uniform_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004459, VkglTestCase_004459_1, VkglTestCase_004459_2);

#define VkglTestCase_004460_1 "dEQP-GLES3.functional.shaders.arrays.inval"
#define VkglTestCase_004460_2 "id.multidimensional_uniform_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004460, VkglTestCase_004460_1, VkglTestCase_004460_2);

#define VkglTestCase_004461_1 "dEQP-GLES3.functional.shaders.arrays.invalid."
#define VkglTestCase_004461_2 "multidimensional_array_in_uniform_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004461, VkglTestCase_004461_1, VkglTestCase_004461_2);

#define VkglTestCase_004462_1 "dEQP-GLES3.functional.shaders.arrays.invalid.m"
#define VkglTestCase_004462_2 "ultidimensional_array_in_uniform_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004462, VkglTestCase_004462_1, VkglTestCase_004462_2);

#define VkglTestCase_004463_1 "dEQP-GLES3.functional.shaders.arrays.inv"
#define VkglTestCase_004463_2 "alid.dynamic_expression_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004463, VkglTestCase_004463_1, VkglTestCase_004463_2);

#define VkglTestCase_004464_1 "dEQP-GLES3.functional.shaders.arrays.inva"
#define VkglTestCase_004464_2 "lid.dynamic_expression_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004464, VkglTestCase_004464_1, VkglTestCase_004464_2);

#define VkglTestCase_004465_1 "dEQP-GLES3.functional.shaders.arrays.inva"
#define VkglTestCase_004465_2 "lid.empty_declaration_with_var_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004465, VkglTestCase_004465_1, VkglTestCase_004465_2);

#define VkglTestCase_004466_1 "dEQP-GLES3.functional.shaders.arrays.inval"
#define VkglTestCase_004466_2 "id.empty_declaration_with_var_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004466, VkglTestCase_004466_1, VkglTestCase_004466_2);

#define VkglTestCase_004467_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004467_2 ".invalid.constructor_c_style1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004467, VkglTestCase_004467_1, VkglTestCase_004467_2);

#define VkglTestCase_004468_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004468_2 "invalid.constructor_c_style1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004468, VkglTestCase_004468_1, VkglTestCase_004468_2);

#define VkglTestCase_004469_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004469_2 ".invalid.constructor_c_style2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004469, VkglTestCase_004469_1, VkglTestCase_004469_2);

#define VkglTestCase_004470_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004470_2 "invalid.constructor_c_style2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004470, VkglTestCase_004470_1, VkglTestCase_004470_2);

#define VkglTestCase_004471_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004471_2 ".invalid.constructor_c_style3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004471, VkglTestCase_004471_1, VkglTestCase_004471_2);

#define VkglTestCase_004472_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004472_2 "invalid.constructor_c_style3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004472, VkglTestCase_004472_1, VkglTestCase_004472_2);

#define VkglTestCase_004473_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004473_2 ".invalid.constructor_c_style4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004473, VkglTestCase_004473_1, VkglTestCase_004473_2);

#define VkglTestCase_004474_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004474_2 "invalid.constructor_c_style4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004474, VkglTestCase_004474_1, VkglTestCase_004474_2);
