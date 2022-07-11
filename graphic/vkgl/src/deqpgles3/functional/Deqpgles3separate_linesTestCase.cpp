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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040611_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040611_2 "k.basic_types.separate.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040611, VkglTestCase_040611_1, VkglTestCase_040611_2);

#define VkglTestCase_040612_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040612_2 ".basic_types.separate.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040612, VkglTestCase_040612_1, VkglTestCase_040612_2);

#define VkglTestCase_040613_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040613_2 "k.basic_types.separate.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040613, VkglTestCase_040613_1, VkglTestCase_040613_2);

#define VkglTestCase_040614_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040614_2 "ck.basic_types.separate.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040614, VkglTestCase_040614_1, VkglTestCase_040614_2);

#define VkglTestCase_040615_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040615_2 ".basic_types.separate.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040615, VkglTestCase_040615_1, VkglTestCase_040615_2);

#define VkglTestCase_040616_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040616_2 "k.basic_types.separate.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040616, VkglTestCase_040616_1, VkglTestCase_040616_2);

#define VkglTestCase_040617_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040617_2 "ck.basic_types.separate.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040617, VkglTestCase_040617_1, VkglTestCase_040617_2);

#define VkglTestCase_040618_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040618_2 ".basic_types.separate.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040618, VkglTestCase_040618_1, VkglTestCase_040618_2);

#define VkglTestCase_040619_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040619_2 "k.basic_types.separate.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040619, VkglTestCase_040619_1, VkglTestCase_040619_2);

#define VkglTestCase_040620_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040620_2 "ck.basic_types.separate.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040620, VkglTestCase_040620_1, VkglTestCase_040620_2);

#define VkglTestCase_040621_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040621_2 ".basic_types.separate.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040621, VkglTestCase_040621_1, VkglTestCase_040621_2);

#define VkglTestCase_040622_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040622_2 "k.basic_types.separate.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040622, VkglTestCase_040622_1, VkglTestCase_040622_2);

#define VkglTestCase_040623_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040623_2 "ck.basic_types.separate.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040623, VkglTestCase_040623_1, VkglTestCase_040623_2);

#define VkglTestCase_040624_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040624_2 ".basic_types.separate.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040624, VkglTestCase_040624_1, VkglTestCase_040624_2);

#define VkglTestCase_040625_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040625_2 "k.basic_types.separate.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040625, VkglTestCase_040625_1, VkglTestCase_040625_2);

#define VkglTestCase_040626_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040626_2 "k.basic_types.separate.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040626, VkglTestCase_040626_1, VkglTestCase_040626_2);

#define VkglTestCase_040627_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040627_2 "basic_types.separate.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040627, VkglTestCase_040627_1, VkglTestCase_040627_2);

#define VkglTestCase_040628_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040628_2 ".basic_types.separate.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040628, VkglTestCase_040628_1, VkglTestCase_040628_2);

#define VkglTestCase_040629_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040629_2 "k.basic_types.separate.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040629, VkglTestCase_040629_1, VkglTestCase_040629_2);

#define VkglTestCase_040630_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040630_2 "basic_types.separate.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040630, VkglTestCase_040630_1, VkglTestCase_040630_2);

#define VkglTestCase_040631_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040631_2 ".basic_types.separate.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040631, VkglTestCase_040631_1, VkglTestCase_040631_2);

#define VkglTestCase_040632_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040632_2 "k.basic_types.separate.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040632, VkglTestCase_040632_1, VkglTestCase_040632_2);

#define VkglTestCase_040633_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040633_2 "basic_types.separate.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040633, VkglTestCase_040633_1, VkglTestCase_040633_2);

#define VkglTestCase_040634_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040634_2 ".basic_types.separate.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040634, VkglTestCase_040634_1, VkglTestCase_040634_2);

#define VkglTestCase_040635_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040635_2 "ck.basic_types.separate.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040635, VkglTestCase_040635_1, VkglTestCase_040635_2);

#define VkglTestCase_040636_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040636_2 ".basic_types.separate.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040636, VkglTestCase_040636_1, VkglTestCase_040636_2);

#define VkglTestCase_040637_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040637_2 "k.basic_types.separate.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040637, VkglTestCase_040637_1, VkglTestCase_040637_2);

#define VkglTestCase_040638_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040638_2 "k.basic_types.separate.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040638, VkglTestCase_040638_1, VkglTestCase_040638_2);

#define VkglTestCase_040639_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040639_2 "basic_types.separate.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040639, VkglTestCase_040639_1, VkglTestCase_040639_2);

#define VkglTestCase_040640_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040640_2 ".basic_types.separate.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040640, VkglTestCase_040640_1, VkglTestCase_040640_2);

#define VkglTestCase_040641_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040641_2 "k.basic_types.separate.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040641, VkglTestCase_040641_1, VkglTestCase_040641_2);

#define VkglTestCase_040642_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040642_2 "basic_types.separate.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040642, VkglTestCase_040642_1, VkglTestCase_040642_2);

#define VkglTestCase_040643_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040643_2 ".basic_types.separate.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040643, VkglTestCase_040643_1, VkglTestCase_040643_2);

#define VkglTestCase_040644_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040644_2 "k.basic_types.separate.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040644, VkglTestCase_040644_1, VkglTestCase_040644_2);

#define VkglTestCase_040645_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040645_2 "basic_types.separate.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040645, VkglTestCase_040645_1, VkglTestCase_040645_2);

#define VkglTestCase_040646_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040646_2 ".basic_types.separate.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040646, VkglTestCase_040646_1, VkglTestCase_040646_2);

#define VkglTestCase_040647_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040647_2 "ck.basic_types.separate.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040647, VkglTestCase_040647_1, VkglTestCase_040647_2);

#define VkglTestCase_040648_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040648_2 ".basic_types.separate.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040648, VkglTestCase_040648_1, VkglTestCase_040648_2);

#define VkglTestCase_040649_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040649_2 "k.basic_types.separate.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040649, VkglTestCase_040649_1, VkglTestCase_040649_2);

#define VkglTestCase_040650_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040650_2 "ck.basic_types.separate.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040650, VkglTestCase_040650_1, VkglTestCase_040650_2);

#define VkglTestCase_040651_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040651_2 "k.basic_types.separate.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040651, VkglTestCase_040651_1, VkglTestCase_040651_2);

#define VkglTestCase_040652_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040652_2 "ck.basic_types.separate.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040652, VkglTestCase_040652_1, VkglTestCase_040652_2);

#define VkglTestCase_040653_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040653_2 "k.basic_types.separate.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040653, VkglTestCase_040653_1, VkglTestCase_040653_2);

#define VkglTestCase_040654_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040654_2 ".basic_types.separate.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040654, VkglTestCase_040654_1, VkglTestCase_040654_2);

#define VkglTestCase_040655_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040655_2 "k.basic_types.separate.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040655, VkglTestCase_040655_1, VkglTestCase_040655_2);

#define VkglTestCase_040656_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040656_2 "k.basic_types.separate.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040656, VkglTestCase_040656_1, VkglTestCase_040656_2);

#define VkglTestCase_040657_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040657_2 ".basic_types.separate.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040657, VkglTestCase_040657_1, VkglTestCase_040657_2);

#define VkglTestCase_040658_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040658_2 "k.basic_types.separate.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040658, VkglTestCase_040658_1, VkglTestCase_040658_2);

#define VkglTestCase_040659_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040659_2 "k.basic_types.separate.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040659, VkglTestCase_040659_1, VkglTestCase_040659_2);

#define VkglTestCase_040660_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040660_2 ".basic_types.separate.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040660, VkglTestCase_040660_1, VkglTestCase_040660_2);

#define VkglTestCase_040661_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040661_2 "k.basic_types.separate.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040661, VkglTestCase_040661_1, VkglTestCase_040661_2);

#define VkglTestCase_040662_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040662_2 "ck.basic_types.separate.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040662, VkglTestCase_040662_1, VkglTestCase_040662_2);

#define VkglTestCase_040663_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040663_2 ".basic_types.separate.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040663, VkglTestCase_040663_1, VkglTestCase_040663_2);

#define VkglTestCase_040664_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040664_2 "k.basic_types.separate.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040664, VkglTestCase_040664_1, VkglTestCase_040664_2);

#define VkglTestCase_040665_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040665_2 "k.basic_types.separate.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040665, VkglTestCase_040665_1, VkglTestCase_040665_2);

#define VkglTestCase_040666_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040666_2 ".basic_types.separate.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040666, VkglTestCase_040666_1, VkglTestCase_040666_2);

#define VkglTestCase_040667_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040667_2 "k.basic_types.separate.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040667, VkglTestCase_040667_1, VkglTestCase_040667_2);

#define VkglTestCase_040668_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040668_2 "k.basic_types.separate.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040668, VkglTestCase_040668_1, VkglTestCase_040668_2);

#define VkglTestCase_040669_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040669_2 ".basic_types.separate.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040669, VkglTestCase_040669_1, VkglTestCase_040669_2);

#define VkglTestCase_040670_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040670_2 "k.basic_types.separate.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040670, VkglTestCase_040670_1, VkglTestCase_040670_2);

#define VkglTestCase_040671_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040671_2 "k.basic_types.separate.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040671, VkglTestCase_040671_1, VkglTestCase_040671_2);

#define VkglTestCase_040672_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040672_2 ".basic_types.separate.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040672, VkglTestCase_040672_1, VkglTestCase_040672_2);

#define VkglTestCase_040673_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040673_2 "k.basic_types.separate.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040673, VkglTestCase_040673_1, VkglTestCase_040673_2);

#define VkglTestCase_040989_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040989_2 "back.array.separate.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040989, VkglTestCase_040989_1, VkglTestCase_040989_2);

#define VkglTestCase_040990_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040990_2 "ack.array.separate.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040990, VkglTestCase_040990_1, VkglTestCase_040990_2);

#define VkglTestCase_040991_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040991_2 "back.array.separate.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040991, VkglTestCase_040991_1, VkglTestCase_040991_2);

#define VkglTestCase_040992_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040992_2 "dback.array.separate.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040992, VkglTestCase_040992_1, VkglTestCase_040992_2);

#define VkglTestCase_040993_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040993_2 "ack.array.separate.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040993, VkglTestCase_040993_1, VkglTestCase_040993_2);

#define VkglTestCase_040994_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040994_2 "back.array.separate.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040994, VkglTestCase_040994_1, VkglTestCase_040994_2);

#define VkglTestCase_040995_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040995_2 "dback.array.separate.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040995, VkglTestCase_040995_1, VkglTestCase_040995_2);

#define VkglTestCase_040996_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040996_2 "ack.array.separate.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040996, VkglTestCase_040996_1, VkglTestCase_040996_2);

#define VkglTestCase_040997_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040997_2 "back.array.separate.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040997, VkglTestCase_040997_1, VkglTestCase_040997_2);

#define VkglTestCase_040998_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040998_2 "dback.array.separate.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040998, VkglTestCase_040998_1, VkglTestCase_040998_2);

#define VkglTestCase_040999_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040999_2 "ack.array.separate.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040999, VkglTestCase_040999_1, VkglTestCase_040999_2);

#define VkglTestCase_041000_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041000_2 "back.array.separate.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041000, VkglTestCase_041000_1, VkglTestCase_041000_2);

#define VkglTestCase_041001_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041001_2 "dback.array.separate.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041001, VkglTestCase_041001_1, VkglTestCase_041001_2);

#define VkglTestCase_041002_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041002_2 "ack.array.separate.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041002, VkglTestCase_041002_1, VkglTestCase_041002_2);

#define VkglTestCase_041003_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041003_2 "back.array.separate.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041003, VkglTestCase_041003_1, VkglTestCase_041003_2);

#define VkglTestCase_041004_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041004_2 "back.array.separate.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041004, VkglTestCase_041004_1, VkglTestCase_041004_2);

#define VkglTestCase_041005_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041005_2 "ck.array.separate.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041005, VkglTestCase_041005_1, VkglTestCase_041005_2);

#define VkglTestCase_041006_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041006_2 "ack.array.separate.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041006, VkglTestCase_041006_1, VkglTestCase_041006_2);

#define VkglTestCase_041007_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041007_2 "back.array.separate.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041007, VkglTestCase_041007_1, VkglTestCase_041007_2);

#define VkglTestCase_041008_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041008_2 "ck.array.separate.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041008, VkglTestCase_041008_1, VkglTestCase_041008_2);

#define VkglTestCase_041009_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041009_2 "ack.array.separate.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041009, VkglTestCase_041009_1, VkglTestCase_041009_2);

#define VkglTestCase_041010_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041010_2 "back.array.separate.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041010, VkglTestCase_041010_1, VkglTestCase_041010_2);

#define VkglTestCase_041011_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041011_2 "ck.array.separate.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041011, VkglTestCase_041011_1, VkglTestCase_041011_2);

#define VkglTestCase_041012_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041012_2 "ack.array.separate.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041012, VkglTestCase_041012_1, VkglTestCase_041012_2);

#define VkglTestCase_041013_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041013_2 "dback.array.separate.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041013, VkglTestCase_041013_1, VkglTestCase_041013_2);

#define VkglTestCase_041014_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041014_2 "ack.array.separate.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041014, VkglTestCase_041014_1, VkglTestCase_041014_2);

#define VkglTestCase_041015_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041015_2 "back.array.separate.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041015, VkglTestCase_041015_1, VkglTestCase_041015_2);

#define VkglTestCase_041016_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041016_2 "back.array.separate.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041016, VkglTestCase_041016_1, VkglTestCase_041016_2);

#define VkglTestCase_041017_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041017_2 "ck.array.separate.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041017, VkglTestCase_041017_1, VkglTestCase_041017_2);

#define VkglTestCase_041018_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041018_2 "ack.array.separate.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041018, VkglTestCase_041018_1, VkglTestCase_041018_2);

#define VkglTestCase_041019_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041019_2 "back.array.separate.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041019, VkglTestCase_041019_1, VkglTestCase_041019_2);

#define VkglTestCase_041020_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041020_2 "ck.array.separate.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041020, VkglTestCase_041020_1, VkglTestCase_041020_2);

#define VkglTestCase_041021_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041021_2 "ack.array.separate.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041021, VkglTestCase_041021_1, VkglTestCase_041021_2);

#define VkglTestCase_041022_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041022_2 "back.array.separate.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041022, VkglTestCase_041022_1, VkglTestCase_041022_2);

#define VkglTestCase_041023_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041023_2 "ck.array.separate.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041023, VkglTestCase_041023_1, VkglTestCase_041023_2);

#define VkglTestCase_041024_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041024_2 "ack.array.separate.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041024, VkglTestCase_041024_1, VkglTestCase_041024_2);

#define VkglTestCase_041025_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041025_2 "dback.array.separate.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041025, VkglTestCase_041025_1, VkglTestCase_041025_2);

#define VkglTestCase_041026_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041026_2 "ack.array.separate.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041026, VkglTestCase_041026_1, VkglTestCase_041026_2);

#define VkglTestCase_041027_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041027_2 "back.array.separate.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041027, VkglTestCase_041027_1, VkglTestCase_041027_2);

#define VkglTestCase_041028_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041028_2 "dback.array.separate.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041028, VkglTestCase_041028_1, VkglTestCase_041028_2);

#define VkglTestCase_041029_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041029_2 "back.array.separate.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041029, VkglTestCase_041029_1, VkglTestCase_041029_2);

#define VkglTestCase_041030_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041030_2 "dback.array.separate.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041030, VkglTestCase_041030_1, VkglTestCase_041030_2);

#define VkglTestCase_041031_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041031_2 "back.array.separate.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041031, VkglTestCase_041031_1, VkglTestCase_041031_2);

#define VkglTestCase_041032_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041032_2 "ack.array.separate.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041032, VkglTestCase_041032_1, VkglTestCase_041032_2);

#define VkglTestCase_041033_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041033_2 "back.array.separate.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041033, VkglTestCase_041033_1, VkglTestCase_041033_2);

#define VkglTestCase_041034_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041034_2 "back.array.separate.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041034, VkglTestCase_041034_1, VkglTestCase_041034_2);

#define VkglTestCase_041035_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041035_2 "ack.array.separate.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041035, VkglTestCase_041035_1, VkglTestCase_041035_2);

#define VkglTestCase_041036_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041036_2 "back.array.separate.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041036, VkglTestCase_041036_1, VkglTestCase_041036_2);

#define VkglTestCase_041037_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041037_2 "back.array.separate.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041037, VkglTestCase_041037_1, VkglTestCase_041037_2);

#define VkglTestCase_041038_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041038_2 "ack.array.separate.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041038, VkglTestCase_041038_1, VkglTestCase_041038_2);

#define VkglTestCase_041039_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041039_2 "back.array.separate.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041039, VkglTestCase_041039_1, VkglTestCase_041039_2);

#define VkglTestCase_041040_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041040_2 "dback.array.separate.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041040, VkglTestCase_041040_1, VkglTestCase_041040_2);

#define VkglTestCase_041041_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041041_2 "ack.array.separate.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041041, VkglTestCase_041041_1, VkglTestCase_041041_2);

#define VkglTestCase_041042_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041042_2 "back.array.separate.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041042, VkglTestCase_041042_1, VkglTestCase_041042_2);

#define VkglTestCase_041043_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041043_2 "back.array.separate.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041043, VkglTestCase_041043_1, VkglTestCase_041043_2);

#define VkglTestCase_041044_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041044_2 "ack.array.separate.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041044, VkglTestCase_041044_1, VkglTestCase_041044_2);

#define VkglTestCase_041045_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041045_2 "back.array.separate.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041045, VkglTestCase_041045_1, VkglTestCase_041045_2);

#define VkglTestCase_041046_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041046_2 "back.array.separate.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041046, VkglTestCase_041046_1, VkglTestCase_041046_2);

#define VkglTestCase_041047_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041047_2 "ack.array.separate.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041047, VkglTestCase_041047_1, VkglTestCase_041047_2);

#define VkglTestCase_041048_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041048_2 "back.array.separate.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041048, VkglTestCase_041048_1, VkglTestCase_041048_2);

#define VkglTestCase_041049_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041049_2 "back.array.separate.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041049, VkglTestCase_041049_1, VkglTestCase_041049_2);

#define VkglTestCase_041050_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041050_2 "ack.array.separate.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041050, VkglTestCase_041050_1, VkglTestCase_041050_2);

#define VkglTestCase_041051_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041051_2 "back.array.separate.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041051, VkglTestCase_041051_1, VkglTestCase_041051_2);

#define VkglTestCase_041367_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041367_2 ".array_element.separate.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041367, VkglTestCase_041367_1, VkglTestCase_041367_2);

#define VkglTestCase_041368_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041368_2 "array_element.separate.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041368, VkglTestCase_041368_1, VkglTestCase_041368_2);

#define VkglTestCase_041369_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041369_2 ".array_element.separate.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041369, VkglTestCase_041369_1, VkglTestCase_041369_2);

#define VkglTestCase_041370_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041370_2 "k.array_element.separate.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041370, VkglTestCase_041370_1, VkglTestCase_041370_2);

#define VkglTestCase_041371_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041371_2 "array_element.separate.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041371, VkglTestCase_041371_1, VkglTestCase_041371_2);

#define VkglTestCase_041372_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041372_2 ".array_element.separate.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041372, VkglTestCase_041372_1, VkglTestCase_041372_2);

#define VkglTestCase_041373_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041373_2 "k.array_element.separate.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041373, VkglTestCase_041373_1, VkglTestCase_041373_2);

#define VkglTestCase_041374_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041374_2 "array_element.separate.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041374, VkglTestCase_041374_1, VkglTestCase_041374_2);

#define VkglTestCase_041375_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041375_2 ".array_element.separate.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041375, VkglTestCase_041375_1, VkglTestCase_041375_2);

#define VkglTestCase_041376_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041376_2 "k.array_element.separate.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041376, VkglTestCase_041376_1, VkglTestCase_041376_2);

#define VkglTestCase_041377_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041377_2 "array_element.separate.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041377, VkglTestCase_041377_1, VkglTestCase_041377_2);

#define VkglTestCase_041378_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041378_2 ".array_element.separate.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041378, VkglTestCase_041378_1, VkglTestCase_041378_2);

#define VkglTestCase_041379_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041379_2 "k.array_element.separate.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041379, VkglTestCase_041379_1, VkglTestCase_041379_2);

#define VkglTestCase_041380_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041380_2 "array_element.separate.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041380, VkglTestCase_041380_1, VkglTestCase_041380_2);

#define VkglTestCase_041381_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041381_2 ".array_element.separate.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041381, VkglTestCase_041381_1, VkglTestCase_041381_2);

#define VkglTestCase_041382_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041382_2 ".array_element.separate.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041382, VkglTestCase_041382_1, VkglTestCase_041382_2);

#define VkglTestCase_041383_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041383_2 "rray_element.separate.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041383, VkglTestCase_041383_1, VkglTestCase_041383_2);

#define VkglTestCase_041384_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041384_2 "array_element.separate.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041384, VkglTestCase_041384_1, VkglTestCase_041384_2);

#define VkglTestCase_041385_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041385_2 ".array_element.separate.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041385, VkglTestCase_041385_1, VkglTestCase_041385_2);

#define VkglTestCase_041386_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041386_2 "rray_element.separate.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041386, VkglTestCase_041386_1, VkglTestCase_041386_2);

#define VkglTestCase_041387_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041387_2 "array_element.separate.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041387, VkglTestCase_041387_1, VkglTestCase_041387_2);

#define VkglTestCase_041388_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041388_2 ".array_element.separate.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041388, VkglTestCase_041388_1, VkglTestCase_041388_2);

#define VkglTestCase_041389_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041389_2 "rray_element.separate.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041389, VkglTestCase_041389_1, VkglTestCase_041389_2);

#define VkglTestCase_041390_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041390_2 "array_element.separate.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041390, VkglTestCase_041390_1, VkglTestCase_041390_2);

#define VkglTestCase_041391_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041391_2 "k.array_element.separate.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041391, VkglTestCase_041391_1, VkglTestCase_041391_2);

#define VkglTestCase_041392_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041392_2 "array_element.separate.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041392, VkglTestCase_041392_1, VkglTestCase_041392_2);

#define VkglTestCase_041393_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041393_2 ".array_element.separate.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041393, VkglTestCase_041393_1, VkglTestCase_041393_2);

#define VkglTestCase_041394_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041394_2 ".array_element.separate.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041394, VkglTestCase_041394_1, VkglTestCase_041394_2);

#define VkglTestCase_041395_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041395_2 "rray_element.separate.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041395, VkglTestCase_041395_1, VkglTestCase_041395_2);

#define VkglTestCase_041396_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041396_2 "array_element.separate.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041396, VkglTestCase_041396_1, VkglTestCase_041396_2);

#define VkglTestCase_041397_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041397_2 ".array_element.separate.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041397, VkglTestCase_041397_1, VkglTestCase_041397_2);

#define VkglTestCase_041398_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041398_2 "rray_element.separate.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041398, VkglTestCase_041398_1, VkglTestCase_041398_2);

#define VkglTestCase_041399_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041399_2 "array_element.separate.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041399, VkglTestCase_041399_1, VkglTestCase_041399_2);

#define VkglTestCase_041400_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041400_2 ".array_element.separate.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041400, VkglTestCase_041400_1, VkglTestCase_041400_2);

#define VkglTestCase_041401_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041401_2 "rray_element.separate.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041401, VkglTestCase_041401_1, VkglTestCase_041401_2);

#define VkglTestCase_041402_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041402_2 "array_element.separate.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041402, VkglTestCase_041402_1, VkglTestCase_041402_2);

#define VkglTestCase_041403_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041403_2 "k.array_element.separate.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041403, VkglTestCase_041403_1, VkglTestCase_041403_2);

#define VkglTestCase_041404_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041404_2 "array_element.separate.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041404, VkglTestCase_041404_1, VkglTestCase_041404_2);

#define VkglTestCase_041405_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041405_2 ".array_element.separate.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041405, VkglTestCase_041405_1, VkglTestCase_041405_2);

#define VkglTestCase_041406_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041406_2 "k.array_element.separate.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041406, VkglTestCase_041406_1, VkglTestCase_041406_2);

#define VkglTestCase_041407_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041407_2 ".array_element.separate.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041407, VkglTestCase_041407_1, VkglTestCase_041407_2);

#define VkglTestCase_041408_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041408_2 "k.array_element.separate.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041408, VkglTestCase_041408_1, VkglTestCase_041408_2);

#define VkglTestCase_041409_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041409_2 ".array_element.separate.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041409, VkglTestCase_041409_1, VkglTestCase_041409_2);

#define VkglTestCase_041410_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041410_2 "array_element.separate.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041410, VkglTestCase_041410_1, VkglTestCase_041410_2);

#define VkglTestCase_041411_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041411_2 ".array_element.separate.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041411, VkglTestCase_041411_1, VkglTestCase_041411_2);

#define VkglTestCase_041412_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041412_2 ".array_element.separate.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041412, VkglTestCase_041412_1, VkglTestCase_041412_2);

#define VkglTestCase_041413_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041413_2 "array_element.separate.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041413, VkglTestCase_041413_1, VkglTestCase_041413_2);

#define VkglTestCase_041414_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041414_2 ".array_element.separate.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041414, VkglTestCase_041414_1, VkglTestCase_041414_2);

#define VkglTestCase_041415_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041415_2 ".array_element.separate.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041415, VkglTestCase_041415_1, VkglTestCase_041415_2);

#define VkglTestCase_041416_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041416_2 "array_element.separate.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041416, VkglTestCase_041416_1, VkglTestCase_041416_2);

#define VkglTestCase_041417_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041417_2 ".array_element.separate.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041417, VkglTestCase_041417_1, VkglTestCase_041417_2);

#define VkglTestCase_041418_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041418_2 "k.array_element.separate.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041418, VkglTestCase_041418_1, VkglTestCase_041418_2);

#define VkglTestCase_041419_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041419_2 "array_element.separate.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041419, VkglTestCase_041419_1, VkglTestCase_041419_2);

#define VkglTestCase_041420_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041420_2 ".array_element.separate.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041420, VkglTestCase_041420_1, VkglTestCase_041420_2);

#define VkglTestCase_041421_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041421_2 ".array_element.separate.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041421, VkglTestCase_041421_1, VkglTestCase_041421_2);

#define VkglTestCase_041422_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041422_2 "array_element.separate.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041422, VkglTestCase_041422_1, VkglTestCase_041422_2);

#define VkglTestCase_041423_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041423_2 ".array_element.separate.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041423, VkglTestCase_041423_1, VkglTestCase_041423_2);

#define VkglTestCase_041424_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041424_2 ".array_element.separate.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041424, VkglTestCase_041424_1, VkglTestCase_041424_2);

#define VkglTestCase_041425_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041425_2 "array_element.separate.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041425, VkglTestCase_041425_1, VkglTestCase_041425_2);

#define VkglTestCase_041426_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041426_2 ".array_element.separate.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041426, VkglTestCase_041426_1, VkglTestCase_041426_2);

#define VkglTestCase_041427_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041427_2 ".array_element.separate.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041427, VkglTestCase_041427_1, VkglTestCase_041427_2);

#define VkglTestCase_041428_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041428_2 "array_element.separate.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041428, VkglTestCase_041428_1, VkglTestCase_041428_2);

#define VkglTestCase_041429_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041429_2 ".array_element.separate.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041429, VkglTestCase_041429_1, VkglTestCase_041429_2);

#define VkglTestCase_041746_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041746_2 "feedback.random.separate.lines.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041746, VkglTestCase_041746_1, VkglTestCase_041746_2);

#define VkglTestCase_041747_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041747_2 "feedback.random.separate.lines.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041747, VkglTestCase_041747_1, VkglTestCase_041747_2);

#define VkglTestCase_041748_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041748_2 "feedback.random.separate.lines.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041748, VkglTestCase_041748_1, VkglTestCase_041748_2);

#define VkglTestCase_041749_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041749_2 "feedback.random.separate.lines.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041749, VkglTestCase_041749_1, VkglTestCase_041749_2);

#define VkglTestCase_041750_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041750_2 "feedback.random.separate.lines.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041750, VkglTestCase_041750_1, VkglTestCase_041750_2);

#define VkglTestCase_041751_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041751_2 "feedback.random.separate.lines.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041751, VkglTestCase_041751_1, VkglTestCase_041751_2);

#define VkglTestCase_041752_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041752_2 "feedback.random.separate.lines.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041752, VkglTestCase_041752_1, VkglTestCase_041752_2);

#define VkglTestCase_041753_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041753_2 "feedback.random.separate.lines.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041753, VkglTestCase_041753_1, VkglTestCase_041753_2);

#define VkglTestCase_041754_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041754_2 "feedback.random.separate.lines.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041754, VkglTestCase_041754_1, VkglTestCase_041754_2);

#define VkglTestCase_041755_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041755_2 "feedback.random.separate.lines.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041755, VkglTestCase_041755_1, VkglTestCase_041755_2);

#define VkglTestCase_041806_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041806_2 "random_full_array_capture.separate.lines.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041806, VkglTestCase_041806_1, VkglTestCase_041806_2);

#define VkglTestCase_041807_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041807_2 "random_full_array_capture.separate.lines.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041807, VkglTestCase_041807_1, VkglTestCase_041807_2);

#define VkglTestCase_041808_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041808_2 "random_full_array_capture.separate.lines.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041808, VkglTestCase_041808_1, VkglTestCase_041808_2);

#define VkglTestCase_041809_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041809_2 "random_full_array_capture.separate.lines.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041809, VkglTestCase_041809_1, VkglTestCase_041809_2);

#define VkglTestCase_041810_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041810_2 "random_full_array_capture.separate.lines.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041810, VkglTestCase_041810_1, VkglTestCase_041810_2);

#define VkglTestCase_041811_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041811_2 "random_full_array_capture.separate.lines.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041811, VkglTestCase_041811_1, VkglTestCase_041811_2);

#define VkglTestCase_041812_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041812_2 "random_full_array_capture.separate.lines.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041812, VkglTestCase_041812_1, VkglTestCase_041812_2);

#define VkglTestCase_041813_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041813_2 "random_full_array_capture.separate.lines.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041813, VkglTestCase_041813_1, VkglTestCase_041813_2);

#define VkglTestCase_041814_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041814_2 "random_full_array_capture.separate.lines.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041814, VkglTestCase_041814_1, VkglTestCase_041814_2);

#define VkglTestCase_041815_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041815_2 "andom_full_array_capture.separate.lines.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041815, VkglTestCase_041815_1, VkglTestCase_041815_2);
