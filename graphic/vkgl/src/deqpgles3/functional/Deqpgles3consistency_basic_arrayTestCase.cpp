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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036772_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036772_2 "uery.consistency.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036772, VkglTestCase_036772_1, VkglTestCase_036772_2);

#define VkglTestCase_036773_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036773_2 "ery.consistency.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036773, VkglTestCase_036773_1, VkglTestCase_036773_2);

#define VkglTestCase_036774_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036774_2 "query.consistency.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036774, VkglTestCase_036774_1, VkglTestCase_036774_2);

#define VkglTestCase_036775_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036775_2 "uery.consistency.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036775, VkglTestCase_036775_1, VkglTestCase_036775_2);

#define VkglTestCase_036776_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036776_2 "ery.consistency.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036776, VkglTestCase_036776_1, VkglTestCase_036776_2);

#define VkglTestCase_036777_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036777_2 "query.consistency.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036777, VkglTestCase_036777_1, VkglTestCase_036777_2);

#define VkglTestCase_036778_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036778_2 "uery.consistency.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036778, VkglTestCase_036778_1, VkglTestCase_036778_2);

#define VkglTestCase_036779_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036779_2 "ery.consistency.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036779, VkglTestCase_036779_1, VkglTestCase_036779_2);

#define VkglTestCase_036780_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036780_2 "query.consistency.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036780, VkglTestCase_036780_1, VkglTestCase_036780_2);

#define VkglTestCase_036781_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036781_2 "query.consistency.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036781, VkglTestCase_036781_1, VkglTestCase_036781_2);

#define VkglTestCase_036782_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036782_2 "uery.consistency.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036782, VkglTestCase_036782_1, VkglTestCase_036782_2);

#define VkglTestCase_036783_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036783_2 "_query.consistency.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036783, VkglTestCase_036783_1, VkglTestCase_036783_2);

#define VkglTestCase_036784_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036784_2 "uery.consistency.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036784, VkglTestCase_036784_1, VkglTestCase_036784_2);

#define VkglTestCase_036785_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036785_2 "ery.consistency.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036785, VkglTestCase_036785_1, VkglTestCase_036785_2);

#define VkglTestCase_036786_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036786_2 "query.consistency.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036786, VkglTestCase_036786_1, VkglTestCase_036786_2);

#define VkglTestCase_036787_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036787_2 "uery.consistency.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036787, VkglTestCase_036787_1, VkglTestCase_036787_2);

#define VkglTestCase_036788_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036788_2 "ery.consistency.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036788, VkglTestCase_036788_1, VkglTestCase_036788_2);

#define VkglTestCase_036789_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036789_2 "query.consistency.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036789, VkglTestCase_036789_1, VkglTestCase_036789_2);

#define VkglTestCase_036790_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036790_2 "uery.consistency.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036790, VkglTestCase_036790_1, VkglTestCase_036790_2);

#define VkglTestCase_036791_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036791_2 "ery.consistency.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036791, VkglTestCase_036791_1, VkglTestCase_036791_2);

#define VkglTestCase_036792_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036792_2 "query.consistency.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036792, VkglTestCase_036792_1, VkglTestCase_036792_2);

#define VkglTestCase_036793_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036793_2 "uery.consistency.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036793, VkglTestCase_036793_1, VkglTestCase_036793_2);

#define VkglTestCase_036794_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036794_2 "ery.consistency.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036794, VkglTestCase_036794_1, VkglTestCase_036794_2);

#define VkglTestCase_036795_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036795_2 "query.consistency.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036795, VkglTestCase_036795_1, VkglTestCase_036795_2);

#define VkglTestCase_036796_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036796_2 "uery.consistency.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036796, VkglTestCase_036796_1, VkglTestCase_036796_2);

#define VkglTestCase_036797_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036797_2 "ery.consistency.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036797, VkglTestCase_036797_1, VkglTestCase_036797_2);

#define VkglTestCase_036798_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036798_2 "query.consistency.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036798, VkglTestCase_036798_1, VkglTestCase_036798_2);

#define VkglTestCase_036799_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036799_2 "ry.consistency.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036799, VkglTestCase_036799_1, VkglTestCase_036799_2);

#define VkglTestCase_036800_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036800_2 "y.consistency.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036800, VkglTestCase_036800_1, VkglTestCase_036800_2);

#define VkglTestCase_036801_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036801_2 "ery.consistency.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036801, VkglTestCase_036801_1, VkglTestCase_036801_2);
