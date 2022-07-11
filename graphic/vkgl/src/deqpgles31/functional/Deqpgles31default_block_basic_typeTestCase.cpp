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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020391_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020391_2 "tomic_counter_buffer_index.default_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020391, VkglTestCase_020391_1, VkglTestCase_020391_2);

#define VkglTestCase_020392_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020392_2 "atomic_counter_buffer_index.default_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020392, VkglTestCase_020392_1, VkglTestCase_020392_2);

#define VkglTestCase_020393_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020393_2 "tomic_counter_buffer_index.default_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020393, VkglTestCase_020393_1, VkglTestCase_020393_2);

#define VkglTestCase_020394_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020394_2 "tomic_counter_buffer_index.default_block.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020394, VkglTestCase_020394_1, VkglTestCase_020394_2);

#define VkglTestCase_020395_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020395_2 "tomic_counter_buffer_index.default_block.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020395, VkglTestCase_020395_1, VkglTestCase_020395_2);

#define VkglTestCase_020396_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020396_2 "tomic_counter_buffer_index.default_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020396, VkglTestCase_020396_1, VkglTestCase_020396_2);

#define VkglTestCase_020397_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020397_2 "tomic_counter_buffer_index.default_block.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020397, VkglTestCase_020397_1, VkglTestCase_020397_2);

#define VkglTestCase_020398_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020398_2 "tomic_counter_buffer_index.default_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020398, VkglTestCase_020398_1, VkglTestCase_020398_2);

#define VkglTestCase_020399_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020399_2 "tomic_counter_buffer_index.default_block.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020399, VkglTestCase_020399_1, VkglTestCase_020399_2);

#define VkglTestCase_020400_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020400_2 "tomic_counter_buffer_index.default_block.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020400, VkglTestCase_020400_1, VkglTestCase_020400_2);

#define VkglTestCase_020401_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020401_2 "tomic_counter_buffer_index.default_block.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020401, VkglTestCase_020401_1, VkglTestCase_020401_2);

#define VkglTestCase_020402_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020402_2 "tomic_counter_buffer_index.default_block.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020402, VkglTestCase_020402_1, VkglTestCase_020402_2);

#define VkglTestCase_020403_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020403_2 "tomic_counter_buffer_index.default_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020403, VkglTestCase_020403_1, VkglTestCase_020403_2);

#define VkglTestCase_020404_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020404_2 "tomic_counter_buffer_index.default_block.basic_type.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020404, VkglTestCase_020404_1, VkglTestCase_020404_2);

#define VkglTestCase_020405_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020405_2 "tomic_counter_buffer_index.default_block.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020405, VkglTestCase_020405_1, VkglTestCase_020405_2);

#define VkglTestCase_020406_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020406_2 "tomic_counter_buffer_index.default_block.basic_type.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020406, VkglTestCase_020406_1, VkglTestCase_020406_2);

#define VkglTestCase_020407_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020407_2 "tomic_counter_buffer_index.default_block.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020407, VkglTestCase_020407_1, VkglTestCase_020407_2);

#define VkglTestCase_020408_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020408_2 "omic_counter_buffer_index.default_block.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020408, VkglTestCase_020408_1, VkglTestCase_020408_2);

#define VkglTestCase_020409_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020409_2 "omic_counter_buffer_index.default_block.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020409, VkglTestCase_020409_1, VkglTestCase_020409_2);

#define VkglTestCase_020410_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020410_2 "omic_counter_buffer_index.default_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020410, VkglTestCase_020410_1, VkglTestCase_020410_2);

#define VkglTestCase_020411_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020411_2 "tomic_counter_buffer_index.default_block.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020411, VkglTestCase_020411_1, VkglTestCase_020411_2);

#define VkglTestCase_020412_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020412_2 "omic_counter_buffer_index.default_block.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020412, VkglTestCase_020412_1, VkglTestCase_020412_2);

#define VkglTestCase_020413_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020413_2 "omic_counter_buffer_index.default_block.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020413, VkglTestCase_020413_1, VkglTestCase_020413_2);

#define VkglTestCase_020414_1 "dEQP-GLES31.functional.program_interface_query.uniform.at"
#define VkglTestCase_020414_2 "omic_counter_buffer_index.default_block.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020414, VkglTestCase_020414_1, VkglTestCase_020414_2);

#define VkglTestCase_020415_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020415_2 "tomic_counter_buffer_index.default_block.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020415, VkglTestCase_020415_1, VkglTestCase_020415_2);

#define VkglTestCase_020459_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020459_2 "uniform.location.default_block.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020459, VkglTestCase_020459_1, VkglTestCase_020459_2);

#define VkglTestCase_020460_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020460_2 ".uniform.location.default_block.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020460, VkglTestCase_020460_1, VkglTestCase_020460_2);

#define VkglTestCase_020461_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020461_2 ".uniform.location.default_block.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020461, VkglTestCase_020461_1, VkglTestCase_020461_2);

#define VkglTestCase_020462_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020462_2 ".uniform.location.default_block.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020462, VkglTestCase_020462_1, VkglTestCase_020462_2);

#define VkglTestCase_020463_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020463_2 ".uniform.location.default_block.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020463, VkglTestCase_020463_1, VkglTestCase_020463_2);

#define VkglTestCase_020464_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020464_2 ".uniform.location.default_block.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020464, VkglTestCase_020464_1, VkglTestCase_020464_2);

#define VkglTestCase_020465_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020465_2 ".uniform.location.default_block.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020465, VkglTestCase_020465_1, VkglTestCase_020465_2);

#define VkglTestCase_020466_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020466_2 "uniform.location.default_block.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020466, VkglTestCase_020466_1, VkglTestCase_020466_2);

#define VkglTestCase_020467_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020467_2 "uniform.location.default_block.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020467, VkglTestCase_020467_1, VkglTestCase_020467_2);

#define VkglTestCase_020468_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020468_2 "uniform.location.default_block.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020468, VkglTestCase_020468_1, VkglTestCase_020468_2);

#define VkglTestCase_020469_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020469_2 "uniform.location.default_block.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020469, VkglTestCase_020469_1, VkglTestCase_020469_2);

#define VkglTestCase_020470_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020470_2 "uniform.location.default_block.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020470, VkglTestCase_020470_1, VkglTestCase_020470_2);

#define VkglTestCase_020471_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020471_2 "uniform.location.default_block.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020471, VkglTestCase_020471_1, VkglTestCase_020471_2);

#define VkglTestCase_020472_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020472_2 "uniform.location.default_block.basic_type.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020472, VkglTestCase_020472_1, VkglTestCase_020472_2);

#define VkglTestCase_020473_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020473_2 "uniform.location.default_block.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020473, VkglTestCase_020473_1, VkglTestCase_020473_2);

#define VkglTestCase_020474_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020474_2 "uniform.location.default_block.basic_type.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020474, VkglTestCase_020474_1, VkglTestCase_020474_2);

#define VkglTestCase_020475_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020475_2 ".uniform.location.default_block.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020475, VkglTestCase_020475_1, VkglTestCase_020475_2);

#define VkglTestCase_020476_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020476_2 "uniform.location.default_block.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020476, VkglTestCase_020476_1, VkglTestCase_020476_2);

#define VkglTestCase_020477_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020477_2 "uniform.location.default_block.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020477, VkglTestCase_020477_1, VkglTestCase_020477_2);

#define VkglTestCase_020478_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020478_2 "uniform.location.default_block.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020478, VkglTestCase_020478_1, VkglTestCase_020478_2);

#define VkglTestCase_020479_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020479_2 ".uniform.location.default_block.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020479, VkglTestCase_020479_1, VkglTestCase_020479_2);

#define VkglTestCase_020480_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020480_2 "uniform.location.default_block.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020480, VkglTestCase_020480_1, VkglTestCase_020480_2);

#define VkglTestCase_020481_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020481_2 "uniform.location.default_block.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020481, VkglTestCase_020481_1, VkglTestCase_020481_2);

#define VkglTestCase_020482_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020482_2 "uniform.location.default_block.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020482, VkglTestCase_020482_1, VkglTestCase_020482_2);

#define VkglTestCase_020483_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020483_2 ".uniform.location.default_block.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020483, VkglTestCase_020483_1, VkglTestCase_020483_2);
