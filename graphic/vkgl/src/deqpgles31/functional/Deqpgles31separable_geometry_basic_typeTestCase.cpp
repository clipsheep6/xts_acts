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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022752_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022752_2 "ram_output.type.separable_geometry.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022752, VkglTestCase_022752_1, VkglTestCase_022752_2);

#define VkglTestCase_022753_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022753_2 "gram_output.type.separable_geometry.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022753, VkglTestCase_022753_1, VkglTestCase_022753_2);

#define VkglTestCase_022754_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022754_2 "gram_output.type.separable_geometry.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022754, VkglTestCase_022754_1, VkglTestCase_022754_2);

#define VkglTestCase_022755_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022755_2 "gram_output.type.separable_geometry.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022755, VkglTestCase_022755_1, VkglTestCase_022755_2);

#define VkglTestCase_022756_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022756_2 "gram_output.type.separable_geometry.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022756, VkglTestCase_022756_1, VkglTestCase_022756_2);

#define VkglTestCase_022757_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022757_2 "gram_output.type.separable_geometry.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022757, VkglTestCase_022757_1, VkglTestCase_022757_2);

#define VkglTestCase_022758_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022758_2 "ram_output.type.separable_geometry.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022758, VkglTestCase_022758_1, VkglTestCase_022758_2);

#define VkglTestCase_022759_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022759_2 "ram_output.type.separable_geometry.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022759, VkglTestCase_022759_1, VkglTestCase_022759_2);

#define VkglTestCase_022760_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022760_2 "ram_output.type.separable_geometry.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022760, VkglTestCase_022760_1, VkglTestCase_022760_2);

#define VkglTestCase_022761_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022761_2 "ram_output.type.separable_geometry.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022761, VkglTestCase_022761_1, VkglTestCase_022761_2);

#define VkglTestCase_022762_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022762_2 "ram_output.type.separable_geometry.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022762, VkglTestCase_022762_1, VkglTestCase_022762_2);

#define VkglTestCase_022763_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022763_2 "ram_output.type.separable_geometry.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022763, VkglTestCase_022763_1, VkglTestCase_022763_2);

#define VkglTestCase_022764_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022764_2 "gram_output.type.separable_geometry.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022764, VkglTestCase_022764_1, VkglTestCase_022764_2);

#define VkglTestCase_022765_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022765_2 "ram_output.type.separable_geometry.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022765, VkglTestCase_022765_1, VkglTestCase_022765_2);

#define VkglTestCase_022766_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022766_2 "ram_output.type.separable_geometry.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022766, VkglTestCase_022766_1, VkglTestCase_022766_2);

#define VkglTestCase_022767_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022767_2 "ram_output.type.separable_geometry.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022767, VkglTestCase_022767_1, VkglTestCase_022767_2);

#define VkglTestCase_022768_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022768_2 "gram_output.type.separable_geometry.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022768, VkglTestCase_022768_1, VkglTestCase_022768_2);

#define VkglTestCase_022769_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022769_2 "ram_output.type.separable_geometry.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022769, VkglTestCase_022769_1, VkglTestCase_022769_2);

#define VkglTestCase_022770_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022770_2 "ram_output.type.separable_geometry.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022770, VkglTestCase_022770_1, VkglTestCase_022770_2);

#define VkglTestCase_022771_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022771_2 "ram_output.type.separable_geometry.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022771, VkglTestCase_022771_1, VkglTestCase_022771_2);

#define VkglTestCase_022772_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022772_2 "gram_output.type.separable_geometry.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022772, VkglTestCase_022772_1, VkglTestCase_022772_2);

#define VkglTestCase_023364_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023364_2 "feedback_varying.type.separable_geometry.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023364, VkglTestCase_023364_1, VkglTestCase_023364_2);

#define VkglTestCase_023365_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023365_2 "_feedback_varying.type.separable_geometry.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023365, VkglTestCase_023365_1, VkglTestCase_023365_2);

#define VkglTestCase_023366_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023366_2 "_feedback_varying.type.separable_geometry.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023366, VkglTestCase_023366_1, VkglTestCase_023366_2);

#define VkglTestCase_023367_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023367_2 "_feedback_varying.type.separable_geometry.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023367, VkglTestCase_023367_1, VkglTestCase_023367_2);

#define VkglTestCase_023368_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023368_2 "feedback_varying.type.separable_geometry.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023368, VkglTestCase_023368_1, VkglTestCase_023368_2);

#define VkglTestCase_023369_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023369_2 "feedback_varying.type.separable_geometry.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023369, VkglTestCase_023369_1, VkglTestCase_023369_2);

#define VkglTestCase_023370_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023370_2 "feedback_varying.type.separable_geometry.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023370, VkglTestCase_023370_1, VkglTestCase_023370_2);
