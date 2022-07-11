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

#define VkglTestCase_020230_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020230_2 ".uniform.array_size.named_block.aggregates.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020230, VkglTestCase_020230_1, VkglTestCase_020230_2);

#define VkglTestCase_020231_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020231_2 "iform.array_size.named_block.aggregates.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020231, VkglTestCase_020231_1, VkglTestCase_020231_2);

#define VkglTestCase_020232_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020232_2 "m.array_size.named_block.aggregates.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020232, VkglTestCase_020232_1, VkglTestCase_020232_2);

#define VkglTestCase_020233_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020233_2 "rray_size.named_block.aggregates.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020233, VkglTestCase_020233_1, VkglTestCase_020233_2);

#define VkglTestCase_020234_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020234_2 "rray_size.named_block.aggregates.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020234, VkglTestCase_020234_1, VkglTestCase_020234_2);

#define VkglTestCase_020235_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020235_2 "rm.array_size.named_block.aggregates.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020235, VkglTestCase_020235_1, VkglTestCase_020235_2);

#define VkglTestCase_020236_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020236_2 "rray_size.named_block.aggregates.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020236, VkglTestCase_020236_1, VkglTestCase_020236_2);

#define VkglTestCase_020237_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020237_2 "array_size.named_block.aggregates.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020237, VkglTestCase_020237_1, VkglTestCase_020237_2);

#define VkglTestCase_020238_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020238_2 "iform.array_size.named_block.aggregates.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020238, VkglTestCase_020238_1, VkglTestCase_020238_2);

#define VkglTestCase_020239_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020239_2 "rm.array_size.named_block.aggregates.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020239, VkglTestCase_020239_1, VkglTestCase_020239_2);

#define VkglTestCase_020240_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020240_2 "rray_size.named_block.aggregates.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020240, VkglTestCase_020240_1, VkglTestCase_020240_2);

#define VkglTestCase_020241_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020241_2 "array_size.named_block.aggregates.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020241, VkglTestCase_020241_1, VkglTestCase_020241_2);

#define VkglTestCase_020242_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020242_2 "rm.array_size.named_block.aggregates.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020242, VkglTestCase_020242_1, VkglTestCase_020242_2);

#define VkglTestCase_020243_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020243_2 "array_size.named_block.aggregates.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020243, VkglTestCase_020243_1, VkglTestCase_020243_2);

#define VkglTestCase_020244_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020244_2 "array_size.named_block.aggregates.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020244, VkglTestCase_020244_1, VkglTestCase_020244_2);

#define VkglTestCase_020329_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020329_2 "orm.array_stride.named_block.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020329, VkglTestCase_020329_1, VkglTestCase_020329_2);

#define VkglTestCase_020330_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020330_2 "array_stride.named_block.aggregates.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020330, VkglTestCase_020330_1, VkglTestCase_020330_2);

#define VkglTestCase_020331_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020331_2 ".array_stride.named_block.aggregates.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020331, VkglTestCase_020331_1, VkglTestCase_020331_2);

#define VkglTestCase_020332_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020332_2 "orm.array_stride.named_block.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020332, VkglTestCase_020332_1, VkglTestCase_020332_2);

#define VkglTestCase_020333_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020333_2 ".array_stride.named_block.aggregates.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020333, VkglTestCase_020333_1, VkglTestCase_020333_2);

#define VkglTestCase_020334_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020334_2 ".array_stride.named_block.aggregates.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020334, VkglTestCase_020334_1, VkglTestCase_020334_2);

#define VkglTestCase_020335_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020335_2 "orm.array_stride.named_block.aggregates.bool_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020335, VkglTestCase_020335_1, VkglTestCase_020335_2);

#define VkglTestCase_020336_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020336_2 "form.array_stride.named_block.aggregates.bool_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020336, VkglTestCase_020336_1, VkglTestCase_020336_2);

#define VkglTestCase_020337_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020337_2 "orm.array_stride.named_block.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020337, VkglTestCase_020337_1, VkglTestCase_020337_2);

#define VkglTestCase_020338_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020338_2 "array_stride.named_block.aggregates.bvec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020338, VkglTestCase_020338_1, VkglTestCase_020338_2);

#define VkglTestCase_020339_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020339_2 ".array_stride.named_block.aggregates.bvec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020339, VkglTestCase_020339_1, VkglTestCase_020339_2);

#define VkglTestCase_020340_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020340_2 "orm.array_stride.named_block.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020340, VkglTestCase_020340_1, VkglTestCase_020340_2);

#define VkglTestCase_020341_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020341_2 ".array_stride.named_block.aggregates.bvec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020341, VkglTestCase_020341_1, VkglTestCase_020341_2);

#define VkglTestCase_020342_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020342_2 ".array_stride.named_block.aggregates.bvec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020342, VkglTestCase_020342_1, VkglTestCase_020342_2);

#define VkglTestCase_020343_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020343_2 "orm.array_stride.named_block.aggregates.vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020343, VkglTestCase_020343_1, VkglTestCase_020343_2);

#define VkglTestCase_020344_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020344_2 ".array_stride.named_block.aggregates.vec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020344, VkglTestCase_020344_1, VkglTestCase_020344_2);

#define VkglTestCase_020345_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020345_2 ".array_stride.named_block.aggregates.vec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020345, VkglTestCase_020345_1, VkglTestCase_020345_2);

#define VkglTestCase_020346_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020346_2 "form.array_stride.named_block.aggregates.vec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020346, VkglTestCase_020346_1, VkglTestCase_020346_2);

#define VkglTestCase_020347_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020347_2 ".array_stride.named_block.aggregates.vec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020347, VkglTestCase_020347_1, VkglTestCase_020347_2);

#define VkglTestCase_020348_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020348_2 "m.array_stride.named_block.aggregates.vec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020348, VkglTestCase_020348_1, VkglTestCase_020348_2);

#define VkglTestCase_020349_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020349_2 "orm.array_stride.named_block.aggregates.ivec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020349, VkglTestCase_020349_1, VkglTestCase_020349_2);

#define VkglTestCase_020350_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020350_2 "array_stride.named_block.aggregates.ivec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020350, VkglTestCase_020350_1, VkglTestCase_020350_2);

#define VkglTestCase_020351_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020351_2 ".array_stride.named_block.aggregates.ivec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020351, VkglTestCase_020351_1, VkglTestCase_020351_2);

#define VkglTestCase_020352_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020352_2 "orm.array_stride.named_block.aggregates.ivec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020352, VkglTestCase_020352_1, VkglTestCase_020352_2);

#define VkglTestCase_020353_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020353_2 ".array_stride.named_block.aggregates.ivec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020353, VkglTestCase_020353_1, VkglTestCase_020353_2);

#define VkglTestCase_020354_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020354_2 ".array_stride.named_block.aggregates.ivec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020354, VkglTestCase_020354_1, VkglTestCase_020354_2);

#define VkglTestCase_020924_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020924_2 "niform.offset.named_block.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020924, VkglTestCase_020924_1, VkglTestCase_020924_2);

#define VkglTestCase_020925_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020925_2 "niform.offset.named_block.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020925, VkglTestCase_020925_1, VkglTestCase_020925_2);
