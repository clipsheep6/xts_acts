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

#define VkglTestCase_020112_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020112_2 "ery.uniform.resource_list.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020112, VkglTestCase_020112_1, VkglTestCase_020112_2);

#define VkglTestCase_020113_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020113_2 ".uniform.resource_list.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020113, VkglTestCase_020113_1, VkglTestCase_020113_2);

#define VkglTestCase_020114_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020114_2 "form.resource_list.unnamed_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020114, VkglTestCase_020114_1, VkglTestCase_020114_2);

#define VkglTestCase_020115_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020115_2 "m.resource_list.unnamed_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020115, VkglTestCase_020115_1, VkglTestCase_020115_2);

#define VkglTestCase_020116_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_020116_2 "source_list.unnamed_block.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020116, VkglTestCase_020116_1, VkglTestCase_020116_2);

#define VkglTestCase_020117_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020117_2 "esource_list.unnamed_block.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020117, VkglTestCase_020117_1, VkglTestCase_020117_2);

#define VkglTestCase_020118_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020118_2 "m.resource_list.unnamed_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020118, VkglTestCase_020118_1, VkglTestCase_020118_2);

#define VkglTestCase_020119_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020119_2 "esource_list.unnamed_block.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020119, VkglTestCase_020119_1, VkglTestCase_020119_2);

#define VkglTestCase_020120_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020120_2 "esource_list.unnamed_block.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020120, VkglTestCase_020120_1, VkglTestCase_020120_2);

#define VkglTestCase_020121_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020121_2 "iform.resource_list.unnamed_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020121, VkglTestCase_020121_1, VkglTestCase_020121_2);

#define VkglTestCase_020122_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020122_2 "m.resource_list.unnamed_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020122, VkglTestCase_020122_1, VkglTestCase_020122_2);

#define VkglTestCase_020123_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020123_2 "esource_list.unnamed_block.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020123, VkglTestCase_020123_1, VkglTestCase_020123_2);

#define VkglTestCase_020124_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020124_2 "esource_list.unnamed_block.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020124, VkglTestCase_020124_1, VkglTestCase_020124_2);

#define VkglTestCase_020125_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020125_2 "rm.resource_list.unnamed_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020125, VkglTestCase_020125_1, VkglTestCase_020125_2);

#define VkglTestCase_020126_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020126_2 "esource_list.unnamed_block.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020126, VkglTestCase_020126_1, VkglTestCase_020126_2);

#define VkglTestCase_020127_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020127_2 "resource_list.unnamed_block.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020127, VkglTestCase_020127_1, VkglTestCase_020127_2);

#define VkglTestCase_020128_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020128_2 ".uniform.resource_list.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020128, VkglTestCase_020128_1, VkglTestCase_020128_2);

#define VkglTestCase_020129_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020129_2 "iform.resource_list.unnamed_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020129, VkglTestCase_020129_1, VkglTestCase_020129_2);

#define VkglTestCase_020130_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020130_2 "m.resource_list.unnamed_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020130, VkglTestCase_020130_1, VkglTestCase_020130_2);

#define VkglTestCase_020131_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020131_2 "esource_list.unnamed_block.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020131, VkglTestCase_020131_1, VkglTestCase_020131_2);

#define VkglTestCase_020132_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020132_2 "esource_list.unnamed_block.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020132, VkglTestCase_020132_1, VkglTestCase_020132_2);

#define VkglTestCase_020133_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020133_2 "rm.resource_list.unnamed_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020133, VkglTestCase_020133_1, VkglTestCase_020133_2);

#define VkglTestCase_020134_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020134_2 "esource_list.unnamed_block.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020134, VkglTestCase_020134_1, VkglTestCase_020134_2);

#define VkglTestCase_020135_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020135_2 "resource_list.unnamed_block.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020135, VkglTestCase_020135_1, VkglTestCase_020135_2);

#define VkglTestCase_020136_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020136_2 "iform.resource_list.unnamed_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020136, VkglTestCase_020136_1, VkglTestCase_020136_2);

#define VkglTestCase_020137_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020137_2 "rm.resource_list.unnamed_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020137, VkglTestCase_020137_1, VkglTestCase_020137_2);

#define VkglTestCase_020138_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020138_2 "esource_list.unnamed_block.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020138, VkglTestCase_020138_1, VkglTestCase_020138_2);

#define VkglTestCase_020139_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020139_2 "resource_list.unnamed_block.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020139, VkglTestCase_020139_1, VkglTestCase_020139_2);

#define VkglTestCase_020140_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020140_2 "rm.resource_list.unnamed_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020140, VkglTestCase_020140_1, VkglTestCase_020140_2);

#define VkglTestCase_020141_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020141_2 "resource_list.unnamed_block.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020141, VkglTestCase_020141_1, VkglTestCase_020141_2);

#define VkglTestCase_020142_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020142_2 "resource_list.unnamed_block.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020142, VkglTestCase_020142_1, VkglTestCase_020142_2);

#define VkglTestCase_023423_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_023423_2 "buffer_variable.resource_list.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023423, VkglTestCase_023423_1, VkglTestCase_023423_2);

#define VkglTestCase_023424_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023424_2 "fer_variable.resource_list.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023424, VkglTestCase_023424_1, VkglTestCase_023424_2);

#define VkglTestCase_023425_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023425_2 "variable.resource_list.unnamed_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023425, VkglTestCase_023425_1, VkglTestCase_023425_2);

#define VkglTestCase_023426_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023426_2 "iable.resource_list.unnamed_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023426, VkglTestCase_023426_1, VkglTestCase_023426_2);

#define VkglTestCase_023427_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023427_2 "e.resource_list.unnamed_block.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023427, VkglTestCase_023427_1, VkglTestCase_023427_2);

#define VkglTestCase_023428_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023428_2 "le.resource_list.unnamed_block.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023428, VkglTestCase_023428_1, VkglTestCase_023428_2);

#define VkglTestCase_023429_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023429_2 "iable.resource_list.unnamed_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023429, VkglTestCase_023429_1, VkglTestCase_023429_2);

#define VkglTestCase_023430_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023430_2 "le.resource_list.unnamed_block.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023430, VkglTestCase_023430_1, VkglTestCase_023430_2);

#define VkglTestCase_023431_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023431_2 "le.resource_list.unnamed_block.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023431, VkglTestCase_023431_1, VkglTestCase_023431_2);

#define VkglTestCase_023432_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023432_2 "_variable.resource_list.unnamed_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023432, VkglTestCase_023432_1, VkglTestCase_023432_2);

#define VkglTestCase_023433_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023433_2 "iable.resource_list.unnamed_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023433, VkglTestCase_023433_1, VkglTestCase_023433_2);

#define VkglTestCase_023434_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023434_2 "le.resource_list.unnamed_block.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023434, VkglTestCase_023434_1, VkglTestCase_023434_2);

#define VkglTestCase_023435_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023435_2 "le.resource_list.unnamed_block.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023435, VkglTestCase_023435_1, VkglTestCase_023435_2);

#define VkglTestCase_023436_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023436_2 "riable.resource_list.unnamed_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023436, VkglTestCase_023436_1, VkglTestCase_023436_2);

#define VkglTestCase_023437_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023437_2 "le.resource_list.unnamed_block.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023437, VkglTestCase_023437_1, VkglTestCase_023437_2);

#define VkglTestCase_023438_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023438_2 "ble.resource_list.unnamed_block.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023438, VkglTestCase_023438_1, VkglTestCase_023438_2);

#define VkglTestCase_023439_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023439_2 "fer_variable.resource_list.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023439, VkglTestCase_023439_1, VkglTestCase_023439_2);

#define VkglTestCase_023440_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023440_2 "_variable.resource_list.unnamed_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023440, VkglTestCase_023440_1, VkglTestCase_023440_2);

#define VkglTestCase_023441_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023441_2 "iable.resource_list.unnamed_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023441, VkglTestCase_023441_1, VkglTestCase_023441_2);

#define VkglTestCase_023442_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023442_2 "le.resource_list.unnamed_block.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023442, VkglTestCase_023442_1, VkglTestCase_023442_2);

#define VkglTestCase_023443_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023443_2 "le.resource_list.unnamed_block.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023443, VkglTestCase_023443_1, VkglTestCase_023443_2);

#define VkglTestCase_023444_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023444_2 "riable.resource_list.unnamed_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023444, VkglTestCase_023444_1, VkglTestCase_023444_2);

#define VkglTestCase_023445_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023445_2 "le.resource_list.unnamed_block.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023445, VkglTestCase_023445_1, VkglTestCase_023445_2);

#define VkglTestCase_023446_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023446_2 "ble.resource_list.unnamed_block.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023446, VkglTestCase_023446_1, VkglTestCase_023446_2);

#define VkglTestCase_023447_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023447_2 "_variable.resource_list.unnamed_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023447, VkglTestCase_023447_1, VkglTestCase_023447_2);

#define VkglTestCase_023448_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023448_2 "riable.resource_list.unnamed_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023448, VkglTestCase_023448_1, VkglTestCase_023448_2);

#define VkglTestCase_023449_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023449_2 "le.resource_list.unnamed_block.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023449, VkglTestCase_023449_1, VkglTestCase_023449_2);

#define VkglTestCase_023450_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023450_2 "ble.resource_list.unnamed_block.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023450, VkglTestCase_023450_1, VkglTestCase_023450_2);

#define VkglTestCase_023451_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023451_2 "riable.resource_list.unnamed_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023451, VkglTestCase_023451_1, VkglTestCase_023451_2);

#define VkglTestCase_023452_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023452_2 "ble.resource_list.unnamed_block.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023452, VkglTestCase_023452_1, VkglTestCase_023452_2);

#define VkglTestCase_023453_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023453_2 "ble.resource_list.unnamed_block.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023453, VkglTestCase_023453_1, VkglTestCase_023453_2);
