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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037210_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037210_2 ".initial.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037210, VkglTestCase_037210_1, VkglTestCase_037210_2);

#define VkglTestCase_037211_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037211_2 "initial.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037211, VkglTestCase_037211_1, VkglTestCase_037211_2);

#define VkglTestCase_037212_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037212_2 "e.initial.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037212, VkglTestCase_037212_1, VkglTestCase_037212_2);

#define VkglTestCase_037213_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037213_2 ".initial.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037213, VkglTestCase_037213_1, VkglTestCase_037213_2);

#define VkglTestCase_037214_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037214_2 "initial.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037214, VkglTestCase_037214_1, VkglTestCase_037214_2);

#define VkglTestCase_037215_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037215_2 "e.initial.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037215, VkglTestCase_037215_1, VkglTestCase_037215_2);

#define VkglTestCase_037216_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037216_2 ".initial.render.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037216, VkglTestCase_037216_1, VkglTestCase_037216_2);

#define VkglTestCase_037217_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037217_2 "initial.render.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037217, VkglTestCase_037217_1, VkglTestCase_037217_2);

#define VkglTestCase_037218_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037218_2 "e.initial.render.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037218, VkglTestCase_037218_1, VkglTestCase_037218_2);

#define VkglTestCase_037219_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037219_2 "e.initial.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037219, VkglTestCase_037219_1, VkglTestCase_037219_2);

#define VkglTestCase_037220_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037220_2 ".initial.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037220, VkglTestCase_037220_1, VkglTestCase_037220_2);

#define VkglTestCase_037221_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_037221_2 "ue.initial.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037221, VkglTestCase_037221_1, VkglTestCase_037221_2);

#define VkglTestCase_037222_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037222_2 ".initial.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037222, VkglTestCase_037222_1, VkglTestCase_037222_2);

#define VkglTestCase_037223_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037223_2 "initial.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037223, VkglTestCase_037223_1, VkglTestCase_037223_2);

#define VkglTestCase_037224_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037224_2 "e.initial.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037224, VkglTestCase_037224_1, VkglTestCase_037224_2);

#define VkglTestCase_037225_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037225_2 ".initial.render.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037225, VkglTestCase_037225_1, VkglTestCase_037225_2);

#define VkglTestCase_037226_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037226_2 "initial.render.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037226, VkglTestCase_037226_1, VkglTestCase_037226_2);

#define VkglTestCase_037227_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037227_2 "e.initial.render.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037227, VkglTestCase_037227_1, VkglTestCase_037227_2);

#define VkglTestCase_037228_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037228_2 ".initial.render.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037228, VkglTestCase_037228_1, VkglTestCase_037228_2);

#define VkglTestCase_037229_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037229_2 "initial.render.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037229, VkglTestCase_037229_1, VkglTestCase_037229_2);

#define VkglTestCase_037230_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037230_2 "e.initial.render.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037230, VkglTestCase_037230_1, VkglTestCase_037230_2);

#define VkglTestCase_037231_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037231_2 ".initial.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037231, VkglTestCase_037231_1, VkglTestCase_037231_2);

#define VkglTestCase_037232_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037232_2 "initial.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037232, VkglTestCase_037232_1, VkglTestCase_037232_2);

#define VkglTestCase_037233_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037233_2 "e.initial.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037233, VkglTestCase_037233_1, VkglTestCase_037233_2);

#define VkglTestCase_037234_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_037234_2 ".initial.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037234, VkglTestCase_037234_1, VkglTestCase_037234_2);

#define VkglTestCase_037235_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037235_2 "initial.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037235, VkglTestCase_037235_1, VkglTestCase_037235_2);

#define VkglTestCase_037236_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_037236_2 "e.initial.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037236, VkglTestCase_037236_1, VkglTestCase_037236_2);

#define VkglTestCase_037237_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037237_2 "nitial.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037237, VkglTestCase_037237_1, VkglTestCase_037237_2);

#define VkglTestCase_037238_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037238_2 "itial.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037238, VkglTestCase_037238_1, VkglTestCase_037238_2);

#define VkglTestCase_037239_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037239_2 "initial.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037239, VkglTestCase_037239_1, VkglTestCase_037239_2);

#define VkglTestCase_037720_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037720_2 "ned.by_pointer.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037720, VkglTestCase_037720_1, VkglTestCase_037720_2);

#define VkglTestCase_037721_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037721_2 "ed.by_pointer.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037721, VkglTestCase_037721_1, VkglTestCase_037721_2);

#define VkglTestCase_037722_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037722_2 "gned.by_pointer.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037722, VkglTestCase_037722_1, VkglTestCase_037722_2);

#define VkglTestCase_037723_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037723_2 "ned.by_pointer.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037723, VkglTestCase_037723_1, VkglTestCase_037723_2);

#define VkglTestCase_037724_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037724_2 "ed.by_pointer.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037724, VkglTestCase_037724_1, VkglTestCase_037724_2);

#define VkglTestCase_037725_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037725_2 "gned.by_pointer.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037725, VkglTestCase_037725_1, VkglTestCase_037725_2);

#define VkglTestCase_037726_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037726_2 "ned.by_pointer.render.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037726, VkglTestCase_037726_1, VkglTestCase_037726_2);

#define VkglTestCase_037727_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037727_2 "ed.by_pointer.render.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037727, VkglTestCase_037727_1, VkglTestCase_037727_2);

#define VkglTestCase_037728_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037728_2 "gned.by_pointer.render.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037728, VkglTestCase_037728_1, VkglTestCase_037728_2);

#define VkglTestCase_037729_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037729_2 "y_pointer.render.basic_array.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037729, VkglTestCase_037729_1, VkglTestCase_037729_2);

#define VkglTestCase_037730_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037730_2 "_pointer.render.basic_array.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037730, VkglTestCase_037730_1, VkglTestCase_037730_2);

#define VkglTestCase_037731_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037731_2 "by_pointer.render.basic_array.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037731, VkglTestCase_037731_1, VkglTestCase_037731_2);

#define VkglTestCase_037732_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037732_2 "gned.by_pointer.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037732, VkglTestCase_037732_1, VkglTestCase_037732_2);

#define VkglTestCase_037733_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037733_2 "ned.by_pointer.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037733, VkglTestCase_037733_1, VkglTestCase_037733_2);

#define VkglTestCase_037734_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037734_2 "igned.by_pointer.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037734, VkglTestCase_037734_1, VkglTestCase_037734_2);

#define VkglTestCase_037735_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037735_2 "ned.by_pointer.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037735, VkglTestCase_037735_1, VkglTestCase_037735_2);

#define VkglTestCase_037736_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037736_2 "ed.by_pointer.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037736, VkglTestCase_037736_1, VkglTestCase_037736_2);

#define VkglTestCase_037737_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037737_2 "gned.by_pointer.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037737, VkglTestCase_037737_1, VkglTestCase_037737_2);

#define VkglTestCase_037738_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037738_2 "ned.by_pointer.render.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037738, VkglTestCase_037738_1, VkglTestCase_037738_2);

#define VkglTestCase_037739_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037739_2 "ed.by_pointer.render.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037739, VkglTestCase_037739_1, VkglTestCase_037739_2);

#define VkglTestCase_037740_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037740_2 "gned.by_pointer.render.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037740, VkglTestCase_037740_1, VkglTestCase_037740_2);

#define VkglTestCase_037741_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037741_2 "ned.by_pointer.render.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037741, VkglTestCase_037741_1, VkglTestCase_037741_2);

#define VkglTestCase_037742_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037742_2 "ed.by_pointer.render.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037742, VkglTestCase_037742_1, VkglTestCase_037742_2);

#define VkglTestCase_037743_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037743_2 "gned.by_pointer.render.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037743, VkglTestCase_037743_1, VkglTestCase_037743_2);

#define VkglTestCase_037744_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037744_2 "ned.by_pointer.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037744, VkglTestCase_037744_1, VkglTestCase_037744_2);

#define VkglTestCase_037745_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037745_2 "ed.by_pointer.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037745, VkglTestCase_037745_1, VkglTestCase_037745_2);

#define VkglTestCase_037746_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037746_2 "gned.by_pointer.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037746, VkglTestCase_037746_1, VkglTestCase_037746_2);

#define VkglTestCase_037747_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037747_2 "ned.by_pointer.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037747, VkglTestCase_037747_1, VkglTestCase_037747_2);

#define VkglTestCase_037748_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037748_2 "ed.by_pointer.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037748, VkglTestCase_037748_1, VkglTestCase_037748_2);

#define VkglTestCase_037749_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037749_2 "gned.by_pointer.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037749, VkglTestCase_037749_1, VkglTestCase_037749_2);

#define VkglTestCase_037750_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037750_2 "d.by_pointer.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037750, VkglTestCase_037750_1, VkglTestCase_037750_2);

#define VkglTestCase_037751_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037751_2 ".by_pointer.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037751, VkglTestCase_037751_1, VkglTestCase_037751_2);

#define VkglTestCase_037752_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037752_2 "ed.by_pointer.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037752, VkglTestCase_037752_1, VkglTestCase_037752_2);

#define VkglTestCase_038110_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038110_2 "gned.by_value.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038110, VkglTestCase_038110_1, VkglTestCase_038110_2);

#define VkglTestCase_038111_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038111_2 "ned.by_value.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038111, VkglTestCase_038111_1, VkglTestCase_038111_2);

#define VkglTestCase_038112_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038112_2 "igned.by_value.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038112, VkglTestCase_038112_1, VkglTestCase_038112_2);

#define VkglTestCase_038113_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038113_2 "gned.by_value.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038113, VkglTestCase_038113_1, VkglTestCase_038113_2);

#define VkglTestCase_038114_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038114_2 "ned.by_value.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038114, VkglTestCase_038114_1, VkglTestCase_038114_2);

#define VkglTestCase_038115_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038115_2 "igned.by_value.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038115, VkglTestCase_038115_1, VkglTestCase_038115_2);

#define VkglTestCase_038116_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038116_2 "igned.by_value.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038116, VkglTestCase_038116_1, VkglTestCase_038116_2);

#define VkglTestCase_038117_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038117_2 "gned.by_value.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038117, VkglTestCase_038117_1, VkglTestCase_038117_2);

#define VkglTestCase_038118_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038118_2 "signed.by_value.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038118, VkglTestCase_038118_1, VkglTestCase_038118_2);

#define VkglTestCase_038119_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038119_2 "gned.by_value.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038119, VkglTestCase_038119_1, VkglTestCase_038119_2);

#define VkglTestCase_038120_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038120_2 "ned.by_value.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038120, VkglTestCase_038120_1, VkglTestCase_038120_2);

#define VkglTestCase_038121_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038121_2 "igned.by_value.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038121, VkglTestCase_038121_1, VkglTestCase_038121_2);

#define VkglTestCase_038122_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038122_2 "gned.by_value.render.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038122, VkglTestCase_038122_1, VkglTestCase_038122_2);

#define VkglTestCase_038123_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038123_2 "ned.by_value.render.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038123, VkglTestCase_038123_1, VkglTestCase_038123_2);

#define VkglTestCase_038124_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038124_2 "igned.by_value.render.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038124, VkglTestCase_038124_1, VkglTestCase_038124_2);

#define VkglTestCase_038125_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038125_2 "gned.by_value.render.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038125, VkglTestCase_038125_1, VkglTestCase_038125_2);

#define VkglTestCase_038126_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038126_2 "ned.by_value.render.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038126, VkglTestCase_038126_1, VkglTestCase_038126_2);

#define VkglTestCase_038127_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038127_2 "igned.by_value.render.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038127, VkglTestCase_038127_1, VkglTestCase_038127_2);

#define VkglTestCase_038128_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038128_2 "gned.by_value.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038128, VkglTestCase_038128_1, VkglTestCase_038128_2);

#define VkglTestCase_038129_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038129_2 "ned.by_value.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038129, VkglTestCase_038129_1, VkglTestCase_038129_2);

#define VkglTestCase_038130_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038130_2 "igned.by_value.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038130, VkglTestCase_038130_1, VkglTestCase_038130_2);

#define VkglTestCase_038131_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_038131_2 "gned.by_value.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038131, VkglTestCase_038131_1, VkglTestCase_038131_2);

#define VkglTestCase_038132_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038132_2 "ned.by_value.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038132, VkglTestCase_038132_1, VkglTestCase_038132_2);

#define VkglTestCase_038133_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_038133_2 "igned.by_value.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038133, VkglTestCase_038133_1, VkglTestCase_038133_2);

#define VkglTestCase_038134_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038134_2 "ed.by_value.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038134, VkglTestCase_038134_1, VkglTestCase_038134_2);

#define VkglTestCase_038135_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038135_2 "d.by_value.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038135, VkglTestCase_038135_1, VkglTestCase_038135_2);

#define VkglTestCase_038136_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038136_2 "ned.by_value.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038136, VkglTestCase_038136_1, VkglTestCase_038136_2);
