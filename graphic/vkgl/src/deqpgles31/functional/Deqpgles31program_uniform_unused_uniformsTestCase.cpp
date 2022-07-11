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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017539_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017539_2 "rm.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017539, VkglTestCase_017539_1, VkglTestCase_017539_2);

#define VkglTestCase_017540_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017540_2 "m.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017540, VkglTestCase_017540_1, VkglTestCase_017540_2);

#define VkglTestCase_017541_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017541_2 "orm.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017541, VkglTestCase_017541_1, VkglTestCase_017541_2);

#define VkglTestCase_017542_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017542_2 "orm.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017542, VkglTestCase_017542_1, VkglTestCase_017542_2);

#define VkglTestCase_017543_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017543_2 "rm.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017543, VkglTestCase_017543_1, VkglTestCase_017543_2);

#define VkglTestCase_017544_1 "dEQP-GLES31.functional.program_uni"
#define VkglTestCase_017544_2 "form.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017544, VkglTestCase_017544_1, VkglTestCase_017544_2);

#define VkglTestCase_017545_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017545_2 "orm.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017545, VkglTestCase_017545_1, VkglTestCase_017545_2);

#define VkglTestCase_017546_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017546_2 "rm.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017546, VkglTestCase_017546_1, VkglTestCase_017546_2);

#define VkglTestCase_017547_1 "dEQP-GLES31.functional.program_uni"
#define VkglTestCase_017547_2 "form.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017547, VkglTestCase_017547_1, VkglTestCase_017547_2);

#define VkglTestCase_017548_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017548_2 "rm.unused_uniforms.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017548, VkglTestCase_017548_1, VkglTestCase_017548_2);

#define VkglTestCase_017549_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017549_2 "m.unused_uniforms.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017549, VkglTestCase_017549_1, VkglTestCase_017549_2);

#define VkglTestCase_017550_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017550_2 "orm.unused_uniforms.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017550, VkglTestCase_017550_1, VkglTestCase_017550_2);

#define VkglTestCase_017551_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017551_2 "rm.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017551, VkglTestCase_017551_1, VkglTestCase_017551_2);

#define VkglTestCase_017552_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017552_2 "m.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017552, VkglTestCase_017552_1, VkglTestCase_017552_2);

#define VkglTestCase_017553_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017553_2 "orm.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017553, VkglTestCase_017553_1, VkglTestCase_017553_2);

#define VkglTestCase_017554_1 "dEQP-GLES31.functional.program_uniform.un"
#define VkglTestCase_017554_2 "used_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017554, VkglTestCase_017554_1, VkglTestCase_017554_2);

#define VkglTestCase_017555_1 "dEQP-GLES31.functional.program_uniform.unu"
#define VkglTestCase_017555_2 "sed_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017555, VkglTestCase_017555_1, VkglTestCase_017555_2);

#define VkglTestCase_017556_1 "dEQP-GLES31.functional.program_uniform.u"
#define VkglTestCase_017556_2 "nused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017556, VkglTestCase_017556_1, VkglTestCase_017556_2);
