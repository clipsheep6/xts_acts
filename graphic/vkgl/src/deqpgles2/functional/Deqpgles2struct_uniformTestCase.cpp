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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007746_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007746_2 "s.struct.uniform.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007746, VkglTestCase_007746_1, VkglTestCase_007746_2);

#define VkglTestCase_007747_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007747_2 ".struct.uniform.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007747, VkglTestCase_007747_1, VkglTestCase_007747_2);

#define VkglTestCase_007748_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007748_2 ".struct.uniform.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007748, VkglTestCase_007748_1, VkglTestCase_007748_2);

#define VkglTestCase_007749_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007749_2 "struct.uniform.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007749, VkglTestCase_007749_1, VkglTestCase_007749_2);

#define VkglTestCase_007750_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007750_2 "ruct.uniform.array_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007750, VkglTestCase_007750_1, VkglTestCase_007750_2);

#define VkglTestCase_007751_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007751_2 "uct.uniform.array_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007751, VkglTestCase_007751_1, VkglTestCase_007751_2);

#define VkglTestCase_007752_1 "dEQP-GLES2.functional.shaders.struct.un"
#define VkglTestCase_007752_2 "iform.array_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007752, VkglTestCase_007752_1, VkglTestCase_007752_2);

#define VkglTestCase_007753_1 "dEQP-GLES2.functional.shaders.struct.uni"
#define VkglTestCase_007753_2 "form.array_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007753, VkglTestCase_007753_1, VkglTestCase_007753_2);

#define VkglTestCase_007754_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007754_2 "ruct.uniform.struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007754, VkglTestCase_007754_1, VkglTestCase_007754_2);

#define VkglTestCase_007755_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007755_2 "uct.uniform.struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007755, VkglTestCase_007755_1, VkglTestCase_007755_2);

#define VkglTestCase_007756_1 "dEQP-GLES2.functional.shaders.struct.un"
#define VkglTestCase_007756_2 "iform.struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007756, VkglTestCase_007756_1, VkglTestCase_007756_2);

#define VkglTestCase_007757_1 "dEQP-GLES2.functional.shaders.struct.uni"
#define VkglTestCase_007757_2 "form.struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007757, VkglTestCase_007757_1, VkglTestCase_007757_2);

#define VkglTestCase_007758_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007758_2 "t.uniform.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007758, VkglTestCase_007758_1, VkglTestCase_007758_2);

#define VkglTestCase_007759_1 "dEQP-GLES2.functional.shaders.struct"
#define VkglTestCase_007759_2 ".uniform.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007759, VkglTestCase_007759_1, VkglTestCase_007759_2);

#define VkglTestCase_007760_1 "dEQP-GLES2.functional.shaders.struct.unifo"
#define VkglTestCase_007760_2 "rm.nested_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007760, VkglTestCase_007760_1, VkglTestCase_007760_2);

#define VkglTestCase_007761_1 "dEQP-GLES2.functional.shaders.struct.unifor"
#define VkglTestCase_007761_2 "m.nested_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007761, VkglTestCase_007761_1, VkglTestCase_007761_2);

#define VkglTestCase_007762_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007762_2 "ct.uniform.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007762, VkglTestCase_007762_1, VkglTestCase_007762_2);

#define VkglTestCase_007763_1 "dEQP-GLES2.functional.shaders.struc"
#define VkglTestCase_007763_2 "t.uniform.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007763, VkglTestCase_007763_1, VkglTestCase_007763_2);

#define VkglTestCase_007764_1 "dEQP-GLES2.functional.shaders.struct.u"
#define VkglTestCase_007764_2 "niform.loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007764, VkglTestCase_007764_1, VkglTestCase_007764_2);

#define VkglTestCase_007765_1 "dEQP-GLES2.functional.shaders.struct.un"
#define VkglTestCase_007765_2 "iform.loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007765, VkglTestCase_007765_1, VkglTestCase_007765_2);

#define VkglTestCase_007766_1 "dEQP-GLES2.functional.shaders.struct.u"
#define VkglTestCase_007766_2 "niform.dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007766, VkglTestCase_007766_1, VkglTestCase_007766_2);

#define VkglTestCase_007767_1 "dEQP-GLES2.functional.shaders.struct.un"
#define VkglTestCase_007767_2 "iform.dynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007767, VkglTestCase_007767_1, VkglTestCase_007767_2);

#define VkglTestCase_007768_1 "dEQP-GLES2.functional.shaders.struct.unifo"
#define VkglTestCase_007768_2 "rm.dynamic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007768, VkglTestCase_007768_1, VkglTestCase_007768_2);

#define VkglTestCase_007769_1 "dEQP-GLES2.functional.shaders.struct.unifor"
#define VkglTestCase_007769_2 "m.dynamic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007769, VkglTestCase_007769_1, VkglTestCase_007769_2);

#define VkglTestCase_007770_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007770_2 ".struct.uniform.sampler_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007770, VkglTestCase_007770_1, VkglTestCase_007770_2);

#define VkglTestCase_007771_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007771_2 "struct.uniform.sampler_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007771, VkglTestCase_007771_1, VkglTestCase_007771_2);

#define VkglTestCase_007772_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007772_2 "uct.uniform.sampler_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007772, VkglTestCase_007772_1, VkglTestCase_007772_2);

#define VkglTestCase_007773_1 "dEQP-GLES2.functional.shaders.stru"
#define VkglTestCase_007773_2 "ct.uniform.sampler_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007773, VkglTestCase_007773_1, VkglTestCase_007773_2);

#define VkglTestCase_007774_1 "dEQP-GLES2.functional.shaders.st"
#define VkglTestCase_007774_2 "ruct.uniform.sampler_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007774, VkglTestCase_007774_1, VkglTestCase_007774_2);

#define VkglTestCase_007775_1 "dEQP-GLES2.functional.shaders.str"
#define VkglTestCase_007775_2 "uct.uniform.sampler_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007775, VkglTestCase_007775_1, VkglTestCase_007775_2);

#define VkglTestCase_007776_1 "dEQP-GLES2.functional.shaders.struct."
#define VkglTestCase_007776_2 "uniform.sampler_in_function_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007776, VkglTestCase_007776_1, VkglTestCase_007776_2);

#define VkglTestCase_007777_1 "dEQP-GLES2.functional.shaders.struct.u"
#define VkglTestCase_007777_2 "niform.sampler_in_function_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007777, VkglTestCase_007777_1, VkglTestCase_007777_2);

#define VkglTestCase_007778_1 "dEQP-GLES2.functional.shaders.struct.uni"
#define VkglTestCase_007778_2 "form.sampler_in_array_function_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007778, VkglTestCase_007778_1, VkglTestCase_007778_2);

#define VkglTestCase_007779_1 "dEQP-GLES2.functional.shaders.struct.unif"
#define VkglTestCase_007779_2 "orm.sampler_in_array_function_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007779, VkglTestCase_007779_1, VkglTestCase_007779_2);

#define VkglTestCase_007780_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007780_2 "s.struct.uniform.equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007780, VkglTestCase_007780_1, VkglTestCase_007780_2);

#define VkglTestCase_007781_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007781_2 ".struct.uniform.equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007781, VkglTestCase_007781_1, VkglTestCase_007781_2);

#define VkglTestCase_007782_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_007782_2 "struct.uniform.not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007782, VkglTestCase_007782_1, VkglTestCase_007782_2);

#define VkglTestCase_007783_1 "dEQP-GLES2.functional.shaders.s"
#define VkglTestCase_007783_2 "truct.uniform.not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007783, VkglTestCase_007783_1, VkglTestCase_007783_2);
