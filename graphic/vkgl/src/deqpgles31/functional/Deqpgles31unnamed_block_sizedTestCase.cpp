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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023546_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023546_2 "ffer_variable.array_size.unnamed_block.sized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023546, VkglTestCase_023546_1, VkglTestCase_023546_2);

#define VkglTestCase_023547_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023547_2 "_variable.array_size.unnamed_block.sized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023547, VkglTestCase_023547_1, VkglTestCase_023547_2);

#define VkglTestCase_023548_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023548_2 "r_variable.array_size.unnamed_block.sized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023548, VkglTestCase_023548_1, VkglTestCase_023548_2);

#define VkglTestCase_023549_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023549_2 "ffer_variable.array_size.unnamed_block.sized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023549, VkglTestCase_023549_1, VkglTestCase_023549_2);

#define VkglTestCase_023550_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023550_2 "ffer_variable.array_size.unnamed_block.sized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023550, VkglTestCase_023550_1, VkglTestCase_023550_2);

#define VkglTestCase_023551_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023551_2 "_variable.array_size.unnamed_block.sized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023551, VkglTestCase_023551_1, VkglTestCase_023551_2);

#define VkglTestCase_023552_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023552_2 "r_variable.array_size.unnamed_block.sized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023552, VkglTestCase_023552_1, VkglTestCase_023552_2);

#define VkglTestCase_023553_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023553_2 "ffer_variable.array_size.unnamed_block.sized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023553, VkglTestCase_023553_1, VkglTestCase_023553_2);

#define VkglTestCase_023554_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023554_2 "r_variable.array_size.unnamed_block.sized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023554, VkglTestCase_023554_1, VkglTestCase_023554_2);

#define VkglTestCase_023555_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023555_2 "r_variable.array_size.unnamed_block.sized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023555, VkglTestCase_023555_1, VkglTestCase_023555_2);

#define VkglTestCase_023556_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023556_2 "ffer_variable.array_size.unnamed_block.sized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023556, VkglTestCase_023556_1, VkglTestCase_023556_2);

#define VkglTestCase_023557_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023557_2 "_variable.array_size.unnamed_block.sized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023557, VkglTestCase_023557_1, VkglTestCase_023557_2);

#define VkglTestCase_023558_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023558_2 "r_variable.array_size.unnamed_block.sized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023558, VkglTestCase_023558_1, VkglTestCase_023558_2);

#define VkglTestCase_023659_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023659_2 "fer_variable.array_stride.unnamed_block.sized.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023659, VkglTestCase_023659_1, VkglTestCase_023659_2);

#define VkglTestCase_023660_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023660_2 "variable.array_stride.unnamed_block.sized.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023660, VkglTestCase_023660_1, VkglTestCase_023660_2);

#define VkglTestCase_023661_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023661_2 "_variable.array_stride.unnamed_block.sized.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023661, VkglTestCase_023661_1, VkglTestCase_023661_2);

#define VkglTestCase_023662_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023662_2 "fer_variable.array_stride.unnamed_block.sized.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023662, VkglTestCase_023662_1, VkglTestCase_023662_2);

#define VkglTestCase_023663_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023663_2 "fer_variable.array_stride.unnamed_block.sized.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023663, VkglTestCase_023663_1, VkglTestCase_023663_2);

#define VkglTestCase_023664_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023664_2 "variable.array_stride.unnamed_block.sized.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023664, VkglTestCase_023664_1, VkglTestCase_023664_2);

#define VkglTestCase_023665_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023665_2 "_variable.array_stride.unnamed_block.sized.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023665, VkglTestCase_023665_1, VkglTestCase_023665_2);

#define VkglTestCase_023666_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023666_2 "fer_variable.array_stride.unnamed_block.sized.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023666, VkglTestCase_023666_1, VkglTestCase_023666_2);

#define VkglTestCase_023667_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023667_2 "_variable.array_stride.unnamed_block.sized.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023667, VkglTestCase_023667_1, VkglTestCase_023667_2);

#define VkglTestCase_023668_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023668_2 "_variable.array_stride.unnamed_block.sized.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023668, VkglTestCase_023668_1, VkglTestCase_023668_2);

#define VkglTestCase_023669_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023669_2 "fer_variable.array_stride.unnamed_block.sized.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023669, VkglTestCase_023669_1, VkglTestCase_023669_2);

#define VkglTestCase_023670_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023670_2 "variable.array_stride.unnamed_block.sized.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023670, VkglTestCase_023670_1, VkglTestCase_023670_2);

#define VkglTestCase_023671_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023671_2 "_variable.array_stride.unnamed_block.sized.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023671, VkglTestCase_023671_1, VkglTestCase_023671_2);

#define VkglTestCase_024046_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024046_2 "ffer_variable.name_length.unnamed_block.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024046, VkglTestCase_024046_1, VkglTestCase_024046_2);

#define VkglTestCase_024047_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024047_2 "r_variable.name_length.unnamed_block.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024047, VkglTestCase_024047_1, VkglTestCase_024047_2);

#define VkglTestCase_024048_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024048_2 "riable.name_length.unnamed_block.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024048, VkglTestCase_024048_1, VkglTestCase_024048_2);

#define VkglTestCase_024049_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024049_2 "ble.name_length.unnamed_block.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024049, VkglTestCase_024049_1, VkglTestCase_024049_2);

#define VkglTestCase_024050_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024050_2 "ble.name_length.unnamed_block.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024050, VkglTestCase_024050_1, VkglTestCase_024050_2);

#define VkglTestCase_024051_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024051_2 "ariable.name_length.unnamed_block.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024051, VkglTestCase_024051_1, VkglTestCase_024051_2);

#define VkglTestCase_024052_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024052_2 "ble.name_length.unnamed_block.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024052, VkglTestCase_024052_1, VkglTestCase_024052_2);

#define VkglTestCase_024053_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024053_2 "able.name_length.unnamed_block.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024053, VkglTestCase_024053_1, VkglTestCase_024053_2);

#define VkglTestCase_024054_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024054_2 "r_variable.name_length.unnamed_block.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024054, VkglTestCase_024054_1, VkglTestCase_024054_2);

#define VkglTestCase_024055_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024055_2 "ariable.name_length.unnamed_block.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024055, VkglTestCase_024055_1, VkglTestCase_024055_2);

#define VkglTestCase_024056_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024056_2 "ble.name_length.unnamed_block.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024056, VkglTestCase_024056_1, VkglTestCase_024056_2);

#define VkglTestCase_024057_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024057_2 "able.name_length.unnamed_block.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024057, VkglTestCase_024057_1, VkglTestCase_024057_2);

#define VkglTestCase_024058_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024058_2 "ariable.name_length.unnamed_block.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024058, VkglTestCase_024058_1, VkglTestCase_024058_2);

#define VkglTestCase_024059_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024059_2 "able.name_length.unnamed_block.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024059, VkglTestCase_024059_1, VkglTestCase_024059_2);

#define VkglTestCase_024060_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024060_2 "able.name_length.unnamed_block.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024060, VkglTestCase_024060_1, VkglTestCase_024060_2);

#define VkglTestCase_024112_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024112_2 ".buffer_variable.offset.unnamed_block.sized.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024112, VkglTestCase_024112_1, VkglTestCase_024112_2);

#define VkglTestCase_024113_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024113_2 "fer_variable.offset.unnamed_block.sized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024113, VkglTestCase_024113_1, VkglTestCase_024113_2);

#define VkglTestCase_024114_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024114_2 "_variable.offset.unnamed_block.sized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024114, VkglTestCase_024114_1, VkglTestCase_024114_2);

#define VkglTestCase_024115_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024115_2 "iable.offset.unnamed_block.sized.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024115, VkglTestCase_024115_1, VkglTestCase_024115_2);

#define VkglTestCase_024116_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024116_2 "riable.offset.unnamed_block.sized.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024116, VkglTestCase_024116_1, VkglTestCase_024116_2);

#define VkglTestCase_024117_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024117_2 "_variable.offset.unnamed_block.sized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024117, VkglTestCase_024117_1, VkglTestCase_024117_2);

#define VkglTestCase_024118_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024118_2 "riable.offset.unnamed_block.sized.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024118, VkglTestCase_024118_1, VkglTestCase_024118_2);

#define VkglTestCase_024119_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024119_2 "riable.offset.unnamed_block.sized.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024119, VkglTestCase_024119_1, VkglTestCase_024119_2);

#define VkglTestCase_024120_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024120_2 "ffer_variable.offset.unnamed_block.sized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024120, VkglTestCase_024120_1, VkglTestCase_024120_2);

#define VkglTestCase_024121_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024121_2 "_variable.offset.unnamed_block.sized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024121, VkglTestCase_024121_1, VkglTestCase_024121_2);

#define VkglTestCase_024122_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024122_2 "riable.offset.unnamed_block.sized.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024122, VkglTestCase_024122_1, VkglTestCase_024122_2);

#define VkglTestCase_024123_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024123_2 "riable.offset.unnamed_block.sized.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024123, VkglTestCase_024123_1, VkglTestCase_024123_2);

#define VkglTestCase_024124_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024124_2 "r_variable.offset.unnamed_block.sized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024124, VkglTestCase_024124_1, VkglTestCase_024124_2);

#define VkglTestCase_024125_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024125_2 "riable.offset.unnamed_block.sized.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024125, VkglTestCase_024125_1, VkglTestCase_024125_2);

#define VkglTestCase_024126_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024126_2 "ariable.offset.unnamed_block.sized.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024126, VkglTestCase_024126_1, VkglTestCase_024126_2);
