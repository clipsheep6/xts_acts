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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022630_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022630_2 "rogram_output.type.separable_vertex.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022630, VkglTestCase_022630_1, VkglTestCase_022630_2);

#define VkglTestCase_022631_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022631_2 "program_output.type.separable_vertex.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022631, VkglTestCase_022631_1, VkglTestCase_022631_2);

#define VkglTestCase_022632_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022632_2 "program_output.type.separable_vertex.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022632, VkglTestCase_022632_1, VkglTestCase_022632_2);

#define VkglTestCase_022633_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022633_2 "program_output.type.separable_vertex.struct.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022633, VkglTestCase_022633_1, VkglTestCase_022633_2);

#define VkglTestCase_022634_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022634_2 "program_output.type.separable_vertex.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022634, VkglTestCase_022634_1, VkglTestCase_022634_2);

#define VkglTestCase_022635_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022635_2 "program_output.type.separable_vertex.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022635, VkglTestCase_022635_1, VkglTestCase_022635_2);

#define VkglTestCase_022636_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022636_2 "rogram_output.type.separable_vertex.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022636, VkglTestCase_022636_1, VkglTestCase_022636_2);

#define VkglTestCase_022637_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022637_2 "rogram_output.type.separable_vertex.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022637, VkglTestCase_022637_1, VkglTestCase_022637_2);

#define VkglTestCase_022638_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022638_2 "rogram_output.type.separable_vertex.struct.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022638, VkglTestCase_022638_1, VkglTestCase_022638_2);

#define VkglTestCase_022639_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022639_2 "rogram_output.type.separable_vertex.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022639, VkglTestCase_022639_1, VkglTestCase_022639_2);

#define VkglTestCase_022640_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022640_2 "rogram_output.type.separable_vertex.struct.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022640, VkglTestCase_022640_1, VkglTestCase_022640_2);

#define VkglTestCase_022641_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022641_2 "rogram_output.type.separable_vertex.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022641, VkglTestCase_022641_1, VkglTestCase_022641_2);

#define VkglTestCase_022642_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022642_2 "program_output.type.separable_vertex.struct.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022642, VkglTestCase_022642_1, VkglTestCase_022642_2);

#define VkglTestCase_022643_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022643_2 "rogram_output.type.separable_vertex.struct.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022643, VkglTestCase_022643_1, VkglTestCase_022643_2);

#define VkglTestCase_022644_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022644_2 "rogram_output.type.separable_vertex.struct.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022644, VkglTestCase_022644_1, VkglTestCase_022644_2);

#define VkglTestCase_022645_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022645_2 "rogram_output.type.separable_vertex.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022645, VkglTestCase_022645_1, VkglTestCase_022645_2);

#define VkglTestCase_022646_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022646_2 "program_output.type.separable_vertex.struct.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022646, VkglTestCase_022646_1, VkglTestCase_022646_2);

#define VkglTestCase_022647_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022647_2 "rogram_output.type.separable_vertex.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022647, VkglTestCase_022647_1, VkglTestCase_022647_2);

#define VkglTestCase_022648_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022648_2 "rogram_output.type.separable_vertex.struct.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022648, VkglTestCase_022648_1, VkglTestCase_022648_2);

#define VkglTestCase_022649_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022649_2 "rogram_output.type.separable_vertex.struct.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022649, VkglTestCase_022649_1, VkglTestCase_022649_2);

#define VkglTestCase_022650_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022650_2 "program_output.type.separable_vertex.struct.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022650, VkglTestCase_022650_1, VkglTestCase_022650_2);

#define VkglTestCase_023313_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023313_2 "rm_feedback_varying.type.separable_vertex.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023313, VkglTestCase_023313_1, VkglTestCase_023313_2);

#define VkglTestCase_023314_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023314_2 "orm_feedback_varying.type.separable_vertex.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023314, VkglTestCase_023314_1, VkglTestCase_023314_2);

#define VkglTestCase_023315_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023315_2 "orm_feedback_varying.type.separable_vertex.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023315, VkglTestCase_023315_1, VkglTestCase_023315_2);

#define VkglTestCase_023316_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023316_2 "orm_feedback_varying.type.separable_vertex.struct.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023316, VkglTestCase_023316_1, VkglTestCase_023316_2);

#define VkglTestCase_023317_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023317_2 "orm_feedback_varying.type.separable_vertex.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023317, VkglTestCase_023317_1, VkglTestCase_023317_2);

#define VkglTestCase_023318_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023318_2 "orm_feedback_varying.type.separable_vertex.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023318, VkglTestCase_023318_1, VkglTestCase_023318_2);

#define VkglTestCase_023319_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023319_2 "rm_feedback_varying.type.separable_vertex.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023319, VkglTestCase_023319_1, VkglTestCase_023319_2);

#define VkglTestCase_023320_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023320_2 "rm_feedback_varying.type.separable_vertex.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023320, VkglTestCase_023320_1, VkglTestCase_023320_2);

#define VkglTestCase_023321_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023321_2 "rm_feedback_varying.type.separable_vertex.struct.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023321, VkglTestCase_023321_1, VkglTestCase_023321_2);

#define VkglTestCase_023322_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023322_2 "rm_feedback_varying.type.separable_vertex.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023322, VkglTestCase_023322_1, VkglTestCase_023322_2);

#define VkglTestCase_023323_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023323_2 "rm_feedback_varying.type.separable_vertex.struct.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023323, VkglTestCase_023323_1, VkglTestCase_023323_2);

#define VkglTestCase_023324_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023324_2 "rm_feedback_varying.type.separable_vertex.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023324, VkglTestCase_023324_1, VkglTestCase_023324_2);

#define VkglTestCase_023325_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023325_2 "orm_feedback_varying.type.separable_vertex.struct.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023325, VkglTestCase_023325_1, VkglTestCase_023325_2);

#define VkglTestCase_023326_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023326_2 "rm_feedback_varying.type.separable_vertex.struct.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023326, VkglTestCase_023326_1, VkglTestCase_023326_2);

#define VkglTestCase_023327_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023327_2 "rm_feedback_varying.type.separable_vertex.struct.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023327, VkglTestCase_023327_1, VkglTestCase_023327_2);

#define VkglTestCase_023328_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023328_2 "rm_feedback_varying.type.separable_vertex.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023328, VkglTestCase_023328_1, VkglTestCase_023328_2);

#define VkglTestCase_023329_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023329_2 "orm_feedback_varying.type.separable_vertex.struct.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023329, VkglTestCase_023329_1, VkglTestCase_023329_2);

#define VkglTestCase_023330_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023330_2 "rm_feedback_varying.type.separable_vertex.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023330, VkglTestCase_023330_1, VkglTestCase_023330_2);

#define VkglTestCase_023331_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023331_2 "rm_feedback_varying.type.separable_vertex.struct.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023331, VkglTestCase_023331_1, VkglTestCase_023331_2);

#define VkglTestCase_023332_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023332_2 "rm_feedback_varying.type.separable_vertex.struct.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023332, VkglTestCase_023332_1, VkglTestCase_023332_2);

#define VkglTestCase_023333_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023333_2 "orm_feedback_varying.type.separable_vertex.struct.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023333, VkglTestCase_023333_1, VkglTestCase_023333_2);
