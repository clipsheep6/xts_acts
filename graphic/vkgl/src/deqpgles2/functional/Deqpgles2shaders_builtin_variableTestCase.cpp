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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007784_1 "dEQP-GLES2.functional.shaders.builti"
#define VkglTestCase_007784_2 "n_variable.max_vertex_attribs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007784, VkglTestCase_007784_1, VkglTestCase_007784_2);

#define VkglTestCase_007785_1 "dEQP-GLES2.functional.shaders.builtin"
#define VkglTestCase_007785_2 "_variable.max_vertex_attribs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007785, VkglTestCase_007785_1, VkglTestCase_007785_2);

#define VkglTestCase_007786_1 "dEQP-GLES2.functional.shaders.builtin_va"
#define VkglTestCase_007786_2 "riable.max_vertex_uniform_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007786, VkglTestCase_007786_1, VkglTestCase_007786_2);

#define VkglTestCase_007787_1 "dEQP-GLES2.functional.shaders.builtin_var"
#define VkglTestCase_007787_2 "iable.max_vertex_uniform_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007787, VkglTestCase_007787_1, VkglTestCase_007787_2);

#define VkglTestCase_007788_1 "dEQP-GLES2.functional.shaders.builtin_var"
#define VkglTestCase_007788_2 "iable.max_fragment_uniform_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007788, VkglTestCase_007788_1, VkglTestCase_007788_2);

#define VkglTestCase_007789_1 "dEQP-GLES2.functional.shaders.builtin_vari"
#define VkglTestCase_007789_2 "able.max_fragment_uniform_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007789, VkglTestCase_007789_1, VkglTestCase_007789_2);

#define VkglTestCase_007790_1 "dEQP-GLES2.functional.shaders.builti"
#define VkglTestCase_007790_2 "n_variable.max_varying_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007790, VkglTestCase_007790_1, VkglTestCase_007790_2);

#define VkglTestCase_007791_1 "dEQP-GLES2.functional.shaders.builtin"
#define VkglTestCase_007791_2 "_variable.max_varying_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007791, VkglTestCase_007791_1, VkglTestCase_007791_2);

#define VkglTestCase_007792_1 "dEQP-GLES2.functional.shaders.builtin_"
#define VkglTestCase_007792_2 "variable.max_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007792, VkglTestCase_007792_1, VkglTestCase_007792_2);

#define VkglTestCase_007793_1 "dEQP-GLES2.functional.shaders.builtin_v"
#define VkglTestCase_007793_2 "ariable.max_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007793, VkglTestCase_007793_1, VkglTestCase_007793_2);

#define VkglTestCase_007794_1 "dEQP-GLES2.functional.shaders.builtin_vari"
#define VkglTestCase_007794_2 "able.max_vertex_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007794, VkglTestCase_007794_1, VkglTestCase_007794_2);

#define VkglTestCase_007795_1 "dEQP-GLES2.functional.shaders.builtin_varia"
#define VkglTestCase_007795_2 "ble.max_vertex_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007795, VkglTestCase_007795_1, VkglTestCase_007795_2);

#define VkglTestCase_007796_1 "dEQP-GLES2.functional.shaders.builtin_varia"
#define VkglTestCase_007796_2 "ble.max_combined_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007796, VkglTestCase_007796_1, VkglTestCase_007796_2);

#define VkglTestCase_007797_1 "dEQP-GLES2.functional.shaders.builtin_variab"
#define VkglTestCase_007797_2 "le.max_combined_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007797, VkglTestCase_007797_1, VkglTestCase_007797_2);

#define VkglTestCase_007798_1 "dEQP-GLES2.functional.shaders.built"
#define VkglTestCase_007798_2 "in_variable.max_draw_buffers_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007798, VkglTestCase_007798_1, VkglTestCase_007798_2);

#define VkglTestCase_007799_1 "dEQP-GLES2.functional.shaders.builti"
#define VkglTestCase_007799_2 "n_variable.max_draw_buffers_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007799, VkglTestCase_007799_1, VkglTestCase_007799_2);

#define VkglTestCase_007800_1 "dEQP-GLES2.functional.shaders.bu"
#define VkglTestCase_007800_2 "iltin_variable.depth_range_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007800, VkglTestCase_007800_1, VkglTestCase_007800_2);

#define VkglTestCase_007801_1 "dEQP-GLES2.functional.shaders.bui"
#define VkglTestCase_007801_2 "ltin_variable.depth_range_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007801, VkglTestCase_007801_1, VkglTestCase_007801_2);

#define VkglTestCase_007802_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007802_2 "builtin_variable.fragcoord_xyz"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007802, VkglTestCase_007802_1, VkglTestCase_007802_2);

#define VkglTestCase_007803_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007803_2 ".builtin_variable.fragcoord_w"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007803, VkglTestCase_007803_1, VkglTestCase_007803_2);

#define VkglTestCase_007804_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007804_2 "s.builtin_variable.pointcoord"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007804, VkglTestCase_007804_1, VkglTestCase_007804_2);

#define VkglTestCase_007805_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007805_2 ".builtin_variable.frontfacing"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007805, VkglTestCase_007805_1, VkglTestCase_007805_2);
