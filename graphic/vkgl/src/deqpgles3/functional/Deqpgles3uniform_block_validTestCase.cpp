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
#include "../ActsDeqpgles30006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005020_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005020_2 "ck.valid.repeat_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005020, VkglTestCase_005020_1, VkglTestCase_005020_2);

#define VkglTestCase_005021_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005021_2 "k.valid.repeat_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005021, VkglTestCase_005021_1, VkglTestCase_005021_2);

#define VkglTestCase_005022_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005022_2 "rm_block.valid.layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005022, VkglTestCase_005022_1, VkglTestCase_005022_2);

#define VkglTestCase_005023_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005023_2 "m_block.valid.layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005023, VkglTestCase_005023_1, VkglTestCase_005023_2);

#define VkglTestCase_005024_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005024_2 "rm_block.valid.layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005024, VkglTestCase_005024_1, VkglTestCase_005024_2);

#define VkglTestCase_005025_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005025_2 "m_block.valid.layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005025, VkglTestCase_005025_1, VkglTestCase_005025_2);

#define VkglTestCase_005026_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005026_2 "rm_block.valid.layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005026, VkglTestCase_005026_1, VkglTestCase_005026_2);

#define VkglTestCase_005027_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005027_2 "m_block.valid.layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005027, VkglTestCase_005027_1, VkglTestCase_005027_2);

#define VkglTestCase_005028_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005028_2 "m_block.valid.layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005028, VkglTestCase_005028_1, VkglTestCase_005028_2);

#define VkglTestCase_005029_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005029_2 "_block.valid.layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005029, VkglTestCase_005029_1, VkglTestCase_005029_2);

#define VkglTestCase_005030_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005030_2 "block.valid.layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005030, VkglTestCase_005030_1, VkglTestCase_005030_2);

#define VkglTestCase_005031_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005031_2 "lock.valid.layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005031, VkglTestCase_005031_1, VkglTestCase_005031_2);

#define VkglTestCase_005032_1 "dEQP-GLES3.functional.shaders.uni"
#define VkglTestCase_005032_2 "form_block.valid.layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005032, VkglTestCase_005032_1, VkglTestCase_005032_2);

#define VkglTestCase_005033_1 "dEQP-GLES3.functional.shaders.unif"
#define VkglTestCase_005033_2 "orm_block.valid.layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005033, VkglTestCase_005033_1, VkglTestCase_005033_2);

#define VkglTestCase_005034_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005034_2 "_block.valid.layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005034, VkglTestCase_005034_1, VkglTestCase_005034_2);

#define VkglTestCase_005035_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005035_2 "block.valid.layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005035, VkglTestCase_005035_1, VkglTestCase_005035_2);

#define VkglTestCase_005036_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005036_2 "block.valid.global_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005036, VkglTestCase_005036_1, VkglTestCase_005036_2);

#define VkglTestCase_005037_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005037_2 "lock.valid.global_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005037, VkglTestCase_005037_1, VkglTestCase_005037_2);

#define VkglTestCase_005038_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005038_2 "block.valid.global_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005038, VkglTestCase_005038_1, VkglTestCase_005038_2);

#define VkglTestCase_005039_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005039_2 "lock.valid.global_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005039, VkglTestCase_005039_1, VkglTestCase_005039_2);

#define VkglTestCase_005040_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005040_2 "block.valid.global_layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005040, VkglTestCase_005040_1, VkglTestCase_005040_2);

#define VkglTestCase_005041_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005041_2 "lock.valid.global_layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005041, VkglTestCase_005041_1, VkglTestCase_005041_2);

#define VkglTestCase_005042_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005042_2 "ock.valid.global_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005042, VkglTestCase_005042_1, VkglTestCase_005042_2);

#define VkglTestCase_005043_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005043_2 "ck.valid.global_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005043, VkglTestCase_005043_1, VkglTestCase_005043_2);

#define VkglTestCase_005044_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005044_2 "ck.valid.global_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005044, VkglTestCase_005044_1, VkglTestCase_005044_2);

#define VkglTestCase_005045_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005045_2 "k.valid.global_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005045, VkglTestCase_005045_1, VkglTestCase_005045_2);

#define VkglTestCase_005046_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005046_2 "_block.valid.global_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005046, VkglTestCase_005046_1, VkglTestCase_005046_2);

#define VkglTestCase_005047_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005047_2 "block.valid.global_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005047, VkglTestCase_005047_1, VkglTestCase_005047_2);

#define VkglTestCase_005048_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005048_2 "ck.valid.global_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005048, VkglTestCase_005048_1, VkglTestCase_005048_2);

#define VkglTestCase_005049_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005049_2 "k.valid.global_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005049, VkglTestCase_005049_1, VkglTestCase_005049_2);

#define VkglTestCase_005050_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005050_2 "ock.valid.member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005050, VkglTestCase_005050_1, VkglTestCase_005050_2);

#define VkglTestCase_005051_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005051_2 "ck.valid.member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005051, VkglTestCase_005051_1, VkglTestCase_005051_2);

#define VkglTestCase_005052_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005052_2 "ck.valid.member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005052, VkglTestCase_005052_1, VkglTestCase_005052_2);

#define VkglTestCase_005053_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005053_2 "k.valid.member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005053, VkglTestCase_005053_1, VkglTestCase_005053_2);

#define VkglTestCase_005054_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005054_2 "k.valid.member_layout_row_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005054, VkglTestCase_005054_1, VkglTestCase_005054_2);

#define VkglTestCase_005055_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005055_2 ".valid.member_layout_row_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005055, VkglTestCase_005055_1, VkglTestCase_005055_2);

#define VkglTestCase_005056_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005056_2 "valid.member_layout_column_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005056, VkglTestCase_005056_1, VkglTestCase_005056_2);

#define VkglTestCase_005057_1 "dEQP-GLES3.functional.shaders.uniform_block.v"
#define VkglTestCase_005057_2 "alid.member_layout_column_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005057, VkglTestCase_005057_1, VkglTestCase_005057_2);

#define VkglTestCase_005058_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005058_2 "_block.valid.member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005058, VkglTestCase_005058_1, VkglTestCase_005058_2);

#define VkglTestCase_005059_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005059_2 "block.valid.member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005059, VkglTestCase_005059_1, VkglTestCase_005059_2);

#define VkglTestCase_005060_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005060_2 "ck.valid.member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005060, VkglTestCase_005060_1, VkglTestCase_005060_2);

#define VkglTestCase_005061_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005061_2 "k.valid.member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005061, VkglTestCase_005061_1, VkglTestCase_005061_2);

#define VkglTestCase_005062_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005062_2 "m_block.valid.no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005062, VkglTestCase_005062_1, VkglTestCase_005062_2);

#define VkglTestCase_005063_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005063_2 "_block.valid.no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005063, VkglTestCase_005063_1, VkglTestCase_005063_2);

#define VkglTestCase_005064_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005064_2 "k.valid.same_variable_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005064, VkglTestCase_005064_1, VkglTestCase_005064_2);

#define VkglTestCase_005065_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005065_2 ".valid.same_variable_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005065, VkglTestCase_005065_1, VkglTestCase_005065_2);

#define VkglTestCase_005066_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005066_2 "valid.same_variable_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005066, VkglTestCase_005066_1, VkglTestCase_005066_2);

#define VkglTestCase_005067_1 "dEQP-GLES3.functional.shaders.uniform_block.v"
#define VkglTestCase_005067_2 "alid.same_variable_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005067, VkglTestCase_005067_1, VkglTestCase_005067_2);

#define VkglTestCase_005068_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005068_2 "rm_block.valid.struct_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005068, VkglTestCase_005068_1, VkglTestCase_005068_2);

#define VkglTestCase_005069_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005069_2 "m_block.valid.struct_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005069, VkglTestCase_005069_1, VkglTestCase_005069_2);

#define VkglTestCase_005070_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005070_2 ".valid.struct_member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005070, VkglTestCase_005070_1, VkglTestCase_005070_2);

#define VkglTestCase_005071_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005071_2 "valid.struct_member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005071, VkglTestCase_005071_1, VkglTestCase_005071_2);

#define VkglTestCase_005072_1 "dEQP-GLES3.functional.shaders.uniform_block.v"
#define VkglTestCase_005072_2 "alid.struct_member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005072, VkglTestCase_005072_1, VkglTestCase_005072_2);

#define VkglTestCase_005073_1 "dEQP-GLES3.functional.shaders.uniform_block.va"
#define VkglTestCase_005073_2 "lid.struct_member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005073, VkglTestCase_005073_1, VkglTestCase_005073_2);

#define VkglTestCase_005074_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005074_2 "ock.valid.struct_member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005074, VkglTestCase_005074_1, VkglTestCase_005074_2);

#define VkglTestCase_005075_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005075_2 "ck.valid.struct_member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005075, VkglTestCase_005075_1, VkglTestCase_005075_2);

#define VkglTestCase_005076_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005076_2 "valid.struct_member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005076, VkglTestCase_005076_1, VkglTestCase_005076_2);

#define VkglTestCase_005077_1 "dEQP-GLES3.functional.shaders.uniform_block.v"
#define VkglTestCase_005077_2 "alid.struct_member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005077, VkglTestCase_005077_1, VkglTestCase_005077_2);

#define VkglTestCase_005078_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005078_2 "m_block.valid.long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005078, VkglTestCase_005078_1, VkglTestCase_005078_2);

#define VkglTestCase_005079_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005079_2 "_block.valid.long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005079, VkglTestCase_005079_1, VkglTestCase_005079_2);

#define VkglTestCase_005080_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005080_2 "_block.valid.long_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005080, VkglTestCase_005080_1, VkglTestCase_005080_2);

#define VkglTestCase_005081_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005081_2 "block.valid.long_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005081, VkglTestCase_005081_1, VkglTestCase_005081_2);

#define VkglTestCase_005082_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005082_2 "lock.valid.underscore_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005082, VkglTestCase_005082_1, VkglTestCase_005082_2);

#define VkglTestCase_005083_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005083_2 "ock.valid.underscore_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005083, VkglTestCase_005083_1, VkglTestCase_005083_2);

#define VkglTestCase_005084_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005084_2 "ock.valid.underscore_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005084, VkglTestCase_005084_1, VkglTestCase_005084_2);

#define VkglTestCase_005085_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005085_2 "ck.valid.underscore_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005085, VkglTestCase_005085_1, VkglTestCase_005085_2);
