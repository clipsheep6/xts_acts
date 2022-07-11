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
#include "../ActsDeqpgles30035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034489_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034489_2 "asic_type.std140.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034489, VkglTestCase_034489_1, VkglTestCase_034489_2);

#define VkglTestCase_034490_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034490_2 "sic_type.std140.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034490, VkglTestCase_034490_1, VkglTestCase_034490_2);

#define VkglTestCase_034491_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034491_2 "basic_type.std140.lowp_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034491, VkglTestCase_034491_1, VkglTestCase_034491_2);

#define VkglTestCase_034492_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034492_2 "sic_type.std140.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034492, VkglTestCase_034492_1, VkglTestCase_034492_2);

#define VkglTestCase_034493_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034493_2 "ic_type.std140.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034493, VkglTestCase_034493_1, VkglTestCase_034493_2);

#define VkglTestCase_034494_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034494_2 "asic_type.std140.mediump_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034494, VkglTestCase_034494_1, VkglTestCase_034494_2);

#define VkglTestCase_034495_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034495_2 "asic_type.std140.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034495, VkglTestCase_034495_1, VkglTestCase_034495_2);

#define VkglTestCase_034496_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034496_2 "sic_type.std140.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034496, VkglTestCase_034496_1, VkglTestCase_034496_2);

#define VkglTestCase_034497_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034497_2 "basic_type.std140.highp_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034497, VkglTestCase_034497_1, VkglTestCase_034497_2);

#define VkglTestCase_034498_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034498_2 "basic_type.std140.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034498, VkglTestCase_034498_1, VkglTestCase_034498_2);

#define VkglTestCase_034499_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034499_2 "asic_type.std140.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034499, VkglTestCase_034499_1, VkglTestCase_034499_2);

#define VkglTestCase_034500_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034500_2 "_basic_type.std140.lowp_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034500, VkglTestCase_034500_1, VkglTestCase_034500_2);

#define VkglTestCase_034501_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034501_2 "sic_type.std140.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034501, VkglTestCase_034501_1, VkglTestCase_034501_2);

#define VkglTestCase_034502_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034502_2 "ic_type.std140.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034502, VkglTestCase_034502_1, VkglTestCase_034502_2);

#define VkglTestCase_034503_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034503_2 "asic_type.std140.mediump_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034503, VkglTestCase_034503_1, VkglTestCase_034503_2);

#define VkglTestCase_034504_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034504_2 "asic_type.std140.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034504, VkglTestCase_034504_1, VkglTestCase_034504_2);

#define VkglTestCase_034505_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034505_2 "sic_type.std140.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034505, VkglTestCase_034505_1, VkglTestCase_034505_2);

#define VkglTestCase_034506_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034506_2 "basic_type.std140.highp_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034506, VkglTestCase_034506_1, VkglTestCase_034506_2);

#define VkglTestCase_034507_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034507_2 "basic_type.std140.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034507, VkglTestCase_034507_1, VkglTestCase_034507_2);

#define VkglTestCase_034508_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034508_2 "asic_type.std140.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034508, VkglTestCase_034508_1, VkglTestCase_034508_2);

#define VkglTestCase_034509_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034509_2 "_basic_type.std140.lowp_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034509, VkglTestCase_034509_1, VkglTestCase_034509_2);

#define VkglTestCase_034510_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034510_2 "sic_type.std140.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034510, VkglTestCase_034510_1, VkglTestCase_034510_2);

#define VkglTestCase_034511_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034511_2 "ic_type.std140.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034511, VkglTestCase_034511_1, VkglTestCase_034511_2);

#define VkglTestCase_034512_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034512_2 "asic_type.std140.mediump_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034512, VkglTestCase_034512_1, VkglTestCase_034512_2);

#define VkglTestCase_034513_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034513_2 "asic_type.std140.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034513, VkglTestCase_034513_1, VkglTestCase_034513_2);

#define VkglTestCase_034514_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034514_2 "sic_type.std140.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034514, VkglTestCase_034514_1, VkglTestCase_034514_2);

#define VkglTestCase_034515_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034515_2 "basic_type.std140.highp_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034515, VkglTestCase_034515_1, VkglTestCase_034515_2);

#define VkglTestCase_034516_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034516_2 "basic_type.std140.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034516, VkglTestCase_034516_1, VkglTestCase_034516_2);

#define VkglTestCase_034517_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034517_2 "asic_type.std140.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034517, VkglTestCase_034517_1, VkglTestCase_034517_2);

#define VkglTestCase_034518_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034518_2 "_basic_type.std140.lowp_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034518, VkglTestCase_034518_1, VkglTestCase_034518_2);

#define VkglTestCase_034519_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034519_2 "sic_type.std140.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034519, VkglTestCase_034519_1, VkglTestCase_034519_2);

#define VkglTestCase_034520_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034520_2 "ic_type.std140.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034520, VkglTestCase_034520_1, VkglTestCase_034520_2);

#define VkglTestCase_034521_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034521_2 "asic_type.std140.mediump_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034521, VkglTestCase_034521_1, VkglTestCase_034521_2);

#define VkglTestCase_034522_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034522_2 "asic_type.std140.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034522, VkglTestCase_034522_1, VkglTestCase_034522_2);

#define VkglTestCase_034523_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034523_2 "sic_type.std140.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034523, VkglTestCase_034523_1, VkglTestCase_034523_2);

#define VkglTestCase_034524_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034524_2 "basic_type.std140.highp_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034524, VkglTestCase_034524_1, VkglTestCase_034524_2);

#define VkglTestCase_034525_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034525_2 "basic_type.std140.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034525, VkglTestCase_034525_1, VkglTestCase_034525_2);

#define VkglTestCase_034526_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034526_2 "asic_type.std140.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034526, VkglTestCase_034526_1, VkglTestCase_034526_2);

#define VkglTestCase_034527_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034527_2 "_basic_type.std140.lowp_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034527, VkglTestCase_034527_1, VkglTestCase_034527_2);

#define VkglTestCase_034528_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034528_2 "asic_type.std140.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034528, VkglTestCase_034528_1, VkglTestCase_034528_2);

#define VkglTestCase_034529_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034529_2 "sic_type.std140.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034529, VkglTestCase_034529_1, VkglTestCase_034529_2);

#define VkglTestCase_034530_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034530_2 "basic_type.std140.mediump_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034530, VkglTestCase_034530_1, VkglTestCase_034530_2);

#define VkglTestCase_034531_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034531_2 "basic_type.std140.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034531, VkglTestCase_034531_1, VkglTestCase_034531_2);

#define VkglTestCase_034532_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034532_2 "asic_type.std140.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034532, VkglTestCase_034532_1, VkglTestCase_034532_2);

#define VkglTestCase_034533_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034533_2 "_basic_type.std140.highp_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034533, VkglTestCase_034533_1, VkglTestCase_034533_2);

#define VkglTestCase_034534_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034534_2 "asic_type.std140.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034534, VkglTestCase_034534_1, VkglTestCase_034534_2);

#define VkglTestCase_034535_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034535_2 "sic_type.std140.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034535, VkglTestCase_034535_1, VkglTestCase_034535_2);

#define VkglTestCase_034536_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034536_2 "basic_type.std140.lowp_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034536, VkglTestCase_034536_1, VkglTestCase_034536_2);

#define VkglTestCase_034537_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034537_2 "sic_type.std140.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034537, VkglTestCase_034537_1, VkglTestCase_034537_2);

#define VkglTestCase_034538_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034538_2 "ic_type.std140.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034538, VkglTestCase_034538_1, VkglTestCase_034538_2);

#define VkglTestCase_034539_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034539_2 "asic_type.std140.mediump_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034539, VkglTestCase_034539_1, VkglTestCase_034539_2);

#define VkglTestCase_034540_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034540_2 "asic_type.std140.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034540, VkglTestCase_034540_1, VkglTestCase_034540_2);

#define VkglTestCase_034541_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034541_2 "sic_type.std140.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034541, VkglTestCase_034541_1, VkglTestCase_034541_2);

#define VkglTestCase_034542_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034542_2 "basic_type.std140.highp_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034542, VkglTestCase_034542_1, VkglTestCase_034542_2);

#define VkglTestCase_034543_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034543_2 "asic_type.std140.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034543, VkglTestCase_034543_1, VkglTestCase_034543_2);

#define VkglTestCase_034544_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034544_2 "sic_type.std140.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034544, VkglTestCase_034544_1, VkglTestCase_034544_2);

#define VkglTestCase_034545_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034545_2 "basic_type.std140.lowp_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034545, VkglTestCase_034545_1, VkglTestCase_034545_2);

#define VkglTestCase_034546_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034546_2 "sic_type.std140.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034546, VkglTestCase_034546_1, VkglTestCase_034546_2);

#define VkglTestCase_034547_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034547_2 "ic_type.std140.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034547, VkglTestCase_034547_1, VkglTestCase_034547_2);

#define VkglTestCase_034548_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034548_2 "asic_type.std140.mediump_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034548, VkglTestCase_034548_1, VkglTestCase_034548_2);

#define VkglTestCase_034549_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034549_2 "asic_type.std140.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034549, VkglTestCase_034549_1, VkglTestCase_034549_2);

#define VkglTestCase_034550_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034550_2 "sic_type.std140.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034550, VkglTestCase_034550_1, VkglTestCase_034550_2);

#define VkglTestCase_034551_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034551_2 "basic_type.std140.highp_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034551, VkglTestCase_034551_1, VkglTestCase_034551_2);

#define VkglTestCase_034552_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034552_2 "asic_type.std140.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034552, VkglTestCase_034552_1, VkglTestCase_034552_2);

#define VkglTestCase_034553_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034553_2 "sic_type.std140.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034553, VkglTestCase_034553_1, VkglTestCase_034553_2);

#define VkglTestCase_034554_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034554_2 "basic_type.std140.lowp_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034554, VkglTestCase_034554_1, VkglTestCase_034554_2);

#define VkglTestCase_034555_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034555_2 "sic_type.std140.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034555, VkglTestCase_034555_1, VkglTestCase_034555_2);

#define VkglTestCase_034556_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034556_2 "ic_type.std140.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034556, VkglTestCase_034556_1, VkglTestCase_034556_2);

#define VkglTestCase_034557_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034557_2 "asic_type.std140.mediump_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034557, VkglTestCase_034557_1, VkglTestCase_034557_2);

#define VkglTestCase_034558_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034558_2 "asic_type.std140.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034558, VkglTestCase_034558_1, VkglTestCase_034558_2);

#define VkglTestCase_034559_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034559_2 "sic_type.std140.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034559, VkglTestCase_034559_1, VkglTestCase_034559_2);

#define VkglTestCase_034560_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034560_2 "basic_type.std140.highp_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034560, VkglTestCase_034560_1, VkglTestCase_034560_2);

#define VkglTestCase_034561_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034561_2 "basic_type.std140.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034561, VkglTestCase_034561_1, VkglTestCase_034561_2);

#define VkglTestCase_034562_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034562_2 "asic_type.std140.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034562, VkglTestCase_034562_1, VkglTestCase_034562_2);

#define VkglTestCase_034563_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034563_2 "_basic_type.std140.lowp_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034563, VkglTestCase_034563_1, VkglTestCase_034563_2);

#define VkglTestCase_034564_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034564_2 "sic_type.std140.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034564, VkglTestCase_034564_1, VkglTestCase_034564_2);

#define VkglTestCase_034565_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034565_2 "ic_type.std140.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034565, VkglTestCase_034565_1, VkglTestCase_034565_2);

#define VkglTestCase_034566_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034566_2 "asic_type.std140.mediump_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034566, VkglTestCase_034566_1, VkglTestCase_034566_2);

#define VkglTestCase_034567_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034567_2 "asic_type.std140.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034567, VkglTestCase_034567_1, VkglTestCase_034567_2);

#define VkglTestCase_034568_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034568_2 "sic_type.std140.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034568, VkglTestCase_034568_1, VkglTestCase_034568_2);

#define VkglTestCase_034569_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034569_2 "basic_type.std140.highp_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034569, VkglTestCase_034569_1, VkglTestCase_034569_2);

#define VkglTestCase_034570_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034570_2 "asic_type.std140.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034570, VkglTestCase_034570_1, VkglTestCase_034570_2);

#define VkglTestCase_034571_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034571_2 "sic_type.std140.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034571, VkglTestCase_034571_1, VkglTestCase_034571_2);

#define VkglTestCase_034572_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034572_2 "basic_type.std140.lowp_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034572, VkglTestCase_034572_1, VkglTestCase_034572_2);

#define VkglTestCase_034573_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034573_2 "sic_type.std140.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034573, VkglTestCase_034573_1, VkglTestCase_034573_2);

#define VkglTestCase_034574_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034574_2 "ic_type.std140.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034574, VkglTestCase_034574_1, VkglTestCase_034574_2);

#define VkglTestCase_034575_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034575_2 "asic_type.std140.mediump_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034575, VkglTestCase_034575_1, VkglTestCase_034575_2);

#define VkglTestCase_034576_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034576_2 "asic_type.std140.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034576, VkglTestCase_034576_1, VkglTestCase_034576_2);

#define VkglTestCase_034577_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034577_2 "sic_type.std140.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034577, VkglTestCase_034577_1, VkglTestCase_034577_2);

#define VkglTestCase_034578_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034578_2 "basic_type.std140.highp_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034578, VkglTestCase_034578_1, VkglTestCase_034578_2);

#define VkglTestCase_034579_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034579_2 "asic_type.std140.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034579, VkglTestCase_034579_1, VkglTestCase_034579_2);

#define VkglTestCase_034580_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034580_2 "sic_type.std140.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034580, VkglTestCase_034580_1, VkglTestCase_034580_2);

#define VkglTestCase_034581_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034581_2 "basic_type.std140.lowp_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034581, VkglTestCase_034581_1, VkglTestCase_034581_2);

#define VkglTestCase_034582_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034582_2 "sic_type.std140.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034582, VkglTestCase_034582_1, VkglTestCase_034582_2);

#define VkglTestCase_034583_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034583_2 "ic_type.std140.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034583, VkglTestCase_034583_1, VkglTestCase_034583_2);

#define VkglTestCase_034584_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034584_2 "asic_type.std140.mediump_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034584, VkglTestCase_034584_1, VkglTestCase_034584_2);

#define VkglTestCase_034585_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034585_2 "asic_type.std140.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034585, VkglTestCase_034585_1, VkglTestCase_034585_2);

#define VkglTestCase_034586_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034586_2 "sic_type.std140.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034586, VkglTestCase_034586_1, VkglTestCase_034586_2);

#define VkglTestCase_034587_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034587_2 "basic_type.std140.highp_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034587, VkglTestCase_034587_1, VkglTestCase_034587_2);

#define VkglTestCase_034588_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034588_2 "asic_type.std140.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034588, VkglTestCase_034588_1, VkglTestCase_034588_2);

#define VkglTestCase_034589_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034589_2 "sic_type.std140.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034589, VkglTestCase_034589_1, VkglTestCase_034589_2);

#define VkglTestCase_034590_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034590_2 "basic_type.std140.lowp_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034590, VkglTestCase_034590_1, VkglTestCase_034590_2);

#define VkglTestCase_034591_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034591_2 "sic_type.std140.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034591, VkglTestCase_034591_1, VkglTestCase_034591_2);

#define VkglTestCase_034592_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034592_2 "ic_type.std140.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034592, VkglTestCase_034592_1, VkglTestCase_034592_2);

#define VkglTestCase_034593_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034593_2 "asic_type.std140.mediump_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034593, VkglTestCase_034593_1, VkglTestCase_034593_2);

#define VkglTestCase_034594_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034594_2 "asic_type.std140.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034594, VkglTestCase_034594_1, VkglTestCase_034594_2);

#define VkglTestCase_034595_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034595_2 "sic_type.std140.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034595, VkglTestCase_034595_1, VkglTestCase_034595_2);

#define VkglTestCase_034596_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034596_2 "basic_type.std140.highp_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034596, VkglTestCase_034596_1, VkglTestCase_034596_2);

#define VkglTestCase_034597_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034597_2 "e_basic_type.std140.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034597, VkglTestCase_034597_1, VkglTestCase_034597_2);

#define VkglTestCase_034598_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034598_2 "_basic_type.std140.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034598, VkglTestCase_034598_1, VkglTestCase_034598_2);

#define VkglTestCase_034599_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034599_2 "le_basic_type.std140.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034599, VkglTestCase_034599_1, VkglTestCase_034599_2);

#define VkglTestCase_034600_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034600_2 "e_basic_type.std140.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034600, VkglTestCase_034600_1, VkglTestCase_034600_2);

#define VkglTestCase_034601_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034601_2 "_basic_type.std140.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034601, VkglTestCase_034601_1, VkglTestCase_034601_2);

#define VkglTestCase_034602_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034602_2 "le_basic_type.std140.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034602, VkglTestCase_034602_1, VkglTestCase_034602_2);

#define VkglTestCase_034603_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034603_2 "e_basic_type.std140.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034603, VkglTestCase_034603_1, VkglTestCase_034603_2);

#define VkglTestCase_034604_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034604_2 "_basic_type.std140.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034604, VkglTestCase_034604_1, VkglTestCase_034604_2);

#define VkglTestCase_034605_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034605_2 "le_basic_type.std140.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034605, VkglTestCase_034605_1, VkglTestCase_034605_2);

#define VkglTestCase_034606_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034606_2 "e_basic_type.std140.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034606, VkglTestCase_034606_1, VkglTestCase_034606_2);

#define VkglTestCase_034607_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034607_2 "_basic_type.std140.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034607, VkglTestCase_034607_1, VkglTestCase_034607_2);

#define VkglTestCase_034608_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034608_2 "le_basic_type.std140.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034608, VkglTestCase_034608_1, VkglTestCase_034608_2);

#define VkglTestCase_034609_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034609_2 "basic_type.std140.lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034609, VkglTestCase_034609_1, VkglTestCase_034609_2);

#define VkglTestCase_034610_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034610_2 "asic_type.std140.lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034610, VkglTestCase_034610_1, VkglTestCase_034610_2);

#define VkglTestCase_034611_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034611_2 "_basic_type.std140.lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034611, VkglTestCase_034611_1, VkglTestCase_034611_2);

#define VkglTestCase_034612_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034612_2 "sic_type.std140.mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034612, VkglTestCase_034612_1, VkglTestCase_034612_2);

#define VkglTestCase_034613_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034613_2 "ic_type.std140.mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034613, VkglTestCase_034613_1, VkglTestCase_034613_2);

#define VkglTestCase_034614_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034614_2 "asic_type.std140.mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034614, VkglTestCase_034614_1, VkglTestCase_034614_2);

#define VkglTestCase_034615_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034615_2 "asic_type.std140.highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034615, VkglTestCase_034615_1, VkglTestCase_034615_2);

#define VkglTestCase_034616_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034616_2 "sic_type.std140.highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034616, VkglTestCase_034616_1, VkglTestCase_034616_2);

#define VkglTestCase_034617_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034617_2 "basic_type.std140.highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034617, VkglTestCase_034617_1, VkglTestCase_034617_2);

#define VkglTestCase_034618_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034618_2 "_type.std140.row_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034618, VkglTestCase_034618_1, VkglTestCase_034618_2);

#define VkglTestCase_034619_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034619_2 "type.std140.row_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034619, VkglTestCase_034619_1, VkglTestCase_034619_2);

#define VkglTestCase_034620_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034620_2 "c_type.std140.row_major_lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034620, VkglTestCase_034620_1, VkglTestCase_034620_2);

#define VkglTestCase_034621_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034621_2 "ype.std140.row_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034621, VkglTestCase_034621_1, VkglTestCase_034621_2);

#define VkglTestCase_034622_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034622_2 "pe.std140.row_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034622, VkglTestCase_034622_1, VkglTestCase_034622_2);

#define VkglTestCase_034623_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034623_2 "type.std140.row_major_mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034623, VkglTestCase_034623_1, VkglTestCase_034623_2);

#define VkglTestCase_034624_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034624_2 "type.std140.row_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034624, VkglTestCase_034624_1, VkglTestCase_034624_2);

#define VkglTestCase_034625_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034625_2 "ype.std140.row_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034625, VkglTestCase_034625_1, VkglTestCase_034625_2);

#define VkglTestCase_034626_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034626_2 "_type.std140.row_major_highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034626, VkglTestCase_034626_1, VkglTestCase_034626_2);

#define VkglTestCase_034627_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034627_2 "ype.std140.column_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034627, VkglTestCase_034627_1, VkglTestCase_034627_2);

#define VkglTestCase_034628_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034628_2 "pe.std140.column_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034628, VkglTestCase_034628_1, VkglTestCase_034628_2);

#define VkglTestCase_034629_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034629_2 "type.std140.column_major_lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034629, VkglTestCase_034629_1, VkglTestCase_034629_2);

#define VkglTestCase_034630_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034630_2 "pe.std140.column_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034630, VkglTestCase_034630_1, VkglTestCase_034630_2);

#define VkglTestCase_034631_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034631_2 "e.std140.column_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034631, VkglTestCase_034631_1, VkglTestCase_034631_2);

#define VkglTestCase_034632_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034632_2 "ype.std140.column_major_mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034632, VkglTestCase_034632_1, VkglTestCase_034632_2);

#define VkglTestCase_034633_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034633_2 "ype.std140.column_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034633, VkglTestCase_034633_1, VkglTestCase_034633_2);

#define VkglTestCase_034634_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034634_2 "pe.std140.column_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034634, VkglTestCase_034634_1, VkglTestCase_034634_2);

#define VkglTestCase_034635_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034635_2 "type.std140.column_major_highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034635, VkglTestCase_034635_1, VkglTestCase_034635_2);

#define VkglTestCase_034636_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034636_2 "basic_type.std140.lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034636, VkglTestCase_034636_1, VkglTestCase_034636_2);

#define VkglTestCase_034637_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034637_2 "asic_type.std140.lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034637, VkglTestCase_034637_1, VkglTestCase_034637_2);

#define VkglTestCase_034638_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034638_2 "_basic_type.std140.lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034638, VkglTestCase_034638_1, VkglTestCase_034638_2);

#define VkglTestCase_034639_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034639_2 "sic_type.std140.mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034639, VkglTestCase_034639_1, VkglTestCase_034639_2);

#define VkglTestCase_034640_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034640_2 "ic_type.std140.mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034640, VkglTestCase_034640_1, VkglTestCase_034640_2);

#define VkglTestCase_034641_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034641_2 "asic_type.std140.mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034641, VkglTestCase_034641_1, VkglTestCase_034641_2);

#define VkglTestCase_034642_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034642_2 "asic_type.std140.highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034642, VkglTestCase_034642_1, VkglTestCase_034642_2);

#define VkglTestCase_034643_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034643_2 "sic_type.std140.highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034643, VkglTestCase_034643_1, VkglTestCase_034643_2);

#define VkglTestCase_034644_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034644_2 "basic_type.std140.highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034644, VkglTestCase_034644_1, VkglTestCase_034644_2);

#define VkglTestCase_034645_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034645_2 "_type.std140.row_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034645, VkglTestCase_034645_1, VkglTestCase_034645_2);

#define VkglTestCase_034646_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034646_2 "type.std140.row_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034646, VkglTestCase_034646_1, VkglTestCase_034646_2);

#define VkglTestCase_034647_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034647_2 "c_type.std140.row_major_lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034647, VkglTestCase_034647_1, VkglTestCase_034647_2);

#define VkglTestCase_034648_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034648_2 "ype.std140.row_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034648, VkglTestCase_034648_1, VkglTestCase_034648_2);

#define VkglTestCase_034649_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034649_2 "pe.std140.row_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034649, VkglTestCase_034649_1, VkglTestCase_034649_2);

#define VkglTestCase_034650_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034650_2 "type.std140.row_major_mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034650, VkglTestCase_034650_1, VkglTestCase_034650_2);

#define VkglTestCase_034651_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034651_2 "type.std140.row_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034651, VkglTestCase_034651_1, VkglTestCase_034651_2);

#define VkglTestCase_034652_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034652_2 "ype.std140.row_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034652, VkglTestCase_034652_1, VkglTestCase_034652_2);

#define VkglTestCase_034653_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034653_2 "_type.std140.row_major_highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034653, VkglTestCase_034653_1, VkglTestCase_034653_2);

#define VkglTestCase_034654_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034654_2 "ype.std140.column_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034654, VkglTestCase_034654_1, VkglTestCase_034654_2);

#define VkglTestCase_034655_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034655_2 "pe.std140.column_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034655, VkglTestCase_034655_1, VkglTestCase_034655_2);

#define VkglTestCase_034656_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034656_2 "type.std140.column_major_lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034656, VkglTestCase_034656_1, VkglTestCase_034656_2);

#define VkglTestCase_034657_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034657_2 "pe.std140.column_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034657, VkglTestCase_034657_1, VkglTestCase_034657_2);

#define VkglTestCase_034658_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034658_2 "e.std140.column_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034658, VkglTestCase_034658_1, VkglTestCase_034658_2);

#define VkglTestCase_034659_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034659_2 "ype.std140.column_major_mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034659, VkglTestCase_034659_1, VkglTestCase_034659_2);

#define VkglTestCase_034660_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034660_2 "ype.std140.column_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034660, VkglTestCase_034660_1, VkglTestCase_034660_2);

#define VkglTestCase_034661_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034661_2 "pe.std140.column_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034661, VkglTestCase_034661_1, VkglTestCase_034661_2);

#define VkglTestCase_034662_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034662_2 "type.std140.column_major_highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034662, VkglTestCase_034662_1, VkglTestCase_034662_2);

#define VkglTestCase_034663_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034663_2 "basic_type.std140.lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034663, VkglTestCase_034663_1, VkglTestCase_034663_2);

#define VkglTestCase_034664_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034664_2 "asic_type.std140.lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034664, VkglTestCase_034664_1, VkglTestCase_034664_2);

#define VkglTestCase_034665_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034665_2 "_basic_type.std140.lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034665, VkglTestCase_034665_1, VkglTestCase_034665_2);

#define VkglTestCase_034666_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034666_2 "sic_type.std140.mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034666, VkglTestCase_034666_1, VkglTestCase_034666_2);

#define VkglTestCase_034667_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034667_2 "ic_type.std140.mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034667, VkglTestCase_034667_1, VkglTestCase_034667_2);

#define VkglTestCase_034668_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034668_2 "asic_type.std140.mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034668, VkglTestCase_034668_1, VkglTestCase_034668_2);

#define VkglTestCase_034669_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034669_2 "asic_type.std140.highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034669, VkglTestCase_034669_1, VkglTestCase_034669_2);

#define VkglTestCase_034670_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034670_2 "sic_type.std140.highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034670, VkglTestCase_034670_1, VkglTestCase_034670_2);

#define VkglTestCase_034671_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034671_2 "basic_type.std140.highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034671, VkglTestCase_034671_1, VkglTestCase_034671_2);

#define VkglTestCase_034672_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034672_2 "_type.std140.row_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034672, VkglTestCase_034672_1, VkglTestCase_034672_2);

#define VkglTestCase_034673_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034673_2 "type.std140.row_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034673, VkglTestCase_034673_1, VkglTestCase_034673_2);

#define VkglTestCase_034674_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034674_2 "c_type.std140.row_major_lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034674, VkglTestCase_034674_1, VkglTestCase_034674_2);

#define VkglTestCase_034675_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034675_2 "ype.std140.row_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034675, VkglTestCase_034675_1, VkglTestCase_034675_2);

#define VkglTestCase_034676_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034676_2 "pe.std140.row_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034676, VkglTestCase_034676_1, VkglTestCase_034676_2);

#define VkglTestCase_034677_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034677_2 "type.std140.row_major_mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034677, VkglTestCase_034677_1, VkglTestCase_034677_2);

#define VkglTestCase_034678_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034678_2 "type.std140.row_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034678, VkglTestCase_034678_1, VkglTestCase_034678_2);

#define VkglTestCase_034679_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034679_2 "ype.std140.row_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034679, VkglTestCase_034679_1, VkglTestCase_034679_2);

#define VkglTestCase_034680_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034680_2 "_type.std140.row_major_highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034680, VkglTestCase_034680_1, VkglTestCase_034680_2);

#define VkglTestCase_034681_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034681_2 "ype.std140.column_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034681, VkglTestCase_034681_1, VkglTestCase_034681_2);

#define VkglTestCase_034682_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034682_2 "pe.std140.column_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034682, VkglTestCase_034682_1, VkglTestCase_034682_2);

#define VkglTestCase_034683_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034683_2 "type.std140.column_major_lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034683, VkglTestCase_034683_1, VkglTestCase_034683_2);

#define VkglTestCase_034684_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034684_2 "pe.std140.column_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034684, VkglTestCase_034684_1, VkglTestCase_034684_2);

#define VkglTestCase_034685_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034685_2 "e.std140.column_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034685, VkglTestCase_034685_1, VkglTestCase_034685_2);

#define VkglTestCase_034686_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034686_2 "ype.std140.column_major_mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034686, VkglTestCase_034686_1, VkglTestCase_034686_2);

#define VkglTestCase_034687_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034687_2 "ype.std140.column_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034687, VkglTestCase_034687_1, VkglTestCase_034687_2);

#define VkglTestCase_034688_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034688_2 "pe.std140.column_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034688, VkglTestCase_034688_1, VkglTestCase_034688_2);

#define VkglTestCase_034689_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034689_2 "type.std140.column_major_highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034689, VkglTestCase_034689_1, VkglTestCase_034689_2);

#define VkglTestCase_034690_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034690_2 "asic_type.std140.lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034690, VkglTestCase_034690_1, VkglTestCase_034690_2);

#define VkglTestCase_034691_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034691_2 "sic_type.std140.lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034691, VkglTestCase_034691_1, VkglTestCase_034691_2);

#define VkglTestCase_034692_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034692_2 "basic_type.std140.lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034692, VkglTestCase_034692_1, VkglTestCase_034692_2);

#define VkglTestCase_034693_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034693_2 "ic_type.std140.mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034693, VkglTestCase_034693_1, VkglTestCase_034693_2);

#define VkglTestCase_034694_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034694_2 "c_type.std140.mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034694, VkglTestCase_034694_1, VkglTestCase_034694_2);

#define VkglTestCase_034695_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034695_2 "sic_type.std140.mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034695, VkglTestCase_034695_1, VkglTestCase_034695_2);

#define VkglTestCase_034696_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034696_2 "sic_type.std140.highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034696, VkglTestCase_034696_1, VkglTestCase_034696_2);

#define VkglTestCase_034697_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034697_2 "ic_type.std140.highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034697, VkglTestCase_034697_1, VkglTestCase_034697_2);

#define VkglTestCase_034698_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034698_2 "asic_type.std140.highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034698, VkglTestCase_034698_1, VkglTestCase_034698_2);

#define VkglTestCase_034699_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034699_2 "type.std140.row_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034699, VkglTestCase_034699_1, VkglTestCase_034699_2);

#define VkglTestCase_034700_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034700_2 "ype.std140.row_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034700, VkglTestCase_034700_1, VkglTestCase_034700_2);

#define VkglTestCase_034701_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034701_2 "_type.std140.row_major_lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034701, VkglTestCase_034701_1, VkglTestCase_034701_2);

#define VkglTestCase_034702_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034702_2 "pe.std140.row_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034702, VkglTestCase_034702_1, VkglTestCase_034702_2);

#define VkglTestCase_034703_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034703_2 "e.std140.row_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034703, VkglTestCase_034703_1, VkglTestCase_034703_2);

#define VkglTestCase_034704_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034704_2 "ype.std140.row_major_mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034704, VkglTestCase_034704_1, VkglTestCase_034704_2);

#define VkglTestCase_034705_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034705_2 "ype.std140.row_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034705, VkglTestCase_034705_1, VkglTestCase_034705_2);

#define VkglTestCase_034706_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034706_2 "pe.std140.row_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034706, VkglTestCase_034706_1, VkglTestCase_034706_2);

#define VkglTestCase_034707_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034707_2 "type.std140.row_major_highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034707, VkglTestCase_034707_1, VkglTestCase_034707_2);

#define VkglTestCase_034708_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034708_2 "pe.std140.column_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034708, VkglTestCase_034708_1, VkglTestCase_034708_2);

#define VkglTestCase_034709_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034709_2 "e.std140.column_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034709, VkglTestCase_034709_1, VkglTestCase_034709_2);

#define VkglTestCase_034710_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034710_2 "ype.std140.column_major_lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034710, VkglTestCase_034710_1, VkglTestCase_034710_2);

#define VkglTestCase_034711_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034711_2 "e.std140.column_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034711, VkglTestCase_034711_1, VkglTestCase_034711_2);

#define VkglTestCase_034712_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034712_2 ".std140.column_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034712, VkglTestCase_034712_1, VkglTestCase_034712_2);

#define VkglTestCase_034713_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034713_2 "pe.std140.column_major_mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034713, VkglTestCase_034713_1, VkglTestCase_034713_2);

#define VkglTestCase_034714_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034714_2 "pe.std140.column_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034714, VkglTestCase_034714_1, VkglTestCase_034714_2);

#define VkglTestCase_034715_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034715_2 "e.std140.column_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034715, VkglTestCase_034715_1, VkglTestCase_034715_2);

#define VkglTestCase_034716_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034716_2 "ype.std140.column_major_highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034716, VkglTestCase_034716_1, VkglTestCase_034716_2);

#define VkglTestCase_034717_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034717_2 "asic_type.std140.lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034717, VkglTestCase_034717_1, VkglTestCase_034717_2);

#define VkglTestCase_034718_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034718_2 "sic_type.std140.lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034718, VkglTestCase_034718_1, VkglTestCase_034718_2);

#define VkglTestCase_034719_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034719_2 "basic_type.std140.lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034719, VkglTestCase_034719_1, VkglTestCase_034719_2);

#define VkglTestCase_034720_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034720_2 "ic_type.std140.mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034720, VkglTestCase_034720_1, VkglTestCase_034720_2);

#define VkglTestCase_034721_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034721_2 "c_type.std140.mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034721, VkglTestCase_034721_1, VkglTestCase_034721_2);

#define VkglTestCase_034722_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034722_2 "sic_type.std140.mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034722, VkglTestCase_034722_1, VkglTestCase_034722_2);

#define VkglTestCase_034723_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034723_2 "sic_type.std140.highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034723, VkglTestCase_034723_1, VkglTestCase_034723_2);

#define VkglTestCase_034724_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034724_2 "ic_type.std140.highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034724, VkglTestCase_034724_1, VkglTestCase_034724_2);

#define VkglTestCase_034725_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034725_2 "asic_type.std140.highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034725, VkglTestCase_034725_1, VkglTestCase_034725_2);

#define VkglTestCase_034726_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034726_2 "type.std140.row_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034726, VkglTestCase_034726_1, VkglTestCase_034726_2);

#define VkglTestCase_034727_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034727_2 "ype.std140.row_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034727, VkglTestCase_034727_1, VkglTestCase_034727_2);

#define VkglTestCase_034728_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034728_2 "_type.std140.row_major_lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034728, VkglTestCase_034728_1, VkglTestCase_034728_2);

#define VkglTestCase_034729_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034729_2 "pe.std140.row_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034729, VkglTestCase_034729_1, VkglTestCase_034729_2);

#define VkglTestCase_034730_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034730_2 "e.std140.row_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034730, VkglTestCase_034730_1, VkglTestCase_034730_2);

#define VkglTestCase_034731_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034731_2 "ype.std140.row_major_mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034731, VkglTestCase_034731_1, VkglTestCase_034731_2);

#define VkglTestCase_034732_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034732_2 "ype.std140.row_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034732, VkglTestCase_034732_1, VkglTestCase_034732_2);

#define VkglTestCase_034733_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034733_2 "pe.std140.row_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034733, VkglTestCase_034733_1, VkglTestCase_034733_2);

#define VkglTestCase_034734_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034734_2 "type.std140.row_major_highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034734, VkglTestCase_034734_1, VkglTestCase_034734_2);

#define VkglTestCase_034735_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034735_2 "pe.std140.column_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034735, VkglTestCase_034735_1, VkglTestCase_034735_2);

#define VkglTestCase_034736_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034736_2 "e.std140.column_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034736, VkglTestCase_034736_1, VkglTestCase_034736_2);

#define VkglTestCase_034737_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034737_2 "ype.std140.column_major_lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034737, VkglTestCase_034737_1, VkglTestCase_034737_2);

#define VkglTestCase_034738_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034738_2 "e.std140.column_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034738, VkglTestCase_034738_1, VkglTestCase_034738_2);

#define VkglTestCase_034739_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034739_2 ".std140.column_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034739, VkglTestCase_034739_1, VkglTestCase_034739_2);

#define VkglTestCase_034740_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034740_2 "pe.std140.column_major_mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034740, VkglTestCase_034740_1, VkglTestCase_034740_2);

#define VkglTestCase_034741_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034741_2 "pe.std140.column_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034741, VkglTestCase_034741_1, VkglTestCase_034741_2);

#define VkglTestCase_034742_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034742_2 "e.std140.column_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034742, VkglTestCase_034742_1, VkglTestCase_034742_2);

#define VkglTestCase_034743_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034743_2 "ype.std140.column_major_highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034743, VkglTestCase_034743_1, VkglTestCase_034743_2);

#define VkglTestCase_034744_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034744_2 "asic_type.std140.lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034744, VkglTestCase_034744_1, VkglTestCase_034744_2);

#define VkglTestCase_034745_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034745_2 "sic_type.std140.lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034745, VkglTestCase_034745_1, VkglTestCase_034745_2);

#define VkglTestCase_034746_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034746_2 "basic_type.std140.lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034746, VkglTestCase_034746_1, VkglTestCase_034746_2);

#define VkglTestCase_034747_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034747_2 "ic_type.std140.mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034747, VkglTestCase_034747_1, VkglTestCase_034747_2);

#define VkglTestCase_034748_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034748_2 "c_type.std140.mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034748, VkglTestCase_034748_1, VkglTestCase_034748_2);

#define VkglTestCase_034749_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034749_2 "sic_type.std140.mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034749, VkglTestCase_034749_1, VkglTestCase_034749_2);

#define VkglTestCase_034750_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034750_2 "sic_type.std140.highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034750, VkglTestCase_034750_1, VkglTestCase_034750_2);

#define VkglTestCase_034751_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034751_2 "ic_type.std140.highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034751, VkglTestCase_034751_1, VkglTestCase_034751_2);

#define VkglTestCase_034752_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034752_2 "asic_type.std140.highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034752, VkglTestCase_034752_1, VkglTestCase_034752_2);

#define VkglTestCase_034753_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034753_2 "type.std140.row_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034753, VkglTestCase_034753_1, VkglTestCase_034753_2);

#define VkglTestCase_034754_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034754_2 "ype.std140.row_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034754, VkglTestCase_034754_1, VkglTestCase_034754_2);

#define VkglTestCase_034755_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034755_2 "_type.std140.row_major_lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034755, VkglTestCase_034755_1, VkglTestCase_034755_2);

#define VkglTestCase_034756_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034756_2 "pe.std140.row_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034756, VkglTestCase_034756_1, VkglTestCase_034756_2);

#define VkglTestCase_034757_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034757_2 "e.std140.row_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034757, VkglTestCase_034757_1, VkglTestCase_034757_2);

#define VkglTestCase_034758_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034758_2 "ype.std140.row_major_mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034758, VkglTestCase_034758_1, VkglTestCase_034758_2);

#define VkglTestCase_034759_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034759_2 "ype.std140.row_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034759, VkglTestCase_034759_1, VkglTestCase_034759_2);

#define VkglTestCase_034760_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034760_2 "pe.std140.row_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034760, VkglTestCase_034760_1, VkglTestCase_034760_2);

#define VkglTestCase_034761_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034761_2 "type.std140.row_major_highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034761, VkglTestCase_034761_1, VkglTestCase_034761_2);

#define VkglTestCase_034762_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034762_2 "pe.std140.column_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034762, VkglTestCase_034762_1, VkglTestCase_034762_2);

#define VkglTestCase_034763_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034763_2 "e.std140.column_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034763, VkglTestCase_034763_1, VkglTestCase_034763_2);

#define VkglTestCase_034764_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034764_2 "ype.std140.column_major_lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034764, VkglTestCase_034764_1, VkglTestCase_034764_2);

#define VkglTestCase_034765_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034765_2 "e.std140.column_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034765, VkglTestCase_034765_1, VkglTestCase_034765_2);

#define VkglTestCase_034766_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034766_2 ".std140.column_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034766, VkglTestCase_034766_1, VkglTestCase_034766_2);

#define VkglTestCase_034767_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034767_2 "pe.std140.column_major_mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034767, VkglTestCase_034767_1, VkglTestCase_034767_2);

#define VkglTestCase_034768_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034768_2 "pe.std140.column_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034768, VkglTestCase_034768_1, VkglTestCase_034768_2);

#define VkglTestCase_034769_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034769_2 "e.std140.column_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034769, VkglTestCase_034769_1, VkglTestCase_034769_2);

#define VkglTestCase_034770_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034770_2 "ype.std140.column_major_highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034770, VkglTestCase_034770_1, VkglTestCase_034770_2);

#define VkglTestCase_034771_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034771_2 "asic_type.std140.lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034771, VkglTestCase_034771_1, VkglTestCase_034771_2);

#define VkglTestCase_034772_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034772_2 "sic_type.std140.lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034772, VkglTestCase_034772_1, VkglTestCase_034772_2);

#define VkglTestCase_034773_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034773_2 "basic_type.std140.lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034773, VkglTestCase_034773_1, VkglTestCase_034773_2);

#define VkglTestCase_034774_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034774_2 "ic_type.std140.mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034774, VkglTestCase_034774_1, VkglTestCase_034774_2);

#define VkglTestCase_034775_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034775_2 "c_type.std140.mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034775, VkglTestCase_034775_1, VkglTestCase_034775_2);

#define VkglTestCase_034776_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034776_2 "sic_type.std140.mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034776, VkglTestCase_034776_1, VkglTestCase_034776_2);

#define VkglTestCase_034777_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034777_2 "sic_type.std140.highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034777, VkglTestCase_034777_1, VkglTestCase_034777_2);

#define VkglTestCase_034778_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034778_2 "ic_type.std140.highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034778, VkglTestCase_034778_1, VkglTestCase_034778_2);

#define VkglTestCase_034779_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034779_2 "asic_type.std140.highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034779, VkglTestCase_034779_1, VkglTestCase_034779_2);

#define VkglTestCase_034780_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034780_2 "type.std140.row_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034780, VkglTestCase_034780_1, VkglTestCase_034780_2);

#define VkglTestCase_034781_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034781_2 "ype.std140.row_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034781, VkglTestCase_034781_1, VkglTestCase_034781_2);

#define VkglTestCase_034782_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034782_2 "_type.std140.row_major_lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034782, VkglTestCase_034782_1, VkglTestCase_034782_2);

#define VkglTestCase_034783_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034783_2 "pe.std140.row_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034783, VkglTestCase_034783_1, VkglTestCase_034783_2);

#define VkglTestCase_034784_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034784_2 "e.std140.row_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034784, VkglTestCase_034784_1, VkglTestCase_034784_2);

#define VkglTestCase_034785_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034785_2 "ype.std140.row_major_mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034785, VkglTestCase_034785_1, VkglTestCase_034785_2);

#define VkglTestCase_034786_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034786_2 "ype.std140.row_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034786, VkglTestCase_034786_1, VkglTestCase_034786_2);

#define VkglTestCase_034787_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034787_2 "pe.std140.row_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034787, VkglTestCase_034787_1, VkglTestCase_034787_2);

#define VkglTestCase_034788_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034788_2 "type.std140.row_major_highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034788, VkglTestCase_034788_1, VkglTestCase_034788_2);

#define VkglTestCase_034789_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034789_2 "pe.std140.column_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034789, VkglTestCase_034789_1, VkglTestCase_034789_2);

#define VkglTestCase_034790_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034790_2 "e.std140.column_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034790, VkglTestCase_034790_1, VkglTestCase_034790_2);

#define VkglTestCase_034791_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034791_2 "ype.std140.column_major_lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034791, VkglTestCase_034791_1, VkglTestCase_034791_2);

#define VkglTestCase_034792_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034792_2 "e.std140.column_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034792, VkglTestCase_034792_1, VkglTestCase_034792_2);

#define VkglTestCase_034793_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034793_2 ".std140.column_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034793, VkglTestCase_034793_1, VkglTestCase_034793_2);

#define VkglTestCase_034794_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034794_2 "pe.std140.column_major_mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034794, VkglTestCase_034794_1, VkglTestCase_034794_2);

#define VkglTestCase_034795_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034795_2 "pe.std140.column_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034795, VkglTestCase_034795_1, VkglTestCase_034795_2);

#define VkglTestCase_034796_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034796_2 "e.std140.column_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034796, VkglTestCase_034796_1, VkglTestCase_034796_2);

#define VkglTestCase_034797_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034797_2 "ype.std140.column_major_highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034797, VkglTestCase_034797_1, VkglTestCase_034797_2);

#define VkglTestCase_034798_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034798_2 "asic_type.std140.lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034798, VkglTestCase_034798_1, VkglTestCase_034798_2);

#define VkglTestCase_034799_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034799_2 "sic_type.std140.lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034799, VkglTestCase_034799_1, VkglTestCase_034799_2);

#define VkglTestCase_034800_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034800_2 "basic_type.std140.lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034800, VkglTestCase_034800_1, VkglTestCase_034800_2);

#define VkglTestCase_034801_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034801_2 "ic_type.std140.mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034801, VkglTestCase_034801_1, VkglTestCase_034801_2);

#define VkglTestCase_034802_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034802_2 "c_type.std140.mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034802, VkglTestCase_034802_1, VkglTestCase_034802_2);

#define VkglTestCase_034803_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034803_2 "sic_type.std140.mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034803, VkglTestCase_034803_1, VkglTestCase_034803_2);

#define VkglTestCase_034804_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034804_2 "sic_type.std140.highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034804, VkglTestCase_034804_1, VkglTestCase_034804_2);

#define VkglTestCase_034805_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034805_2 "ic_type.std140.highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034805, VkglTestCase_034805_1, VkglTestCase_034805_2);

#define VkglTestCase_034806_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034806_2 "asic_type.std140.highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034806, VkglTestCase_034806_1, VkglTestCase_034806_2);

#define VkglTestCase_034807_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034807_2 "type.std140.row_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034807, VkglTestCase_034807_1, VkglTestCase_034807_2);

#define VkglTestCase_034808_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034808_2 "ype.std140.row_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034808, VkglTestCase_034808_1, VkglTestCase_034808_2);

#define VkglTestCase_034809_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034809_2 "_type.std140.row_major_lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034809, VkglTestCase_034809_1, VkglTestCase_034809_2);

#define VkglTestCase_034810_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034810_2 "pe.std140.row_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034810, VkglTestCase_034810_1, VkglTestCase_034810_2);

#define VkglTestCase_034811_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034811_2 "e.std140.row_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034811, VkglTestCase_034811_1, VkglTestCase_034811_2);

#define VkglTestCase_034812_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034812_2 "ype.std140.row_major_mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034812, VkglTestCase_034812_1, VkglTestCase_034812_2);

#define VkglTestCase_034813_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034813_2 "ype.std140.row_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034813, VkglTestCase_034813_1, VkglTestCase_034813_2);

#define VkglTestCase_034814_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034814_2 "pe.std140.row_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034814, VkglTestCase_034814_1, VkglTestCase_034814_2);

#define VkglTestCase_034815_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034815_2 "type.std140.row_major_highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034815, VkglTestCase_034815_1, VkglTestCase_034815_2);

#define VkglTestCase_034816_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034816_2 "pe.std140.column_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034816, VkglTestCase_034816_1, VkglTestCase_034816_2);

#define VkglTestCase_034817_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034817_2 "e.std140.column_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034817, VkglTestCase_034817_1, VkglTestCase_034817_2);

#define VkglTestCase_034818_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034818_2 "ype.std140.column_major_lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034818, VkglTestCase_034818_1, VkglTestCase_034818_2);

#define VkglTestCase_034819_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034819_2 "e.std140.column_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034819, VkglTestCase_034819_1, VkglTestCase_034819_2);

#define VkglTestCase_034820_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034820_2 ".std140.column_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034820, VkglTestCase_034820_1, VkglTestCase_034820_2);

#define VkglTestCase_034821_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034821_2 "pe.std140.column_major_mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034821, VkglTestCase_034821_1, VkglTestCase_034821_2);

#define VkglTestCase_034822_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034822_2 "pe.std140.column_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034822, VkglTestCase_034822_1, VkglTestCase_034822_2);

#define VkglTestCase_034823_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034823_2 "e.std140.column_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034823, VkglTestCase_034823_1, VkglTestCase_034823_2);

#define VkglTestCase_034824_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034824_2 "ype.std140.column_major_highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034824, VkglTestCase_034824_1, VkglTestCase_034824_2);

#define VkglTestCase_034825_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034825_2 "asic_type.std140.lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034825, VkglTestCase_034825_1, VkglTestCase_034825_2);

#define VkglTestCase_034826_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034826_2 "sic_type.std140.lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034826, VkglTestCase_034826_1, VkglTestCase_034826_2);

#define VkglTestCase_034827_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034827_2 "basic_type.std140.lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034827, VkglTestCase_034827_1, VkglTestCase_034827_2);

#define VkglTestCase_034828_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034828_2 "ic_type.std140.mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034828, VkglTestCase_034828_1, VkglTestCase_034828_2);

#define VkglTestCase_034829_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034829_2 "c_type.std140.mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034829, VkglTestCase_034829_1, VkglTestCase_034829_2);

#define VkglTestCase_034830_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034830_2 "sic_type.std140.mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034830, VkglTestCase_034830_1, VkglTestCase_034830_2);

#define VkglTestCase_034831_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034831_2 "sic_type.std140.highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034831, VkglTestCase_034831_1, VkglTestCase_034831_2);

#define VkglTestCase_034832_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034832_2 "ic_type.std140.highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034832, VkglTestCase_034832_1, VkglTestCase_034832_2);

#define VkglTestCase_034833_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034833_2 "asic_type.std140.highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034833, VkglTestCase_034833_1, VkglTestCase_034833_2);

#define VkglTestCase_034834_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034834_2 "type.std140.row_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034834, VkglTestCase_034834_1, VkglTestCase_034834_2);

#define VkglTestCase_034835_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034835_2 "ype.std140.row_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034835, VkglTestCase_034835_1, VkglTestCase_034835_2);

#define VkglTestCase_034836_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034836_2 "_type.std140.row_major_lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034836, VkglTestCase_034836_1, VkglTestCase_034836_2);

#define VkglTestCase_034837_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034837_2 "pe.std140.row_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034837, VkglTestCase_034837_1, VkglTestCase_034837_2);

#define VkglTestCase_034838_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034838_2 "e.std140.row_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034838, VkglTestCase_034838_1, VkglTestCase_034838_2);

#define VkglTestCase_034839_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034839_2 "ype.std140.row_major_mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034839, VkglTestCase_034839_1, VkglTestCase_034839_2);

#define VkglTestCase_034840_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034840_2 "ype.std140.row_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034840, VkglTestCase_034840_1, VkglTestCase_034840_2);

#define VkglTestCase_034841_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034841_2 "pe.std140.row_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034841, VkglTestCase_034841_1, VkglTestCase_034841_2);

#define VkglTestCase_034842_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034842_2 "type.std140.row_major_highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034842, VkglTestCase_034842_1, VkglTestCase_034842_2);

#define VkglTestCase_034843_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034843_2 "pe.std140.column_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034843, VkglTestCase_034843_1, VkglTestCase_034843_2);

#define VkglTestCase_034844_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034844_2 "e.std140.column_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034844, VkglTestCase_034844_1, VkglTestCase_034844_2);

#define VkglTestCase_034845_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034845_2 "ype.std140.column_major_lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034845, VkglTestCase_034845_1, VkglTestCase_034845_2);

#define VkglTestCase_034846_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034846_2 "e.std140.column_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034846, VkglTestCase_034846_1, VkglTestCase_034846_2);

#define VkglTestCase_034847_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034847_2 ".std140.column_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034847, VkglTestCase_034847_1, VkglTestCase_034847_2);

#define VkglTestCase_034848_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034848_2 "pe.std140.column_major_mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034848, VkglTestCase_034848_1, VkglTestCase_034848_2);

#define VkglTestCase_034849_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034849_2 "pe.std140.column_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034849, VkglTestCase_034849_1, VkglTestCase_034849_2);

#define VkglTestCase_034850_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034850_2 "e.std140.column_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034850, VkglTestCase_034850_1, VkglTestCase_034850_2);

#define VkglTestCase_034851_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034851_2 "ype.std140.column_major_highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034851, VkglTestCase_034851_1, VkglTestCase_034851_2);
