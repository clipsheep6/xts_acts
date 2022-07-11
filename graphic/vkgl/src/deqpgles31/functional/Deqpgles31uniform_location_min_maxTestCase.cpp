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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018122_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018122_2 "ocation.min_max.float_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018122, VkglTestCase_018122_1, VkglTestCase_018122_2);

#define VkglTestCase_018123_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018123_2 "ocation.min_max.float_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018123, VkglTestCase_018123_1, VkglTestCase_018123_2);

#define VkglTestCase_018124_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018124_2 "cation.min_max.float_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018124, VkglTestCase_018124_1, VkglTestCase_018124_2);

#define VkglTestCase_018125_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018125_2 "cation.min_max.float_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018125, VkglTestCase_018125_1, VkglTestCase_018125_2);

#define VkglTestCase_018126_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018126_2 "location.min_max.vec2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018126, VkglTestCase_018126_1, VkglTestCase_018126_2);

#define VkglTestCase_018127_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018127_2 "location.min_max.vec2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018127, VkglTestCase_018127_1, VkglTestCase_018127_2);

#define VkglTestCase_018128_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018128_2 "ocation.min_max.vec2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018128, VkglTestCase_018128_1, VkglTestCase_018128_2);

#define VkglTestCase_018129_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018129_2 "ocation.min_max.vec2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018129, VkglTestCase_018129_1, VkglTestCase_018129_2);

#define VkglTestCase_018130_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018130_2 "location.min_max.vec3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018130, VkglTestCase_018130_1, VkglTestCase_018130_2);

#define VkglTestCase_018131_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018131_2 "location.min_max.vec3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018131, VkglTestCase_018131_1, VkglTestCase_018131_2);

#define VkglTestCase_018132_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018132_2 "ocation.min_max.vec3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018132, VkglTestCase_018132_1, VkglTestCase_018132_2);

#define VkglTestCase_018133_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018133_2 "ocation.min_max.vec3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018133, VkglTestCase_018133_1, VkglTestCase_018133_2);

#define VkglTestCase_018134_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018134_2 "location.min_max.vec4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018134, VkglTestCase_018134_1, VkglTestCase_018134_2);

#define VkglTestCase_018135_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018135_2 "location.min_max.vec4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018135, VkglTestCase_018135_1, VkglTestCase_018135_2);

#define VkglTestCase_018136_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018136_2 "ocation.min_max.vec4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018136, VkglTestCase_018136_1, VkglTestCase_018136_2);

#define VkglTestCase_018137_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018137_2 "ocation.min_max.vec4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018137, VkglTestCase_018137_1, VkglTestCase_018137_2);

#define VkglTestCase_018138_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018138_2 "location.min_max.int_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018138, VkglTestCase_018138_1, VkglTestCase_018138_2);

#define VkglTestCase_018139_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018139_2 "location.min_max.int_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018139, VkglTestCase_018139_1, VkglTestCase_018139_2);

#define VkglTestCase_018140_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018140_2 "ocation.min_max.int_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018140, VkglTestCase_018140_1, VkglTestCase_018140_2);

#define VkglTestCase_018141_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018141_2 "ocation.min_max.int_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018141, VkglTestCase_018141_1, VkglTestCase_018141_2);

#define VkglTestCase_018142_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018142_2 "ocation.min_max.ivec2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018142, VkglTestCase_018142_1, VkglTestCase_018142_2);

#define VkglTestCase_018143_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018143_2 "ocation.min_max.ivec2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018143, VkglTestCase_018143_1, VkglTestCase_018143_2);

#define VkglTestCase_018144_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018144_2 "cation.min_max.ivec2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018144, VkglTestCase_018144_1, VkglTestCase_018144_2);

#define VkglTestCase_018145_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018145_2 "cation.min_max.ivec2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018145, VkglTestCase_018145_1, VkglTestCase_018145_2);

#define VkglTestCase_018146_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018146_2 "ocation.min_max.ivec3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018146, VkglTestCase_018146_1, VkglTestCase_018146_2);

#define VkglTestCase_018147_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018147_2 "ocation.min_max.ivec3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018147, VkglTestCase_018147_1, VkglTestCase_018147_2);

#define VkglTestCase_018148_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018148_2 "cation.min_max.ivec3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018148, VkglTestCase_018148_1, VkglTestCase_018148_2);

#define VkglTestCase_018149_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018149_2 "cation.min_max.ivec3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018149, VkglTestCase_018149_1, VkglTestCase_018149_2);

#define VkglTestCase_018150_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018150_2 "ocation.min_max.ivec4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018150, VkglTestCase_018150_1, VkglTestCase_018150_2);

#define VkglTestCase_018151_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018151_2 "ocation.min_max.ivec4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018151, VkglTestCase_018151_1, VkglTestCase_018151_2);

#define VkglTestCase_018152_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018152_2 "cation.min_max.ivec4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018152, VkglTestCase_018152_1, VkglTestCase_018152_2);

#define VkglTestCase_018153_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018153_2 "cation.min_max.ivec4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018153, VkglTestCase_018153_1, VkglTestCase_018153_2);

#define VkglTestCase_018154_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018154_2 "location.min_max.uint_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018154, VkglTestCase_018154_1, VkglTestCase_018154_2);

#define VkglTestCase_018155_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018155_2 "location.min_max.uint_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018155, VkglTestCase_018155_1, VkglTestCase_018155_2);

#define VkglTestCase_018156_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018156_2 "ocation.min_max.uint_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018156, VkglTestCase_018156_1, VkglTestCase_018156_2);

#define VkglTestCase_018157_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018157_2 "ocation.min_max.uint_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018157, VkglTestCase_018157_1, VkglTestCase_018157_2);

#define VkglTestCase_018158_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018158_2 "ocation.min_max.uvec2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018158, VkglTestCase_018158_1, VkglTestCase_018158_2);

#define VkglTestCase_018159_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018159_2 "ocation.min_max.uvec2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018159, VkglTestCase_018159_1, VkglTestCase_018159_2);

#define VkglTestCase_018160_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018160_2 "cation.min_max.uvec2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018160, VkglTestCase_018160_1, VkglTestCase_018160_2);

#define VkglTestCase_018161_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018161_2 "cation.min_max.uvec2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018161, VkglTestCase_018161_1, VkglTestCase_018161_2);

#define VkglTestCase_018162_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018162_2 "ocation.min_max.uvec3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018162, VkglTestCase_018162_1, VkglTestCase_018162_2);

#define VkglTestCase_018163_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018163_2 "ocation.min_max.uvec3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018163, VkglTestCase_018163_1, VkglTestCase_018163_2);

#define VkglTestCase_018164_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018164_2 "cation.min_max.uvec3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018164, VkglTestCase_018164_1, VkglTestCase_018164_2);

#define VkglTestCase_018165_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018165_2 "cation.min_max.uvec3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018165, VkglTestCase_018165_1, VkglTestCase_018165_2);

#define VkglTestCase_018166_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018166_2 "ocation.min_max.uvec4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018166, VkglTestCase_018166_1, VkglTestCase_018166_2);

#define VkglTestCase_018167_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018167_2 "ocation.min_max.uvec4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018167, VkglTestCase_018167_1, VkglTestCase_018167_2);

#define VkglTestCase_018168_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018168_2 "cation.min_max.uvec4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018168, VkglTestCase_018168_1, VkglTestCase_018168_2);

#define VkglTestCase_018169_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018169_2 "cation.min_max.uvec4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018169, VkglTestCase_018169_1, VkglTestCase_018169_2);

#define VkglTestCase_018170_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018170_2 "location.min_max.bool_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018170, VkglTestCase_018170_1, VkglTestCase_018170_2);

#define VkglTestCase_018171_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018171_2 "location.min_max.bool_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018171, VkglTestCase_018171_1, VkglTestCase_018171_2);

#define VkglTestCase_018172_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018172_2 "ocation.min_max.bool_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018172, VkglTestCase_018172_1, VkglTestCase_018172_2);

#define VkglTestCase_018173_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018173_2 "ocation.min_max.bool_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018173, VkglTestCase_018173_1, VkglTestCase_018173_2);

#define VkglTestCase_018174_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018174_2 "ocation.min_max.bvec2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018174, VkglTestCase_018174_1, VkglTestCase_018174_2);

#define VkglTestCase_018175_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018175_2 "ocation.min_max.bvec2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018175, VkglTestCase_018175_1, VkglTestCase_018175_2);

#define VkglTestCase_018176_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018176_2 "cation.min_max.bvec2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018176, VkglTestCase_018176_1, VkglTestCase_018176_2);

#define VkglTestCase_018177_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018177_2 "cation.min_max.bvec2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018177, VkglTestCase_018177_1, VkglTestCase_018177_2);

#define VkglTestCase_018178_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018178_2 "ocation.min_max.bvec3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018178, VkglTestCase_018178_1, VkglTestCase_018178_2);

#define VkglTestCase_018179_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018179_2 "ocation.min_max.bvec3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018179, VkglTestCase_018179_1, VkglTestCase_018179_2);

#define VkglTestCase_018180_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018180_2 "cation.min_max.bvec3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018180, VkglTestCase_018180_1, VkglTestCase_018180_2);

#define VkglTestCase_018181_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018181_2 "cation.min_max.bvec3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018181, VkglTestCase_018181_1, VkglTestCase_018181_2);

#define VkglTestCase_018182_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018182_2 "ocation.min_max.bvec4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018182, VkglTestCase_018182_1, VkglTestCase_018182_2);

#define VkglTestCase_018183_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018183_2 "ocation.min_max.bvec4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018183, VkglTestCase_018183_1, VkglTestCase_018183_2);

#define VkglTestCase_018184_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018184_2 "cation.min_max.bvec4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018184, VkglTestCase_018184_1, VkglTestCase_018184_2);

#define VkglTestCase_018185_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018185_2 "cation.min_max.bvec4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018185, VkglTestCase_018185_1, VkglTestCase_018185_2);

#define VkglTestCase_018186_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018186_2 "location.min_max.mat2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018186, VkglTestCase_018186_1, VkglTestCase_018186_2);

#define VkglTestCase_018187_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018187_2 "location.min_max.mat2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018187, VkglTestCase_018187_1, VkglTestCase_018187_2);

#define VkglTestCase_018188_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018188_2 "ocation.min_max.mat2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018188, VkglTestCase_018188_1, VkglTestCase_018188_2);

#define VkglTestCase_018189_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018189_2 "ocation.min_max.mat2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018189, VkglTestCase_018189_1, VkglTestCase_018189_2);

#define VkglTestCase_018190_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018190_2 "ocation.min_max.mat2x3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018190, VkglTestCase_018190_1, VkglTestCase_018190_2);

#define VkglTestCase_018191_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018191_2 "ocation.min_max.mat2x3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018191, VkglTestCase_018191_1, VkglTestCase_018191_2);

#define VkglTestCase_018192_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018192_2 "cation.min_max.mat2x3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018192, VkglTestCase_018192_1, VkglTestCase_018192_2);

#define VkglTestCase_018193_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018193_2 "cation.min_max.mat2x3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018193, VkglTestCase_018193_1, VkglTestCase_018193_2);

#define VkglTestCase_018194_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018194_2 "ocation.min_max.mat2x4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018194, VkglTestCase_018194_1, VkglTestCase_018194_2);

#define VkglTestCase_018195_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018195_2 "ocation.min_max.mat2x4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018195, VkglTestCase_018195_1, VkglTestCase_018195_2);

#define VkglTestCase_018196_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018196_2 "cation.min_max.mat2x4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018196, VkglTestCase_018196_1, VkglTestCase_018196_2);

#define VkglTestCase_018197_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018197_2 "cation.min_max.mat2x4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018197, VkglTestCase_018197_1, VkglTestCase_018197_2);

#define VkglTestCase_018198_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018198_2 "ocation.min_max.mat3x2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018198, VkglTestCase_018198_1, VkglTestCase_018198_2);

#define VkglTestCase_018199_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018199_2 "ocation.min_max.mat3x2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018199, VkglTestCase_018199_1, VkglTestCase_018199_2);

#define VkglTestCase_018200_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018200_2 "cation.min_max.mat3x2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018200, VkglTestCase_018200_1, VkglTestCase_018200_2);

#define VkglTestCase_018201_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018201_2 "cation.min_max.mat3x2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018201, VkglTestCase_018201_1, VkglTestCase_018201_2);

#define VkglTestCase_018202_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018202_2 "location.min_max.mat3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018202, VkglTestCase_018202_1, VkglTestCase_018202_2);

#define VkglTestCase_018203_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018203_2 "location.min_max.mat3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018203, VkglTestCase_018203_1, VkglTestCase_018203_2);

#define VkglTestCase_018204_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018204_2 "ocation.min_max.mat3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018204, VkglTestCase_018204_1, VkglTestCase_018204_2);

#define VkglTestCase_018205_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018205_2 "ocation.min_max.mat3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018205, VkglTestCase_018205_1, VkglTestCase_018205_2);

#define VkglTestCase_018206_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018206_2 "ocation.min_max.mat3x4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018206, VkglTestCase_018206_1, VkglTestCase_018206_2);

#define VkglTestCase_018207_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018207_2 "ocation.min_max.mat3x4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018207, VkglTestCase_018207_1, VkglTestCase_018207_2);

#define VkglTestCase_018208_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018208_2 "cation.min_max.mat3x4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018208, VkglTestCase_018208_1, VkglTestCase_018208_2);

#define VkglTestCase_018209_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018209_2 "cation.min_max.mat3x4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018209, VkglTestCase_018209_1, VkglTestCase_018209_2);

#define VkglTestCase_018210_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018210_2 "ocation.min_max.mat4x2_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018210, VkglTestCase_018210_1, VkglTestCase_018210_2);

#define VkglTestCase_018211_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018211_2 "ocation.min_max.mat4x2_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018211, VkglTestCase_018211_1, VkglTestCase_018211_2);

#define VkglTestCase_018212_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018212_2 "cation.min_max.mat4x2_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018212, VkglTestCase_018212_1, VkglTestCase_018212_2);

#define VkglTestCase_018213_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018213_2 "cation.min_max.mat4x2_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018213, VkglTestCase_018213_1, VkglTestCase_018213_2);

#define VkglTestCase_018214_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018214_2 "ocation.min_max.mat4x3_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018214, VkglTestCase_018214_1, VkglTestCase_018214_2);

#define VkglTestCase_018215_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018215_2 "ocation.min_max.mat4x3_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018215, VkglTestCase_018215_1, VkglTestCase_018215_2);

#define VkglTestCase_018216_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018216_2 "cation.min_max.mat4x3_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018216, VkglTestCase_018216_1, VkglTestCase_018216_2);

#define VkglTestCase_018217_1 "dEQP-GLES31.functional.uniform_lo"
#define VkglTestCase_018217_2 "cation.min_max.mat4x3_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018217, VkglTestCase_018217_1, VkglTestCase_018217_2);

#define VkglTestCase_018218_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018218_2 "location.min_max.mat4_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018218, VkglTestCase_018218_1, VkglTestCase_018218_2);

#define VkglTestCase_018219_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018219_2 "location.min_max.mat4_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018219, VkglTestCase_018219_1, VkglTestCase_018219_2);

#define VkglTestCase_018220_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018220_2 "ocation.min_max.mat4_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018220, VkglTestCase_018220_1, VkglTestCase_018220_2);

#define VkglTestCase_018221_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018221_2 "ocation.min_max.mat4_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018221, VkglTestCase_018221_1, VkglTestCase_018221_2);

#define VkglTestCase_018222_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018222_2 "ation.min_max.sampler2D_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018222, VkglTestCase_018222_1, VkglTestCase_018222_2);

#define VkglTestCase_018223_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018223_2 "ation.min_max.sampler2D_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018223, VkglTestCase_018223_1, VkglTestCase_018223_2);

#define VkglTestCase_018224_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018224_2 "tion.min_max.sampler2D_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018224, VkglTestCase_018224_1, VkglTestCase_018224_2);

#define VkglTestCase_018225_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018225_2 "tion.min_max.sampler2D_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018225, VkglTestCase_018225_1, VkglTestCase_018225_2);

#define VkglTestCase_018226_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018226_2 "ation.min_max.isampler2D_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018226, VkglTestCase_018226_1, VkglTestCase_018226_2);

#define VkglTestCase_018227_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018227_2 "ation.min_max.isampler2D_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018227, VkglTestCase_018227_1, VkglTestCase_018227_2);

#define VkglTestCase_018228_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018228_2 "tion.min_max.isampler2D_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018228, VkglTestCase_018228_1, VkglTestCase_018228_2);

#define VkglTestCase_018229_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018229_2 "tion.min_max.isampler2D_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018229, VkglTestCase_018229_1, VkglTestCase_018229_2);

#define VkglTestCase_018230_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018230_2 "ation.min_max.usampler2D_vertex_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018230, VkglTestCase_018230_1, VkglTestCase_018230_2);

#define VkglTestCase_018231_1 "dEQP-GLES31.functional.uniform_loc"
#define VkglTestCase_018231_2 "ation.min_max.usampler2D_vertex_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018231, VkglTestCase_018231_1, VkglTestCase_018231_2);

#define VkglTestCase_018232_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018232_2 "tion.min_max.usampler2D_fragment_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018232, VkglTestCase_018232_1, VkglTestCase_018232_2);

#define VkglTestCase_018233_1 "dEQP-GLES31.functional.uniform_loca"
#define VkglTestCase_018233_2 "tion.min_max.usampler2D_fragment_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018233, VkglTestCase_018233_1, VkglTestCase_018233_2);
