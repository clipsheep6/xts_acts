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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024496_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024496_2 "er_variable.top_level_array_stride.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024496, VkglTestCase_024496_1, VkglTestCase_024496_2);

#define VkglTestCase_024497_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024497_2 "ariable.top_level_array_stride.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024497, VkglTestCase_024497_1, VkglTestCase_024497_2);

#define VkglTestCase_024498_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024498_2 "able.top_level_array_stride.unnamed_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024498, VkglTestCase_024498_1, VkglTestCase_024498_2);

#define VkglTestCase_024499_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024499_2 ".top_level_array_stride.unnamed_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024499, VkglTestCase_024499_1, VkglTestCase_024499_2);

#define VkglTestCase_024500_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024500_2 "e.top_level_array_stride.unnamed_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024500, VkglTestCase_024500_1, VkglTestCase_024500_2);

#define VkglTestCase_024501_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024501_2 "able.top_level_array_stride.unnamed_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024501, VkglTestCase_024501_1, VkglTestCase_024501_2);

#define VkglTestCase_024502_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024502_2 "e.top_level_array_stride.unnamed_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024502, VkglTestCase_024502_1, VkglTestCase_024502_2);

#define VkglTestCase_024503_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024503_2 "e.top_level_array_stride.unnamed_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024503, VkglTestCase_024503_1, VkglTestCase_024503_2);

#define VkglTestCase_024504_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024504_2 "variable.top_level_array_stride.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024504, VkglTestCase_024504_1, VkglTestCase_024504_2);

#define VkglTestCase_024505_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024505_2 "able.top_level_array_stride.unnamed_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024505, VkglTestCase_024505_1, VkglTestCase_024505_2);

#define VkglTestCase_024506_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024506_2 "e.top_level_array_stride.unnamed_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024506, VkglTestCase_024506_1, VkglTestCase_024506_2);

#define VkglTestCase_024507_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024507_2 "e.top_level_array_stride.unnamed_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024507, VkglTestCase_024507_1, VkglTestCase_024507_2);

#define VkglTestCase_024508_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024508_2 "iable.top_level_array_stride.unnamed_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024508, VkglTestCase_024508_1, VkglTestCase_024508_2);

#define VkglTestCase_024509_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024509_2 "e.top_level_array_stride.unnamed_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024509, VkglTestCase_024509_1, VkglTestCase_024509_2);

#define VkglTestCase_024510_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024510_2 "le.top_level_array_stride.unnamed_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024510, VkglTestCase_024510_1, VkglTestCase_024510_2);

#define VkglTestCase_024511_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024511_2 "able.top_level_array_stride.unnamed_block.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024511, VkglTestCase_024511_1, VkglTestCase_024511_2);

#define VkglTestCase_024512_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024512_2 ".top_level_array_stride.unnamed_block.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024512, VkglTestCase_024512_1, VkglTestCase_024512_2);

#define VkglTestCase_024513_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
#define VkglTestCase_024513_2 "p_level_array_stride.unnamed_block.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024513, VkglTestCase_024513_1, VkglTestCase_024513_2);

#define VkglTestCase_024514_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
#define VkglTestCase_024514_2 "p_level_array_stride.unnamed_block.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024514, VkglTestCase_024514_1, VkglTestCase_024514_2);

#define VkglTestCase_024515_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024515_2 "e.top_level_array_stride.unnamed_block.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024515, VkglTestCase_024515_1, VkglTestCase_024515_2);

#define VkglTestCase_024516_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
#define VkglTestCase_024516_2 "p_level_array_stride.unnamed_block.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024516, VkglTestCase_024516_1, VkglTestCase_024516_2);

#define VkglTestCase_024517_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024517_2 "op_level_array_stride.unnamed_block.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024517, VkglTestCase_024517_1, VkglTestCase_024517_2);
