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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030816_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_030816_2 "t_ops.scissor.contained_quads"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030816, VkglTestCase_030816_1, VkglTestCase_030816_2);

#define VkglTestCase_030817_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030817_2 "nt_ops.scissor.partial_quads"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030817, VkglTestCase_030817_1, VkglTestCase_030817_2);

#define VkglTestCase_030818_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030818_2 "nt_ops.scissor.contained_tri"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030818, VkglTestCase_030818_1, VkglTestCase_030818_2);

#define VkglTestCase_030819_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030819_2 "nt_ops.scissor.enclosing_tri"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030819, VkglTestCase_030819_1, VkglTestCase_030819_2);

#define VkglTestCase_030820_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_030820_2 "ent_ops.scissor.partial_tri"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030820, VkglTestCase_030820_1, VkglTestCase_030820_2);

#define VkglTestCase_030821_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030821_2 "_ops.scissor.outside_render_tri"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030821, VkglTestCase_030821_1, VkglTestCase_030821_2);

#define VkglTestCase_030822_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030822_2 "nt_ops.scissor.partial_lines"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030822, VkglTestCase_030822_1, VkglTestCase_030822_2);

#define VkglTestCase_030823_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030823_2 "nt_ops.scissor.contained_line"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030823, VkglTestCase_030823_1, VkglTestCase_030823_2);

#define VkglTestCase_030824_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_030824_2 "ent_ops.scissor.partial_line"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030824, VkglTestCase_030824_1, VkglTestCase_030824_2);

#define VkglTestCase_030825_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030825_2 "ops.scissor.outside_render_line"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030825, VkglTestCase_030825_1, VkglTestCase_030825_2);

#define VkglTestCase_030826_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_030826_2 "t_ops.scissor.contained_point"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030826, VkglTestCase_030826_1, VkglTestCase_030826_2);

#define VkglTestCase_030827_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030827_2 "nt_ops.scissor.partial_points"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030827, VkglTestCase_030827_1, VkglTestCase_030827_2);

#define VkglTestCase_030828_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030828_2 "nt_ops.scissor.outside_point"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030828, VkglTestCase_030828_1, VkglTestCase_030828_2);

#define VkglTestCase_030829_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030829_2 "ops.scissor.outside_render_point"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030829, VkglTestCase_030829_1, VkglTestCase_030829_2);

#define VkglTestCase_030830_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_030830_2 "ent_ops.scissor.clear_depth"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030830, VkglTestCase_030830_1, VkglTestCase_030830_2);

#define VkglTestCase_030831_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_030831_2 "nt_ops.scissor.clear_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030831, VkglTestCase_030831_1, VkglTestCase_030831_2);

#define VkglTestCase_030832_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_030832_2 "ent_ops.scissor.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030832, VkglTestCase_030832_1, VkglTestCase_030832_2);

#define VkglTestCase_030833_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030833_2 "_ops.scissor.clear_fixed_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030833, VkglTestCase_030833_1, VkglTestCase_030833_2);

#define VkglTestCase_030834_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_030834_2 "t_ops.scissor.clear_int_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030834, VkglTestCase_030834_1, VkglTestCase_030834_2);

#define VkglTestCase_030835_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030835_2 "_ops.scissor.clear_uint_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030835, VkglTestCase_030835_1, VkglTestCase_030835_2);

#define VkglTestCase_030836_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_030836_2 "_ops.scissor.clear_depth_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030836, VkglTestCase_030836_1, VkglTestCase_030836_2);

#define VkglTestCase_030837_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_030837_2 "ops.scissor.clear_stencil_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030837, VkglTestCase_030837_1, VkglTestCase_030837_2);

#define VkglTestCase_030838_1 "dEQP-GLES3.functional.fragment_ops"
#define VkglTestCase_030838_2 ".scissor.clear_depth_stencil_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030838, VkglTestCase_030838_1, VkglTestCase_030838_2);

#define VkglTestCase_030839_1 "dEQP-GLES3.functional.fragment_op"
#define VkglTestCase_030839_2 "s.scissor.framebuffer_blit_center"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030839, VkglTestCase_030839_1, VkglTestCase_030839_2);

#define VkglTestCase_030840_1 "dEQP-GLES3.functional.fragment_op"
#define VkglTestCase_030840_2 "s.scissor.framebuffer_blit_corner"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030840, VkglTestCase_030840_1, VkglTestCase_030840_2);

#define VkglTestCase_030841_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_030841_2 "ps.scissor.framebuffer_blit_none"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030841, VkglTestCase_030841_1, VkglTestCase_030841_2);
