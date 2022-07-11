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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001627_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001627_2 "ns.scalar_to_vector.float_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001627, VkglTestCase_001627_1, VkglTestCase_001627_2);

#define VkglTestCase_001628_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001628_2 "s.scalar_to_vector.float_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001628, VkglTestCase_001628_1, VkglTestCase_001628_2);

#define VkglTestCase_001629_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001629_2 "ns.scalar_to_vector.float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001629, VkglTestCase_001629_1, VkglTestCase_001629_2);

#define VkglTestCase_001630_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001630_2 "s.scalar_to_vector.float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001630, VkglTestCase_001630_1, VkglTestCase_001630_2);

#define VkglTestCase_001631_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001631_2 "ns.scalar_to_vector.float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001631, VkglTestCase_001631_1, VkglTestCase_001631_2);

#define VkglTestCase_001632_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001632_2 "s.scalar_to_vector.float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001632, VkglTestCase_001632_1, VkglTestCase_001632_2);

#define VkglTestCase_001633_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001633_2 "s.scalar_to_vector.float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001633, VkglTestCase_001633_1, VkglTestCase_001633_2);

#define VkglTestCase_001634_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001634_2 ".scalar_to_vector.float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001634, VkglTestCase_001634_1, VkglTestCase_001634_2);

#define VkglTestCase_001635_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001635_2 "s.scalar_to_vector.float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001635, VkglTestCase_001635_1, VkglTestCase_001635_2);

#define VkglTestCase_001636_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001636_2 ".scalar_to_vector.float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001636, VkglTestCase_001636_1, VkglTestCase_001636_2);

#define VkglTestCase_001637_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001637_2 "s.scalar_to_vector.float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001637, VkglTestCase_001637_1, VkglTestCase_001637_2);

#define VkglTestCase_001638_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001638_2 ".scalar_to_vector.float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001638, VkglTestCase_001638_1, VkglTestCase_001638_2);

#define VkglTestCase_001639_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001639_2 "s.scalar_to_vector.float_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001639, VkglTestCase_001639_1, VkglTestCase_001639_2);

#define VkglTestCase_001640_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001640_2 ".scalar_to_vector.float_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001640, VkglTestCase_001640_1, VkglTestCase_001640_2);

#define VkglTestCase_001641_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001641_2 "s.scalar_to_vector.float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001641, VkglTestCase_001641_1, VkglTestCase_001641_2);

#define VkglTestCase_001642_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001642_2 ".scalar_to_vector.float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001642, VkglTestCase_001642_1, VkglTestCase_001642_2);

#define VkglTestCase_001643_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001643_2 "s.scalar_to_vector.float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001643, VkglTestCase_001643_1, VkglTestCase_001643_2);

#define VkglTestCase_001644_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001644_2 ".scalar_to_vector.float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001644, VkglTestCase_001644_1, VkglTestCase_001644_2);

#define VkglTestCase_001645_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001645_2 "ons.scalar_to_vector.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001645, VkglTestCase_001645_1, VkglTestCase_001645_2);

#define VkglTestCase_001646_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001646_2 "ns.scalar_to_vector.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001646, VkglTestCase_001646_1, VkglTestCase_001646_2);

#define VkglTestCase_001647_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001647_2 "ons.scalar_to_vector.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001647, VkglTestCase_001647_1, VkglTestCase_001647_2);

#define VkglTestCase_001648_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001648_2 "ns.scalar_to_vector.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001648, VkglTestCase_001648_1, VkglTestCase_001648_2);

#define VkglTestCase_001649_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001649_2 "ons.scalar_to_vector.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001649, VkglTestCase_001649_1, VkglTestCase_001649_2);

#define VkglTestCase_001650_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001650_2 "ns.scalar_to_vector.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001650, VkglTestCase_001650_1, VkglTestCase_001650_2);

#define VkglTestCase_001651_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001651_2 "ns.scalar_to_vector.int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001651, VkglTestCase_001651_1, VkglTestCase_001651_2);

#define VkglTestCase_001652_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001652_2 "s.scalar_to_vector.int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001652, VkglTestCase_001652_1, VkglTestCase_001652_2);

#define VkglTestCase_001653_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001653_2 "ns.scalar_to_vector.int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001653, VkglTestCase_001653_1, VkglTestCase_001653_2);

#define VkglTestCase_001654_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001654_2 "s.scalar_to_vector.int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001654, VkglTestCase_001654_1, VkglTestCase_001654_2);

#define VkglTestCase_001655_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001655_2 "ns.scalar_to_vector.int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001655, VkglTestCase_001655_1, VkglTestCase_001655_2);

#define VkglTestCase_001656_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001656_2 "s.scalar_to_vector.int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001656, VkglTestCase_001656_1, VkglTestCase_001656_2);

#define VkglTestCase_001657_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001657_2 "ns.scalar_to_vector.int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001657, VkglTestCase_001657_1, VkglTestCase_001657_2);

#define VkglTestCase_001658_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001658_2 "s.scalar_to_vector.int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001658, VkglTestCase_001658_1, VkglTestCase_001658_2);

#define VkglTestCase_001659_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001659_2 "ns.scalar_to_vector.int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001659, VkglTestCase_001659_1, VkglTestCase_001659_2);

#define VkglTestCase_001660_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001660_2 "s.scalar_to_vector.int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001660, VkglTestCase_001660_1, VkglTestCase_001660_2);

#define VkglTestCase_001661_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001661_2 "ns.scalar_to_vector.int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001661, VkglTestCase_001661_1, VkglTestCase_001661_2);

#define VkglTestCase_001662_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001662_2 "s.scalar_to_vector.int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001662, VkglTestCase_001662_1, VkglTestCase_001662_2);

#define VkglTestCase_001663_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001663_2 "ns.scalar_to_vector.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001663, VkglTestCase_001663_1, VkglTestCase_001663_2);

#define VkglTestCase_001664_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001664_2 "s.scalar_to_vector.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001664, VkglTestCase_001664_1, VkglTestCase_001664_2);

#define VkglTestCase_001665_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001665_2 "ns.scalar_to_vector.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001665, VkglTestCase_001665_1, VkglTestCase_001665_2);

#define VkglTestCase_001666_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001666_2 "s.scalar_to_vector.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001666, VkglTestCase_001666_1, VkglTestCase_001666_2);

#define VkglTestCase_001667_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001667_2 "ns.scalar_to_vector.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001667, VkglTestCase_001667_1, VkglTestCase_001667_2);

#define VkglTestCase_001668_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001668_2 "s.scalar_to_vector.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001668, VkglTestCase_001668_1, VkglTestCase_001668_2);

#define VkglTestCase_001669_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001669_2 "ns.scalar_to_vector.uint_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001669, VkglTestCase_001669_1, VkglTestCase_001669_2);

#define VkglTestCase_001670_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001670_2 "s.scalar_to_vector.uint_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001670, VkglTestCase_001670_1, VkglTestCase_001670_2);

#define VkglTestCase_001671_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001671_2 "ns.scalar_to_vector.uint_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001671, VkglTestCase_001671_1, VkglTestCase_001671_2);

#define VkglTestCase_001672_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001672_2 "s.scalar_to_vector.uint_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001672, VkglTestCase_001672_1, VkglTestCase_001672_2);

#define VkglTestCase_001673_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001673_2 "ns.scalar_to_vector.uint_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001673, VkglTestCase_001673_1, VkglTestCase_001673_2);

#define VkglTestCase_001674_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001674_2 "s.scalar_to_vector.uint_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001674, VkglTestCase_001674_1, VkglTestCase_001674_2);

#define VkglTestCase_001675_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001675_2 "ns.scalar_to_vector.uint_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001675, VkglTestCase_001675_1, VkglTestCase_001675_2);

#define VkglTestCase_001676_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001676_2 "s.scalar_to_vector.uint_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001676, VkglTestCase_001676_1, VkglTestCase_001676_2);

#define VkglTestCase_001677_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001677_2 "ns.scalar_to_vector.uint_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001677, VkglTestCase_001677_1, VkglTestCase_001677_2);

#define VkglTestCase_001678_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001678_2 "s.scalar_to_vector.uint_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001678, VkglTestCase_001678_1, VkglTestCase_001678_2);

#define VkglTestCase_001679_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001679_2 "ns.scalar_to_vector.uint_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001679, VkglTestCase_001679_1, VkglTestCase_001679_2);

#define VkglTestCase_001680_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001680_2 "s.scalar_to_vector.uint_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001680, VkglTestCase_001680_1, VkglTestCase_001680_2);

#define VkglTestCase_001681_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001681_2 "ns.scalar_to_vector.bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001681, VkglTestCase_001681_1, VkglTestCase_001681_2);

#define VkglTestCase_001682_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001682_2 "s.scalar_to_vector.bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001682, VkglTestCase_001682_1, VkglTestCase_001682_2);

#define VkglTestCase_001683_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001683_2 "ns.scalar_to_vector.bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001683, VkglTestCase_001683_1, VkglTestCase_001683_2);

#define VkglTestCase_001684_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001684_2 "s.scalar_to_vector.bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001684, VkglTestCase_001684_1, VkglTestCase_001684_2);

#define VkglTestCase_001685_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001685_2 "ns.scalar_to_vector.bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001685, VkglTestCase_001685_1, VkglTestCase_001685_2);

#define VkglTestCase_001686_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001686_2 "s.scalar_to_vector.bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001686, VkglTestCase_001686_1, VkglTestCase_001686_2);

#define VkglTestCase_001687_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001687_2 "ns.scalar_to_vector.bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001687, VkglTestCase_001687_1, VkglTestCase_001687_2);

#define VkglTestCase_001688_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001688_2 "s.scalar_to_vector.bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001688, VkglTestCase_001688_1, VkglTestCase_001688_2);

#define VkglTestCase_001689_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001689_2 "ns.scalar_to_vector.bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001689, VkglTestCase_001689_1, VkglTestCase_001689_2);

#define VkglTestCase_001690_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001690_2 "s.scalar_to_vector.bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001690, VkglTestCase_001690_1, VkglTestCase_001690_2);

#define VkglTestCase_001691_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001691_2 "ns.scalar_to_vector.bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001691, VkglTestCase_001691_1, VkglTestCase_001691_2);

#define VkglTestCase_001692_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001692_2 "s.scalar_to_vector.bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001692, VkglTestCase_001692_1, VkglTestCase_001692_2);

#define VkglTestCase_001693_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001693_2 "ns.scalar_to_vector.bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001693, VkglTestCase_001693_1, VkglTestCase_001693_2);

#define VkglTestCase_001694_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001694_2 "s.scalar_to_vector.bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001694, VkglTestCase_001694_1, VkglTestCase_001694_2);

#define VkglTestCase_001695_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001695_2 "ns.scalar_to_vector.bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001695, VkglTestCase_001695_1, VkglTestCase_001695_2);

#define VkglTestCase_001696_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001696_2 "s.scalar_to_vector.bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001696, VkglTestCase_001696_1, VkglTestCase_001696_2);

#define VkglTestCase_001697_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001697_2 "ns.scalar_to_vector.bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001697, VkglTestCase_001697_1, VkglTestCase_001697_2);

#define VkglTestCase_001698_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001698_2 "s.scalar_to_vector.bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001698, VkglTestCase_001698_1, VkglTestCase_001698_2);

#define VkglTestCase_001699_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001699_2 "s.scalar_to_vector.float_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001699, VkglTestCase_001699_1, VkglTestCase_001699_2);

#define VkglTestCase_001700_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001700_2 ".scalar_to_vector.float_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001700, VkglTestCase_001700_1, VkglTestCase_001700_2);

#define VkglTestCase_001701_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001701_2 "s.scalar_to_vector.float_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001701, VkglTestCase_001701_1, VkglTestCase_001701_2);

#define VkglTestCase_001702_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001702_2 ".scalar_to_vector.float_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001702, VkglTestCase_001702_1, VkglTestCase_001702_2);

#define VkglTestCase_001703_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001703_2 "s.scalar_to_vector.float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001703, VkglTestCase_001703_1, VkglTestCase_001703_2);

#define VkglTestCase_001704_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001704_2 ".scalar_to_vector.float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001704, VkglTestCase_001704_1, VkglTestCase_001704_2);

#define VkglTestCase_001705_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001705_2 "ns.scalar_to_vector.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001705, VkglTestCase_001705_1, VkglTestCase_001705_2);

#define VkglTestCase_001706_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001706_2 "s.scalar_to_vector.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001706, VkglTestCase_001706_1, VkglTestCase_001706_2);

#define VkglTestCase_001707_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001707_2 "ns.scalar_to_vector.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001707, VkglTestCase_001707_1, VkglTestCase_001707_2);

#define VkglTestCase_001708_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001708_2 "s.scalar_to_vector.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001708, VkglTestCase_001708_1, VkglTestCase_001708_2);

#define VkglTestCase_001709_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001709_2 "ns.scalar_to_vector.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001709, VkglTestCase_001709_1, VkglTestCase_001709_2);

#define VkglTestCase_001710_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001710_2 "s.scalar_to_vector.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001710, VkglTestCase_001710_1, VkglTestCase_001710_2);

#define VkglTestCase_001711_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001711_2 "ns.scalar_to_vector.uint_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001711, VkglTestCase_001711_1, VkglTestCase_001711_2);

#define VkglTestCase_001712_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001712_2 "s.scalar_to_vector.uint_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001712, VkglTestCase_001712_1, VkglTestCase_001712_2);

#define VkglTestCase_001713_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001713_2 "ns.scalar_to_vector.uint_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001713, VkglTestCase_001713_1, VkglTestCase_001713_2);

#define VkglTestCase_001714_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001714_2 "s.scalar_to_vector.uint_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001714, VkglTestCase_001714_1, VkglTestCase_001714_2);

#define VkglTestCase_001715_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001715_2 "ns.scalar_to_vector.uint_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001715, VkglTestCase_001715_1, VkglTestCase_001715_2);

#define VkglTestCase_001716_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001716_2 "s.scalar_to_vector.uint_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001716, VkglTestCase_001716_1, VkglTestCase_001716_2);

#define VkglTestCase_001717_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001717_2 "ns.scalar_to_vector.bool_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001717, VkglTestCase_001717_1, VkglTestCase_001717_2);

#define VkglTestCase_001718_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001718_2 "s.scalar_to_vector.bool_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001718, VkglTestCase_001718_1, VkglTestCase_001718_2);

#define VkglTestCase_001719_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001719_2 "ns.scalar_to_vector.bool_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001719, VkglTestCase_001719_1, VkglTestCase_001719_2);

#define VkglTestCase_001720_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001720_2 "s.scalar_to_vector.bool_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001720, VkglTestCase_001720_1, VkglTestCase_001720_2);

#define VkglTestCase_001721_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001721_2 "ns.scalar_to_vector.bool_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001721, VkglTestCase_001721_1, VkglTestCase_001721_2);

#define VkglTestCase_001722_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001722_2 "s.scalar_to_vector.bool_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001722, VkglTestCase_001722_1, VkglTestCase_001722_2);
