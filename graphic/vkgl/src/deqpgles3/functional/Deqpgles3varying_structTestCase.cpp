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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001524_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001524_2 ".linkage.varying.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001524, VkglTestCase_001524_1, VkglTestCase_001524_2);

#define VkglTestCase_001525_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001525_2 "s.linkage.varying.struct.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001525, VkglTestCase_001525_1, VkglTestCase_001525_2);

#define VkglTestCase_001526_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001526_2 "s.linkage.varying.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001526, VkglTestCase_001526_1, VkglTestCase_001526_2);

#define VkglTestCase_001527_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001527_2 "s.linkage.varying.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001527, VkglTestCase_001527_1, VkglTestCase_001527_2);

#define VkglTestCase_001528_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001528_2 "s.linkage.varying.struct.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001528, VkglTestCase_001528_1, VkglTestCase_001528_2);

#define VkglTestCase_001529_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001529_2 ".linkage.varying.struct.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001529, VkglTestCase_001529_1, VkglTestCase_001529_2);

#define VkglTestCase_001530_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001530_2 ".linkage.varying.struct.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001530, VkglTestCase_001530_1, VkglTestCase_001530_2);

#define VkglTestCase_001531_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001531_2 ".linkage.varying.struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001531, VkglTestCase_001531_1, VkglTestCase_001531_2);

#define VkglTestCase_001532_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001532_2 "s.linkage.varying.struct.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001532, VkglTestCase_001532_1, VkglTestCase_001532_2);

#define VkglTestCase_001533_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001533_2 ".linkage.varying.struct.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001533, VkglTestCase_001533_1, VkglTestCase_001533_2);

#define VkglTestCase_001534_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001534_2 ".linkage.varying.struct.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001534, VkglTestCase_001534_1, VkglTestCase_001534_2);

#define VkglTestCase_001535_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001535_2 ".linkage.varying.struct.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001535, VkglTestCase_001535_1, VkglTestCase_001535_2);

#define VkglTestCase_001536_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001536_2 "s.linkage.varying.struct.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001536, VkglTestCase_001536_1, VkglTestCase_001536_2);

#define VkglTestCase_001537_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001537_2 "s.linkage.varying.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001537, VkglTestCase_001537_1, VkglTestCase_001537_2);

#define VkglTestCase_001538_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001538_2 ".linkage.varying.struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001538, VkglTestCase_001538_1, VkglTestCase_001538_2);

#define VkglTestCase_001539_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001539_2 ".linkage.varying.struct.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001539, VkglTestCase_001539_1, VkglTestCase_001539_2);

#define VkglTestCase_001540_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001540_2 ".linkage.varying.struct.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001540, VkglTestCase_001540_1, VkglTestCase_001540_2);

#define VkglTestCase_001541_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001541_2 "s.linkage.varying.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001541, VkglTestCase_001541_1, VkglTestCase_001541_2);

#define VkglTestCase_001542_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001542_2 ".linkage.varying.struct.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001542, VkglTestCase_001542_1, VkglTestCase_001542_2);

#define VkglTestCase_001543_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001543_2 ".linkage.varying.struct.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001543, VkglTestCase_001543_1, VkglTestCase_001543_2);

#define VkglTestCase_001544_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001544_2 ".linkage.varying.struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001544, VkglTestCase_001544_1, VkglTestCase_001544_2);

#define VkglTestCase_001545_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001545_2 "inkage.varying.struct.float_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001545, VkglTestCase_001545_1, VkglTestCase_001545_2);

#define VkglTestCase_001546_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001546_2 "age.varying.struct.float_uvec2_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001546, VkglTestCase_001546_1, VkglTestCase_001546_2);
