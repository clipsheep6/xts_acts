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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005567_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005567_2 "rray_subscripts.input_before_subscript.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005567, VkglTestCase_005567_1, VkglTestCase_005567_2);

#define VkglTestCase_005568_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005568_2 "ray_subscripts.input_before_subscript.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005568, VkglTestCase_005568_1, VkglTestCase_005568_2);

#define VkglTestCase_005569_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005569_2 "array_subscripts.input_before_subscript.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005569, VkglTestCase_005569_1, VkglTestCase_005569_2);

#define VkglTestCase_005570_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005570_2 "rray_subscripts.input_before_subscript.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005570, VkglTestCase_005570_1, VkglTestCase_005570_2);

#define VkglTestCase_005571_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005571_2 "array_subscripts.input_before_subscript.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005571, VkglTestCase_005571_1, VkglTestCase_005571_2);

#define VkglTestCase_005572_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005572_2 "rray_subscripts.input_before_subscript.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005572, VkglTestCase_005572_1, VkglTestCase_005572_2);

#define VkglTestCase_005573_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005573_2 "array_subscripts.input_before_subscript.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005573, VkglTestCase_005573_1, VkglTestCase_005573_2);

#define VkglTestCase_005574_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005574_2 "rray_subscripts.input_before_subscript.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005574, VkglTestCase_005574_1, VkglTestCase_005574_2);

#define VkglTestCase_005575_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005575_2 "array_subscripts.input_before_subscript.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005575, VkglTestCase_005575_1, VkglTestCase_005575_2);

#define VkglTestCase_005576_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005576_2 "rray_subscripts.input_before_subscript.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005576, VkglTestCase_005576_1, VkglTestCase_005576_2);

#define VkglTestCase_005577_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005577_2 "rray_subscripts.input_before_subscript.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005577, VkglTestCase_005577_1, VkglTestCase_005577_2);

#define VkglTestCase_005578_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005578_2 "ray_subscripts.input_before_subscript.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005578, VkglTestCase_005578_1, VkglTestCase_005578_2);

#define VkglTestCase_005579_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005579_2 "rray_subscripts.input_before_subscript.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005579, VkglTestCase_005579_1, VkglTestCase_005579_2);

#define VkglTestCase_005580_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005580_2 "ray_subscripts.input_before_subscript.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005580, VkglTestCase_005580_1, VkglTestCase_005580_2);

#define VkglTestCase_005581_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005581_2 "rray_subscripts.input_before_subscript.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005581, VkglTestCase_005581_1, VkglTestCase_005581_2);

#define VkglTestCase_005582_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005582_2 "ray_subscripts.input_before_subscript.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005582, VkglTestCase_005582_1, VkglTestCase_005582_2);

#define VkglTestCase_005583_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005583_2 "rray_subscripts.input_before_subscript.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005583, VkglTestCase_005583_1, VkglTestCase_005583_2);

#define VkglTestCase_005584_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005584_2 "ray_subscripts.input_before_subscript.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005584, VkglTestCase_005584_1, VkglTestCase_005584_2);

#define VkglTestCase_005585_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005585_2 "rray_subscripts.input_before_subscript.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005585, VkglTestCase_005585_1, VkglTestCase_005585_2);

#define VkglTestCase_005586_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005586_2 "ray_subscripts.input_before_subscript.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005586, VkglTestCase_005586_1, VkglTestCase_005586_2);

#define VkglTestCase_005587_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005587_2 "rray_subscripts.input_before_subscript.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005587, VkglTestCase_005587_1, VkglTestCase_005587_2);

#define VkglTestCase_005588_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005588_2 "ray_subscripts.input_before_subscript.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005588, VkglTestCase_005588_1, VkglTestCase_005588_2);

#define VkglTestCase_005589_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005589_2 "rray_subscripts.input_before_subscript.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005589, VkglTestCase_005589_1, VkglTestCase_005589_2);

#define VkglTestCase_005590_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005590_2 "ray_subscripts.input_before_subscript.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005590, VkglTestCase_005590_1, VkglTestCase_005590_2);

#define VkglTestCase_005591_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005591_2 "ray_subscripts.input_before_subscript.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005591, VkglTestCase_005591_1, VkglTestCase_005591_2);

#define VkglTestCase_005592_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005592_2 "ay_subscripts.input_before_subscript.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005592, VkglTestCase_005592_1, VkglTestCase_005592_2);

#define VkglTestCase_005593_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005593_2 "rray_subscripts.input_before_subscript.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005593, VkglTestCase_005593_1, VkglTestCase_005593_2);

#define VkglTestCase_005594_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005594_2 "ray_subscripts.input_before_subscript.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005594, VkglTestCase_005594_1, VkglTestCase_005594_2);

#define VkglTestCase_005595_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005595_2 "rray_subscripts.input_before_subscript.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005595, VkglTestCase_005595_1, VkglTestCase_005595_2);

#define VkglTestCase_005596_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005596_2 "ray_subscripts.input_before_subscript.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005596, VkglTestCase_005596_1, VkglTestCase_005596_2);

#define VkglTestCase_005597_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005597_2 "ray_subscripts.input_before_subscript.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005597, VkglTestCase_005597_1, VkglTestCase_005597_2);

#define VkglTestCase_005598_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005598_2 "ay_subscripts.input_before_subscript.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005598, VkglTestCase_005598_1, VkglTestCase_005598_2);

#define VkglTestCase_005599_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005599_2 "rray_subscripts.input_before_subscript.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005599, VkglTestCase_005599_1, VkglTestCase_005599_2);

#define VkglTestCase_005600_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005600_2 "ray_subscripts.input_before_subscript.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005600, VkglTestCase_005600_1, VkglTestCase_005600_2);

#define VkglTestCase_005601_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005601_2 "rray_subscripts.input_before_subscript.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005601, VkglTestCase_005601_1, VkglTestCase_005601_2);

#define VkglTestCase_005602_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005602_2 "ray_subscripts.input_before_subscript.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005602, VkglTestCase_005602_1, VkglTestCase_005602_2);

#define VkglTestCase_005603_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005603_2 "ray_subscripts.input_before_subscript.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005603, VkglTestCase_005603_1, VkglTestCase_005603_2);

#define VkglTestCase_005604_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005604_2 "ay_subscripts.input_before_subscript.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005604, VkglTestCase_005604_1, VkglTestCase_005604_2);

#define VkglTestCase_005605_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005605_2 "rray_subscripts.input_before_subscript.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005605, VkglTestCase_005605_1, VkglTestCase_005605_2);

#define VkglTestCase_005606_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005606_2 "ray_subscripts.input_before_subscript.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005606, VkglTestCase_005606_1, VkglTestCase_005606_2);

#define VkglTestCase_005607_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005607_2 "rray_subscripts.input_before_subscript.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005607, VkglTestCase_005607_1, VkglTestCase_005607_2);

#define VkglTestCase_005608_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005608_2 "ray_subscripts.input_before_subscript.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005608, VkglTestCase_005608_1, VkglTestCase_005608_2);

#define VkglTestCase_006601_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006601_2 "rray_subscripts.input_before_subscript.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006601, VkglTestCase_006601_1, VkglTestCase_006601_2);

#define VkglTestCase_006602_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006602_2 "ray_subscripts.input_before_subscript.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006602, VkglTestCase_006602_1, VkglTestCase_006602_2);

#define VkglTestCase_006603_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006603_2 "array_subscripts.input_before_subscript.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006603, VkglTestCase_006603_1, VkglTestCase_006603_2);

#define VkglTestCase_006604_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006604_2 "rray_subscripts.input_before_subscript.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006604, VkglTestCase_006604_1, VkglTestCase_006604_2);

#define VkglTestCase_006605_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006605_2 "array_subscripts.input_before_subscript.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006605, VkglTestCase_006605_1, VkglTestCase_006605_2);

#define VkglTestCase_006606_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006606_2 "rray_subscripts.input_before_subscript.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006606, VkglTestCase_006606_1, VkglTestCase_006606_2);

#define VkglTestCase_006607_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006607_2 "array_subscripts.input_before_subscript.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006607, VkglTestCase_006607_1, VkglTestCase_006607_2);

#define VkglTestCase_006608_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006608_2 "rray_subscripts.input_before_subscript.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006608, VkglTestCase_006608_1, VkglTestCase_006608_2);

#define VkglTestCase_006609_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006609_2 "array_subscripts.input_before_subscript.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006609, VkglTestCase_006609_1, VkglTestCase_006609_2);

#define VkglTestCase_006610_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006610_2 "rray_subscripts.input_before_subscript.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006610, VkglTestCase_006610_1, VkglTestCase_006610_2);

#define VkglTestCase_006611_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006611_2 "rray_subscripts.input_before_subscript.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006611, VkglTestCase_006611_1, VkglTestCase_006611_2);

#define VkglTestCase_006612_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006612_2 "ray_subscripts.input_before_subscript.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006612, VkglTestCase_006612_1, VkglTestCase_006612_2);

#define VkglTestCase_006613_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006613_2 "rray_subscripts.input_before_subscript.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006613, VkglTestCase_006613_1, VkglTestCase_006613_2);

#define VkglTestCase_006614_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006614_2 "ray_subscripts.input_before_subscript.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006614, VkglTestCase_006614_1, VkglTestCase_006614_2);

#define VkglTestCase_006615_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006615_2 "rray_subscripts.input_before_subscript.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006615, VkglTestCase_006615_1, VkglTestCase_006615_2);

#define VkglTestCase_006616_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006616_2 "ray_subscripts.input_before_subscript.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006616, VkglTestCase_006616_1, VkglTestCase_006616_2);

#define VkglTestCase_006617_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006617_2 "rray_subscripts.input_before_subscript.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006617, VkglTestCase_006617_1, VkglTestCase_006617_2);

#define VkglTestCase_006618_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006618_2 "ray_subscripts.input_before_subscript.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006618, VkglTestCase_006618_1, VkglTestCase_006618_2);

#define VkglTestCase_006619_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006619_2 "rray_subscripts.input_before_subscript.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006619, VkglTestCase_006619_1, VkglTestCase_006619_2);

#define VkglTestCase_006620_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006620_2 "ray_subscripts.input_before_subscript.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006620, VkglTestCase_006620_1, VkglTestCase_006620_2);

#define VkglTestCase_006621_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006621_2 "rray_subscripts.input_before_subscript.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006621, VkglTestCase_006621_1, VkglTestCase_006621_2);

#define VkglTestCase_006622_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006622_2 "ray_subscripts.input_before_subscript.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006622, VkglTestCase_006622_1, VkglTestCase_006622_2);

#define VkglTestCase_006623_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006623_2 "rray_subscripts.input_before_subscript.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006623, VkglTestCase_006623_1, VkglTestCase_006623_2);

#define VkglTestCase_006624_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006624_2 "ray_subscripts.input_before_subscript.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006624, VkglTestCase_006624_1, VkglTestCase_006624_2);

#define VkglTestCase_006625_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006625_2 "ray_subscripts.input_before_subscript.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006625, VkglTestCase_006625_1, VkglTestCase_006625_2);

#define VkglTestCase_006626_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006626_2 "ay_subscripts.input_before_subscript.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006626, VkglTestCase_006626_1, VkglTestCase_006626_2);

#define VkglTestCase_006627_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006627_2 "rray_subscripts.input_before_subscript.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006627, VkglTestCase_006627_1, VkglTestCase_006627_2);

#define VkglTestCase_006628_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006628_2 "ray_subscripts.input_before_subscript.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006628, VkglTestCase_006628_1, VkglTestCase_006628_2);

#define VkglTestCase_006629_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006629_2 "rray_subscripts.input_before_subscript.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006629, VkglTestCase_006629_1, VkglTestCase_006629_2);

#define VkglTestCase_006630_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006630_2 "ray_subscripts.input_before_subscript.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006630, VkglTestCase_006630_1, VkglTestCase_006630_2);

#define VkglTestCase_006631_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006631_2 "ray_subscripts.input_before_subscript.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006631, VkglTestCase_006631_1, VkglTestCase_006631_2);

#define VkglTestCase_006632_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006632_2 "ay_subscripts.input_before_subscript.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006632, VkglTestCase_006632_1, VkglTestCase_006632_2);

#define VkglTestCase_006633_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006633_2 "rray_subscripts.input_before_subscript.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006633, VkglTestCase_006633_1, VkglTestCase_006633_2);

#define VkglTestCase_006634_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006634_2 "ray_subscripts.input_before_subscript.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006634, VkglTestCase_006634_1, VkglTestCase_006634_2);

#define VkglTestCase_006635_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006635_2 "rray_subscripts.input_before_subscript.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006635, VkglTestCase_006635_1, VkglTestCase_006635_2);

#define VkglTestCase_006636_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006636_2 "ray_subscripts.input_before_subscript.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006636, VkglTestCase_006636_1, VkglTestCase_006636_2);

#define VkglTestCase_006637_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006637_2 "ray_subscripts.input_before_subscript.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006637, VkglTestCase_006637_1, VkglTestCase_006637_2);

#define VkglTestCase_006638_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006638_2 "ay_subscripts.input_before_subscript.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006638, VkglTestCase_006638_1, VkglTestCase_006638_2);

#define VkglTestCase_006639_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006639_2 "rray_subscripts.input_before_subscript.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006639, VkglTestCase_006639_1, VkglTestCase_006639_2);

#define VkglTestCase_006640_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006640_2 "ray_subscripts.input_before_subscript.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006640, VkglTestCase_006640_1, VkglTestCase_006640_2);

#define VkglTestCase_006641_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006641_2 "rray_subscripts.input_before_subscript.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006641, VkglTestCase_006641_1, VkglTestCase_006641_2);

#define VkglTestCase_006642_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006642_2 "ray_subscripts.input_before_subscript.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006642, VkglTestCase_006642_1, VkglTestCase_006642_2);
