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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004654_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004654_2 ".binary_operator.mul.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004654, VkglTestCase_004654_1, VkglTestCase_004654_2);

#define VkglTestCase_004655_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004655_2 "binary_operator.mul.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004655, VkglTestCase_004655_1, VkglTestCase_004655_2);

#define VkglTestCase_004656_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004656_2 "binary_operator.mul.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004656, VkglTestCase_004656_1, VkglTestCase_004656_2);

#define VkglTestCase_004657_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004657_2 "inary_operator.mul.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004657, VkglTestCase_004657_1, VkglTestCase_004657_2);

#define VkglTestCase_004658_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004658_2 ".binary_operator.mul.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004658, VkglTestCase_004658_1, VkglTestCase_004658_2);

#define VkglTestCase_004659_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004659_2 "binary_operator.mul.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004659, VkglTestCase_004659_1, VkglTestCase_004659_2);

#define VkglTestCase_004660_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004660_2 "r.binary_operator.mul.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004660, VkglTestCase_004660_1, VkglTestCase_004660_2);

#define VkglTestCase_004661_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004661_2 ".binary_operator.mul.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004661, VkglTestCase_004661_1, VkglTestCase_004661_2);

#define VkglTestCase_004662_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004662_2 "binary_operator.mul.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004662, VkglTestCase_004662_1, VkglTestCase_004662_2);

#define VkglTestCase_004663_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004663_2 "inary_operator.mul.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004663, VkglTestCase_004663_1, VkglTestCase_004663_2);

#define VkglTestCase_004664_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004664_2 ".binary_operator.mul.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004664, VkglTestCase_004664_1, VkglTestCase_004664_2);

#define VkglTestCase_004665_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004665_2 "binary_operator.mul.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004665, VkglTestCase_004665_1, VkglTestCase_004665_2);

#define VkglTestCase_004666_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004666_2 "r.binary_operator.mul.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004666, VkglTestCase_004666_1, VkglTestCase_004666_2);

#define VkglTestCase_004667_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004667_2 ".binary_operator.mul.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004667, VkglTestCase_004667_1, VkglTestCase_004667_2);

#define VkglTestCase_004668_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004668_2 "binary_operator.mul.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004668, VkglTestCase_004668_1, VkglTestCase_004668_2);

#define VkglTestCase_004669_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004669_2 "inary_operator.mul.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004669, VkglTestCase_004669_1, VkglTestCase_004669_2);

#define VkglTestCase_004670_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004670_2 ".binary_operator.mul.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004670, VkglTestCase_004670_1, VkglTestCase_004670_2);

#define VkglTestCase_004671_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004671_2 "binary_operator.mul.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004671, VkglTestCase_004671_1, VkglTestCase_004671_2);

#define VkglTestCase_004672_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004672_2 "r.binary_operator.mul.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004672, VkglTestCase_004672_1, VkglTestCase_004672_2);

#define VkglTestCase_004673_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004673_2 ".binary_operator.mul.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004673, VkglTestCase_004673_1, VkglTestCase_004673_2);

#define VkglTestCase_004674_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004674_2 "binary_operator.mul.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004674, VkglTestCase_004674_1, VkglTestCase_004674_2);

#define VkglTestCase_004675_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004675_2 "inary_operator.mul.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004675, VkglTestCase_004675_1, VkglTestCase_004675_2);

#define VkglTestCase_004676_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004676_2 ".binary_operator.mul.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004676, VkglTestCase_004676_1, VkglTestCase_004676_2);

#define VkglTestCase_004677_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004677_2 "binary_operator.mul.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004677, VkglTestCase_004677_1, VkglTestCase_004677_2);

#define VkglTestCase_004678_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004678_2 "r.binary_operator.mul.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004678, VkglTestCase_004678_1, VkglTestCase_004678_2);

#define VkglTestCase_004679_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004679_2 ".binary_operator.mul.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004679, VkglTestCase_004679_1, VkglTestCase_004679_2);

#define VkglTestCase_004680_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004680_2 ".binary_operator.mul.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004680, VkglTestCase_004680_1, VkglTestCase_004680_2);

#define VkglTestCase_004681_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004681_2 "binary_operator.mul.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004681, VkglTestCase_004681_1, VkglTestCase_004681_2);

#define VkglTestCase_004682_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004682_2 "r.binary_operator.mul.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004682, VkglTestCase_004682_1, VkglTestCase_004682_2);

#define VkglTestCase_004683_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004683_2 ".binary_operator.mul.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004683, VkglTestCase_004683_1, VkglTestCase_004683_2);

#define VkglTestCase_004684_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004684_2 ".binary_operator.mul.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004684, VkglTestCase_004684_1, VkglTestCase_004684_2);

#define VkglTestCase_004685_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004685_2 "binary_operator.mul.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004685, VkglTestCase_004685_1, VkglTestCase_004685_2);

#define VkglTestCase_004686_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004686_2 "binary_operator.mul.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004686, VkglTestCase_004686_1, VkglTestCase_004686_2);

#define VkglTestCase_004687_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004687_2 "inary_operator.mul.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004687, VkglTestCase_004687_1, VkglTestCase_004687_2);

#define VkglTestCase_004688_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004688_2 ".binary_operator.mul.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004688, VkglTestCase_004688_1, VkglTestCase_004688_2);

#define VkglTestCase_004689_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004689_2 "binary_operator.mul.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004689, VkglTestCase_004689_1, VkglTestCase_004689_2);

#define VkglTestCase_004690_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004690_2 ".binary_operator.mul.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004690, VkglTestCase_004690_1, VkglTestCase_004690_2);

#define VkglTestCase_004691_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004691_2 "binary_operator.mul.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004691, VkglTestCase_004691_1, VkglTestCase_004691_2);

#define VkglTestCase_004692_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004692_2 "binary_operator.mul.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004692, VkglTestCase_004692_1, VkglTestCase_004692_2);

#define VkglTestCase_004693_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004693_2 "inary_operator.mul.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004693, VkglTestCase_004693_1, VkglTestCase_004693_2);

#define VkglTestCase_004694_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004694_2 ".binary_operator.mul.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004694, VkglTestCase_004694_1, VkglTestCase_004694_2);

#define VkglTestCase_004695_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004695_2 "binary_operator.mul.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004695, VkglTestCase_004695_1, VkglTestCase_004695_2);

#define VkglTestCase_004696_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004696_2 ".binary_operator.mul.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004696, VkglTestCase_004696_1, VkglTestCase_004696_2);

#define VkglTestCase_004697_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004697_2 "binary_operator.mul.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004697, VkglTestCase_004697_1, VkglTestCase_004697_2);

#define VkglTestCase_004698_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004698_2 "binary_operator.mul.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004698, VkglTestCase_004698_1, VkglTestCase_004698_2);

#define VkglTestCase_004699_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004699_2 "inary_operator.mul.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004699, VkglTestCase_004699_1, VkglTestCase_004699_2);

#define VkglTestCase_004700_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004700_2 ".binary_operator.mul.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004700, VkglTestCase_004700_1, VkglTestCase_004700_2);

#define VkglTestCase_004701_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004701_2 "binary_operator.mul.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004701, VkglTestCase_004701_1, VkglTestCase_004701_2);

#define VkglTestCase_004702_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004702_2 "inary_operator.mul.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004702, VkglTestCase_004702_1, VkglTestCase_004702_2);

#define VkglTestCase_004703_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004703_2 "nary_operator.mul.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004703, VkglTestCase_004703_1, VkglTestCase_004703_2);

#define VkglTestCase_004704_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004704_2 "ary_operator.mul.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004704, VkglTestCase_004704_1, VkglTestCase_004704_2);

#define VkglTestCase_004705_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004705_2 "ry_operator.mul.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004705, VkglTestCase_004705_1, VkglTestCase_004705_2);

#define VkglTestCase_004706_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004706_2 "nary_operator.mul.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004706, VkglTestCase_004706_1, VkglTestCase_004706_2);

#define VkglTestCase_004707_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004707_2 "ary_operator.mul.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004707, VkglTestCase_004707_1, VkglTestCase_004707_2);

#define VkglTestCase_004708_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004708_2 "inary_operator.mul.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004708, VkglTestCase_004708_1, VkglTestCase_004708_2);

#define VkglTestCase_004709_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004709_2 "nary_operator.mul.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004709, VkglTestCase_004709_1, VkglTestCase_004709_2);

#define VkglTestCase_004710_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004710_2 "ary_operator.mul.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004710, VkglTestCase_004710_1, VkglTestCase_004710_2);

#define VkglTestCase_004711_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004711_2 "ry_operator.mul.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004711, VkglTestCase_004711_1, VkglTestCase_004711_2);

#define VkglTestCase_004712_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004712_2 "nary_operator.mul.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004712, VkglTestCase_004712_1, VkglTestCase_004712_2);

#define VkglTestCase_004713_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004713_2 "ary_operator.mul.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004713, VkglTestCase_004713_1, VkglTestCase_004713_2);

#define VkglTestCase_004714_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004714_2 "inary_operator.mul.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004714, VkglTestCase_004714_1, VkglTestCase_004714_2);

#define VkglTestCase_004715_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004715_2 "nary_operator.mul.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004715, VkglTestCase_004715_1, VkglTestCase_004715_2);

#define VkglTestCase_004716_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004716_2 "ary_operator.mul.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004716, VkglTestCase_004716_1, VkglTestCase_004716_2);

#define VkglTestCase_004717_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004717_2 "ry_operator.mul.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004717, VkglTestCase_004717_1, VkglTestCase_004717_2);

#define VkglTestCase_004718_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004718_2 "nary_operator.mul.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004718, VkglTestCase_004718_1, VkglTestCase_004718_2);

#define VkglTestCase_004719_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004719_2 "ary_operator.mul.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004719, VkglTestCase_004719_1, VkglTestCase_004719_2);

#define VkglTestCase_004720_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004720_2 "inary_operator.mul.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004720, VkglTestCase_004720_1, VkglTestCase_004720_2);

#define VkglTestCase_004721_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004721_2 "nary_operator.mul.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004721, VkglTestCase_004721_1, VkglTestCase_004721_2);

#define VkglTestCase_004722_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004722_2 "nary_operator.mul.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004722, VkglTestCase_004722_1, VkglTestCase_004722_2);

#define VkglTestCase_004723_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004723_2 "ary_operator.mul.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004723, VkglTestCase_004723_1, VkglTestCase_004723_2);

#define VkglTestCase_004724_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004724_2 "inary_operator.mul.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004724, VkglTestCase_004724_1, VkglTestCase_004724_2);

#define VkglTestCase_004725_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004725_2 "nary_operator.mul.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004725, VkglTestCase_004725_1, VkglTestCase_004725_2);

#define VkglTestCase_004726_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004726_2 "inary_operator.mul.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004726, VkglTestCase_004726_1, VkglTestCase_004726_2);

#define VkglTestCase_004727_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004727_2 "nary_operator.mul.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004727, VkglTestCase_004727_1, VkglTestCase_004727_2);

#define VkglTestCase_004728_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004728_2 "nary_operator.mul.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004728, VkglTestCase_004728_1, VkglTestCase_004728_2);

#define VkglTestCase_004729_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004729_2 "ary_operator.mul.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004729, VkglTestCase_004729_1, VkglTestCase_004729_2);

#define VkglTestCase_004730_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004730_2 "inary_operator.mul.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004730, VkglTestCase_004730_1, VkglTestCase_004730_2);

#define VkglTestCase_004731_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004731_2 "nary_operator.mul.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004731, VkglTestCase_004731_1, VkglTestCase_004731_2);

#define VkglTestCase_004732_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004732_2 "inary_operator.mul.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004732, VkglTestCase_004732_1, VkglTestCase_004732_2);

#define VkglTestCase_004733_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004733_2 "nary_operator.mul.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004733, VkglTestCase_004733_1, VkglTestCase_004733_2);

#define VkglTestCase_004734_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004734_2 "nary_operator.mul.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004734, VkglTestCase_004734_1, VkglTestCase_004734_2);

#define VkglTestCase_004735_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004735_2 "ary_operator.mul.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004735, VkglTestCase_004735_1, VkglTestCase_004735_2);

#define VkglTestCase_004736_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004736_2 "inary_operator.mul.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004736, VkglTestCase_004736_1, VkglTestCase_004736_2);

#define VkglTestCase_004737_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004737_2 "nary_operator.mul.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004737, VkglTestCase_004737_1, VkglTestCase_004737_2);

#define VkglTestCase_004738_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004738_2 "inary_operator.mul.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004738, VkglTestCase_004738_1, VkglTestCase_004738_2);

#define VkglTestCase_004739_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004739_2 "nary_operator.mul.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004739, VkglTestCase_004739_1, VkglTestCase_004739_2);

#define VkglTestCase_004740_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004740_2 "ary_operator.mul.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004740, VkglTestCase_004740_1, VkglTestCase_004740_2);

#define VkglTestCase_004741_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004741_2 "ry_operator.mul.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004741, VkglTestCase_004741_1, VkglTestCase_004741_2);

#define VkglTestCase_004742_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004742_2 "nary_operator.mul.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004742, VkglTestCase_004742_1, VkglTestCase_004742_2);

#define VkglTestCase_004743_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004743_2 "ary_operator.mul.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004743, VkglTestCase_004743_1, VkglTestCase_004743_2);

#define VkglTestCase_004744_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004744_2 "inary_operator.mul.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004744, VkglTestCase_004744_1, VkglTestCase_004744_2);

#define VkglTestCase_004745_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004745_2 "nary_operator.mul.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004745, VkglTestCase_004745_1, VkglTestCase_004745_2);

#define VkglTestCase_004746_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004746_2 "ary_operator.mul.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004746, VkglTestCase_004746_1, VkglTestCase_004746_2);

#define VkglTestCase_004747_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004747_2 "ry_operator.mul.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004747, VkglTestCase_004747_1, VkglTestCase_004747_2);

#define VkglTestCase_004748_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004748_2 "nary_operator.mul.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004748, VkglTestCase_004748_1, VkglTestCase_004748_2);

#define VkglTestCase_004749_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004749_2 "ary_operator.mul.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004749, VkglTestCase_004749_1, VkglTestCase_004749_2);

#define VkglTestCase_004750_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004750_2 "inary_operator.mul.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004750, VkglTestCase_004750_1, VkglTestCase_004750_2);

#define VkglTestCase_004751_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004751_2 "nary_operator.mul.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004751, VkglTestCase_004751_1, VkglTestCase_004751_2);

#define VkglTestCase_004752_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004752_2 "ary_operator.mul.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004752, VkglTestCase_004752_1, VkglTestCase_004752_2);

#define VkglTestCase_004753_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004753_2 "ry_operator.mul.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004753, VkglTestCase_004753_1, VkglTestCase_004753_2);

#define VkglTestCase_004754_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004754_2 "nary_operator.mul.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004754, VkglTestCase_004754_1, VkglTestCase_004754_2);

#define VkglTestCase_004755_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004755_2 "ary_operator.mul.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004755, VkglTestCase_004755_1, VkglTestCase_004755_2);

#define VkglTestCase_004756_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004756_2 "inary_operator.mul.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004756, VkglTestCase_004756_1, VkglTestCase_004756_2);

#define VkglTestCase_004757_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004757_2 "nary_operator.mul.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004757, VkglTestCase_004757_1, VkglTestCase_004757_2);

#define VkglTestCase_004758_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004758_2 "nary_operator.mul.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004758, VkglTestCase_004758_1, VkglTestCase_004758_2);

#define VkglTestCase_004759_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004759_2 "ary_operator.mul.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004759, VkglTestCase_004759_1, VkglTestCase_004759_2);

#define VkglTestCase_004760_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004760_2 "inary_operator.mul.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004760, VkglTestCase_004760_1, VkglTestCase_004760_2);

#define VkglTestCase_004761_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004761_2 "nary_operator.mul.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004761, VkglTestCase_004761_1, VkglTestCase_004761_2);

#define VkglTestCase_004762_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004762_2 "inary_operator.mul.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004762, VkglTestCase_004762_1, VkglTestCase_004762_2);

#define VkglTestCase_004763_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004763_2 "nary_operator.mul.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004763, VkglTestCase_004763_1, VkglTestCase_004763_2);

#define VkglTestCase_004764_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004764_2 "nary_operator.mul.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004764, VkglTestCase_004764_1, VkglTestCase_004764_2);

#define VkglTestCase_004765_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004765_2 "ary_operator.mul.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004765, VkglTestCase_004765_1, VkglTestCase_004765_2);

#define VkglTestCase_004766_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004766_2 "inary_operator.mul.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004766, VkglTestCase_004766_1, VkglTestCase_004766_2);

#define VkglTestCase_004767_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004767_2 "nary_operator.mul.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004767, VkglTestCase_004767_1, VkglTestCase_004767_2);

#define VkglTestCase_004768_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004768_2 "inary_operator.mul.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004768, VkglTestCase_004768_1, VkglTestCase_004768_2);

#define VkglTestCase_004769_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004769_2 "nary_operator.mul.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004769, VkglTestCase_004769_1, VkglTestCase_004769_2);

#define VkglTestCase_004770_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004770_2 "nary_operator.mul.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004770, VkglTestCase_004770_1, VkglTestCase_004770_2);

#define VkglTestCase_004771_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004771_2 "ary_operator.mul.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004771, VkglTestCase_004771_1, VkglTestCase_004771_2);

#define VkglTestCase_004772_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004772_2 "inary_operator.mul.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004772, VkglTestCase_004772_1, VkglTestCase_004772_2);

#define VkglTestCase_004773_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004773_2 "nary_operator.mul.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004773, VkglTestCase_004773_1, VkglTestCase_004773_2);
