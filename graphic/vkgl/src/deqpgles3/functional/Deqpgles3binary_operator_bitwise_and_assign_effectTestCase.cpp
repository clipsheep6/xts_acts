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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010148_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010148_2 "erator.bitwise_and_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010148, VkglTestCase_010148_1, VkglTestCase_010148_2);

#define VkglTestCase_010149_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010149_2 "rator.bitwise_and_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010149, VkglTestCase_010149_1, VkglTestCase_010149_2);

#define VkglTestCase_010150_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010150_2 "rator.bitwise_and_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010150, VkglTestCase_010150_1, VkglTestCase_010150_2);

#define VkglTestCase_010151_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010151_2 "ator.bitwise_and_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010151, VkglTestCase_010151_1, VkglTestCase_010151_2);

#define VkglTestCase_010152_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010152_2 "rator.bitwise_and_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010152, VkglTestCase_010152_1, VkglTestCase_010152_2);

#define VkglTestCase_010153_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010153_2 "ator.bitwise_and_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010153, VkglTestCase_010153_1, VkglTestCase_010153_2);

#define VkglTestCase_010154_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010154_2 "ator.bitwise_and_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010154, VkglTestCase_010154_1, VkglTestCase_010154_2);

#define VkglTestCase_010155_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010155_2 "tor.bitwise_and_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010155, VkglTestCase_010155_1, VkglTestCase_010155_2);

#define VkglTestCase_010156_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010156_2 "rator.bitwise_and_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010156, VkglTestCase_010156_1, VkglTestCase_010156_2);

#define VkglTestCase_010157_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010157_2 "ator.bitwise_and_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010157, VkglTestCase_010157_1, VkglTestCase_010157_2);

#define VkglTestCase_010158_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010158_2 "ator.bitwise_and_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010158, VkglTestCase_010158_1, VkglTestCase_010158_2);

#define VkglTestCase_010159_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010159_2 "tor.bitwise_and_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010159, VkglTestCase_010159_1, VkglTestCase_010159_2);

#define VkglTestCase_010160_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010160_2 "rator.bitwise_and_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010160, VkglTestCase_010160_1, VkglTestCase_010160_2);

#define VkglTestCase_010161_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010161_2 "ator.bitwise_and_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010161, VkglTestCase_010161_1, VkglTestCase_010161_2);

#define VkglTestCase_010162_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010162_2 "ator.bitwise_and_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010162, VkglTestCase_010162_1, VkglTestCase_010162_2);

#define VkglTestCase_010163_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010163_2 "tor.bitwise_and_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010163, VkglTestCase_010163_1, VkglTestCase_010163_2);

#define VkglTestCase_010164_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010164_2 "erator.bitwise_and_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010164, VkglTestCase_010164_1, VkglTestCase_010164_2);

#define VkglTestCase_010165_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010165_2 "rator.bitwise_and_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010165, VkglTestCase_010165_1, VkglTestCase_010165_2);

#define VkglTestCase_010166_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010166_2 "rator.bitwise_and_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010166, VkglTestCase_010166_1, VkglTestCase_010166_2);

#define VkglTestCase_010167_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010167_2 "ator.bitwise_and_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010167, VkglTestCase_010167_1, VkglTestCase_010167_2);

#define VkglTestCase_010168_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010168_2 "rator.bitwise_and_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010168, VkglTestCase_010168_1, VkglTestCase_010168_2);

#define VkglTestCase_010169_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010169_2 "ator.bitwise_and_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010169, VkglTestCase_010169_1, VkglTestCase_010169_2);

#define VkglTestCase_010170_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010170_2 "rator.bitwise_and_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010170, VkglTestCase_010170_1, VkglTestCase_010170_2);

#define VkglTestCase_010171_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010171_2 "ator.bitwise_and_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010171, VkglTestCase_010171_1, VkglTestCase_010171_2);

#define VkglTestCase_010172_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010172_2 "erator.bitwise_and_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010172, VkglTestCase_010172_1, VkglTestCase_010172_2);

#define VkglTestCase_010173_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010173_2 "rator.bitwise_and_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010173, VkglTestCase_010173_1, VkglTestCase_010173_2);

#define VkglTestCase_010174_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010174_2 "ator.bitwise_and_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010174, VkglTestCase_010174_1, VkglTestCase_010174_2);

#define VkglTestCase_010175_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010175_2 "tor.bitwise_and_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010175, VkglTestCase_010175_1, VkglTestCase_010175_2);

#define VkglTestCase_010176_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010176_2 "rator.bitwise_and_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010176, VkglTestCase_010176_1, VkglTestCase_010176_2);

#define VkglTestCase_010177_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010177_2 "ator.bitwise_and_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010177, VkglTestCase_010177_1, VkglTestCase_010177_2);

#define VkglTestCase_010178_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010178_2 "ator.bitwise_and_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010178, VkglTestCase_010178_1, VkglTestCase_010178_2);

#define VkglTestCase_010179_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010179_2 "tor.bitwise_and_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010179, VkglTestCase_010179_1, VkglTestCase_010179_2);

#define VkglTestCase_010180_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010180_2 "rator.bitwise_and_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010180, VkglTestCase_010180_1, VkglTestCase_010180_2);

#define VkglTestCase_010181_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010181_2 "ator.bitwise_and_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010181, VkglTestCase_010181_1, VkglTestCase_010181_2);

#define VkglTestCase_010182_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010182_2 "ator.bitwise_and_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010182, VkglTestCase_010182_1, VkglTestCase_010182_2);

#define VkglTestCase_010183_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010183_2 "tor.bitwise_and_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010183, VkglTestCase_010183_1, VkglTestCase_010183_2);

#define VkglTestCase_010184_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010184_2 "rator.bitwise_and_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010184, VkglTestCase_010184_1, VkglTestCase_010184_2);

#define VkglTestCase_010185_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010185_2 "ator.bitwise_and_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010185, VkglTestCase_010185_1, VkglTestCase_010185_2);

#define VkglTestCase_010186_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010186_2 "ator.bitwise_and_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010186, VkglTestCase_010186_1, VkglTestCase_010186_2);

#define VkglTestCase_010187_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010187_2 "tor.bitwise_and_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010187, VkglTestCase_010187_1, VkglTestCase_010187_2);

#define VkglTestCase_010188_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010188_2 "rator.bitwise_and_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010188, VkglTestCase_010188_1, VkglTestCase_010188_2);

#define VkglTestCase_010189_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010189_2 "ator.bitwise_and_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010189, VkglTestCase_010189_1, VkglTestCase_010189_2);

#define VkglTestCase_010190_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010190_2 "rator.bitwise_and_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010190, VkglTestCase_010190_1, VkglTestCase_010190_2);

#define VkglTestCase_010191_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010191_2 "ator.bitwise_and_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010191, VkglTestCase_010191_1, VkglTestCase_010191_2);

#define VkglTestCase_010192_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010192_2 "rator.bitwise_and_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010192, VkglTestCase_010192_1, VkglTestCase_010192_2);

#define VkglTestCase_010193_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010193_2 "ator.bitwise_and_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010193, VkglTestCase_010193_1, VkglTestCase_010193_2);

#define VkglTestCase_010194_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010194_2 "rator.bitwise_and_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010194, VkglTestCase_010194_1, VkglTestCase_010194_2);

#define VkglTestCase_010195_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010195_2 "ator.bitwise_and_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010195, VkglTestCase_010195_1, VkglTestCase_010195_2);

#define VkglTestCase_010196_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010196_2 "tor.bitwise_and_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010196, VkglTestCase_010196_1, VkglTestCase_010196_2);

#define VkglTestCase_010197_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010197_2 "or.bitwise_and_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010197, VkglTestCase_010197_1, VkglTestCase_010197_2);

#define VkglTestCase_010198_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010198_2 "or.bitwise_and_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010198, VkglTestCase_010198_1, VkglTestCase_010198_2);

#define VkglTestCase_010199_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010199_2 "r.bitwise_and_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010199, VkglTestCase_010199_1, VkglTestCase_010199_2);

#define VkglTestCase_010200_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010200_2 "tor.bitwise_and_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010200, VkglTestCase_010200_1, VkglTestCase_010200_2);

#define VkglTestCase_010201_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010201_2 "or.bitwise_and_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010201, VkglTestCase_010201_1, VkglTestCase_010201_2);

#define VkglTestCase_010202_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010202_2 "or.bitwise_and_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010202, VkglTestCase_010202_1, VkglTestCase_010202_2);

#define VkglTestCase_010203_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010203_2 "r.bitwise_and_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010203, VkglTestCase_010203_1, VkglTestCase_010203_2);

#define VkglTestCase_010204_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010204_2 "tor.bitwise_and_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010204, VkglTestCase_010204_1, VkglTestCase_010204_2);

#define VkglTestCase_010205_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010205_2 "or.bitwise_and_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010205, VkglTestCase_010205_1, VkglTestCase_010205_2);

#define VkglTestCase_010206_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010206_2 "or.bitwise_and_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010206, VkglTestCase_010206_1, VkglTestCase_010206_2);

#define VkglTestCase_010207_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010207_2 "r.bitwise_and_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010207, VkglTestCase_010207_1, VkglTestCase_010207_2);

#define VkglTestCase_010208_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010208_2 "tor.bitwise_and_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010208, VkglTestCase_010208_1, VkglTestCase_010208_2);

#define VkglTestCase_010209_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010209_2 "or.bitwise_and_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010209, VkglTestCase_010209_1, VkglTestCase_010209_2);

#define VkglTestCase_010210_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010210_2 "tor.bitwise_and_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010210, VkglTestCase_010210_1, VkglTestCase_010210_2);

#define VkglTestCase_010211_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010211_2 "or.bitwise_and_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010211, VkglTestCase_010211_1, VkglTestCase_010211_2);

#define VkglTestCase_010212_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010212_2 "tor.bitwise_and_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010212, VkglTestCase_010212_1, VkglTestCase_010212_2);

#define VkglTestCase_010213_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010213_2 "or.bitwise_and_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010213, VkglTestCase_010213_1, VkglTestCase_010213_2);

#define VkglTestCase_010214_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010214_2 "tor.bitwise_and_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010214, VkglTestCase_010214_1, VkglTestCase_010214_2);

#define VkglTestCase_010215_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010215_2 "or.bitwise_and_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010215, VkglTestCase_010215_1, VkglTestCase_010215_2);

#define VkglTestCase_010216_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010216_2 "r.bitwise_and_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010216, VkglTestCase_010216_1, VkglTestCase_010216_2);

#define VkglTestCase_010217_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010217_2 ".bitwise_and_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010217, VkglTestCase_010217_1, VkglTestCase_010217_2);

#define VkglTestCase_010218_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010218_2 "tor.bitwise_and_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010218, VkglTestCase_010218_1, VkglTestCase_010218_2);

#define VkglTestCase_010219_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010219_2 "or.bitwise_and_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010219, VkglTestCase_010219_1, VkglTestCase_010219_2);

#define VkglTestCase_010220_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010220_2 "r.bitwise_and_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010220, VkglTestCase_010220_1, VkglTestCase_010220_2);

#define VkglTestCase_010221_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010221_2 ".bitwise_and_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010221, VkglTestCase_010221_1, VkglTestCase_010221_2);

#define VkglTestCase_010222_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010222_2 "tor.bitwise_and_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010222, VkglTestCase_010222_1, VkglTestCase_010222_2);

#define VkglTestCase_010223_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010223_2 "or.bitwise_and_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010223, VkglTestCase_010223_1, VkglTestCase_010223_2);

#define VkglTestCase_010224_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010224_2 "r.bitwise_and_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010224, VkglTestCase_010224_1, VkglTestCase_010224_2);

#define VkglTestCase_010225_1 "dEQP-GLES3.functional.shaders.operator.binary_operator"
#define VkglTestCase_010225_2 ".bitwise_and_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010225, VkglTestCase_010225_1, VkglTestCase_010225_2);

#define VkglTestCase_010226_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010226_2 "or.bitwise_and_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010226, VkglTestCase_010226_1, VkglTestCase_010226_2);

#define VkglTestCase_010227_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010227_2 "r.bitwise_and_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010227, VkglTestCase_010227_1, VkglTestCase_010227_2);

#define VkglTestCase_010228_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010228_2 "or.bitwise_and_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010228, VkglTestCase_010228_1, VkglTestCase_010228_2);

#define VkglTestCase_010229_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010229_2 "r.bitwise_and_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010229, VkglTestCase_010229_1, VkglTestCase_010229_2);

#define VkglTestCase_010230_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010230_2 "or.bitwise_and_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010230, VkglTestCase_010230_1, VkglTestCase_010230_2);

#define VkglTestCase_010231_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010231_2 "r.bitwise_and_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010231, VkglTestCase_010231_1, VkglTestCase_010231_2);
