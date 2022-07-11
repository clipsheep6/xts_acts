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

#define VkglTestCase_023505_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023505_2 "iable.array_size.named_block.sized.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023505, VkglTestCase_023505_1, VkglTestCase_023505_2);

#define VkglTestCase_023506_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023506_2 "e.array_size.named_block.sized.aggregates.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023506, VkglTestCase_023506_1, VkglTestCase_023506_2);

#define VkglTestCase_023507_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023507_2 "le.array_size.named_block.sized.aggregates.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023507, VkglTestCase_023507_1, VkglTestCase_023507_2);

#define VkglTestCase_023508_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023508_2 "iable.array_size.named_block.sized.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023508, VkglTestCase_023508_1, VkglTestCase_023508_2);

#define VkglTestCase_023509_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023509_2 "le.array_size.named_block.sized.aggregates.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023509, VkglTestCase_023509_1, VkglTestCase_023509_2);

#define VkglTestCase_023510_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023510_2 "le.array_size.named_block.sized.aggregates.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023510, VkglTestCase_023510_1, VkglTestCase_023510_2);

#define VkglTestCase_023511_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023511_2 "iable.array_size.named_block.sized.aggregates.bool_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023511, VkglTestCase_023511_1, VkglTestCase_023511_2);

#define VkglTestCase_023512_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023512_2 "riable.array_size.named_block.sized.aggregates.bool_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023512, VkglTestCase_023512_1, VkglTestCase_023512_2);

#define VkglTestCase_023513_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023513_2 "iable.array_size.named_block.sized.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023513, VkglTestCase_023513_1, VkglTestCase_023513_2);

#define VkglTestCase_023514_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023514_2 "e.array_size.named_block.sized.aggregates.bvec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023514, VkglTestCase_023514_1, VkglTestCase_023514_2);

#define VkglTestCase_023515_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023515_2 "le.array_size.named_block.sized.aggregates.bvec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023515, VkglTestCase_023515_1, VkglTestCase_023515_2);

#define VkglTestCase_023516_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023516_2 "iable.array_size.named_block.sized.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023516, VkglTestCase_023516_1, VkglTestCase_023516_2);

#define VkglTestCase_023517_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023517_2 "le.array_size.named_block.sized.aggregates.bvec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023517, VkglTestCase_023517_1, VkglTestCase_023517_2);

#define VkglTestCase_023518_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023518_2 "le.array_size.named_block.sized.aggregates.bvec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023518, VkglTestCase_023518_1, VkglTestCase_023518_2);

#define VkglTestCase_023519_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023519_2 "iable.array_size.named_block.sized.aggregates.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023519, VkglTestCase_023519_1, VkglTestCase_023519_2);

#define VkglTestCase_023520_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023520_2 "le.array_size.named_block.sized.aggregates.vec4_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023520, VkglTestCase_023520_1, VkglTestCase_023520_2);

#define VkglTestCase_023521_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023521_2 "le.array_size.named_block.sized.aggregates.vec4_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023521, VkglTestCase_023521_1, VkglTestCase_023521_2);

#define VkglTestCase_023522_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023522_2 "riable.array_size.named_block.sized.aggregates.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023522, VkglTestCase_023522_1, VkglTestCase_023522_2);

#define VkglTestCase_023523_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023523_2 "le.array_size.named_block.sized.aggregates.vec4_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023523, VkglTestCase_023523_1, VkglTestCase_023523_2);

#define VkglTestCase_023524_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023524_2 "ble.array_size.named_block.sized.aggregates.vec4_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023524, VkglTestCase_023524_1, VkglTestCase_023524_2);

#define VkglTestCase_023525_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023525_2 "iable.array_size.named_block.sized.aggregates.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023525, VkglTestCase_023525_1, VkglTestCase_023525_2);

#define VkglTestCase_023526_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023526_2 "e.array_size.named_block.sized.aggregates.ivec2_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023526, VkglTestCase_023526_1, VkglTestCase_023526_2);

#define VkglTestCase_023527_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023527_2 "le.array_size.named_block.sized.aggregates.ivec2_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023527, VkglTestCase_023527_1, VkglTestCase_023527_2);

#define VkglTestCase_023528_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023528_2 "iable.array_size.named_block.sized.aggregates.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023528, VkglTestCase_023528_1, VkglTestCase_023528_2);

#define VkglTestCase_023529_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023529_2 "le.array_size.named_block.sized.aggregates.ivec2_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023529, VkglTestCase_023529_1, VkglTestCase_023529_2);

#define VkglTestCase_023530_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023530_2 "le.array_size.named_block.sized.aggregates.ivec2_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023530, VkglTestCase_023530_1, VkglTestCase_023530_2);

#define VkglTestCase_023618_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023618_2 "able.array_stride.named_block.sized.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023618, VkglTestCase_023618_1, VkglTestCase_023618_2);

#define VkglTestCase_023619_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023619_2 ".array_stride.named_block.sized.aggregates.float_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023619, VkglTestCase_023619_1, VkglTestCase_023619_2);

#define VkglTestCase_023620_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023620_2 "e.array_stride.named_block.sized.aggregates.float_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023620, VkglTestCase_023620_1, VkglTestCase_023620_2);

#define VkglTestCase_023621_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023621_2 "able.array_stride.named_block.sized.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023621, VkglTestCase_023621_1, VkglTestCase_023621_2);

#define VkglTestCase_023622_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023622_2 "e.array_stride.named_block.sized.aggregates.float_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023622, VkglTestCase_023622_1, VkglTestCase_023622_2);

#define VkglTestCase_023623_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023623_2 "e.array_stride.named_block.sized.aggregates.float_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023623, VkglTestCase_023623_1, VkglTestCase_023623_2);

#define VkglTestCase_023624_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023624_2 "able.array_stride.named_block.sized.aggregates.bool_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023624, VkglTestCase_023624_1, VkglTestCase_023624_2);

#define VkglTestCase_023625_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023625_2 "iable.array_stride.named_block.sized.aggregates.bool_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023625, VkglTestCase_023625_1, VkglTestCase_023625_2);

#define VkglTestCase_023626_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023626_2 "able.array_stride.named_block.sized.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023626, VkglTestCase_023626_1, VkglTestCase_023626_2);

#define VkglTestCase_023627_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023627_2 ".array_stride.named_block.sized.aggregates.bvec3_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023627, VkglTestCase_023627_1, VkglTestCase_023627_2);

#define VkglTestCase_023628_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023628_2 "e.array_stride.named_block.sized.aggregates.bvec3_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023628, VkglTestCase_023628_1, VkglTestCase_023628_2);

#define VkglTestCase_023629_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023629_2 "able.array_stride.named_block.sized.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023629, VkglTestCase_023629_1, VkglTestCase_023629_2);

#define VkglTestCase_023630_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023630_2 "e.array_stride.named_block.sized.aggregates.bvec3_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023630, VkglTestCase_023630_1, VkglTestCase_023630_2);

#define VkglTestCase_023631_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023631_2 "e.array_stride.named_block.sized.aggregates.bvec3_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023631, VkglTestCase_023631_1, VkglTestCase_023631_2);

#define VkglTestCase_023632_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023632_2 "able.array_stride.named_block.sized.aggregates.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023632, VkglTestCase_023632_1, VkglTestCase_023632_2);

#define VkglTestCase_023633_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023633_2 "e.array_stride.named_block.sized.aggregates.vec4_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023633, VkglTestCase_023633_1, VkglTestCase_023633_2);

#define VkglTestCase_023634_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023634_2 "e.array_stride.named_block.sized.aggregates.vec4_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023634, VkglTestCase_023634_1, VkglTestCase_023634_2);

#define VkglTestCase_023635_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023635_2 "iable.array_stride.named_block.sized.aggregates.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023635, VkglTestCase_023635_1, VkglTestCase_023635_2);

#define VkglTestCase_023636_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023636_2 "e.array_stride.named_block.sized.aggregates.vec4_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023636, VkglTestCase_023636_1, VkglTestCase_023636_2);

#define VkglTestCase_023637_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023637_2 "le.array_stride.named_block.sized.aggregates.vec4_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023637, VkglTestCase_023637_1, VkglTestCase_023637_2);

#define VkglTestCase_023638_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023638_2 "able.array_stride.named_block.sized.aggregates.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023638, VkglTestCase_023638_1, VkglTestCase_023638_2);

#define VkglTestCase_023639_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023639_2 ".array_stride.named_block.sized.aggregates.ivec2_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023639, VkglTestCase_023639_1, VkglTestCase_023639_2);

#define VkglTestCase_023640_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023640_2 "e.array_stride.named_block.sized.aggregates.ivec2_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023640, VkglTestCase_023640_1, VkglTestCase_023640_2);

#define VkglTestCase_023641_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023641_2 "able.array_stride.named_block.sized.aggregates.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023641, VkglTestCase_023641_1, VkglTestCase_023641_2);

#define VkglTestCase_023642_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023642_2 "e.array_stride.named_block.sized.aggregates.ivec2_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023642, VkglTestCase_023642_1, VkglTestCase_023642_2);

#define VkglTestCase_023643_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023643_2 "e.array_stride.named_block.sized.aggregates.ivec2_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023643, VkglTestCase_023643_1, VkglTestCase_023643_2);
