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

#define VkglTestCase_021956_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021956_2 "ery.program_input.type.vertex_fragment.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021956, VkglTestCase_021956_1, VkglTestCase_021956_2);

#define VkglTestCase_021957_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021957_2 "uery.program_input.type.vertex_fragment.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021957, VkglTestCase_021957_1, VkglTestCase_021957_2);

#define VkglTestCase_021958_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021958_2 "ery.program_input.type.vertex_fragment.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021958, VkglTestCase_021958_1, VkglTestCase_021958_2);

#define VkglTestCase_021959_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021959_2 "ery.program_input.type.vertex_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021959, VkglTestCase_021959_1, VkglTestCase_021959_2);

#define VkglTestCase_021960_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021960_2 "ery.program_input.type.vertex_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021960, VkglTestCase_021960_1, VkglTestCase_021960_2);

#define VkglTestCase_021961_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021961_2 "ery.program_input.type.vertex_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021961, VkglTestCase_021961_1, VkglTestCase_021961_2);

#define VkglTestCase_021962_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021962_2 "ery.program_input.type.vertex_fragment.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021962, VkglTestCase_021962_1, VkglTestCase_021962_2);

#define VkglTestCase_021963_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021963_2 "ery.program_input.type.vertex_fragment.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021963, VkglTestCase_021963_1, VkglTestCase_021963_2);

#define VkglTestCase_021964_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021964_2 "ery.program_input.type.vertex_fragment.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021964, VkglTestCase_021964_1, VkglTestCase_021964_2);

#define VkglTestCase_021965_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021965_2 "ery.program_input.type.vertex_fragment.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021965, VkglTestCase_021965_1, VkglTestCase_021965_2);

#define VkglTestCase_021966_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021966_2 "ery.program_input.type.vertex_fragment.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021966, VkglTestCase_021966_1, VkglTestCase_021966_2);

#define VkglTestCase_021967_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021967_2 "ery.program_input.type.vertex_fragment.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021967, VkglTestCase_021967_1, VkglTestCase_021967_2);

#define VkglTestCase_021968_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021968_2 "ery.program_input.type.vertex_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021968, VkglTestCase_021968_1, VkglTestCase_021968_2);

#define VkglTestCase_021969_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021969_2 "ry.program_input.type.vertex_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021969, VkglTestCase_021969_1, VkglTestCase_021969_2);

#define VkglTestCase_021970_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021970_2 "ry.program_input.type.vertex_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021970, VkglTestCase_021970_1, VkglTestCase_021970_2);

#define VkglTestCase_021971_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021971_2 "ry.program_input.type.vertex_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021971, VkglTestCase_021971_1, VkglTestCase_021971_2);

#define VkglTestCase_021972_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021972_2 "ery.program_input.type.vertex_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021972, VkglTestCase_021972_1, VkglTestCase_021972_2);

#define VkglTestCase_021973_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021973_2 "ry.program_input.type.vertex_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021973, VkglTestCase_021973_1, VkglTestCase_021973_2);

#define VkglTestCase_021974_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021974_2 "ry.program_input.type.vertex_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021974, VkglTestCase_021974_1, VkglTestCase_021974_2);

#define VkglTestCase_021975_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021975_2 "ry.program_input.type.vertex_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021975, VkglTestCase_021975_1, VkglTestCase_021975_2);

#define VkglTestCase_021976_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021976_2 "ery.program_input.type.vertex_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021976, VkglTestCase_021976_1, VkglTestCase_021976_2);
