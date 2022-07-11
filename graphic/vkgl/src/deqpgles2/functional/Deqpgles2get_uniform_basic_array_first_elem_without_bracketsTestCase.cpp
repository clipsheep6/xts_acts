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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014532_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014532_2 "t_uniform.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014532, VkglTestCase_014532_1, VkglTestCase_014532_2);

#define VkglTestCase_014533_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_014533_2 "_uniform.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014533, VkglTestCase_014533_1, VkglTestCase_014533_2);

#define VkglTestCase_014534_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014534_2 "et_uniform.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014534, VkglTestCase_014534_1, VkglTestCase_014534_2);

#define VkglTestCase_014535_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014535_2 "et_uniform.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014535, VkglTestCase_014535_1, VkglTestCase_014535_2);

#define VkglTestCase_014536_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014536_2 "t_uniform.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014536, VkglTestCase_014536_1, VkglTestCase_014536_2);

#define VkglTestCase_014537_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_014537_2 "get_uniform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014537, VkglTestCase_014537_1, VkglTestCase_014537_2);

#define VkglTestCase_014538_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014538_2 "et_uniform.basic_array_first_elem_without_brackets.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014538, VkglTestCase_014538_1, VkglTestCase_014538_2);

#define VkglTestCase_014539_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014539_2 "t_uniform.basic_array_first_elem_without_brackets.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014539, VkglTestCase_014539_1, VkglTestCase_014539_2);

#define VkglTestCase_014540_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_014540_2 "get_uniform.basic_array_first_elem_without_brackets.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014540, VkglTestCase_014540_1, VkglTestCase_014540_2);

#define VkglTestCase_014541_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014541_2 "et_uniform.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014541, VkglTestCase_014541_1, VkglTestCase_014541_2);

#define VkglTestCase_014542_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014542_2 "t_uniform.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014542, VkglTestCase_014542_1, VkglTestCase_014542_2);

#define VkglTestCase_014543_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer."
#define VkglTestCase_014543_2 "get_uniform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014543, VkglTestCase_014543_1, VkglTestCase_014543_2);

#define VkglTestCase_014544_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.ge"
#define VkglTestCase_014544_2 "t_uniform.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014544, VkglTestCase_014544_1, VkglTestCase_014544_2);

#define VkglTestCase_014545_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_014545_2 "_uniform.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014545, VkglTestCase_014545_1, VkglTestCase_014545_2);

#define VkglTestCase_014546_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.g"
#define VkglTestCase_014546_2 "et_uniform.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014546, VkglTestCase_014546_1, VkglTestCase_014546_2);

#define VkglTestCase_014547_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_014547_2 "iform.basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014547, VkglTestCase_014547_1, VkglTestCase_014547_2);

#define VkglTestCase_014548_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_014548_2 "form.basic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014548, VkglTestCase_014548_1, VkglTestCase_014548_2);

#define VkglTestCase_014549_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_014549_2 "niform.basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014549, VkglTestCase_014549_1, VkglTestCase_014549_2);

#define VkglTestCase_014550_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_014550_2 "niform.basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014550, VkglTestCase_014550_1, VkglTestCase_014550_2);

#define VkglTestCase_014551_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_014551_2 "iform.basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014551, VkglTestCase_014551_1, VkglTestCase_014551_2);

#define VkglTestCase_014552_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_"
#define VkglTestCase_014552_2 "uniform.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014552, VkglTestCase_014552_1, VkglTestCase_014552_2);

#define VkglTestCase_014553_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_014553_2 "form.basic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014553, VkglTestCase_014553_1, VkglTestCase_014553_2);

#define VkglTestCase_014554_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_unif"
#define VkglTestCase_014554_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014554, VkglTestCase_014554_1, VkglTestCase_014554_2);

#define VkglTestCase_014555_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_014555_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014555, VkglTestCase_014555_1, VkglTestCase_014555_2);

#define VkglTestCase_014556_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_un"
#define VkglTestCase_014556_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014556, VkglTestCase_014556_1, VkglTestCase_014556_2);

#define VkglTestCase_014557_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_uni"
#define VkglTestCase_014557_2 "form.basic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014557, VkglTestCase_014557_1, VkglTestCase_014557_2);

#define VkglTestCase_014558_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_014558_2 "niform.basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014558, VkglTestCase_014558_1, VkglTestCase_014558_2);

#define VkglTestCase_014559_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_"
#define VkglTestCase_014559_2 "uniform.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014559, VkglTestCase_014559_1, VkglTestCase_014559_2);

#define VkglTestCase_014560_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get_u"
#define VkglTestCase_014560_2 "niform.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014560, VkglTestCase_014560_1, VkglTestCase_014560_2);

#define VkglTestCase_014561_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer.get"
#define VkglTestCase_014561_2 "_uniform.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014561, VkglTestCase_014561_1, VkglTestCase_014561_2);

#define VkglTestCase_014852_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_014852_2 "_uniform.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014852, VkglTestCase_014852_1, VkglTestCase_014852_2);

#define VkglTestCase_014853_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_014853_2 "uniform.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014853, VkglTestCase_014853_1, VkglTestCase_014853_2);

#define VkglTestCase_014854_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_014854_2 "t_uniform.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014854, VkglTestCase_014854_1, VkglTestCase_014854_2);

#define VkglTestCase_014855_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_014855_2 "t_uniform.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014855, VkglTestCase_014855_1, VkglTestCase_014855_2);

#define VkglTestCase_014856_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_014856_2 "_uniform.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014856, VkglTestCase_014856_1, VkglTestCase_014856_2);

#define VkglTestCase_014857_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_014857_2 "et_uniform.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014857, VkglTestCase_014857_1, VkglTestCase_014857_2);

#define VkglTestCase_014858_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_014858_2 "t_uniform.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014858, VkglTestCase_014858_1, VkglTestCase_014858_2);

#define VkglTestCase_014859_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_014859_2 "_uniform.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014859, VkglTestCase_014859_1, VkglTestCase_014859_2);

#define VkglTestCase_014860_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.g"
#define VkglTestCase_014860_2 "et_uniform.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014860, VkglTestCase_014860_1, VkglTestCase_014860_2);

#define VkglTestCase_014861_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get"
#define VkglTestCase_014861_2 "_uniform.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014861, VkglTestCase_014861_1, VkglTestCase_014861_2);

#define VkglTestCase_014862_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_014862_2 "uniform.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014862, VkglTestCase_014862_1, VkglTestCase_014862_2);

#define VkglTestCase_014863_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.ge"
#define VkglTestCase_014863_2 "t_uniform.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014863, VkglTestCase_014863_1, VkglTestCase_014863_2);

#define VkglTestCase_014864_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_014864_2 "form.basic_array_first_elem_without_brackets.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014864, VkglTestCase_014864_1, VkglTestCase_014864_2);

#define VkglTestCase_014865_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_014865_2 "orm.basic_array_first_elem_without_brackets.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014865, VkglTestCase_014865_1, VkglTestCase_014865_2);

#define VkglTestCase_014866_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_014866_2 "iform.basic_array_first_elem_without_brackets.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014866, VkglTestCase_014866_1, VkglTestCase_014866_2);

#define VkglTestCase_014867_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_014867_2 "iform.basic_array_first_elem_without_brackets.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014867, VkglTestCase_014867_1, VkglTestCase_014867_2);

#define VkglTestCase_014868_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_014868_2 "form.basic_array_first_elem_without_brackets.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014868, VkglTestCase_014868_1, VkglTestCase_014868_2);

#define VkglTestCase_014869_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_u"
#define VkglTestCase_014869_2 "niform.basic_array_first_elem_without_brackets.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014869, VkglTestCase_014869_1, VkglTestCase_014869_2);

#define VkglTestCase_014870_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_014870_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014870, VkglTestCase_014870_1, VkglTestCase_014870_2);

#define VkglTestCase_014871_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_unifo"
#define VkglTestCase_014871_2 "rm.basic_array_first_elem_without_brackets.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014871, VkglTestCase_014871_1, VkglTestCase_014871_2);

#define VkglTestCase_014872_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_014872_2 "form.basic_array_first_elem_without_brackets.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014872, VkglTestCase_014872_1, VkglTestCase_014872_2);

#define VkglTestCase_014873_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_uni"
#define VkglTestCase_014873_2 "form.basic_array_first_elem_without_brackets.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014873, VkglTestCase_014873_1, VkglTestCase_014873_2);

#define VkglTestCase_014874_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_unif"
#define VkglTestCase_014874_2 "orm.basic_array_first_elem_without_brackets.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014874, VkglTestCase_014874_1, VkglTestCase_014874_2);

#define VkglTestCase_014875_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_014875_2 "iform.basic_array_first_elem_without_brackets.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014875, VkglTestCase_014875_1, VkglTestCase_014875_2);

#define VkglTestCase_014876_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_u"
#define VkglTestCase_014876_2 "niform.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014876, VkglTestCase_014876_1, VkglTestCase_014876_2);

#define VkglTestCase_014877_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_un"
#define VkglTestCase_014877_2 "iform.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014877, VkglTestCase_014877_1, VkglTestCase_014877_2);

#define VkglTestCase_014878_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value.get_"
#define VkglTestCase_014878_2 "uniform.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014878, VkglTestCase_014878_1, VkglTestCase_014878_2);
