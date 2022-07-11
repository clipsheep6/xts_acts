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

#define VkglTestCase_001718_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001718_2 "ingle_basic_type.std140.lowp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001718, VkglTestCase_001718_1, VkglTestCase_001718_2);

#define VkglTestCase_001719_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001719_2 "gle_basic_type.std140.mediump_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001719, VkglTestCase_001719_1, VkglTestCase_001719_2);

#define VkglTestCase_001720_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001720_2 "ngle_basic_type.std140.highp_float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001720, VkglTestCase_001720_1, VkglTestCase_001720_2);

#define VkglTestCase_001721_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001721_2 "ingle_basic_type.std140.lowp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001721, VkglTestCase_001721_1, VkglTestCase_001721_2);

#define VkglTestCase_001722_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001722_2 "ngle_basic_type.std140.mediump_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001722, VkglTestCase_001722_1, VkglTestCase_001722_2);

#define VkglTestCase_001723_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001723_2 "ingle_basic_type.std140.highp_vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001723, VkglTestCase_001723_1, VkglTestCase_001723_2);

#define VkglTestCase_001724_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001724_2 "ingle_basic_type.std140.lowp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001724, VkglTestCase_001724_1, VkglTestCase_001724_2);

#define VkglTestCase_001725_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001725_2 "ngle_basic_type.std140.mediump_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001725, VkglTestCase_001725_1, VkglTestCase_001725_2);

#define VkglTestCase_001726_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001726_2 "ingle_basic_type.std140.highp_vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001726, VkglTestCase_001726_1, VkglTestCase_001726_2);

#define VkglTestCase_001727_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001727_2 "ingle_basic_type.std140.lowp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001727, VkglTestCase_001727_1, VkglTestCase_001727_2);

#define VkglTestCase_001728_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001728_2 "ngle_basic_type.std140.mediump_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001728, VkglTestCase_001728_1, VkglTestCase_001728_2);

#define VkglTestCase_001729_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001729_2 "ingle_basic_type.std140.highp_vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001729, VkglTestCase_001729_1, VkglTestCase_001729_2);

#define VkglTestCase_001730_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001730_2 "single_basic_type.std140.lowp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001730, VkglTestCase_001730_1, VkglTestCase_001730_2);

#define VkglTestCase_001731_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001731_2 "ngle_basic_type.std140.mediump_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001731, VkglTestCase_001731_1, VkglTestCase_001731_2);

#define VkglTestCase_001732_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001732_2 "ingle_basic_type.std140.highp_int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001732, VkglTestCase_001732_1, VkglTestCase_001732_2);

#define VkglTestCase_001733_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001733_2 "ingle_basic_type.std140.lowp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001733, VkglTestCase_001733_1, VkglTestCase_001733_2);

#define VkglTestCase_001734_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001734_2 "gle_basic_type.std140.mediump_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001734, VkglTestCase_001734_1, VkglTestCase_001734_2);

#define VkglTestCase_001735_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001735_2 "ngle_basic_type.std140.highp_ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001735, VkglTestCase_001735_1, VkglTestCase_001735_2);

#define VkglTestCase_001736_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001736_2 "ingle_basic_type.std140.lowp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001736, VkglTestCase_001736_1, VkglTestCase_001736_2);

#define VkglTestCase_001737_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001737_2 "gle_basic_type.std140.mediump_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001737, VkglTestCase_001737_1, VkglTestCase_001737_2);

#define VkglTestCase_001738_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001738_2 "ngle_basic_type.std140.highp_ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001738, VkglTestCase_001738_1, VkglTestCase_001738_2);

#define VkglTestCase_001739_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001739_2 "ingle_basic_type.std140.lowp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001739, VkglTestCase_001739_1, VkglTestCase_001739_2);

#define VkglTestCase_001740_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001740_2 "gle_basic_type.std140.mediump_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001740, VkglTestCase_001740_1, VkglTestCase_001740_2);

#define VkglTestCase_001741_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001741_2 "ngle_basic_type.std140.highp_ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001741, VkglTestCase_001741_1, VkglTestCase_001741_2);

#define VkglTestCase_001742_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001742_2 "ingle_basic_type.std140.lowp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001742, VkglTestCase_001742_1, VkglTestCase_001742_2);

#define VkglTestCase_001743_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001743_2 "ngle_basic_type.std140.mediump_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001743, VkglTestCase_001743_1, VkglTestCase_001743_2);

#define VkglTestCase_001744_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001744_2 "ingle_basic_type.std140.highp_uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001744, VkglTestCase_001744_1, VkglTestCase_001744_2);

#define VkglTestCase_001745_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001745_2 "ingle_basic_type.std140.lowp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001745, VkglTestCase_001745_1, VkglTestCase_001745_2);

#define VkglTestCase_001746_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001746_2 "gle_basic_type.std140.mediump_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001746, VkglTestCase_001746_1, VkglTestCase_001746_2);

#define VkglTestCase_001747_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001747_2 "ngle_basic_type.std140.highp_uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001747, VkglTestCase_001747_1, VkglTestCase_001747_2);

#define VkglTestCase_001748_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001748_2 "ingle_basic_type.std140.lowp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001748, VkglTestCase_001748_1, VkglTestCase_001748_2);

#define VkglTestCase_001749_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001749_2 "gle_basic_type.std140.mediump_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001749, VkglTestCase_001749_1, VkglTestCase_001749_2);

#define VkglTestCase_001750_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001750_2 "ngle_basic_type.std140.highp_uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001750, VkglTestCase_001750_1, VkglTestCase_001750_2);

#define VkglTestCase_001751_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001751_2 "ingle_basic_type.std140.lowp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001751, VkglTestCase_001751_1, VkglTestCase_001751_2);

#define VkglTestCase_001752_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001752_2 "gle_basic_type.std140.mediump_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001752, VkglTestCase_001752_1, VkglTestCase_001752_2);

#define VkglTestCase_001753_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001753_2 "ngle_basic_type.std140.highp_uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001753, VkglTestCase_001753_1, VkglTestCase_001753_2);

#define VkglTestCase_001754_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001754_2 "k.single_basic_type.std140.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001754, VkglTestCase_001754_1, VkglTestCase_001754_2);

#define VkglTestCase_001755_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001755_2 ".single_basic_type.std140.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001755, VkglTestCase_001755_1, VkglTestCase_001755_2);

#define VkglTestCase_001756_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001756_2 ".single_basic_type.std140.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001756, VkglTestCase_001756_1, VkglTestCase_001756_2);

#define VkglTestCase_001757_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001757_2 ".single_basic_type.std140.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001757, VkglTestCase_001757_1, VkglTestCase_001757_2);

#define VkglTestCase_001758_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001758_2 "ingle_basic_type.std140.lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001758, VkglTestCase_001758_1, VkglTestCase_001758_2);

#define VkglTestCase_001759_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001759_2 "ngle_basic_type.std140.mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001759, VkglTestCase_001759_1, VkglTestCase_001759_2);

#define VkglTestCase_001760_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001760_2 "ingle_basic_type.std140.highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001760, VkglTestCase_001760_1, VkglTestCase_001760_2);

#define VkglTestCase_001761_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001761_2 "_basic_type.std140.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001761, VkglTestCase_001761_1, VkglTestCase_001761_2);

#define VkglTestCase_001762_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001762_2 "basic_type.std140.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001762, VkglTestCase_001762_1, VkglTestCase_001762_2);

#define VkglTestCase_001763_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001763_2 "_basic_type.std140.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001763, VkglTestCase_001763_1, VkglTestCase_001763_2);

#define VkglTestCase_001764_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001764_2 "basic_type.std140.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001764, VkglTestCase_001764_1, VkglTestCase_001764_2);

#define VkglTestCase_001765_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001765_2 "sic_type.std140.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001765, VkglTestCase_001765_1, VkglTestCase_001765_2);

#define VkglTestCase_001766_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001766_2 "asic_type.std140.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001766, VkglTestCase_001766_1, VkglTestCase_001766_2);

#define VkglTestCase_001767_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001767_2 "ingle_basic_type.std140.lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001767, VkglTestCase_001767_1, VkglTestCase_001767_2);

#define VkglTestCase_001768_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001768_2 "ngle_basic_type.std140.mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001768, VkglTestCase_001768_1, VkglTestCase_001768_2);

#define VkglTestCase_001769_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001769_2 "ingle_basic_type.std140.highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001769, VkglTestCase_001769_1, VkglTestCase_001769_2);

#define VkglTestCase_001770_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001770_2 "_basic_type.std140.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001770, VkglTestCase_001770_1, VkglTestCase_001770_2);

#define VkglTestCase_001771_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001771_2 "basic_type.std140.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001771, VkglTestCase_001771_1, VkglTestCase_001771_2);

#define VkglTestCase_001772_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001772_2 "_basic_type.std140.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001772, VkglTestCase_001772_1, VkglTestCase_001772_2);

#define VkglTestCase_001773_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001773_2 "basic_type.std140.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001773, VkglTestCase_001773_1, VkglTestCase_001773_2);

#define VkglTestCase_001774_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001774_2 "sic_type.std140.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001774, VkglTestCase_001774_1, VkglTestCase_001774_2);

#define VkglTestCase_001775_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001775_2 "asic_type.std140.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001775, VkglTestCase_001775_1, VkglTestCase_001775_2);

#define VkglTestCase_001776_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001776_2 "ingle_basic_type.std140.lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001776, VkglTestCase_001776_1, VkglTestCase_001776_2);

#define VkglTestCase_001777_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001777_2 "ngle_basic_type.std140.mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001777, VkglTestCase_001777_1, VkglTestCase_001777_2);

#define VkglTestCase_001778_1 "KHR-GLES3.shaders.uniform_block.s"
#define VkglTestCase_001778_2 "ingle_basic_type.std140.highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001778, VkglTestCase_001778_1, VkglTestCase_001778_2);

#define VkglTestCase_001779_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001779_2 "_basic_type.std140.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001779, VkglTestCase_001779_1, VkglTestCase_001779_2);

#define VkglTestCase_001780_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001780_2 "basic_type.std140.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001780, VkglTestCase_001780_1, VkglTestCase_001780_2);

#define VkglTestCase_001781_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001781_2 "_basic_type.std140.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001781, VkglTestCase_001781_1, VkglTestCase_001781_2);

#define VkglTestCase_001782_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001782_2 "basic_type.std140.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001782, VkglTestCase_001782_1, VkglTestCase_001782_2);

#define VkglTestCase_001783_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001783_2 "sic_type.std140.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001783, VkglTestCase_001783_1, VkglTestCase_001783_2);

#define VkglTestCase_001784_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001784_2 "asic_type.std140.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001784, VkglTestCase_001784_1, VkglTestCase_001784_2);

#define VkglTestCase_001785_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001785_2 "ngle_basic_type.std140.lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001785, VkglTestCase_001785_1, VkglTestCase_001785_2);

#define VkglTestCase_001786_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001786_2 "gle_basic_type.std140.mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001786, VkglTestCase_001786_1, VkglTestCase_001786_2);

#define VkglTestCase_001787_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001787_2 "ngle_basic_type.std140.highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001787, VkglTestCase_001787_1, VkglTestCase_001787_2);

#define VkglTestCase_001788_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001788_2 "basic_type.std140.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001788, VkglTestCase_001788_1, VkglTestCase_001788_2);

#define VkglTestCase_001789_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001789_2 "asic_type.std140.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001789, VkglTestCase_001789_1, VkglTestCase_001789_2);

#define VkglTestCase_001790_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001790_2 "basic_type.std140.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001790, VkglTestCase_001790_1, VkglTestCase_001790_2);

#define VkglTestCase_001791_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001791_2 "asic_type.std140.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001791, VkglTestCase_001791_1, VkglTestCase_001791_2);

#define VkglTestCase_001792_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001792_2 "ic_type.std140.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001792, VkglTestCase_001792_1, VkglTestCase_001792_2);

#define VkglTestCase_001793_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001793_2 "sic_type.std140.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001793, VkglTestCase_001793_1, VkglTestCase_001793_2);

#define VkglTestCase_001794_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001794_2 "ngle_basic_type.std140.lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001794, VkglTestCase_001794_1, VkglTestCase_001794_2);

#define VkglTestCase_001795_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001795_2 "gle_basic_type.std140.mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001795, VkglTestCase_001795_1, VkglTestCase_001795_2);

#define VkglTestCase_001796_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001796_2 "ngle_basic_type.std140.highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001796, VkglTestCase_001796_1, VkglTestCase_001796_2);

#define VkglTestCase_001797_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001797_2 "basic_type.std140.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001797, VkglTestCase_001797_1, VkglTestCase_001797_2);

#define VkglTestCase_001798_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001798_2 "asic_type.std140.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001798, VkglTestCase_001798_1, VkglTestCase_001798_2);

#define VkglTestCase_001799_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001799_2 "basic_type.std140.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001799, VkglTestCase_001799_1, VkglTestCase_001799_2);

#define VkglTestCase_001800_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001800_2 "asic_type.std140.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001800, VkglTestCase_001800_1, VkglTestCase_001800_2);

#define VkglTestCase_001801_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001801_2 "ic_type.std140.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001801, VkglTestCase_001801_1, VkglTestCase_001801_2);

#define VkglTestCase_001802_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001802_2 "sic_type.std140.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001802, VkglTestCase_001802_1, VkglTestCase_001802_2);

#define VkglTestCase_001803_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001803_2 "ngle_basic_type.std140.lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001803, VkglTestCase_001803_1, VkglTestCase_001803_2);

#define VkglTestCase_001804_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001804_2 "gle_basic_type.std140.mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001804, VkglTestCase_001804_1, VkglTestCase_001804_2);

#define VkglTestCase_001805_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001805_2 "ngle_basic_type.std140.highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001805, VkglTestCase_001805_1, VkglTestCase_001805_2);

#define VkglTestCase_001806_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001806_2 "basic_type.std140.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001806, VkglTestCase_001806_1, VkglTestCase_001806_2);

#define VkglTestCase_001807_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001807_2 "asic_type.std140.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001807, VkglTestCase_001807_1, VkglTestCase_001807_2);

#define VkglTestCase_001808_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001808_2 "basic_type.std140.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001808, VkglTestCase_001808_1, VkglTestCase_001808_2);

#define VkglTestCase_001809_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001809_2 "asic_type.std140.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001809, VkglTestCase_001809_1, VkglTestCase_001809_2);

#define VkglTestCase_001810_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001810_2 "ic_type.std140.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001810, VkglTestCase_001810_1, VkglTestCase_001810_2);

#define VkglTestCase_001811_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001811_2 "sic_type.std140.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001811, VkglTestCase_001811_1, VkglTestCase_001811_2);

#define VkglTestCase_001812_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001812_2 "ngle_basic_type.std140.lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001812, VkglTestCase_001812_1, VkglTestCase_001812_2);

#define VkglTestCase_001813_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001813_2 "gle_basic_type.std140.mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001813, VkglTestCase_001813_1, VkglTestCase_001813_2);

#define VkglTestCase_001814_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001814_2 "ngle_basic_type.std140.highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001814, VkglTestCase_001814_1, VkglTestCase_001814_2);

#define VkglTestCase_001815_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001815_2 "basic_type.std140.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001815, VkglTestCase_001815_1, VkglTestCase_001815_2);

#define VkglTestCase_001816_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001816_2 "asic_type.std140.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001816, VkglTestCase_001816_1, VkglTestCase_001816_2);

#define VkglTestCase_001817_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001817_2 "basic_type.std140.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001817, VkglTestCase_001817_1, VkglTestCase_001817_2);

#define VkglTestCase_001818_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001818_2 "asic_type.std140.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001818, VkglTestCase_001818_1, VkglTestCase_001818_2);

#define VkglTestCase_001819_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001819_2 "ic_type.std140.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001819, VkglTestCase_001819_1, VkglTestCase_001819_2);

#define VkglTestCase_001820_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001820_2 "sic_type.std140.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001820, VkglTestCase_001820_1, VkglTestCase_001820_2);

#define VkglTestCase_001821_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001821_2 "ngle_basic_type.std140.lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001821, VkglTestCase_001821_1, VkglTestCase_001821_2);

#define VkglTestCase_001822_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001822_2 "gle_basic_type.std140.mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001822, VkglTestCase_001822_1, VkglTestCase_001822_2);

#define VkglTestCase_001823_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001823_2 "ngle_basic_type.std140.highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001823, VkglTestCase_001823_1, VkglTestCase_001823_2);

#define VkglTestCase_001824_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001824_2 "basic_type.std140.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001824, VkglTestCase_001824_1, VkglTestCase_001824_2);

#define VkglTestCase_001825_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001825_2 "asic_type.std140.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001825, VkglTestCase_001825_1, VkglTestCase_001825_2);

#define VkglTestCase_001826_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001826_2 "basic_type.std140.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001826, VkglTestCase_001826_1, VkglTestCase_001826_2);

#define VkglTestCase_001827_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001827_2 "asic_type.std140.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001827, VkglTestCase_001827_1, VkglTestCase_001827_2);

#define VkglTestCase_001828_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001828_2 "ic_type.std140.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001828, VkglTestCase_001828_1, VkglTestCase_001828_2);

#define VkglTestCase_001829_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001829_2 "sic_type.std140.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001829, VkglTestCase_001829_1, VkglTestCase_001829_2);

#define VkglTestCase_001830_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001830_2 "ngle_basic_type.std140.lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001830, VkglTestCase_001830_1, VkglTestCase_001830_2);

#define VkglTestCase_001831_1 "KHR-GLES3.shaders.uniform_block.sin"
#define VkglTestCase_001831_2 "gle_basic_type.std140.mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001831, VkglTestCase_001831_1, VkglTestCase_001831_2);

#define VkglTestCase_001832_1 "KHR-GLES3.shaders.uniform_block.si"
#define VkglTestCase_001832_2 "ngle_basic_type.std140.highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001832, VkglTestCase_001832_1, VkglTestCase_001832_2);

#define VkglTestCase_001833_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001833_2 "basic_type.std140.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001833, VkglTestCase_001833_1, VkglTestCase_001833_2);

#define VkglTestCase_001834_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001834_2 "asic_type.std140.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001834, VkglTestCase_001834_1, VkglTestCase_001834_2);

#define VkglTestCase_001835_1 "KHR-GLES3.shaders.uniform_block.single_"
#define VkglTestCase_001835_2 "basic_type.std140.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001835, VkglTestCase_001835_1, VkglTestCase_001835_2);

#define VkglTestCase_001836_1 "KHR-GLES3.shaders.uniform_block.single_b"
#define VkglTestCase_001836_2 "asic_type.std140.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001836, VkglTestCase_001836_1, VkglTestCase_001836_2);

#define VkglTestCase_001837_1 "KHR-GLES3.shaders.uniform_block.single_bas"
#define VkglTestCase_001837_2 "ic_type.std140.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001837, VkglTestCase_001837_1, VkglTestCase_001837_2);

#define VkglTestCase_001838_1 "KHR-GLES3.shaders.uniform_block.single_ba"
#define VkglTestCase_001838_2 "sic_type.std140.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001838, VkglTestCase_001838_1, VkglTestCase_001838_2);
