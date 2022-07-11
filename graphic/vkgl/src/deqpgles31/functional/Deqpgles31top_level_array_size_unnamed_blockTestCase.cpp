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

#define VkglTestCase_024430_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024430_2 "fer_variable.top_level_array_size.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024430, VkglTestCase_024430_1, VkglTestCase_024430_2);

#define VkglTestCase_024431_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024431_2 "variable.top_level_array_size.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024431, VkglTestCase_024431_1, VkglTestCase_024431_2);

#define VkglTestCase_024432_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024432_2 "iable.top_level_array_size.unnamed_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024432, VkglTestCase_024432_1, VkglTestCase_024432_2);

#define VkglTestCase_024433_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024433_2 "e.top_level_array_size.unnamed_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024433, VkglTestCase_024433_1, VkglTestCase_024433_2);

#define VkglTestCase_024434_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024434_2 "le.top_level_array_size.unnamed_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024434, VkglTestCase_024434_1, VkglTestCase_024434_2);

#define VkglTestCase_024435_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024435_2 "iable.top_level_array_size.unnamed_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024435, VkglTestCase_024435_1, VkglTestCase_024435_2);

#define VkglTestCase_024436_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024436_2 "le.top_level_array_size.unnamed_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024436, VkglTestCase_024436_1, VkglTestCase_024436_2);

#define VkglTestCase_024437_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024437_2 "le.top_level_array_size.unnamed_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024437, VkglTestCase_024437_1, VkglTestCase_024437_2);

#define VkglTestCase_024438_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024438_2 "_variable.top_level_array_size.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024438, VkglTestCase_024438_1, VkglTestCase_024438_2);

#define VkglTestCase_024439_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024439_2 "iable.top_level_array_size.unnamed_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024439, VkglTestCase_024439_1, VkglTestCase_024439_2);

#define VkglTestCase_024440_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024440_2 "le.top_level_array_size.unnamed_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024440, VkglTestCase_024440_1, VkglTestCase_024440_2);

#define VkglTestCase_024441_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024441_2 "le.top_level_array_size.unnamed_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024441, VkglTestCase_024441_1, VkglTestCase_024441_2);

#define VkglTestCase_024442_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024442_2 "riable.top_level_array_size.unnamed_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024442, VkglTestCase_024442_1, VkglTestCase_024442_2);

#define VkglTestCase_024443_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024443_2 "le.top_level_array_size.unnamed_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024443, VkglTestCase_024443_1, VkglTestCase_024443_2);

#define VkglTestCase_024444_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024444_2 "ble.top_level_array_size.unnamed_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024444, VkglTestCase_024444_1, VkglTestCase_024444_2);

#define VkglTestCase_024445_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024445_2 "iable.top_level_array_size.unnamed_block.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024445, VkglTestCase_024445_1, VkglTestCase_024445_2);

#define VkglTestCase_024446_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024446_2 "e.top_level_array_size.unnamed_block.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024446, VkglTestCase_024446_1, VkglTestCase_024446_2);

#define VkglTestCase_024447_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024447_2 "op_level_array_size.unnamed_block.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024447, VkglTestCase_024447_1, VkglTestCase_024447_2);

#define VkglTestCase_024448_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024448_2 "op_level_array_size.unnamed_block.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024448, VkglTestCase_024448_1, VkglTestCase_024448_2);

#define VkglTestCase_024449_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024449_2 "le.top_level_array_size.unnamed_block.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024449, VkglTestCase_024449_1, VkglTestCase_024449_2);

#define VkglTestCase_024450_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024450_2 "op_level_array_size.unnamed_block.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024450, VkglTestCase_024450_1, VkglTestCase_024450_2);

#define VkglTestCase_024451_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024451_2 "top_level_array_size.unnamed_block.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024451, VkglTestCase_024451_1, VkglTestCase_024451_2);
