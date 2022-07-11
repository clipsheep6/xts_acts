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

#define VkglTestCase_042143_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042143_2 "api.vertex_array.vertex_attribf"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042143, VkglTestCase_042143_1, VkglTestCase_042143_2);

#define VkglTestCase_042144_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042144_2 "api.vertex_array.vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042144, VkglTestCase_042144_1, VkglTestCase_042144_2);

#define VkglTestCase_042145_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042145_2 "api.vertex_array.vertex_attribi4"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042145, VkglTestCase_042145_1, VkglTestCase_042145_2);

#define VkglTestCase_042146_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042146_2 "pi.vertex_array.vertex_attribi4v"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042146, VkglTestCase_042146_1, VkglTestCase_042146_2);

#define VkglTestCase_042147_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042147_2 ".vertex_array.vertex_attrib_pointer"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042147, VkglTestCase_042147_1, VkglTestCase_042147_2);

#define VkglTestCase_042148_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042148_2 "vertex_array.vertex_attrib_i_pointer"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042148, VkglTestCase_042148_1, VkglTestCase_042148_2);

#define VkglTestCase_042149_1 "dEQP-GLES3.functional.negative_api.ve"
#define VkglTestCase_042149_2 "rtex_array.enable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042149, VkglTestCase_042149_1, VkglTestCase_042149_2);

#define VkglTestCase_042150_1 "dEQP-GLES3.functional.negative_api.ve"
#define VkglTestCase_042150_2 "rtex_array.disable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042150, VkglTestCase_042150_1, VkglTestCase_042150_2);

#define VkglTestCase_042151_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042151_2 "pi.vertex_array.gen_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042151, VkglTestCase_042151_1, VkglTestCase_042151_2);

#define VkglTestCase_042152_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042152_2 "pi.vertex_array.bind_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042152, VkglTestCase_042152_1, VkglTestCase_042152_2);

#define VkglTestCase_042153_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042153_2 ".vertex_array.delete_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042153, VkglTestCase_042153_1, VkglTestCase_042153_2);

#define VkglTestCase_042154_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042154_2 ".vertex_array.vertex_attrib_divisor"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042154, VkglTestCase_042154_1, VkglTestCase_042154_2);

#define VkglTestCase_042155_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042155_2 "e_api.vertex_array.draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042155, VkglTestCase_042155_1, VkglTestCase_042155_2);

#define VkglTestCase_042156_1 "dEQP-GLES3.functional.negative_api.ve"
#define VkglTestCase_042156_2 "rtex_array.draw_arrays_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042156, VkglTestCase_042156_1, VkglTestCase_042156_2);

#define VkglTestCase_042157_1 "dEQP-GLES3.functional.negative_api.verte"
#define VkglTestCase_042157_2 "x_array.draw_arrays_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042157, VkglTestCase_042157_1, VkglTestCase_042157_2);

#define VkglTestCase_042158_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042158_2 "_api.vertex_array.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042158, VkglTestCase_042158_1, VkglTestCase_042158_2);

#define VkglTestCase_042159_1 "dEQP-GLES3.functional.negative_api.ver"
#define VkglTestCase_042159_2 "tex_array.draw_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042159, VkglTestCase_042159_1, VkglTestCase_042159_2);

#define VkglTestCase_042160_1 "dEQP-GLES3.functional.negative_api.vertex"
#define VkglTestCase_042160_2 "_array.draw_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042160, VkglTestCase_042160_1, VkglTestCase_042160_2);

#define VkglTestCase_042161_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042161_2 ".vertex_array.draw_arrays_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042161, VkglTestCase_042161_1, VkglTestCase_042161_2);

#define VkglTestCase_042162_1 "dEQP-GLES3.functional.negative_api.vertex_"
#define VkglTestCase_042162_2 "array.draw_arrays_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042162, VkglTestCase_042162_1, VkglTestCase_042162_2);

#define VkglTestCase_042163_1 "dEQP-GLES3.functional.negative_api.vertex_arr"
#define VkglTestCase_042163_2 "ay.draw_arrays_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042163, VkglTestCase_042163_1, VkglTestCase_042163_2);

#define VkglTestCase_042164_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042164_2 "vertex_array.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042164, VkglTestCase_042164_1, VkglTestCase_042164_2);

#define VkglTestCase_042165_1 "dEQP-GLES3.functional.negative_api.vertex_a"
#define VkglTestCase_042165_2 "rray.draw_elements_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042165, VkglTestCase_042165_1, VkglTestCase_042165_2);

#define VkglTestCase_042166_1 "dEQP-GLES3.functional.negative_api.vertex_arra"
#define VkglTestCase_042166_2 "y.draw_elements_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042166, VkglTestCase_042166_1, VkglTestCase_042166_2);

#define VkglTestCase_042167_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042167_2 "i.vertex_array.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042167, VkglTestCase_042167_1, VkglTestCase_042167_2);

#define VkglTestCase_042168_1 "dEQP-GLES3.functional.negative_api.vertex"
#define VkglTestCase_042168_2 "_array.draw_range_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042168, VkglTestCase_042168_1, VkglTestCase_042168_2);

#define VkglTestCase_042169_1 "dEQP-GLES3.functional.negative_api.vertex_ar"
#define VkglTestCase_042169_2 "ray.draw_range_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042169, VkglTestCase_042169_1, VkglTestCase_042169_2);
