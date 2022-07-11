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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000010_1 "dEQP-GLES3.functional.implemen"
#define VkglTestCase_000010_2 "tation_limits.max_element_index"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "dEQP-GLES3.functional.implem"
#define VkglTestCase_000011_2 "entation_limits.subpixel_bits"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "dEQP-GLES3.functional.implement"
#define VkglTestCase_000012_2 "ation_limits.max_3d_texture_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "dEQP-GLES3.functional.implemen"
#define VkglTestCase_000013_2 "tation_limits.max_texture_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000014_2 "on_limits.max_array_texture_layers"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "dEQP-GLES3.functional.implementa"
#define VkglTestCase_000015_2 "tion_limits.max_texture_lod_bias"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000016_2 "on_limits.max_cube_map_texture_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "dEQP-GLES3.functional.implementa"
#define VkglTestCase_000017_2 "tion_limits.max_renderbuffer_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "dEQP-GLES3.functional.implemen"
#define VkglTestCase_000018_2 "tation_limits.max_draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "dEQP-GLES3.functional.implementa"
#define VkglTestCase_000019_2 "tion_limits.max_color_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000020_2 "on_limits.aliased_point_size_range"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000021_2 "on_limits.aliased_line_width_range"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "dEQP-GLES3.functional.implementa"
#define VkglTestCase_000022_2 "tion_limits.max_elements_indices"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "dEQP-GLES3.functional.implementa"
#define VkglTestCase_000023_2 "tion_limits.max_elements_vertices"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "dEQP-GLES3.functional.implementation_"
#define VkglTestCase_000024_2 "limits.num_compressed_texture_formats"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000025_2 "n_limits.compressed_texture_formats"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000026_2 "n_limits.num_program_binary_formats"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000027_2 "on_limits.num_shader_binary_formats"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "dEQP-GLES3.functional.impleme"
#define VkglTestCase_000028_2 "ntation_limits.shader_compiler"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "dEQP-GLES3.functional.implementat"
#define VkglTestCase_000029_2 "ion_limits.max_server_wait_timeout"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "dEQP-GLES3.functional.imple"
#define VkglTestCase_000030_2 "mentation_limits.extensions"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "dEQP-GLES3.functional.impleme"
#define VkglTestCase_000031_2 "ntation_limits.num_extensions"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "dEQP-GLES3.functional.implem"
#define VkglTestCase_000032_2 "entation_limits.major_version"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "dEQP-GLES3.functional.implem"
#define VkglTestCase_000033_2 "entation_limits.minor_version"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "dEQP-GLES3.functional.implement"
#define VkglTestCase_000034_2 "ation_limits.max_vertex_attribs"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "dEQP-GLES3.functional.implementation"
#define VkglTestCase_000035_2 "_limits.max_vertex_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000036_2 "n_limits.max_vertex_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000037_2 "on_limits.max_vertex_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "dEQP-GLES3.functional.implementation"
#define VkglTestCase_000038_2 "_limits.max_vertex_output_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "dEQP-GLES3.functional.implementation_"
#define VkglTestCase_000039_2 "limits.max_vertex_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "dEQP-GLES3.functional.implementation_"
#define VkglTestCase_000040_2 "limits.max_fragment_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "dEQP-GLES3.functional.implementation"
#define VkglTestCase_000041_2 "_limits.max_fragment_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000042_2 "n_limits.max_fragment_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "dEQP-GLES3.functional.implementation"
#define VkglTestCase_000043_2 "_limits.max_fragment_input_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "dEQP-GLES3.functional.implementat"
#define VkglTestCase_000044_2 "ion_limits.max_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000045_2 "on_limits.min_program_texel_offset"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "dEQP-GLES3.functional.implementati"
#define VkglTestCase_000046_2 "on_limits.max_program_texel_offset"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000047_2 "n_limits.max_uniform_buffer_bindings"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "dEQP-GLES3.functional.implementat"
#define VkglTestCase_000048_2 "ion_limits.max_uniform_block_size"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "dEQP-GLES3.functional.implementation_"
#define VkglTestCase_000049_2 "limits.uniform_buffer_offset_alignment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "dEQP-GLES3.functional.implementatio"
#define VkglTestCase_000050_2 "n_limits.max_combined_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "dEQP-GLES3.functional.implementation_limi"
#define VkglTestCase_000051_2 "ts.max_combined_vertex_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "dEQP-GLES3.functional.implementation_limit"
#define VkglTestCase_000052_2 "s.max_combined_fragment_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "dEQP-GLES3.functional.implementat"
#define VkglTestCase_000053_2 "ion_limits.max_varying_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "dEQP-GLES3.functional.implement"
#define VkglTestCase_000054_2 "ation_limits.max_varying_vectors"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "dEQP-GLES3.functional.implementation_l"
#define VkglTestCase_000055_2 "imits.max_combined_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "dEQP-GLES3.functional.implementation_limits."
#define VkglTestCase_000056_2 "max_transform_feedback_interleaved_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "dEQP-GLES3.functional.implementation_limi"
#define VkglTestCase_000057_2 "ts.max_transform_feedback_separate_attribs"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "dEQP-GLES3.functional.implementation_limits"
#define VkglTestCase_000058_2 ".max_transform_feedback_separate_components"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);
