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

#define VkglTestCase_021977_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021977_2 "ry.program_input.type.separable_vertex.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021977, VkglTestCase_021977_1, VkglTestCase_021977_2);

#define VkglTestCase_021978_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021978_2 "ery.program_input.type.separable_vertex.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021978, VkglTestCase_021978_1, VkglTestCase_021978_2);

#define VkglTestCase_021979_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021979_2 "ery.program_input.type.separable_vertex.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021979, VkglTestCase_021979_1, VkglTestCase_021979_2);

#define VkglTestCase_021980_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021980_2 "ery.program_input.type.separable_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021980, VkglTestCase_021980_1, VkglTestCase_021980_2);

#define VkglTestCase_021981_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021981_2 "ery.program_input.type.separable_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021981, VkglTestCase_021981_1, VkglTestCase_021981_2);

#define VkglTestCase_021982_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021982_2 "ery.program_input.type.separable_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021982, VkglTestCase_021982_1, VkglTestCase_021982_2);

#define VkglTestCase_021983_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021983_2 "ry.program_input.type.separable_vertex.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021983, VkglTestCase_021983_1, VkglTestCase_021983_2);

#define VkglTestCase_021984_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021984_2 "ry.program_input.type.separable_vertex.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021984, VkglTestCase_021984_1, VkglTestCase_021984_2);

#define VkglTestCase_021985_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021985_2 "ry.program_input.type.separable_vertex.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021985, VkglTestCase_021985_1, VkglTestCase_021985_2);

#define VkglTestCase_021986_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021986_2 "ry.program_input.type.separable_vertex.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021986, VkglTestCase_021986_1, VkglTestCase_021986_2);

#define VkglTestCase_021987_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021987_2 "ry.program_input.type.separable_vertex.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021987, VkglTestCase_021987_1, VkglTestCase_021987_2);

#define VkglTestCase_021988_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021988_2 "ry.program_input.type.separable_vertex.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021988, VkglTestCase_021988_1, VkglTestCase_021988_2);

#define VkglTestCase_021989_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021989_2 "ery.program_input.type.separable_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021989, VkglTestCase_021989_1, VkglTestCase_021989_2);

#define VkglTestCase_021990_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021990_2 "ry.program_input.type.separable_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021990, VkglTestCase_021990_1, VkglTestCase_021990_2);

#define VkglTestCase_021991_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021991_2 "ry.program_input.type.separable_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021991, VkglTestCase_021991_1, VkglTestCase_021991_2);

#define VkglTestCase_021992_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021992_2 "ry.program_input.type.separable_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021992, VkglTestCase_021992_1, VkglTestCase_021992_2);

#define VkglTestCase_021993_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021993_2 "ery.program_input.type.separable_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021993, VkglTestCase_021993_1, VkglTestCase_021993_2);

#define VkglTestCase_021994_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021994_2 "ry.program_input.type.separable_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021994, VkglTestCase_021994_1, VkglTestCase_021994_2);

#define VkglTestCase_021995_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021995_2 "ry.program_input.type.separable_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021995, VkglTestCase_021995_1, VkglTestCase_021995_2);

#define VkglTestCase_021996_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021996_2 "ry.program_input.type.separable_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021996, VkglTestCase_021996_1, VkglTestCase_021996_2);

#define VkglTestCase_021997_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021997_2 "ery.program_input.type.separable_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021997, VkglTestCase_021997_1, VkglTestCase_021997_2);
