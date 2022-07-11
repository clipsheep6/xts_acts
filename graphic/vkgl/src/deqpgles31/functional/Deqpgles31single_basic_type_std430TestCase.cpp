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

#define VkglTestCase_008695_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008695_2 "single_basic_type.std430.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008695, VkglTestCase_008695_1, VkglTestCase_008695_2);

#define VkglTestCase_008696_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008696_2 "ingle_basic_type.std430.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008696, VkglTestCase_008696_1, VkglTestCase_008696_2);

#define VkglTestCase_008697_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008697_2 "single_basic_type.std430.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008697, VkglTestCase_008697_1, VkglTestCase_008697_2);

#define VkglTestCase_008698_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008698_2 ".single_basic_type.std430.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008698, VkglTestCase_008698_1, VkglTestCase_008698_2);

#define VkglTestCase_008699_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008699_2 "ingle_basic_type.std430.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008699, VkglTestCase_008699_1, VkglTestCase_008699_2);

#define VkglTestCase_008700_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008700_2 "single_basic_type.std430.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008700, VkglTestCase_008700_1, VkglTestCase_008700_2);

#define VkglTestCase_008701_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008701_2 ".single_basic_type.std430.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008701, VkglTestCase_008701_1, VkglTestCase_008701_2);

#define VkglTestCase_008702_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008702_2 "ingle_basic_type.std430.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008702, VkglTestCase_008702_1, VkglTestCase_008702_2);

#define VkglTestCase_008703_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008703_2 "single_basic_type.std430.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008703, VkglTestCase_008703_1, VkglTestCase_008703_2);

#define VkglTestCase_008704_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008704_2 ".single_basic_type.std430.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008704, VkglTestCase_008704_1, VkglTestCase_008704_2);

#define VkglTestCase_008705_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008705_2 "ingle_basic_type.std430.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008705, VkglTestCase_008705_1, VkglTestCase_008705_2);

#define VkglTestCase_008706_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008706_2 "single_basic_type.std430.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008706, VkglTestCase_008706_1, VkglTestCase_008706_2);

#define VkglTestCase_008707_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008707_2 ".single_basic_type.std430.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008707, VkglTestCase_008707_1, VkglTestCase_008707_2);

#define VkglTestCase_008708_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008708_2 "single_basic_type.std430.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008708, VkglTestCase_008708_1, VkglTestCase_008708_2);

#define VkglTestCase_008709_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008709_2 ".single_basic_type.std430.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008709, VkglTestCase_008709_1, VkglTestCase_008709_2);

#define VkglTestCase_008710_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008710_2 "single_basic_type.std430.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008710, VkglTestCase_008710_1, VkglTestCase_008710_2);

#define VkglTestCase_008711_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008711_2 "ingle_basic_type.std430.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008711, VkglTestCase_008711_1, VkglTestCase_008711_2);

#define VkglTestCase_008712_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008712_2 "single_basic_type.std430.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008712, VkglTestCase_008712_1, VkglTestCase_008712_2);

#define VkglTestCase_008713_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008713_2 "single_basic_type.std430.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008713, VkglTestCase_008713_1, VkglTestCase_008713_2);

#define VkglTestCase_008714_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008714_2 "ingle_basic_type.std430.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008714, VkglTestCase_008714_1, VkglTestCase_008714_2);

#define VkglTestCase_008715_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008715_2 "single_basic_type.std430.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008715, VkglTestCase_008715_1, VkglTestCase_008715_2);

#define VkglTestCase_008716_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008716_2 "single_basic_type.std430.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008716, VkglTestCase_008716_1, VkglTestCase_008716_2);

#define VkglTestCase_008717_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008717_2 "ingle_basic_type.std430.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008717, VkglTestCase_008717_1, VkglTestCase_008717_2);

#define VkglTestCase_008718_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008718_2 "single_basic_type.std430.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008718, VkglTestCase_008718_1, VkglTestCase_008718_2);

#define VkglTestCase_008719_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008719_2 ".single_basic_type.std430.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008719, VkglTestCase_008719_1, VkglTestCase_008719_2);

#define VkglTestCase_008720_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008720_2 "ingle_basic_type.std430.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008720, VkglTestCase_008720_1, VkglTestCase_008720_2);

#define VkglTestCase_008721_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008721_2 "single_basic_type.std430.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008721, VkglTestCase_008721_1, VkglTestCase_008721_2);

#define VkglTestCase_008722_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008722_2 "single_basic_type.std430.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008722, VkglTestCase_008722_1, VkglTestCase_008722_2);

#define VkglTestCase_008723_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008723_2 "ingle_basic_type.std430.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008723, VkglTestCase_008723_1, VkglTestCase_008723_2);

#define VkglTestCase_008724_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008724_2 "single_basic_type.std430.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008724, VkglTestCase_008724_1, VkglTestCase_008724_2);

#define VkglTestCase_008725_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008725_2 "single_basic_type.std430.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008725, VkglTestCase_008725_1, VkglTestCase_008725_2);

#define VkglTestCase_008726_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008726_2 "ingle_basic_type.std430.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008726, VkglTestCase_008726_1, VkglTestCase_008726_2);

#define VkglTestCase_008727_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008727_2 "single_basic_type.std430.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008727, VkglTestCase_008727_1, VkglTestCase_008727_2);

#define VkglTestCase_008728_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008728_2 "single_basic_type.std430.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008728, VkglTestCase_008728_1, VkglTestCase_008728_2);

#define VkglTestCase_008729_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008729_2 "ingle_basic_type.std430.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008729, VkglTestCase_008729_1, VkglTestCase_008729_2);

#define VkglTestCase_008730_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008730_2 "single_basic_type.std430.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008730, VkglTestCase_008730_1, VkglTestCase_008730_2);

#define VkglTestCase_008731_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008731_2 "ut.single_basic_type.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008731, VkglTestCase_008731_1, VkglTestCase_008731_2);

#define VkglTestCase_008732_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008732_2 "ut.single_basic_type.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008732, VkglTestCase_008732_1, VkglTestCase_008732_2);

#define VkglTestCase_008733_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008733_2 "ut.single_basic_type.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008733, VkglTestCase_008733_1, VkglTestCase_008733_2);

#define VkglTestCase_008734_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008734_2 "ut.single_basic_type.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008734, VkglTestCase_008734_1, VkglTestCase_008734_2);

#define VkglTestCase_008735_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008735_2 ".single_basic_type.std430.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008735, VkglTestCase_008735_1, VkglTestCase_008735_2);

#define VkglTestCase_008736_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008736_2 "ingle_basic_type.std430.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008736, VkglTestCase_008736_1, VkglTestCase_008736_2);

#define VkglTestCase_008737_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008737_2 "single_basic_type.std430.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008737, VkglTestCase_008737_1, VkglTestCase_008737_2);

#define VkglTestCase_008738_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008738_2 "le_basic_type.std430.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008738, VkglTestCase_008738_1, VkglTestCase_008738_2);

#define VkglTestCase_008739_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008739_2 "_basic_type.std430.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008739, VkglTestCase_008739_1, VkglTestCase_008739_2);

#define VkglTestCase_008740_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008740_2 "e_basic_type.std430.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008740, VkglTestCase_008740_1, VkglTestCase_008740_2);

#define VkglTestCase_008741_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008741_2 "_basic_type.std430.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008741, VkglTestCase_008741_1, VkglTestCase_008741_2);

#define VkglTestCase_008742_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008742_2 "basic_type.std430.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008742, VkglTestCase_008742_1, VkglTestCase_008742_2);

#define VkglTestCase_008743_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008743_2 "_basic_type.std430.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008743, VkglTestCase_008743_1, VkglTestCase_008743_2);

#define VkglTestCase_008744_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008744_2 ".single_basic_type.std430.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008744, VkglTestCase_008744_1, VkglTestCase_008744_2);

#define VkglTestCase_008745_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008745_2 "ingle_basic_type.std430.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008745, VkglTestCase_008745_1, VkglTestCase_008745_2);

#define VkglTestCase_008746_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008746_2 "single_basic_type.std430.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008746, VkglTestCase_008746_1, VkglTestCase_008746_2);

#define VkglTestCase_008747_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008747_2 "le_basic_type.std430.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008747, VkglTestCase_008747_1, VkglTestCase_008747_2);

#define VkglTestCase_008748_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008748_2 "_basic_type.std430.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008748, VkglTestCase_008748_1, VkglTestCase_008748_2);

#define VkglTestCase_008749_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008749_2 "e_basic_type.std430.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008749, VkglTestCase_008749_1, VkglTestCase_008749_2);

#define VkglTestCase_008750_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008750_2 "_basic_type.std430.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008750, VkglTestCase_008750_1, VkglTestCase_008750_2);

#define VkglTestCase_008751_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008751_2 "basic_type.std430.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008751, VkglTestCase_008751_1, VkglTestCase_008751_2);

#define VkglTestCase_008752_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008752_2 "_basic_type.std430.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008752, VkglTestCase_008752_1, VkglTestCase_008752_2);

#define VkglTestCase_008753_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008753_2 ".single_basic_type.std430.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008753, VkglTestCase_008753_1, VkglTestCase_008753_2);

#define VkglTestCase_008754_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008754_2 "ingle_basic_type.std430.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008754, VkglTestCase_008754_1, VkglTestCase_008754_2);

#define VkglTestCase_008755_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008755_2 "single_basic_type.std430.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008755, VkglTestCase_008755_1, VkglTestCase_008755_2);

#define VkglTestCase_008756_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008756_2 "le_basic_type.std430.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008756, VkglTestCase_008756_1, VkglTestCase_008756_2);

#define VkglTestCase_008757_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008757_2 "_basic_type.std430.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008757, VkglTestCase_008757_1, VkglTestCase_008757_2);

#define VkglTestCase_008758_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008758_2 "e_basic_type.std430.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008758, VkglTestCase_008758_1, VkglTestCase_008758_2);

#define VkglTestCase_008759_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008759_2 "_basic_type.std430.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008759, VkglTestCase_008759_1, VkglTestCase_008759_2);

#define VkglTestCase_008760_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008760_2 "basic_type.std430.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008760, VkglTestCase_008760_1, VkglTestCase_008760_2);

#define VkglTestCase_008761_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008761_2 "_basic_type.std430.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008761, VkglTestCase_008761_1, VkglTestCase_008761_2);

#define VkglTestCase_008762_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008762_2 "single_basic_type.std430.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008762, VkglTestCase_008762_1, VkglTestCase_008762_2);

#define VkglTestCase_008763_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008763_2 "ngle_basic_type.std430.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008763, VkglTestCase_008763_1, VkglTestCase_008763_2);

#define VkglTestCase_008764_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008764_2 "ingle_basic_type.std430.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008764, VkglTestCase_008764_1, VkglTestCase_008764_2);

#define VkglTestCase_008765_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008765_2 "e_basic_type.std430.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008765, VkglTestCase_008765_1, VkglTestCase_008765_2);

#define VkglTestCase_008766_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008766_2 "basic_type.std430.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008766, VkglTestCase_008766_1, VkglTestCase_008766_2);

#define VkglTestCase_008767_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008767_2 "_basic_type.std430.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008767, VkglTestCase_008767_1, VkglTestCase_008767_2);

#define VkglTestCase_008768_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008768_2 "basic_type.std430.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008768, VkglTestCase_008768_1, VkglTestCase_008768_2);

#define VkglTestCase_008769_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008769_2 "asic_type.std430.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008769, VkglTestCase_008769_1, VkglTestCase_008769_2);

#define VkglTestCase_008770_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008770_2 "basic_type.std430.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008770, VkglTestCase_008770_1, VkglTestCase_008770_2);

#define VkglTestCase_008771_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008771_2 "single_basic_type.std430.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008771, VkglTestCase_008771_1, VkglTestCase_008771_2);

#define VkglTestCase_008772_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008772_2 "ngle_basic_type.std430.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008772, VkglTestCase_008772_1, VkglTestCase_008772_2);

#define VkglTestCase_008773_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008773_2 "ingle_basic_type.std430.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008773, VkglTestCase_008773_1, VkglTestCase_008773_2);

#define VkglTestCase_008774_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008774_2 "e_basic_type.std430.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008774, VkglTestCase_008774_1, VkglTestCase_008774_2);

#define VkglTestCase_008775_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008775_2 "basic_type.std430.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008775, VkglTestCase_008775_1, VkglTestCase_008775_2);

#define VkglTestCase_008776_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008776_2 "_basic_type.std430.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008776, VkglTestCase_008776_1, VkglTestCase_008776_2);

#define VkglTestCase_008777_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008777_2 "basic_type.std430.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008777, VkglTestCase_008777_1, VkglTestCase_008777_2);

#define VkglTestCase_008778_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008778_2 "asic_type.std430.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008778, VkglTestCase_008778_1, VkglTestCase_008778_2);

#define VkglTestCase_008779_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008779_2 "basic_type.std430.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008779, VkglTestCase_008779_1, VkglTestCase_008779_2);

#define VkglTestCase_008780_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008780_2 "single_basic_type.std430.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008780, VkglTestCase_008780_1, VkglTestCase_008780_2);

#define VkglTestCase_008781_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008781_2 "ngle_basic_type.std430.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008781, VkglTestCase_008781_1, VkglTestCase_008781_2);

#define VkglTestCase_008782_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008782_2 "ingle_basic_type.std430.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008782, VkglTestCase_008782_1, VkglTestCase_008782_2);

#define VkglTestCase_008783_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008783_2 "e_basic_type.std430.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008783, VkglTestCase_008783_1, VkglTestCase_008783_2);

#define VkglTestCase_008784_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008784_2 "basic_type.std430.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008784, VkglTestCase_008784_1, VkglTestCase_008784_2);

#define VkglTestCase_008785_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008785_2 "_basic_type.std430.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008785, VkglTestCase_008785_1, VkglTestCase_008785_2);

#define VkglTestCase_008786_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008786_2 "basic_type.std430.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008786, VkglTestCase_008786_1, VkglTestCase_008786_2);

#define VkglTestCase_008787_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008787_2 "asic_type.std430.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008787, VkglTestCase_008787_1, VkglTestCase_008787_2);

#define VkglTestCase_008788_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008788_2 "basic_type.std430.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008788, VkglTestCase_008788_1, VkglTestCase_008788_2);

#define VkglTestCase_008789_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008789_2 "single_basic_type.std430.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008789, VkglTestCase_008789_1, VkglTestCase_008789_2);

#define VkglTestCase_008790_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008790_2 "ngle_basic_type.std430.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008790, VkglTestCase_008790_1, VkglTestCase_008790_2);

#define VkglTestCase_008791_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008791_2 "ingle_basic_type.std430.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008791, VkglTestCase_008791_1, VkglTestCase_008791_2);

#define VkglTestCase_008792_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008792_2 "e_basic_type.std430.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008792, VkglTestCase_008792_1, VkglTestCase_008792_2);

#define VkglTestCase_008793_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008793_2 "basic_type.std430.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008793, VkglTestCase_008793_1, VkglTestCase_008793_2);

#define VkglTestCase_008794_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008794_2 "_basic_type.std430.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008794, VkglTestCase_008794_1, VkglTestCase_008794_2);

#define VkglTestCase_008795_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008795_2 "basic_type.std430.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008795, VkglTestCase_008795_1, VkglTestCase_008795_2);

#define VkglTestCase_008796_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008796_2 "asic_type.std430.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008796, VkglTestCase_008796_1, VkglTestCase_008796_2);

#define VkglTestCase_008797_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008797_2 "basic_type.std430.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008797, VkglTestCase_008797_1, VkglTestCase_008797_2);

#define VkglTestCase_008798_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008798_2 "single_basic_type.std430.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008798, VkglTestCase_008798_1, VkglTestCase_008798_2);

#define VkglTestCase_008799_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008799_2 "ngle_basic_type.std430.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008799, VkglTestCase_008799_1, VkglTestCase_008799_2);

#define VkglTestCase_008800_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008800_2 "ingle_basic_type.std430.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008800, VkglTestCase_008800_1, VkglTestCase_008800_2);

#define VkglTestCase_008801_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008801_2 "e_basic_type.std430.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008801, VkglTestCase_008801_1, VkglTestCase_008801_2);

#define VkglTestCase_008802_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008802_2 "basic_type.std430.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008802, VkglTestCase_008802_1, VkglTestCase_008802_2);

#define VkglTestCase_008803_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008803_2 "_basic_type.std430.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008803, VkglTestCase_008803_1, VkglTestCase_008803_2);

#define VkglTestCase_008804_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008804_2 "basic_type.std430.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008804, VkglTestCase_008804_1, VkglTestCase_008804_2);

#define VkglTestCase_008805_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008805_2 "asic_type.std430.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008805, VkglTestCase_008805_1, VkglTestCase_008805_2);

#define VkglTestCase_008806_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008806_2 "basic_type.std430.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008806, VkglTestCase_008806_1, VkglTestCase_008806_2);

#define VkglTestCase_008807_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008807_2 "single_basic_type.std430.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008807, VkglTestCase_008807_1, VkglTestCase_008807_2);

#define VkglTestCase_008808_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008808_2 "ngle_basic_type.std430.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008808, VkglTestCase_008808_1, VkglTestCase_008808_2);

#define VkglTestCase_008809_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008809_2 "ingle_basic_type.std430.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008809, VkglTestCase_008809_1, VkglTestCase_008809_2);

#define VkglTestCase_008810_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008810_2 "e_basic_type.std430.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008810, VkglTestCase_008810_1, VkglTestCase_008810_2);

#define VkglTestCase_008811_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008811_2 "basic_type.std430.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008811, VkglTestCase_008811_1, VkglTestCase_008811_2);

#define VkglTestCase_008812_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008812_2 "_basic_type.std430.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008812, VkglTestCase_008812_1, VkglTestCase_008812_2);

#define VkglTestCase_008813_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008813_2 "basic_type.std430.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008813, VkglTestCase_008813_1, VkglTestCase_008813_2);

#define VkglTestCase_008814_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008814_2 "asic_type.std430.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008814, VkglTestCase_008814_1, VkglTestCase_008814_2);

#define VkglTestCase_008815_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008815_2 "basic_type.std430.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008815, VkglTestCase_008815_1, VkglTestCase_008815_2);
