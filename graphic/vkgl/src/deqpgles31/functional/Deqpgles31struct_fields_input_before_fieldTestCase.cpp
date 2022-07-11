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

#define VkglTestCase_005675_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005675_2 "31.struct_fields.input_before_field.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005675, VkglTestCase_005675_1, VkglTestCase_005675_2);

#define VkglTestCase_005676_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005676_2 "1.struct_fields.input_before_field.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005676, VkglTestCase_005676_1, VkglTestCase_005676_2);

#define VkglTestCase_005677_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005677_2 "31.struct_fields.input_before_field.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005677, VkglTestCase_005677_1, VkglTestCase_005677_2);

#define VkglTestCase_005678_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005678_2 "1.struct_fields.input_before_field.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005678, VkglTestCase_005678_1, VkglTestCase_005678_2);

#define VkglTestCase_005679_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005679_2 "31.struct_fields.input_before_field.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005679, VkglTestCase_005679_1, VkglTestCase_005679_2);

#define VkglTestCase_005680_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005680_2 "1.struct_fields.input_before_field.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005680, VkglTestCase_005680_1, VkglTestCase_005680_2);

#define VkglTestCase_005681_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005681_2 "31.struct_fields.input_before_field.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005681, VkglTestCase_005681_1, VkglTestCase_005681_2);

#define VkglTestCase_005682_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005682_2 "1.struct_fields.input_before_field.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005682, VkglTestCase_005682_1, VkglTestCase_005682_2);

#define VkglTestCase_005683_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005683_2 "31.struct_fields.input_before_field.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005683, VkglTestCase_005683_1, VkglTestCase_005683_2);

#define VkglTestCase_005684_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005684_2 "1.struct_fields.input_before_field.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005684, VkglTestCase_005684_1, VkglTestCase_005684_2);

#define VkglTestCase_005685_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005685_2 "31.struct_fields.input_before_field.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005685, VkglTestCase_005685_1, VkglTestCase_005685_2);

#define VkglTestCase_005686_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005686_2 "1.struct_fields.input_before_field.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005686, VkglTestCase_005686_1, VkglTestCase_005686_2);

#define VkglTestCase_005687_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005687_2 "31.struct_fields.input_before_field.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005687, VkglTestCase_005687_1, VkglTestCase_005687_2);

#define VkglTestCase_005688_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005688_2 "1.struct_fields.input_before_field.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005688, VkglTestCase_005688_1, VkglTestCase_005688_2);

#define VkglTestCase_005689_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005689_2 "31.struct_fields.input_before_field.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005689, VkglTestCase_005689_1, VkglTestCase_005689_2);

#define VkglTestCase_005690_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005690_2 "1.struct_fields.input_before_field.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005690, VkglTestCase_005690_1, VkglTestCase_005690_2);

#define VkglTestCase_005691_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005691_2 "1.struct_fields.input_before_field.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005691, VkglTestCase_005691_1, VkglTestCase_005691_2);

#define VkglTestCase_005692_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005692_2 ".struct_fields.input_before_field.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005692, VkglTestCase_005692_1, VkglTestCase_005692_2);

#define VkglTestCase_005693_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005693_2 "31.struct_fields.input_before_field.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005693, VkglTestCase_005693_1, VkglTestCase_005693_2);

#define VkglTestCase_005694_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005694_2 "1.struct_fields.input_before_field.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005694, VkglTestCase_005694_1, VkglTestCase_005694_2);

#define VkglTestCase_005695_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005695_2 "31.struct_fields.input_before_field.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005695, VkglTestCase_005695_1, VkglTestCase_005695_2);

#define VkglTestCase_005696_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005696_2 "1.struct_fields.input_before_field.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005696, VkglTestCase_005696_1, VkglTestCase_005696_2);

#define VkglTestCase_005697_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005697_2 "31.struct_fields.input_before_field.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005697, VkglTestCase_005697_1, VkglTestCase_005697_2);

#define VkglTestCase_005698_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005698_2 "1.struct_fields.input_before_field.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005698, VkglTestCase_005698_1, VkglTestCase_005698_2);

#define VkglTestCase_005699_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005699_2 "1.struct_fields.input_before_field.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005699, VkglTestCase_005699_1, VkglTestCase_005699_2);

#define VkglTestCase_005700_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005700_2 ".struct_fields.input_before_field.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005700, VkglTestCase_005700_1, VkglTestCase_005700_2);

#define VkglTestCase_005701_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005701_2 "1.struct_fields.input_before_field.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005701, VkglTestCase_005701_1, VkglTestCase_005701_2);

#define VkglTestCase_005702_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005702_2 ".struct_fields.input_before_field.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005702, VkglTestCase_005702_1, VkglTestCase_005702_2);

#define VkglTestCase_005703_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005703_2 "1.struct_fields.input_before_field.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005703, VkglTestCase_005703_1, VkglTestCase_005703_2);

#define VkglTestCase_005704_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005704_2 ".struct_fields.input_before_field.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005704, VkglTestCase_005704_1, VkglTestCase_005704_2);

#define VkglTestCase_005705_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005705_2 "1.struct_fields.input_before_field.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005705, VkglTestCase_005705_1, VkglTestCase_005705_2);

#define VkglTestCase_005706_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005706_2 ".struct_fields.input_before_field.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005706, VkglTestCase_005706_1, VkglTestCase_005706_2);

#define VkglTestCase_005707_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005707_2 "1.struct_fields.input_before_field.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005707, VkglTestCase_005707_1, VkglTestCase_005707_2);

#define VkglTestCase_005708_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005708_2 ".struct_fields.input_before_field.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005708, VkglTestCase_005708_1, VkglTestCase_005708_2);

#define VkglTestCase_005709_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005709_2 "1.struct_fields.input_before_field.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005709, VkglTestCase_005709_1, VkglTestCase_005709_2);

#define VkglTestCase_005710_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005710_2 ".struct_fields.input_before_field.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005710, VkglTestCase_005710_1, VkglTestCase_005710_2);

#define VkglTestCase_005711_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005711_2 "1.struct_fields.input_before_field.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005711, VkglTestCase_005711_1, VkglTestCase_005711_2);

#define VkglTestCase_005712_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005712_2 ".struct_fields.input_before_field.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005712, VkglTestCase_005712_1, VkglTestCase_005712_2);

#define VkglTestCase_005713_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005713_2 "1.struct_fields.input_before_field.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005713, VkglTestCase_005713_1, VkglTestCase_005713_2);

#define VkglTestCase_005714_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005714_2 ".struct_fields.input_before_field.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005714, VkglTestCase_005714_1, VkglTestCase_005714_2);

#define VkglTestCase_005715_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005715_2 "1.struct_fields.input_before_field.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005715, VkglTestCase_005715_1, VkglTestCase_005715_2);

#define VkglTestCase_005716_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005716_2 ".struct_fields.input_before_field.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005716, VkglTestCase_005716_1, VkglTestCase_005716_2);

#define VkglTestCase_006709_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006709_2 "32.struct_fields.input_before_field.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006709, VkglTestCase_006709_1, VkglTestCase_006709_2);

#define VkglTestCase_006710_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006710_2 "2.struct_fields.input_before_field.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006710, VkglTestCase_006710_1, VkglTestCase_006710_2);

#define VkglTestCase_006711_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006711_2 "32.struct_fields.input_before_field.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006711, VkglTestCase_006711_1, VkglTestCase_006711_2);

#define VkglTestCase_006712_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006712_2 "2.struct_fields.input_before_field.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006712, VkglTestCase_006712_1, VkglTestCase_006712_2);

#define VkglTestCase_006713_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006713_2 "32.struct_fields.input_before_field.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006713, VkglTestCase_006713_1, VkglTestCase_006713_2);

#define VkglTestCase_006714_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006714_2 "2.struct_fields.input_before_field.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006714, VkglTestCase_006714_1, VkglTestCase_006714_2);

#define VkglTestCase_006715_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006715_2 "32.struct_fields.input_before_field.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006715, VkglTestCase_006715_1, VkglTestCase_006715_2);

#define VkglTestCase_006716_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006716_2 "2.struct_fields.input_before_field.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006716, VkglTestCase_006716_1, VkglTestCase_006716_2);

#define VkglTestCase_006717_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006717_2 "32.struct_fields.input_before_field.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006717, VkglTestCase_006717_1, VkglTestCase_006717_2);

#define VkglTestCase_006718_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006718_2 "2.struct_fields.input_before_field.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006718, VkglTestCase_006718_1, VkglTestCase_006718_2);

#define VkglTestCase_006719_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006719_2 "32.struct_fields.input_before_field.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006719, VkglTestCase_006719_1, VkglTestCase_006719_2);

#define VkglTestCase_006720_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006720_2 "2.struct_fields.input_before_field.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006720, VkglTestCase_006720_1, VkglTestCase_006720_2);

#define VkglTestCase_006721_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006721_2 "32.struct_fields.input_before_field.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006721, VkglTestCase_006721_1, VkglTestCase_006721_2);

#define VkglTestCase_006722_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006722_2 "2.struct_fields.input_before_field.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006722, VkglTestCase_006722_1, VkglTestCase_006722_2);

#define VkglTestCase_006723_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006723_2 "32.struct_fields.input_before_field.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006723, VkglTestCase_006723_1, VkglTestCase_006723_2);

#define VkglTestCase_006724_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006724_2 "2.struct_fields.input_before_field.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006724, VkglTestCase_006724_1, VkglTestCase_006724_2);

#define VkglTestCase_006725_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006725_2 "2.struct_fields.input_before_field.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006725, VkglTestCase_006725_1, VkglTestCase_006725_2);

#define VkglTestCase_006726_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006726_2 ".struct_fields.input_before_field.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006726, VkglTestCase_006726_1, VkglTestCase_006726_2);

#define VkglTestCase_006727_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006727_2 "32.struct_fields.input_before_field.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006727, VkglTestCase_006727_1, VkglTestCase_006727_2);

#define VkglTestCase_006728_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006728_2 "2.struct_fields.input_before_field.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006728, VkglTestCase_006728_1, VkglTestCase_006728_2);

#define VkglTestCase_006729_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006729_2 "32.struct_fields.input_before_field.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006729, VkglTestCase_006729_1, VkglTestCase_006729_2);

#define VkglTestCase_006730_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006730_2 "2.struct_fields.input_before_field.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006730, VkglTestCase_006730_1, VkglTestCase_006730_2);

#define VkglTestCase_006731_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006731_2 "32.struct_fields.input_before_field.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006731, VkglTestCase_006731_1, VkglTestCase_006731_2);

#define VkglTestCase_006732_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006732_2 "2.struct_fields.input_before_field.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006732, VkglTestCase_006732_1, VkglTestCase_006732_2);

#define VkglTestCase_006733_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006733_2 "2.struct_fields.input_before_field.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006733, VkglTestCase_006733_1, VkglTestCase_006733_2);

#define VkglTestCase_006734_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006734_2 ".struct_fields.input_before_field.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006734, VkglTestCase_006734_1, VkglTestCase_006734_2);

#define VkglTestCase_006735_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006735_2 "2.struct_fields.input_before_field.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006735, VkglTestCase_006735_1, VkglTestCase_006735_2);

#define VkglTestCase_006736_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006736_2 ".struct_fields.input_before_field.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006736, VkglTestCase_006736_1, VkglTestCase_006736_2);

#define VkglTestCase_006737_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006737_2 "2.struct_fields.input_before_field.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006737, VkglTestCase_006737_1, VkglTestCase_006737_2);

#define VkglTestCase_006738_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006738_2 ".struct_fields.input_before_field.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006738, VkglTestCase_006738_1, VkglTestCase_006738_2);

#define VkglTestCase_006739_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006739_2 "2.struct_fields.input_before_field.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006739, VkglTestCase_006739_1, VkglTestCase_006739_2);

#define VkglTestCase_006740_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006740_2 ".struct_fields.input_before_field.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006740, VkglTestCase_006740_1, VkglTestCase_006740_2);

#define VkglTestCase_006741_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006741_2 "2.struct_fields.input_before_field.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006741, VkglTestCase_006741_1, VkglTestCase_006741_2);

#define VkglTestCase_006742_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006742_2 ".struct_fields.input_before_field.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006742, VkglTestCase_006742_1, VkglTestCase_006742_2);

#define VkglTestCase_006743_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006743_2 "2.struct_fields.input_before_field.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006743, VkglTestCase_006743_1, VkglTestCase_006743_2);

#define VkglTestCase_006744_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006744_2 ".struct_fields.input_before_field.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006744, VkglTestCase_006744_1, VkglTestCase_006744_2);

#define VkglTestCase_006745_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006745_2 "2.struct_fields.input_before_field.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006745, VkglTestCase_006745_1, VkglTestCase_006745_2);

#define VkglTestCase_006746_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006746_2 ".struct_fields.input_before_field.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006746, VkglTestCase_006746_1, VkglTestCase_006746_2);

#define VkglTestCase_006747_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006747_2 "2.struct_fields.input_before_field.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006747, VkglTestCase_006747_1, VkglTestCase_006747_2);

#define VkglTestCase_006748_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006748_2 ".struct_fields.input_before_field.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006748, VkglTestCase_006748_1, VkglTestCase_006748_2);

#define VkglTestCase_006749_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006749_2 "2.struct_fields.input_before_field.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006749, VkglTestCase_006749_1, VkglTestCase_006749_2);

#define VkglTestCase_006750_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006750_2 ".struct_fields.input_before_field.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006750, VkglTestCase_006750_1, VkglTestCase_006750_2);
