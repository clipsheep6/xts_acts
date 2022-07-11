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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042445_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042445_2 ".integers.subpixel_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042445, VkglTestCase_042445_1, VkglTestCase_042445_2);

#define VkglTestCase_042446_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042446_2 "integers.subpixel_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042446, VkglTestCase_042446_1, VkglTestCase_042446_2);

#define VkglTestCase_042447_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042447_2 "y.integers.subpixel_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042447, VkglTestCase_042447_1, VkglTestCase_042447_2);

#define VkglTestCase_042448_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042448_2 "tegers.max_3d_texture_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042448, VkglTestCase_042448_1, VkglTestCase_042448_2);

#define VkglTestCase_042449_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042449_2 "egers.max_3d_texture_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042449, VkglTestCase_042449_1, VkglTestCase_042449_2);

#define VkglTestCase_042450_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042450_2 "ntegers.max_3d_texture_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042450, VkglTestCase_042450_1, VkglTestCase_042450_2);

#define VkglTestCase_042451_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042451_2 "ntegers.max_texture_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042451, VkglTestCase_042451_1, VkglTestCase_042451_2);

#define VkglTestCase_042452_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042452_2 "tegers.max_texture_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042452, VkglTestCase_042452_1, VkglTestCase_042452_2);

#define VkglTestCase_042453_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042453_2 "integers.max_texture_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042453, VkglTestCase_042453_1, VkglTestCase_042453_2);

#define VkglTestCase_042454_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042454_2 "ers.max_array_texture_layers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042454, VkglTestCase_042454_1, VkglTestCase_042454_2);

#define VkglTestCase_042455_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042455_2 "rs.max_array_texture_layers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042455, VkglTestCase_042455_1, VkglTestCase_042455_2);

#define VkglTestCase_042456_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042456_2 "gers.max_array_texture_layers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042456, VkglTestCase_042456_1, VkglTestCase_042456_2);

#define VkglTestCase_042457_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042457_2 "ers.max_cube_map_texture_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042457, VkglTestCase_042457_1, VkglTestCase_042457_2);

#define VkglTestCase_042458_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042458_2 "rs.max_cube_map_texture_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042458, VkglTestCase_042458_1, VkglTestCase_042458_2);

#define VkglTestCase_042459_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042459_2 "gers.max_cube_map_texture_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042459, VkglTestCase_042459_1, VkglTestCase_042459_2);

#define VkglTestCase_042460_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042460_2 "egers.max_renderbuffer_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042460, VkglTestCase_042460_1, VkglTestCase_042460_2);

#define VkglTestCase_042461_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042461_2 "gers.max_renderbuffer_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042461, VkglTestCase_042461_1, VkglTestCase_042461_2);

#define VkglTestCase_042462_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042462_2 "tegers.max_renderbuffer_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042462, VkglTestCase_042462_1, VkglTestCase_042462_2);

#define VkglTestCase_042463_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042463_2 "ntegers.max_draw_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042463, VkglTestCase_042463_1, VkglTestCase_042463_2);

#define VkglTestCase_042464_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042464_2 "tegers.max_draw_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042464, VkglTestCase_042464_1, VkglTestCase_042464_2);

#define VkglTestCase_042465_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042465_2 "integers.max_draw_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042465, VkglTestCase_042465_1, VkglTestCase_042465_2);

#define VkglTestCase_042466_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042466_2 "egers.max_color_attachments_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042466, VkglTestCase_042466_1, VkglTestCase_042466_2);

#define VkglTestCase_042467_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042467_2 "gers.max_color_attachments_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042467, VkglTestCase_042467_1, VkglTestCase_042467_2);

#define VkglTestCase_042468_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042468_2 "tegers.max_color_attachments_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042468, VkglTestCase_042468_1, VkglTestCase_042468_2);

#define VkglTestCase_042469_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042469_2 "egers.max_elements_indices_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042469, VkglTestCase_042469_1, VkglTestCase_042469_2);

#define VkglTestCase_042470_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042470_2 "gers.max_elements_indices_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042470, VkglTestCase_042470_1, VkglTestCase_042470_2);

#define VkglTestCase_042471_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042471_2 "tegers.max_elements_indices_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042471, VkglTestCase_042471_1, VkglTestCase_042471_2);

#define VkglTestCase_042472_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042472_2 "egers.max_elements_vertices_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042472, VkglTestCase_042472_1, VkglTestCase_042472_2);

#define VkglTestCase_042473_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042473_2 "gers.max_elements_vertices_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042473, VkglTestCase_042473_1, VkglTestCase_042473_2);

#define VkglTestCase_042474_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042474_2 "tegers.max_elements_vertices_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042474, VkglTestCase_042474_1, VkglTestCase_042474_2);

#define VkglTestCase_042475_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042475_2 "integers.num_extensions_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042475, VkglTestCase_042475_1, VkglTestCase_042475_2);

#define VkglTestCase_042476_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042476_2 "ntegers.num_extensions_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042476, VkglTestCase_042476_1, VkglTestCase_042476_2);

#define VkglTestCase_042477_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042477_2 ".integers.num_extensions_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042477, VkglTestCase_042477_1, VkglTestCase_042477_2);

#define VkglTestCase_042478_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042478_2 ".integers.major_version_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042478, VkglTestCase_042478_1, VkglTestCase_042478_2);

#define VkglTestCase_042479_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042479_2 "integers.major_version_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042479, VkglTestCase_042479_1, VkglTestCase_042479_2);

#define VkglTestCase_042480_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042480_2 "y.integers.major_version_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042480, VkglTestCase_042480_1, VkglTestCase_042480_2);

#define VkglTestCase_042481_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042481_2 ".integers.minor_version_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042481, VkglTestCase_042481_1, VkglTestCase_042481_2);

#define VkglTestCase_042482_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042482_2 "integers.minor_version_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042482, VkglTestCase_042482_1, VkglTestCase_042482_2);

#define VkglTestCase_042483_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042483_2 "y.integers.minor_version_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042483, VkglTestCase_042483_1, VkglTestCase_042483_2);

#define VkglTestCase_042484_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042484_2 "tegers.max_vertex_attribs_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042484, VkglTestCase_042484_1, VkglTestCase_042484_2);

#define VkglTestCase_042485_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042485_2 "egers.max_vertex_attribs_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042485, VkglTestCase_042485_1, VkglTestCase_042485_2);

#define VkglTestCase_042486_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042486_2 "ntegers.max_vertex_attribs_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042486, VkglTestCase_042486_1, VkglTestCase_042486_2);

#define VkglTestCase_042487_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042487_2 "s.max_vertex_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042487, VkglTestCase_042487_1, VkglTestCase_042487_2);

#define VkglTestCase_042488_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042488_2 ".max_vertex_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042488, VkglTestCase_042488_1, VkglTestCase_042488_2);

#define VkglTestCase_042489_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042489_2 "rs.max_vertex_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042489, VkglTestCase_042489_1, VkglTestCase_042489_2);

#define VkglTestCase_042490_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042490_2 "rs.max_vertex_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042490, VkglTestCase_042490_1, VkglTestCase_042490_2);

#define VkglTestCase_042491_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042491_2 "s.max_vertex_uniform_vectors_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042491, VkglTestCase_042491_1, VkglTestCase_042491_2);

#define VkglTestCase_042492_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042492_2 "ers.max_vertex_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042492, VkglTestCase_042492_1, VkglTestCase_042492_2);

#define VkglTestCase_042493_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042493_2 "ers.max_vertex_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042493, VkglTestCase_042493_1, VkglTestCase_042493_2);

#define VkglTestCase_042494_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042494_2 "rs.max_vertex_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042494, VkglTestCase_042494_1, VkglTestCase_042494_2);

#define VkglTestCase_042495_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042495_2 "gers.max_vertex_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042495, VkglTestCase_042495_1, VkglTestCase_042495_2);

#define VkglTestCase_042496_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042496_2 "s.max_vertex_output_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042496, VkglTestCase_042496_1, VkglTestCase_042496_2);

#define VkglTestCase_042497_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042497_2 ".max_vertex_output_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042497, VkglTestCase_042497_1, VkglTestCase_042497_2);

#define VkglTestCase_042498_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042498_2 "rs.max_vertex_output_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042498, VkglTestCase_042498_1, VkglTestCase_042498_2);

#define VkglTestCase_042499_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042499_2 ".max_vertex_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042499, VkglTestCase_042499_1, VkglTestCase_042499_2);

#define VkglTestCase_042500_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042500_2 "max_vertex_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042500, VkglTestCase_042500_1, VkglTestCase_042500_2);

#define VkglTestCase_042501_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042501_2 "s.max_vertex_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042501, VkglTestCase_042501_1, VkglTestCase_042501_2);

#define VkglTestCase_042502_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042502_2 ".max_fragment_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042502, VkglTestCase_042502_1, VkglTestCase_042502_2);

#define VkglTestCase_042503_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042503_2 "max_fragment_uniform_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042503, VkglTestCase_042503_1, VkglTestCase_042503_2);

#define VkglTestCase_042504_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042504_2 "s.max_fragment_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042504, VkglTestCase_042504_1, VkglTestCase_042504_2);

#define VkglTestCase_042505_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042505_2 "s.max_fragment_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042505, VkglTestCase_042505_1, VkglTestCase_042505_2);

#define VkglTestCase_042506_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042506_2 ".max_fragment_uniform_vectors_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042506, VkglTestCase_042506_1, VkglTestCase_042506_2);

#define VkglTestCase_042507_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042507_2 "rs.max_fragment_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042507, VkglTestCase_042507_1, VkglTestCase_042507_2);

#define VkglTestCase_042508_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042508_2 "rs.max_fragment_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042508, VkglTestCase_042508_1, VkglTestCase_042508_2);

#define VkglTestCase_042509_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042509_2 "s.max_fragment_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042509, VkglTestCase_042509_1, VkglTestCase_042509_2);

#define VkglTestCase_042510_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042510_2 "ers.max_fragment_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042510, VkglTestCase_042510_1, VkglTestCase_042510_2);

#define VkglTestCase_042511_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042511_2 "s.max_fragment_input_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042511, VkglTestCase_042511_1, VkglTestCase_042511_2);

#define VkglTestCase_042512_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042512_2 ".max_fragment_input_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042512, VkglTestCase_042512_1, VkglTestCase_042512_2);

#define VkglTestCase_042513_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042513_2 "rs.max_fragment_input_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042513, VkglTestCase_042513_1, VkglTestCase_042513_2);

#define VkglTestCase_042514_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042514_2 "gers.max_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042514, VkglTestCase_042514_1, VkglTestCase_042514_2);

#define VkglTestCase_042515_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042515_2 "ers.max_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042515, VkglTestCase_042515_1, VkglTestCase_042515_2);

#define VkglTestCase_042516_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042516_2 "egers.max_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042516, VkglTestCase_042516_1, VkglTestCase_042516_2);

#define VkglTestCase_042517_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042517_2 "ers.max_program_texel_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042517, VkglTestCase_042517_1, VkglTestCase_042517_2);

#define VkglTestCase_042518_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042518_2 "rs.max_program_texel_offset_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042518, VkglTestCase_042518_1, VkglTestCase_042518_2);

#define VkglTestCase_042519_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042519_2 "gers.max_program_texel_offset_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042519, VkglTestCase_042519_1, VkglTestCase_042519_2);

#define VkglTestCase_042520_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042520_2 "rs.max_uniform_buffer_bindings_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042520, VkglTestCase_042520_1, VkglTestCase_042520_2);

#define VkglTestCase_042521_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042521_2 "s.max_uniform_buffer_bindings_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042521, VkglTestCase_042521_1, VkglTestCase_042521_2);

#define VkglTestCase_042522_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042522_2 "ers.max_uniform_buffer_bindings_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042522, VkglTestCase_042522_1, VkglTestCase_042522_2);

#define VkglTestCase_042523_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042523_2 "rs.max_combined_uniform_blocks_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042523, VkglTestCase_042523_1, VkglTestCase_042523_2);

#define VkglTestCase_042524_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042524_2 "s.max_combined_uniform_blocks_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042524, VkglTestCase_042524_1, VkglTestCase_042524_2);

#define VkglTestCase_042525_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042525_2 "ers.max_combined_uniform_blocks_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042525, VkglTestCase_042525_1, VkglTestCase_042525_2);

#define VkglTestCase_042526_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042526_2 "gers.max_varying_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042526, VkglTestCase_042526_1, VkglTestCase_042526_2);

#define VkglTestCase_042527_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042527_2 "ers.max_varying_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042527, VkglTestCase_042527_1, VkglTestCase_042527_2);

#define VkglTestCase_042528_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042528_2 "egers.max_varying_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042528, VkglTestCase_042528_1, VkglTestCase_042528_2);

#define VkglTestCase_042529_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042529_2 "tegers.max_varying_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042529, VkglTestCase_042529_1, VkglTestCase_042529_2);

#define VkglTestCase_042530_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042530_2 "egers.max_varying_vectors_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042530, VkglTestCase_042530_1, VkglTestCase_042530_2);

#define VkglTestCase_042531_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042531_2 "ntegers.max_varying_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042531, VkglTestCase_042531_1, VkglTestCase_042531_2);

#define VkglTestCase_042532_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042532_2 "max_combined_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042532, VkglTestCase_042532_1, VkglTestCase_042532_2);

#define VkglTestCase_042533_1 "dEQP-GLES3.functional.state_query.integers.m"
#define VkglTestCase_042533_2 "ax_combined_texture_image_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042533, VkglTestCase_042533_1, VkglTestCase_042533_2);

#define VkglTestCase_042534_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042534_2 ".max_combined_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042534, VkglTestCase_042534_1, VkglTestCase_042534_2);

#define VkglTestCase_042535_1 "dEQP-GLES3.functional.state_query.integers.max_tr"
#define VkglTestCase_042535_2 "ansform_feedback_interleaved_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042535, VkglTestCase_042535_1, VkglTestCase_042535_2);

#define VkglTestCase_042536_1 "dEQP-GLES3.functional.state_query.integers.max_tra"
#define VkglTestCase_042536_2 "nsform_feedback_interleaved_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042536, VkglTestCase_042536_1, VkglTestCase_042536_2);

#define VkglTestCase_042537_1 "dEQP-GLES3.functional.state_query.integers.max_t"
#define VkglTestCase_042537_2 "ransform_feedback_interleaved_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042537, VkglTestCase_042537_1, VkglTestCase_042537_2);

#define VkglTestCase_042538_1 "dEQP-GLES3.functional.state_query.integers.max"
#define VkglTestCase_042538_2 "_transform_feedback_separate_attribs_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042538, VkglTestCase_042538_1, VkglTestCase_042538_2);

#define VkglTestCase_042539_1 "dEQP-GLES3.functional.state_query.integers.max_"
#define VkglTestCase_042539_2 "transform_feedback_separate_attribs_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042539, VkglTestCase_042539_1, VkglTestCase_042539_2);

#define VkglTestCase_042540_1 "dEQP-GLES3.functional.state_query.integers.ma"
#define VkglTestCase_042540_2 "x_transform_feedback_separate_attribs_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042540, VkglTestCase_042540_1, VkglTestCase_042540_2);

#define VkglTestCase_042541_1 "dEQP-GLES3.functional.state_query.integers.max_t"
#define VkglTestCase_042541_2 "ransform_feedback_separate_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042541, VkglTestCase_042541_1, VkglTestCase_042541_2);

#define VkglTestCase_042542_1 "dEQP-GLES3.functional.state_query.integers.max_tr"
#define VkglTestCase_042542_2 "ansform_feedback_separate_components_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042542, VkglTestCase_042542_1, VkglTestCase_042542_2);

#define VkglTestCase_042543_1 "dEQP-GLES3.functional.state_query.integers.max_"
#define VkglTestCase_042543_2 "transform_feedback_separate_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042543, VkglTestCase_042543_1, VkglTestCase_042543_2);

#define VkglTestCase_042544_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042544_2 "y.integers.max_samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042544, VkglTestCase_042544_1, VkglTestCase_042544_2);

#define VkglTestCase_042545_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042545_2 ".integers.max_samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042545, VkglTestCase_042545_1, VkglTestCase_042545_2);

#define VkglTestCase_042546_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042546_2 "ry.integers.max_samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042546, VkglTestCase_042546_1, VkglTestCase_042546_2);

#define VkglTestCase_042547_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042547_2 "ry.integers.red_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042547, VkglTestCase_042547_1, VkglTestCase_042547_2);

#define VkglTestCase_042548_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042548_2 "y.integers.red_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042548, VkglTestCase_042548_1, VkglTestCase_042548_2);

#define VkglTestCase_042549_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042549_2 "ery.integers.red_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042549, VkglTestCase_042549_1, VkglTestCase_042549_2);

#define VkglTestCase_042550_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042550_2 "y.integers.green_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042550, VkglTestCase_042550_1, VkglTestCase_042550_2);

#define VkglTestCase_042551_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042551_2 ".integers.green_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042551, VkglTestCase_042551_1, VkglTestCase_042551_2);

#define VkglTestCase_042552_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042552_2 "ry.integers.green_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042552, VkglTestCase_042552_1, VkglTestCase_042552_2);

#define VkglTestCase_042553_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042553_2 "ry.integers.blue_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042553, VkglTestCase_042553_1, VkglTestCase_042553_2);

#define VkglTestCase_042554_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042554_2 "y.integers.blue_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042554, VkglTestCase_042554_1, VkglTestCase_042554_2);

#define VkglTestCase_042555_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042555_2 "ery.integers.blue_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042555, VkglTestCase_042555_1, VkglTestCase_042555_2);

#define VkglTestCase_042556_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042556_2 "y.integers.alpha_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042556, VkglTestCase_042556_1, VkglTestCase_042556_2);

#define VkglTestCase_042557_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042557_2 ".integers.alpha_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042557, VkglTestCase_042557_1, VkglTestCase_042557_2);

#define VkglTestCase_042558_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042558_2 "ry.integers.alpha_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042558, VkglTestCase_042558_1, VkglTestCase_042558_2);

#define VkglTestCase_042559_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042559_2 "y.integers.depth_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042559, VkglTestCase_042559_1, VkglTestCase_042559_2);

#define VkglTestCase_042560_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042560_2 ".integers.depth_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042560, VkglTestCase_042560_1, VkglTestCase_042560_2);

#define VkglTestCase_042561_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042561_2 "ry.integers.depth_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042561, VkglTestCase_042561_1, VkglTestCase_042561_2);

#define VkglTestCase_042562_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042562_2 ".integers.stencil_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042562, VkglTestCase_042562_1, VkglTestCase_042562_2);

#define VkglTestCase_042563_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042563_2 "integers.stencil_bits_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042563, VkglTestCase_042563_1, VkglTestCase_042563_2);

#define VkglTestCase_042564_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042564_2 "y.integers.stencil_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042564, VkglTestCase_042564_1, VkglTestCase_042564_2);

#define VkglTestCase_042565_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042565_2 "ers.min_program_texel_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042565, VkglTestCase_042565_1, VkglTestCase_042565_2);

#define VkglTestCase_042566_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042566_2 "rs.min_program_texel_offset_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042566, VkglTestCase_042566_1, VkglTestCase_042566_2);

#define VkglTestCase_042567_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042567_2 "gers.min_program_texel_offset_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042567, VkglTestCase_042567_1, VkglTestCase_042567_2);

#define VkglTestCase_042568_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042568_2 ".uniform_buffer_offset_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042568, VkglTestCase_042568_1, VkglTestCase_042568_2);

#define VkglTestCase_042569_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042569_2 "uniform_buffer_offset_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042569, VkglTestCase_042569_1, VkglTestCase_042569_2);

#define VkglTestCase_042570_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042570_2 "s.uniform_buffer_offset_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042570, VkglTestCase_042570_1, VkglTestCase_042570_2);

#define VkglTestCase_042571_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042571_2 "integers.sample_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042571, VkglTestCase_042571_1, VkglTestCase_042571_2);

#define VkglTestCase_042572_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042572_2 "ntegers.sample_buffers_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042572, VkglTestCase_042572_1, VkglTestCase_042572_2);

#define VkglTestCase_042573_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042573_2 ".integers.sample_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042573, VkglTestCase_042573_1, VkglTestCase_042573_2);

#define VkglTestCase_042574_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042574_2 "ery.integers.samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042574, VkglTestCase_042574_1, VkglTestCase_042574_2);

#define VkglTestCase_042575_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042575_2 "ery.integers.samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042575, VkglTestCase_042575_1, VkglTestCase_042575_2);

#define VkglTestCase_042576_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042576_2 "ry.integers.samples_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042576, VkglTestCase_042576_1, VkglTestCase_042576_2);

#define VkglTestCase_042577_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042577_2 "uery.integers.samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042577, VkglTestCase_042577_1, VkglTestCase_042577_2);

#define VkglTestCase_042578_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042578_2 "egers.generate_mipmap_hint_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042578, VkglTestCase_042578_1, VkglTestCase_042578_2);

#define VkglTestCase_042579_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042579_2 "egers.generate_mipmap_hint_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042579, VkglTestCase_042579_1, VkglTestCase_042579_2);

#define VkglTestCase_042580_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042580_2 "gers.generate_mipmap_hint_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042580, VkglTestCase_042580_1, VkglTestCase_042580_2);

#define VkglTestCase_042581_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042581_2 "tegers.generate_mipmap_hint_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042581, VkglTestCase_042581_1, VkglTestCase_042581_2);

#define VkglTestCase_042582_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042582_2 ".fragment_shader_derivative_hint_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042582, VkglTestCase_042582_1, VkglTestCase_042582_2);

#define VkglTestCase_042583_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042583_2 ".fragment_shader_derivative_hint_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042583, VkglTestCase_042583_1, VkglTestCase_042583_2);

#define VkglTestCase_042584_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042584_2 "fragment_shader_derivative_hint_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042584, VkglTestCase_042584_1, VkglTestCase_042584_2);

#define VkglTestCase_042585_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042585_2 "s.fragment_shader_derivative_hint_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042585, VkglTestCase_042585_1, VkglTestCase_042585_2);

#define VkglTestCase_042586_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042586_2 "y.integers.depth_func_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042586, VkglTestCase_042586_1, VkglTestCase_042586_2);

#define VkglTestCase_042587_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042587_2 "y.integers.depth_func_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042587, VkglTestCase_042587_1, VkglTestCase_042587_2);

#define VkglTestCase_042588_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042588_2 ".integers.depth_func_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042588, VkglTestCase_042588_1, VkglTestCase_042588_2);

#define VkglTestCase_042589_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042589_2 "ry.integers.depth_func_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042589, VkglTestCase_042589_1, VkglTestCase_042589_2);

#define VkglTestCase_042590_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042590_2 "integers.cull_face_mode_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042590, VkglTestCase_042590_1, VkglTestCase_042590_2);

#define VkglTestCase_042591_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042591_2 "integers.cull_face_mode_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042591, VkglTestCase_042591_1, VkglTestCase_042591_2);

#define VkglTestCase_042592_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042592_2 "ntegers.cull_face_mode_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042592, VkglTestCase_042592_1, VkglTestCase_042592_2);

#define VkglTestCase_042593_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042593_2 ".integers.cull_face_mode_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042593, VkglTestCase_042593_1, VkglTestCase_042593_2);

#define VkglTestCase_042594_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042594_2 "integers.front_face_mode_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042594, VkglTestCase_042594_1, VkglTestCase_042594_2);

#define VkglTestCase_042595_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042595_2 "integers.front_face_mode_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042595, VkglTestCase_042595_1, VkglTestCase_042595_2);

#define VkglTestCase_042596_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042596_2 "ntegers.front_face_mode_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042596, VkglTestCase_042596_1, VkglTestCase_042596_2);

#define VkglTestCase_042597_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042597_2 ".integers.front_face_mode_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042597, VkglTestCase_042597_1, VkglTestCase_042597_2);

#define VkglTestCase_042598_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042598_2 "ry.integers.viewport_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042598, VkglTestCase_042598_1, VkglTestCase_042598_2);

#define VkglTestCase_042599_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042599_2 "ry.integers.viewport_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042599, VkglTestCase_042599_1, VkglTestCase_042599_2);

#define VkglTestCase_042600_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042600_2 "y.integers.viewport_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042600, VkglTestCase_042600_1, VkglTestCase_042600_2);

#define VkglTestCase_042601_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042601_2 "ery.integers.viewport_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042601, VkglTestCase_042601_1, VkglTestCase_042601_2);

#define VkglTestCase_042602_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042602_2 "y.integers.scissor_box_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042602, VkglTestCase_042602_1, VkglTestCase_042602_2);

#define VkglTestCase_042603_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042603_2 "y.integers.scissor_box_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042603, VkglTestCase_042603_1, VkglTestCase_042603_2);

#define VkglTestCase_042604_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042604_2 ".integers.scissor_box_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042604, VkglTestCase_042604_1, VkglTestCase_042604_2);

#define VkglTestCase_042605_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042605_2 "ry.integers.scissor_box_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042605, VkglTestCase_042605_1, VkglTestCase_042605_2);

#define VkglTestCase_042606_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042606_2 "ntegers.max_viewport_dims_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042606, VkglTestCase_042606_1, VkglTestCase_042606_2);

#define VkglTestCase_042607_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042607_2 "ntegers.max_viewport_dims_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042607, VkglTestCase_042607_1, VkglTestCase_042607_2);

#define VkglTestCase_042608_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042608_2 "tegers.max_viewport_dims_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042608, VkglTestCase_042608_1, VkglTestCase_042608_2);

#define VkglTestCase_042609_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042609_2 "integers.max_viewport_dims_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042609, VkglTestCase_042609_1, VkglTestCase_042609_2);

#define VkglTestCase_042610_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042610_2 "y.integers.stencil_ref_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042610, VkglTestCase_042610_1, VkglTestCase_042610_2);

#define VkglTestCase_042611_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042611_2 "y.integers.stencil_ref_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042611, VkglTestCase_042611_1, VkglTestCase_042611_2);

#define VkglTestCase_042612_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042612_2 ".integers.stencil_ref_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042612, VkglTestCase_042612_1, VkglTestCase_042612_2);

#define VkglTestCase_042613_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042613_2 "ry.integers.stencil_ref_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042613, VkglTestCase_042613_1, VkglTestCase_042613_2);

#define VkglTestCase_042614_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042614_2 "ntegers.stencil_back_ref_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042614, VkglTestCase_042614_1, VkglTestCase_042614_2);

#define VkglTestCase_042615_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042615_2 "ntegers.stencil_back_ref_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042615, VkglTestCase_042615_1, VkglTestCase_042615_2);

#define VkglTestCase_042616_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042616_2 "tegers.stencil_back_ref_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042616, VkglTestCase_042616_1, VkglTestCase_042616_2);

#define VkglTestCase_042617_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042617_2 "integers.stencil_back_ref_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042617, VkglTestCase_042617_1, VkglTestCase_042617_2);

#define VkglTestCase_042618_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042618_2 "egers.stencil_ref_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042618, VkglTestCase_042618_1, VkglTestCase_042618_2);

#define VkglTestCase_042619_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042619_2 "egers.stencil_ref_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042619, VkglTestCase_042619_1, VkglTestCase_042619_2);

#define VkglTestCase_042620_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042620_2 "gers.stencil_ref_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042620, VkglTestCase_042620_1, VkglTestCase_042620_2);

#define VkglTestCase_042621_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042621_2 "tegers.stencil_ref_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042621, VkglTestCase_042621_1, VkglTestCase_042621_2);

#define VkglTestCase_042622_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042622_2 "ers.stencil_ref_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042622, VkglTestCase_042622_1, VkglTestCase_042622_2);

#define VkglTestCase_042623_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042623_2 "ers.stencil_ref_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042623, VkglTestCase_042623_1, VkglTestCase_042623_2);

#define VkglTestCase_042624_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042624_2 "rs.stencil_ref_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042624, VkglTestCase_042624_1, VkglTestCase_042624_2);

#define VkglTestCase_042625_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042625_2 "gers.stencil_ref_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042625, VkglTestCase_042625_1, VkglTestCase_042625_2);

#define VkglTestCase_042626_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042626_2 "ers.stencil_back_ref_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042626, VkglTestCase_042626_1, VkglTestCase_042626_2);

#define VkglTestCase_042627_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042627_2 "ers.stencil_back_ref_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042627, VkglTestCase_042627_1, VkglTestCase_042627_2);

#define VkglTestCase_042628_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042628_2 "rs.stencil_back_ref_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042628, VkglTestCase_042628_1, VkglTestCase_042628_2);

#define VkglTestCase_042629_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042629_2 "gers.stencil_back_ref_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042629, VkglTestCase_042629_1, VkglTestCase_042629_2);

#define VkglTestCase_042630_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042630_2 ".stencil_back_ref_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042630, VkglTestCase_042630_1, VkglTestCase_042630_2);

#define VkglTestCase_042631_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042631_2 ".stencil_back_ref_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042631, VkglTestCase_042631_1, VkglTestCase_042631_2);

#define VkglTestCase_042632_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042632_2 "stencil_back_ref_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042632, VkglTestCase_042632_1, VkglTestCase_042632_2);

#define VkglTestCase_042633_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042633_2 "s.stencil_back_ref_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042633, VkglTestCase_042633_1, VkglTestCase_042633_2);

#define VkglTestCase_042634_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042634_2 ".integers.stencil_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042634, VkglTestCase_042634_1, VkglTestCase_042634_2);

#define VkglTestCase_042635_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042635_2 ".integers.stencil_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042635, VkglTestCase_042635_1, VkglTestCase_042635_2);

#define VkglTestCase_042636_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042636_2 "integers.stencil_fail_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042636, VkglTestCase_042636_1, VkglTestCase_042636_2);

#define VkglTestCase_042637_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042637_2 "y.integers.stencil_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042637, VkglTestCase_042637_1, VkglTestCase_042637_2);

#define VkglTestCase_042638_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042638_2 "ntegers.stencil_back_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042638, VkglTestCase_042638_1, VkglTestCase_042638_2);

#define VkglTestCase_042639_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042639_2 "ntegers.stencil_back_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042639, VkglTestCase_042639_1, VkglTestCase_042639_2);

#define VkglTestCase_042640_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042640_2 "tegers.stencil_back_fail_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042640, VkglTestCase_042640_1, VkglTestCase_042640_2);

#define VkglTestCase_042641_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042641_2 "integers.stencil_back_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042641, VkglTestCase_042641_1, VkglTestCase_042641_2);

#define VkglTestCase_042642_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042642_2 "rs.stencil_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042642, VkglTestCase_042642_1, VkglTestCase_042642_2);

#define VkglTestCase_042643_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042643_2 "rs.stencil_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042643, VkglTestCase_042643_1, VkglTestCase_042643_2);

#define VkglTestCase_042644_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042644_2 "s.stencil_fail_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042644, VkglTestCase_042644_1, VkglTestCase_042644_2);

#define VkglTestCase_042645_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042645_2 "ers.stencil_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042645, VkglTestCase_042645_1, VkglTestCase_042645_2);

#define VkglTestCase_042646_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042646_2 ".stencil_back_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042646, VkglTestCase_042646_1, VkglTestCase_042646_2);

#define VkglTestCase_042647_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042647_2 ".stencil_back_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042647, VkglTestCase_042647_1, VkglTestCase_042647_2);

#define VkglTestCase_042648_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042648_2 "stencil_back_fail_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042648, VkglTestCase_042648_1, VkglTestCase_042648_2);

#define VkglTestCase_042649_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042649_2 "s.stencil_back_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042649, VkglTestCase_042649_1, VkglTestCase_042649_2);

#define VkglTestCase_042650_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042650_2 "egers.stencil_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042650, VkglTestCase_042650_1, VkglTestCase_042650_2);

#define VkglTestCase_042651_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042651_2 "egers.stencil_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042651, VkglTestCase_042651_1, VkglTestCase_042651_2);

#define VkglTestCase_042652_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042652_2 "gers.stencil_fail_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042652, VkglTestCase_042652_1, VkglTestCase_042652_2);

#define VkglTestCase_042653_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042653_2 "tegers.stencil_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042653, VkglTestCase_042653_1, VkglTestCase_042653_2);

#define VkglTestCase_042654_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042654_2 "rs.stencil_back_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042654, VkglTestCase_042654_1, VkglTestCase_042654_2);

#define VkglTestCase_042655_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042655_2 "rs.stencil_back_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042655, VkglTestCase_042655_1, VkglTestCase_042655_2);

#define VkglTestCase_042656_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042656_2 "s.stencil_back_fail_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042656, VkglTestCase_042656_1, VkglTestCase_042656_2);

#define VkglTestCase_042657_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042657_2 "ers.stencil_back_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042657, VkglTestCase_042657_1, VkglTestCase_042657_2);

#define VkglTestCase_042658_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042658_2 "tegers.stencil_depth_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042658, VkglTestCase_042658_1, VkglTestCase_042658_2);

#define VkglTestCase_042659_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042659_2 "tegers.stencil_depth_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042659, VkglTestCase_042659_1, VkglTestCase_042659_2);

#define VkglTestCase_042660_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042660_2 "egers.stencil_depth_fail_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042660, VkglTestCase_042660_1, VkglTestCase_042660_2);

#define VkglTestCase_042661_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042661_2 "ntegers.stencil_depth_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042661, VkglTestCase_042661_1, VkglTestCase_042661_2);

#define VkglTestCase_042662_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042662_2 "gers.stencil_back_depth_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042662, VkglTestCase_042662_1, VkglTestCase_042662_2);

#define VkglTestCase_042663_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042663_2 "gers.stencil_back_depth_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042663, VkglTestCase_042663_1, VkglTestCase_042663_2);

#define VkglTestCase_042664_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042664_2 "ers.stencil_back_depth_fail_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042664, VkglTestCase_042664_1, VkglTestCase_042664_2);

#define VkglTestCase_042665_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042665_2 "egers.stencil_back_depth_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042665, VkglTestCase_042665_1, VkglTestCase_042665_2);

#define VkglTestCase_042666_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042666_2 "stencil_depth_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042666, VkglTestCase_042666_1, VkglTestCase_042666_2);

#define VkglTestCase_042667_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042667_2 "stencil_depth_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042667, VkglTestCase_042667_1, VkglTestCase_042667_2);

#define VkglTestCase_042668_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042668_2 "tencil_depth_fail_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042668, VkglTestCase_042668_1, VkglTestCase_042668_2);

#define VkglTestCase_042669_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042669_2 ".stencil_depth_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042669, VkglTestCase_042669_1, VkglTestCase_042669_2);

#define VkglTestCase_042670_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042670_2 "encil_back_depth_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042670, VkglTestCase_042670_1, VkglTestCase_042670_2);

#define VkglTestCase_042671_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042671_2 "encil_back_depth_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042671, VkglTestCase_042671_1, VkglTestCase_042671_2);

#define VkglTestCase_042672_1 "dEQP-GLES3.functional.state_query.integers.ste"
#define VkglTestCase_042672_2 "ncil_back_depth_fail_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042672, VkglTestCase_042672_1, VkglTestCase_042672_2);

#define VkglTestCase_042673_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042673_2 "tencil_back_depth_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042673, VkglTestCase_042673_1, VkglTestCase_042673_2);

#define VkglTestCase_042674_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042674_2 "rs.stencil_depth_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042674, VkglTestCase_042674_1, VkglTestCase_042674_2);

#define VkglTestCase_042675_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042675_2 "rs.stencil_depth_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042675, VkglTestCase_042675_1, VkglTestCase_042675_2);

#define VkglTestCase_042676_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042676_2 "s.stencil_depth_fail_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042676, VkglTestCase_042676_1, VkglTestCase_042676_2);

#define VkglTestCase_042677_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042677_2 "ers.stencil_depth_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042677, VkglTestCase_042677_1, VkglTestCase_042677_2);

#define VkglTestCase_042678_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042678_2 "stencil_back_depth_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042678, VkglTestCase_042678_1, VkglTestCase_042678_2);

#define VkglTestCase_042679_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042679_2 "stencil_back_depth_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042679, VkglTestCase_042679_1, VkglTestCase_042679_2);

#define VkglTestCase_042680_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042680_2 "tencil_back_depth_fail_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042680, VkglTestCase_042680_1, VkglTestCase_042680_2);

#define VkglTestCase_042681_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042681_2 ".stencil_back_depth_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042681, VkglTestCase_042681_1, VkglTestCase_042681_2);

#define VkglTestCase_042682_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042682_2 "tegers.stencil_depth_pass_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042682, VkglTestCase_042682_1, VkglTestCase_042682_2);

#define VkglTestCase_042683_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042683_2 "tegers.stencil_depth_pass_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042683, VkglTestCase_042683_1, VkglTestCase_042683_2);

#define VkglTestCase_042684_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042684_2 "egers.stencil_depth_pass_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042684, VkglTestCase_042684_1, VkglTestCase_042684_2);

#define VkglTestCase_042685_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042685_2 "ntegers.stencil_depth_pass_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042685, VkglTestCase_042685_1, VkglTestCase_042685_2);

#define VkglTestCase_042686_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042686_2 "gers.stencil_back_depth_pass_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042686, VkglTestCase_042686_1, VkglTestCase_042686_2);

#define VkglTestCase_042687_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042687_2 "gers.stencil_back_depth_pass_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042687, VkglTestCase_042687_1, VkglTestCase_042687_2);

#define VkglTestCase_042688_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042688_2 "ers.stencil_back_depth_pass_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042688, VkglTestCase_042688_1, VkglTestCase_042688_2);

#define VkglTestCase_042689_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042689_2 "egers.stencil_back_depth_pass_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042689, VkglTestCase_042689_1, VkglTestCase_042689_2);

#define VkglTestCase_042690_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042690_2 "stencil_depth_pass_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042690, VkglTestCase_042690_1, VkglTestCase_042690_2);

#define VkglTestCase_042691_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042691_2 "stencil_depth_pass_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042691, VkglTestCase_042691_1, VkglTestCase_042691_2);

#define VkglTestCase_042692_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042692_2 "tencil_depth_pass_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042692, VkglTestCase_042692_1, VkglTestCase_042692_2);

#define VkglTestCase_042693_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042693_2 ".stencil_depth_pass_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042693, VkglTestCase_042693_1, VkglTestCase_042693_2);

#define VkglTestCase_042694_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042694_2 "encil_back_depth_pass_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042694, VkglTestCase_042694_1, VkglTestCase_042694_2);

#define VkglTestCase_042695_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042695_2 "encil_back_depth_pass_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042695, VkglTestCase_042695_1, VkglTestCase_042695_2);

#define VkglTestCase_042696_1 "dEQP-GLES3.functional.state_query.integers.ste"
#define VkglTestCase_042696_2 "ncil_back_depth_pass_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042696, VkglTestCase_042696_1, VkglTestCase_042696_2);

#define VkglTestCase_042697_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042697_2 "tencil_back_depth_pass_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042697, VkglTestCase_042697_1, VkglTestCase_042697_2);

#define VkglTestCase_042698_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042698_2 "rs.stencil_depth_pass_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042698, VkglTestCase_042698_1, VkglTestCase_042698_2);

#define VkglTestCase_042699_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042699_2 "rs.stencil_depth_pass_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042699, VkglTestCase_042699_1, VkglTestCase_042699_2);

#define VkglTestCase_042700_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042700_2 "s.stencil_depth_pass_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042700, VkglTestCase_042700_1, VkglTestCase_042700_2);

#define VkglTestCase_042701_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042701_2 "ers.stencil_depth_pass_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042701, VkglTestCase_042701_1, VkglTestCase_042701_2);

#define VkglTestCase_042702_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042702_2 "stencil_back_depth_pass_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042702, VkglTestCase_042702_1, VkglTestCase_042702_2);

#define VkglTestCase_042703_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042703_2 "stencil_back_depth_pass_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042703, VkglTestCase_042703_1, VkglTestCase_042703_2);

#define VkglTestCase_042704_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042704_2 "tencil_back_depth_pass_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042704, VkglTestCase_042704_1, VkglTestCase_042704_2);

#define VkglTestCase_042705_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042705_2 ".stencil_back_depth_pass_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042705, VkglTestCase_042705_1, VkglTestCase_042705_2);

#define VkglTestCase_042706_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042706_2 ".integers.stencil_func_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042706, VkglTestCase_042706_1, VkglTestCase_042706_2);

#define VkglTestCase_042707_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042707_2 ".integers.stencil_func_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042707, VkglTestCase_042707_1, VkglTestCase_042707_2);

#define VkglTestCase_042708_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042708_2 "integers.stencil_func_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042708, VkglTestCase_042708_1, VkglTestCase_042708_2);

#define VkglTestCase_042709_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042709_2 "y.integers.stencil_func_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042709, VkglTestCase_042709_1, VkglTestCase_042709_2);

#define VkglTestCase_042710_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042710_2 "egers.stencil_func_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042710, VkglTestCase_042710_1, VkglTestCase_042710_2);

#define VkglTestCase_042711_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042711_2 "egers.stencil_func_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042711, VkglTestCase_042711_1, VkglTestCase_042711_2);

#define VkglTestCase_042712_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042712_2 "gers.stencil_func_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042712, VkglTestCase_042712_1, VkglTestCase_042712_2);

#define VkglTestCase_042713_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042713_2 "tegers.stencil_func_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042713, VkglTestCase_042713_1, VkglTestCase_042713_2);

#define VkglTestCase_042714_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042714_2 "rs.stencil_func_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042714, VkglTestCase_042714_1, VkglTestCase_042714_2);

#define VkglTestCase_042715_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042715_2 "rs.stencil_func_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042715, VkglTestCase_042715_1, VkglTestCase_042715_2);

#define VkglTestCase_042716_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042716_2 "s.stencil_func_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042716, VkglTestCase_042716_1, VkglTestCase_042716_2);

#define VkglTestCase_042717_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042717_2 "ers.stencil_func_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042717, VkglTestCase_042717_1, VkglTestCase_042717_2);

#define VkglTestCase_042718_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042718_2 "rs.stencil_back_func_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042718, VkglTestCase_042718_1, VkglTestCase_042718_2);

#define VkglTestCase_042719_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042719_2 "rs.stencil_back_func_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042719, VkglTestCase_042719_1, VkglTestCase_042719_2);

#define VkglTestCase_042720_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042720_2 "s.stencil_back_func_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042720, VkglTestCase_042720_1, VkglTestCase_042720_2);

#define VkglTestCase_042721_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042721_2 "ers.stencil_back_func_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042721, VkglTestCase_042721_1, VkglTestCase_042721_2);

#define VkglTestCase_042722_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042722_2 ".stencil_back_func_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042722, VkglTestCase_042722_1, VkglTestCase_042722_2);

#define VkglTestCase_042723_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042723_2 ".stencil_back_func_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042723, VkglTestCase_042723_1, VkglTestCase_042723_2);

#define VkglTestCase_042724_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042724_2 "stencil_back_func_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042724, VkglTestCase_042724_1, VkglTestCase_042724_2);

#define VkglTestCase_042725_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042725_2 "s.stencil_back_func_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042725, VkglTestCase_042725_1, VkglTestCase_042725_2);

#define VkglTestCase_042726_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042726_2 "tegers.stencil_value_mask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042726, VkglTestCase_042726_1, VkglTestCase_042726_2);

#define VkglTestCase_042727_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042727_2 "tegers.stencil_value_mask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042727, VkglTestCase_042727_1, VkglTestCase_042727_2);

#define VkglTestCase_042728_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042728_2 "egers.stencil_value_mask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042728, VkglTestCase_042728_1, VkglTestCase_042728_2);

#define VkglTestCase_042729_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042729_2 "ntegers.stencil_value_mask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042729, VkglTestCase_042729_1, VkglTestCase_042729_2);

#define VkglTestCase_042730_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042730_2 "gers.stencil_back_value_mask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042730, VkglTestCase_042730_1, VkglTestCase_042730_2);

#define VkglTestCase_042731_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042731_2 "gers.stencil_back_value_mask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042731, VkglTestCase_042731_1, VkglTestCase_042731_2);

#define VkglTestCase_042732_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042732_2 "ers.stencil_back_value_mask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042732, VkglTestCase_042732_1, VkglTestCase_042732_2);

#define VkglTestCase_042733_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042733_2 "egers.stencil_back_value_mask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042733, VkglTestCase_042733_1, VkglTestCase_042733_2);

#define VkglTestCase_042734_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042734_2 "rs.stencil_value_mask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042734, VkglTestCase_042734_1, VkglTestCase_042734_2);

#define VkglTestCase_042735_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042735_2 "rs.stencil_value_mask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042735, VkglTestCase_042735_1, VkglTestCase_042735_2);

#define VkglTestCase_042736_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042736_2 "s.stencil_value_mask_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042736, VkglTestCase_042736_1, VkglTestCase_042736_2);

#define VkglTestCase_042737_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042737_2 "ers.stencil_value_mask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042737, VkglTestCase_042737_1, VkglTestCase_042737_2);

#define VkglTestCase_042738_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042738_2 "stencil_value_mask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042738, VkglTestCase_042738_1, VkglTestCase_042738_2);

#define VkglTestCase_042739_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042739_2 "stencil_value_mask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042739, VkglTestCase_042739_1, VkglTestCase_042739_2);

#define VkglTestCase_042740_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042740_2 "tencil_value_mask_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042740, VkglTestCase_042740_1, VkglTestCase_042740_2);

#define VkglTestCase_042741_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042741_2 ".stencil_value_mask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042741, VkglTestCase_042741_1, VkglTestCase_042741_2);

#define VkglTestCase_042742_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042742_2 "stencil_back_value_mask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042742, VkglTestCase_042742_1, VkglTestCase_042742_2);

#define VkglTestCase_042743_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042743_2 "stencil_back_value_mask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042743, VkglTestCase_042743_1, VkglTestCase_042743_2);

#define VkglTestCase_042744_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042744_2 "tencil_back_value_mask_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042744, VkglTestCase_042744_1, VkglTestCase_042744_2);

#define VkglTestCase_042745_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042745_2 ".stencil_back_value_mask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042745, VkglTestCase_042745_1, VkglTestCase_042745_2);

#define VkglTestCase_042746_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042746_2 "encil_back_value_mask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042746, VkglTestCase_042746_1, VkglTestCase_042746_2);

#define VkglTestCase_042747_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042747_2 "encil_back_value_mask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042747, VkglTestCase_042747_1, VkglTestCase_042747_2);

#define VkglTestCase_042748_1 "dEQP-GLES3.functional.state_query.integers.ste"
#define VkglTestCase_042748_2 "ncil_back_value_mask_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042748, VkglTestCase_042748_1, VkglTestCase_042748_2);

#define VkglTestCase_042749_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042749_2 "tencil_back_value_mask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042749, VkglTestCase_042749_1, VkglTestCase_042749_2);

#define VkglTestCase_042750_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042750_2 "ntegers.stencil_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042750, VkglTestCase_042750_1, VkglTestCase_042750_2);

#define VkglTestCase_042751_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042751_2 "ntegers.stencil_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042751, VkglTestCase_042751_1, VkglTestCase_042751_2);

#define VkglTestCase_042752_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042752_2 "tegers.stencil_writemask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042752, VkglTestCase_042752_1, VkglTestCase_042752_2);

#define VkglTestCase_042753_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042753_2 "integers.stencil_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042753, VkglTestCase_042753_1, VkglTestCase_042753_2);

#define VkglTestCase_042754_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042754_2 "gers.stencil_back_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042754, VkglTestCase_042754_1, VkglTestCase_042754_2);

#define VkglTestCase_042755_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042755_2 "gers.stencil_back_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042755, VkglTestCase_042755_1, VkglTestCase_042755_2);

#define VkglTestCase_042756_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042756_2 "ers.stencil_back_writemask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042756, VkglTestCase_042756_1, VkglTestCase_042756_2);

#define VkglTestCase_042757_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042757_2 "egers.stencil_back_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042757, VkglTestCase_042757_1, VkglTestCase_042757_2);

#define VkglTestCase_042758_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042758_2 "rs.stencil_writemask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042758, VkglTestCase_042758_1, VkglTestCase_042758_2);

#define VkglTestCase_042759_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042759_2 "rs.stencil_writemask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042759, VkglTestCase_042759_1, VkglTestCase_042759_2);

#define VkglTestCase_042760_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042760_2 "s.stencil_writemask_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042760, VkglTestCase_042760_1, VkglTestCase_042760_2);

#define VkglTestCase_042761_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042761_2 "ers.stencil_writemask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042761, VkglTestCase_042761_1, VkglTestCase_042761_2);

#define VkglTestCase_042762_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042762_2 ".stencil_writemask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042762, VkglTestCase_042762_1, VkglTestCase_042762_2);

#define VkglTestCase_042763_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042763_2 ".stencil_writemask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042763, VkglTestCase_042763_1, VkglTestCase_042763_2);

#define VkglTestCase_042764_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042764_2 "stencil_writemask_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042764, VkglTestCase_042764_1, VkglTestCase_042764_2);

#define VkglTestCase_042765_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042765_2 "s.stencil_writemask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042765, VkglTestCase_042765_1, VkglTestCase_042765_2);

#define VkglTestCase_042766_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042766_2 ".stencil_back_writemask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042766, VkglTestCase_042766_1, VkglTestCase_042766_2);

#define VkglTestCase_042767_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042767_2 ".stencil_back_writemask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042767, VkglTestCase_042767_1, VkglTestCase_042767_2);

#define VkglTestCase_042768_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042768_2 "stencil_back_writemask_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042768, VkglTestCase_042768_1, VkglTestCase_042768_2);

#define VkglTestCase_042769_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042769_2 "s.stencil_back_writemask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042769, VkglTestCase_042769_1, VkglTestCase_042769_2);

#define VkglTestCase_042770_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042770_2 "encil_back_writemask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042770, VkglTestCase_042770_1, VkglTestCase_042770_2);

#define VkglTestCase_042771_1 "dEQP-GLES3.functional.state_query.integers.st"
#define VkglTestCase_042771_2 "encil_back_writemask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042771, VkglTestCase_042771_1, VkglTestCase_042771_2);

#define VkglTestCase_042772_1 "dEQP-GLES3.functional.state_query.integers.ste"
#define VkglTestCase_042772_2 "ncil_back_writemask_separate_both_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042772, VkglTestCase_042772_1, VkglTestCase_042772_2);

#define VkglTestCase_042773_1 "dEQP-GLES3.functional.state_query.integers.s"
#define VkglTestCase_042773_2 "tencil_back_writemask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042773, VkglTestCase_042773_1, VkglTestCase_042773_2);

#define VkglTestCase_042774_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042774_2 "tegers.unpack_image_height_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042774, VkglTestCase_042774_1, VkglTestCase_042774_2);

#define VkglTestCase_042775_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042775_2 "tegers.unpack_image_height_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042775, VkglTestCase_042775_1, VkglTestCase_042775_2);

#define VkglTestCase_042776_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042776_2 "egers.unpack_image_height_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042776, VkglTestCase_042776_1, VkglTestCase_042776_2);

#define VkglTestCase_042777_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042777_2 "ntegers.unpack_image_height_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042777, VkglTestCase_042777_1, VkglTestCase_042777_2);

#define VkglTestCase_042778_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042778_2 "tegers.unpack_skip_images_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042778, VkglTestCase_042778_1, VkglTestCase_042778_2);

#define VkglTestCase_042779_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042779_2 "tegers.unpack_skip_images_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042779, VkglTestCase_042779_1, VkglTestCase_042779_2);

#define VkglTestCase_042780_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042780_2 "egers.unpack_skip_images_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042780, VkglTestCase_042780_1, VkglTestCase_042780_2);

#define VkglTestCase_042781_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042781_2 "ntegers.unpack_skip_images_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042781, VkglTestCase_042781_1, VkglTestCase_042781_2);

#define VkglTestCase_042782_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042782_2 "ntegers.unpack_row_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042782, VkglTestCase_042782_1, VkglTestCase_042782_2);

#define VkglTestCase_042783_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042783_2 "ntegers.unpack_row_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042783, VkglTestCase_042783_1, VkglTestCase_042783_2);

#define VkglTestCase_042784_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042784_2 "tegers.unpack_row_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042784, VkglTestCase_042784_1, VkglTestCase_042784_2);

#define VkglTestCase_042785_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042785_2 "integers.unpack_row_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042785, VkglTestCase_042785_1, VkglTestCase_042785_2);

#define VkglTestCase_042786_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042786_2 "ntegers.unpack_skip_rows_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042786, VkglTestCase_042786_1, VkglTestCase_042786_2);

#define VkglTestCase_042787_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042787_2 "ntegers.unpack_skip_rows_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042787, VkglTestCase_042787_1, VkglTestCase_042787_2);

#define VkglTestCase_042788_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042788_2 "tegers.unpack_skip_rows_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042788, VkglTestCase_042788_1, VkglTestCase_042788_2);

#define VkglTestCase_042789_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042789_2 "integers.unpack_skip_rows_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042789, VkglTestCase_042789_1, VkglTestCase_042789_2);

#define VkglTestCase_042790_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042790_2 "tegers.unpack_skip_pixels_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042790, VkglTestCase_042790_1, VkglTestCase_042790_2);

#define VkglTestCase_042791_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042791_2 "tegers.unpack_skip_pixels_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042791, VkglTestCase_042791_1, VkglTestCase_042791_2);

#define VkglTestCase_042792_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042792_2 "egers.unpack_skip_pixels_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042792, VkglTestCase_042792_1, VkglTestCase_042792_2);

#define VkglTestCase_042793_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042793_2 "ntegers.unpack_skip_pixels_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042793, VkglTestCase_042793_1, VkglTestCase_042793_2);

#define VkglTestCase_042794_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042794_2 "integers.pack_row_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042794, VkglTestCase_042794_1, VkglTestCase_042794_2);

#define VkglTestCase_042795_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042795_2 "integers.pack_row_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042795, VkglTestCase_042795_1, VkglTestCase_042795_2);

#define VkglTestCase_042796_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042796_2 "ntegers.pack_row_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042796, VkglTestCase_042796_1, VkglTestCase_042796_2);

#define VkglTestCase_042797_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042797_2 ".integers.pack_row_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042797, VkglTestCase_042797_1, VkglTestCase_042797_2);

#define VkglTestCase_042798_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042798_2 "integers.pack_skip_rows_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042798, VkglTestCase_042798_1, VkglTestCase_042798_2);

#define VkglTestCase_042799_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042799_2 "integers.pack_skip_rows_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042799, VkglTestCase_042799_1, VkglTestCase_042799_2);

#define VkglTestCase_042800_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042800_2 "ntegers.pack_skip_rows_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042800, VkglTestCase_042800_1, VkglTestCase_042800_2);

#define VkglTestCase_042801_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042801_2 ".integers.pack_skip_rows_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042801, VkglTestCase_042801_1, VkglTestCase_042801_2);

#define VkglTestCase_042802_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042802_2 "ntegers.pack_skip_pixels_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042802, VkglTestCase_042802_1, VkglTestCase_042802_2);

#define VkglTestCase_042803_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042803_2 "ntegers.pack_skip_pixels_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042803, VkglTestCase_042803_1, VkglTestCase_042803_2);

#define VkglTestCase_042804_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042804_2 "tegers.pack_skip_pixels_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042804, VkglTestCase_042804_1, VkglTestCase_042804_2);

#define VkglTestCase_042805_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042805_2 "integers.pack_skip_pixels_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042805, VkglTestCase_042805_1, VkglTestCase_042805_2);

#define VkglTestCase_042806_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042806_2 "ntegers.unpack_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042806, VkglTestCase_042806_1, VkglTestCase_042806_2);

#define VkglTestCase_042807_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042807_2 "ntegers.unpack_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042807, VkglTestCase_042807_1, VkglTestCase_042807_2);

#define VkglTestCase_042808_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042808_2 "tegers.unpack_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042808, VkglTestCase_042808_1, VkglTestCase_042808_2);

#define VkglTestCase_042809_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042809_2 "integers.unpack_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042809, VkglTestCase_042809_1, VkglTestCase_042809_2);

#define VkglTestCase_042810_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042810_2 "integers.pack_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042810, VkglTestCase_042810_1, VkglTestCase_042810_2);

#define VkglTestCase_042811_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042811_2 "integers.pack_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042811, VkglTestCase_042811_1, VkglTestCase_042811_2);

#define VkglTestCase_042812_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042812_2 "ntegers.pack_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042812, VkglTestCase_042812_1, VkglTestCase_042812_2);

#define VkglTestCase_042813_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042813_2 ".integers.pack_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042813, VkglTestCase_042813_1, VkglTestCase_042813_2);

#define VkglTestCase_042814_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042814_2 ".integers.blend_src_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042814, VkglTestCase_042814_1, VkglTestCase_042814_2);

#define VkglTestCase_042815_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042815_2 ".integers.blend_src_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042815, VkglTestCase_042815_1, VkglTestCase_042815_2);

#define VkglTestCase_042816_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042816_2 "integers.blend_src_rgb_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042816, VkglTestCase_042816_1, VkglTestCase_042816_2);

#define VkglTestCase_042817_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042817_2 "y.integers.blend_src_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042817, VkglTestCase_042817_1, VkglTestCase_042817_2);

#define VkglTestCase_042818_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042818_2 "gers.blend_src_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042818, VkglTestCase_042818_1, VkglTestCase_042818_2);

#define VkglTestCase_042819_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042819_2 "gers.blend_src_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042819, VkglTestCase_042819_1, VkglTestCase_042819_2);

#define VkglTestCase_042820_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042820_2 "ers.blend_src_rgb_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042820, VkglTestCase_042820_1, VkglTestCase_042820_2);

#define VkglTestCase_042821_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042821_2 "egers.blend_src_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042821, VkglTestCase_042821_1, VkglTestCase_042821_2);

#define VkglTestCase_042822_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042822_2 "integers.blend_src_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042822, VkglTestCase_042822_1, VkglTestCase_042822_2);

#define VkglTestCase_042823_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042823_2 "integers.blend_src_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042823, VkglTestCase_042823_1, VkglTestCase_042823_2);

#define VkglTestCase_042824_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042824_2 "ntegers.blend_src_alpha_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042824, VkglTestCase_042824_1, VkglTestCase_042824_2);

#define VkglTestCase_042825_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042825_2 ".integers.blend_src_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042825, VkglTestCase_042825_1, VkglTestCase_042825_2);

#define VkglTestCase_042826_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042826_2 "ers.blend_src_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042826, VkglTestCase_042826_1, VkglTestCase_042826_2);

#define VkglTestCase_042827_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042827_2 "ers.blend_src_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042827, VkglTestCase_042827_1, VkglTestCase_042827_2);

#define VkglTestCase_042828_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042828_2 "rs.blend_src_alpha_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042828, VkglTestCase_042828_1, VkglTestCase_042828_2);

#define VkglTestCase_042829_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042829_2 "gers.blend_src_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042829, VkglTestCase_042829_1, VkglTestCase_042829_2);

#define VkglTestCase_042830_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042830_2 ".integers.blend_dst_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042830, VkglTestCase_042830_1, VkglTestCase_042830_2);

#define VkglTestCase_042831_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042831_2 ".integers.blend_dst_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042831, VkglTestCase_042831_1, VkglTestCase_042831_2);

#define VkglTestCase_042832_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042832_2 "integers.blend_dst_rgb_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042832, VkglTestCase_042832_1, VkglTestCase_042832_2);

#define VkglTestCase_042833_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042833_2 "y.integers.blend_dst_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042833, VkglTestCase_042833_1, VkglTestCase_042833_2);

#define VkglTestCase_042834_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042834_2 "gers.blend_dst_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042834, VkglTestCase_042834_1, VkglTestCase_042834_2);

#define VkglTestCase_042835_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042835_2 "gers.blend_dst_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042835, VkglTestCase_042835_1, VkglTestCase_042835_2);

#define VkglTestCase_042836_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042836_2 "ers.blend_dst_rgb_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042836, VkglTestCase_042836_1, VkglTestCase_042836_2);

#define VkglTestCase_042837_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042837_2 "egers.blend_dst_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042837, VkglTestCase_042837_1, VkglTestCase_042837_2);

#define VkglTestCase_042838_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042838_2 "integers.blend_dst_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042838, VkglTestCase_042838_1, VkglTestCase_042838_2);

#define VkglTestCase_042839_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042839_2 "integers.blend_dst_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042839, VkglTestCase_042839_1, VkglTestCase_042839_2);

#define VkglTestCase_042840_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042840_2 "ntegers.blend_dst_alpha_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042840, VkglTestCase_042840_1, VkglTestCase_042840_2);

#define VkglTestCase_042841_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042841_2 ".integers.blend_dst_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042841, VkglTestCase_042841_1, VkglTestCase_042841_2);

#define VkglTestCase_042842_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042842_2 "ers.blend_dst_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042842, VkglTestCase_042842_1, VkglTestCase_042842_2);

#define VkglTestCase_042843_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042843_2 "ers.blend_dst_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042843, VkglTestCase_042843_1, VkglTestCase_042843_2);

#define VkglTestCase_042844_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042844_2 "rs.blend_dst_alpha_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042844, VkglTestCase_042844_1, VkglTestCase_042844_2);

#define VkglTestCase_042845_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042845_2 "gers.blend_dst_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042845, VkglTestCase_042845_1, VkglTestCase_042845_2);

#define VkglTestCase_042846_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042846_2 "tegers.blend_equation_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042846, VkglTestCase_042846_1, VkglTestCase_042846_2);

#define VkglTestCase_042847_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042847_2 "tegers.blend_equation_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042847, VkglTestCase_042847_1, VkglTestCase_042847_2);

#define VkglTestCase_042848_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042848_2 "egers.blend_equation_rgb_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042848, VkglTestCase_042848_1, VkglTestCase_042848_2);

#define VkglTestCase_042849_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042849_2 "ntegers.blend_equation_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042849, VkglTestCase_042849_1, VkglTestCase_042849_2);

#define VkglTestCase_042850_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042850_2 "rs.blend_equation_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042850, VkglTestCase_042850_1, VkglTestCase_042850_2);

#define VkglTestCase_042851_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042851_2 "rs.blend_equation_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042851, VkglTestCase_042851_1, VkglTestCase_042851_2);

#define VkglTestCase_042852_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042852_2 "s.blend_equation_rgb_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042852, VkglTestCase_042852_1, VkglTestCase_042852_2);

#define VkglTestCase_042853_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042853_2 "ers.blend_equation_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042853, VkglTestCase_042853_1, VkglTestCase_042853_2);

#define VkglTestCase_042854_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042854_2 "egers.blend_equation_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042854, VkglTestCase_042854_1, VkglTestCase_042854_2);

#define VkglTestCase_042855_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042855_2 "egers.blend_equation_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042855, VkglTestCase_042855_1, VkglTestCase_042855_2);

#define VkglTestCase_042856_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042856_2 "gers.blend_equation_alpha_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042856, VkglTestCase_042856_1, VkglTestCase_042856_2);

#define VkglTestCase_042857_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042857_2 "tegers.blend_equation_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042857, VkglTestCase_042857_1, VkglTestCase_042857_2);

#define VkglTestCase_042858_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042858_2 "s.blend_equation_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042858, VkglTestCase_042858_1, VkglTestCase_042858_2);

#define VkglTestCase_042859_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042859_2 "s.blend_equation_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042859, VkglTestCase_042859_1, VkglTestCase_042859_2);

#define VkglTestCase_042860_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042860_2 ".blend_equation_alpha_separate_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042860, VkglTestCase_042860_1, VkglTestCase_042860_2);

#define VkglTestCase_042861_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042861_2 "rs.blend_equation_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042861, VkglTestCase_042861_1, VkglTestCase_042861_2);

#define VkglTestCase_042862_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042862_2 "rs.compressed_texture_formats_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042862, VkglTestCase_042862_1, VkglTestCase_042862_2);

#define VkglTestCase_042863_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042863_2 "rs.compressed_texture_formats_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042863, VkglTestCase_042863_1, VkglTestCase_042863_2);

#define VkglTestCase_042864_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042864_2 "s.compressed_texture_formats_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042864, VkglTestCase_042864_1, VkglTestCase_042864_2);

#define VkglTestCase_042865_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042865_2 "ers.compressed_texture_formats_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042865, VkglTestCase_042865_1, VkglTestCase_042865_2);

#define VkglTestCase_042866_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042866_2 "gers.program_binary_formats_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042866, VkglTestCase_042866_1, VkglTestCase_042866_2);

#define VkglTestCase_042867_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042867_2 "gers.program_binary_formats_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042867, VkglTestCase_042867_1, VkglTestCase_042867_2);

#define VkglTestCase_042868_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042868_2 "ers.program_binary_formats_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042868, VkglTestCase_042868_1, VkglTestCase_042868_2);

#define VkglTestCase_042869_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042869_2 "egers.program_binary_formats_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042869, VkglTestCase_042869_1, VkglTestCase_042869_2);

#define VkglTestCase_042870_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042870_2 "egers.shader_binary_formats_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042870, VkglTestCase_042870_1, VkglTestCase_042870_2);

#define VkglTestCase_042871_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042871_2 "egers.shader_binary_formats_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042871, VkglTestCase_042871_1, VkglTestCase_042871_2);

#define VkglTestCase_042872_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042872_2 "gers.shader_binary_formats_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042872, VkglTestCase_042872_1, VkglTestCase_042872_2);

#define VkglTestCase_042873_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042873_2 "tegers.shader_binary_formats_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042873, VkglTestCase_042873_1, VkglTestCase_042873_2);

#define VkglTestCase_042874_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042874_2 "egers.array_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042874, VkglTestCase_042874_1, VkglTestCase_042874_2);

#define VkglTestCase_042875_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042875_2 "egers.array_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042875, VkglTestCase_042875_1, VkglTestCase_042875_2);

#define VkglTestCase_042876_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042876_2 "gers.array_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042876, VkglTestCase_042876_1, VkglTestCase_042876_2);

#define VkglTestCase_042877_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042877_2 "tegers.array_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042877, VkglTestCase_042877_1, VkglTestCase_042877_2);

#define VkglTestCase_042878_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042878_2 "gers.uniform_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042878, VkglTestCase_042878_1, VkglTestCase_042878_2);

#define VkglTestCase_042879_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042879_2 "gers.uniform_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042879, VkglTestCase_042879_1, VkglTestCase_042879_2);

#define VkglTestCase_042880_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042880_2 "ers.uniform_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042880, VkglTestCase_042880_1, VkglTestCase_042880_2);

#define VkglTestCase_042881_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042881_2 "egers.uniform_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042881, VkglTestCase_042881_1, VkglTestCase_042881_2);

#define VkglTestCase_042882_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042882_2 "ers.pixel_pack_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042882, VkglTestCase_042882_1, VkglTestCase_042882_2);

#define VkglTestCase_042883_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042883_2 "ers.pixel_pack_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042883, VkglTestCase_042883_1, VkglTestCase_042883_2);

#define VkglTestCase_042884_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042884_2 "rs.pixel_pack_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042884, VkglTestCase_042884_1, VkglTestCase_042884_2);

#define VkglTestCase_042885_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042885_2 "gers.pixel_pack_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042885, VkglTestCase_042885_1, VkglTestCase_042885_2);

#define VkglTestCase_042886_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042886_2 "rs.pixel_unpack_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042886, VkglTestCase_042886_1, VkglTestCase_042886_2);

#define VkglTestCase_042887_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042887_2 "rs.pixel_unpack_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042887, VkglTestCase_042887_1, VkglTestCase_042887_2);

#define VkglTestCase_042888_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042888_2 "s.pixel_unpack_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042888, VkglTestCase_042888_1, VkglTestCase_042888_2);

#define VkglTestCase_042889_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042889_2 "ers.pixel_unpack_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042889, VkglTestCase_042889_1, VkglTestCase_042889_2);

#define VkglTestCase_042890_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042890_2 "transform_feedback_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042890, VkglTestCase_042890_1, VkglTestCase_042890_2);

#define VkglTestCase_042891_1 "dEQP-GLES3.functional.state_query.integers."
#define VkglTestCase_042891_2 "transform_feedback_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042891, VkglTestCase_042891_1, VkglTestCase_042891_2);

#define VkglTestCase_042892_1 "dEQP-GLES3.functional.state_query.integers.t"
#define VkglTestCase_042892_2 "ransform_feedback_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042892, VkglTestCase_042892_1, VkglTestCase_042892_2);

#define VkglTestCase_042893_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042893_2 ".transform_feedback_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042893, VkglTestCase_042893_1, VkglTestCase_042893_2);

#define VkglTestCase_042894_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042894_2 "ers.copy_read_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042894, VkglTestCase_042894_1, VkglTestCase_042894_2);

#define VkglTestCase_042895_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042895_2 "ers.copy_read_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042895, VkglTestCase_042895_1, VkglTestCase_042895_2);

#define VkglTestCase_042896_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042896_2 "rs.copy_read_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042896, VkglTestCase_042896_1, VkglTestCase_042896_2);

#define VkglTestCase_042897_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042897_2 "gers.copy_read_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042897, VkglTestCase_042897_1, VkglTestCase_042897_2);

#define VkglTestCase_042898_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042898_2 "ers.copy_write_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042898, VkglTestCase_042898_1, VkglTestCase_042898_2);

#define VkglTestCase_042899_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042899_2 "ers.copy_write_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042899, VkglTestCase_042899_1, VkglTestCase_042899_2);

#define VkglTestCase_042900_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042900_2 "rs.copy_write_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042900, VkglTestCase_042900_1, VkglTestCase_042900_2);

#define VkglTestCase_042901_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042901_2 "gers.copy_write_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042901, VkglTestCase_042901_1, VkglTestCase_042901_2);

#define VkglTestCase_042902_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042902_2 "s.element_array_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042902, VkglTestCase_042902_1, VkglTestCase_042902_2);

#define VkglTestCase_042903_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042903_2 "s.element_array_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042903, VkglTestCase_042903_1, VkglTestCase_042903_2);

#define VkglTestCase_042904_1 "dEQP-GLES3.functional.state_query.integers"
#define VkglTestCase_042904_2 ".element_array_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042904, VkglTestCase_042904_1, VkglTestCase_042904_2);

#define VkglTestCase_042905_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042905_2 "rs.element_array_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042905, VkglTestCase_042905_1, VkglTestCase_042905_2);

#define VkglTestCase_042906_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042906_2 "rs.transform_feedback_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042906, VkglTestCase_042906_1, VkglTestCase_042906_2);

#define VkglTestCase_042907_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042907_2 "rs.transform_feedback_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042907, VkglTestCase_042907_1, VkglTestCase_042907_2);

#define VkglTestCase_042908_1 "dEQP-GLES3.functional.state_query.integer"
#define VkglTestCase_042908_2 "s.transform_feedback_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042908, VkglTestCase_042908_1, VkglTestCase_042908_2);

#define VkglTestCase_042909_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042909_2 "ers.transform_feedback_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042909, VkglTestCase_042909_1, VkglTestCase_042909_2);

#define VkglTestCase_042910_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042910_2 "gers.current_program_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042910, VkglTestCase_042910_1, VkglTestCase_042910_2);

#define VkglTestCase_042911_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042911_2 "gers.current_program_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042911, VkglTestCase_042911_1, VkglTestCase_042911_2);

#define VkglTestCase_042912_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042912_2 "ers.current_program_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042912, VkglTestCase_042912_1, VkglTestCase_042912_2);

#define VkglTestCase_042913_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042913_2 "egers.current_program_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042913, VkglTestCase_042913_1, VkglTestCase_042913_2);

#define VkglTestCase_042914_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042914_2 "egers.vertex_array_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042914, VkglTestCase_042914_1, VkglTestCase_042914_2);

#define VkglTestCase_042915_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042915_2 "egers.vertex_array_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042915, VkglTestCase_042915_1, VkglTestCase_042915_2);

#define VkglTestCase_042916_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042916_2 "gers.vertex_array_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042916, VkglTestCase_042916_1, VkglTestCase_042916_2);

#define VkglTestCase_042917_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042917_2 "tegers.vertex_array_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042917, VkglTestCase_042917_1, VkglTestCase_042917_2);

#define VkglTestCase_042918_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042918_2 "tegers.stencil_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042918, VkglTestCase_042918_1, VkglTestCase_042918_2);

#define VkglTestCase_042919_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042919_2 "tegers.stencil_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042919, VkglTestCase_042919_1, VkglTestCase_042919_2);

#define VkglTestCase_042920_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042920_2 "egers.stencil_clear_value_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042920, VkglTestCase_042920_1, VkglTestCase_042920_2);

#define VkglTestCase_042921_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042921_2 "ntegers.stencil_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042921, VkglTestCase_042921_1, VkglTestCase_042921_2);

#define VkglTestCase_042922_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042922_2 "integers.active_texture_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042922, VkglTestCase_042922_1, VkglTestCase_042922_2);

#define VkglTestCase_042923_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042923_2 "integers.active_texture_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042923, VkglTestCase_042923_1, VkglTestCase_042923_2);

#define VkglTestCase_042924_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042924_2 "ntegers.active_texture_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042924, VkglTestCase_042924_1, VkglTestCase_042924_2);

#define VkglTestCase_042925_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042925_2 ".integers.active_texture_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042925, VkglTestCase_042925_1, VkglTestCase_042925_2);

#define VkglTestCase_042926_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042926_2 "egers.renderbuffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042926, VkglTestCase_042926_1, VkglTestCase_042926_2);

#define VkglTestCase_042927_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042927_2 "egers.renderbuffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042927, VkglTestCase_042927_1, VkglTestCase_042927_2);

#define VkglTestCase_042928_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042928_2 "gers.renderbuffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042928, VkglTestCase_042928_1, VkglTestCase_042928_2);

#define VkglTestCase_042929_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042929_2 "tegers.renderbuffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042929, VkglTestCase_042929_1, VkglTestCase_042929_2);

#define VkglTestCase_042930_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042930_2 "integers.sampler_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042930, VkglTestCase_042930_1, VkglTestCase_042930_2);

#define VkglTestCase_042931_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042931_2 "integers.sampler_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042931, VkglTestCase_042931_1, VkglTestCase_042931_2);

#define VkglTestCase_042932_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042932_2 "ntegers.sampler_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042932, VkglTestCase_042932_1, VkglTestCase_042932_2);

#define VkglTestCase_042933_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042933_2 ".integers.sampler_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042933, VkglTestCase_042933_1, VkglTestCase_042933_2);

#define VkglTestCase_042934_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042934_2 "tegers.texture_binding_2d_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042934, VkglTestCase_042934_1, VkglTestCase_042934_2);

#define VkglTestCase_042935_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042935_2 "tegers.texture_binding_2d_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042935, VkglTestCase_042935_1, VkglTestCase_042935_2);

#define VkglTestCase_042936_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042936_2 "egers.texture_binding_2d_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042936, VkglTestCase_042936_1, VkglTestCase_042936_2);

#define VkglTestCase_042937_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042937_2 "ntegers.texture_binding_2d_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042937, VkglTestCase_042937_1, VkglTestCase_042937_2);

#define VkglTestCase_042938_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042938_2 "tegers.texture_binding_3d_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042938, VkglTestCase_042938_1, VkglTestCase_042938_2);

#define VkglTestCase_042939_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042939_2 "tegers.texture_binding_3d_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042939, VkglTestCase_042939_1, VkglTestCase_042939_2);

#define VkglTestCase_042940_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042940_2 "egers.texture_binding_3d_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042940, VkglTestCase_042940_1, VkglTestCase_042940_2);

#define VkglTestCase_042941_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042941_2 "ntegers.texture_binding_3d_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042941, VkglTestCase_042941_1, VkglTestCase_042941_2);

#define VkglTestCase_042942_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042942_2 "ers.texture_binding_2d_array_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042942, VkglTestCase_042942_1, VkglTestCase_042942_2);

#define VkglTestCase_042943_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042943_2 "ers.texture_binding_2d_array_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042943, VkglTestCase_042943_1, VkglTestCase_042943_2);

#define VkglTestCase_042944_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042944_2 "rs.texture_binding_2d_array_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042944, VkglTestCase_042944_1, VkglTestCase_042944_2);

#define VkglTestCase_042945_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042945_2 "gers.texture_binding_2d_array_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042945, VkglTestCase_042945_1, VkglTestCase_042945_2);

#define VkglTestCase_042946_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042946_2 "ers.texture_binding_cube_map_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042946, VkglTestCase_042946_1, VkglTestCase_042946_2);

#define VkglTestCase_042947_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042947_2 "ers.texture_binding_cube_map_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042947, VkglTestCase_042947_1, VkglTestCase_042947_2);

#define VkglTestCase_042948_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042948_2 "rs.texture_binding_cube_map_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042948, VkglTestCase_042948_1, VkglTestCase_042948_2);

#define VkglTestCase_042949_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042949_2 "gers.texture_binding_cube_map_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042949, VkglTestCase_042949_1, VkglTestCase_042949_2);

#define VkglTestCase_042950_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042950_2 "tegers.framebuffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042950, VkglTestCase_042950_1, VkglTestCase_042950_2);

#define VkglTestCase_042951_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042951_2 "tegers.framebuffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042951, VkglTestCase_042951_1, VkglTestCase_042951_2);

#define VkglTestCase_042952_1 "dEQP-GLES3.functional.state_query.int"
#define VkglTestCase_042952_2 "egers.framebuffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042952, VkglTestCase_042952_1, VkglTestCase_042952_2);

#define VkglTestCase_042953_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042953_2 "ntegers.framebuffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042953, VkglTestCase_042953_1, VkglTestCase_042953_2);

#define VkglTestCase_042954_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042954_2 "ers.implementation_color_read_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042954, VkglTestCase_042954_1, VkglTestCase_042954_2);

#define VkglTestCase_042955_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042955_2 "ers.implementation_color_read_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042955, VkglTestCase_042955_1, VkglTestCase_042955_2);

#define VkglTestCase_042956_1 "dEQP-GLES3.functional.state_query.intege"
#define VkglTestCase_042956_2 "rs.implementation_color_read_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042956, VkglTestCase_042956_1, VkglTestCase_042956_2);

#define VkglTestCase_042957_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042957_2 "gers.implementation_color_read_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042957, VkglTestCase_042957_1, VkglTestCase_042957_2);

#define VkglTestCase_042958_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042958_2 "y.integers.read_buffer_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042958, VkglTestCase_042958_1, VkglTestCase_042958_2);

#define VkglTestCase_042959_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042959_2 "y.integers.read_buffer_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042959, VkglTestCase_042959_1, VkglTestCase_042959_2);

#define VkglTestCase_042960_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042960_2 ".integers.read_buffer_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042960, VkglTestCase_042960_1, VkglTestCase_042960_2);

#define VkglTestCase_042961_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042961_2 "ry.integers.read_buffer_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042961, VkglTestCase_042961_1, VkglTestCase_042961_2);

#define VkglTestCase_042962_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042962_2 "y.integers.draw_buffer_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042962, VkglTestCase_042962_1, VkglTestCase_042962_2);

#define VkglTestCase_042963_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042963_2 "y.integers.draw_buffer_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042963, VkglTestCase_042963_1, VkglTestCase_042963_2);

#define VkglTestCase_042964_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042964_2 ".integers.draw_buffer_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042964, VkglTestCase_042964_1, VkglTestCase_042964_2);

#define VkglTestCase_042965_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042965_2 "ry.integers.draw_buffer_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042965, VkglTestCase_042965_1, VkglTestCase_042965_2);
