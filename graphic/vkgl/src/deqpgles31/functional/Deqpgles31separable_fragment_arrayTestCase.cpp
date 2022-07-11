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

#define VkglTestCase_022019_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022019_2 "rogram_input.type.separable_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022019, VkglTestCase_022019_1, VkglTestCase_022019_2);

#define VkglTestCase_022020_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022020_2 "program_input.type.separable_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022020, VkglTestCase_022020_1, VkglTestCase_022020_2);

#define VkglTestCase_022021_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022021_2 "program_input.type.separable_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022021, VkglTestCase_022021_1, VkglTestCase_022021_2);

#define VkglTestCase_022022_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022022_2 "program_input.type.separable_fragment.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022022, VkglTestCase_022022_1, VkglTestCase_022022_2);

#define VkglTestCase_022023_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022023_2 "program_input.type.separable_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022023, VkglTestCase_022023_1, VkglTestCase_022023_2);

#define VkglTestCase_022024_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022024_2 "program_input.type.separable_fragment.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022024, VkglTestCase_022024_1, VkglTestCase_022024_2);

#define VkglTestCase_022025_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022025_2 "rogram_input.type.separable_fragment.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022025, VkglTestCase_022025_1, VkglTestCase_022025_2);

#define VkglTestCase_022026_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022026_2 "rogram_input.type.separable_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022026, VkglTestCase_022026_1, VkglTestCase_022026_2);

#define VkglTestCase_022027_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022027_2 "rogram_input.type.separable_fragment.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022027, VkglTestCase_022027_1, VkglTestCase_022027_2);

#define VkglTestCase_022028_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022028_2 "rogram_input.type.separable_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022028, VkglTestCase_022028_1, VkglTestCase_022028_2);

#define VkglTestCase_022029_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022029_2 "rogram_input.type.separable_fragment.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022029, VkglTestCase_022029_1, VkglTestCase_022029_2);

#define VkglTestCase_022030_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022030_2 "rogram_input.type.separable_fragment.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022030, VkglTestCase_022030_1, VkglTestCase_022030_2);

#define VkglTestCase_022031_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022031_2 "program_input.type.separable_fragment.array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022031, VkglTestCase_022031_1, VkglTestCase_022031_2);

#define VkglTestCase_022032_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022032_2 "rogram_input.type.separable_fragment.array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022032, VkglTestCase_022032_1, VkglTestCase_022032_2);

#define VkglTestCase_022033_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022033_2 "rogram_input.type.separable_fragment.array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022033, VkglTestCase_022033_1, VkglTestCase_022033_2);

#define VkglTestCase_022034_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022034_2 "rogram_input.type.separable_fragment.array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022034, VkglTestCase_022034_1, VkglTestCase_022034_2);

#define VkglTestCase_022035_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022035_2 "program_input.type.separable_fragment.array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022035, VkglTestCase_022035_1, VkglTestCase_022035_2);

#define VkglTestCase_022036_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022036_2 "rogram_input.type.separable_fragment.array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022036, VkglTestCase_022036_1, VkglTestCase_022036_2);

#define VkglTestCase_022037_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022037_2 "rogram_input.type.separable_fragment.array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022037, VkglTestCase_022037_1, VkglTestCase_022037_2);

#define VkglTestCase_022038_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022038_2 "rogram_input.type.separable_fragment.array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022038, VkglTestCase_022038_1, VkglTestCase_022038_2);

#define VkglTestCase_022039_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022039_2 "program_input.type.separable_fragment.array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022039, VkglTestCase_022039_1, VkglTestCase_022039_2);

#define VkglTestCase_022663_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022663_2 "rogram_output.type.separable_fragment.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022663, VkglTestCase_022663_1, VkglTestCase_022663_2);

#define VkglTestCase_022664_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022664_2 "program_output.type.separable_fragment.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022664, VkglTestCase_022664_1, VkglTestCase_022664_2);

#define VkglTestCase_022665_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022665_2 "rogram_output.type.separable_fragment.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022665, VkglTestCase_022665_1, VkglTestCase_022665_2);

#define VkglTestCase_022666_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022666_2 "rogram_output.type.separable_fragment.array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022666, VkglTestCase_022666_1, VkglTestCase_022666_2);

#define VkglTestCase_022667_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022667_2 "rogram_output.type.separable_fragment.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022667, VkglTestCase_022667_1, VkglTestCase_022667_2);

#define VkglTestCase_022668_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022668_2 "rogram_output.type.separable_fragment.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022668, VkglTestCase_022668_1, VkglTestCase_022668_2);

#define VkglTestCase_022669_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022669_2 "rogram_output.type.separable_fragment.array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022669, VkglTestCase_022669_1, VkglTestCase_022669_2);

#define VkglTestCase_022670_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022670_2 "rogram_output.type.separable_fragment.array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022670, VkglTestCase_022670_1, VkglTestCase_022670_2);

#define VkglTestCase_022671_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022671_2 "rogram_output.type.separable_fragment.array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022671, VkglTestCase_022671_1, VkglTestCase_022671_2);

#define VkglTestCase_022672_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022672_2 "rogram_output.type.separable_fragment.array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022672, VkglTestCase_022672_1, VkglTestCase_022672_2);

#define VkglTestCase_022673_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022673_2 "rogram_output.type.separable_fragment.array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022673, VkglTestCase_022673_1, VkglTestCase_022673_2);

#define VkglTestCase_022674_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022674_2 "rogram_output.type.separable_fragment.array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022674, VkglTestCase_022674_1, VkglTestCase_022674_2);
