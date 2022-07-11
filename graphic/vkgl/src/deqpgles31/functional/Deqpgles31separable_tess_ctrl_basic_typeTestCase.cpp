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

#define VkglTestCase_022675_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022675_2 "ram_output.type.separable_tess_ctrl.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022675, VkglTestCase_022675_1, VkglTestCase_022675_2);

#define VkglTestCase_022676_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022676_2 "gram_output.type.separable_tess_ctrl.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022676, VkglTestCase_022676_1, VkglTestCase_022676_2);

#define VkglTestCase_022677_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022677_2 "ram_output.type.separable_tess_ctrl.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022677, VkglTestCase_022677_1, VkglTestCase_022677_2);

#define VkglTestCase_022678_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022678_2 "ram_output.type.separable_tess_ctrl.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022678, VkglTestCase_022678_1, VkglTestCase_022678_2);

#define VkglTestCase_022679_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022679_2 "ram_output.type.separable_tess_ctrl.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022679, VkglTestCase_022679_1, VkglTestCase_022679_2);

#define VkglTestCase_022680_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022680_2 "ram_output.type.separable_tess_ctrl.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022680, VkglTestCase_022680_1, VkglTestCase_022680_2);

#define VkglTestCase_022681_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022681_2 "ram_output.type.separable_tess_ctrl.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022681, VkglTestCase_022681_1, VkglTestCase_022681_2);

#define VkglTestCase_022682_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022682_2 "ram_output.type.separable_tess_ctrl.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022682, VkglTestCase_022682_1, VkglTestCase_022682_2);

#define VkglTestCase_022683_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022683_2 "ram_output.type.separable_tess_ctrl.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022683, VkglTestCase_022683_1, VkglTestCase_022683_2);

#define VkglTestCase_022684_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022684_2 "ram_output.type.separable_tess_ctrl.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022684, VkglTestCase_022684_1, VkglTestCase_022684_2);

#define VkglTestCase_022685_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022685_2 "ram_output.type.separable_tess_ctrl.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022685, VkglTestCase_022685_1, VkglTestCase_022685_2);

#define VkglTestCase_022686_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022686_2 "ram_output.type.separable_tess_ctrl.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022686, VkglTestCase_022686_1, VkglTestCase_022686_2);

#define VkglTestCase_022687_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022687_2 "ram_output.type.separable_tess_ctrl.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022687, VkglTestCase_022687_1, VkglTestCase_022687_2);

#define VkglTestCase_022688_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022688_2 "am_output.type.separable_tess_ctrl.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022688, VkglTestCase_022688_1, VkglTestCase_022688_2);

#define VkglTestCase_022689_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022689_2 "am_output.type.separable_tess_ctrl.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022689, VkglTestCase_022689_1, VkglTestCase_022689_2);

#define VkglTestCase_022690_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022690_2 "am_output.type.separable_tess_ctrl.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022690, VkglTestCase_022690_1, VkglTestCase_022690_2);

#define VkglTestCase_022691_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022691_2 "ram_output.type.separable_tess_ctrl.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022691, VkglTestCase_022691_1, VkglTestCase_022691_2);

#define VkglTestCase_022692_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022692_2 "am_output.type.separable_tess_ctrl.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022692, VkglTestCase_022692_1, VkglTestCase_022692_2);

#define VkglTestCase_022693_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022693_2 "am_output.type.separable_tess_ctrl.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022693, VkglTestCase_022693_1, VkglTestCase_022693_2);

#define VkglTestCase_022694_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022694_2 "am_output.type.separable_tess_ctrl.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022694, VkglTestCase_022694_1, VkglTestCase_022694_2);

#define VkglTestCase_022695_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022695_2 "ram_output.type.separable_tess_ctrl.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022695, VkglTestCase_022695_1, VkglTestCase_022695_2);
