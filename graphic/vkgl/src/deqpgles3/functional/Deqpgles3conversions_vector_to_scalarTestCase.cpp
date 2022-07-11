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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001723_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001723_2 "ns.vector_to_scalar.vec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001723, VkglTestCase_001723_1, VkglTestCase_001723_2);

#define VkglTestCase_001724_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001724_2 "s.vector_to_scalar.vec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001724, VkglTestCase_001724_1, VkglTestCase_001724_2);

#define VkglTestCase_001725_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001725_2 "ons.vector_to_scalar.vec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001725, VkglTestCase_001725_1, VkglTestCase_001725_2);

#define VkglTestCase_001726_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001726_2 "ns.vector_to_scalar.vec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001726, VkglTestCase_001726_1, VkglTestCase_001726_2);

#define VkglTestCase_001727_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001727_2 "ns.vector_to_scalar.vec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001727, VkglTestCase_001727_1, VkglTestCase_001727_2);

#define VkglTestCase_001728_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001728_2 "s.vector_to_scalar.vec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001728, VkglTestCase_001728_1, VkglTestCase_001728_2);

#define VkglTestCase_001729_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001729_2 "ns.vector_to_scalar.vec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001729, VkglTestCase_001729_1, VkglTestCase_001729_2);

#define VkglTestCase_001730_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001730_2 "s.vector_to_scalar.vec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001730, VkglTestCase_001730_1, VkglTestCase_001730_2);

#define VkglTestCase_001731_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001731_2 "ons.vector_to_scalar.vec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001731, VkglTestCase_001731_1, VkglTestCase_001731_2);

#define VkglTestCase_001732_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001732_2 "ns.vector_to_scalar.vec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001732, VkglTestCase_001732_1, VkglTestCase_001732_2);

#define VkglTestCase_001733_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001733_2 "ns.vector_to_scalar.vec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001733, VkglTestCase_001733_1, VkglTestCase_001733_2);

#define VkglTestCase_001734_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001734_2 "s.vector_to_scalar.vec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001734, VkglTestCase_001734_1, VkglTestCase_001734_2);

#define VkglTestCase_001735_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001735_2 "ns.vector_to_scalar.vec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001735, VkglTestCase_001735_1, VkglTestCase_001735_2);

#define VkglTestCase_001736_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001736_2 "s.vector_to_scalar.vec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001736, VkglTestCase_001736_1, VkglTestCase_001736_2);

#define VkglTestCase_001737_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001737_2 "ons.vector_to_scalar.vec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001737, VkglTestCase_001737_1, VkglTestCase_001737_2);

#define VkglTestCase_001738_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001738_2 "ns.vector_to_scalar.vec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001738, VkglTestCase_001738_1, VkglTestCase_001738_2);

#define VkglTestCase_001739_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001739_2 "ns.vector_to_scalar.vec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001739, VkglTestCase_001739_1, VkglTestCase_001739_2);

#define VkglTestCase_001740_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001740_2 "s.vector_to_scalar.vec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001740, VkglTestCase_001740_1, VkglTestCase_001740_2);

#define VkglTestCase_001741_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001741_2 "s.vector_to_scalar.ivec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001741, VkglTestCase_001741_1, VkglTestCase_001741_2);

#define VkglTestCase_001742_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001742_2 ".vector_to_scalar.ivec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001742, VkglTestCase_001742_1, VkglTestCase_001742_2);

#define VkglTestCase_001743_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001743_2 "ns.vector_to_scalar.ivec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001743, VkglTestCase_001743_1, VkglTestCase_001743_2);

#define VkglTestCase_001744_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001744_2 "s.vector_to_scalar.ivec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001744, VkglTestCase_001744_1, VkglTestCase_001744_2);

#define VkglTestCase_001745_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001745_2 "ns.vector_to_scalar.ivec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001745, VkglTestCase_001745_1, VkglTestCase_001745_2);

#define VkglTestCase_001746_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001746_2 "s.vector_to_scalar.ivec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001746, VkglTestCase_001746_1, VkglTestCase_001746_2);

#define VkglTestCase_001747_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001747_2 "s.vector_to_scalar.ivec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001747, VkglTestCase_001747_1, VkglTestCase_001747_2);

#define VkglTestCase_001748_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001748_2 ".vector_to_scalar.ivec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001748, VkglTestCase_001748_1, VkglTestCase_001748_2);

#define VkglTestCase_001749_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001749_2 "ns.vector_to_scalar.ivec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001749, VkglTestCase_001749_1, VkglTestCase_001749_2);

#define VkglTestCase_001750_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001750_2 "s.vector_to_scalar.ivec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001750, VkglTestCase_001750_1, VkglTestCase_001750_2);

#define VkglTestCase_001751_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001751_2 "ns.vector_to_scalar.ivec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001751, VkglTestCase_001751_1, VkglTestCase_001751_2);

#define VkglTestCase_001752_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001752_2 "s.vector_to_scalar.ivec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001752, VkglTestCase_001752_1, VkglTestCase_001752_2);

#define VkglTestCase_001753_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001753_2 "s.vector_to_scalar.ivec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001753, VkglTestCase_001753_1, VkglTestCase_001753_2);

#define VkglTestCase_001754_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001754_2 ".vector_to_scalar.ivec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001754, VkglTestCase_001754_1, VkglTestCase_001754_2);

#define VkglTestCase_001755_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001755_2 "ns.vector_to_scalar.ivec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001755, VkglTestCase_001755_1, VkglTestCase_001755_2);

#define VkglTestCase_001756_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001756_2 "s.vector_to_scalar.ivec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001756, VkglTestCase_001756_1, VkglTestCase_001756_2);

#define VkglTestCase_001757_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001757_2 "ns.vector_to_scalar.ivec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001757, VkglTestCase_001757_1, VkglTestCase_001757_2);

#define VkglTestCase_001758_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001758_2 "s.vector_to_scalar.ivec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001758, VkglTestCase_001758_1, VkglTestCase_001758_2);

#define VkglTestCase_001759_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001759_2 "s.vector_to_scalar.uvec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001759, VkglTestCase_001759_1, VkglTestCase_001759_2);

#define VkglTestCase_001760_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001760_2 ".vector_to_scalar.uvec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001760, VkglTestCase_001760_1, VkglTestCase_001760_2);

#define VkglTestCase_001761_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001761_2 "ns.vector_to_scalar.uvec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001761, VkglTestCase_001761_1, VkglTestCase_001761_2);

#define VkglTestCase_001762_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001762_2 "s.vector_to_scalar.uvec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001762, VkglTestCase_001762_1, VkglTestCase_001762_2);

#define VkglTestCase_001763_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001763_2 "ns.vector_to_scalar.uvec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001763, VkglTestCase_001763_1, VkglTestCase_001763_2);

#define VkglTestCase_001764_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001764_2 "s.vector_to_scalar.uvec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001764, VkglTestCase_001764_1, VkglTestCase_001764_2);

#define VkglTestCase_001765_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001765_2 "s.vector_to_scalar.uvec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001765, VkglTestCase_001765_1, VkglTestCase_001765_2);

#define VkglTestCase_001766_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001766_2 ".vector_to_scalar.uvec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001766, VkglTestCase_001766_1, VkglTestCase_001766_2);

#define VkglTestCase_001767_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001767_2 "ns.vector_to_scalar.uvec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001767, VkglTestCase_001767_1, VkglTestCase_001767_2);

#define VkglTestCase_001768_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001768_2 "s.vector_to_scalar.uvec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001768, VkglTestCase_001768_1, VkglTestCase_001768_2);

#define VkglTestCase_001769_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001769_2 "ns.vector_to_scalar.uvec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001769, VkglTestCase_001769_1, VkglTestCase_001769_2);

#define VkglTestCase_001770_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001770_2 "s.vector_to_scalar.uvec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001770, VkglTestCase_001770_1, VkglTestCase_001770_2);

#define VkglTestCase_001771_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001771_2 "s.vector_to_scalar.uvec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001771, VkglTestCase_001771_1, VkglTestCase_001771_2);

#define VkglTestCase_001772_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001772_2 ".vector_to_scalar.uvec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001772, VkglTestCase_001772_1, VkglTestCase_001772_2);

#define VkglTestCase_001773_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001773_2 "ns.vector_to_scalar.uvec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001773, VkglTestCase_001773_1, VkglTestCase_001773_2);

#define VkglTestCase_001774_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001774_2 "s.vector_to_scalar.uvec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001774, VkglTestCase_001774_1, VkglTestCase_001774_2);

#define VkglTestCase_001775_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001775_2 "ns.vector_to_scalar.uvec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001775, VkglTestCase_001775_1, VkglTestCase_001775_2);

#define VkglTestCase_001776_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001776_2 "s.vector_to_scalar.uvec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001776, VkglTestCase_001776_1, VkglTestCase_001776_2);

#define VkglTestCase_001777_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001777_2 "s.vector_to_scalar.bvec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001777, VkglTestCase_001777_1, VkglTestCase_001777_2);

#define VkglTestCase_001778_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001778_2 ".vector_to_scalar.bvec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001778, VkglTestCase_001778_1, VkglTestCase_001778_2);

#define VkglTestCase_001779_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001779_2 "ns.vector_to_scalar.bvec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001779, VkglTestCase_001779_1, VkglTestCase_001779_2);

#define VkglTestCase_001780_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001780_2 "s.vector_to_scalar.bvec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001780, VkglTestCase_001780_1, VkglTestCase_001780_2);

#define VkglTestCase_001781_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001781_2 "ns.vector_to_scalar.bvec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001781, VkglTestCase_001781_1, VkglTestCase_001781_2);

#define VkglTestCase_001782_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001782_2 "s.vector_to_scalar.bvec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001782, VkglTestCase_001782_1, VkglTestCase_001782_2);

#define VkglTestCase_001783_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001783_2 "s.vector_to_scalar.bvec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001783, VkglTestCase_001783_1, VkglTestCase_001783_2);

#define VkglTestCase_001784_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001784_2 ".vector_to_scalar.bvec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001784, VkglTestCase_001784_1, VkglTestCase_001784_2);

#define VkglTestCase_001785_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001785_2 "ns.vector_to_scalar.bvec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001785, VkglTestCase_001785_1, VkglTestCase_001785_2);

#define VkglTestCase_001786_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001786_2 "s.vector_to_scalar.bvec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001786, VkglTestCase_001786_1, VkglTestCase_001786_2);

#define VkglTestCase_001787_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001787_2 "ns.vector_to_scalar.bvec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001787, VkglTestCase_001787_1, VkglTestCase_001787_2);

#define VkglTestCase_001788_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001788_2 "s.vector_to_scalar.bvec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001788, VkglTestCase_001788_1, VkglTestCase_001788_2);

#define VkglTestCase_001789_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001789_2 "s.vector_to_scalar.bvec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001789, VkglTestCase_001789_1, VkglTestCase_001789_2);

#define VkglTestCase_001790_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001790_2 ".vector_to_scalar.bvec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001790, VkglTestCase_001790_1, VkglTestCase_001790_2);

#define VkglTestCase_001791_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001791_2 "ns.vector_to_scalar.bvec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001791, VkglTestCase_001791_1, VkglTestCase_001791_2);

#define VkglTestCase_001792_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001792_2 "s.vector_to_scalar.bvec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001792, VkglTestCase_001792_1, VkglTestCase_001792_2);

#define VkglTestCase_001793_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001793_2 "ns.vector_to_scalar.bvec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001793, VkglTestCase_001793_1, VkglTestCase_001793_2);

#define VkglTestCase_001794_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001794_2 "s.vector_to_scalar.bvec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001794, VkglTestCase_001794_1, VkglTestCase_001794_2);

#define VkglTestCase_001795_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001795_2 "ns.vector_to_scalar.vec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001795, VkglTestCase_001795_1, VkglTestCase_001795_2);

#define VkglTestCase_001796_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001796_2 "s.vector_to_scalar.vec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001796, VkglTestCase_001796_1, VkglTestCase_001796_2);

#define VkglTestCase_001797_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001797_2 "ns.vector_to_scalar.vec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001797, VkglTestCase_001797_1, VkglTestCase_001797_2);

#define VkglTestCase_001798_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001798_2 "s.vector_to_scalar.vec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001798, VkglTestCase_001798_1, VkglTestCase_001798_2);

#define VkglTestCase_001799_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001799_2 "ns.vector_to_scalar.vec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001799, VkglTestCase_001799_1, VkglTestCase_001799_2);

#define VkglTestCase_001800_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001800_2 "s.vector_to_scalar.vec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001800, VkglTestCase_001800_1, VkglTestCase_001800_2);

#define VkglTestCase_001801_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001801_2 "ns.vector_to_scalar.ivec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001801, VkglTestCase_001801_1, VkglTestCase_001801_2);

#define VkglTestCase_001802_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001802_2 "s.vector_to_scalar.ivec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001802, VkglTestCase_001802_1, VkglTestCase_001802_2);

#define VkglTestCase_001803_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001803_2 "ns.vector_to_scalar.ivec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001803, VkglTestCase_001803_1, VkglTestCase_001803_2);

#define VkglTestCase_001804_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001804_2 "s.vector_to_scalar.ivec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001804, VkglTestCase_001804_1, VkglTestCase_001804_2);

#define VkglTestCase_001805_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001805_2 "ns.vector_to_scalar.ivec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001805, VkglTestCase_001805_1, VkglTestCase_001805_2);

#define VkglTestCase_001806_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001806_2 "s.vector_to_scalar.ivec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001806, VkglTestCase_001806_1, VkglTestCase_001806_2);

#define VkglTestCase_001807_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001807_2 "ns.vector_to_scalar.uvec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001807, VkglTestCase_001807_1, VkglTestCase_001807_2);

#define VkglTestCase_001808_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001808_2 "s.vector_to_scalar.uvec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001808, VkglTestCase_001808_1, VkglTestCase_001808_2);

#define VkglTestCase_001809_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001809_2 "ns.vector_to_scalar.uvec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001809, VkglTestCase_001809_1, VkglTestCase_001809_2);

#define VkglTestCase_001810_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001810_2 "s.vector_to_scalar.uvec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001810, VkglTestCase_001810_1, VkglTestCase_001810_2);

#define VkglTestCase_001811_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001811_2 "ns.vector_to_scalar.uvec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001811, VkglTestCase_001811_1, VkglTestCase_001811_2);

#define VkglTestCase_001812_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001812_2 "s.vector_to_scalar.uvec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001812, VkglTestCase_001812_1, VkglTestCase_001812_2);

#define VkglTestCase_001813_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001813_2 "ns.vector_to_scalar.bvec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001813, VkglTestCase_001813_1, VkglTestCase_001813_2);

#define VkglTestCase_001814_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001814_2 "s.vector_to_scalar.bvec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001814, VkglTestCase_001814_1, VkglTestCase_001814_2);

#define VkglTestCase_001815_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001815_2 "ns.vector_to_scalar.bvec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001815, VkglTestCase_001815_1, VkglTestCase_001815_2);

#define VkglTestCase_001816_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001816_2 "s.vector_to_scalar.bvec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001816, VkglTestCase_001816_1, VkglTestCase_001816_2);

#define VkglTestCase_001817_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001817_2 "ns.vector_to_scalar.bvec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001817, VkglTestCase_001817_1, VkglTestCase_001817_2);

#define VkglTestCase_001818_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001818_2 "s.vector_to_scalar.bvec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001818, VkglTestCase_001818_1, VkglTestCase_001818_2);
