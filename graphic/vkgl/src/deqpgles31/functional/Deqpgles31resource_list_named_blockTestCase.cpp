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

#define VkglTestCase_020081_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020081_2 "uery.uniform.resource_list.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020081, VkglTestCase_020081_1, VkglTestCase_020081_2);

#define VkglTestCase_020082_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020082_2 "y.uniform.resource_list.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020082, VkglTestCase_020082_1, VkglTestCase_020082_2);

#define VkglTestCase_020083_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020083_2 "iform.resource_list.named_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020083, VkglTestCase_020083_1, VkglTestCase_020083_2);

#define VkglTestCase_020084_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020084_2 "rm.resource_list.named_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020084, VkglTestCase_020084_1, VkglTestCase_020084_2);

#define VkglTestCase_020085_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_020085_2 "esource_list.named_block.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020085, VkglTestCase_020085_1, VkglTestCase_020085_2);

#define VkglTestCase_020086_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020086_2 "resource_list.named_block.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020086, VkglTestCase_020086_1, VkglTestCase_020086_2);

#define VkglTestCase_020087_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020087_2 "rm.resource_list.named_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020087, VkglTestCase_020087_1, VkglTestCase_020087_2);

#define VkglTestCase_020088_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020088_2 "resource_list.named_block.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020088, VkglTestCase_020088_1, VkglTestCase_020088_2);

#define VkglTestCase_020089_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020089_2 "resource_list.named_block.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020089, VkglTestCase_020089_1, VkglTestCase_020089_2);

#define VkglTestCase_020090_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020090_2 "niform.resource_list.named_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020090, VkglTestCase_020090_1, VkglTestCase_020090_2);

#define VkglTestCase_020091_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020091_2 "rm.resource_list.named_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020091, VkglTestCase_020091_1, VkglTestCase_020091_2);

#define VkglTestCase_020092_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020092_2 "resource_list.named_block.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020092, VkglTestCase_020092_1, VkglTestCase_020092_2);

#define VkglTestCase_020093_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020093_2 "resource_list.named_block.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020093, VkglTestCase_020093_1, VkglTestCase_020093_2);

#define VkglTestCase_020094_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020094_2 "orm.resource_list.named_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020094, VkglTestCase_020094_1, VkglTestCase_020094_2);

#define VkglTestCase_020095_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020095_2 "resource_list.named_block.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020095, VkglTestCase_020095_1, VkglTestCase_020095_2);

#define VkglTestCase_020096_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020096_2 ".resource_list.named_block.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020096, VkglTestCase_020096_1, VkglTestCase_020096_2);

#define VkglTestCase_020097_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020097_2 "y.uniform.resource_list.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020097, VkglTestCase_020097_1, VkglTestCase_020097_2);

#define VkglTestCase_020098_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020098_2 "niform.resource_list.named_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020098, VkglTestCase_020098_1, VkglTestCase_020098_2);

#define VkglTestCase_020099_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020099_2 "rm.resource_list.named_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020099, VkglTestCase_020099_1, VkglTestCase_020099_2);

#define VkglTestCase_020100_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020100_2 "resource_list.named_block.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020100, VkglTestCase_020100_1, VkglTestCase_020100_2);

#define VkglTestCase_020101_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020101_2 "resource_list.named_block.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020101, VkglTestCase_020101_1, VkglTestCase_020101_2);

#define VkglTestCase_020102_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020102_2 "orm.resource_list.named_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020102, VkglTestCase_020102_1, VkglTestCase_020102_2);

#define VkglTestCase_020103_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020103_2 "resource_list.named_block.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020103, VkglTestCase_020103_1, VkglTestCase_020103_2);

#define VkglTestCase_020104_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020104_2 ".resource_list.named_block.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020104, VkglTestCase_020104_1, VkglTestCase_020104_2);

#define VkglTestCase_020105_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020105_2 "niform.resource_list.named_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020105, VkglTestCase_020105_1, VkglTestCase_020105_2);

#define VkglTestCase_020106_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020106_2 "orm.resource_list.named_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020106, VkglTestCase_020106_1, VkglTestCase_020106_2);

#define VkglTestCase_020107_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020107_2 "resource_list.named_block.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020107, VkglTestCase_020107_1, VkglTestCase_020107_2);

#define VkglTestCase_020108_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020108_2 ".resource_list.named_block.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020108, VkglTestCase_020108_1, VkglTestCase_020108_2);

#define VkglTestCase_020109_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020109_2 "orm.resource_list.named_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020109, VkglTestCase_020109_1, VkglTestCase_020109_2);

#define VkglTestCase_020110_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020110_2 ".resource_list.named_block.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020110, VkglTestCase_020110_1, VkglTestCase_020110_2);

#define VkglTestCase_020111_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020111_2 ".resource_list.named_block.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020111, VkglTestCase_020111_1, VkglTestCase_020111_2);

#define VkglTestCase_023392_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_023392_2 ".buffer_variable.resource_list.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023392, VkglTestCase_023392_1, VkglTestCase_023392_2);

#define VkglTestCase_023393_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023393_2 "ffer_variable.resource_list.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023393, VkglTestCase_023393_1, VkglTestCase_023393_2);

#define VkglTestCase_023394_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023394_2 "_variable.resource_list.named_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023394, VkglTestCase_023394_1, VkglTestCase_023394_2);

#define VkglTestCase_023395_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023395_2 "riable.resource_list.named_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023395, VkglTestCase_023395_1, VkglTestCase_023395_2);

#define VkglTestCase_023396_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023396_2 "le.resource_list.named_block.var_struct_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023396, VkglTestCase_023396_1, VkglTestCase_023396_2);

#define VkglTestCase_023397_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023397_2 "ble.resource_list.named_block.var_array_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023397, VkglTestCase_023397_1, VkglTestCase_023397_2);

#define VkglTestCase_023398_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023398_2 "riable.resource_list.named_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023398, VkglTestCase_023398_1, VkglTestCase_023398_2);

#define VkglTestCase_023399_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023399_2 "ble.resource_list.named_block.var_struct_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023399, VkglTestCase_023399_1, VkglTestCase_023399_2);

#define VkglTestCase_023400_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023400_2 "ble.resource_list.named_block.var_array_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023400, VkglTestCase_023400_1, VkglTestCase_023400_2);

#define VkglTestCase_023401_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023401_2 "r_variable.resource_list.named_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023401, VkglTestCase_023401_1, VkglTestCase_023401_2);

#define VkglTestCase_023402_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023402_2 "riable.resource_list.named_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023402, VkglTestCase_023402_1, VkglTestCase_023402_2);

#define VkglTestCase_023403_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023403_2 "ble.resource_list.named_block.var_struct_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023403, VkglTestCase_023403_1, VkglTestCase_023403_2);

#define VkglTestCase_023404_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023404_2 "ble.resource_list.named_block.var_array_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023404, VkglTestCase_023404_1, VkglTestCase_023404_2);

#define VkglTestCase_023405_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023405_2 "ariable.resource_list.named_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023405, VkglTestCase_023405_1, VkglTestCase_023405_2);

#define VkglTestCase_023406_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023406_2 "ble.resource_list.named_block.var_struct_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023406, VkglTestCase_023406_1, VkglTestCase_023406_2);

#define VkglTestCase_023407_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023407_2 "able.resource_list.named_block.var_array_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023407, VkglTestCase_023407_1, VkglTestCase_023407_2);

#define VkglTestCase_023408_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023408_2 "ffer_variable.resource_list.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023408, VkglTestCase_023408_1, VkglTestCase_023408_2);

#define VkglTestCase_023409_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023409_2 "r_variable.resource_list.named_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023409, VkglTestCase_023409_1, VkglTestCase_023409_2);

#define VkglTestCase_023410_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023410_2 "riable.resource_list.named_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023410, VkglTestCase_023410_1, VkglTestCase_023410_2);

#define VkglTestCase_023411_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023411_2 "ble.resource_list.named_block.var_struct_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023411, VkglTestCase_023411_1, VkglTestCase_023411_2);

#define VkglTestCase_023412_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023412_2 "ble.resource_list.named_block.var_array_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023412, VkglTestCase_023412_1, VkglTestCase_023412_2);

#define VkglTestCase_023413_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023413_2 "ariable.resource_list.named_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023413, VkglTestCase_023413_1, VkglTestCase_023413_2);

#define VkglTestCase_023414_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023414_2 "ble.resource_list.named_block.var_struct_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023414, VkglTestCase_023414_1, VkglTestCase_023414_2);

#define VkglTestCase_023415_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023415_2 "able.resource_list.named_block.var_array_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023415, VkglTestCase_023415_1, VkglTestCase_023415_2);

#define VkglTestCase_023416_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023416_2 "r_variable.resource_list.named_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023416, VkglTestCase_023416_1, VkglTestCase_023416_2);

#define VkglTestCase_023417_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023417_2 "ariable.resource_list.named_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023417, VkglTestCase_023417_1, VkglTestCase_023417_2);

#define VkglTestCase_023418_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023418_2 "ble.resource_list.named_block.var_struct_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023418, VkglTestCase_023418_1, VkglTestCase_023418_2);

#define VkglTestCase_023419_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023419_2 "able.resource_list.named_block.var_array_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023419, VkglTestCase_023419_1, VkglTestCase_023419_2);

#define VkglTestCase_023420_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023420_2 "ariable.resource_list.named_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023420, VkglTestCase_023420_1, VkglTestCase_023420_2);

#define VkglTestCase_023421_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023421_2 "able.resource_list.named_block.var_struct_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023421, VkglTestCase_023421_1, VkglTestCase_023421_2);

#define VkglTestCase_023422_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023422_2 "able.resource_list.named_block.var_array_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023422, VkglTestCase_023422_1, VkglTestCase_023422_2);
