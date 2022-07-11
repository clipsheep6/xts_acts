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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016675_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016675_2 "ointer.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016675, VkglTestCase_016675_1, VkglTestCase_016675_2);

#define VkglTestCase_016676_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016676_2 "inter.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016676, VkglTestCase_016676_1, VkglTestCase_016676_2);

#define VkglTestCase_016677_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016677_2 "pointer.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016677, VkglTestCase_016677_1, VkglTestCase_016677_2);

#define VkglTestCase_016678_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016678_2 "pointer.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016678, VkglTestCase_016678_1, VkglTestCase_016678_2);

#define VkglTestCase_016679_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016679_2 "ointer.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016679, VkglTestCase_016679_1, VkglTestCase_016679_2);

#define VkglTestCase_016680_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016680_2 "_pointer.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016680, VkglTestCase_016680_1, VkglTestCase_016680_2);

#define VkglTestCase_016681_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016681_2 "pointer.get_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016681, VkglTestCase_016681_1, VkglTestCase_016681_2);

#define VkglTestCase_016682_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016682_2 "ointer.get_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016682, VkglTestCase_016682_1, VkglTestCase_016682_2);

#define VkglTestCase_016683_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016683_2 "_pointer.get_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016683, VkglTestCase_016683_1, VkglTestCase_016683_2);

#define VkglTestCase_016684_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016684_2 "er.get_uniform.basic_array.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016684, VkglTestCase_016684_1, VkglTestCase_016684_2);

#define VkglTestCase_016685_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016685_2 "r.get_uniform.basic_array.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016685, VkglTestCase_016685_1, VkglTestCase_016685_2);

#define VkglTestCase_016686_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016686_2 "ter.get_uniform.basic_array.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016686, VkglTestCase_016686_1, VkglTestCase_016686_2);

#define VkglTestCase_016687_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016687_2 "pointer.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016687, VkglTestCase_016687_1, VkglTestCase_016687_2);

#define VkglTestCase_016688_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016688_2 "ointer.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016688, VkglTestCase_016688_1, VkglTestCase_016688_2);

#define VkglTestCase_016689_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016689_2 "_pointer.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016689, VkglTestCase_016689_1, VkglTestCase_016689_2);

#define VkglTestCase_016690_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016690_2 "ointer.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016690, VkglTestCase_016690_1, VkglTestCase_016690_2);

#define VkglTestCase_016691_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016691_2 "inter.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016691, VkglTestCase_016691_1, VkglTestCase_016691_2);

#define VkglTestCase_016692_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016692_2 "pointer.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016692, VkglTestCase_016692_1, VkglTestCase_016692_2);

#define VkglTestCase_016693_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016693_2 "pointer.get_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016693, VkglTestCase_016693_1, VkglTestCase_016693_2);

#define VkglTestCase_016694_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016694_2 "ointer.get_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016694, VkglTestCase_016694_1, VkglTestCase_016694_2);

#define VkglTestCase_016695_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016695_2 "_pointer.get_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016695, VkglTestCase_016695_1, VkglTestCase_016695_2);

#define VkglTestCase_016696_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016696_2 "ointer.get_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016696, VkglTestCase_016696_1, VkglTestCase_016696_2);

#define VkglTestCase_016697_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016697_2 "inter.get_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016697, VkglTestCase_016697_1, VkglTestCase_016697_2);

#define VkglTestCase_016698_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016698_2 "pointer.get_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016698, VkglTestCase_016698_1, VkglTestCase_016698_2);

#define VkglTestCase_016699_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016699_2 "er.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016699, VkglTestCase_016699_1, VkglTestCase_016699_2);

#define VkglTestCase_016700_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016700_2 "r.get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016700, VkglTestCase_016700_1, VkglTestCase_016700_2);

#define VkglTestCase_016701_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016701_2 "ter.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016701, VkglTestCase_016701_1, VkglTestCase_016701_2);

#define VkglTestCase_016702_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016702_2 "ter.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016702, VkglTestCase_016702_1, VkglTestCase_016702_2);

#define VkglTestCase_016703_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016703_2 "er.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016703, VkglTestCase_016703_1, VkglTestCase_016703_2);

#define VkglTestCase_016704_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016704_2 "nter.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016704, VkglTestCase_016704_1, VkglTestCase_016704_2);

#define VkglTestCase_016705_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016705_2 "er.get_uniform.basic_array.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016705, VkglTestCase_016705_1, VkglTestCase_016705_2);

#define VkglTestCase_016706_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016706_2 "r.get_uniform.basic_array.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016706, VkglTestCase_016706_1, VkglTestCase_016706_2);

#define VkglTestCase_016707_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016707_2 "ter.get_uniform.basic_array.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016707, VkglTestCase_016707_1, VkglTestCase_016707_2);

#define VkglTestCase_016708_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016708_2 "r.get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016708, VkglTestCase_016708_1, VkglTestCase_016708_2);

#define VkglTestCase_016709_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_016709_2 ".get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016709, VkglTestCase_016709_1, VkglTestCase_016709_2);

#define VkglTestCase_016710_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016710_2 "er.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016710, VkglTestCase_016710_1, VkglTestCase_016710_2);

#define VkglTestCase_016711_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016711_2 "er.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016711, VkglTestCase_016711_1, VkglTestCase_016711_2);

#define VkglTestCase_016712_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016712_2 "r.get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016712, VkglTestCase_016712_1, VkglTestCase_016712_2);

#define VkglTestCase_016713_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016713_2 "ter.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016713, VkglTestCase_016713_1, VkglTestCase_016713_2);

#define VkglTestCase_016714_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016714_2 "er.get_uniform.basic_array.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016714, VkglTestCase_016714_1, VkglTestCase_016714_2);

#define VkglTestCase_016715_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_016715_2 "r.get_uniform.basic_array.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016715, VkglTestCase_016715_1, VkglTestCase_016715_2);

#define VkglTestCase_016716_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016716_2 "ter.get_uniform.basic_array.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016716, VkglTestCase_016716_1, VkglTestCase_016716_2);

#define VkglTestCase_016717_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016717_2 "nter.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016717, VkglTestCase_016717_1, VkglTestCase_016717_2);

#define VkglTestCase_016718_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016718_2 "ter.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016718, VkglTestCase_016718_1, VkglTestCase_016718_2);

#define VkglTestCase_016719_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016719_2 "inter.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016719, VkglTestCase_016719_1, VkglTestCase_016719_2);

#define VkglTestCase_017146_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017146_2 "value.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017146, VkglTestCase_017146_1, VkglTestCase_017146_2);

#define VkglTestCase_017147_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017147_2 "alue.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017147, VkglTestCase_017147_1, VkglTestCase_017147_2);

#define VkglTestCase_017148_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017148_2 "_value.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017148, VkglTestCase_017148_1, VkglTestCase_017148_2);

#define VkglTestCase_017149_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017149_2 "_value.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017149, VkglTestCase_017149_1, VkglTestCase_017149_2);

#define VkglTestCase_017150_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017150_2 "value.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017150, VkglTestCase_017150_1, VkglTestCase_017150_2);

#define VkglTestCase_017151_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017151_2 "y_value.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017151, VkglTestCase_017151_1, VkglTestCase_017151_2);

#define VkglTestCase_017152_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017152_2 "_value.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017152, VkglTestCase_017152_1, VkglTestCase_017152_2);

#define VkglTestCase_017153_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017153_2 "value.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017153, VkglTestCase_017153_1, VkglTestCase_017153_2);

#define VkglTestCase_017154_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017154_2 "y_value.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017154, VkglTestCase_017154_1, VkglTestCase_017154_2);

#define VkglTestCase_017155_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017155_2 "value.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017155, VkglTestCase_017155_1, VkglTestCase_017155_2);

#define VkglTestCase_017156_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017156_2 "alue.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017156, VkglTestCase_017156_1, VkglTestCase_017156_2);

#define VkglTestCase_017157_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017157_2 "_value.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017157, VkglTestCase_017157_1, VkglTestCase_017157_2);

#define VkglTestCase_017158_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017158_2 "_value.get_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017158, VkglTestCase_017158_1, VkglTestCase_017158_2);

#define VkglTestCase_017159_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017159_2 "value.get_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017159, VkglTestCase_017159_1, VkglTestCase_017159_2);

#define VkglTestCase_017160_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017160_2 "y_value.get_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017160, VkglTestCase_017160_1, VkglTestCase_017160_2);

#define VkglTestCase_017161_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017161_2 "value.get_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017161, VkglTestCase_017161_1, VkglTestCase_017161_2);

#define VkglTestCase_017162_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017162_2 "alue.get_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017162, VkglTestCase_017162_1, VkglTestCase_017162_2);

#define VkglTestCase_017163_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017163_2 "_value.get_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017163, VkglTestCase_017163_1, VkglTestCase_017163_2);

#define VkglTestCase_017164_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017164_2 "e.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017164, VkglTestCase_017164_1, VkglTestCase_017164_2);

#define VkglTestCase_017165_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017165_2 ".get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017165, VkglTestCase_017165_1, VkglTestCase_017165_2);

#define VkglTestCase_017166_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017166_2 "ue.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017166, VkglTestCase_017166_1, VkglTestCase_017166_2);

#define VkglTestCase_017167_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017167_2 "ue.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017167, VkglTestCase_017167_1, VkglTestCase_017167_2);

#define VkglTestCase_017168_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017168_2 "e.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017168, VkglTestCase_017168_1, VkglTestCase_017168_2);

#define VkglTestCase_017169_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017169_2 "lue.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017169, VkglTestCase_017169_1, VkglTestCase_017169_2);

#define VkglTestCase_017170_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017170_2 "e.get_uniform.basic_array.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017170, VkglTestCase_017170_1, VkglTestCase_017170_2);

#define VkglTestCase_017171_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017171_2 ".get_uniform.basic_array.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017171, VkglTestCase_017171_1, VkglTestCase_017171_2);

#define VkglTestCase_017172_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017172_2 "ue.get_uniform.basic_array.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017172, VkglTestCase_017172_1, VkglTestCase_017172_2);

#define VkglTestCase_017173_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017173_2 ".get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017173, VkglTestCase_017173_1, VkglTestCase_017173_2);

#define VkglTestCase_017174_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017174_2 "get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017174, VkglTestCase_017174_1, VkglTestCase_017174_2);

#define VkglTestCase_017175_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017175_2 "e.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017175, VkglTestCase_017175_1, VkglTestCase_017175_2);

#define VkglTestCase_017176_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017176_2 "e.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017176, VkglTestCase_017176_1, VkglTestCase_017176_2);

#define VkglTestCase_017177_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017177_2 ".get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017177, VkglTestCase_017177_1, VkglTestCase_017177_2);

#define VkglTestCase_017178_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017178_2 "ue.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017178, VkglTestCase_017178_1, VkglTestCase_017178_2);

#define VkglTestCase_017179_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017179_2 "e.get_uniform.basic_array.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017179, VkglTestCase_017179_1, VkglTestCase_017179_2);

#define VkglTestCase_017180_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017180_2 ".get_uniform.basic_array.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017180, VkglTestCase_017180_1, VkglTestCase_017180_2);

#define VkglTestCase_017181_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017181_2 "ue.get_uniform.basic_array.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017181, VkglTestCase_017181_1, VkglTestCase_017181_2);

#define VkglTestCase_017182_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017182_2 "lue.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017182, VkglTestCase_017182_1, VkglTestCase_017182_2);

#define VkglTestCase_017183_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017183_2 "ue.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017183, VkglTestCase_017183_1, VkglTestCase_017183_2);

#define VkglTestCase_017184_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017184_2 "alue.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017184, VkglTestCase_017184_1, VkglTestCase_017184_2);
