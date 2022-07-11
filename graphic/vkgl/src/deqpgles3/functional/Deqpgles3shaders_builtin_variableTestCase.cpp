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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016796_1 "dEQP-GLES3.functional.shaders.builti"
#define VkglTestCase_016796_2 "n_variable.max_vertex_attribs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016796, VkglTestCase_016796_1, VkglTestCase_016796_2);

#define VkglTestCase_016797_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_016797_2 "_variable.max_vertex_attribs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016797, VkglTestCase_016797_1, VkglTestCase_016797_2);

#define VkglTestCase_016798_1 "dEQP-GLES3.functional.shaders.builtin_va"
#define VkglTestCase_016798_2 "riable.max_vertex_uniform_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016798, VkglTestCase_016798_1, VkglTestCase_016798_2);

#define VkglTestCase_016799_1 "dEQP-GLES3.functional.shaders.builtin_var"
#define VkglTestCase_016799_2 "iable.max_vertex_uniform_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016799, VkglTestCase_016799_1, VkglTestCase_016799_2);

#define VkglTestCase_016800_1 "dEQP-GLES3.functional.shaders.builtin_var"
#define VkglTestCase_016800_2 "iable.max_fragment_uniform_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016800, VkglTestCase_016800_1, VkglTestCase_016800_2);

#define VkglTestCase_016801_1 "dEQP-GLES3.functional.shaders.builtin_vari"
#define VkglTestCase_016801_2 "able.max_fragment_uniform_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016801, VkglTestCase_016801_1, VkglTestCase_016801_2);

#define VkglTestCase_016802_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_016802_2 "variable.max_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016802, VkglTestCase_016802_1, VkglTestCase_016802_2);

#define VkglTestCase_016803_1 "dEQP-GLES3.functional.shaders.builtin_v"
#define VkglTestCase_016803_2 "ariable.max_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016803, VkglTestCase_016803_1, VkglTestCase_016803_2);

#define VkglTestCase_016804_1 "dEQP-GLES3.functional.shaders.builtin_vari"
#define VkglTestCase_016804_2 "able.max_vertex_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016804, VkglTestCase_016804_1, VkglTestCase_016804_2);

#define VkglTestCase_016805_1 "dEQP-GLES3.functional.shaders.builtin_varia"
#define VkglTestCase_016805_2 "ble.max_vertex_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016805, VkglTestCase_016805_1, VkglTestCase_016805_2);

#define VkglTestCase_016806_1 "dEQP-GLES3.functional.shaders.builtin_varia"
#define VkglTestCase_016806_2 "ble.max_combined_texture_image_units_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016806, VkglTestCase_016806_1, VkglTestCase_016806_2);

#define VkglTestCase_016807_1 "dEQP-GLES3.functional.shaders.builtin_variab"
#define VkglTestCase_016807_2 "le.max_combined_texture_image_units_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016807, VkglTestCase_016807_1, VkglTestCase_016807_2);

#define VkglTestCase_016808_1 "dEQP-GLES3.functional.shaders.built"
#define VkglTestCase_016808_2 "in_variable.max_draw_buffers_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016808, VkglTestCase_016808_1, VkglTestCase_016808_2);

#define VkglTestCase_016809_1 "dEQP-GLES3.functional.shaders.builti"
#define VkglTestCase_016809_2 "n_variable.max_draw_buffers_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016809, VkglTestCase_016809_1, VkglTestCase_016809_2);

#define VkglTestCase_016810_1 "dEQP-GLES3.functional.shaders.builtin_v"
#define VkglTestCase_016810_2 "ariable.max_vertex_output_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016810, VkglTestCase_016810_1, VkglTestCase_016810_2);

#define VkglTestCase_016811_1 "dEQP-GLES3.functional.shaders.builtin_va"
#define VkglTestCase_016811_2 "riable.max_vertex_output_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016811, VkglTestCase_016811_1, VkglTestCase_016811_2);

#define VkglTestCase_016812_1 "dEQP-GLES3.functional.shaders.builtin_va"
#define VkglTestCase_016812_2 "riable.max_fragment_input_vectors_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016812, VkglTestCase_016812_1, VkglTestCase_016812_2);

#define VkglTestCase_016813_1 "dEQP-GLES3.functional.shaders.builtin_var"
#define VkglTestCase_016813_2 "iable.max_fragment_input_vectors_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016813, VkglTestCase_016813_1, VkglTestCase_016813_2);

#define VkglTestCase_016814_1 "dEQP-GLES3.functional.shaders.builtin_v"
#define VkglTestCase_016814_2 "ariable.min_program_texel_offset_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016814, VkglTestCase_016814_1, VkglTestCase_016814_2);

#define VkglTestCase_016815_1 "dEQP-GLES3.functional.shaders.builtin_va"
#define VkglTestCase_016815_2 "riable.min_program_texel_offset_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016815, VkglTestCase_016815_1, VkglTestCase_016815_2);

#define VkglTestCase_016816_1 "dEQP-GLES3.functional.shaders.builtin_v"
#define VkglTestCase_016816_2 "ariable.max_program_texel_offset_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016816, VkglTestCase_016816_1, VkglTestCase_016816_2);

#define VkglTestCase_016817_1 "dEQP-GLES3.functional.shaders.builtin_va"
#define VkglTestCase_016817_2 "riable.max_program_texel_offset_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016817, VkglTestCase_016817_1, VkglTestCase_016817_2);

#define VkglTestCase_016818_1 "dEQP-GLES3.functional.shaders.bu"
#define VkglTestCase_016818_2 "iltin_variable.depth_range_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016818, VkglTestCase_016818_1, VkglTestCase_016818_2);

#define VkglTestCase_016819_1 "dEQP-GLES3.functional.shaders.bui"
#define VkglTestCase_016819_2 "ltin_variable.depth_range_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016819, VkglTestCase_016819_1, VkglTestCase_016819_2);

#define VkglTestCase_016820_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016820_2 "s.builtin_variable.vertex_id"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016820, VkglTestCase_016820_1, VkglTestCase_016820_2);

#define VkglTestCase_016821_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016821_2 "builtin_variable.fragcoord_xyz"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016821, VkglTestCase_016821_1, VkglTestCase_016821_2);

#define VkglTestCase_016822_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016822_2 ".builtin_variable.fragcoord_w"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016822, VkglTestCase_016822_1, VkglTestCase_016822_2);

#define VkglTestCase_016823_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016823_2 "s.builtin_variable.pointcoord"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016823, VkglTestCase_016823_1, VkglTestCase_016823_2);

#define VkglTestCase_016824_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016824_2 ".builtin_variable.frontfacing"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016824, VkglTestCase_016824_1, VkglTestCase_016824_2);
