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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014845_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014845_2 "ger.max_color_texture_samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014845, VkglTestCase_014845_1, VkglTestCase_014845_2);

#define VkglTestCase_014846_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014846_2 "ger.max_color_texture_samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014846, VkglTestCase_014846_1, VkglTestCase_014846_2);

#define VkglTestCase_014847_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014847_2 "er.max_color_texture_samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014847, VkglTestCase_014847_1, VkglTestCase_014847_2);

#define VkglTestCase_014848_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014848_2 "eger.max_color_texture_samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014848, VkglTestCase_014848_1, VkglTestCase_014848_2);

#define VkglTestCase_014849_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014849_2 "ger.max_depth_texture_samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014849, VkglTestCase_014849_1, VkglTestCase_014849_2);

#define VkglTestCase_014850_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014850_2 "ger.max_depth_texture_samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014850, VkglTestCase_014850_1, VkglTestCase_014850_2);

#define VkglTestCase_014851_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014851_2 "er.max_depth_texture_samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014851, VkglTestCase_014851_1, VkglTestCase_014851_2);

#define VkglTestCase_014852_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014852_2 "eger.max_depth_texture_samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014852, VkglTestCase_014852_1, VkglTestCase_014852_2);

#define VkglTestCase_014853_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_014853_2 "nteger.max_integer_samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014853, VkglTestCase_014853_1, VkglTestCase_014853_2);

#define VkglTestCase_014854_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_014854_2 "nteger.max_integer_samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014854, VkglTestCase_014854_1, VkglTestCase_014854_2);

#define VkglTestCase_014855_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014855_2 "teger.max_integer_samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014855, VkglTestCase_014855_1, VkglTestCase_014855_2);

#define VkglTestCase_014856_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_014856_2 "integer.max_integer_samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014856, VkglTestCase_014856_1, VkglTestCase_014856_2);

#define VkglTestCase_014857_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014857_2 ".texture_binding_2d_multisample_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014857, VkglTestCase_014857_1, VkglTestCase_014857_2);

#define VkglTestCase_014858_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014858_2 ".texture_binding_2d_multisample_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014858, VkglTestCase_014858_1, VkglTestCase_014858_2);

#define VkglTestCase_014859_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014859_2 "texture_binding_2d_multisample_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014859, VkglTestCase_014859_1, VkglTestCase_014859_2);

#define VkglTestCase_014860_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014860_2 "r.texture_binding_2d_multisample_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014860, VkglTestCase_014860_1, VkglTestCase_014860_2);

#define VkglTestCase_014861_1 "dEQP-GLES31.functional.state_query.integer.te"
#define VkglTestCase_014861_2 "xture_binding_2d_multisample_array_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014861, VkglTestCase_014861_1, VkglTestCase_014861_2);

#define VkglTestCase_014862_1 "dEQP-GLES31.functional.state_query.integer.te"
#define VkglTestCase_014862_2 "xture_binding_2d_multisample_array_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014862, VkglTestCase_014862_1, VkglTestCase_014862_2);

#define VkglTestCase_014863_1 "dEQP-GLES31.functional.state_query.integer.tex"
#define VkglTestCase_014863_2 "ture_binding_2d_multisample_array_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014863, VkglTestCase_014863_1, VkglTestCase_014863_2);

#define VkglTestCase_014864_1 "dEQP-GLES31.functional.state_query.integer.t"
#define VkglTestCase_014864_2 "exture_binding_2d_multisample_array_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014864, VkglTestCase_014864_1, VkglTestCase_014864_2);

#define VkglTestCase_014865_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014865_2 ".texture_binding_cube_map_array_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014865, VkglTestCase_014865_1, VkglTestCase_014865_2);

#define VkglTestCase_014866_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014866_2 ".texture_binding_cube_map_array_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014866, VkglTestCase_014866_1, VkglTestCase_014866_2);

#define VkglTestCase_014867_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014867_2 "texture_binding_cube_map_array_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014867, VkglTestCase_014867_1, VkglTestCase_014867_2);

#define VkglTestCase_014868_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014868_2 "r.texture_binding_cube_map_array_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014868, VkglTestCase_014868_1, VkglTestCase_014868_2);

#define VkglTestCase_014869_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014869_2 "eger.texture_binding_buffer_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014869, VkglTestCase_014869_1, VkglTestCase_014869_2);

#define VkglTestCase_014870_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014870_2 "eger.texture_binding_buffer_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014870, VkglTestCase_014870_1, VkglTestCase_014870_2);

#define VkglTestCase_014871_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014871_2 "ger.texture_binding_buffer_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014871, VkglTestCase_014871_1, VkglTestCase_014871_2);

#define VkglTestCase_014872_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014872_2 "teger.texture_binding_buffer_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014872, VkglTestCase_014872_1, VkglTestCase_014872_2);

#define VkglTestCase_014873_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014873_2 "max_vertex_attrib_relative_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014873, VkglTestCase_014873_1, VkglTestCase_014873_2);

#define VkglTestCase_014874_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014874_2 "max_vertex_attrib_relative_offset_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014874, VkglTestCase_014874_1, VkglTestCase_014874_2);

#define VkglTestCase_014875_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014875_2 "ax_vertex_attrib_relative_offset_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014875, VkglTestCase_014875_1, VkglTestCase_014875_2);

#define VkglTestCase_014876_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014876_2 ".max_vertex_attrib_relative_offset_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014876, VkglTestCase_014876_1, VkglTestCase_014876_2);

#define VkglTestCase_014877_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014877_2 "er.max_vertex_attrib_bindings_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014877, VkglTestCase_014877_1, VkglTestCase_014877_2);

#define VkglTestCase_014878_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014878_2 "er.max_vertex_attrib_bindings_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014878, VkglTestCase_014878_1, VkglTestCase_014878_2);

#define VkglTestCase_014879_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014879_2 "r.max_vertex_attrib_bindings_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014879, VkglTestCase_014879_1, VkglTestCase_014879_2);

#define VkglTestCase_014880_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014880_2 "ger.max_vertex_attrib_bindings_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014880, VkglTestCase_014880_1, VkglTestCase_014880_2);

#define VkglTestCase_014881_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014881_2 "ger.max_vertex_attrib_stride_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014881, VkglTestCase_014881_1, VkglTestCase_014881_2);

#define VkglTestCase_014882_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014882_2 "ger.max_vertex_attrib_stride_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014882, VkglTestCase_014882_1, VkglTestCase_014882_2);

#define VkglTestCase_014883_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014883_2 "er.max_vertex_attrib_stride_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014883, VkglTestCase_014883_1, VkglTestCase_014883_2);

#define VkglTestCase_014884_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014884_2 "eger.max_vertex_attrib_stride_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014884, VkglTestCase_014884_1, VkglTestCase_014884_2);

#define VkglTestCase_014885_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014885_2 "teger.max_sample_mask_words_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014885, VkglTestCase_014885_1, VkglTestCase_014885_2);

#define VkglTestCase_014886_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014886_2 "teger.max_sample_mask_words_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014886, VkglTestCase_014886_1, VkglTestCase_014886_2);

#define VkglTestCase_014887_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014887_2 "eger.max_sample_mask_words_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014887, VkglTestCase_014887_1, VkglTestCase_014887_2);

#define VkglTestCase_014888_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_014888_2 "nteger.max_sample_mask_words_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014888, VkglTestCase_014888_1, VkglTestCase_014888_2);

#define VkglTestCase_014889_1 "dEQP-GLES31.functional.state_query.integer.sha"
#define VkglTestCase_014889_2 "der_storage_buffer_offset_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014889, VkglTestCase_014889_1, VkglTestCase_014889_2);

#define VkglTestCase_014890_1 "dEQP-GLES31.functional.state_query.integer.sha"
#define VkglTestCase_014890_2 "der_storage_buffer_offset_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014890, VkglTestCase_014890_1, VkglTestCase_014890_2);

#define VkglTestCase_014891_1 "dEQP-GLES31.functional.state_query.integer.shad"
#define VkglTestCase_014891_2 "er_storage_buffer_offset_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014891, VkglTestCase_014891_1, VkglTestCase_014891_2);

#define VkglTestCase_014892_1 "dEQP-GLES31.functional.state_query.integer.sh"
#define VkglTestCase_014892_2 "ader_storage_buffer_offset_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014892, VkglTestCase_014892_1, VkglTestCase_014892_2);

#define VkglTestCase_014893_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014893_2 "r.draw_indirect_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014893, VkglTestCase_014893_1, VkglTestCase_014893_2);

#define VkglTestCase_014894_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014894_2 "r.draw_indirect_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014894, VkglTestCase_014894_1, VkglTestCase_014894_2);

#define VkglTestCase_014895_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014895_2 ".draw_indirect_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014895, VkglTestCase_014895_1, VkglTestCase_014895_2);

#define VkglTestCase_014896_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014896_2 "er.draw_indirect_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014896, VkglTestCase_014896_1, VkglTestCase_014896_2);

#define VkglTestCase_014897_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014897_2 "r.atomic_counter_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014897, VkglTestCase_014897_1, VkglTestCase_014897_2);

#define VkglTestCase_014898_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014898_2 "r.atomic_counter_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014898, VkglTestCase_014898_1, VkglTestCase_014898_2);

#define VkglTestCase_014899_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014899_2 ".atomic_counter_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014899, VkglTestCase_014899_1, VkglTestCase_014899_2);

#define VkglTestCase_014900_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014900_2 "er.atomic_counter_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014900, VkglTestCase_014900_1, VkglTestCase_014900_2);

#define VkglTestCase_014901_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014901_2 "r.shader_storage_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014901, VkglTestCase_014901_1, VkglTestCase_014901_2);

#define VkglTestCase_014902_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014902_2 "r.shader_storage_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014902, VkglTestCase_014902_1, VkglTestCase_014902_2);

#define VkglTestCase_014903_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014903_2 ".shader_storage_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014903, VkglTestCase_014903_1, VkglTestCase_014903_2);

#define VkglTestCase_014904_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014904_2 "er.shader_storage_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014904, VkglTestCase_014904_1, VkglTestCase_014904_2);

#define VkglTestCase_014905_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014905_2 "dispatch_indirect_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014905, VkglTestCase_014905_1, VkglTestCase_014905_2);

#define VkglTestCase_014906_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014906_2 "dispatch_indirect_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014906, VkglTestCase_014906_1, VkglTestCase_014906_2);

#define VkglTestCase_014907_1 "dEQP-GLES31.functional.state_query.integer.d"
#define VkglTestCase_014907_2 "ispatch_indirect_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014907, VkglTestCase_014907_1, VkglTestCase_014907_2);

#define VkglTestCase_014908_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014908_2 ".dispatch_indirect_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014908, VkglTestCase_014908_1, VkglTestCase_014908_2);

#define VkglTestCase_014909_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014909_2 "teger.max_framebuffer_width_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014909, VkglTestCase_014909_1, VkglTestCase_014909_2);

#define VkglTestCase_014910_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014910_2 "teger.max_framebuffer_width_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014910, VkglTestCase_014910_1, VkglTestCase_014910_2);

#define VkglTestCase_014911_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014911_2 "eger.max_framebuffer_width_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014911, VkglTestCase_014911_1, VkglTestCase_014911_2);

#define VkglTestCase_014912_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_014912_2 "nteger.max_framebuffer_width_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014912, VkglTestCase_014912_1, VkglTestCase_014912_2);

#define VkglTestCase_014913_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014913_2 "eger.max_framebuffer_height_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014913, VkglTestCase_014913_1, VkglTestCase_014913_2);

#define VkglTestCase_014914_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014914_2 "eger.max_framebuffer_height_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014914, VkglTestCase_014914_1, VkglTestCase_014914_2);

#define VkglTestCase_014915_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014915_2 "ger.max_framebuffer_height_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014915, VkglTestCase_014915_1, VkglTestCase_014915_2);

#define VkglTestCase_014916_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014916_2 "teger.max_framebuffer_height_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014916, VkglTestCase_014916_1, VkglTestCase_014916_2);

#define VkglTestCase_014917_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014917_2 "eger.max_framebuffer_samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014917, VkglTestCase_014917_1, VkglTestCase_014917_2);

#define VkglTestCase_014918_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014918_2 "eger.max_framebuffer_samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014918, VkglTestCase_014918_1, VkglTestCase_014918_2);

#define VkglTestCase_014919_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014919_2 "ger.max_framebuffer_samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014919, VkglTestCase_014919_1, VkglTestCase_014919_2);

#define VkglTestCase_014920_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_014920_2 "teger.max_framebuffer_samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014920, VkglTestCase_014920_1, VkglTestCase_014920_2);

#define VkglTestCase_014921_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014921_2 "ger.program_pipeline_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014921, VkglTestCase_014921_1, VkglTestCase_014921_2);

#define VkglTestCase_014922_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014922_2 "ger.program_pipeline_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014922, VkglTestCase_014922_1, VkglTestCase_014922_2);

#define VkglTestCase_014923_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014923_2 "er.program_pipeline_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014923, VkglTestCase_014923_1, VkglTestCase_014923_2);

#define VkglTestCase_014924_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014924_2 "eger.program_pipeline_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014924, VkglTestCase_014924_1, VkglTestCase_014924_2);

#define VkglTestCase_014925_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014925_2 "max_vertex_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014925, VkglTestCase_014925_1, VkglTestCase_014925_2);

#define VkglTestCase_014926_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014926_2 "max_vertex_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014926, VkglTestCase_014926_1, VkglTestCase_014926_2);

#define VkglTestCase_014927_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014927_2 "ax_vertex_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014927, VkglTestCase_014927_1, VkglTestCase_014927_2);

#define VkglTestCase_014928_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014928_2 ".max_vertex_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014928, VkglTestCase_014928_1, VkglTestCase_014928_2);

#define VkglTestCase_014929_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014929_2 "er.max_vertex_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014929, VkglTestCase_014929_1, VkglTestCase_014929_2);

#define VkglTestCase_014930_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014930_2 "er.max_vertex_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014930, VkglTestCase_014930_1, VkglTestCase_014930_2);

#define VkglTestCase_014931_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014931_2 "r.max_vertex_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014931, VkglTestCase_014931_1, VkglTestCase_014931_2);

#define VkglTestCase_014932_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014932_2 "ger.max_vertex_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014932, VkglTestCase_014932_1, VkglTestCase_014932_2);

#define VkglTestCase_014933_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014933_2 "ger.max_vertex_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014933, VkglTestCase_014933_1, VkglTestCase_014933_2);

#define VkglTestCase_014934_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014934_2 "ger.max_vertex_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014934, VkglTestCase_014934_1, VkglTestCase_014934_2);

#define VkglTestCase_014935_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014935_2 "er.max_vertex_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014935, VkglTestCase_014935_1, VkglTestCase_014935_2);

#define VkglTestCase_014936_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_014936_2 "eger.max_vertex_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014936, VkglTestCase_014936_1, VkglTestCase_014936_2);

#define VkglTestCase_014937_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014937_2 "max_vertex_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014937, VkglTestCase_014937_1, VkglTestCase_014937_2);

#define VkglTestCase_014938_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014938_2 "max_vertex_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014938, VkglTestCase_014938_1, VkglTestCase_014938_2);

#define VkglTestCase_014939_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014939_2 "ax_vertex_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014939, VkglTestCase_014939_1, VkglTestCase_014939_2);

#define VkglTestCase_014940_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014940_2 ".max_vertex_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014940, VkglTestCase_014940_1, VkglTestCase_014940_2);

#define VkglTestCase_014941_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014941_2 "r.max_vertex_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014941, VkglTestCase_014941_1, VkglTestCase_014941_2);

#define VkglTestCase_014942_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014942_2 "r.max_vertex_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014942, VkglTestCase_014942_1, VkglTestCase_014942_2);

#define VkglTestCase_014943_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014943_2 ".max_vertex_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014943, VkglTestCase_014943_1, VkglTestCase_014943_2);

#define VkglTestCase_014944_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014944_2 "er.max_vertex_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014944, VkglTestCase_014944_1, VkglTestCase_014944_2);

#define VkglTestCase_014945_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014945_2 "ax_fragment_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014945, VkglTestCase_014945_1, VkglTestCase_014945_2);

#define VkglTestCase_014946_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014946_2 "ax_fragment_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014946, VkglTestCase_014946_1, VkglTestCase_014946_2);

#define VkglTestCase_014947_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_014947_2 "x_fragment_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014947, VkglTestCase_014947_1, VkglTestCase_014947_2);

#define VkglTestCase_014948_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014948_2 "max_fragment_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014948, VkglTestCase_014948_1, VkglTestCase_014948_2);

#define VkglTestCase_014949_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014949_2 "r.max_fragment_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014949, VkglTestCase_014949_1, VkglTestCase_014949_2);

#define VkglTestCase_014950_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014950_2 "r.max_fragment_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014950, VkglTestCase_014950_1, VkglTestCase_014950_2);

#define VkglTestCase_014951_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014951_2 ".max_fragment_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014951, VkglTestCase_014951_1, VkglTestCase_014951_2);

#define VkglTestCase_014952_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014952_2 "er.max_fragment_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014952, VkglTestCase_014952_1, VkglTestCase_014952_2);

#define VkglTestCase_014953_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014953_2 "er.max_fragment_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014953, VkglTestCase_014953_1, VkglTestCase_014953_2);

#define VkglTestCase_014954_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014954_2 "er.max_fragment_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014954, VkglTestCase_014954_1, VkglTestCase_014954_2);

#define VkglTestCase_014955_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014955_2 "r.max_fragment_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014955, VkglTestCase_014955_1, VkglTestCase_014955_2);

#define VkglTestCase_014956_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014956_2 "ger.max_fragment_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014956, VkglTestCase_014956_1, VkglTestCase_014956_2);

#define VkglTestCase_014957_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014957_2 "ax_fragment_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014957, VkglTestCase_014957_1, VkglTestCase_014957_2);

#define VkglTestCase_014958_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014958_2 "ax_fragment_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014958, VkglTestCase_014958_1, VkglTestCase_014958_2);

#define VkglTestCase_014959_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_014959_2 "x_fragment_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014959, VkglTestCase_014959_1, VkglTestCase_014959_2);

#define VkglTestCase_014960_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014960_2 "max_fragment_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014960, VkglTestCase_014960_1, VkglTestCase_014960_2);

#define VkglTestCase_014961_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014961_2 ".max_fragment_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014961, VkglTestCase_014961_1, VkglTestCase_014961_2);

#define VkglTestCase_014962_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014962_2 ".max_fragment_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014962, VkglTestCase_014962_1, VkglTestCase_014962_2);

#define VkglTestCase_014963_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014963_2 "max_fragment_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014963, VkglTestCase_014963_1, VkglTestCase_014963_2);

#define VkglTestCase_014964_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014964_2 "r.max_fragment_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014964, VkglTestCase_014964_1, VkglTestCase_014964_2);

#define VkglTestCase_014965_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014965_2 "ax_compute_work_group_invocations_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014965, VkglTestCase_014965_1, VkglTestCase_014965_2);

#define VkglTestCase_014966_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014966_2 "ax_compute_work_group_invocations_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014966, VkglTestCase_014966_1, VkglTestCase_014966_2);

#define VkglTestCase_014967_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_014967_2 "x_compute_work_group_invocations_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014967, VkglTestCase_014967_1, VkglTestCase_014967_2);

#define VkglTestCase_014968_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014968_2 "max_compute_work_group_invocations_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014968, VkglTestCase_014968_1, VkglTestCase_014968_2);

#define VkglTestCase_014969_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014969_2 "er.max_compute_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014969, VkglTestCase_014969_1, VkglTestCase_014969_2);

#define VkglTestCase_014970_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014970_2 "er.max_compute_uniform_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014970, VkglTestCase_014970_1, VkglTestCase_014970_2);

#define VkglTestCase_014971_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014971_2 "r.max_compute_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014971, VkglTestCase_014971_1, VkglTestCase_014971_2);

#define VkglTestCase_014972_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014972_2 "ger.max_compute_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014972, VkglTestCase_014972_1, VkglTestCase_014972_2);

#define VkglTestCase_014973_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014973_2 ".max_compute_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014973, VkglTestCase_014973_1, VkglTestCase_014973_2);

#define VkglTestCase_014974_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014974_2 ".max_compute_texture_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014974, VkglTestCase_014974_1, VkglTestCase_014974_2);

#define VkglTestCase_014975_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014975_2 "max_compute_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014975, VkglTestCase_014975_1, VkglTestCase_014975_2);

#define VkglTestCase_014976_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014976_2 "r.max_compute_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014976, VkglTestCase_014976_1, VkglTestCase_014976_2);

#define VkglTestCase_014977_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014977_2 ".max_compute_shared_memory_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014977, VkglTestCase_014977_1, VkglTestCase_014977_2);

#define VkglTestCase_014978_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014978_2 ".max_compute_shared_memory_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014978, VkglTestCase_014978_1, VkglTestCase_014978_2);

#define VkglTestCase_014979_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014979_2 "max_compute_shared_memory_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014979, VkglTestCase_014979_1, VkglTestCase_014979_2);

#define VkglTestCase_014980_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014980_2 "r.max_compute_shared_memory_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014980, VkglTestCase_014980_1, VkglTestCase_014980_2);

#define VkglTestCase_014981_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014981_2 ".max_compute_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014981, VkglTestCase_014981_1, VkglTestCase_014981_2);

#define VkglTestCase_014982_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_014982_2 ".max_compute_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014982, VkglTestCase_014982_1, VkglTestCase_014982_2);

#define VkglTestCase_014983_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014983_2 "max_compute_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014983, VkglTestCase_014983_1, VkglTestCase_014983_2);

#define VkglTestCase_014984_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014984_2 "r.max_compute_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014984, VkglTestCase_014984_1, VkglTestCase_014984_2);

#define VkglTestCase_014985_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014985_2 "ax_compute_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014985, VkglTestCase_014985_1, VkglTestCase_014985_2);

#define VkglTestCase_014986_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014986_2 "ax_compute_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014986, VkglTestCase_014986_1, VkglTestCase_014986_2);

#define VkglTestCase_014987_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_014987_2 "x_compute_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014987, VkglTestCase_014987_1, VkglTestCase_014987_2);

#define VkglTestCase_014988_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014988_2 "max_compute_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014988, VkglTestCase_014988_1, VkglTestCase_014988_2);

#define VkglTestCase_014989_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014989_2 "er.max_compute_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014989, VkglTestCase_014989_1, VkglTestCase_014989_2);

#define VkglTestCase_014990_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014990_2 "er.max_compute_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014990, VkglTestCase_014990_1, VkglTestCase_014990_2);

#define VkglTestCase_014991_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014991_2 "r.max_compute_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014991, VkglTestCase_014991_1, VkglTestCase_014991_2);

#define VkglTestCase_014992_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014992_2 "ger.max_compute_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014992, VkglTestCase_014992_1, VkglTestCase_014992_2);

#define VkglTestCase_014993_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014993_2 "er.max_compute_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014993, VkglTestCase_014993_1, VkglTestCase_014993_2);

#define VkglTestCase_014994_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_014994_2 "er.max_compute_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014994, VkglTestCase_014994_1, VkglTestCase_014994_2);

#define VkglTestCase_014995_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_014995_2 "r.max_compute_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014995, VkglTestCase_014995_1, VkglTestCase_014995_2);

#define VkglTestCase_014996_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_014996_2 "ger.max_compute_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014996, VkglTestCase_014996_1, VkglTestCase_014996_2);

#define VkglTestCase_014997_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014997_2 "max_compute_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014997, VkglTestCase_014997_1, VkglTestCase_014997_2);

#define VkglTestCase_014998_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_014998_2 "max_compute_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014998, VkglTestCase_014998_1, VkglTestCase_014998_2);

#define VkglTestCase_014999_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_014999_2 "ax_compute_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014999, VkglTestCase_014999_1, VkglTestCase_014999_2);

#define VkglTestCase_015000_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015000_2 ".max_compute_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015000, VkglTestCase_015000_1, VkglTestCase_015000_2);

#define VkglTestCase_015001_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015001_2 "teger.max_uniform_locations_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015001, VkglTestCase_015001_1, VkglTestCase_015001_2);

#define VkglTestCase_015002_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015002_2 "teger.max_uniform_locations_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015002, VkglTestCase_015002_1, VkglTestCase_015002_2);

#define VkglTestCase_015003_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015003_2 "eger.max_uniform_locations_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015003, VkglTestCase_015003_1, VkglTestCase_015003_2);

#define VkglTestCase_015004_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015004_2 "nteger.max_uniform_locations_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015004, VkglTestCase_015004_1, VkglTestCase_015004_2);

#define VkglTestCase_015005_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015005_2 "ax_atomic_counter_buffer_bindings_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015005, VkglTestCase_015005_1, VkglTestCase_015005_2);

#define VkglTestCase_015006_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015006_2 "ax_atomic_counter_buffer_bindings_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015006, VkglTestCase_015006_1, VkglTestCase_015006_2);

#define VkglTestCase_015007_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015007_2 "x_atomic_counter_buffer_bindings_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015007, VkglTestCase_015007_1, VkglTestCase_015007_2);

#define VkglTestCase_015008_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015008_2 "max_atomic_counter_buffer_bindings_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015008, VkglTestCase_015008_1, VkglTestCase_015008_2);

#define VkglTestCase_015009_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015009_2 ".max_atomic_counter_buffer_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015009, VkglTestCase_015009_1, VkglTestCase_015009_2);

#define VkglTestCase_015010_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015010_2 ".max_atomic_counter_buffer_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015010, VkglTestCase_015010_1, VkglTestCase_015010_2);

#define VkglTestCase_015011_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015011_2 "max_atomic_counter_buffer_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015011, VkglTestCase_015011_1, VkglTestCase_015011_2);

#define VkglTestCase_015012_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015012_2 "r.max_atomic_counter_buffer_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015012, VkglTestCase_015012_1, VkglTestCase_015012_2);

#define VkglTestCase_015013_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015013_2 "ax_combined_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015013, VkglTestCase_015013_1, VkglTestCase_015013_2);

#define VkglTestCase_015014_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015014_2 "ax_combined_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015014, VkglTestCase_015014_1, VkglTestCase_015014_2);

#define VkglTestCase_015015_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015015_2 "x_combined_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015015, VkglTestCase_015015_1, VkglTestCase_015015_2);

#define VkglTestCase_015016_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015016_2 "max_combined_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015016, VkglTestCase_015016_1, VkglTestCase_015016_2);

#define VkglTestCase_015017_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015017_2 "r.max_combined_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015017, VkglTestCase_015017_1, VkglTestCase_015017_2);

#define VkglTestCase_015018_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015018_2 "r.max_combined_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015018, VkglTestCase_015018_1, VkglTestCase_015018_2);

#define VkglTestCase_015019_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015019_2 ".max_combined_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015019, VkglTestCase_015019_1, VkglTestCase_015019_2);

#define VkglTestCase_015020_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015020_2 "er.max_combined_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015020, VkglTestCase_015020_1, VkglTestCase_015020_2);

#define VkglTestCase_015021_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015021_2 ".integer.max_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015021, VkglTestCase_015021_1, VkglTestCase_015021_2);

#define VkglTestCase_015022_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015022_2 ".integer.max_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015022, VkglTestCase_015022_1, VkglTestCase_015022_2);

#define VkglTestCase_015023_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015023_2 "integer.max_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015023, VkglTestCase_015023_1, VkglTestCase_015023_2);

#define VkglTestCase_015024_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015024_2 "y.integer.max_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015024, VkglTestCase_015024_1, VkglTestCase_015024_2);

#define VkglTestCase_015025_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015025_2 "er.max_combined_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015025, VkglTestCase_015025_1, VkglTestCase_015025_2);

#define VkglTestCase_015026_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015026_2 "er.max_combined_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015026, VkglTestCase_015026_1, VkglTestCase_015026_2);

#define VkglTestCase_015027_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015027_2 "r.max_combined_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015027, VkglTestCase_015027_1, VkglTestCase_015027_2);

#define VkglTestCase_015028_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015028_2 "ger.max_combined_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015028, VkglTestCase_015028_1, VkglTestCase_015028_2);

#define VkglTestCase_015029_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015029_2 "ax_shader_storage_buffer_bindings_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015029, VkglTestCase_015029_1, VkglTestCase_015029_2);

#define VkglTestCase_015030_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015030_2 "ax_shader_storage_buffer_bindings_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015030, VkglTestCase_015030_1, VkglTestCase_015030_2);

#define VkglTestCase_015031_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015031_2 "x_shader_storage_buffer_bindings_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015031, VkglTestCase_015031_1, VkglTestCase_015031_2);

#define VkglTestCase_015032_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015032_2 "max_shader_storage_buffer_bindings_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015032, VkglTestCase_015032_1, VkglTestCase_015032_2);

#define VkglTestCase_015033_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015033_2 "r.max_shader_storage_block_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015033, VkglTestCase_015033_1, VkglTestCase_015033_2);

#define VkglTestCase_015034_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015034_2 "r.max_shader_storage_block_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015034, VkglTestCase_015034_1, VkglTestCase_015034_2);

#define VkglTestCase_015035_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015035_2 ".max_shader_storage_block_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015035, VkglTestCase_015035_1, VkglTestCase_015035_2);

#define VkglTestCase_015036_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015036_2 "er.max_shader_storage_block_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015036, VkglTestCase_015036_1, VkglTestCase_015036_2);

#define VkglTestCase_015037_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015037_2 "ax_combined_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015037, VkglTestCase_015037_1, VkglTestCase_015037_2);

#define VkglTestCase_015038_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015038_2 "ax_combined_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015038, VkglTestCase_015038_1, VkglTestCase_015038_2);

#define VkglTestCase_015039_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015039_2 "x_combined_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015039, VkglTestCase_015039_1, VkglTestCase_015039_2);

#define VkglTestCase_015040_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015040_2 "max_combined_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015040, VkglTestCase_015040_1, VkglTestCase_015040_2);

#define VkglTestCase_015041_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015041_2 "x_combined_shader_output_resources_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015041, VkglTestCase_015041_1, VkglTestCase_015041_2);

#define VkglTestCase_015042_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015042_2 "x_combined_shader_output_resources_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015042, VkglTestCase_015042_1, VkglTestCase_015042_2);

#define VkglTestCase_015043_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015043_2 "_combined_shader_output_resources_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015043, VkglTestCase_015043_1, VkglTestCase_015043_2);

#define VkglTestCase_015044_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015044_2 "ax_combined_shader_output_resources_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015044, VkglTestCase_015044_1, VkglTestCase_015044_2);

#define VkglTestCase_015045_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015045_2 "er.max_uniform_buffer_bindings_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015045, VkglTestCase_015045_1, VkglTestCase_015045_2);

#define VkglTestCase_015046_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015046_2 "er.max_uniform_buffer_bindings_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015046, VkglTestCase_015046_1, VkglTestCase_015046_2);

#define VkglTestCase_015047_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015047_2 "r.max_uniform_buffer_bindings_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015047, VkglTestCase_015047_1, VkglTestCase_015047_2);

#define VkglTestCase_015048_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015048_2 "ger.max_uniform_buffer_bindings_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015048, VkglTestCase_015048_1, VkglTestCase_015048_2);

#define VkglTestCase_015049_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015049_2 "er.max_combined_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015049, VkglTestCase_015049_1, VkglTestCase_015049_2);

#define VkglTestCase_015050_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015050_2 "er.max_combined_uniform_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015050, VkglTestCase_015050_1, VkglTestCase_015050_2);

#define VkglTestCase_015051_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015051_2 "r.max_combined_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015051, VkglTestCase_015051_1, VkglTestCase_015051_2);

#define VkglTestCase_015052_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015052_2 "ger.max_combined_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015052, VkglTestCase_015052_1, VkglTestCase_015052_2);

#define VkglTestCase_015053_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015053_2 "max_combined_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015053, VkglTestCase_015053_1, VkglTestCase_015053_2);

#define VkglTestCase_015054_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015054_2 "max_combined_texture_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015054, VkglTestCase_015054_1, VkglTestCase_015054_2);

#define VkglTestCase_015055_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015055_2 "ax_combined_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015055, VkglTestCase_015055_1, VkglTestCase_015055_2);

#define VkglTestCase_015056_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015056_2 ".max_combined_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015056, VkglTestCase_015056_1, VkglTestCase_015056_2);

#define VkglTestCase_015057_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015057_2 "_combined_compute_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015057, VkglTestCase_015057_1, VkglTestCase_015057_2);

#define VkglTestCase_015058_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015058_2 "_combined_compute_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015058, VkglTestCase_015058_1, VkglTestCase_015058_2);

#define VkglTestCase_015059_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015059_2 "combined_compute_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015059, VkglTestCase_015059_1, VkglTestCase_015059_2);

#define VkglTestCase_015060_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015060_2 "x_combined_compute_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015060, VkglTestCase_015060_1, VkglTestCase_015060_2);

#define VkglTestCase_015061_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015061_2 "er.max_vertex_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015061, VkglTestCase_015061_1, VkglTestCase_015061_2);

#define VkglTestCase_015062_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015062_2 "er.max_vertex_uniform_vectors_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015062, VkglTestCase_015062_1, VkglTestCase_015062_2);

#define VkglTestCase_015063_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015063_2 "r.max_vertex_uniform_vectors_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015063, VkglTestCase_015063_1, VkglTestCase_015063_2);

#define VkglTestCase_015064_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015064_2 "ger.max_vertex_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015064, VkglTestCase_015064_1, VkglTestCase_015064_2);

#define VkglTestCase_015065_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015065_2 "r.max_fragment_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015065, VkglTestCase_015065_1, VkglTestCase_015065_2);

#define VkglTestCase_015066_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015066_2 "r.max_fragment_uniform_vectors_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015066, VkglTestCase_015066_1, VkglTestCase_015066_2);

#define VkglTestCase_015067_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015067_2 ".max_fragment_uniform_vectors_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015067, VkglTestCase_015067_1, VkglTestCase_015067_2);

#define VkglTestCase_015068_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015068_2 "er.max_fragment_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015068, VkglTestCase_015068_1, VkglTestCase_015068_2);

#define VkglTestCase_015069_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015069_2 "min_program_texture_gather_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015069, VkglTestCase_015069_1, VkglTestCase_015069_2);

#define VkglTestCase_015070_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015070_2 "min_program_texture_gather_offset_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015070, VkglTestCase_015070_1, VkglTestCase_015070_2);

#define VkglTestCase_015071_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015071_2 "in_program_texture_gather_offset_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015071, VkglTestCase_015071_1, VkglTestCase_015071_2);

#define VkglTestCase_015072_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015072_2 ".min_program_texture_gather_offset_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015072, VkglTestCase_015072_1, VkglTestCase_015072_2);

#define VkglTestCase_015073_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015073_2 "max_program_texture_gather_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015073, VkglTestCase_015073_1, VkglTestCase_015073_2);

#define VkglTestCase_015074_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015074_2 "max_program_texture_gather_offset_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015074, VkglTestCase_015074_1, VkglTestCase_015074_2);

#define VkglTestCase_015075_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015075_2 "ax_program_texture_gather_offset_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015075, VkglTestCase_015075_1, VkglTestCase_015075_2);

#define VkglTestCase_015076_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015076_2 ".max_program_texture_gather_offset_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015076, VkglTestCase_015076_1, VkglTestCase_015076_2);

#define VkglTestCase_015077_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015077_2 "eger.max_framebuffer_layers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015077, VkglTestCase_015077_1, VkglTestCase_015077_2);

#define VkglTestCase_015078_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015078_2 "eger.max_framebuffer_layers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015078, VkglTestCase_015078_1, VkglTestCase_015078_2);

#define VkglTestCase_015079_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015079_2 "ger.max_framebuffer_layers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015079, VkglTestCase_015079_1, VkglTestCase_015079_2);

#define VkglTestCase_015080_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015080_2 "teger.max_framebuffer_layers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015080, VkglTestCase_015080_1, VkglTestCase_015080_2);

#define VkglTestCase_015081_1 "dEQP-GLES31.functional.state_query.integer.f"
#define VkglTestCase_015081_2 "ragment_interpolation_offset_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015081, VkglTestCase_015081_1, VkglTestCase_015081_2);

#define VkglTestCase_015082_1 "dEQP-GLES31.functional.state_query.integer.f"
#define VkglTestCase_015082_2 "ragment_interpolation_offset_bits_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015082, VkglTestCase_015082_1, VkglTestCase_015082_2);

#define VkglTestCase_015083_1 "dEQP-GLES31.functional.state_query.integer.fr"
#define VkglTestCase_015083_2 "agment_interpolation_offset_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015083, VkglTestCase_015083_1, VkglTestCase_015083_2);

#define VkglTestCase_015084_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015084_2 "fragment_interpolation_offset_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015084, VkglTestCase_015084_1, VkglTestCase_015084_2);

#define VkglTestCase_015085_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015085_2 "eger.max_texture_buffer_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015085, VkglTestCase_015085_1, VkglTestCase_015085_2);

#define VkglTestCase_015086_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015086_2 "eger.max_texture_buffer_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015086, VkglTestCase_015086_1, VkglTestCase_015086_2);

#define VkglTestCase_015087_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015087_2 "ger.max_texture_buffer_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015087, VkglTestCase_015087_1, VkglTestCase_015087_2);

#define VkglTestCase_015088_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015088_2 "teger.max_texture_buffer_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015088, VkglTestCase_015088_1, VkglTestCase_015088_2);

#define VkglTestCase_015089_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015089_2 ".texture_buffer_offset_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015089, VkglTestCase_015089_1, VkglTestCase_015089_2);

#define VkglTestCase_015090_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015090_2 ".texture_buffer_offset_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015090, VkglTestCase_015090_1, VkglTestCase_015090_2);

#define VkglTestCase_015091_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015091_2 "texture_buffer_offset_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015091, VkglTestCase_015091_1, VkglTestCase_015091_2);

#define VkglTestCase_015092_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015092_2 "r.texture_buffer_offset_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015092, VkglTestCase_015092_1, VkglTestCase_015092_2);

#define VkglTestCase_015093_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015093_2 "nteger.max_tess_gen_level_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015093, VkglTestCase_015093_1, VkglTestCase_015093_2);

#define VkglTestCase_015094_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015094_2 "nteger.max_tess_gen_level_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015094, VkglTestCase_015094_1, VkglTestCase_015094_2);

#define VkglTestCase_015095_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015095_2 "teger.max_tess_gen_level_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015095, VkglTestCase_015095_1, VkglTestCase_015095_2);

#define VkglTestCase_015096_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015096_2 "integer.max_tess_gen_level_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015096, VkglTestCase_015096_1, VkglTestCase_015096_2);

#define VkglTestCase_015097_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015097_2 "nteger.max_patch_vertices_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015097, VkglTestCase_015097_1, VkglTestCase_015097_2);

#define VkglTestCase_015098_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015098_2 "nteger.max_patch_vertices_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015098, VkglTestCase_015098_1, VkglTestCase_015098_2);

#define VkglTestCase_015099_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015099_2 "teger.max_patch_vertices_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015099, VkglTestCase_015099_1, VkglTestCase_015099_2);

#define VkglTestCase_015100_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015100_2 "integer.max_patch_vertices_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015100, VkglTestCase_015100_1, VkglTestCase_015100_2);

#define VkglTestCase_015101_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015101_2 "ger.max_tess_patch_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015101, VkglTestCase_015101_1, VkglTestCase_015101_2);

#define VkglTestCase_015102_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015102_2 "ger.max_tess_patch_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015102, VkglTestCase_015102_1, VkglTestCase_015102_2);

#define VkglTestCase_015103_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015103_2 "er.max_tess_patch_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015103, VkglTestCase_015103_1, VkglTestCase_015103_2);

#define VkglTestCase_015104_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015104_2 "eger.max_tess_patch_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015104, VkglTestCase_015104_1, VkglTestCase_015104_2);

#define VkglTestCase_015105_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015105_2 "ax_tess_control_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015105, VkglTestCase_015105_1, VkglTestCase_015105_2);

#define VkglTestCase_015106_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015106_2 "ax_tess_control_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015106, VkglTestCase_015106_1, VkglTestCase_015106_2);

#define VkglTestCase_015107_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015107_2 "x_tess_control_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015107, VkglTestCase_015107_1, VkglTestCase_015107_2);

#define VkglTestCase_015108_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015108_2 "max_tess_control_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015108, VkglTestCase_015108_1, VkglTestCase_015108_2);

#define VkglTestCase_015109_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015109_2 "x_tess_control_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015109, VkglTestCase_015109_1, VkglTestCase_015109_2);

#define VkglTestCase_015110_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015110_2 "x_tess_control_texture_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015110, VkglTestCase_015110_1, VkglTestCase_015110_2);

#define VkglTestCase_015111_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015111_2 "_tess_control_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015111, VkglTestCase_015111_1, VkglTestCase_015111_2);

#define VkglTestCase_015112_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015112_2 "ax_tess_control_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015112, VkglTestCase_015112_1, VkglTestCase_015112_2);

#define VkglTestCase_015113_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015113_2 "ax_tess_control_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015113, VkglTestCase_015113_1, VkglTestCase_015113_2);

#define VkglTestCase_015114_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015114_2 "ax_tess_control_output_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015114, VkglTestCase_015114_1, VkglTestCase_015114_2);

#define VkglTestCase_015115_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015115_2 "x_tess_control_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015115, VkglTestCase_015115_1, VkglTestCase_015115_2);

#define VkglTestCase_015116_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015116_2 "max_tess_control_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015116, VkglTestCase_015116_1, VkglTestCase_015116_2);

#define VkglTestCase_015117_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015117_2 "tess_control_total_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015117, VkglTestCase_015117_1, VkglTestCase_015117_2);

#define VkglTestCase_015118_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015118_2 "tess_control_total_output_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015118, VkglTestCase_015118_1, VkglTestCase_015118_2);

#define VkglTestCase_015119_1 "dEQP-GLES31.functional.state_query.integer.max_t"
#define VkglTestCase_015119_2 "ess_control_total_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015119, VkglTestCase_015119_1, VkglTestCase_015119_2);

#define VkglTestCase_015120_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015120_2 "_tess_control_total_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015120, VkglTestCase_015120_1, VkglTestCase_015120_2);

#define VkglTestCase_015121_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015121_2 "max_tess_control_input_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015121, VkglTestCase_015121_1, VkglTestCase_015121_2);

#define VkglTestCase_015122_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015122_2 "max_tess_control_input_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015122, VkglTestCase_015122_1, VkglTestCase_015122_2);

#define VkglTestCase_015123_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015123_2 "ax_tess_control_input_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015123, VkglTestCase_015123_1, VkglTestCase_015123_2);

#define VkglTestCase_015124_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015124_2 ".max_tess_control_input_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015124, VkglTestCase_015124_1, VkglTestCase_015124_2);

#define VkglTestCase_015125_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015125_2 ".max_tess_control_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015125, VkglTestCase_015125_1, VkglTestCase_015125_2);

#define VkglTestCase_015126_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015126_2 ".max_tess_control_uniform_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015126, VkglTestCase_015126_1, VkglTestCase_015126_2);

#define VkglTestCase_015127_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015127_2 "max_tess_control_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015127, VkglTestCase_015127_1, VkglTestCase_015127_2);

#define VkglTestCase_015128_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015128_2 "r.max_tess_control_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015128, VkglTestCase_015128_1, VkglTestCase_015128_2);

#define VkglTestCase_015129_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015129_2 "_tess_control_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015129, VkglTestCase_015129_1, VkglTestCase_015129_2);

#define VkglTestCase_015130_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015130_2 "_tess_control_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015130, VkglTestCase_015130_1, VkglTestCase_015130_2);

#define VkglTestCase_015131_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015131_2 "tess_control_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015131, VkglTestCase_015131_1, VkglTestCase_015131_2);

#define VkglTestCase_015132_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015132_2 "x_tess_control_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015132, VkglTestCase_015132_1, VkglTestCase_015132_2);

#define VkglTestCase_015133_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015133_2 "max_tess_control_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015133, VkglTestCase_015133_1, VkglTestCase_015133_2);

#define VkglTestCase_015134_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015134_2 "max_tess_control_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015134, VkglTestCase_015134_1, VkglTestCase_015134_2);

#define VkglTestCase_015135_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015135_2 "ax_tess_control_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015135, VkglTestCase_015135_1, VkglTestCase_015135_2);

#define VkglTestCase_015136_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015136_2 ".max_tess_control_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015136, VkglTestCase_015136_1, VkglTestCase_015136_2);

#define VkglTestCase_015137_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015137_2 "_tess_control_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015137, VkglTestCase_015137_1, VkglTestCase_015137_2);

#define VkglTestCase_015138_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015138_2 "_tess_control_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015138, VkglTestCase_015138_1, VkglTestCase_015138_2);

#define VkglTestCase_015139_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015139_2 "tess_control_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015139, VkglTestCase_015139_1, VkglTestCase_015139_2);

#define VkglTestCase_015140_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015140_2 "x_tess_control_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015140, VkglTestCase_015140_1, VkglTestCase_015140_2);

#define VkglTestCase_015141_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015141_2 "_tess_evaluation_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015141, VkglTestCase_015141_1, VkglTestCase_015141_2);

#define VkglTestCase_015142_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015142_2 "_tess_evaluation_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015142, VkglTestCase_015142_1, VkglTestCase_015142_2);

#define VkglTestCase_015143_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015143_2 "tess_evaluation_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015143, VkglTestCase_015143_1, VkglTestCase_015143_2);

#define VkglTestCase_015144_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015144_2 "x_tess_evaluation_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015144, VkglTestCase_015144_1, VkglTestCase_015144_2);

#define VkglTestCase_015145_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015145_2 "_tess_evaluation_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015145, VkglTestCase_015145_1, VkglTestCase_015145_2);

#define VkglTestCase_015146_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015146_2 "_tess_evaluation_texture_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015146, VkglTestCase_015146_1, VkglTestCase_015146_2);

#define VkglTestCase_015147_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015147_2 "tess_evaluation_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015147, VkglTestCase_015147_1, VkglTestCase_015147_2);

#define VkglTestCase_015148_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015148_2 "x_tess_evaluation_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015148, VkglTestCase_015148_1, VkglTestCase_015148_2);

#define VkglTestCase_015149_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015149_2 "x_tess_evaluation_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015149, VkglTestCase_015149_1, VkglTestCase_015149_2);

#define VkglTestCase_015150_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015150_2 "x_tess_evaluation_output_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015150, VkglTestCase_015150_1, VkglTestCase_015150_2);

#define VkglTestCase_015151_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015151_2 "_tess_evaluation_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015151, VkglTestCase_015151_1, VkglTestCase_015151_2);

#define VkglTestCase_015152_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015152_2 "ax_tess_evaluation_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015152, VkglTestCase_015152_1, VkglTestCase_015152_2);

#define VkglTestCase_015153_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015153_2 "x_tess_evaluation_input_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015153, VkglTestCase_015153_1, VkglTestCase_015153_2);

#define VkglTestCase_015154_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015154_2 "x_tess_evaluation_input_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015154, VkglTestCase_015154_1, VkglTestCase_015154_2);

#define VkglTestCase_015155_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015155_2 "_tess_evaluation_input_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015155, VkglTestCase_015155_1, VkglTestCase_015155_2);

#define VkglTestCase_015156_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015156_2 "ax_tess_evaluation_input_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015156, VkglTestCase_015156_1, VkglTestCase_015156_2);

#define VkglTestCase_015157_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015157_2 "ax_tess_evaluation_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015157, VkglTestCase_015157_1, VkglTestCase_015157_2);

#define VkglTestCase_015158_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015158_2 "ax_tess_evaluation_uniform_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015158, VkglTestCase_015158_1, VkglTestCase_015158_2);

#define VkglTestCase_015159_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015159_2 "x_tess_evaluation_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015159, VkglTestCase_015159_1, VkglTestCase_015159_2);

#define VkglTestCase_015160_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015160_2 "max_tess_evaluation_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015160, VkglTestCase_015160_1, VkglTestCase_015160_2);

#define VkglTestCase_015161_1 "dEQP-GLES31.functional.state_query.integer.max_t"
#define VkglTestCase_015161_2 "ess_evaluation_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015161, VkglTestCase_015161_1, VkglTestCase_015161_2);

#define VkglTestCase_015162_1 "dEQP-GLES31.functional.state_query.integer.max_t"
#define VkglTestCase_015162_2 "ess_evaluation_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015162, VkglTestCase_015162_1, VkglTestCase_015162_2);

#define VkglTestCase_015163_1 "dEQP-GLES31.functional.state_query.integer.max_te"
#define VkglTestCase_015163_2 "ss_evaluation_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015163, VkglTestCase_015163_1, VkglTestCase_015163_2);

#define VkglTestCase_015164_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015164_2 "tess_evaluation_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015164, VkglTestCase_015164_1, VkglTestCase_015164_2);

#define VkglTestCase_015165_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015165_2 "ax_tess_evaluation_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015165, VkglTestCase_015165_1, VkglTestCase_015165_2);

#define VkglTestCase_015166_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015166_2 "ax_tess_evaluation_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015166, VkglTestCase_015166_1, VkglTestCase_015166_2);

#define VkglTestCase_015167_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015167_2 "x_tess_evaluation_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015167, VkglTestCase_015167_1, VkglTestCase_015167_2);

#define VkglTestCase_015168_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015168_2 "max_tess_evaluation_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015168, VkglTestCase_015168_1, VkglTestCase_015168_2);

#define VkglTestCase_015169_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015169_2 "tess_evaluation_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015169, VkglTestCase_015169_1, VkglTestCase_015169_2);

#define VkglTestCase_015170_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015170_2 "tess_evaluation_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015170, VkglTestCase_015170_1, VkglTestCase_015170_2);

#define VkglTestCase_015171_1 "dEQP-GLES31.functional.state_query.integer.max_t"
#define VkglTestCase_015171_2 "ess_evaluation_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015171, VkglTestCase_015171_1, VkglTestCase_015171_2);

#define VkglTestCase_015172_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015172_2 "_tess_evaluation_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015172, VkglTestCase_015172_1, VkglTestCase_015172_2);

#define VkglTestCase_015173_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015173_2 ".max_geometry_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015173, VkglTestCase_015173_1, VkglTestCase_015173_2);

#define VkglTestCase_015174_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015174_2 ".max_geometry_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015174, VkglTestCase_015174_1, VkglTestCase_015174_2);

#define VkglTestCase_015175_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015175_2 "max_geometry_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015175, VkglTestCase_015175_1, VkglTestCase_015175_2);

#define VkglTestCase_015176_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015176_2 "r.max_geometry_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015176, VkglTestCase_015176_1, VkglTestCase_015176_2);

#define VkglTestCase_015177_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015177_2 "er.max_geometry_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015177, VkglTestCase_015177_1, VkglTestCase_015177_2);

#define VkglTestCase_015178_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015178_2 "er.max_geometry_uniform_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015178, VkglTestCase_015178_1, VkglTestCase_015178_2);

#define VkglTestCase_015179_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015179_2 "r.max_geometry_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015179, VkglTestCase_015179_1, VkglTestCase_015179_2);

#define VkglTestCase_015180_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015180_2 "ger.max_geometry_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015180, VkglTestCase_015180_1, VkglTestCase_015180_2);

#define VkglTestCase_015181_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015181_2 "r.max_geometry_input_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015181, VkglTestCase_015181_1, VkglTestCase_015181_2);

#define VkglTestCase_015182_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015182_2 "r.max_geometry_input_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015182, VkglTestCase_015182_1, VkglTestCase_015182_2);

#define VkglTestCase_015183_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015183_2 ".max_geometry_input_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015183, VkglTestCase_015183_1, VkglTestCase_015183_2);

#define VkglTestCase_015184_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015184_2 "er.max_geometry_input_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015184, VkglTestCase_015184_1, VkglTestCase_015184_2);

#define VkglTestCase_015185_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015185_2 ".max_geometry_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015185, VkglTestCase_015185_1, VkglTestCase_015185_2);

#define VkglTestCase_015186_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015186_2 ".max_geometry_output_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015186, VkglTestCase_015186_1, VkglTestCase_015186_2);

#define VkglTestCase_015187_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015187_2 "max_geometry_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015187, VkglTestCase_015187_1, VkglTestCase_015187_2);

#define VkglTestCase_015188_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015188_2 "r.max_geometry_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015188, VkglTestCase_015188_1, VkglTestCase_015188_2);

#define VkglTestCase_015189_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015189_2 "r.max_geometry_output_vertices_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015189, VkglTestCase_015189_1, VkglTestCase_015189_2);

#define VkglTestCase_015190_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015190_2 "r.max_geometry_output_vertices_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015190, VkglTestCase_015190_1, VkglTestCase_015190_2);

#define VkglTestCase_015191_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015191_2 ".max_geometry_output_vertices_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015191, VkglTestCase_015191_1, VkglTestCase_015191_2);

#define VkglTestCase_015192_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015192_2 "er.max_geometry_output_vertices_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015192, VkglTestCase_015192_1, VkglTestCase_015192_2);

#define VkglTestCase_015193_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015193_2 "x_geometry_total_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015193, VkglTestCase_015193_1, VkglTestCase_015193_2);

#define VkglTestCase_015194_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015194_2 "x_geometry_total_output_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015194, VkglTestCase_015194_1, VkglTestCase_015194_2);

#define VkglTestCase_015195_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015195_2 "_geometry_total_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015195, VkglTestCase_015195_1, VkglTestCase_015195_2);

#define VkglTestCase_015196_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015196_2 "ax_geometry_total_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015196, VkglTestCase_015196_1, VkglTestCase_015196_2);

#define VkglTestCase_015197_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015197_2 "max_geometry_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015197, VkglTestCase_015197_1, VkglTestCase_015197_2);

#define VkglTestCase_015198_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015198_2 "max_geometry_texture_image_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015198, VkglTestCase_015198_1, VkglTestCase_015198_2);

#define VkglTestCase_015199_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015199_2 "ax_geometry_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015199, VkglTestCase_015199_1, VkglTestCase_015199_2);

#define VkglTestCase_015200_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015200_2 ".max_geometry_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015200, VkglTestCase_015200_1, VkglTestCase_015200_2);

#define VkglTestCase_015201_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015201_2 ".max_geometry_shader_invocations_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015201, VkglTestCase_015201_1, VkglTestCase_015201_2);

#define VkglTestCase_015202_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015202_2 ".max_geometry_shader_invocations_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015202, VkglTestCase_015202_1, VkglTestCase_015202_2);

#define VkglTestCase_015203_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015203_2 "max_geometry_shader_invocations_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015203, VkglTestCase_015203_1, VkglTestCase_015203_2);

#define VkglTestCase_015204_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015204_2 "r.max_geometry_shader_invocations_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015204, VkglTestCase_015204_1, VkglTestCase_015204_2);

#define VkglTestCase_015205_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015205_2 "ax_geometry_atomic_counter_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015205, VkglTestCase_015205_1, VkglTestCase_015205_2);

#define VkglTestCase_015206_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015206_2 "ax_geometry_atomic_counter_buffers_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015206, VkglTestCase_015206_1, VkglTestCase_015206_2);

#define VkglTestCase_015207_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015207_2 "x_geometry_atomic_counter_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015207, VkglTestCase_015207_1, VkglTestCase_015207_2);

#define VkglTestCase_015208_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015208_2 "max_geometry_atomic_counter_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015208, VkglTestCase_015208_1, VkglTestCase_015208_2);

#define VkglTestCase_015209_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015209_2 "r.max_geometry_atomic_counters_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015209, VkglTestCase_015209_1, VkglTestCase_015209_2);

#define VkglTestCase_015210_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015210_2 "r.max_geometry_atomic_counters_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015210, VkglTestCase_015210_1, VkglTestCase_015210_2);

#define VkglTestCase_015211_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015211_2 ".max_geometry_atomic_counters_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015211, VkglTestCase_015211_1, VkglTestCase_015211_2);

#define VkglTestCase_015212_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015212_2 "er.max_geometry_atomic_counters_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015212, VkglTestCase_015212_1, VkglTestCase_015212_2);

#define VkglTestCase_015213_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015213_2 "ax_geometry_shader_storage_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015213, VkglTestCase_015213_1, VkglTestCase_015213_2);

#define VkglTestCase_015214_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015214_2 "ax_geometry_shader_storage_blocks_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015214, VkglTestCase_015214_1, VkglTestCase_015214_2);

#define VkglTestCase_015215_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015215_2 "x_geometry_shader_storage_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015215, VkglTestCase_015215_1, VkglTestCase_015215_2);

#define VkglTestCase_015216_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015216_2 "max_geometry_shader_storage_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015216, VkglTestCase_015216_1, VkglTestCase_015216_2);

#define VkglTestCase_015217_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015217_2 ".max_tess_control_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015217, VkglTestCase_015217_1, VkglTestCase_015217_2);

#define VkglTestCase_015218_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015218_2 ".max_tess_control_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015218, VkglTestCase_015218_1, VkglTestCase_015218_2);

#define VkglTestCase_015219_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015219_2 "max_tess_control_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015219, VkglTestCase_015219_1, VkglTestCase_015219_2);

#define VkglTestCase_015220_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015220_2 "r.max_tess_control_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015220, VkglTestCase_015220_1, VkglTestCase_015220_2);

#define VkglTestCase_015221_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015221_2 "ax_tess_evaluation_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015221, VkglTestCase_015221_1, VkglTestCase_015221_2);

#define VkglTestCase_015222_1 "dEQP-GLES31.functional.state_query.integer.m"
#define VkglTestCase_015222_2 "ax_tess_evaluation_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015222, VkglTestCase_015222_1, VkglTestCase_015222_2);

#define VkglTestCase_015223_1 "dEQP-GLES31.functional.state_query.integer.ma"
#define VkglTestCase_015223_2 "x_tess_evaluation_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015223, VkglTestCase_015223_1, VkglTestCase_015223_2);

#define VkglTestCase_015224_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015224_2 "max_tess_evaluation_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015224, VkglTestCase_015224_1, VkglTestCase_015224_2);

#define VkglTestCase_015225_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015225_2 "er.max_geometry_image_uniforms_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015225, VkglTestCase_015225_1, VkglTestCase_015225_2);

#define VkglTestCase_015226_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015226_2 "er.max_geometry_image_uniforms_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015226, VkglTestCase_015226_1, VkglTestCase_015226_2);

#define VkglTestCase_015227_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015227_2 "r.max_geometry_image_uniforms_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015227, VkglTestCase_015227_1, VkglTestCase_015227_2);

#define VkglTestCase_015228_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015228_2 "ger.max_geometry_image_uniforms_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015228, VkglTestCase_015228_1, VkglTestCase_015228_2);

#define VkglTestCase_015229_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015229_2 "teger.debug_logged_messages_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015229, VkglTestCase_015229_1, VkglTestCase_015229_2);

#define VkglTestCase_015230_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015230_2 "teger.debug_logged_messages_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015230, VkglTestCase_015230_1, VkglTestCase_015230_2);

#define VkglTestCase_015231_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015231_2 "eger.debug_logged_messages_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015231, VkglTestCase_015231_1, VkglTestCase_015231_2);

#define VkglTestCase_015232_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015232_2 "nteger.debug_logged_messages_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015232, VkglTestCase_015232_1, VkglTestCase_015232_2);

#define VkglTestCase_015233_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015233_2 "debug_next_logged_message_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015233, VkglTestCase_015233_1, VkglTestCase_015233_2);

#define VkglTestCase_015234_1 "dEQP-GLES31.functional.state_query.integer."
#define VkglTestCase_015234_2 "debug_next_logged_message_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015234, VkglTestCase_015234_1, VkglTestCase_015234_2);

#define VkglTestCase_015235_1 "dEQP-GLES31.functional.state_query.integer.d"
#define VkglTestCase_015235_2 "ebug_next_logged_message_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015235, VkglTestCase_015235_1, VkglTestCase_015235_2);

#define VkglTestCase_015236_1 "dEQP-GLES31.functional.state_query.integer"
#define VkglTestCase_015236_2 ".debug_next_logged_message_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015236, VkglTestCase_015236_1, VkglTestCase_015236_2);

#define VkglTestCase_015237_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015237_2 "eger.debug_group_stack_depth_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015237, VkglTestCase_015237_1, VkglTestCase_015237_2);

#define VkglTestCase_015238_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015238_2 "eger.debug_group_stack_depth_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015238, VkglTestCase_015238_1, VkglTestCase_015238_2);

#define VkglTestCase_015239_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015239_2 "ger.debug_group_stack_depth_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015239, VkglTestCase_015239_1, VkglTestCase_015239_2);

#define VkglTestCase_015240_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015240_2 "teger.debug_group_stack_depth_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015240, VkglTestCase_015240_1, VkglTestCase_015240_2);

#define VkglTestCase_015241_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015241_2 "ger.max_debug_message_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015241, VkglTestCase_015241_1, VkglTestCase_015241_2);

#define VkglTestCase_015242_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015242_2 "ger.max_debug_message_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015242, VkglTestCase_015242_1, VkglTestCase_015242_2);

#define VkglTestCase_015243_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015243_2 "er.max_debug_message_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015243, VkglTestCase_015243_1, VkglTestCase_015243_2);

#define VkglTestCase_015244_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015244_2 "eger.max_debug_message_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015244, VkglTestCase_015244_1, VkglTestCase_015244_2);

#define VkglTestCase_015245_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015245_2 "ger.max_debug_logged_messages_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015245, VkglTestCase_015245_1, VkglTestCase_015245_2);

#define VkglTestCase_015246_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015246_2 "ger.max_debug_logged_messages_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015246, VkglTestCase_015246_1, VkglTestCase_015246_2);

#define VkglTestCase_015247_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015247_2 "er.max_debug_logged_messages_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015247, VkglTestCase_015247_1, VkglTestCase_015247_2);

#define VkglTestCase_015248_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015248_2 "eger.max_debug_logged_messages_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015248, VkglTestCase_015248_1, VkglTestCase_015248_2);

#define VkglTestCase_015249_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015249_2 "er.max_debug_group_stack_depth_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015249, VkglTestCase_015249_1, VkglTestCase_015249_2);

#define VkglTestCase_015250_1 "dEQP-GLES31.functional.state_query.integ"
#define VkglTestCase_015250_2 "er.max_debug_group_stack_depth_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015250, VkglTestCase_015250_1, VkglTestCase_015250_2);

#define VkglTestCase_015251_1 "dEQP-GLES31.functional.state_query.intege"
#define VkglTestCase_015251_2 "r.max_debug_group_stack_depth_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015251, VkglTestCase_015251_1, VkglTestCase_015251_2);

#define VkglTestCase_015252_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015252_2 "ger.max_debug_group_stack_depth_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015252, VkglTestCase_015252_1, VkglTestCase_015252_2);

#define VkglTestCase_015253_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015253_2 "integer.max_label_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015253, VkglTestCase_015253_1, VkglTestCase_015253_2);

#define VkglTestCase_015254_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015254_2 "integer.max_label_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015254, VkglTestCase_015254_1, VkglTestCase_015254_2);

#define VkglTestCase_015255_1 "dEQP-GLES31.functional.state_query.i"
#define VkglTestCase_015255_2 "nteger.max_label_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015255, VkglTestCase_015255_1, VkglTestCase_015255_2);

#define VkglTestCase_015256_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015256_2 ".integer.max_label_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015256, VkglTestCase_015256_1, VkglTestCase_015256_2);

#define VkglTestCase_015257_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015257_2 "eger.texture_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015257, VkglTestCase_015257_1, VkglTestCase_015257_2);

#define VkglTestCase_015258_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015258_2 "eger.texture_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015258, VkglTestCase_015258_1, VkglTestCase_015258_2);

#define VkglTestCase_015259_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015259_2 "ger.texture_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015259, VkglTestCase_015259_1, VkglTestCase_015259_2);

#define VkglTestCase_015260_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015260_2 "teger.texture_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015260, VkglTestCase_015260_1, VkglTestCase_015260_2);

#define VkglTestCase_015261_1 "dEQP-GLES31.functional.state_query.integer.max_co"
#define VkglTestCase_015261_2 "mbined_tess_control_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015261, VkglTestCase_015261_1, VkglTestCase_015261_2);

#define VkglTestCase_015262_1 "dEQP-GLES31.functional.state_query.integer.max_co"
#define VkglTestCase_015262_2 "mbined_tess_control_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015262, VkglTestCase_015262_1, VkglTestCase_015262_2);

#define VkglTestCase_015263_1 "dEQP-GLES31.functional.state_query.integer.max_com"
#define VkglTestCase_015263_2 "bined_tess_control_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015263, VkglTestCase_015263_1, VkglTestCase_015263_2);

#define VkglTestCase_015264_1 "dEQP-GLES31.functional.state_query.integer.max_c"
#define VkglTestCase_015264_2 "ombined_tess_control_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015264, VkglTestCase_015264_1, VkglTestCase_015264_2);

#define VkglTestCase_015265_1 "dEQP-GLES31.functional.state_query.integer.max_com"
#define VkglTestCase_015265_2 "bined_tess_evaluation_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015265, VkglTestCase_015265_1, VkglTestCase_015265_2);

#define VkglTestCase_015266_1 "dEQP-GLES31.functional.state_query.integer.max_com"
#define VkglTestCase_015266_2 "bined_tess_evaluation_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015266, VkglTestCase_015266_1, VkglTestCase_015266_2);

#define VkglTestCase_015267_1 "dEQP-GLES31.functional.state_query.integer.max_comb"
#define VkglTestCase_015267_2 "ined_tess_evaluation_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015267, VkglTestCase_015267_1, VkglTestCase_015267_2);

#define VkglTestCase_015268_1 "dEQP-GLES31.functional.state_query.integer.max_co"
#define VkglTestCase_015268_2 "mbined_tess_evaluation_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015268, VkglTestCase_015268_1, VkglTestCase_015268_2);

#define VkglTestCase_015269_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015269_2 "combined_geometry_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015269, VkglTestCase_015269_1, VkglTestCase_015269_2);

#define VkglTestCase_015270_1 "dEQP-GLES31.functional.state_query.integer.max_"
#define VkglTestCase_015270_2 "combined_geometry_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015270, VkglTestCase_015270_1, VkglTestCase_015270_2);

#define VkglTestCase_015271_1 "dEQP-GLES31.functional.state_query.integer.max_c"
#define VkglTestCase_015271_2 "ombined_geometry_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015271, VkglTestCase_015271_1, VkglTestCase_015271_2);

#define VkglTestCase_015272_1 "dEQP-GLES31.functional.state_query.integer.max"
#define VkglTestCase_015272_2 "_combined_geometry_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_015272, VkglTestCase_015272_1, VkglTestCase_015272_2);
