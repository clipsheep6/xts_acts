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

#define VkglTestCase_020143_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020143_2 "uery.uniform.resource_list.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020143, VkglTestCase_020143_1, VkglTestCase_020143_2);

#define VkglTestCase_020144_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020144_2 "y.uniform.resource_list.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020144, VkglTestCase_020144_1, VkglTestCase_020144_2);

#define VkglTestCase_020145_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020145_2 "iform.resource_list.block_array.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020145, VkglTestCase_020145_1, VkglTestCase_020145_2);

#define VkglTestCase_020146_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020146_2 "rm.resource_list.block_array.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020146, VkglTestCase_020146_1, VkglTestCase_020146_2);

#define VkglTestCase_020147_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020147_2 "esource_list.block_array.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020147, VkglTestCase_020147_1, VkglTestCase_020147_2);

#define VkglTestCase_020148_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020148_2 "resource_list.block_array.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020148, VkglTestCase_020148_1, VkglTestCase_020148_2);

#define VkglTestCase_020149_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020149_2 "rm.resource_list.block_array.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020149, VkglTestCase_020149_1, VkglTestCase_020149_2);

#define VkglTestCase_020150_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020150_2 "resource_list.block_array.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020150, VkglTestCase_020150_1, VkglTestCase_020150_2);

#define VkglTestCase_020151_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020151_2 "resource_list.block_array.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020151, VkglTestCase_020151_1, VkglTestCase_020151_2);

#define VkglTestCase_020152_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020152_2 "niform.resource_list.block_array.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020152, VkglTestCase_020152_1, VkglTestCase_020152_2);

#define VkglTestCase_020153_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020153_2 "rm.resource_list.block_array.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020153, VkglTestCase_020153_1, VkglTestCase_020153_2);

#define VkglTestCase_020154_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020154_2 "resource_list.block_array.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020154, VkglTestCase_020154_1, VkglTestCase_020154_2);

#define VkglTestCase_020155_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020155_2 "resource_list.block_array.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020155, VkglTestCase_020155_1, VkglTestCase_020155_2);

#define VkglTestCase_020156_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020156_2 "orm.resource_list.block_array.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020156, VkglTestCase_020156_1, VkglTestCase_020156_2);

#define VkglTestCase_020157_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020157_2 "resource_list.block_array.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020157, VkglTestCase_020157_1, VkglTestCase_020157_2);

#define VkglTestCase_020158_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020158_2 ".resource_list.block_array.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020158, VkglTestCase_020158_1, VkglTestCase_020158_2);

#define VkglTestCase_020159_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020159_2 "y.uniform.resource_list.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020159, VkglTestCase_020159_1, VkglTestCase_020159_2);

#define VkglTestCase_020160_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020160_2 "niform.resource_list.block_array.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020160, VkglTestCase_020160_1, VkglTestCase_020160_2);

#define VkglTestCase_020161_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020161_2 "rm.resource_list.block_array.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020161, VkglTestCase_020161_1, VkglTestCase_020161_2);

#define VkglTestCase_020162_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020162_2 "resource_list.block_array.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020162, VkglTestCase_020162_1, VkglTestCase_020162_2);

#define VkglTestCase_020163_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020163_2 "resource_list.block_array.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020163, VkglTestCase_020163_1, VkglTestCase_020163_2);

#define VkglTestCase_020164_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020164_2 "orm.resource_list.block_array.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020164, VkglTestCase_020164_1, VkglTestCase_020164_2);

#define VkglTestCase_020165_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020165_2 "resource_list.block_array.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020165, VkglTestCase_020165_1, VkglTestCase_020165_2);

#define VkglTestCase_020166_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020166_2 ".resource_list.block_array.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020166, VkglTestCase_020166_1, VkglTestCase_020166_2);

#define VkglTestCase_020167_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020167_2 "niform.resource_list.block_array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020167, VkglTestCase_020167_1, VkglTestCase_020167_2);

#define VkglTestCase_020168_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020168_2 "orm.resource_list.block_array.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020168, VkglTestCase_020168_1, VkglTestCase_020168_2);

#define VkglTestCase_020169_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020169_2 "resource_list.block_array.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020169, VkglTestCase_020169_1, VkglTestCase_020169_2);

#define VkglTestCase_020170_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020170_2 ".resource_list.block_array.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020170, VkglTestCase_020170_1, VkglTestCase_020170_2);

#define VkglTestCase_020171_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020171_2 "orm.resource_list.block_array.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020171, VkglTestCase_020171_1, VkglTestCase_020171_2);

#define VkglTestCase_020172_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020172_2 ".resource_list.block_array.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020172, VkglTestCase_020172_1, VkglTestCase_020172_2);

#define VkglTestCase_020173_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020173_2 ".resource_list.block_array.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020173, VkglTestCase_020173_1, VkglTestCase_020173_2);

#define VkglTestCase_023454_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_023454_2 ".buffer_variable.resource_list.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023454, VkglTestCase_023454_1, VkglTestCase_023454_2);

#define VkglTestCase_023455_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023455_2 "ffer_variable.resource_list.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023455, VkglTestCase_023455_1, VkglTestCase_023455_2);

#define VkglTestCase_023456_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023456_2 "_variable.resource_list.block_array.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023456, VkglTestCase_023456_1, VkglTestCase_023456_2);

#define VkglTestCase_023457_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023457_2 "riable.resource_list.block_array.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023457, VkglTestCase_023457_1, VkglTestCase_023457_2);

#define VkglTestCase_023458_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023458_2 "le.resource_list.block_array.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023458, VkglTestCase_023458_1, VkglTestCase_023458_2);

#define VkglTestCase_023459_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023459_2 "ble.resource_list.block_array.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023459, VkglTestCase_023459_1, VkglTestCase_023459_2);

#define VkglTestCase_023460_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023460_2 "riable.resource_list.block_array.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023460, VkglTestCase_023460_1, VkglTestCase_023460_2);

#define VkglTestCase_023461_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023461_2 "ble.resource_list.block_array.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023461, VkglTestCase_023461_1, VkglTestCase_023461_2);

#define VkglTestCase_023462_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023462_2 "ble.resource_list.block_array.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023462, VkglTestCase_023462_1, VkglTestCase_023462_2);

#define VkglTestCase_023463_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023463_2 "r_variable.resource_list.block_array.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023463, VkglTestCase_023463_1, VkglTestCase_023463_2);

#define VkglTestCase_023464_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023464_2 "riable.resource_list.block_array.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023464, VkglTestCase_023464_1, VkglTestCase_023464_2);

#define VkglTestCase_023465_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023465_2 "ble.resource_list.block_array.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023465, VkglTestCase_023465_1, VkglTestCase_023465_2);

#define VkglTestCase_023466_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023466_2 "ble.resource_list.block_array.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023466, VkglTestCase_023466_1, VkglTestCase_023466_2);

#define VkglTestCase_023467_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023467_2 "ariable.resource_list.block_array.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023467, VkglTestCase_023467_1, VkglTestCase_023467_2);

#define VkglTestCase_023468_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023468_2 "ble.resource_list.block_array.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023468, VkglTestCase_023468_1, VkglTestCase_023468_2);

#define VkglTestCase_023469_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023469_2 "able.resource_list.block_array.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023469, VkglTestCase_023469_1, VkglTestCase_023469_2);

#define VkglTestCase_023470_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023470_2 "ffer_variable.resource_list.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023470, VkglTestCase_023470_1, VkglTestCase_023470_2);

#define VkglTestCase_023471_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023471_2 "r_variable.resource_list.block_array.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023471, VkglTestCase_023471_1, VkglTestCase_023471_2);

#define VkglTestCase_023472_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023472_2 "riable.resource_list.block_array.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023472, VkglTestCase_023472_1, VkglTestCase_023472_2);

#define VkglTestCase_023473_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023473_2 "ble.resource_list.block_array.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023473, VkglTestCase_023473_1, VkglTestCase_023473_2);

#define VkglTestCase_023474_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023474_2 "ble.resource_list.block_array.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023474, VkglTestCase_023474_1, VkglTestCase_023474_2);

#define VkglTestCase_023475_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023475_2 "ariable.resource_list.block_array.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023475, VkglTestCase_023475_1, VkglTestCase_023475_2);

#define VkglTestCase_023476_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023476_2 "ble.resource_list.block_array.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023476, VkglTestCase_023476_1, VkglTestCase_023476_2);

#define VkglTestCase_023477_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023477_2 "able.resource_list.block_array.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023477, VkglTestCase_023477_1, VkglTestCase_023477_2);

#define VkglTestCase_023478_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023478_2 "r_variable.resource_list.block_array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023478, VkglTestCase_023478_1, VkglTestCase_023478_2);

#define VkglTestCase_023479_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023479_2 "ariable.resource_list.block_array.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023479, VkglTestCase_023479_1, VkglTestCase_023479_2);

#define VkglTestCase_023480_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023480_2 "ble.resource_list.block_array.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023480, VkglTestCase_023480_1, VkglTestCase_023480_2);

#define VkglTestCase_023481_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023481_2 "able.resource_list.block_array.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023481, VkglTestCase_023481_1, VkglTestCase_023481_2);

#define VkglTestCase_023482_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023482_2 "ariable.resource_list.block_array.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023482, VkglTestCase_023482_1, VkglTestCase_023482_2);

#define VkglTestCase_023483_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023483_2 "able.resource_list.block_array.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023483, VkglTestCase_023483_1, VkglTestCase_023483_2);

#define VkglTestCase_023484_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023484_2 "able.resource_list.block_array.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023484, VkglTestCase_023484_1, VkglTestCase_023484_2);
