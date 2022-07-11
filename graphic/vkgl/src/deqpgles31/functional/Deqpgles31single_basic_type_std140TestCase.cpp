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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008574_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008574_2 "single_basic_type.std140.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008574, VkglTestCase_008574_1, VkglTestCase_008574_2);

#define VkglTestCase_008575_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008575_2 "ingle_basic_type.std140.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008575, VkglTestCase_008575_1, VkglTestCase_008575_2);

#define VkglTestCase_008576_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008576_2 "single_basic_type.std140.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008576, VkglTestCase_008576_1, VkglTestCase_008576_2);

#define VkglTestCase_008577_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008577_2 ".single_basic_type.std140.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008577, VkglTestCase_008577_1, VkglTestCase_008577_2);

#define VkglTestCase_008578_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008578_2 "ingle_basic_type.std140.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008578, VkglTestCase_008578_1, VkglTestCase_008578_2);

#define VkglTestCase_008579_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008579_2 "single_basic_type.std140.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008579, VkglTestCase_008579_1, VkglTestCase_008579_2);

#define VkglTestCase_008580_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008580_2 ".single_basic_type.std140.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008580, VkglTestCase_008580_1, VkglTestCase_008580_2);

#define VkglTestCase_008581_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008581_2 "ingle_basic_type.std140.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008581, VkglTestCase_008581_1, VkglTestCase_008581_2);

#define VkglTestCase_008582_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008582_2 "single_basic_type.std140.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008582, VkglTestCase_008582_1, VkglTestCase_008582_2);

#define VkglTestCase_008583_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008583_2 ".single_basic_type.std140.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008583, VkglTestCase_008583_1, VkglTestCase_008583_2);

#define VkglTestCase_008584_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008584_2 "ingle_basic_type.std140.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008584, VkglTestCase_008584_1, VkglTestCase_008584_2);

#define VkglTestCase_008585_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008585_2 "single_basic_type.std140.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008585, VkglTestCase_008585_1, VkglTestCase_008585_2);

#define VkglTestCase_008586_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008586_2 ".single_basic_type.std140.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008586, VkglTestCase_008586_1, VkglTestCase_008586_2);

#define VkglTestCase_008587_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008587_2 "single_basic_type.std140.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008587, VkglTestCase_008587_1, VkglTestCase_008587_2);

#define VkglTestCase_008588_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008588_2 ".single_basic_type.std140.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008588, VkglTestCase_008588_1, VkglTestCase_008588_2);

#define VkglTestCase_008589_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008589_2 "single_basic_type.std140.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008589, VkglTestCase_008589_1, VkglTestCase_008589_2);

#define VkglTestCase_008590_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008590_2 "ingle_basic_type.std140.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008590, VkglTestCase_008590_1, VkglTestCase_008590_2);

#define VkglTestCase_008591_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008591_2 "single_basic_type.std140.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008591, VkglTestCase_008591_1, VkglTestCase_008591_2);

#define VkglTestCase_008592_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008592_2 "single_basic_type.std140.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008592, VkglTestCase_008592_1, VkglTestCase_008592_2);

#define VkglTestCase_008593_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008593_2 "ingle_basic_type.std140.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008593, VkglTestCase_008593_1, VkglTestCase_008593_2);

#define VkglTestCase_008594_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008594_2 "single_basic_type.std140.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008594, VkglTestCase_008594_1, VkglTestCase_008594_2);

#define VkglTestCase_008595_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008595_2 "single_basic_type.std140.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008595, VkglTestCase_008595_1, VkglTestCase_008595_2);

#define VkglTestCase_008596_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008596_2 "ingle_basic_type.std140.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008596, VkglTestCase_008596_1, VkglTestCase_008596_2);

#define VkglTestCase_008597_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008597_2 "single_basic_type.std140.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008597, VkglTestCase_008597_1, VkglTestCase_008597_2);

#define VkglTestCase_008598_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008598_2 ".single_basic_type.std140.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008598, VkglTestCase_008598_1, VkglTestCase_008598_2);

#define VkglTestCase_008599_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008599_2 "ingle_basic_type.std140.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008599, VkglTestCase_008599_1, VkglTestCase_008599_2);

#define VkglTestCase_008600_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008600_2 "single_basic_type.std140.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008600, VkglTestCase_008600_1, VkglTestCase_008600_2);

#define VkglTestCase_008601_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008601_2 "single_basic_type.std140.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008601, VkglTestCase_008601_1, VkglTestCase_008601_2);

#define VkglTestCase_008602_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008602_2 "ingle_basic_type.std140.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008602, VkglTestCase_008602_1, VkglTestCase_008602_2);

#define VkglTestCase_008603_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008603_2 "single_basic_type.std140.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008603, VkglTestCase_008603_1, VkglTestCase_008603_2);

#define VkglTestCase_008604_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008604_2 "single_basic_type.std140.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008604, VkglTestCase_008604_1, VkglTestCase_008604_2);

#define VkglTestCase_008605_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008605_2 "ingle_basic_type.std140.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008605, VkglTestCase_008605_1, VkglTestCase_008605_2);

#define VkglTestCase_008606_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008606_2 "single_basic_type.std140.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008606, VkglTestCase_008606_1, VkglTestCase_008606_2);

#define VkglTestCase_008607_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008607_2 "single_basic_type.std140.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008607, VkglTestCase_008607_1, VkglTestCase_008607_2);

#define VkglTestCase_008608_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008608_2 "ingle_basic_type.std140.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008608, VkglTestCase_008608_1, VkglTestCase_008608_2);

#define VkglTestCase_008609_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008609_2 "single_basic_type.std140.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008609, VkglTestCase_008609_1, VkglTestCase_008609_2);

#define VkglTestCase_008610_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008610_2 "ut.single_basic_type.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008610, VkglTestCase_008610_1, VkglTestCase_008610_2);

#define VkglTestCase_008611_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008611_2 "ut.single_basic_type.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008611, VkglTestCase_008611_1, VkglTestCase_008611_2);

#define VkglTestCase_008612_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008612_2 "ut.single_basic_type.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008612, VkglTestCase_008612_1, VkglTestCase_008612_2);

#define VkglTestCase_008613_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008613_2 "ut.single_basic_type.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008613, VkglTestCase_008613_1, VkglTestCase_008613_2);

#define VkglTestCase_008614_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008614_2 ".single_basic_type.std140.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008614, VkglTestCase_008614_1, VkglTestCase_008614_2);

#define VkglTestCase_008615_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008615_2 "ingle_basic_type.std140.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008615, VkglTestCase_008615_1, VkglTestCase_008615_2);

#define VkglTestCase_008616_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008616_2 "single_basic_type.std140.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008616, VkglTestCase_008616_1, VkglTestCase_008616_2);

#define VkglTestCase_008617_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008617_2 "le_basic_type.std140.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008617, VkglTestCase_008617_1, VkglTestCase_008617_2);

#define VkglTestCase_008618_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008618_2 "_basic_type.std140.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008618, VkglTestCase_008618_1, VkglTestCase_008618_2);

#define VkglTestCase_008619_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008619_2 "e_basic_type.std140.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008619, VkglTestCase_008619_1, VkglTestCase_008619_2);

#define VkglTestCase_008620_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008620_2 "_basic_type.std140.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008620, VkglTestCase_008620_1, VkglTestCase_008620_2);

#define VkglTestCase_008621_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008621_2 "basic_type.std140.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008621, VkglTestCase_008621_1, VkglTestCase_008621_2);

#define VkglTestCase_008622_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008622_2 "_basic_type.std140.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008622, VkglTestCase_008622_1, VkglTestCase_008622_2);

#define VkglTestCase_008623_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008623_2 ".single_basic_type.std140.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008623, VkglTestCase_008623_1, VkglTestCase_008623_2);

#define VkglTestCase_008624_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008624_2 "ingle_basic_type.std140.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008624, VkglTestCase_008624_1, VkglTestCase_008624_2);

#define VkglTestCase_008625_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008625_2 "single_basic_type.std140.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008625, VkglTestCase_008625_1, VkglTestCase_008625_2);

#define VkglTestCase_008626_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008626_2 "le_basic_type.std140.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008626, VkglTestCase_008626_1, VkglTestCase_008626_2);

#define VkglTestCase_008627_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008627_2 "_basic_type.std140.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008627, VkglTestCase_008627_1, VkglTestCase_008627_2);

#define VkglTestCase_008628_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008628_2 "e_basic_type.std140.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008628, VkglTestCase_008628_1, VkglTestCase_008628_2);

#define VkglTestCase_008629_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008629_2 "_basic_type.std140.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008629, VkglTestCase_008629_1, VkglTestCase_008629_2);

#define VkglTestCase_008630_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008630_2 "basic_type.std140.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008630, VkglTestCase_008630_1, VkglTestCase_008630_2);

#define VkglTestCase_008631_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008631_2 "_basic_type.std140.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008631, VkglTestCase_008631_1, VkglTestCase_008631_2);

#define VkglTestCase_008632_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008632_2 ".single_basic_type.std140.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008632, VkglTestCase_008632_1, VkglTestCase_008632_2);

#define VkglTestCase_008633_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008633_2 "ingle_basic_type.std140.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008633, VkglTestCase_008633_1, VkglTestCase_008633_2);

#define VkglTestCase_008634_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008634_2 "single_basic_type.std140.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008634, VkglTestCase_008634_1, VkglTestCase_008634_2);

#define VkglTestCase_008635_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008635_2 "le_basic_type.std140.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008635, VkglTestCase_008635_1, VkglTestCase_008635_2);

#define VkglTestCase_008636_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008636_2 "_basic_type.std140.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008636, VkglTestCase_008636_1, VkglTestCase_008636_2);

#define VkglTestCase_008637_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008637_2 "e_basic_type.std140.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008637, VkglTestCase_008637_1, VkglTestCase_008637_2);

#define VkglTestCase_008638_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008638_2 "_basic_type.std140.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008638, VkglTestCase_008638_1, VkglTestCase_008638_2);

#define VkglTestCase_008639_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008639_2 "basic_type.std140.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008639, VkglTestCase_008639_1, VkglTestCase_008639_2);

#define VkglTestCase_008640_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008640_2 "_basic_type.std140.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008640, VkglTestCase_008640_1, VkglTestCase_008640_2);

#define VkglTestCase_008641_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008641_2 "single_basic_type.std140.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008641, VkglTestCase_008641_1, VkglTestCase_008641_2);

#define VkglTestCase_008642_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008642_2 "ngle_basic_type.std140.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008642, VkglTestCase_008642_1, VkglTestCase_008642_2);

#define VkglTestCase_008643_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008643_2 "ingle_basic_type.std140.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008643, VkglTestCase_008643_1, VkglTestCase_008643_2);

#define VkglTestCase_008644_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008644_2 "e_basic_type.std140.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008644, VkglTestCase_008644_1, VkglTestCase_008644_2);

#define VkglTestCase_008645_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008645_2 "basic_type.std140.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008645, VkglTestCase_008645_1, VkglTestCase_008645_2);

#define VkglTestCase_008646_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008646_2 "_basic_type.std140.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008646, VkglTestCase_008646_1, VkglTestCase_008646_2);

#define VkglTestCase_008647_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008647_2 "basic_type.std140.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008647, VkglTestCase_008647_1, VkglTestCase_008647_2);

#define VkglTestCase_008648_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008648_2 "asic_type.std140.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008648, VkglTestCase_008648_1, VkglTestCase_008648_2);

#define VkglTestCase_008649_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008649_2 "basic_type.std140.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008649, VkglTestCase_008649_1, VkglTestCase_008649_2);

#define VkglTestCase_008650_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008650_2 "single_basic_type.std140.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008650, VkglTestCase_008650_1, VkglTestCase_008650_2);

#define VkglTestCase_008651_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008651_2 "ngle_basic_type.std140.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008651, VkglTestCase_008651_1, VkglTestCase_008651_2);

#define VkglTestCase_008652_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008652_2 "ingle_basic_type.std140.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008652, VkglTestCase_008652_1, VkglTestCase_008652_2);

#define VkglTestCase_008653_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008653_2 "e_basic_type.std140.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008653, VkglTestCase_008653_1, VkglTestCase_008653_2);

#define VkglTestCase_008654_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008654_2 "basic_type.std140.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008654, VkglTestCase_008654_1, VkglTestCase_008654_2);

#define VkglTestCase_008655_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008655_2 "_basic_type.std140.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008655, VkglTestCase_008655_1, VkglTestCase_008655_2);

#define VkglTestCase_008656_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008656_2 "basic_type.std140.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008656, VkglTestCase_008656_1, VkglTestCase_008656_2);

#define VkglTestCase_008657_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008657_2 "asic_type.std140.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008657, VkglTestCase_008657_1, VkglTestCase_008657_2);

#define VkglTestCase_008658_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008658_2 "basic_type.std140.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008658, VkglTestCase_008658_1, VkglTestCase_008658_2);

#define VkglTestCase_008659_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008659_2 "single_basic_type.std140.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008659, VkglTestCase_008659_1, VkglTestCase_008659_2);

#define VkglTestCase_008660_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008660_2 "ngle_basic_type.std140.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008660, VkglTestCase_008660_1, VkglTestCase_008660_2);

#define VkglTestCase_008661_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008661_2 "ingle_basic_type.std140.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008661, VkglTestCase_008661_1, VkglTestCase_008661_2);

#define VkglTestCase_008662_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008662_2 "e_basic_type.std140.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008662, VkglTestCase_008662_1, VkglTestCase_008662_2);

#define VkglTestCase_008663_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008663_2 "basic_type.std140.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008663, VkglTestCase_008663_1, VkglTestCase_008663_2);

#define VkglTestCase_008664_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008664_2 "_basic_type.std140.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008664, VkglTestCase_008664_1, VkglTestCase_008664_2);

#define VkglTestCase_008665_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008665_2 "basic_type.std140.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008665, VkglTestCase_008665_1, VkglTestCase_008665_2);

#define VkglTestCase_008666_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008666_2 "asic_type.std140.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008666, VkglTestCase_008666_1, VkglTestCase_008666_2);

#define VkglTestCase_008667_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008667_2 "basic_type.std140.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008667, VkglTestCase_008667_1, VkglTestCase_008667_2);

#define VkglTestCase_008668_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008668_2 "single_basic_type.std140.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008668, VkglTestCase_008668_1, VkglTestCase_008668_2);

#define VkglTestCase_008669_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008669_2 "ngle_basic_type.std140.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008669, VkglTestCase_008669_1, VkglTestCase_008669_2);

#define VkglTestCase_008670_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008670_2 "ingle_basic_type.std140.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008670, VkglTestCase_008670_1, VkglTestCase_008670_2);

#define VkglTestCase_008671_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008671_2 "e_basic_type.std140.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008671, VkglTestCase_008671_1, VkglTestCase_008671_2);

#define VkglTestCase_008672_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008672_2 "basic_type.std140.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008672, VkglTestCase_008672_1, VkglTestCase_008672_2);

#define VkglTestCase_008673_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008673_2 "_basic_type.std140.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008673, VkglTestCase_008673_1, VkglTestCase_008673_2);

#define VkglTestCase_008674_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008674_2 "basic_type.std140.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008674, VkglTestCase_008674_1, VkglTestCase_008674_2);

#define VkglTestCase_008675_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008675_2 "asic_type.std140.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008675, VkglTestCase_008675_1, VkglTestCase_008675_2);

#define VkglTestCase_008676_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008676_2 "basic_type.std140.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008676, VkglTestCase_008676_1, VkglTestCase_008676_2);

#define VkglTestCase_008677_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008677_2 "single_basic_type.std140.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008677, VkglTestCase_008677_1, VkglTestCase_008677_2);

#define VkglTestCase_008678_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008678_2 "ngle_basic_type.std140.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008678, VkglTestCase_008678_1, VkglTestCase_008678_2);

#define VkglTestCase_008679_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008679_2 "ingle_basic_type.std140.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008679, VkglTestCase_008679_1, VkglTestCase_008679_2);

#define VkglTestCase_008680_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008680_2 "e_basic_type.std140.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008680, VkglTestCase_008680_1, VkglTestCase_008680_2);

#define VkglTestCase_008681_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008681_2 "basic_type.std140.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008681, VkglTestCase_008681_1, VkglTestCase_008681_2);

#define VkglTestCase_008682_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008682_2 "_basic_type.std140.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008682, VkglTestCase_008682_1, VkglTestCase_008682_2);

#define VkglTestCase_008683_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008683_2 "basic_type.std140.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008683, VkglTestCase_008683_1, VkglTestCase_008683_2);

#define VkglTestCase_008684_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008684_2 "asic_type.std140.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008684, VkglTestCase_008684_1, VkglTestCase_008684_2);

#define VkglTestCase_008685_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008685_2 "basic_type.std140.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008685, VkglTestCase_008685_1, VkglTestCase_008685_2);

#define VkglTestCase_008686_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008686_2 "single_basic_type.std140.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008686, VkglTestCase_008686_1, VkglTestCase_008686_2);

#define VkglTestCase_008687_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008687_2 "ngle_basic_type.std140.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008687, VkglTestCase_008687_1, VkglTestCase_008687_2);

#define VkglTestCase_008688_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008688_2 "ingle_basic_type.std140.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008688, VkglTestCase_008688_1, VkglTestCase_008688_2);

#define VkglTestCase_008689_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008689_2 "e_basic_type.std140.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008689, VkglTestCase_008689_1, VkglTestCase_008689_2);

#define VkglTestCase_008690_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008690_2 "basic_type.std140.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008690, VkglTestCase_008690_1, VkglTestCase_008690_2);

#define VkglTestCase_008691_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008691_2 "_basic_type.std140.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008691, VkglTestCase_008691_1, VkglTestCase_008691_2);

#define VkglTestCase_008692_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008692_2 "basic_type.std140.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008692, VkglTestCase_008692_1, VkglTestCase_008692_2);

#define VkglTestCase_008693_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008693_2 "asic_type.std140.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008693, VkglTestCase_008693_1, VkglTestCase_008693_2);

#define VkglTestCase_008694_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008694_2 "basic_type.std140.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008694, VkglTestCase_008694_1, VkglTestCase_008694_2);
