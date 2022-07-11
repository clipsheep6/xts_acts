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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011492_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011492_2 "erator.bitwise_xor_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011492, VkglTestCase_011492_1, VkglTestCase_011492_2);

#define VkglTestCase_011493_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011493_2 "rator.bitwise_xor_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011493, VkglTestCase_011493_1, VkglTestCase_011493_2);

#define VkglTestCase_011494_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011494_2 "rator.bitwise_xor_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011494, VkglTestCase_011494_1, VkglTestCase_011494_2);

#define VkglTestCase_011495_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011495_2 "ator.bitwise_xor_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011495, VkglTestCase_011495_1, VkglTestCase_011495_2);

#define VkglTestCase_011496_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011496_2 "rator.bitwise_xor_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011496, VkglTestCase_011496_1, VkglTestCase_011496_2);

#define VkglTestCase_011497_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011497_2 "ator.bitwise_xor_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011497, VkglTestCase_011497_1, VkglTestCase_011497_2);

#define VkglTestCase_011498_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011498_2 "ator.bitwise_xor_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011498, VkglTestCase_011498_1, VkglTestCase_011498_2);

#define VkglTestCase_011499_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011499_2 "tor.bitwise_xor_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011499, VkglTestCase_011499_1, VkglTestCase_011499_2);

#define VkglTestCase_011500_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011500_2 "rator.bitwise_xor_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011500, VkglTestCase_011500_1, VkglTestCase_011500_2);

#define VkglTestCase_011501_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011501_2 "ator.bitwise_xor_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011501, VkglTestCase_011501_1, VkglTestCase_011501_2);

#define VkglTestCase_011502_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011502_2 "ator.bitwise_xor_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011502, VkglTestCase_011502_1, VkglTestCase_011502_2);

#define VkglTestCase_011503_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011503_2 "tor.bitwise_xor_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011503, VkglTestCase_011503_1, VkglTestCase_011503_2);

#define VkglTestCase_011504_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011504_2 "rator.bitwise_xor_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011504, VkglTestCase_011504_1, VkglTestCase_011504_2);

#define VkglTestCase_011505_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011505_2 "ator.bitwise_xor_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011505, VkglTestCase_011505_1, VkglTestCase_011505_2);

#define VkglTestCase_011506_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011506_2 "ator.bitwise_xor_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011506, VkglTestCase_011506_1, VkglTestCase_011506_2);

#define VkglTestCase_011507_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011507_2 "tor.bitwise_xor_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011507, VkglTestCase_011507_1, VkglTestCase_011507_2);

#define VkglTestCase_011508_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011508_2 "erator.bitwise_xor_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011508, VkglTestCase_011508_1, VkglTestCase_011508_2);

#define VkglTestCase_011509_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011509_2 "rator.bitwise_xor_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011509, VkglTestCase_011509_1, VkglTestCase_011509_2);

#define VkglTestCase_011510_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011510_2 "rator.bitwise_xor_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011510, VkglTestCase_011510_1, VkglTestCase_011510_2);

#define VkglTestCase_011511_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011511_2 "ator.bitwise_xor_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011511, VkglTestCase_011511_1, VkglTestCase_011511_2);

#define VkglTestCase_011512_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011512_2 "rator.bitwise_xor_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011512, VkglTestCase_011512_1, VkglTestCase_011512_2);

#define VkglTestCase_011513_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011513_2 "ator.bitwise_xor_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011513, VkglTestCase_011513_1, VkglTestCase_011513_2);

#define VkglTestCase_011514_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011514_2 "rator.bitwise_xor_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011514, VkglTestCase_011514_1, VkglTestCase_011514_2);

#define VkglTestCase_011515_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011515_2 "ator.bitwise_xor_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011515, VkglTestCase_011515_1, VkglTestCase_011515_2);

#define VkglTestCase_011516_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011516_2 "erator.bitwise_xor_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011516, VkglTestCase_011516_1, VkglTestCase_011516_2);

#define VkglTestCase_011517_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011517_2 "rator.bitwise_xor_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011517, VkglTestCase_011517_1, VkglTestCase_011517_2);

#define VkglTestCase_011518_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011518_2 "ator.bitwise_xor_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011518, VkglTestCase_011518_1, VkglTestCase_011518_2);

#define VkglTestCase_011519_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011519_2 "tor.bitwise_xor_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011519, VkglTestCase_011519_1, VkglTestCase_011519_2);

#define VkglTestCase_011520_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011520_2 "rator.bitwise_xor_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011520, VkglTestCase_011520_1, VkglTestCase_011520_2);

#define VkglTestCase_011521_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011521_2 "ator.bitwise_xor_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011521, VkglTestCase_011521_1, VkglTestCase_011521_2);

#define VkglTestCase_011522_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011522_2 "ator.bitwise_xor_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011522, VkglTestCase_011522_1, VkglTestCase_011522_2);

#define VkglTestCase_011523_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011523_2 "tor.bitwise_xor_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011523, VkglTestCase_011523_1, VkglTestCase_011523_2);

#define VkglTestCase_011524_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011524_2 "rator.bitwise_xor_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011524, VkglTestCase_011524_1, VkglTestCase_011524_2);

#define VkglTestCase_011525_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011525_2 "ator.bitwise_xor_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011525, VkglTestCase_011525_1, VkglTestCase_011525_2);

#define VkglTestCase_011526_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011526_2 "ator.bitwise_xor_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011526, VkglTestCase_011526_1, VkglTestCase_011526_2);

#define VkglTestCase_011527_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011527_2 "tor.bitwise_xor_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011527, VkglTestCase_011527_1, VkglTestCase_011527_2);

#define VkglTestCase_011528_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011528_2 "rator.bitwise_xor_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011528, VkglTestCase_011528_1, VkglTestCase_011528_2);

#define VkglTestCase_011529_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011529_2 "ator.bitwise_xor_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011529, VkglTestCase_011529_1, VkglTestCase_011529_2);

#define VkglTestCase_011530_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011530_2 "ator.bitwise_xor_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011530, VkglTestCase_011530_1, VkglTestCase_011530_2);

#define VkglTestCase_011531_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011531_2 "tor.bitwise_xor_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011531, VkglTestCase_011531_1, VkglTestCase_011531_2);

#define VkglTestCase_011532_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011532_2 "rator.bitwise_xor_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011532, VkglTestCase_011532_1, VkglTestCase_011532_2);

#define VkglTestCase_011533_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011533_2 "ator.bitwise_xor_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011533, VkglTestCase_011533_1, VkglTestCase_011533_2);

#define VkglTestCase_011534_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011534_2 "rator.bitwise_xor_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011534, VkglTestCase_011534_1, VkglTestCase_011534_2);

#define VkglTestCase_011535_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011535_2 "ator.bitwise_xor_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011535, VkglTestCase_011535_1, VkglTestCase_011535_2);

#define VkglTestCase_011536_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011536_2 "rator.bitwise_xor_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011536, VkglTestCase_011536_1, VkglTestCase_011536_2);

#define VkglTestCase_011537_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011537_2 "ator.bitwise_xor_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011537, VkglTestCase_011537_1, VkglTestCase_011537_2);

#define VkglTestCase_011538_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011538_2 "rator.bitwise_xor_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011538, VkglTestCase_011538_1, VkglTestCase_011538_2);

#define VkglTestCase_011539_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011539_2 "ator.bitwise_xor_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011539, VkglTestCase_011539_1, VkglTestCase_011539_2);

#define VkglTestCase_011540_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011540_2 "tor.bitwise_xor_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011540, VkglTestCase_011540_1, VkglTestCase_011540_2);

#define VkglTestCase_011541_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011541_2 "or.bitwise_xor_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011541, VkglTestCase_011541_1, VkglTestCase_011541_2);

#define VkglTestCase_011542_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011542_2 "or.bitwise_xor_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011542, VkglTestCase_011542_1, VkglTestCase_011542_2);

#define VkglTestCase_011543_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011543_2 "r.bitwise_xor_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011543, VkglTestCase_011543_1, VkglTestCase_011543_2);

#define VkglTestCase_011544_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011544_2 "tor.bitwise_xor_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011544, VkglTestCase_011544_1, VkglTestCase_011544_2);

#define VkglTestCase_011545_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011545_2 "or.bitwise_xor_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011545, VkglTestCase_011545_1, VkglTestCase_011545_2);

#define VkglTestCase_011546_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011546_2 "or.bitwise_xor_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011546, VkglTestCase_011546_1, VkglTestCase_011546_2);

#define VkglTestCase_011547_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011547_2 "r.bitwise_xor_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011547, VkglTestCase_011547_1, VkglTestCase_011547_2);

#define VkglTestCase_011548_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011548_2 "tor.bitwise_xor_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011548, VkglTestCase_011548_1, VkglTestCase_011548_2);

#define VkglTestCase_011549_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011549_2 "or.bitwise_xor_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011549, VkglTestCase_011549_1, VkglTestCase_011549_2);

#define VkglTestCase_011550_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011550_2 "or.bitwise_xor_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011550, VkglTestCase_011550_1, VkglTestCase_011550_2);

#define VkglTestCase_011551_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011551_2 "r.bitwise_xor_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011551, VkglTestCase_011551_1, VkglTestCase_011551_2);

#define VkglTestCase_011552_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011552_2 "tor.bitwise_xor_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011552, VkglTestCase_011552_1, VkglTestCase_011552_2);

#define VkglTestCase_011553_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011553_2 "or.bitwise_xor_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011553, VkglTestCase_011553_1, VkglTestCase_011553_2);

#define VkglTestCase_011554_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011554_2 "tor.bitwise_xor_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011554, VkglTestCase_011554_1, VkglTestCase_011554_2);

#define VkglTestCase_011555_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011555_2 "or.bitwise_xor_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011555, VkglTestCase_011555_1, VkglTestCase_011555_2);

#define VkglTestCase_011556_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011556_2 "tor.bitwise_xor_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011556, VkglTestCase_011556_1, VkglTestCase_011556_2);

#define VkglTestCase_011557_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011557_2 "or.bitwise_xor_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011557, VkglTestCase_011557_1, VkglTestCase_011557_2);

#define VkglTestCase_011558_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011558_2 "tor.bitwise_xor_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011558, VkglTestCase_011558_1, VkglTestCase_011558_2);

#define VkglTestCase_011559_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011559_2 "or.bitwise_xor_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011559, VkglTestCase_011559_1, VkglTestCase_011559_2);

#define VkglTestCase_011560_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011560_2 "r.bitwise_xor_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011560, VkglTestCase_011560_1, VkglTestCase_011560_2);

#define VkglTestCase_011561_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011561_2 ".bitwise_xor_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011561, VkglTestCase_011561_1, VkglTestCase_011561_2);

#define VkglTestCase_011562_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011562_2 "tor.bitwise_xor_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011562, VkglTestCase_011562_1, VkglTestCase_011562_2);

#define VkglTestCase_011563_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011563_2 "or.bitwise_xor_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011563, VkglTestCase_011563_1, VkglTestCase_011563_2);

#define VkglTestCase_011564_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011564_2 "r.bitwise_xor_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011564, VkglTestCase_011564_1, VkglTestCase_011564_2);

#define VkglTestCase_011565_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011565_2 ".bitwise_xor_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011565, VkglTestCase_011565_1, VkglTestCase_011565_2);

#define VkglTestCase_011566_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011566_2 "tor.bitwise_xor_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011566, VkglTestCase_011566_1, VkglTestCase_011566_2);

#define VkglTestCase_011567_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011567_2 "or.bitwise_xor_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011567, VkglTestCase_011567_1, VkglTestCase_011567_2);

#define VkglTestCase_011568_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011568_2 "r.bitwise_xor_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011568, VkglTestCase_011568_1, VkglTestCase_011568_2);

#define VkglTestCase_011569_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_011569_2 ".bitwise_xor_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011569, VkglTestCase_011569_1, VkglTestCase_011569_2);

#define VkglTestCase_011570_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011570_2 "or.bitwise_xor_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011570, VkglTestCase_011570_1, VkglTestCase_011570_2);

#define VkglTestCase_011571_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011571_2 "r.bitwise_xor_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011571, VkglTestCase_011571_1, VkglTestCase_011571_2);

#define VkglTestCase_011572_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011572_2 "or.bitwise_xor_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011572, VkglTestCase_011572_1, VkglTestCase_011572_2);

#define VkglTestCase_011573_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011573_2 "r.bitwise_xor_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011573, VkglTestCase_011573_1, VkglTestCase_011573_2);

#define VkglTestCase_011574_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011574_2 "or.bitwise_xor_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011574, VkglTestCase_011574_1, VkglTestCase_011574_2);

#define VkglTestCase_011575_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011575_2 "r.bitwise_xor_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011575, VkglTestCase_011575_1, VkglTestCase_011575_2);
