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

#define VkglTestCase_033199_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033199_2 "e.output_types.unsigned_byte.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033199, VkglTestCase_033199_1, VkglTestCase_033199_2);

#define VkglTestCase_033200_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033200_2 ".output_types.unsigned_byte.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033200, VkglTestCase_033200_1, VkglTestCase_033200_2);

#define VkglTestCase_033201_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033201_2 "e.output_types.unsigned_byte.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033201, VkglTestCase_033201_1, VkglTestCase_033201_2);

#define VkglTestCase_033202_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033202_2 ".output_types.unsigned_byte.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033202, VkglTestCase_033202_1, VkglTestCase_033202_2);

#define VkglTestCase_033203_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033203_2 "e.output_types.unsigned_byte.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033203, VkglTestCase_033203_1, VkglTestCase_033203_2);

#define VkglTestCase_033204_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033204_2 ".output_types.unsigned_byte.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033204, VkglTestCase_033204_1, VkglTestCase_033204_2);

#define VkglTestCase_033205_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033205_2 "e.output_types.unsigned_byte.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033205, VkglTestCase_033205_1, VkglTestCase_033205_2);

#define VkglTestCase_033206_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033206_2 ".output_types.unsigned_byte.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033206, VkglTestCase_033206_1, VkglTestCase_033206_2);

#define VkglTestCase_033207_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033207_2 "e.output_types.unsigned_byte.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033207, VkglTestCase_033207_1, VkglTestCase_033207_2);

#define VkglTestCase_033208_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033208_2 ".output_types.unsigned_byte.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033208, VkglTestCase_033208_1, VkglTestCase_033208_2);

#define VkglTestCase_033209_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033209_2 "e.output_types.unsigned_byte.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033209, VkglTestCase_033209_1, VkglTestCase_033209_2);

#define VkglTestCase_033210_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033210_2 ".output_types.unsigned_byte.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033210, VkglTestCase_033210_1, VkglTestCase_033210_2);

#define VkglTestCase_033211_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033211_2 "e.output_types.unsigned_byte.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033211, VkglTestCase_033211_1, VkglTestCase_033211_2);

#define VkglTestCase_033212_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033212_2 ".output_types.unsigned_byte.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033212, VkglTestCase_033212_1, VkglTestCase_033212_2);

#define VkglTestCase_033213_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033213_2 "e.output_types.unsigned_byte.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033213, VkglTestCase_033213_1, VkglTestCase_033213_2);

#define VkglTestCase_033214_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033214_2 ".output_types.unsigned_byte.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033214, VkglTestCase_033214_1, VkglTestCase_033214_2);

#define VkglTestCase_033215_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033215_2 "e.output_types.unsigned_byte.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033215, VkglTestCase_033215_1, VkglTestCase_033215_2);

#define VkglTestCase_033216_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033216_2 ".output_types.unsigned_byte.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033216, VkglTestCase_033216_1, VkglTestCase_033216_2);

#define VkglTestCase_033217_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033217_2 ".output_types.unsigned_byte.components2_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033217, VkglTestCase_033217_1, VkglTestCase_033217_2);

#define VkglTestCase_033218_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033218_2 "output_types.unsigned_byte.components2_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033218, VkglTestCase_033218_1, VkglTestCase_033218_2);

#define VkglTestCase_033219_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033219_2 ".output_types.unsigned_byte.components3_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033219, VkglTestCase_033219_1, VkglTestCase_033219_2);

#define VkglTestCase_033220_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033220_2 "output_types.unsigned_byte.components3_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033220, VkglTestCase_033220_1, VkglTestCase_033220_2);

#define VkglTestCase_033221_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033221_2 ".output_types.unsigned_byte.components4_uvec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033221, VkglTestCase_033221_1, VkglTestCase_033221_2);

#define VkglTestCase_033222_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033222_2 "output_types.unsigned_byte.components4_uvec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033222, VkglTestCase_033222_1, VkglTestCase_033222_2);

#define VkglTestCase_033223_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033223_2 ".output_types.unsigned_byte.components2_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033223, VkglTestCase_033223_1, VkglTestCase_033223_2);

#define VkglTestCase_033224_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033224_2 "output_types.unsigned_byte.components2_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033224, VkglTestCase_033224_1, VkglTestCase_033224_2);

#define VkglTestCase_033225_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033225_2 ".output_types.unsigned_byte.components3_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033225, VkglTestCase_033225_1, VkglTestCase_033225_2);

#define VkglTestCase_033226_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033226_2 "output_types.unsigned_byte.components3_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033226, VkglTestCase_033226_1, VkglTestCase_033226_2);

#define VkglTestCase_033227_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033227_2 ".output_types.unsigned_byte.components4_uvec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033227, VkglTestCase_033227_1, VkglTestCase_033227_2);

#define VkglTestCase_033228_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033228_2 "output_types.unsigned_byte.components4_uvec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033228, VkglTestCase_033228_1, VkglTestCase_033228_2);

#define VkglTestCase_033229_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033229_2 ".output_types.unsigned_byte.components2_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033229, VkglTestCase_033229_1, VkglTestCase_033229_2);

#define VkglTestCase_033230_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033230_2 "output_types.unsigned_byte.components2_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033230, VkglTestCase_033230_1, VkglTestCase_033230_2);

#define VkglTestCase_033231_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033231_2 ".output_types.unsigned_byte.components3_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033231, VkglTestCase_033231_1, VkglTestCase_033231_2);

#define VkglTestCase_033232_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033232_2 "output_types.unsigned_byte.components3_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033232, VkglTestCase_033232_1, VkglTestCase_033232_2);

#define VkglTestCase_033233_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033233_2 ".output_types.unsigned_byte.components4_uvec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033233, VkglTestCase_033233_1, VkglTestCase_033233_2);

#define VkglTestCase_033234_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute."
#define VkglTestCase_033234_2 "output_types.unsigned_byte.components4_uvec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033234, VkglTestCase_033234_1, VkglTestCase_033234_2);
