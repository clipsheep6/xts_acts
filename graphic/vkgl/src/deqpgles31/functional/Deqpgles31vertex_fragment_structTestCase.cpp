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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023141_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023141_2 "orm_feedback_varying.type.vertex_fragment.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023141, VkglTestCase_023141_1, VkglTestCase_023141_2);

#define VkglTestCase_023142_1 "dEQP-GLES31.functional.program_interface_query.trans"
#define VkglTestCase_023142_2 "form_feedback_varying.type.vertex_fragment.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023142, VkglTestCase_023142_1, VkglTestCase_023142_2);

#define VkglTestCase_023143_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023143_2 "orm_feedback_varying.type.vertex_fragment.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023143, VkglTestCase_023143_1, VkglTestCase_023143_2);

#define VkglTestCase_023144_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023144_2 "orm_feedback_varying.type.vertex_fragment.struct.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023144, VkglTestCase_023144_1, VkglTestCase_023144_2);

#define VkglTestCase_023145_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023145_2 "orm_feedback_varying.type.vertex_fragment.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023145, VkglTestCase_023145_1, VkglTestCase_023145_2);

#define VkglTestCase_023146_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023146_2 "orm_feedback_varying.type.vertex_fragment.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023146, VkglTestCase_023146_1, VkglTestCase_023146_2);

#define VkglTestCase_023147_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023147_2 "orm_feedback_varying.type.vertex_fragment.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023147, VkglTestCase_023147_1, VkglTestCase_023147_2);

#define VkglTestCase_023148_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023148_2 "orm_feedback_varying.type.vertex_fragment.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023148, VkglTestCase_023148_1, VkglTestCase_023148_2);

#define VkglTestCase_023149_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023149_2 "orm_feedback_varying.type.vertex_fragment.struct.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023149, VkglTestCase_023149_1, VkglTestCase_023149_2);

#define VkglTestCase_023150_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023150_2 "orm_feedback_varying.type.vertex_fragment.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023150, VkglTestCase_023150_1, VkglTestCase_023150_2);

#define VkglTestCase_023151_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023151_2 "orm_feedback_varying.type.vertex_fragment.struct.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023151, VkglTestCase_023151_1, VkglTestCase_023151_2);

#define VkglTestCase_023152_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023152_2 "orm_feedback_varying.type.vertex_fragment.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023152, VkglTestCase_023152_1, VkglTestCase_023152_2);

#define VkglTestCase_023153_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023153_2 "orm_feedback_varying.type.vertex_fragment.struct.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023153, VkglTestCase_023153_1, VkglTestCase_023153_2);

#define VkglTestCase_023154_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023154_2 "rm_feedback_varying.type.vertex_fragment.struct.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023154, VkglTestCase_023154_1, VkglTestCase_023154_2);

#define VkglTestCase_023155_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023155_2 "rm_feedback_varying.type.vertex_fragment.struct.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023155, VkglTestCase_023155_1, VkglTestCase_023155_2);

#define VkglTestCase_023156_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023156_2 "rm_feedback_varying.type.vertex_fragment.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023156, VkglTestCase_023156_1, VkglTestCase_023156_2);

#define VkglTestCase_023157_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023157_2 "orm_feedback_varying.type.vertex_fragment.struct.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023157, VkglTestCase_023157_1, VkglTestCase_023157_2);

#define VkglTestCase_023158_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023158_2 "rm_feedback_varying.type.vertex_fragment.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023158, VkglTestCase_023158_1, VkglTestCase_023158_2);

#define VkglTestCase_023159_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023159_2 "rm_feedback_varying.type.vertex_fragment.struct.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023159, VkglTestCase_023159_1, VkglTestCase_023159_2);

#define VkglTestCase_023160_1 "dEQP-GLES31.functional.program_interface_query.transfo"
#define VkglTestCase_023160_2 "rm_feedback_varying.type.vertex_fragment.struct.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023160, VkglTestCase_023160_1, VkglTestCase_023160_2);

#define VkglTestCase_023161_1 "dEQP-GLES31.functional.program_interface_query.transf"
#define VkglTestCase_023161_2 "orm_feedback_varying.type.vertex_fragment.struct.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023161, VkglTestCase_023161_1, VkglTestCase_023161_2);
