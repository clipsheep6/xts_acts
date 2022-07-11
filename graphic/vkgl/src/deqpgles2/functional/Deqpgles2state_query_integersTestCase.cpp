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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015353_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015353_2 ".integers.subpixel_bits_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015353, VkglTestCase_015353_1, VkglTestCase_015353_2);

#define VkglTestCase_015354_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015354_2 "y.integers.subpixel_bits_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015354, VkglTestCase_015354_1, VkglTestCase_015354_2);

#define VkglTestCase_015355_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015355_2 "ntegers.max_texture_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015355, VkglTestCase_015355_1, VkglTestCase_015355_2);

#define VkglTestCase_015356_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015356_2 "integers.max_texture_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015356, VkglTestCase_015356_1, VkglTestCase_015356_2);

#define VkglTestCase_015357_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015357_2 "ers.max_cube_map_texture_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015357, VkglTestCase_015357_1, VkglTestCase_015357_2);

#define VkglTestCase_015358_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015358_2 "gers.max_cube_map_texture_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015358, VkglTestCase_015358_1, VkglTestCase_015358_2);

#define VkglTestCase_015359_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015359_2 "tegers.max_vertex_attribs_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015359, VkglTestCase_015359_1, VkglTestCase_015359_2);

#define VkglTestCase_015360_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015360_2 "ntegers.max_vertex_attribs_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015360, VkglTestCase_015360_1, VkglTestCase_015360_2);

#define VkglTestCase_015361_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015361_2 "rs.max_vertex_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015361, VkglTestCase_015361_1, VkglTestCase_015361_2);

#define VkglTestCase_015362_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015362_2 "ers.max_vertex_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015362, VkglTestCase_015362_1, VkglTestCase_015362_2);

#define VkglTestCase_015363_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015363_2 "tegers.max_varying_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015363, VkglTestCase_015363_1, VkglTestCase_015363_2);

#define VkglTestCase_015364_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015364_2 "ntegers.max_varying_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015364, VkglTestCase_015364_1, VkglTestCase_015364_2);

#define VkglTestCase_015365_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015365_2 "max_combined_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015365, VkglTestCase_015365_1, VkglTestCase_015365_2);

#define VkglTestCase_015366_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015366_2 ".max_combined_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015366, VkglTestCase_015366_1, VkglTestCase_015366_2);

#define VkglTestCase_015367_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015367_2 ".max_vertex_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015367, VkglTestCase_015367_1, VkglTestCase_015367_2);

#define VkglTestCase_015368_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015368_2 "s.max_vertex_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015368, VkglTestCase_015368_1, VkglTestCase_015368_2);

#define VkglTestCase_015369_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015369_2 "gers.max_texture_image_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015369, VkglTestCase_015369_1, VkglTestCase_015369_2);

#define VkglTestCase_015370_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015370_2 "egers.max_texture_image_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015370, VkglTestCase_015370_1, VkglTestCase_015370_2);

#define VkglTestCase_015371_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015371_2 "s.max_fragment_uniform_vectors_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015371, VkglTestCase_015371_1, VkglTestCase_015371_2);

#define VkglTestCase_015372_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015372_2 "rs.max_fragment_uniform_vectors_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015372, VkglTestCase_015372_1, VkglTestCase_015372_2);

#define VkglTestCase_015373_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015373_2 "egers.max_renderbuffer_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015373, VkglTestCase_015373_1, VkglTestCase_015373_2);

#define VkglTestCase_015374_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015374_2 "tegers.max_renderbuffer_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015374, VkglTestCase_015374_1, VkglTestCase_015374_2);

#define VkglTestCase_015375_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015375_2 "integers.sample_buffers_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015375, VkglTestCase_015375_1, VkglTestCase_015375_2);

#define VkglTestCase_015376_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015376_2 ".integers.sample_buffers_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015376, VkglTestCase_015376_1, VkglTestCase_015376_2);

#define VkglTestCase_015377_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015377_2 "ery.integers.samples_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015377, VkglTestCase_015377_1, VkglTestCase_015377_2);

#define VkglTestCase_015378_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015378_2 "ery.integers.samples_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015378, VkglTestCase_015378_1, VkglTestCase_015378_2);

#define VkglTestCase_015379_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015379_2 "uery.integers.samples_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015379, VkglTestCase_015379_1, VkglTestCase_015379_2);

#define VkglTestCase_015380_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015380_2 "egers.generate_mipmap_hint_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015380, VkglTestCase_015380_1, VkglTestCase_015380_2);

#define VkglTestCase_015381_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015381_2 "egers.generate_mipmap_hint_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015381, VkglTestCase_015381_1, VkglTestCase_015381_2);

#define VkglTestCase_015382_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015382_2 "tegers.generate_mipmap_hint_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015382, VkglTestCase_015382_1, VkglTestCase_015382_2);

#define VkglTestCase_015383_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015383_2 "y.integers.depth_func_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015383, VkglTestCase_015383_1, VkglTestCase_015383_2);

#define VkglTestCase_015384_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015384_2 "y.integers.depth_func_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015384, VkglTestCase_015384_1, VkglTestCase_015384_2);

#define VkglTestCase_015385_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015385_2 "ry.integers.depth_func_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015385, VkglTestCase_015385_1, VkglTestCase_015385_2);

#define VkglTestCase_015386_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015386_2 "integers.cull_face_mode_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015386, VkglTestCase_015386_1, VkglTestCase_015386_2);

#define VkglTestCase_015387_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015387_2 "integers.cull_face_mode_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015387, VkglTestCase_015387_1, VkglTestCase_015387_2);

#define VkglTestCase_015388_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015388_2 ".integers.cull_face_mode_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015388, VkglTestCase_015388_1, VkglTestCase_015388_2);

#define VkglTestCase_015389_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015389_2 "integers.front_face_mode_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015389, VkglTestCase_015389_1, VkglTestCase_015389_2);

#define VkglTestCase_015390_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015390_2 "integers.front_face_mode_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015390, VkglTestCase_015390_1, VkglTestCase_015390_2);

#define VkglTestCase_015391_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015391_2 ".integers.front_face_mode_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015391, VkglTestCase_015391_1, VkglTestCase_015391_2);

#define VkglTestCase_015392_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015392_2 "ry.integers.viewport_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015392, VkglTestCase_015392_1, VkglTestCase_015392_2);

#define VkglTestCase_015393_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015393_2 "ry.integers.viewport_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015393, VkglTestCase_015393_1, VkglTestCase_015393_2);

#define VkglTestCase_015394_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015394_2 "ery.integers.viewport_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015394, VkglTestCase_015394_1, VkglTestCase_015394_2);

#define VkglTestCase_015395_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015395_2 "y.integers.scissor_box_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015395, VkglTestCase_015395_1, VkglTestCase_015395_2);

#define VkglTestCase_015396_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015396_2 "y.integers.scissor_box_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015396, VkglTestCase_015396_1, VkglTestCase_015396_2);

#define VkglTestCase_015397_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015397_2 "ry.integers.scissor_box_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015397, VkglTestCase_015397_1, VkglTestCase_015397_2);

#define VkglTestCase_015398_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015398_2 "ntegers.max_viewport_dims_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015398, VkglTestCase_015398_1, VkglTestCase_015398_2);

#define VkglTestCase_015399_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015399_2 "ntegers.max_viewport_dims_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015399, VkglTestCase_015399_1, VkglTestCase_015399_2);

#define VkglTestCase_015400_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015400_2 "integers.max_viewport_dims_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015400, VkglTestCase_015400_1, VkglTestCase_015400_2);

#define VkglTestCase_015401_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015401_2 "egers.buffer_component_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015401, VkglTestCase_015401_1, VkglTestCase_015401_2);

#define VkglTestCase_015402_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015402_2 "egers.buffer_component_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015402, VkglTestCase_015402_1, VkglTestCase_015402_2);

#define VkglTestCase_015403_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015403_2 "tegers.buffer_component_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015403, VkglTestCase_015403_1, VkglTestCase_015403_2);

#define VkglTestCase_015404_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015404_2 "y.integers.stencil_ref_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015404, VkglTestCase_015404_1, VkglTestCase_015404_2);

#define VkglTestCase_015405_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015405_2 "y.integers.stencil_ref_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015405, VkglTestCase_015405_1, VkglTestCase_015405_2);

#define VkglTestCase_015406_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015406_2 "ry.integers.stencil_ref_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015406, VkglTestCase_015406_1, VkglTestCase_015406_2);

#define VkglTestCase_015407_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015407_2 "ntegers.stencil_back_ref_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015407, VkglTestCase_015407_1, VkglTestCase_015407_2);

#define VkglTestCase_015408_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015408_2 "ntegers.stencil_back_ref_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015408, VkglTestCase_015408_1, VkglTestCase_015408_2);

#define VkglTestCase_015409_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015409_2 "integers.stencil_back_ref_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015409, VkglTestCase_015409_1, VkglTestCase_015409_2);

#define VkglTestCase_015410_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015410_2 "egers.stencil_ref_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015410, VkglTestCase_015410_1, VkglTestCase_015410_2);

#define VkglTestCase_015411_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015411_2 "egers.stencil_ref_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015411, VkglTestCase_015411_1, VkglTestCase_015411_2);

#define VkglTestCase_015412_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015412_2 "tegers.stencil_ref_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015412, VkglTestCase_015412_1, VkglTestCase_015412_2);

#define VkglTestCase_015413_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015413_2 "ers.stencil_ref_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015413, VkglTestCase_015413_1, VkglTestCase_015413_2);

#define VkglTestCase_015414_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015414_2 "ers.stencil_ref_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015414, VkglTestCase_015414_1, VkglTestCase_015414_2);

#define VkglTestCase_015415_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015415_2 "gers.stencil_ref_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015415, VkglTestCase_015415_1, VkglTestCase_015415_2);

#define VkglTestCase_015416_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015416_2 "ers.stencil_back_ref_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015416, VkglTestCase_015416_1, VkglTestCase_015416_2);

#define VkglTestCase_015417_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015417_2 "ers.stencil_back_ref_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015417, VkglTestCase_015417_1, VkglTestCase_015417_2);

#define VkglTestCase_015418_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015418_2 "gers.stencil_back_ref_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015418, VkglTestCase_015418_1, VkglTestCase_015418_2);

#define VkglTestCase_015419_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015419_2 ".stencil_back_ref_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015419, VkglTestCase_015419_1, VkglTestCase_015419_2);

#define VkglTestCase_015420_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015420_2 ".stencil_back_ref_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015420, VkglTestCase_015420_1, VkglTestCase_015420_2);

#define VkglTestCase_015421_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015421_2 "s.stencil_back_ref_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015421, VkglTestCase_015421_1, VkglTestCase_015421_2);

#define VkglTestCase_015422_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015422_2 ".integers.stencil_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015422, VkglTestCase_015422_1, VkglTestCase_015422_2);

#define VkglTestCase_015423_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015423_2 ".integers.stencil_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015423, VkglTestCase_015423_1, VkglTestCase_015423_2);

#define VkglTestCase_015424_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015424_2 "y.integers.stencil_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015424, VkglTestCase_015424_1, VkglTestCase_015424_2);

#define VkglTestCase_015425_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015425_2 "ntegers.stencil_back_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015425, VkglTestCase_015425_1, VkglTestCase_015425_2);

#define VkglTestCase_015426_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015426_2 "ntegers.stencil_back_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015426, VkglTestCase_015426_1, VkglTestCase_015426_2);

#define VkglTestCase_015427_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015427_2 "integers.stencil_back_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015427, VkglTestCase_015427_1, VkglTestCase_015427_2);

#define VkglTestCase_015428_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015428_2 "rs.stencil_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015428, VkglTestCase_015428_1, VkglTestCase_015428_2);

#define VkglTestCase_015429_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015429_2 "rs.stencil_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015429, VkglTestCase_015429_1, VkglTestCase_015429_2);

#define VkglTestCase_015430_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015430_2 "ers.stencil_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015430, VkglTestCase_015430_1, VkglTestCase_015430_2);

#define VkglTestCase_015431_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015431_2 ".stencil_back_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015431, VkglTestCase_015431_1, VkglTestCase_015431_2);

#define VkglTestCase_015432_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015432_2 ".stencil_back_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015432, VkglTestCase_015432_1, VkglTestCase_015432_2);

#define VkglTestCase_015433_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015433_2 "s.stencil_back_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015433, VkglTestCase_015433_1, VkglTestCase_015433_2);

#define VkglTestCase_015434_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015434_2 "egers.stencil_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015434, VkglTestCase_015434_1, VkglTestCase_015434_2);

#define VkglTestCase_015435_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015435_2 "egers.stencil_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015435, VkglTestCase_015435_1, VkglTestCase_015435_2);

#define VkglTestCase_015436_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015436_2 "tegers.stencil_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015436, VkglTestCase_015436_1, VkglTestCase_015436_2);

#define VkglTestCase_015437_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015437_2 "rs.stencil_back_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015437, VkglTestCase_015437_1, VkglTestCase_015437_2);

#define VkglTestCase_015438_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015438_2 "rs.stencil_back_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015438, VkglTestCase_015438_1, VkglTestCase_015438_2);

#define VkglTestCase_015439_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015439_2 "ers.stencil_back_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015439, VkglTestCase_015439_1, VkglTestCase_015439_2);

#define VkglTestCase_015440_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015440_2 "tegers.stencil_depth_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015440, VkglTestCase_015440_1, VkglTestCase_015440_2);

#define VkglTestCase_015441_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015441_2 "tegers.stencil_depth_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015441, VkglTestCase_015441_1, VkglTestCase_015441_2);

#define VkglTestCase_015442_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015442_2 "ntegers.stencil_depth_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015442, VkglTestCase_015442_1, VkglTestCase_015442_2);

#define VkglTestCase_015443_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015443_2 "gers.stencil_back_depth_fail_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015443, VkglTestCase_015443_1, VkglTestCase_015443_2);

#define VkglTestCase_015444_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015444_2 "gers.stencil_back_depth_fail_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015444, VkglTestCase_015444_1, VkglTestCase_015444_2);

#define VkglTestCase_015445_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015445_2 "egers.stencil_back_depth_fail_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015445, VkglTestCase_015445_1, VkglTestCase_015445_2);

#define VkglTestCase_015446_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015446_2 "stencil_depth_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015446, VkglTestCase_015446_1, VkglTestCase_015446_2);

#define VkglTestCase_015447_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015447_2 "stencil_depth_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015447, VkglTestCase_015447_1, VkglTestCase_015447_2);

#define VkglTestCase_015448_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015448_2 ".stencil_depth_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015448, VkglTestCase_015448_1, VkglTestCase_015448_2);

#define VkglTestCase_015449_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015449_2 "encil_back_depth_fail_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015449, VkglTestCase_015449_1, VkglTestCase_015449_2);

#define VkglTestCase_015450_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015450_2 "encil_back_depth_fail_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015450, VkglTestCase_015450_1, VkglTestCase_015450_2);

#define VkglTestCase_015451_1 "dEQP-GLES2.functional.state_query.integers.s"
#define VkglTestCase_015451_2 "tencil_back_depth_fail_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015451, VkglTestCase_015451_1, VkglTestCase_015451_2);

#define VkglTestCase_015452_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015452_2 "rs.stencil_depth_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015452, VkglTestCase_015452_1, VkglTestCase_015452_2);

#define VkglTestCase_015453_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015453_2 "rs.stencil_depth_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015453, VkglTestCase_015453_1, VkglTestCase_015453_2);

#define VkglTestCase_015454_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015454_2 "ers.stencil_depth_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015454, VkglTestCase_015454_1, VkglTestCase_015454_2);

#define VkglTestCase_015455_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015455_2 "stencil_back_depth_fail_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015455, VkglTestCase_015455_1, VkglTestCase_015455_2);

#define VkglTestCase_015456_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015456_2 "stencil_back_depth_fail_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015456, VkglTestCase_015456_1, VkglTestCase_015456_2);

#define VkglTestCase_015457_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015457_2 ".stencil_back_depth_fail_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015457, VkglTestCase_015457_1, VkglTestCase_015457_2);

#define VkglTestCase_015458_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015458_2 "tegers.stencil_depth_pass_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015458, VkglTestCase_015458_1, VkglTestCase_015458_2);

#define VkglTestCase_015459_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015459_2 "tegers.stencil_depth_pass_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015459, VkglTestCase_015459_1, VkglTestCase_015459_2);

#define VkglTestCase_015460_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015460_2 "ntegers.stencil_depth_pass_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015460, VkglTestCase_015460_1, VkglTestCase_015460_2);

#define VkglTestCase_015461_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015461_2 "gers.stencil_back_depth_pass_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015461, VkglTestCase_015461_1, VkglTestCase_015461_2);

#define VkglTestCase_015462_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015462_2 "gers.stencil_back_depth_pass_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015462, VkglTestCase_015462_1, VkglTestCase_015462_2);

#define VkglTestCase_015463_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015463_2 "egers.stencil_back_depth_pass_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015463, VkglTestCase_015463_1, VkglTestCase_015463_2);

#define VkglTestCase_015464_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015464_2 "stencil_depth_pass_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015464, VkglTestCase_015464_1, VkglTestCase_015464_2);

#define VkglTestCase_015465_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015465_2 "stencil_depth_pass_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015465, VkglTestCase_015465_1, VkglTestCase_015465_2);

#define VkglTestCase_015466_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015466_2 ".stencil_depth_pass_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015466, VkglTestCase_015466_1, VkglTestCase_015466_2);

#define VkglTestCase_015467_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015467_2 "encil_back_depth_pass_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015467, VkglTestCase_015467_1, VkglTestCase_015467_2);

#define VkglTestCase_015468_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015468_2 "encil_back_depth_pass_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015468, VkglTestCase_015468_1, VkglTestCase_015468_2);

#define VkglTestCase_015469_1 "dEQP-GLES2.functional.state_query.integers.s"
#define VkglTestCase_015469_2 "tencil_back_depth_pass_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015469, VkglTestCase_015469_1, VkglTestCase_015469_2);

#define VkglTestCase_015470_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015470_2 "rs.stencil_depth_pass_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015470, VkglTestCase_015470_1, VkglTestCase_015470_2);

#define VkglTestCase_015471_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015471_2 "rs.stencil_depth_pass_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015471, VkglTestCase_015471_1, VkglTestCase_015471_2);

#define VkglTestCase_015472_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015472_2 "ers.stencil_depth_pass_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015472, VkglTestCase_015472_1, VkglTestCase_015472_2);

#define VkglTestCase_015473_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015473_2 "stencil_back_depth_pass_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015473, VkglTestCase_015473_1, VkglTestCase_015473_2);

#define VkglTestCase_015474_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015474_2 "stencil_back_depth_pass_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015474, VkglTestCase_015474_1, VkglTestCase_015474_2);

#define VkglTestCase_015475_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015475_2 ".stencil_back_depth_pass_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015475, VkglTestCase_015475_1, VkglTestCase_015475_2);

#define VkglTestCase_015476_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015476_2 ".integers.stencil_func_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015476, VkglTestCase_015476_1, VkglTestCase_015476_2);

#define VkglTestCase_015477_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015477_2 ".integers.stencil_func_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015477, VkglTestCase_015477_1, VkglTestCase_015477_2);

#define VkglTestCase_015478_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015478_2 "y.integers.stencil_func_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015478, VkglTestCase_015478_1, VkglTestCase_015478_2);

#define VkglTestCase_015479_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015479_2 "egers.stencil_func_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015479, VkglTestCase_015479_1, VkglTestCase_015479_2);

#define VkglTestCase_015480_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015480_2 "egers.stencil_func_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015480, VkglTestCase_015480_1, VkglTestCase_015480_2);

#define VkglTestCase_015481_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015481_2 "tegers.stencil_func_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015481, VkglTestCase_015481_1, VkglTestCase_015481_2);

#define VkglTestCase_015482_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015482_2 "rs.stencil_func_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015482, VkglTestCase_015482_1, VkglTestCase_015482_2);

#define VkglTestCase_015483_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015483_2 "rs.stencil_func_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015483, VkglTestCase_015483_1, VkglTestCase_015483_2);

#define VkglTestCase_015484_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015484_2 "ers.stencil_func_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015484, VkglTestCase_015484_1, VkglTestCase_015484_2);

#define VkglTestCase_015485_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015485_2 "rs.stencil_back_func_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015485, VkglTestCase_015485_1, VkglTestCase_015485_2);

#define VkglTestCase_015486_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015486_2 "rs.stencil_back_func_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015486, VkglTestCase_015486_1, VkglTestCase_015486_2);

#define VkglTestCase_015487_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015487_2 "ers.stencil_back_func_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015487, VkglTestCase_015487_1, VkglTestCase_015487_2);

#define VkglTestCase_015488_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015488_2 ".stencil_back_func_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015488, VkglTestCase_015488_1, VkglTestCase_015488_2);

#define VkglTestCase_015489_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015489_2 ".stencil_back_func_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015489, VkglTestCase_015489_1, VkglTestCase_015489_2);

#define VkglTestCase_015490_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015490_2 "s.stencil_back_func_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015490, VkglTestCase_015490_1, VkglTestCase_015490_2);

#define VkglTestCase_015491_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015491_2 "tegers.stencil_value_mask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015491, VkglTestCase_015491_1, VkglTestCase_015491_2);

#define VkglTestCase_015492_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015492_2 "tegers.stencil_value_mask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015492, VkglTestCase_015492_1, VkglTestCase_015492_2);

#define VkglTestCase_015493_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015493_2 "ntegers.stencil_value_mask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015493, VkglTestCase_015493_1, VkglTestCase_015493_2);

#define VkglTestCase_015494_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015494_2 "gers.stencil_back_value_mask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015494, VkglTestCase_015494_1, VkglTestCase_015494_2);

#define VkglTestCase_015495_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015495_2 "gers.stencil_back_value_mask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015495, VkglTestCase_015495_1, VkglTestCase_015495_2);

#define VkglTestCase_015496_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015496_2 "egers.stencil_back_value_mask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015496, VkglTestCase_015496_1, VkglTestCase_015496_2);

#define VkglTestCase_015497_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015497_2 "rs.stencil_value_mask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015497, VkglTestCase_015497_1, VkglTestCase_015497_2);

#define VkglTestCase_015498_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015498_2 "rs.stencil_value_mask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015498, VkglTestCase_015498_1, VkglTestCase_015498_2);

#define VkglTestCase_015499_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015499_2 "ers.stencil_value_mask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015499, VkglTestCase_015499_1, VkglTestCase_015499_2);

#define VkglTestCase_015500_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015500_2 "stencil_value_mask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015500, VkglTestCase_015500_1, VkglTestCase_015500_2);

#define VkglTestCase_015501_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015501_2 "stencil_value_mask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015501, VkglTestCase_015501_1, VkglTestCase_015501_2);

#define VkglTestCase_015502_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015502_2 ".stencil_value_mask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015502, VkglTestCase_015502_1, VkglTestCase_015502_2);

#define VkglTestCase_015503_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015503_2 "stencil_back_value_mask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015503, VkglTestCase_015503_1, VkglTestCase_015503_2);

#define VkglTestCase_015504_1 "dEQP-GLES2.functional.state_query.integers."
#define VkglTestCase_015504_2 "stencil_back_value_mask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015504, VkglTestCase_015504_1, VkglTestCase_015504_2);

#define VkglTestCase_015505_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015505_2 ".stencil_back_value_mask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015505, VkglTestCase_015505_1, VkglTestCase_015505_2);

#define VkglTestCase_015506_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015506_2 "encil_back_value_mask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015506, VkglTestCase_015506_1, VkglTestCase_015506_2);

#define VkglTestCase_015507_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015507_2 "encil_back_value_mask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015507, VkglTestCase_015507_1, VkglTestCase_015507_2);

#define VkglTestCase_015508_1 "dEQP-GLES2.functional.state_query.integers.s"
#define VkglTestCase_015508_2 "tencil_back_value_mask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015508, VkglTestCase_015508_1, VkglTestCase_015508_2);

#define VkglTestCase_015509_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015509_2 "ntegers.stencil_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015509, VkglTestCase_015509_1, VkglTestCase_015509_2);

#define VkglTestCase_015510_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015510_2 "ntegers.stencil_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015510, VkglTestCase_015510_1, VkglTestCase_015510_2);

#define VkglTestCase_015511_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015511_2 "integers.stencil_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015511, VkglTestCase_015511_1, VkglTestCase_015511_2);

#define VkglTestCase_015512_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015512_2 "gers.stencil_back_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015512, VkglTestCase_015512_1, VkglTestCase_015512_2);

#define VkglTestCase_015513_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015513_2 "gers.stencil_back_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015513, VkglTestCase_015513_1, VkglTestCase_015513_2);

#define VkglTestCase_015514_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015514_2 "egers.stencil_back_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015514, VkglTestCase_015514_1, VkglTestCase_015514_2);

#define VkglTestCase_015515_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015515_2 "rs.stencil_writemask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015515, VkglTestCase_015515_1, VkglTestCase_015515_2);

#define VkglTestCase_015516_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015516_2 "rs.stencil_writemask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015516, VkglTestCase_015516_1, VkglTestCase_015516_2);

#define VkglTestCase_015517_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015517_2 "ers.stencil_writemask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015517, VkglTestCase_015517_1, VkglTestCase_015517_2);

#define VkglTestCase_015518_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015518_2 ".stencil_writemask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015518, VkglTestCase_015518_1, VkglTestCase_015518_2);

#define VkglTestCase_015519_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015519_2 ".stencil_writemask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015519, VkglTestCase_015519_1, VkglTestCase_015519_2);

#define VkglTestCase_015520_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015520_2 "s.stencil_writemask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015520, VkglTestCase_015520_1, VkglTestCase_015520_2);

#define VkglTestCase_015521_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015521_2 ".stencil_back_writemask_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015521, VkglTestCase_015521_1, VkglTestCase_015521_2);

#define VkglTestCase_015522_1 "dEQP-GLES2.functional.state_query.integers"
#define VkglTestCase_015522_2 ".stencil_back_writemask_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015522, VkglTestCase_015522_1, VkglTestCase_015522_2);

#define VkglTestCase_015523_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015523_2 "s.stencil_back_writemask_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015523, VkglTestCase_015523_1, VkglTestCase_015523_2);

#define VkglTestCase_015524_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015524_2 "encil_back_writemask_separate_both_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015524, VkglTestCase_015524_1, VkglTestCase_015524_2);

#define VkglTestCase_015525_1 "dEQP-GLES2.functional.state_query.integers.st"
#define VkglTestCase_015525_2 "encil_back_writemask_separate_both_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015525, VkglTestCase_015525_1, VkglTestCase_015525_2);

#define VkglTestCase_015526_1 "dEQP-GLES2.functional.state_query.integers.s"
#define VkglTestCase_015526_2 "tencil_back_writemask_separate_both_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015526, VkglTestCase_015526_1, VkglTestCase_015526_2);

#define VkglTestCase_015527_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015527_2 "ntegers.unpack_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015527, VkglTestCase_015527_1, VkglTestCase_015527_2);

#define VkglTestCase_015528_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015528_2 "ntegers.unpack_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015528, VkglTestCase_015528_1, VkglTestCase_015528_2);

#define VkglTestCase_015529_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015529_2 "integers.unpack_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015529, VkglTestCase_015529_1, VkglTestCase_015529_2);

#define VkglTestCase_015530_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015530_2 "integers.pack_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015530, VkglTestCase_015530_1, VkglTestCase_015530_2);

#define VkglTestCase_015531_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015531_2 "integers.pack_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015531, VkglTestCase_015531_1, VkglTestCase_015531_2);

#define VkglTestCase_015532_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015532_2 ".integers.pack_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015532, VkglTestCase_015532_1, VkglTestCase_015532_2);

#define VkglTestCase_015533_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015533_2 ".integers.blend_src_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015533, VkglTestCase_015533_1, VkglTestCase_015533_2);

#define VkglTestCase_015534_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015534_2 ".integers.blend_src_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015534, VkglTestCase_015534_1, VkglTestCase_015534_2);

#define VkglTestCase_015535_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015535_2 "y.integers.blend_src_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015535, VkglTestCase_015535_1, VkglTestCase_015535_2);

#define VkglTestCase_015536_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015536_2 "gers.blend_src_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015536, VkglTestCase_015536_1, VkglTestCase_015536_2);

#define VkglTestCase_015537_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015537_2 "gers.blend_src_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015537, VkglTestCase_015537_1, VkglTestCase_015537_2);

#define VkglTestCase_015538_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015538_2 "egers.blend_src_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015538, VkglTestCase_015538_1, VkglTestCase_015538_2);

#define VkglTestCase_015539_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015539_2 "integers.blend_src_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015539, VkglTestCase_015539_1, VkglTestCase_015539_2);

#define VkglTestCase_015540_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015540_2 "integers.blend_src_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015540, VkglTestCase_015540_1, VkglTestCase_015540_2);

#define VkglTestCase_015541_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015541_2 ".integers.blend_src_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015541, VkglTestCase_015541_1, VkglTestCase_015541_2);

#define VkglTestCase_015542_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015542_2 "ers.blend_src_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015542, VkglTestCase_015542_1, VkglTestCase_015542_2);

#define VkglTestCase_015543_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015543_2 "ers.blend_src_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015543, VkglTestCase_015543_1, VkglTestCase_015543_2);

#define VkglTestCase_015544_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015544_2 "gers.blend_src_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015544, VkglTestCase_015544_1, VkglTestCase_015544_2);

#define VkglTestCase_015545_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015545_2 ".integers.blend_dst_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015545, VkglTestCase_015545_1, VkglTestCase_015545_2);

#define VkglTestCase_015546_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015546_2 ".integers.blend_dst_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015546, VkglTestCase_015546_1, VkglTestCase_015546_2);

#define VkglTestCase_015547_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015547_2 "y.integers.blend_dst_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015547, VkglTestCase_015547_1, VkglTestCase_015547_2);

#define VkglTestCase_015548_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015548_2 "gers.blend_dst_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015548, VkglTestCase_015548_1, VkglTestCase_015548_2);

#define VkglTestCase_015549_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015549_2 "gers.blend_dst_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015549, VkglTestCase_015549_1, VkglTestCase_015549_2);

#define VkglTestCase_015550_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015550_2 "egers.blend_dst_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015550, VkglTestCase_015550_1, VkglTestCase_015550_2);

#define VkglTestCase_015551_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015551_2 "integers.blend_dst_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015551, VkglTestCase_015551_1, VkglTestCase_015551_2);

#define VkglTestCase_015552_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015552_2 "integers.blend_dst_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015552, VkglTestCase_015552_1, VkglTestCase_015552_2);

#define VkglTestCase_015553_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015553_2 ".integers.blend_dst_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015553, VkglTestCase_015553_1, VkglTestCase_015553_2);

#define VkglTestCase_015554_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015554_2 "ers.blend_dst_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015554, VkglTestCase_015554_1, VkglTestCase_015554_2);

#define VkglTestCase_015555_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015555_2 "ers.blend_dst_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015555, VkglTestCase_015555_1, VkglTestCase_015555_2);

#define VkglTestCase_015556_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015556_2 "gers.blend_dst_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015556, VkglTestCase_015556_1, VkglTestCase_015556_2);

#define VkglTestCase_015557_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015557_2 "tegers.blend_equation_rgb_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015557, VkglTestCase_015557_1, VkglTestCase_015557_2);

#define VkglTestCase_015558_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015558_2 "tegers.blend_equation_rgb_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015558, VkglTestCase_015558_1, VkglTestCase_015558_2);

#define VkglTestCase_015559_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015559_2 "ntegers.blend_equation_rgb_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015559, VkglTestCase_015559_1, VkglTestCase_015559_2);

#define VkglTestCase_015560_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015560_2 "rs.blend_equation_rgb_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015560, VkglTestCase_015560_1, VkglTestCase_015560_2);

#define VkglTestCase_015561_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015561_2 "rs.blend_equation_rgb_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015561, VkglTestCase_015561_1, VkglTestCase_015561_2);

#define VkglTestCase_015562_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015562_2 "ers.blend_equation_rgb_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015562, VkglTestCase_015562_1, VkglTestCase_015562_2);

#define VkglTestCase_015563_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015563_2 "egers.blend_equation_alpha_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015563, VkglTestCase_015563_1, VkglTestCase_015563_2);

#define VkglTestCase_015564_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015564_2 "egers.blend_equation_alpha_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015564, VkglTestCase_015564_1, VkglTestCase_015564_2);

#define VkglTestCase_015565_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015565_2 "tegers.blend_equation_alpha_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015565, VkglTestCase_015565_1, VkglTestCase_015565_2);

#define VkglTestCase_015566_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015566_2 "s.blend_equation_alpha_separate_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015566, VkglTestCase_015566_1, VkglTestCase_015566_2);

#define VkglTestCase_015567_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015567_2 "s.blend_equation_alpha_separate_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015567, VkglTestCase_015567_1, VkglTestCase_015567_2);

#define VkglTestCase_015568_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015568_2 "rs.blend_equation_alpha_separate_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015568, VkglTestCase_015568_1, VkglTestCase_015568_2);

#define VkglTestCase_015569_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015569_2 "rs.compressed_texture_formats_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015569, VkglTestCase_015569_1, VkglTestCase_015569_2);

#define VkglTestCase_015570_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015570_2 "rs.compressed_texture_formats_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015570, VkglTestCase_015570_1, VkglTestCase_015570_2);

#define VkglTestCase_015571_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015571_2 "ers.compressed_texture_formats_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015571, VkglTestCase_015571_1, VkglTestCase_015571_2);

#define VkglTestCase_015572_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015572_2 "egers.shader_binary_formats_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015572, VkglTestCase_015572_1, VkglTestCase_015572_2);

#define VkglTestCase_015573_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015573_2 "egers.shader_binary_formats_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015573, VkglTestCase_015573_1, VkglTestCase_015573_2);

#define VkglTestCase_015574_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015574_2 "tegers.shader_binary_formats_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015574, VkglTestCase_015574_1, VkglTestCase_015574_2);

#define VkglTestCase_015575_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015575_2 "egers.array_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015575, VkglTestCase_015575_1, VkglTestCase_015575_2);

#define VkglTestCase_015576_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015576_2 "egers.array_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015576, VkglTestCase_015576_1, VkglTestCase_015576_2);

#define VkglTestCase_015577_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015577_2 "tegers.array_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015577, VkglTestCase_015577_1, VkglTestCase_015577_2);

#define VkglTestCase_015578_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015578_2 "s.element_array_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015578, VkglTestCase_015578_1, VkglTestCase_015578_2);

#define VkglTestCase_015579_1 "dEQP-GLES2.functional.state_query.integer"
#define VkglTestCase_015579_2 "s.element_array_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015579, VkglTestCase_015579_1, VkglTestCase_015579_2);

#define VkglTestCase_015580_1 "dEQP-GLES2.functional.state_query.intege"
#define VkglTestCase_015580_2 "rs.element_array_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015580, VkglTestCase_015580_1, VkglTestCase_015580_2);

#define VkglTestCase_015581_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015581_2 "gers.current_program_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015581, VkglTestCase_015581_1, VkglTestCase_015581_2);

#define VkglTestCase_015582_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015582_2 "gers.current_program_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015582, VkglTestCase_015582_1, VkglTestCase_015582_2);

#define VkglTestCase_015583_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015583_2 "egers.current_program_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015583, VkglTestCase_015583_1, VkglTestCase_015583_2);

#define VkglTestCase_015584_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015584_2 "tegers.stencil_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015584, VkglTestCase_015584_1, VkglTestCase_015584_2);

#define VkglTestCase_015585_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015585_2 "tegers.stencil_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015585, VkglTestCase_015585_1, VkglTestCase_015585_2);

#define VkglTestCase_015586_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015586_2 "ntegers.stencil_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015586, VkglTestCase_015586_1, VkglTestCase_015586_2);

#define VkglTestCase_015587_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015587_2 "integers.active_texture_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015587, VkglTestCase_015587_1, VkglTestCase_015587_2);

#define VkglTestCase_015588_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015588_2 "integers.active_texture_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015588, VkglTestCase_015588_1, VkglTestCase_015588_2);

#define VkglTestCase_015589_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015589_2 ".integers.active_texture_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015589, VkglTestCase_015589_1, VkglTestCase_015589_2);

#define VkglTestCase_015590_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015590_2 "egers.renderbuffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015590, VkglTestCase_015590_1, VkglTestCase_015590_2);

#define VkglTestCase_015591_1 "dEQP-GLES2.functional.state_query.int"
#define VkglTestCase_015591_2 "egers.renderbuffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015591, VkglTestCase_015591_1, VkglTestCase_015591_2);

#define VkglTestCase_015592_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015592_2 "tegers.renderbuffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015592, VkglTestCase_015592_1, VkglTestCase_015592_2);

#define VkglTestCase_015593_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015593_2 "tegers.texture_binding_2d_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015593, VkglTestCase_015593_1, VkglTestCase_015593_2);

#define VkglTestCase_015594_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015594_2 "tegers.texture_binding_2d_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015594, VkglTestCase_015594_1, VkglTestCase_015594_2);

#define VkglTestCase_015595_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015595_2 "ntegers.texture_binding_2d_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015595, VkglTestCase_015595_1, VkglTestCase_015595_2);

#define VkglTestCase_015596_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015596_2 "ers.texture_binding_cube_map_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015596, VkglTestCase_015596_1, VkglTestCase_015596_2);

#define VkglTestCase_015597_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015597_2 "ers.texture_binding_cube_map_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015597, VkglTestCase_015597_1, VkglTestCase_015597_2);

#define VkglTestCase_015598_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015598_2 "gers.texture_binding_cube_map_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015598, VkglTestCase_015598_1, VkglTestCase_015598_2);

#define VkglTestCase_015599_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015599_2 "tegers.framebuffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015599, VkglTestCase_015599_1, VkglTestCase_015599_2);

#define VkglTestCase_015600_1 "dEQP-GLES2.functional.state_query.in"
#define VkglTestCase_015600_2 "tegers.framebuffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015600, VkglTestCase_015600_1, VkglTestCase_015600_2);

#define VkglTestCase_015601_1 "dEQP-GLES2.functional.state_query.i"
#define VkglTestCase_015601_2 "ntegers.framebuffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015601, VkglTestCase_015601_1, VkglTestCase_015601_2);

#define VkglTestCase_015602_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015602_2 "ers.implementation_color_read_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015602, VkglTestCase_015602_1, VkglTestCase_015602_2);

#define VkglTestCase_015603_1 "dEQP-GLES2.functional.state_query.integ"
#define VkglTestCase_015603_2 "ers.implementation_color_read_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015603, VkglTestCase_015603_1, VkglTestCase_015603_2);

#define VkglTestCase_015604_1 "dEQP-GLES2.functional.state_query.inte"
#define VkglTestCase_015604_2 "gers.implementation_color_read_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015604, VkglTestCase_015604_1, VkglTestCase_015604_2);
