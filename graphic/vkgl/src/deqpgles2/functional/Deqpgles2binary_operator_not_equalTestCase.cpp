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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005670_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005670_2 "nary_operator.not_equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005670, VkglTestCase_005670_1, VkglTestCase_005670_2);

#define VkglTestCase_005671_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005671_2 "ary_operator.not_equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005671, VkglTestCase_005671_1, VkglTestCase_005671_2);

#define VkglTestCase_005672_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005672_2 "ary_operator.not_equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005672, VkglTestCase_005672_1, VkglTestCase_005672_2);

#define VkglTestCase_005673_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005673_2 "ry_operator.not_equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005673, VkglTestCase_005673_1, VkglTestCase_005673_2);

#define VkglTestCase_005674_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005674_2 "nary_operator.not_equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005674, VkglTestCase_005674_1, VkglTestCase_005674_2);

#define VkglTestCase_005675_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005675_2 "ary_operator.not_equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005675, VkglTestCase_005675_1, VkglTestCase_005675_2);

#define VkglTestCase_005676_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005676_2 "inary_operator.not_equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005676, VkglTestCase_005676_1, VkglTestCase_005676_2);

#define VkglTestCase_005677_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005677_2 "nary_operator.not_equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005677, VkglTestCase_005677_1, VkglTestCase_005677_2);

#define VkglTestCase_005678_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005678_2 "ary_operator.not_equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005678, VkglTestCase_005678_1, VkglTestCase_005678_2);

#define VkglTestCase_005679_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005679_2 "ry_operator.not_equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005679, VkglTestCase_005679_1, VkglTestCase_005679_2);

#define VkglTestCase_005680_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005680_2 "nary_operator.not_equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005680, VkglTestCase_005680_1, VkglTestCase_005680_2);

#define VkglTestCase_005681_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005681_2 "ary_operator.not_equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005681, VkglTestCase_005681_1, VkglTestCase_005681_2);

#define VkglTestCase_005682_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005682_2 "inary_operator.not_equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005682, VkglTestCase_005682_1, VkglTestCase_005682_2);

#define VkglTestCase_005683_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005683_2 "nary_operator.not_equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005683, VkglTestCase_005683_1, VkglTestCase_005683_2);

#define VkglTestCase_005684_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005684_2 "ary_operator.not_equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005684, VkglTestCase_005684_1, VkglTestCase_005684_2);

#define VkglTestCase_005685_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005685_2 "ry_operator.not_equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005685, VkglTestCase_005685_1, VkglTestCase_005685_2);

#define VkglTestCase_005686_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005686_2 "nary_operator.not_equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005686, VkglTestCase_005686_1, VkglTestCase_005686_2);

#define VkglTestCase_005687_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005687_2 "ary_operator.not_equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005687, VkglTestCase_005687_1, VkglTestCase_005687_2);

#define VkglTestCase_005688_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005688_2 "inary_operator.not_equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005688, VkglTestCase_005688_1, VkglTestCase_005688_2);

#define VkglTestCase_005689_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005689_2 "nary_operator.not_equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005689, VkglTestCase_005689_1, VkglTestCase_005689_2);

#define VkglTestCase_005690_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005690_2 "ary_operator.not_equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005690, VkglTestCase_005690_1, VkglTestCase_005690_2);

#define VkglTestCase_005691_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005691_2 "ry_operator.not_equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005691, VkglTestCase_005691_1, VkglTestCase_005691_2);

#define VkglTestCase_005692_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005692_2 "nary_operator.not_equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005692, VkglTestCase_005692_1, VkglTestCase_005692_2);

#define VkglTestCase_005693_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005693_2 "ary_operator.not_equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005693, VkglTestCase_005693_1, VkglTestCase_005693_2);

#define VkglTestCase_005694_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005694_2 "inary_operator.not_equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005694, VkglTestCase_005694_1, VkglTestCase_005694_2);

#define VkglTestCase_005695_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005695_2 "nary_operator.not_equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005695, VkglTestCase_005695_1, VkglTestCase_005695_2);

#define VkglTestCase_005696_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005696_2 "nary_operator.not_equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005696, VkglTestCase_005696_1, VkglTestCase_005696_2);

#define VkglTestCase_005697_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005697_2 "ary_operator.not_equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005697, VkglTestCase_005697_1, VkglTestCase_005697_2);

#define VkglTestCase_005698_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005698_2 "inary_operator.not_equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005698, VkglTestCase_005698_1, VkglTestCase_005698_2);

#define VkglTestCase_005699_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005699_2 "nary_operator.not_equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005699, VkglTestCase_005699_1, VkglTestCase_005699_2);

#define VkglTestCase_005700_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005700_2 "nary_operator.not_equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005700, VkglTestCase_005700_1, VkglTestCase_005700_2);

#define VkglTestCase_005701_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005701_2 "ary_operator.not_equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005701, VkglTestCase_005701_1, VkglTestCase_005701_2);

#define VkglTestCase_005702_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005702_2 "ary_operator.not_equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005702, VkglTestCase_005702_1, VkglTestCase_005702_2);

#define VkglTestCase_005703_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005703_2 "ry_operator.not_equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005703, VkglTestCase_005703_1, VkglTestCase_005703_2);

#define VkglTestCase_005704_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005704_2 "nary_operator.not_equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005704, VkglTestCase_005704_1, VkglTestCase_005704_2);

#define VkglTestCase_005705_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005705_2 "ary_operator.not_equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005705, VkglTestCase_005705_1, VkglTestCase_005705_2);

#define VkglTestCase_005706_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005706_2 "nary_operator.not_equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005706, VkglTestCase_005706_1, VkglTestCase_005706_2);

#define VkglTestCase_005707_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005707_2 "ary_operator.not_equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005707, VkglTestCase_005707_1, VkglTestCase_005707_2);

#define VkglTestCase_005708_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005708_2 "ary_operator.not_equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005708, VkglTestCase_005708_1, VkglTestCase_005708_2);

#define VkglTestCase_005709_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005709_2 "ry_operator.not_equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005709, VkglTestCase_005709_1, VkglTestCase_005709_2);

#define VkglTestCase_005710_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005710_2 "nary_operator.not_equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005710, VkglTestCase_005710_1, VkglTestCase_005710_2);

#define VkglTestCase_005711_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005711_2 "ary_operator.not_equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005711, VkglTestCase_005711_1, VkglTestCase_005711_2);

#define VkglTestCase_005712_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005712_2 "nary_operator.not_equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005712, VkglTestCase_005712_1, VkglTestCase_005712_2);

#define VkglTestCase_005713_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005713_2 "ary_operator.not_equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005713, VkglTestCase_005713_1, VkglTestCase_005713_2);

#define VkglTestCase_005714_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005714_2 "ary_operator.not_equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005714, VkglTestCase_005714_1, VkglTestCase_005714_2);

#define VkglTestCase_005715_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_005715_2 "ry_operator.not_equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005715, VkglTestCase_005715_1, VkglTestCase_005715_2);

#define VkglTestCase_005716_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005716_2 "nary_operator.not_equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005716, VkglTestCase_005716_1, VkglTestCase_005716_2);

#define VkglTestCase_005717_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_005717_2 "ary_operator.not_equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005717, VkglTestCase_005717_1, VkglTestCase_005717_2);

#define VkglTestCase_005718_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005718_2 ".binary_operator.not_equal.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005718, VkglTestCase_005718_1, VkglTestCase_005718_2);

#define VkglTestCase_005719_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005719_2 "binary_operator.not_equal.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005719, VkglTestCase_005719_1, VkglTestCase_005719_2);

#define VkglTestCase_005720_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005720_2 ".binary_operator.not_equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005720, VkglTestCase_005720_1, VkglTestCase_005720_2);

#define VkglTestCase_005721_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005721_2 "binary_operator.not_equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005721, VkglTestCase_005721_1, VkglTestCase_005721_2);

#define VkglTestCase_005722_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005722_2 ".binary_operator.not_equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005722, VkglTestCase_005722_1, VkglTestCase_005722_2);

#define VkglTestCase_005723_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005723_2 "binary_operator.not_equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005723, VkglTestCase_005723_1, VkglTestCase_005723_2);

#define VkglTestCase_005724_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005724_2 ".binary_operator.not_equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005724, VkglTestCase_005724_1, VkglTestCase_005724_2);

#define VkglTestCase_005725_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005725_2 "binary_operator.not_equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005725, VkglTestCase_005725_1, VkglTestCase_005725_2);
