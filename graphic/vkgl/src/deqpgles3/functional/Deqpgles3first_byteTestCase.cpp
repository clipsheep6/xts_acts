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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033637_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033637_2 "ribute.first.byte.first6_offset1_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033637, VkglTestCase_033637_1, VkglTestCase_033637_2);

#define VkglTestCase_033638_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033638_2 "ibute.first.byte.first24_offset1_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033638, VkglTestCase_033638_1, VkglTestCase_033638_2);

#define VkglTestCase_033639_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033639_2 "ibute.first.byte.first6_offset1_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033639, VkglTestCase_033639_1, VkglTestCase_033639_2);

#define VkglTestCase_033640_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033640_2 "ibute.first.byte.first24_offset1_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033640, VkglTestCase_033640_1, VkglTestCase_033640_2);

#define VkglTestCase_033641_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033641_2 "ibute.first.byte.first6_offset1_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033641, VkglTestCase_033641_1, VkglTestCase_033641_2);

#define VkglTestCase_033642_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033642_2 "ibute.first.byte.first24_offset1_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033642, VkglTestCase_033642_1, VkglTestCase_033642_2);

#define VkglTestCase_033643_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033643_2 "ibute.first.byte.first6_offset1_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033643, VkglTestCase_033643_1, VkglTestCase_033643_2);

#define VkglTestCase_033644_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033644_2 "bute.first.byte.first24_offset1_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033644, VkglTestCase_033644_1, VkglTestCase_033644_2);

#define VkglTestCase_033645_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033645_2 "bute.first.byte.first6_offset1_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033645, VkglTestCase_033645_1, VkglTestCase_033645_2);

#define VkglTestCase_033646_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033646_2 "bute.first.byte.first24_offset1_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033646, VkglTestCase_033646_1, VkglTestCase_033646_2);

#define VkglTestCase_033647_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033647_2 "bute.first.byte.first6_offset1_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033647, VkglTestCase_033647_1, VkglTestCase_033647_2);

#define VkglTestCase_033648_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033648_2 "bute.first.byte.first24_offset1_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033648, VkglTestCase_033648_1, VkglTestCase_033648_2);

#define VkglTestCase_033649_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033649_2 "ibute.first.byte.first6_offset16_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033649, VkglTestCase_033649_1, VkglTestCase_033649_2);

#define VkglTestCase_033650_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033650_2 "ibute.first.byte.first24_offset16_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033650, VkglTestCase_033650_1, VkglTestCase_033650_2);

#define VkglTestCase_033651_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033651_2 "ibute.first.byte.first6_offset16_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033651, VkglTestCase_033651_1, VkglTestCase_033651_2);

#define VkglTestCase_033652_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033652_2 "bute.first.byte.first24_offset16_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033652, VkglTestCase_033652_1, VkglTestCase_033652_2);

#define VkglTestCase_033653_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033653_2 "ibute.first.byte.first6_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033653, VkglTestCase_033653_1, VkglTestCase_033653_2);

#define VkglTestCase_033654_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033654_2 "bute.first.byte.first24_offset16_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033654, VkglTestCase_033654_1, VkglTestCase_033654_2);

#define VkglTestCase_033655_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033655_2 "bute.first.byte.first6_offset16_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033655, VkglTestCase_033655_1, VkglTestCase_033655_2);

#define VkglTestCase_033656_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033656_2 "bute.first.byte.first24_offset16_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033656, VkglTestCase_033656_1, VkglTestCase_033656_2);

#define VkglTestCase_033657_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033657_2 "bute.first.byte.first6_offset16_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033657, VkglTestCase_033657_1, VkglTestCase_033657_2);

#define VkglTestCase_033658_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033658_2 "ute.first.byte.first24_offset16_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033658, VkglTestCase_033658_1, VkglTestCase_033658_2);

#define VkglTestCase_033659_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033659_2 "bute.first.byte.first6_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033659, VkglTestCase_033659_1, VkglTestCase_033659_2);

#define VkglTestCase_033660_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033660_2 "ute.first.byte.first24_offset16_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033660, VkglTestCase_033660_1, VkglTestCase_033660_2);

#define VkglTestCase_033661_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033661_2 "ibute.first.byte.first6_offset17_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033661, VkglTestCase_033661_1, VkglTestCase_033661_2);

#define VkglTestCase_033662_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033662_2 "ibute.first.byte.first24_offset17_stride2_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033662, VkglTestCase_033662_1, VkglTestCase_033662_2);

#define VkglTestCase_033663_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033663_2 "ibute.first.byte.first6_offset17_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033663, VkglTestCase_033663_1, VkglTestCase_033663_2);

#define VkglTestCase_033664_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033664_2 "bute.first.byte.first24_offset17_stride17_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033664, VkglTestCase_033664_1, VkglTestCase_033664_2);

#define VkglTestCase_033665_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033665_2 "ibute.first.byte.first6_offset17_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033665, VkglTestCase_033665_1, VkglTestCase_033665_2);

#define VkglTestCase_033666_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033666_2 "bute.first.byte.first24_offset17_stride32_quads5"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033666, VkglTestCase_033666_1, VkglTestCase_033666_2);

#define VkglTestCase_033667_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033667_2 "bute.first.byte.first6_offset17_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033667, VkglTestCase_033667_1, VkglTestCase_033667_2);

#define VkglTestCase_033668_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033668_2 "bute.first.byte.first24_offset17_stride2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033668, VkglTestCase_033668_1, VkglTestCase_033668_2);

#define VkglTestCase_033669_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033669_2 "bute.first.byte.first6_offset17_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033669, VkglTestCase_033669_1, VkglTestCase_033669_2);

#define VkglTestCase_033670_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033670_2 "ute.first.byte.first24_offset17_stride17_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033670, VkglTestCase_033670_1, VkglTestCase_033670_2);

#define VkglTestCase_033671_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033671_2 "bute.first.byte.first6_offset17_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033671, VkglTestCase_033671_1, VkglTestCase_033671_2);

#define VkglTestCase_033672_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033672_2 "ute.first.byte.first24_offset17_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033672, VkglTestCase_033672_1, VkglTestCase_033672_2);
