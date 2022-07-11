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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021998_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_021998_2 "gram_input.type.separable_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021998, VkglTestCase_021998_1, VkglTestCase_021998_2);

#define VkglTestCase_021999_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021999_2 "ogram_input.type.separable_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021999, VkglTestCase_021999_1, VkglTestCase_021999_2);

#define VkglTestCase_022000_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022000_2 "gram_input.type.separable_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022000, VkglTestCase_022000_1, VkglTestCase_022000_2);

#define VkglTestCase_022001_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022001_2 "gram_input.type.separable_fragment.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022001, VkglTestCase_022001_1, VkglTestCase_022001_2);

#define VkglTestCase_022002_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022002_2 "gram_input.type.separable_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022002, VkglTestCase_022002_1, VkglTestCase_022002_2);

#define VkglTestCase_022003_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022003_2 "gram_input.type.separable_fragment.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022003, VkglTestCase_022003_1, VkglTestCase_022003_2);

#define VkglTestCase_022004_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022004_2 "gram_input.type.separable_fragment.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022004, VkglTestCase_022004_1, VkglTestCase_022004_2);

#define VkglTestCase_022005_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022005_2 "gram_input.type.separable_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022005, VkglTestCase_022005_1, VkglTestCase_022005_2);

#define VkglTestCase_022006_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022006_2 "gram_input.type.separable_fragment.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022006, VkglTestCase_022006_1, VkglTestCase_022006_2);

#define VkglTestCase_022007_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022007_2 "gram_input.type.separable_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022007, VkglTestCase_022007_1, VkglTestCase_022007_2);

#define VkglTestCase_022008_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022008_2 "gram_input.type.separable_fragment.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022008, VkglTestCase_022008_1, VkglTestCase_022008_2);

#define VkglTestCase_022009_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022009_2 "gram_input.type.separable_fragment.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022009, VkglTestCase_022009_1, VkglTestCase_022009_2);

#define VkglTestCase_022010_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022010_2 "gram_input.type.separable_fragment.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022010, VkglTestCase_022010_1, VkglTestCase_022010_2);

#define VkglTestCase_022011_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022011_2 "ram_input.type.separable_fragment.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022011, VkglTestCase_022011_1, VkglTestCase_022011_2);

#define VkglTestCase_022012_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022012_2 "ram_input.type.separable_fragment.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022012, VkglTestCase_022012_1, VkglTestCase_022012_2);

#define VkglTestCase_022013_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022013_2 "ram_input.type.separable_fragment.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022013, VkglTestCase_022013_1, VkglTestCase_022013_2);

#define VkglTestCase_022014_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022014_2 "gram_input.type.separable_fragment.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022014, VkglTestCase_022014_1, VkglTestCase_022014_2);

#define VkglTestCase_022015_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022015_2 "ram_input.type.separable_fragment.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022015, VkglTestCase_022015_1, VkglTestCase_022015_2);

#define VkglTestCase_022016_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022016_2 "ram_input.type.separable_fragment.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022016, VkglTestCase_022016_1, VkglTestCase_022016_2);

#define VkglTestCase_022017_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022017_2 "ram_input.type.separable_fragment.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022017, VkglTestCase_022017_1, VkglTestCase_022017_2);

#define VkglTestCase_022018_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022018_2 "gram_input.type.separable_fragment.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022018, VkglTestCase_022018_1, VkglTestCase_022018_2);

#define VkglTestCase_022651_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022651_2 "ram_output.type.separable_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022651, VkglTestCase_022651_1, VkglTestCase_022651_2);

#define VkglTestCase_022652_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022652_2 "gram_output.type.separable_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022652, VkglTestCase_022652_1, VkglTestCase_022652_2);

#define VkglTestCase_022653_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022653_2 "gram_output.type.separable_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022653, VkglTestCase_022653_1, VkglTestCase_022653_2);

#define VkglTestCase_022654_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022654_2 "gram_output.type.separable_fragment.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022654, VkglTestCase_022654_1, VkglTestCase_022654_2);

#define VkglTestCase_022655_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022655_2 "gram_output.type.separable_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022655, VkglTestCase_022655_1, VkglTestCase_022655_2);

#define VkglTestCase_022656_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022656_2 "gram_output.type.separable_fragment.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022656, VkglTestCase_022656_1, VkglTestCase_022656_2);

#define VkglTestCase_022657_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022657_2 "ram_output.type.separable_fragment.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022657, VkglTestCase_022657_1, VkglTestCase_022657_2);

#define VkglTestCase_022658_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022658_2 "ram_output.type.separable_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022658, VkglTestCase_022658_1, VkglTestCase_022658_2);

#define VkglTestCase_022659_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022659_2 "ram_output.type.separable_fragment.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022659, VkglTestCase_022659_1, VkglTestCase_022659_2);

#define VkglTestCase_022660_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022660_2 "ram_output.type.separable_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022660, VkglTestCase_022660_1, VkglTestCase_022660_2);

#define VkglTestCase_022661_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022661_2 "ram_output.type.separable_fragment.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022661, VkglTestCase_022661_1, VkglTestCase_022661_2);

#define VkglTestCase_022662_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022662_2 "ram_output.type.separable_fragment.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022662, VkglTestCase_022662_1, VkglTestCase_022662_2);
