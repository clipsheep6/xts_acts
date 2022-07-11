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

#define VkglTestCase_014212_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014212_2 "itial.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014212, VkglTestCase_014212_1, VkglTestCase_014212_2);

#define VkglTestCase_014213_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014213_2 "tial.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014213, VkglTestCase_014213_1, VkglTestCase_014213_2);

#define VkglTestCase_014214_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014214_2 "nitial.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014214, VkglTestCase_014214_1, VkglTestCase_014214_2);

#define VkglTestCase_014215_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014215_2 "nitial.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014215, VkglTestCase_014215_1, VkglTestCase_014215_2);

#define VkglTestCase_014216_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014216_2 "itial.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014216, VkglTestCase_014216_1, VkglTestCase_014216_2);

#define VkglTestCase_014217_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014217_2 "initial.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014217, VkglTestCase_014217_1, VkglTestCase_014217_2);

#define VkglTestCase_014218_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014218_2 "nitial.get_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014218, VkglTestCase_014218_1, VkglTestCase_014218_2);

#define VkglTestCase_014219_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014219_2 "itial.get_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014219, VkglTestCase_014219_1, VkglTestCase_014219_2);

#define VkglTestCase_014220_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014220_2 "initial.get_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014220, VkglTestCase_014220_1, VkglTestCase_014220_2);

#define VkglTestCase_014221_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014221_2 "nitial.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014221, VkglTestCase_014221_1, VkglTestCase_014221_2);

#define VkglTestCase_014222_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014222_2 "itial.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014222, VkglTestCase_014222_1, VkglTestCase_014222_2);

#define VkglTestCase_014223_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014223_2 "initial.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014223, VkglTestCase_014223_1, VkglTestCase_014223_2);

#define VkglTestCase_014224_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014224_2 "itial.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014224, VkglTestCase_014224_1, VkglTestCase_014224_2);

#define VkglTestCase_014225_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014225_2 "tial.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014225, VkglTestCase_014225_1, VkglTestCase_014225_2);

#define VkglTestCase_014226_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014226_2 "nitial.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014226, VkglTestCase_014226_1, VkglTestCase_014226_2);

#define VkglTestCase_014227_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014227_2 "l.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014227, VkglTestCase_014227_1, VkglTestCase_014227_2);

#define VkglTestCase_014228_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014228_2 ".get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014228, VkglTestCase_014228_1, VkglTestCase_014228_2);

#define VkglTestCase_014229_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014229_2 "al.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014229, VkglTestCase_014229_1, VkglTestCase_014229_2);

#define VkglTestCase_014230_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014230_2 "al.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014230, VkglTestCase_014230_1, VkglTestCase_014230_2);

#define VkglTestCase_014231_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014231_2 "l.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014231, VkglTestCase_014231_1, VkglTestCase_014231_2);

#define VkglTestCase_014232_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014232_2 "ial.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014232, VkglTestCase_014232_1, VkglTestCase_014232_2);

#define VkglTestCase_014233_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014233_2 ".get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014233, VkglTestCase_014233_1, VkglTestCase_014233_2);

#define VkglTestCase_014234_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014234_2 "get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014234, VkglTestCase_014234_1, VkglTestCase_014234_2);

#define VkglTestCase_014235_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014235_2 "l.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014235, VkglTestCase_014235_1, VkglTestCase_014235_2);

#define VkglTestCase_014236_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014236_2 "l.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014236, VkglTestCase_014236_1, VkglTestCase_014236_2);

#define VkglTestCase_014237_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014237_2 ".get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014237, VkglTestCase_014237_1, VkglTestCase_014237_2);

#define VkglTestCase_014238_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014238_2 "al.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014238, VkglTestCase_014238_1, VkglTestCase_014238_2);

#define VkglTestCase_014239_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014239_2 "ial.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014239, VkglTestCase_014239_1, VkglTestCase_014239_2);

#define VkglTestCase_014240_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014240_2 "al.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014240, VkglTestCase_014240_1, VkglTestCase_014240_2);

#define VkglTestCase_014241_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014241_2 "tial.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014241, VkglTestCase_014241_1, VkglTestCase_014241_2);

#define VkglTestCase_014502_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014502_2 ".by_pointer.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014502, VkglTestCase_014502_1, VkglTestCase_014502_2);

#define VkglTestCase_014503_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014503_2 "by_pointer.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014503, VkglTestCase_014503_1, VkglTestCase_014503_2);

#define VkglTestCase_014504_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014504_2 "d.by_pointer.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014504, VkglTestCase_014504_1, VkglTestCase_014504_2);

#define VkglTestCase_014505_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014505_2 "d.by_pointer.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014505, VkglTestCase_014505_1, VkglTestCase_014505_2);

#define VkglTestCase_014506_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014506_2 ".by_pointer.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014506, VkglTestCase_014506_1, VkglTestCase_014506_2);

#define VkglTestCase_014507_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014507_2 "ed.by_pointer.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014507, VkglTestCase_014507_1, VkglTestCase_014507_2);

#define VkglTestCase_014508_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014508_2 "d.by_pointer.get_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014508, VkglTestCase_014508_1, VkglTestCase_014508_2);

#define VkglTestCase_014509_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014509_2 ".by_pointer.get_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014509, VkglTestCase_014509_1, VkglTestCase_014509_2);

#define VkglTestCase_014510_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014510_2 "ed.by_pointer.get_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014510, VkglTestCase_014510_1, VkglTestCase_014510_2);

#define VkglTestCase_014511_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014511_2 "d.by_pointer.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014511, VkglTestCase_014511_1, VkglTestCase_014511_2);

#define VkglTestCase_014512_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014512_2 ".by_pointer.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014512, VkglTestCase_014512_1, VkglTestCase_014512_2);

#define VkglTestCase_014513_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014513_2 "ed.by_pointer.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014513, VkglTestCase_014513_1, VkglTestCase_014513_2);

#define VkglTestCase_014514_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014514_2 ".by_pointer.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014514, VkglTestCase_014514_1, VkglTestCase_014514_2);

#define VkglTestCase_014515_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014515_2 "by_pointer.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014515, VkglTestCase_014515_1, VkglTestCase_014515_2);

#define VkglTestCase_014516_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014516_2 "d.by_pointer.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014516, VkglTestCase_014516_1, VkglTestCase_014516_2);

#define VkglTestCase_014517_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014517_2 "pointer.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014517, VkglTestCase_014517_1, VkglTestCase_014517_2);

#define VkglTestCase_014518_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014518_2 "ointer.get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014518, VkglTestCase_014518_1, VkglTestCase_014518_2);

#define VkglTestCase_014519_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014519_2 "_pointer.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014519, VkglTestCase_014519_1, VkglTestCase_014519_2);

#define VkglTestCase_014520_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014520_2 "_pointer.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014520, VkglTestCase_014520_1, VkglTestCase_014520_2);

#define VkglTestCase_014521_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014521_2 "pointer.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014521, VkglTestCase_014521_1, VkglTestCase_014521_2);

#define VkglTestCase_014522_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014522_2 "y_pointer.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014522, VkglTestCase_014522_1, VkglTestCase_014522_2);

#define VkglTestCase_014523_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014523_2 "ointer.get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014523, VkglTestCase_014523_1, VkglTestCase_014523_2);

#define VkglTestCase_014524_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014524_2 "inter.get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014524, VkglTestCase_014524_1, VkglTestCase_014524_2);

#define VkglTestCase_014525_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014525_2 "pointer.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014525, VkglTestCase_014525_1, VkglTestCase_014525_2);

#define VkglTestCase_014526_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014526_2 "pointer.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014526, VkglTestCase_014526_1, VkglTestCase_014526_2);

#define VkglTestCase_014527_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014527_2 "ointer.get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014527, VkglTestCase_014527_1, VkglTestCase_014527_2);

#define VkglTestCase_014528_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014528_2 "_pointer.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014528, VkglTestCase_014528_1, VkglTestCase_014528_2);

#define VkglTestCase_014529_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014529_2 "y_pointer.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014529, VkglTestCase_014529_1, VkglTestCase_014529_2);

#define VkglTestCase_014530_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014530_2 "_pointer.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014530, VkglTestCase_014530_1, VkglTestCase_014530_2);

#define VkglTestCase_014531_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014531_2 "by_pointer.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014531, VkglTestCase_014531_1, VkglTestCase_014531_2);

#define VkglTestCase_014825_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014825_2 "d.by_value.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014825, VkglTestCase_014825_1, VkglTestCase_014825_2);

#define VkglTestCase_014826_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014826_2 ".by_value.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014826, VkglTestCase_014826_1, VkglTestCase_014826_2);

#define VkglTestCase_014827_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014827_2 "ed.by_value.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014827, VkglTestCase_014827_1, VkglTestCase_014827_2);

#define VkglTestCase_014828_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014828_2 "ed.by_value.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014828, VkglTestCase_014828_1, VkglTestCase_014828_2);

#define VkglTestCase_014829_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014829_2 "d.by_value.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014829, VkglTestCase_014829_1, VkglTestCase_014829_2);

#define VkglTestCase_014830_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014830_2 "ned.by_value.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014830, VkglTestCase_014830_1, VkglTestCase_014830_2);

#define VkglTestCase_014831_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014831_2 "ed.by_value.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014831, VkglTestCase_014831_1, VkglTestCase_014831_2);

#define VkglTestCase_014832_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014832_2 "d.by_value.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014832, VkglTestCase_014832_1, VkglTestCase_014832_2);

#define VkglTestCase_014833_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014833_2 "ned.by_value.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014833, VkglTestCase_014833_1, VkglTestCase_014833_2);

#define VkglTestCase_014834_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014834_2 "d.by_value.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014834, VkglTestCase_014834_1, VkglTestCase_014834_2);

#define VkglTestCase_014835_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014835_2 ".by_value.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014835, VkglTestCase_014835_1, VkglTestCase_014835_2);

#define VkglTestCase_014836_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014836_2 "ed.by_value.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014836, VkglTestCase_014836_1, VkglTestCase_014836_2);

#define VkglTestCase_014837_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014837_2 "_value.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014837, VkglTestCase_014837_1, VkglTestCase_014837_2);

#define VkglTestCase_014838_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014838_2 "value.get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014838, VkglTestCase_014838_1, VkglTestCase_014838_2);

#define VkglTestCase_014839_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014839_2 "y_value.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014839, VkglTestCase_014839_1, VkglTestCase_014839_2);

#define VkglTestCase_014840_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014840_2 "y_value.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014840, VkglTestCase_014840_1, VkglTestCase_014840_2);

#define VkglTestCase_014841_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014841_2 "_value.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014841, VkglTestCase_014841_1, VkglTestCase_014841_2);

#define VkglTestCase_014842_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014842_2 "by_value.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014842, VkglTestCase_014842_1, VkglTestCase_014842_2);

#define VkglTestCase_014843_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014843_2 "value.get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014843, VkglTestCase_014843_1, VkglTestCase_014843_2);

#define VkglTestCase_014844_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_014844_2 "alue.get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014844, VkglTestCase_014844_1, VkglTestCase_014844_2);

#define VkglTestCase_014845_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014845_2 "_value.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014845, VkglTestCase_014845_1, VkglTestCase_014845_2);

#define VkglTestCase_014846_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014846_2 "_value.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014846, VkglTestCase_014846_1, VkglTestCase_014846_2);

#define VkglTestCase_014847_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014847_2 "value.get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014847, VkglTestCase_014847_1, VkglTestCase_014847_2);

#define VkglTestCase_014848_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014848_2 "y_value.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014848, VkglTestCase_014848_1, VkglTestCase_014848_2);

#define VkglTestCase_014849_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014849_2 "by_value.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014849, VkglTestCase_014849_1, VkglTestCase_014849_2);

#define VkglTestCase_014850_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014850_2 "y_value.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014850, VkglTestCase_014850_1, VkglTestCase_014850_2);

#define VkglTestCase_014851_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014851_2 ".by_value.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014851, VkglTestCase_014851_1, VkglTestCase_014851_2);
