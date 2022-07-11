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

#define VkglTestCase_005614_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005614_2 "binary_operator.equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005614, VkglTestCase_005614_1, VkglTestCase_005614_2);

#define VkglTestCase_005615_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005615_2 "inary_operator.equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005615, VkglTestCase_005615_1, VkglTestCase_005615_2);

#define VkglTestCase_005616_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005616_2 "inary_operator.equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005616, VkglTestCase_005616_1, VkglTestCase_005616_2);

#define VkglTestCase_005617_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005617_2 "nary_operator.equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005617, VkglTestCase_005617_1, VkglTestCase_005617_2);

#define VkglTestCase_005618_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005618_2 "binary_operator.equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005618, VkglTestCase_005618_1, VkglTestCase_005618_2);

#define VkglTestCase_005619_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005619_2 "inary_operator.equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005619, VkglTestCase_005619_1, VkglTestCase_005619_2);

#define VkglTestCase_005620_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005620_2 ".binary_operator.equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005620, VkglTestCase_005620_1, VkglTestCase_005620_2);

#define VkglTestCase_005621_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005621_2 "binary_operator.equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005621, VkglTestCase_005621_1, VkglTestCase_005621_2);

#define VkglTestCase_005622_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005622_2 "inary_operator.equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005622, VkglTestCase_005622_1, VkglTestCase_005622_2);

#define VkglTestCase_005623_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005623_2 "nary_operator.equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005623, VkglTestCase_005623_1, VkglTestCase_005623_2);

#define VkglTestCase_005624_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005624_2 "binary_operator.equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005624, VkglTestCase_005624_1, VkglTestCase_005624_2);

#define VkglTestCase_005625_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005625_2 "inary_operator.equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005625, VkglTestCase_005625_1, VkglTestCase_005625_2);

#define VkglTestCase_005626_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005626_2 ".binary_operator.equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005626, VkglTestCase_005626_1, VkglTestCase_005626_2);

#define VkglTestCase_005627_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005627_2 "binary_operator.equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005627, VkglTestCase_005627_1, VkglTestCase_005627_2);

#define VkglTestCase_005628_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005628_2 "inary_operator.equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005628, VkglTestCase_005628_1, VkglTestCase_005628_2);

#define VkglTestCase_005629_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005629_2 "nary_operator.equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005629, VkglTestCase_005629_1, VkglTestCase_005629_2);

#define VkglTestCase_005630_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005630_2 "binary_operator.equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005630, VkglTestCase_005630_1, VkglTestCase_005630_2);

#define VkglTestCase_005631_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005631_2 "inary_operator.equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005631, VkglTestCase_005631_1, VkglTestCase_005631_2);

#define VkglTestCase_005632_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005632_2 ".binary_operator.equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005632, VkglTestCase_005632_1, VkglTestCase_005632_2);

#define VkglTestCase_005633_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005633_2 "binary_operator.equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005633, VkglTestCase_005633_1, VkglTestCase_005633_2);

#define VkglTestCase_005634_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005634_2 "inary_operator.equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005634, VkglTestCase_005634_1, VkglTestCase_005634_2);

#define VkglTestCase_005635_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005635_2 "nary_operator.equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005635, VkglTestCase_005635_1, VkglTestCase_005635_2);

#define VkglTestCase_005636_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005636_2 "binary_operator.equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005636, VkglTestCase_005636_1, VkglTestCase_005636_2);

#define VkglTestCase_005637_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005637_2 "inary_operator.equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005637, VkglTestCase_005637_1, VkglTestCase_005637_2);

#define VkglTestCase_005638_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005638_2 ".binary_operator.equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005638, VkglTestCase_005638_1, VkglTestCase_005638_2);

#define VkglTestCase_005639_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005639_2 "binary_operator.equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005639, VkglTestCase_005639_1, VkglTestCase_005639_2);

#define VkglTestCase_005640_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005640_2 "binary_operator.equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005640, VkglTestCase_005640_1, VkglTestCase_005640_2);

#define VkglTestCase_005641_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005641_2 "inary_operator.equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005641, VkglTestCase_005641_1, VkglTestCase_005641_2);

#define VkglTestCase_005642_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005642_2 ".binary_operator.equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005642, VkglTestCase_005642_1, VkglTestCase_005642_2);

#define VkglTestCase_005643_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005643_2 "binary_operator.equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005643, VkglTestCase_005643_1, VkglTestCase_005643_2);

#define VkglTestCase_005644_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005644_2 "binary_operator.equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005644, VkglTestCase_005644_1, VkglTestCase_005644_2);

#define VkglTestCase_005645_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005645_2 "inary_operator.equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005645, VkglTestCase_005645_1, VkglTestCase_005645_2);

#define VkglTestCase_005646_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005646_2 "inary_operator.equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005646, VkglTestCase_005646_1, VkglTestCase_005646_2);

#define VkglTestCase_005647_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005647_2 "nary_operator.equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005647, VkglTestCase_005647_1, VkglTestCase_005647_2);

#define VkglTestCase_005648_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005648_2 "binary_operator.equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005648, VkglTestCase_005648_1, VkglTestCase_005648_2);

#define VkglTestCase_005649_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005649_2 "inary_operator.equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005649, VkglTestCase_005649_1, VkglTestCase_005649_2);

#define VkglTestCase_005650_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005650_2 "binary_operator.equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005650, VkglTestCase_005650_1, VkglTestCase_005650_2);

#define VkglTestCase_005651_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005651_2 "inary_operator.equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005651, VkglTestCase_005651_1, VkglTestCase_005651_2);

#define VkglTestCase_005652_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005652_2 "inary_operator.equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005652, VkglTestCase_005652_1, VkglTestCase_005652_2);

#define VkglTestCase_005653_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005653_2 "nary_operator.equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005653, VkglTestCase_005653_1, VkglTestCase_005653_2);

#define VkglTestCase_005654_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005654_2 "binary_operator.equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005654, VkglTestCase_005654_1, VkglTestCase_005654_2);

#define VkglTestCase_005655_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005655_2 "inary_operator.equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005655, VkglTestCase_005655_1, VkglTestCase_005655_2);

#define VkglTestCase_005656_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005656_2 "binary_operator.equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005656, VkglTestCase_005656_1, VkglTestCase_005656_2);

#define VkglTestCase_005657_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005657_2 "inary_operator.equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005657, VkglTestCase_005657_1, VkglTestCase_005657_2);

#define VkglTestCase_005658_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005658_2 "inary_operator.equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005658, VkglTestCase_005658_1, VkglTestCase_005658_2);

#define VkglTestCase_005659_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_005659_2 "nary_operator.equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005659, VkglTestCase_005659_1, VkglTestCase_005659_2);

#define VkglTestCase_005660_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005660_2 "binary_operator.equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005660, VkglTestCase_005660_1, VkglTestCase_005660_2);

#define VkglTestCase_005661_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005661_2 "inary_operator.equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005661, VkglTestCase_005661_1, VkglTestCase_005661_2);

#define VkglTestCase_005662_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005662_2 "or.binary_operator.equal.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005662, VkglTestCase_005662_1, VkglTestCase_005662_2);

#define VkglTestCase_005663_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005663_2 "r.binary_operator.equal.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005663, VkglTestCase_005663_1, VkglTestCase_005663_2);

#define VkglTestCase_005664_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005664_2 "or.binary_operator.equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005664, VkglTestCase_005664_1, VkglTestCase_005664_2);

#define VkglTestCase_005665_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005665_2 "r.binary_operator.equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005665, VkglTestCase_005665_1, VkglTestCase_005665_2);

#define VkglTestCase_005666_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005666_2 "or.binary_operator.equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005666, VkglTestCase_005666_1, VkglTestCase_005666_2);

#define VkglTestCase_005667_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005667_2 "r.binary_operator.equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005667, VkglTestCase_005667_1, VkglTestCase_005667_2);

#define VkglTestCase_005668_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005668_2 "or.binary_operator.equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005668, VkglTestCase_005668_1, VkglTestCase_005668_2);

#define VkglTestCase_005669_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005669_2 "r.binary_operator.equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005669, VkglTestCase_005669_1, VkglTestCase_005669_2);
