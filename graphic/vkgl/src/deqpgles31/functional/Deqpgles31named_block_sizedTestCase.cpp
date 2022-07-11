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

#define VkglTestCase_024024_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024024_2 "uffer_variable.name_length.named_block.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024024, VkglTestCase_024024_1, VkglTestCase_024024_2);

#define VkglTestCase_024025_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024025_2 "er_variable.name_length.named_block.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024025, VkglTestCase_024025_1, VkglTestCase_024025_2);

#define VkglTestCase_024026_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024026_2 "ariable.name_length.named_block.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024026, VkglTestCase_024026_1, VkglTestCase_024026_2);

#define VkglTestCase_024027_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024027_2 "able.name_length.named_block.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024027, VkglTestCase_024027_1, VkglTestCase_024027_2);

#define VkglTestCase_024028_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024028_2 "able.name_length.named_block.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024028, VkglTestCase_024028_1, VkglTestCase_024028_2);

#define VkglTestCase_024029_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024029_2 "variable.name_length.named_block.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024029, VkglTestCase_024029_1, VkglTestCase_024029_2);

#define VkglTestCase_024030_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024030_2 "able.name_length.named_block.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024030, VkglTestCase_024030_1, VkglTestCase_024030_2);

#define VkglTestCase_024031_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024031_2 "iable.name_length.named_block.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024031, VkglTestCase_024031_1, VkglTestCase_024031_2);

#define VkglTestCase_024032_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024032_2 "er_variable.name_length.named_block.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024032, VkglTestCase_024032_1, VkglTestCase_024032_2);

#define VkglTestCase_024033_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024033_2 "variable.name_length.named_block.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024033, VkglTestCase_024033_1, VkglTestCase_024033_2);

#define VkglTestCase_024034_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024034_2 "able.name_length.named_block.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024034, VkglTestCase_024034_1, VkglTestCase_024034_2);

#define VkglTestCase_024035_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024035_2 "iable.name_length.named_block.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024035, VkglTestCase_024035_1, VkglTestCase_024035_2);

#define VkglTestCase_024036_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024036_2 "variable.name_length.named_block.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024036, VkglTestCase_024036_1, VkglTestCase_024036_2);

#define VkglTestCase_024037_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024037_2 "iable.name_length.named_block.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024037, VkglTestCase_024037_1, VkglTestCase_024037_2);

#define VkglTestCase_024038_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024038_2 "iable.name_length.named_block.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024038, VkglTestCase_024038_1, VkglTestCase_024038_2);

#define VkglTestCase_024090_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024090_2 "y.buffer_variable.offset.named_block.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024090, VkglTestCase_024090_1, VkglTestCase_024090_2);

#define VkglTestCase_024091_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024091_2 "ffer_variable.offset.named_block.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024091, VkglTestCase_024091_1, VkglTestCase_024091_2);

#define VkglTestCase_024092_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024092_2 "r_variable.offset.named_block.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024092, VkglTestCase_024092_1, VkglTestCase_024092_2);

#define VkglTestCase_024093_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024093_2 "riable.offset.named_block.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024093, VkglTestCase_024093_1, VkglTestCase_024093_2);

#define VkglTestCase_024094_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024094_2 "ariable.offset.named_block.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024094, VkglTestCase_024094_1, VkglTestCase_024094_2);

#define VkglTestCase_024095_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024095_2 "r_variable.offset.named_block.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024095, VkglTestCase_024095_1, VkglTestCase_024095_2);

#define VkglTestCase_024096_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024096_2 "ariable.offset.named_block.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024096, VkglTestCase_024096_1, VkglTestCase_024096_2);

#define VkglTestCase_024097_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024097_2 "ariable.offset.named_block.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024097, VkglTestCase_024097_1, VkglTestCase_024097_2);

#define VkglTestCase_024098_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024098_2 "uffer_variable.offset.named_block.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024098, VkglTestCase_024098_1, VkglTestCase_024098_2);

#define VkglTestCase_024099_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024099_2 "r_variable.offset.named_block.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024099, VkglTestCase_024099_1, VkglTestCase_024099_2);

#define VkglTestCase_024100_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024100_2 "ariable.offset.named_block.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024100, VkglTestCase_024100_1, VkglTestCase_024100_2);

#define VkglTestCase_024101_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024101_2 "ariable.offset.named_block.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024101, VkglTestCase_024101_1, VkglTestCase_024101_2);

#define VkglTestCase_024102_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_024102_2 "er_variable.offset.named_block.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024102, VkglTestCase_024102_1, VkglTestCase_024102_2);

#define VkglTestCase_024103_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024103_2 "ariable.offset.named_block.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024103, VkglTestCase_024103_1, VkglTestCase_024103_2);

#define VkglTestCase_024104_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024104_2 "variable.offset.named_block.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024104, VkglTestCase_024104_1, VkglTestCase_024104_2);
