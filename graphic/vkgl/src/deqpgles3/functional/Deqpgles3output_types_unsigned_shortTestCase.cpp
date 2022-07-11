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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033163_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033163_2 ".output_types.unsigned_short.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033163, VkglTestCase_033163_1, VkglTestCase_033163_2);

#define VkglTestCase_033164_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033164_2 "output_types.unsigned_short.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033164, VkglTestCase_033164_1, VkglTestCase_033164_2);

#define VkglTestCase_033165_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033165_2 ".output_types.unsigned_short.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033165, VkglTestCase_033165_1, VkglTestCase_033165_2);

#define VkglTestCase_033166_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033166_2 "output_types.unsigned_short.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033166, VkglTestCase_033166_1, VkglTestCase_033166_2);

#define VkglTestCase_033167_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033167_2 ".output_types.unsigned_short.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033167, VkglTestCase_033167_1, VkglTestCase_033167_2);

#define VkglTestCase_033168_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033168_2 "output_types.unsigned_short.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033168, VkglTestCase_033168_1, VkglTestCase_033168_2);

#define VkglTestCase_033169_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033169_2 ".output_types.unsigned_short.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033169, VkglTestCase_033169_1, VkglTestCase_033169_2);

#define VkglTestCase_033170_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033170_2 "output_types.unsigned_short.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033170, VkglTestCase_033170_1, VkglTestCase_033170_2);

#define VkglTestCase_033171_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033171_2 ".output_types.unsigned_short.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033171, VkglTestCase_033171_1, VkglTestCase_033171_2);

#define VkglTestCase_033172_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033172_2 "output_types.unsigned_short.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033172, VkglTestCase_033172_1, VkglTestCase_033172_2);

#define VkglTestCase_033173_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033173_2 ".output_types.unsigned_short.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033173, VkglTestCase_033173_1, VkglTestCase_033173_2);

#define VkglTestCase_033174_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033174_2 "output_types.unsigned_short.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033174, VkglTestCase_033174_1, VkglTestCase_033174_2);

#define VkglTestCase_033175_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033175_2 ".output_types.unsigned_short.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033175, VkglTestCase_033175_1, VkglTestCase_033175_2);

#define VkglTestCase_033176_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033176_2 "output_types.unsigned_short.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033176, VkglTestCase_033176_1, VkglTestCase_033176_2);

#define VkglTestCase_033177_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033177_2 ".output_types.unsigned_short.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033177, VkglTestCase_033177_1, VkglTestCase_033177_2);

#define VkglTestCase_033178_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033178_2 "output_types.unsigned_short.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033178, VkglTestCase_033178_1, VkglTestCase_033178_2);

#define VkglTestCase_033179_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033179_2 ".output_types.unsigned_short.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033179, VkglTestCase_033179_1, VkglTestCase_033179_2);

#define VkglTestCase_033180_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033180_2 "output_types.unsigned_short.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033180, VkglTestCase_033180_1, VkglTestCase_033180_2);

#define VkglTestCase_033181_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033181_2 ".output_types.unsigned_short.components2_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033181, VkglTestCase_033181_1, VkglTestCase_033181_2);

#define VkglTestCase_033182_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033182_2 "output_types.unsigned_short.components2_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033182, VkglTestCase_033182_1, VkglTestCase_033182_2);

#define VkglTestCase_033183_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033183_2 ".output_types.unsigned_short.components3_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033183, VkglTestCase_033183_1, VkglTestCase_033183_2);

#define VkglTestCase_033184_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033184_2 "output_types.unsigned_short.components3_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033184, VkglTestCase_033184_1, VkglTestCase_033184_2);

#define VkglTestCase_033185_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033185_2 ".output_types.unsigned_short.components4_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033185, VkglTestCase_033185_1, VkglTestCase_033185_2);

#define VkglTestCase_033186_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033186_2 "output_types.unsigned_short.components4_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033186, VkglTestCase_033186_1, VkglTestCase_033186_2);

#define VkglTestCase_033187_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033187_2 ".output_types.unsigned_short.components2_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033187, VkglTestCase_033187_1, VkglTestCase_033187_2);

#define VkglTestCase_033188_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033188_2 "output_types.unsigned_short.components2_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033188, VkglTestCase_033188_1, VkglTestCase_033188_2);

#define VkglTestCase_033189_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033189_2 ".output_types.unsigned_short.components3_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033189, VkglTestCase_033189_1, VkglTestCase_033189_2);

#define VkglTestCase_033190_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033190_2 "output_types.unsigned_short.components3_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033190, VkglTestCase_033190_1, VkglTestCase_033190_2);

#define VkglTestCase_033191_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033191_2 ".output_types.unsigned_short.components4_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033191, VkglTestCase_033191_1, VkglTestCase_033191_2);

#define VkglTestCase_033192_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033192_2 "output_types.unsigned_short.components4_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033192, VkglTestCase_033192_1, VkglTestCase_033192_2);

#define VkglTestCase_033193_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033193_2 ".output_types.unsigned_short.components2_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033193, VkglTestCase_033193_1, VkglTestCase_033193_2);

#define VkglTestCase_033194_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033194_2 "output_types.unsigned_short.components2_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033194, VkglTestCase_033194_1, VkglTestCase_033194_2);

#define VkglTestCase_033195_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033195_2 ".output_types.unsigned_short.components3_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033195, VkglTestCase_033195_1, VkglTestCase_033195_2);

#define VkglTestCase_033196_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033196_2 "output_types.unsigned_short.components3_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033196, VkglTestCase_033196_1, VkglTestCase_033196_2);

#define VkglTestCase_033197_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033197_2 ".output_types.unsigned_short.components4_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033197, VkglTestCase_033197_1, VkglTestCase_033197_2);

#define VkglTestCase_033198_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033198_2 "output_types.unsigned_short.components4_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033198, VkglTestCase_033198_1, VkglTestCase_033198_2);
