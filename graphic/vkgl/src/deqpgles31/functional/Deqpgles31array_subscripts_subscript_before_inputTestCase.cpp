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

#define VkglTestCase_005609_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005609_2 "rray_subscripts.subscript_before_input.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005609, VkglTestCase_005609_1, VkglTestCase_005609_2);

#define VkglTestCase_005610_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005610_2 "ray_subscripts.subscript_before_input.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005610, VkglTestCase_005610_1, VkglTestCase_005610_2);

#define VkglTestCase_005611_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005611_2 "array_subscripts.subscript_before_input.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005611, VkglTestCase_005611_1, VkglTestCase_005611_2);

#define VkglTestCase_005612_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005612_2 "rray_subscripts.subscript_before_input.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005612, VkglTestCase_005612_1, VkglTestCase_005612_2);

#define VkglTestCase_005613_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005613_2 "array_subscripts.subscript_before_input.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005613, VkglTestCase_005613_1, VkglTestCase_005613_2);

#define VkglTestCase_005614_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005614_2 "rray_subscripts.subscript_before_input.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005614, VkglTestCase_005614_1, VkglTestCase_005614_2);

#define VkglTestCase_005615_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005615_2 "array_subscripts.subscript_before_input.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005615, VkglTestCase_005615_1, VkglTestCase_005615_2);

#define VkglTestCase_005616_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005616_2 "rray_subscripts.subscript_before_input.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005616, VkglTestCase_005616_1, VkglTestCase_005616_2);

#define VkglTestCase_005617_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
#define VkglTestCase_005617_2 "array_subscripts.subscript_before_input.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005617, VkglTestCase_005617_1, VkglTestCase_005617_2);

#define VkglTestCase_005618_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005618_2 "rray_subscripts.subscript_before_input.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005618, VkglTestCase_005618_1, VkglTestCase_005618_2);

#define VkglTestCase_005619_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005619_2 "rray_subscripts.subscript_before_input.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005619, VkglTestCase_005619_1, VkglTestCase_005619_2);

#define VkglTestCase_005620_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005620_2 "ray_subscripts.subscript_before_input.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005620, VkglTestCase_005620_1, VkglTestCase_005620_2);

#define VkglTestCase_005621_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005621_2 "rray_subscripts.subscript_before_input.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005621, VkglTestCase_005621_1, VkglTestCase_005621_2);

#define VkglTestCase_005622_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005622_2 "ray_subscripts.subscript_before_input.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005622, VkglTestCase_005622_1, VkglTestCase_005622_2);

#define VkglTestCase_005623_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005623_2 "rray_subscripts.subscript_before_input.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005623, VkglTestCase_005623_1, VkglTestCase_005623_2);

#define VkglTestCase_005624_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005624_2 "ray_subscripts.subscript_before_input.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005624, VkglTestCase_005624_1, VkglTestCase_005624_2);

#define VkglTestCase_005625_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005625_2 "rray_subscripts.subscript_before_input.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005625, VkglTestCase_005625_1, VkglTestCase_005625_2);

#define VkglTestCase_005626_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005626_2 "ray_subscripts.subscript_before_input.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005626, VkglTestCase_005626_1, VkglTestCase_005626_2);

#define VkglTestCase_005627_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005627_2 "rray_subscripts.subscript_before_input.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005627, VkglTestCase_005627_1, VkglTestCase_005627_2);

#define VkglTestCase_005628_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005628_2 "ray_subscripts.subscript_before_input.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005628, VkglTestCase_005628_1, VkglTestCase_005628_2);

#define VkglTestCase_005629_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005629_2 "rray_subscripts.subscript_before_input.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005629, VkglTestCase_005629_1, VkglTestCase_005629_2);

#define VkglTestCase_005630_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005630_2 "ray_subscripts.subscript_before_input.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005630, VkglTestCase_005630_1, VkglTestCase_005630_2);

#define VkglTestCase_005631_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005631_2 "rray_subscripts.subscript_before_input.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005631, VkglTestCase_005631_1, VkglTestCase_005631_2);

#define VkglTestCase_005632_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005632_2 "ray_subscripts.subscript_before_input.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005632, VkglTestCase_005632_1, VkglTestCase_005632_2);

#define VkglTestCase_005633_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005633_2 "ray_subscripts.subscript_before_input.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005633, VkglTestCase_005633_1, VkglTestCase_005633_2);

#define VkglTestCase_005634_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005634_2 "ay_subscripts.subscript_before_input.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005634, VkglTestCase_005634_1, VkglTestCase_005634_2);

#define VkglTestCase_005635_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005635_2 "rray_subscripts.subscript_before_input.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005635, VkglTestCase_005635_1, VkglTestCase_005635_2);

#define VkglTestCase_005636_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005636_2 "ray_subscripts.subscript_before_input.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005636, VkglTestCase_005636_1, VkglTestCase_005636_2);

#define VkglTestCase_005637_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005637_2 "rray_subscripts.subscript_before_input.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005637, VkglTestCase_005637_1, VkglTestCase_005637_2);

#define VkglTestCase_005638_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005638_2 "ray_subscripts.subscript_before_input.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005638, VkglTestCase_005638_1, VkglTestCase_005638_2);

#define VkglTestCase_005639_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005639_2 "ray_subscripts.subscript_before_input.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005639, VkglTestCase_005639_1, VkglTestCase_005639_2);

#define VkglTestCase_005640_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005640_2 "ay_subscripts.subscript_before_input.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005640, VkglTestCase_005640_1, VkglTestCase_005640_2);

#define VkglTestCase_005641_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005641_2 "rray_subscripts.subscript_before_input.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005641, VkglTestCase_005641_1, VkglTestCase_005641_2);

#define VkglTestCase_005642_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005642_2 "ray_subscripts.subscript_before_input.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005642, VkglTestCase_005642_1, VkglTestCase_005642_2);

#define VkglTestCase_005643_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005643_2 "rray_subscripts.subscript_before_input.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005643, VkglTestCase_005643_1, VkglTestCase_005643_2);

#define VkglTestCase_005644_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005644_2 "ray_subscripts.subscript_before_input.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005644, VkglTestCase_005644_1, VkglTestCase_005644_2);

#define VkglTestCase_005645_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005645_2 "ray_subscripts.subscript_before_input.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005645, VkglTestCase_005645_1, VkglTestCase_005645_2);

#define VkglTestCase_005646_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.arr"
#define VkglTestCase_005646_2 "ay_subscripts.subscript_before_input.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005646, VkglTestCase_005646_1, VkglTestCase_005646_2);

#define VkglTestCase_005647_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005647_2 "rray_subscripts.subscript_before_input.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005647, VkglTestCase_005647_1, VkglTestCase_005647_2);

#define VkglTestCase_005648_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005648_2 "ray_subscripts.subscript_before_input.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005648, VkglTestCase_005648_1, VkglTestCase_005648_2);

#define VkglTestCase_005649_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.a"
#define VkglTestCase_005649_2 "rray_subscripts.subscript_before_input.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005649, VkglTestCase_005649_1, VkglTestCase_005649_2);

#define VkglTestCase_005650_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.ar"
#define VkglTestCase_005650_2 "ray_subscripts.subscript_before_input.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005650, VkglTestCase_005650_1, VkglTestCase_005650_2);

#define VkglTestCase_006643_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006643_2 "rray_subscripts.subscript_before_input.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006643, VkglTestCase_006643_1, VkglTestCase_006643_2);

#define VkglTestCase_006644_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006644_2 "ray_subscripts.subscript_before_input.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006644, VkglTestCase_006644_1, VkglTestCase_006644_2);

#define VkglTestCase_006645_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006645_2 "array_subscripts.subscript_before_input.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006645, VkglTestCase_006645_1, VkglTestCase_006645_2);

#define VkglTestCase_006646_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006646_2 "rray_subscripts.subscript_before_input.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006646, VkglTestCase_006646_1, VkglTestCase_006646_2);

#define VkglTestCase_006647_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006647_2 "array_subscripts.subscript_before_input.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006647, VkglTestCase_006647_1, VkglTestCase_006647_2);

#define VkglTestCase_006648_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006648_2 "rray_subscripts.subscript_before_input.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006648, VkglTestCase_006648_1, VkglTestCase_006648_2);

#define VkglTestCase_006649_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006649_2 "array_subscripts.subscript_before_input.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006649, VkglTestCase_006649_1, VkglTestCase_006649_2);

#define VkglTestCase_006650_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006650_2 "rray_subscripts.subscript_before_input.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006650, VkglTestCase_006650_1, VkglTestCase_006650_2);

#define VkglTestCase_006651_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
#define VkglTestCase_006651_2 "array_subscripts.subscript_before_input.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006651, VkglTestCase_006651_1, VkglTestCase_006651_2);

#define VkglTestCase_006652_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006652_2 "rray_subscripts.subscript_before_input.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006652, VkglTestCase_006652_1, VkglTestCase_006652_2);

#define VkglTestCase_006653_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006653_2 "rray_subscripts.subscript_before_input.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006653, VkglTestCase_006653_1, VkglTestCase_006653_2);

#define VkglTestCase_006654_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006654_2 "ray_subscripts.subscript_before_input.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006654, VkglTestCase_006654_1, VkglTestCase_006654_2);

#define VkglTestCase_006655_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006655_2 "rray_subscripts.subscript_before_input.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006655, VkglTestCase_006655_1, VkglTestCase_006655_2);

#define VkglTestCase_006656_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006656_2 "ray_subscripts.subscript_before_input.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006656, VkglTestCase_006656_1, VkglTestCase_006656_2);

#define VkglTestCase_006657_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006657_2 "rray_subscripts.subscript_before_input.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006657, VkglTestCase_006657_1, VkglTestCase_006657_2);

#define VkglTestCase_006658_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006658_2 "ray_subscripts.subscript_before_input.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006658, VkglTestCase_006658_1, VkglTestCase_006658_2);

#define VkglTestCase_006659_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006659_2 "rray_subscripts.subscript_before_input.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006659, VkglTestCase_006659_1, VkglTestCase_006659_2);

#define VkglTestCase_006660_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006660_2 "ray_subscripts.subscript_before_input.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006660, VkglTestCase_006660_1, VkglTestCase_006660_2);

#define VkglTestCase_006661_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006661_2 "rray_subscripts.subscript_before_input.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006661, VkglTestCase_006661_1, VkglTestCase_006661_2);

#define VkglTestCase_006662_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006662_2 "ray_subscripts.subscript_before_input.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006662, VkglTestCase_006662_1, VkglTestCase_006662_2);

#define VkglTestCase_006663_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006663_2 "rray_subscripts.subscript_before_input.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006663, VkglTestCase_006663_1, VkglTestCase_006663_2);

#define VkglTestCase_006664_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006664_2 "ray_subscripts.subscript_before_input.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006664, VkglTestCase_006664_1, VkglTestCase_006664_2);

#define VkglTestCase_006665_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006665_2 "rray_subscripts.subscript_before_input.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006665, VkglTestCase_006665_1, VkglTestCase_006665_2);

#define VkglTestCase_006666_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006666_2 "ray_subscripts.subscript_before_input.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006666, VkglTestCase_006666_1, VkglTestCase_006666_2);

#define VkglTestCase_006667_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006667_2 "ray_subscripts.subscript_before_input.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006667, VkglTestCase_006667_1, VkglTestCase_006667_2);

#define VkglTestCase_006668_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006668_2 "ay_subscripts.subscript_before_input.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006668, VkglTestCase_006668_1, VkglTestCase_006668_2);

#define VkglTestCase_006669_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006669_2 "rray_subscripts.subscript_before_input.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006669, VkglTestCase_006669_1, VkglTestCase_006669_2);

#define VkglTestCase_006670_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006670_2 "ray_subscripts.subscript_before_input.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006670, VkglTestCase_006670_1, VkglTestCase_006670_2);

#define VkglTestCase_006671_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006671_2 "rray_subscripts.subscript_before_input.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006671, VkglTestCase_006671_1, VkglTestCase_006671_2);

#define VkglTestCase_006672_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006672_2 "ray_subscripts.subscript_before_input.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006672, VkglTestCase_006672_1, VkglTestCase_006672_2);

#define VkglTestCase_006673_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006673_2 "ray_subscripts.subscript_before_input.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006673, VkglTestCase_006673_1, VkglTestCase_006673_2);

#define VkglTestCase_006674_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006674_2 "ay_subscripts.subscript_before_input.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006674, VkglTestCase_006674_1, VkglTestCase_006674_2);

#define VkglTestCase_006675_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006675_2 "rray_subscripts.subscript_before_input.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006675, VkglTestCase_006675_1, VkglTestCase_006675_2);

#define VkglTestCase_006676_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006676_2 "ray_subscripts.subscript_before_input.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006676, VkglTestCase_006676_1, VkglTestCase_006676_2);

#define VkglTestCase_006677_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006677_2 "rray_subscripts.subscript_before_input.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006677, VkglTestCase_006677_1, VkglTestCase_006677_2);

#define VkglTestCase_006678_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006678_2 "ray_subscripts.subscript_before_input.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006678, VkglTestCase_006678_1, VkglTestCase_006678_2);

#define VkglTestCase_006679_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006679_2 "ray_subscripts.subscript_before_input.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006679, VkglTestCase_006679_1, VkglTestCase_006679_2);

#define VkglTestCase_006680_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.arr"
#define VkglTestCase_006680_2 "ay_subscripts.subscript_before_input.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006680, VkglTestCase_006680_1, VkglTestCase_006680_2);

#define VkglTestCase_006681_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006681_2 "rray_subscripts.subscript_before_input.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006681, VkglTestCase_006681_1, VkglTestCase_006681_2);

#define VkglTestCase_006682_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006682_2 "ray_subscripts.subscript_before_input.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006682, VkglTestCase_006682_1, VkglTestCase_006682_2);

#define VkglTestCase_006683_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.a"
#define VkglTestCase_006683_2 "rray_subscripts.subscript_before_input.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006683, VkglTestCase_006683_1, VkglTestCase_006683_2);

#define VkglTestCase_006684_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.ar"
#define VkglTestCase_006684_2 "ray_subscripts.subscript_before_input.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006684, VkglTestCase_006684_1, VkglTestCase_006684_2);
