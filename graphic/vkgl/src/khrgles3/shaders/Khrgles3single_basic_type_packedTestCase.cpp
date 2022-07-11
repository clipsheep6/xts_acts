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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001597_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001597_2 "ingle_basic_type.packed.lowp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001597, VkglTestCase_001597_1, VkglTestCase_001597_2);

#define VkglTestCase_001598_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001598_2 "gle_basic_type.packed.mediump_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001598, VkglTestCase_001598_1, VkglTestCase_001598_2);

#define VkglTestCase_001599_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001599_2 "ngle_basic_type.packed.highp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001599, VkglTestCase_001599_1, VkglTestCase_001599_2);

#define VkglTestCase_001600_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001600_2 "ingle_basic_type.packed.lowp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001600, VkglTestCase_001600_1, VkglTestCase_001600_2);

#define VkglTestCase_001601_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001601_2 "ngle_basic_type.packed.mediump_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001601, VkglTestCase_001601_1, VkglTestCase_001601_2);

#define VkglTestCase_001602_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001602_2 "ingle_basic_type.packed.highp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001602, VkglTestCase_001602_1, VkglTestCase_001602_2);

#define VkglTestCase_001603_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001603_2 "ingle_basic_type.packed.lowp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001603, VkglTestCase_001603_1, VkglTestCase_001603_2);

#define VkglTestCase_001604_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001604_2 "ngle_basic_type.packed.mediump_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001604, VkglTestCase_001604_1, VkglTestCase_001604_2);

#define VkglTestCase_001605_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001605_2 "ingle_basic_type.packed.highp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001605, VkglTestCase_001605_1, VkglTestCase_001605_2);

#define VkglTestCase_001606_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001606_2 "ingle_basic_type.packed.lowp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001606, VkglTestCase_001606_1, VkglTestCase_001606_2);

#define VkglTestCase_001607_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001607_2 "ngle_basic_type.packed.mediump_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001607, VkglTestCase_001607_1, VkglTestCase_001607_2);

#define VkglTestCase_001608_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001608_2 "ingle_basic_type.packed.highp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001608, VkglTestCase_001608_1, VkglTestCase_001608_2);

#define VkglTestCase_001609_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001609_2 "single_basic_type.packed.lowp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001609, VkglTestCase_001609_1, VkglTestCase_001609_2);

#define VkglTestCase_001610_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001610_2 "ngle_basic_type.packed.mediump_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001610, VkglTestCase_001610_1, VkglTestCase_001610_2);

#define VkglTestCase_001611_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001611_2 "ingle_basic_type.packed.highp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001611, VkglTestCase_001611_1, VkglTestCase_001611_2);

#define VkglTestCase_001612_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001612_2 "ingle_basic_type.packed.lowp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001612, VkglTestCase_001612_1, VkglTestCase_001612_2);

#define VkglTestCase_001613_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001613_2 "gle_basic_type.packed.mediump_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001613, VkglTestCase_001613_1, VkglTestCase_001613_2);

#define VkglTestCase_001614_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001614_2 "ngle_basic_type.packed.highp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001614, VkglTestCase_001614_1, VkglTestCase_001614_2);

#define VkglTestCase_001615_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001615_2 "ingle_basic_type.packed.lowp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001615, VkglTestCase_001615_1, VkglTestCase_001615_2);

#define VkglTestCase_001616_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001616_2 "gle_basic_type.packed.mediump_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001616, VkglTestCase_001616_1, VkglTestCase_001616_2);

#define VkglTestCase_001617_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001617_2 "ngle_basic_type.packed.highp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001617, VkglTestCase_001617_1, VkglTestCase_001617_2);

#define VkglTestCase_001618_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001618_2 "ingle_basic_type.packed.lowp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001618, VkglTestCase_001618_1, VkglTestCase_001618_2);

#define VkglTestCase_001619_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001619_2 "gle_basic_type.packed.mediump_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001619, VkglTestCase_001619_1, VkglTestCase_001619_2);

#define VkglTestCase_001620_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001620_2 "ngle_basic_type.packed.highp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001620, VkglTestCase_001620_1, VkglTestCase_001620_2);

#define VkglTestCase_001621_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001621_2 "ingle_basic_type.packed.lowp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001621, VkglTestCase_001621_1, VkglTestCase_001621_2);

#define VkglTestCase_001622_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001622_2 "ngle_basic_type.packed.mediump_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001622, VkglTestCase_001622_1, VkglTestCase_001622_2);

#define VkglTestCase_001623_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001623_2 "ingle_basic_type.packed.highp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001623, VkglTestCase_001623_1, VkglTestCase_001623_2);

#define VkglTestCase_001624_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001624_2 "ingle_basic_type.packed.lowp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001624, VkglTestCase_001624_1, VkglTestCase_001624_2);

#define VkglTestCase_001625_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001625_2 "gle_basic_type.packed.mediump_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001625, VkglTestCase_001625_1, VkglTestCase_001625_2);

#define VkglTestCase_001626_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001626_2 "ngle_basic_type.packed.highp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001626, VkglTestCase_001626_1, VkglTestCase_001626_2);

#define VkglTestCase_001627_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001627_2 "ingle_basic_type.packed.lowp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001627, VkglTestCase_001627_1, VkglTestCase_001627_2);

#define VkglTestCase_001628_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001628_2 "gle_basic_type.packed.mediump_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001628, VkglTestCase_001628_1, VkglTestCase_001628_2);

#define VkglTestCase_001629_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001629_2 "ngle_basic_type.packed.highp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001629, VkglTestCase_001629_1, VkglTestCase_001629_2);

#define VkglTestCase_001630_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001630_2 "ingle_basic_type.packed.lowp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001630, VkglTestCase_001630_1, VkglTestCase_001630_2);

#define VkglTestCase_001631_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001631_2 "gle_basic_type.packed.mediump_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001631, VkglTestCase_001631_1, VkglTestCase_001631_2);

#define VkglTestCase_001632_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001632_2 "ngle_basic_type.packed.highp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001632, VkglTestCase_001632_1, VkglTestCase_001632_2);

#define VkglTestCase_001633_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001633_2 "k.single_basic_type.packed.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001633, VkglTestCase_001633_1, VkglTestCase_001633_2);

#define VkglTestCase_001634_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001634_2 ".single_basic_type.packed.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001634, VkglTestCase_001634_1, VkglTestCase_001634_2);

#define VkglTestCase_001635_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001635_2 ".single_basic_type.packed.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001635, VkglTestCase_001635_1, VkglTestCase_001635_2);

#define VkglTestCase_001636_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001636_2 ".single_basic_type.packed.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001636, VkglTestCase_001636_1, VkglTestCase_001636_2);

#define VkglTestCase_001637_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001637_2 "ingle_basic_type.packed.lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001637, VkglTestCase_001637_1, VkglTestCase_001637_2);

#define VkglTestCase_001638_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001638_2 "ngle_basic_type.packed.mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001638, VkglTestCase_001638_1, VkglTestCase_001638_2);

#define VkglTestCase_001639_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001639_2 "ingle_basic_type.packed.highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001639, VkglTestCase_001639_1, VkglTestCase_001639_2);

#define VkglTestCase_001640_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001640_2 "_basic_type.packed.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001640, VkglTestCase_001640_1, VkglTestCase_001640_2);

#define VkglTestCase_001641_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001641_2 "basic_type.packed.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001641, VkglTestCase_001641_1, VkglTestCase_001641_2);

#define VkglTestCase_001642_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001642_2 "_basic_type.packed.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001642, VkglTestCase_001642_1, VkglTestCase_001642_2);

#define VkglTestCase_001643_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001643_2 "basic_type.packed.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001643, VkglTestCase_001643_1, VkglTestCase_001643_2);

#define VkglTestCase_001644_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001644_2 "sic_type.packed.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001644, VkglTestCase_001644_1, VkglTestCase_001644_2);

#define VkglTestCase_001645_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001645_2 "asic_type.packed.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001645, VkglTestCase_001645_1, VkglTestCase_001645_2);

#define VkglTestCase_001646_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001646_2 "ingle_basic_type.packed.lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001646, VkglTestCase_001646_1, VkglTestCase_001646_2);

#define VkglTestCase_001647_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001647_2 "ngle_basic_type.packed.mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001647, VkglTestCase_001647_1, VkglTestCase_001647_2);

#define VkglTestCase_001648_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001648_2 "ingle_basic_type.packed.highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001648, VkglTestCase_001648_1, VkglTestCase_001648_2);

#define VkglTestCase_001649_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001649_2 "_basic_type.packed.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001649, VkglTestCase_001649_1, VkglTestCase_001649_2);

#define VkglTestCase_001650_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001650_2 "basic_type.packed.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001650, VkglTestCase_001650_1, VkglTestCase_001650_2);

#define VkglTestCase_001651_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001651_2 "_basic_type.packed.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001651, VkglTestCase_001651_1, VkglTestCase_001651_2);

#define VkglTestCase_001652_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001652_2 "basic_type.packed.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001652, VkglTestCase_001652_1, VkglTestCase_001652_2);

#define VkglTestCase_001653_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001653_2 "sic_type.packed.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001653, VkglTestCase_001653_1, VkglTestCase_001653_2);

#define VkglTestCase_001654_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001654_2 "asic_type.packed.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001654, VkglTestCase_001654_1, VkglTestCase_001654_2);

#define VkglTestCase_001655_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001655_2 "ingle_basic_type.packed.lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001655, VkglTestCase_001655_1, VkglTestCase_001655_2);

#define VkglTestCase_001656_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001656_2 "ngle_basic_type.packed.mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001656, VkglTestCase_001656_1, VkglTestCase_001656_2);

#define VkglTestCase_001657_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001657_2 "ingle_basic_type.packed.highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001657, VkglTestCase_001657_1, VkglTestCase_001657_2);

#define VkglTestCase_001658_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001658_2 "_basic_type.packed.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001658, VkglTestCase_001658_1, VkglTestCase_001658_2);

#define VkglTestCase_001659_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001659_2 "basic_type.packed.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001659, VkglTestCase_001659_1, VkglTestCase_001659_2);

#define VkglTestCase_001660_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001660_2 "_basic_type.packed.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001660, VkglTestCase_001660_1, VkglTestCase_001660_2);

#define VkglTestCase_001661_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001661_2 "basic_type.packed.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001661, VkglTestCase_001661_1, VkglTestCase_001661_2);

#define VkglTestCase_001662_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001662_2 "sic_type.packed.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001662, VkglTestCase_001662_1, VkglTestCase_001662_2);

#define VkglTestCase_001663_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001663_2 "asic_type.packed.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001663, VkglTestCase_001663_1, VkglTestCase_001663_2);

#define VkglTestCase_001664_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001664_2 "ngle_basic_type.packed.lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001664, VkglTestCase_001664_1, VkglTestCase_001664_2);

#define VkglTestCase_001665_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001665_2 "gle_basic_type.packed.mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001665, VkglTestCase_001665_1, VkglTestCase_001665_2);

#define VkglTestCase_001666_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001666_2 "ngle_basic_type.packed.highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001666, VkglTestCase_001666_1, VkglTestCase_001666_2);

#define VkglTestCase_001667_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001667_2 "basic_type.packed.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001667, VkglTestCase_001667_1, VkglTestCase_001667_2);

#define VkglTestCase_001668_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001668_2 "asic_type.packed.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001668, VkglTestCase_001668_1, VkglTestCase_001668_2);

#define VkglTestCase_001669_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001669_2 "basic_type.packed.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001669, VkglTestCase_001669_1, VkglTestCase_001669_2);

#define VkglTestCase_001670_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001670_2 "asic_type.packed.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001670, VkglTestCase_001670_1, VkglTestCase_001670_2);

#define VkglTestCase_001671_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001671_2 "ic_type.packed.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001671, VkglTestCase_001671_1, VkglTestCase_001671_2);

#define VkglTestCase_001672_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001672_2 "sic_type.packed.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001672, VkglTestCase_001672_1, VkglTestCase_001672_2);

#define VkglTestCase_001673_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001673_2 "ngle_basic_type.packed.lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001673, VkglTestCase_001673_1, VkglTestCase_001673_2);

#define VkglTestCase_001674_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001674_2 "gle_basic_type.packed.mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001674, VkglTestCase_001674_1, VkglTestCase_001674_2);

#define VkglTestCase_001675_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001675_2 "ngle_basic_type.packed.highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001675, VkglTestCase_001675_1, VkglTestCase_001675_2);

#define VkglTestCase_001676_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001676_2 "basic_type.packed.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001676, VkglTestCase_001676_1, VkglTestCase_001676_2);

#define VkglTestCase_001677_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001677_2 "asic_type.packed.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001677, VkglTestCase_001677_1, VkglTestCase_001677_2);

#define VkglTestCase_001678_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001678_2 "basic_type.packed.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001678, VkglTestCase_001678_1, VkglTestCase_001678_2);

#define VkglTestCase_001679_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001679_2 "asic_type.packed.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001679, VkglTestCase_001679_1, VkglTestCase_001679_2);

#define VkglTestCase_001680_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001680_2 "ic_type.packed.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001680, VkglTestCase_001680_1, VkglTestCase_001680_2);

#define VkglTestCase_001681_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001681_2 "sic_type.packed.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001681, VkglTestCase_001681_1, VkglTestCase_001681_2);

#define VkglTestCase_001682_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001682_2 "ngle_basic_type.packed.lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001682, VkglTestCase_001682_1, VkglTestCase_001682_2);

#define VkglTestCase_001683_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001683_2 "gle_basic_type.packed.mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001683, VkglTestCase_001683_1, VkglTestCase_001683_2);

#define VkglTestCase_001684_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001684_2 "ngle_basic_type.packed.highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001684, VkglTestCase_001684_1, VkglTestCase_001684_2);

#define VkglTestCase_001685_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001685_2 "basic_type.packed.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001685, VkglTestCase_001685_1, VkglTestCase_001685_2);

#define VkglTestCase_001686_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001686_2 "asic_type.packed.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001686, VkglTestCase_001686_1, VkglTestCase_001686_2);

#define VkglTestCase_001687_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001687_2 "basic_type.packed.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001687, VkglTestCase_001687_1, VkglTestCase_001687_2);

#define VkglTestCase_001688_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001688_2 "asic_type.packed.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001688, VkglTestCase_001688_1, VkglTestCase_001688_2);

#define VkglTestCase_001689_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001689_2 "ic_type.packed.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001689, VkglTestCase_001689_1, VkglTestCase_001689_2);

#define VkglTestCase_001690_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001690_2 "sic_type.packed.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001690, VkglTestCase_001690_1, VkglTestCase_001690_2);

#define VkglTestCase_001691_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001691_2 "ngle_basic_type.packed.lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001691, VkglTestCase_001691_1, VkglTestCase_001691_2);

#define VkglTestCase_001692_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001692_2 "gle_basic_type.packed.mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001692, VkglTestCase_001692_1, VkglTestCase_001692_2);

#define VkglTestCase_001693_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001693_2 "ngle_basic_type.packed.highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001693, VkglTestCase_001693_1, VkglTestCase_001693_2);

#define VkglTestCase_001694_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001694_2 "basic_type.packed.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001694, VkglTestCase_001694_1, VkglTestCase_001694_2);

#define VkglTestCase_001695_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001695_2 "asic_type.packed.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001695, VkglTestCase_001695_1, VkglTestCase_001695_2);

#define VkglTestCase_001696_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001696_2 "basic_type.packed.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001696, VkglTestCase_001696_1, VkglTestCase_001696_2);

#define VkglTestCase_001697_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001697_2 "asic_type.packed.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001697, VkglTestCase_001697_1, VkglTestCase_001697_2);

#define VkglTestCase_001698_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001698_2 "ic_type.packed.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001698, VkglTestCase_001698_1, VkglTestCase_001698_2);

#define VkglTestCase_001699_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001699_2 "sic_type.packed.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001699, VkglTestCase_001699_1, VkglTestCase_001699_2);

#define VkglTestCase_001700_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001700_2 "ngle_basic_type.packed.lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001700, VkglTestCase_001700_1, VkglTestCase_001700_2);

#define VkglTestCase_001701_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001701_2 "gle_basic_type.packed.mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001701, VkglTestCase_001701_1, VkglTestCase_001701_2);

#define VkglTestCase_001702_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001702_2 "ngle_basic_type.packed.highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001702, VkglTestCase_001702_1, VkglTestCase_001702_2);

#define VkglTestCase_001703_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001703_2 "basic_type.packed.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001703, VkglTestCase_001703_1, VkglTestCase_001703_2);

#define VkglTestCase_001704_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001704_2 "asic_type.packed.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001704, VkglTestCase_001704_1, VkglTestCase_001704_2);

#define VkglTestCase_001705_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001705_2 "basic_type.packed.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001705, VkglTestCase_001705_1, VkglTestCase_001705_2);

#define VkglTestCase_001706_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001706_2 "asic_type.packed.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001706, VkglTestCase_001706_1, VkglTestCase_001706_2);

#define VkglTestCase_001707_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001707_2 "ic_type.packed.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001707, VkglTestCase_001707_1, VkglTestCase_001707_2);

#define VkglTestCase_001708_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001708_2 "sic_type.packed.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001708, VkglTestCase_001708_1, VkglTestCase_001708_2);

#define VkglTestCase_001709_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001709_2 "ngle_basic_type.packed.lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001709, VkglTestCase_001709_1, VkglTestCase_001709_2);

#define VkglTestCase_001710_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001710_2 "gle_basic_type.packed.mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001710, VkglTestCase_001710_1, VkglTestCase_001710_2);

#define VkglTestCase_001711_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001711_2 "ngle_basic_type.packed.highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001711, VkglTestCase_001711_1, VkglTestCase_001711_2);

#define VkglTestCase_001712_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001712_2 "basic_type.packed.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001712, VkglTestCase_001712_1, VkglTestCase_001712_2);

#define VkglTestCase_001713_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001713_2 "asic_type.packed.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001713, VkglTestCase_001713_1, VkglTestCase_001713_2);

#define VkglTestCase_001714_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001714_2 "basic_type.packed.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001714, VkglTestCase_001714_1, VkglTestCase_001714_2);

#define VkglTestCase_001715_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001715_2 "asic_type.packed.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001715, VkglTestCase_001715_1, VkglTestCase_001715_2);

#define VkglTestCase_001716_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001716_2 "ic_type.packed.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001716, VkglTestCase_001716_1, VkglTestCase_001716_2);

#define VkglTestCase_001717_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001717_2 "sic_type.packed.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001717, VkglTestCase_001717_1, VkglTestCase_001717_2);
