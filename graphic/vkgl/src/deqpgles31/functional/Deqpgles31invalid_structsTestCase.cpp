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
#include "../ActsDeqpgles310007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006125_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006125_2 "sions.es31.invalid.structs.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006125, VkglTestCase_006125_1, VkglTestCase_006125_2);

#define VkglTestCase_006126_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006126_2 "ions.es31.invalid.structs.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006126, VkglTestCase_006126_1, VkglTestCase_006126_2);

#define VkglTestCase_006127_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_006127_2 "rsions.es31.invalid.structs.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006127, VkglTestCase_006127_1, VkglTestCase_006127_2);

#define VkglTestCase_006128_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006128_2 "sions.es31.invalid.structs.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006128, VkglTestCase_006128_1, VkglTestCase_006128_2);

#define VkglTestCase_006129_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006129_2 "sions.es31.invalid.structs.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006129, VkglTestCase_006129_1, VkglTestCase_006129_2);

#define VkglTestCase_006130_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006130_2 "ions.es31.invalid.structs.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006130, VkglTestCase_006130_1, VkglTestCase_006130_2);

#define VkglTestCase_006131_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006131_2 "ions.es31.invalid.structs.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006131, VkglTestCase_006131_1, VkglTestCase_006131_2);

#define VkglTestCase_006132_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006132_2 "ons.es31.invalid.structs.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006132, VkglTestCase_006132_1, VkglTestCase_006132_2);

#define VkglTestCase_006133_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006133_2 "sions.es31.invalid.structs.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006133, VkglTestCase_006133_1, VkglTestCase_006133_2);

#define VkglTestCase_006134_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006134_2 "ions.es31.invalid.structs.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006134, VkglTestCase_006134_1, VkglTestCase_006134_2);

#define VkglTestCase_006135_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006135_2 "sions.es31.invalid.structs.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006135, VkglTestCase_006135_1, VkglTestCase_006135_2);

#define VkglTestCase_006136_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006136_2 "ions.es31.invalid.structs.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006136, VkglTestCase_006136_1, VkglTestCase_006136_2);

#define VkglTestCase_006137_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006137_2 "ions.es31.invalid.structs.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006137, VkglTestCase_006137_1, VkglTestCase_006137_2);

#define VkglTestCase_006138_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006138_2 "ons.es31.invalid.structs.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006138, VkglTestCase_006138_1, VkglTestCase_006138_2);

#define VkglTestCase_006139_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006139_2 "sions.es31.invalid.structs.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006139, VkglTestCase_006139_1, VkglTestCase_006139_2);

#define VkglTestCase_006140_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006140_2 "ions.es31.invalid.structs.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006140, VkglTestCase_006140_1, VkglTestCase_006140_2);

#define VkglTestCase_006141_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006141_2 "sions.es31.invalid.structs.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006141, VkglTestCase_006141_1, VkglTestCase_006141_2);

#define VkglTestCase_006142_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006142_2 "ions.es31.invalid.structs.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006142, VkglTestCase_006142_1, VkglTestCase_006142_2);

#define VkglTestCase_006143_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006143_2 "ions.es31.invalid.structs.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006143, VkglTestCase_006143_1, VkglTestCase_006143_2);

#define VkglTestCase_006144_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006144_2 "ons.es31.invalid.structs.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006144, VkglTestCase_006144_1, VkglTestCase_006144_2);

#define VkglTestCase_006145_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006145_2 "sions.es31.invalid.structs.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006145, VkglTestCase_006145_1, VkglTestCase_006145_2);

#define VkglTestCase_006146_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006146_2 "ions.es31.invalid.structs.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006146, VkglTestCase_006146_1, VkglTestCase_006146_2);

#define VkglTestCase_006147_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006147_2 "sions.es31.invalid.structs.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006147, VkglTestCase_006147_1, VkglTestCase_006147_2);

#define VkglTestCase_006148_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006148_2 "ions.es31.invalid.structs.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006148, VkglTestCase_006148_1, VkglTestCase_006148_2);

#define VkglTestCase_007159_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007159_2 "sions.es32.invalid.structs.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007159, VkglTestCase_007159_1, VkglTestCase_007159_2);

#define VkglTestCase_007160_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007160_2 "ions.es32.invalid.structs.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007160, VkglTestCase_007160_1, VkglTestCase_007160_2);

#define VkglTestCase_007161_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_007161_2 "rsions.es32.invalid.structs.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007161, VkglTestCase_007161_1, VkglTestCase_007161_2);

#define VkglTestCase_007162_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007162_2 "sions.es32.invalid.structs.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007162, VkglTestCase_007162_1, VkglTestCase_007162_2);

#define VkglTestCase_007163_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007163_2 "sions.es32.invalid.structs.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007163, VkglTestCase_007163_1, VkglTestCase_007163_2);

#define VkglTestCase_007164_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007164_2 "ions.es32.invalid.structs.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007164, VkglTestCase_007164_1, VkglTestCase_007164_2);

#define VkglTestCase_007165_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007165_2 "ions.es32.invalid.structs.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007165, VkglTestCase_007165_1, VkglTestCase_007165_2);

#define VkglTestCase_007166_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007166_2 "ons.es32.invalid.structs.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007166, VkglTestCase_007166_1, VkglTestCase_007166_2);

#define VkglTestCase_007167_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007167_2 "sions.es32.invalid.structs.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007167, VkglTestCase_007167_1, VkglTestCase_007167_2);

#define VkglTestCase_007168_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007168_2 "ions.es32.invalid.structs.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007168, VkglTestCase_007168_1, VkglTestCase_007168_2);

#define VkglTestCase_007169_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007169_2 "sions.es32.invalid.structs.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007169, VkglTestCase_007169_1, VkglTestCase_007169_2);

#define VkglTestCase_007170_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007170_2 "ions.es32.invalid.structs.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007170, VkglTestCase_007170_1, VkglTestCase_007170_2);

#define VkglTestCase_007171_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007171_2 "ions.es32.invalid.structs.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007171, VkglTestCase_007171_1, VkglTestCase_007171_2);

#define VkglTestCase_007172_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007172_2 "ons.es32.invalid.structs.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007172, VkglTestCase_007172_1, VkglTestCase_007172_2);

#define VkglTestCase_007173_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007173_2 "sions.es32.invalid.structs.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007173, VkglTestCase_007173_1, VkglTestCase_007173_2);

#define VkglTestCase_007174_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007174_2 "ions.es32.invalid.structs.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007174, VkglTestCase_007174_1, VkglTestCase_007174_2);

#define VkglTestCase_007175_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007175_2 "sions.es32.invalid.structs.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007175, VkglTestCase_007175_1, VkglTestCase_007175_2);

#define VkglTestCase_007176_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007176_2 "ions.es32.invalid.structs.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007176, VkglTestCase_007176_1, VkglTestCase_007176_2);

#define VkglTestCase_007177_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007177_2 "ions.es32.invalid.structs.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007177, VkglTestCase_007177_1, VkglTestCase_007177_2);

#define VkglTestCase_007178_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007178_2 "ons.es32.invalid.structs.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007178, VkglTestCase_007178_1, VkglTestCase_007178_2);

#define VkglTestCase_007179_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007179_2 "sions.es32.invalid.structs.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007179, VkglTestCase_007179_1, VkglTestCase_007179_2);

#define VkglTestCase_007180_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007180_2 "ions.es32.invalid.structs.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007180, VkglTestCase_007180_1, VkglTestCase_007180_2);

#define VkglTestCase_007181_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007181_2 "sions.es32.invalid.structs.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007181, VkglTestCase_007181_1, VkglTestCase_007181_2);

#define VkglTestCase_007182_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007182_2 "ions.es32.invalid.structs.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007182, VkglTestCase_007182_1, VkglTestCase_007182_2);
