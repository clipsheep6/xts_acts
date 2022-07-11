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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016720_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016720_2 "form.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016720, VkglTestCase_016720_1, VkglTestCase_016720_2);

#define VkglTestCase_016721_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
#define VkglTestCase_016721_2 "orm.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016721, VkglTestCase_016721_1, VkglTestCase_016721_2);

#define VkglTestCase_016722_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016722_2 "iform.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016722, VkglTestCase_016722_1, VkglTestCase_016722_2);

#define VkglTestCase_016723_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016723_2 "iform.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016723, VkglTestCase_016723_1, VkglTestCase_016723_2);

#define VkglTestCase_016724_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016724_2 "form.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016724, VkglTestCase_016724_1, VkglTestCase_016724_2);

#define VkglTestCase_016725_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
#define VkglTestCase_016725_2 "niform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016725, VkglTestCase_016725_1, VkglTestCase_016725_2);

#define VkglTestCase_016726_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016726_2 "iform.basic_array_first_elem_without_brackets.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016726, VkglTestCase_016726_1, VkglTestCase_016726_2);

#define VkglTestCase_016727_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016727_2 "form.basic_array_first_elem_without_brackets.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016727, VkglTestCase_016727_1, VkglTestCase_016727_2);

#define VkglTestCase_016728_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
#define VkglTestCase_016728_2 "niform.basic_array_first_elem_without_brackets.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016728, VkglTestCase_016728_1, VkglTestCase_016728_2);

#define VkglTestCase_016729_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016729_2 ".basic_array_first_elem_without_brackets.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016729, VkglTestCase_016729_1, VkglTestCase_016729_2);

#define VkglTestCase_016730_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016730_2 "basic_array_first_elem_without_brackets.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016730, VkglTestCase_016730_1, VkglTestCase_016730_2);

#define VkglTestCase_016731_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016731_2 "m.basic_array_first_elem_without_brackets.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016731, VkglTestCase_016731_1, VkglTestCase_016731_2);

#define VkglTestCase_016732_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016732_2 "iform.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016732, VkglTestCase_016732_1, VkglTestCase_016732_2);

#define VkglTestCase_016733_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016733_2 "form.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016733, VkglTestCase_016733_1, VkglTestCase_016733_2);

#define VkglTestCase_016734_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
#define VkglTestCase_016734_2 "niform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016734, VkglTestCase_016734_1, VkglTestCase_016734_2);

#define VkglTestCase_016735_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016735_2 "form.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016735, VkglTestCase_016735_1, VkglTestCase_016735_2);

#define VkglTestCase_016736_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
#define VkglTestCase_016736_2 "orm.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016736, VkglTestCase_016736_1, VkglTestCase_016736_2);

#define VkglTestCase_016737_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016737_2 "iform.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016737, VkglTestCase_016737_1, VkglTestCase_016737_2);

#define VkglTestCase_016738_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016738_2 "iform.basic_array_first_elem_without_brackets.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016738, VkglTestCase_016738_1, VkglTestCase_016738_2);

#define VkglTestCase_016739_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016739_2 "form.basic_array_first_elem_without_brackets.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016739, VkglTestCase_016739_1, VkglTestCase_016739_2);

#define VkglTestCase_016740_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_u"
#define VkglTestCase_016740_2 "niform.basic_array_first_elem_without_brackets.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016740, VkglTestCase_016740_1, VkglTestCase_016740_2);

#define VkglTestCase_016741_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uni"
#define VkglTestCase_016741_2 "form.basic_array_first_elem_without_brackets.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016741, VkglTestCase_016741_1, VkglTestCase_016741_2);

#define VkglTestCase_016742_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
#define VkglTestCase_016742_2 "orm.basic_array_first_elem_without_brackets.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016742, VkglTestCase_016742_1, VkglTestCase_016742_2);

#define VkglTestCase_016743_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_un"
#define VkglTestCase_016743_2 "iform.basic_array_first_elem_without_brackets.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016743, VkglTestCase_016743_1, VkglTestCase_016743_2);

#define VkglTestCase_016744_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016744_2 ".basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016744, VkglTestCase_016744_1, VkglTestCase_016744_2);

#define VkglTestCase_016745_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016745_2 "basic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016745, VkglTestCase_016745_1, VkglTestCase_016745_2);

#define VkglTestCase_016746_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016746_2 "m.basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016746, VkglTestCase_016746_1, VkglTestCase_016746_2);

#define VkglTestCase_016747_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016747_2 "m.basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016747, VkglTestCase_016747_1, VkglTestCase_016747_2);

#define VkglTestCase_016748_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016748_2 ".basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016748, VkglTestCase_016748_1, VkglTestCase_016748_2);

#define VkglTestCase_016749_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifo"
#define VkglTestCase_016749_2 "rm.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016749, VkglTestCase_016749_1, VkglTestCase_016749_2);

#define VkglTestCase_016750_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016750_2 ".basic_array_first_elem_without_brackets.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016750, VkglTestCase_016750_1, VkglTestCase_016750_2);

#define VkglTestCase_016751_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016751_2 "basic_array_first_elem_without_brackets.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016751, VkglTestCase_016751_1, VkglTestCase_016751_2);

#define VkglTestCase_016752_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016752_2 "m.basic_array_first_elem_without_brackets.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016752, VkglTestCase_016752_1, VkglTestCase_016752_2);

#define VkglTestCase_016753_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016753_2 "basic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016753, VkglTestCase_016753_1, VkglTestCase_016753_2);

#define VkglTestCase_016754_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform.b"
#define VkglTestCase_016754_2 "asic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016754, VkglTestCase_016754_1, VkglTestCase_016754_2);

#define VkglTestCase_016755_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016755_2 ".basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016755, VkglTestCase_016755_1, VkglTestCase_016755_2);

#define VkglTestCase_016756_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016756_2 ".basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016756, VkglTestCase_016756_1, VkglTestCase_016756_2);

#define VkglTestCase_016757_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016757_2 "basic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016757, VkglTestCase_016757_1, VkglTestCase_016757_2);

#define VkglTestCase_016758_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016758_2 "m.basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016758, VkglTestCase_016758_1, VkglTestCase_016758_2);

#define VkglTestCase_016759_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform"
#define VkglTestCase_016759_2 ".basic_array_first_elem_without_brackets.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016759, VkglTestCase_016759_1, VkglTestCase_016759_2);

#define VkglTestCase_016760_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_uniform."
#define VkglTestCase_016760_2 "basic_array_first_elem_without_brackets.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016760, VkglTestCase_016760_1, VkglTestCase_016760_2);

#define VkglTestCase_016761_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016761_2 "m.basic_array_first_elem_without_brackets.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016761, VkglTestCase_016761_1, VkglTestCase_016761_2);

#define VkglTestCase_016762_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifo"
#define VkglTestCase_016762_2 "rm.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016762, VkglTestCase_016762_1, VkglTestCase_016762_2);

#define VkglTestCase_016763_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unifor"
#define VkglTestCase_016763_2 "m.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016763, VkglTestCase_016763_1, VkglTestCase_016763_2);

#define VkglTestCase_016764_1 "dEQP-GLES31.functional.program_uniform.by_pointer.get_unif"
#define VkglTestCase_016764_2 "orm.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016764, VkglTestCase_016764_1, VkglTestCase_016764_2);

#define VkglTestCase_017185_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017185_2 "orm.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017185, VkglTestCase_017185_1, VkglTestCase_017185_2);

#define VkglTestCase_017186_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
#define VkglTestCase_017186_2 "rm.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017186, VkglTestCase_017186_1, VkglTestCase_017186_2);

#define VkglTestCase_017187_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017187_2 "form.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017187, VkglTestCase_017187_1, VkglTestCase_017187_2);

#define VkglTestCase_017188_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017188_2 "form.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017188, VkglTestCase_017188_1, VkglTestCase_017188_2);

#define VkglTestCase_017189_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017189_2 "orm.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017189, VkglTestCase_017189_1, VkglTestCase_017189_2);

#define VkglTestCase_017190_1 "dEQP-GLES31.functional.program_uniform.by_value.get_un"
#define VkglTestCase_017190_2 "iform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017190, VkglTestCase_017190_1, VkglTestCase_017190_2);

#define VkglTestCase_017191_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017191_2 "form.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017191, VkglTestCase_017191_1, VkglTestCase_017191_2);

#define VkglTestCase_017192_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017192_2 "orm.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017192, VkglTestCase_017192_1, VkglTestCase_017192_2);

#define VkglTestCase_017193_1 "dEQP-GLES31.functional.program_uniform.by_value.get_un"
#define VkglTestCase_017193_2 "iform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017193, VkglTestCase_017193_1, VkglTestCase_017193_2);

#define VkglTestCase_017194_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017194_2 "orm.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017194, VkglTestCase_017194_1, VkglTestCase_017194_2);

#define VkglTestCase_017195_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
#define VkglTestCase_017195_2 "rm.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017195, VkglTestCase_017195_1, VkglTestCase_017195_2);

#define VkglTestCase_017196_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017196_2 "form.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017196, VkglTestCase_017196_1, VkglTestCase_017196_2);

#define VkglTestCase_017197_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017197_2 "form.basic_array_first_elem_without_brackets.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017197, VkglTestCase_017197_1, VkglTestCase_017197_2);

#define VkglTestCase_017198_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017198_2 "orm.basic_array_first_elem_without_brackets.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017198, VkglTestCase_017198_1, VkglTestCase_017198_2);

#define VkglTestCase_017199_1 "dEQP-GLES31.functional.program_uniform.by_value.get_un"
#define VkglTestCase_017199_2 "iform.basic_array_first_elem_without_brackets.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017199, VkglTestCase_017199_1, VkglTestCase_017199_2);

#define VkglTestCase_017200_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unif"
#define VkglTestCase_017200_2 "orm.basic_array_first_elem_without_brackets.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017200, VkglTestCase_017200_1, VkglTestCase_017200_2);

#define VkglTestCase_017201_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
#define VkglTestCase_017201_2 "rm.basic_array_first_elem_without_brackets.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017201, VkglTestCase_017201_1, VkglTestCase_017201_2);

#define VkglTestCase_017202_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uni"
#define VkglTestCase_017202_2 "form.basic_array_first_elem_without_brackets.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017202, VkglTestCase_017202_1, VkglTestCase_017202_2);

#define VkglTestCase_017203_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017203_2 "basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017203, VkglTestCase_017203_1, VkglTestCase_017203_2);

#define VkglTestCase_017204_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
#define VkglTestCase_017204_2 "asic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017204, VkglTestCase_017204_1, VkglTestCase_017204_2);

#define VkglTestCase_017205_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017205_2 ".basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017205, VkglTestCase_017205_1, VkglTestCase_017205_2);

#define VkglTestCase_017206_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017206_2 ".basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017206, VkglTestCase_017206_1, VkglTestCase_017206_2);

#define VkglTestCase_017207_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017207_2 "basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017207, VkglTestCase_017207_1, VkglTestCase_017207_2);

#define VkglTestCase_017208_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifor"
#define VkglTestCase_017208_2 "m.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017208, VkglTestCase_017208_1, VkglTestCase_017208_2);

#define VkglTestCase_017209_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017209_2 "basic_array_first_elem_without_brackets.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017209, VkglTestCase_017209_1, VkglTestCase_017209_2);

#define VkglTestCase_017210_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
#define VkglTestCase_017210_2 "asic_array_first_elem_without_brackets.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017210, VkglTestCase_017210_1, VkglTestCase_017210_2);

#define VkglTestCase_017211_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017211_2 ".basic_array_first_elem_without_brackets.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017211, VkglTestCase_017211_1, VkglTestCase_017211_2);

#define VkglTestCase_017212_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
#define VkglTestCase_017212_2 "asic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017212, VkglTestCase_017212_1, VkglTestCase_017212_2);

#define VkglTestCase_017213_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.ba"
#define VkglTestCase_017213_2 "sic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017213, VkglTestCase_017213_1, VkglTestCase_017213_2);

#define VkglTestCase_017214_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017214_2 "basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017214, VkglTestCase_017214_1, VkglTestCase_017214_2);

#define VkglTestCase_017215_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017215_2 "basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017215, VkglTestCase_017215_1, VkglTestCase_017215_2);

#define VkglTestCase_017216_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
#define VkglTestCase_017216_2 "asic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017216, VkglTestCase_017216_1, VkglTestCase_017216_2);

#define VkglTestCase_017217_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017217_2 ".basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017217, VkglTestCase_017217_1, VkglTestCase_017217_2);

#define VkglTestCase_017218_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform."
#define VkglTestCase_017218_2 "basic_array_first_elem_without_brackets.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017218, VkglTestCase_017218_1, VkglTestCase_017218_2);

#define VkglTestCase_017219_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform.b"
#define VkglTestCase_017219_2 "asic_array_first_elem_without_brackets.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017219, VkglTestCase_017219_1, VkglTestCase_017219_2);

#define VkglTestCase_017220_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017220_2 ".basic_array_first_elem_without_brackets.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017220, VkglTestCase_017220_1, VkglTestCase_017220_2);

#define VkglTestCase_017221_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifor"
#define VkglTestCase_017221_2 "m.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017221, VkglTestCase_017221_1, VkglTestCase_017221_2);

#define VkglTestCase_017222_1 "dEQP-GLES31.functional.program_uniform.by_value.get_uniform"
#define VkglTestCase_017222_2 ".basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017222, VkglTestCase_017222_1, VkglTestCase_017222_2);

#define VkglTestCase_017223_1 "dEQP-GLES31.functional.program_uniform.by_value.get_unifo"
#define VkglTestCase_017223_2 "rm.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017223, VkglTestCase_017223_1, VkglTestCase_017223_2);
