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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002107_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002107_2 "ns.scalar_to_matrix.float_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002107, VkglTestCase_002107_1, VkglTestCase_002107_2);

#define VkglTestCase_002108_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002108_2 "s.scalar_to_matrix.float_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002108, VkglTestCase_002108_1, VkglTestCase_002108_2);

#define VkglTestCase_002109_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002109_2 "s.scalar_to_matrix.float_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002109, VkglTestCase_002109_1, VkglTestCase_002109_2);

#define VkglTestCase_002110_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002110_2 ".scalar_to_matrix.float_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002110, VkglTestCase_002110_1, VkglTestCase_002110_2);

#define VkglTestCase_002111_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002111_2 "s.scalar_to_matrix.float_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002111, VkglTestCase_002111_1, VkglTestCase_002111_2);

#define VkglTestCase_002112_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002112_2 ".scalar_to_matrix.float_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002112, VkglTestCase_002112_1, VkglTestCase_002112_2);

#define VkglTestCase_002113_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002113_2 "s.scalar_to_matrix.float_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002113, VkglTestCase_002113_1, VkglTestCase_002113_2);

#define VkglTestCase_002114_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002114_2 ".scalar_to_matrix.float_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002114, VkglTestCase_002114_1, VkglTestCase_002114_2);

#define VkglTestCase_002115_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002115_2 "ns.scalar_to_matrix.float_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002115, VkglTestCase_002115_1, VkglTestCase_002115_2);

#define VkglTestCase_002116_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002116_2 "s.scalar_to_matrix.float_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002116, VkglTestCase_002116_1, VkglTestCase_002116_2);

#define VkglTestCase_002117_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002117_2 "s.scalar_to_matrix.float_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002117, VkglTestCase_002117_1, VkglTestCase_002117_2);

#define VkglTestCase_002118_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002118_2 ".scalar_to_matrix.float_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002118, VkglTestCase_002118_1, VkglTestCase_002118_2);

#define VkglTestCase_002119_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002119_2 "s.scalar_to_matrix.float_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002119, VkglTestCase_002119_1, VkglTestCase_002119_2);

#define VkglTestCase_002120_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002120_2 ".scalar_to_matrix.float_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002120, VkglTestCase_002120_1, VkglTestCase_002120_2);

#define VkglTestCase_002121_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002121_2 "s.scalar_to_matrix.float_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002121, VkglTestCase_002121_1, VkglTestCase_002121_2);

#define VkglTestCase_002122_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002122_2 ".scalar_to_matrix.float_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002122, VkglTestCase_002122_1, VkglTestCase_002122_2);

#define VkglTestCase_002123_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002123_2 "ns.scalar_to_matrix.float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002123, VkglTestCase_002123_1, VkglTestCase_002123_2);

#define VkglTestCase_002124_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002124_2 "s.scalar_to_matrix.float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002124, VkglTestCase_002124_1, VkglTestCase_002124_2);

#define VkglTestCase_002125_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_002125_2 "ons.scalar_to_matrix.int_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002125, VkglTestCase_002125_1, VkglTestCase_002125_2);

#define VkglTestCase_002126_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002126_2 "ns.scalar_to_matrix.int_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002126, VkglTestCase_002126_1, VkglTestCase_002126_2);

#define VkglTestCase_002127_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002127_2 "ns.scalar_to_matrix.int_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002127, VkglTestCase_002127_1, VkglTestCase_002127_2);

#define VkglTestCase_002128_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002128_2 "s.scalar_to_matrix.int_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002128, VkglTestCase_002128_1, VkglTestCase_002128_2);

#define VkglTestCase_002129_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002129_2 "ns.scalar_to_matrix.int_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002129, VkglTestCase_002129_1, VkglTestCase_002129_2);

#define VkglTestCase_002130_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002130_2 "s.scalar_to_matrix.int_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002130, VkglTestCase_002130_1, VkglTestCase_002130_2);

#define VkglTestCase_002131_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002131_2 "ns.scalar_to_matrix.int_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002131, VkglTestCase_002131_1, VkglTestCase_002131_2);

#define VkglTestCase_002132_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002132_2 "s.scalar_to_matrix.int_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002132, VkglTestCase_002132_1, VkglTestCase_002132_2);

#define VkglTestCase_002133_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_002133_2 "ons.scalar_to_matrix.int_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002133, VkglTestCase_002133_1, VkglTestCase_002133_2);

#define VkglTestCase_002134_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002134_2 "ns.scalar_to_matrix.int_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002134, VkglTestCase_002134_1, VkglTestCase_002134_2);

#define VkglTestCase_002135_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002135_2 "ns.scalar_to_matrix.int_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002135, VkglTestCase_002135_1, VkglTestCase_002135_2);

#define VkglTestCase_002136_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002136_2 "s.scalar_to_matrix.int_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002136, VkglTestCase_002136_1, VkglTestCase_002136_2);

#define VkglTestCase_002137_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002137_2 "ns.scalar_to_matrix.int_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002137, VkglTestCase_002137_1, VkglTestCase_002137_2);

#define VkglTestCase_002138_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002138_2 "s.scalar_to_matrix.int_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002138, VkglTestCase_002138_1, VkglTestCase_002138_2);

#define VkglTestCase_002139_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002139_2 "ns.scalar_to_matrix.int_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002139, VkglTestCase_002139_1, VkglTestCase_002139_2);

#define VkglTestCase_002140_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002140_2 "s.scalar_to_matrix.int_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002140, VkglTestCase_002140_1, VkglTestCase_002140_2);

#define VkglTestCase_002141_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_002141_2 "ons.scalar_to_matrix.int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002141, VkglTestCase_002141_1, VkglTestCase_002141_2);

#define VkglTestCase_002142_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002142_2 "ns.scalar_to_matrix.int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002142, VkglTestCase_002142_1, VkglTestCase_002142_2);

#define VkglTestCase_002143_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002143_2 "ns.scalar_to_matrix.uint_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002143, VkglTestCase_002143_1, VkglTestCase_002143_2);

#define VkglTestCase_002144_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002144_2 "s.scalar_to_matrix.uint_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002144, VkglTestCase_002144_1, VkglTestCase_002144_2);

#define VkglTestCase_002145_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002145_2 "s.scalar_to_matrix.uint_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002145, VkglTestCase_002145_1, VkglTestCase_002145_2);

#define VkglTestCase_002146_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002146_2 ".scalar_to_matrix.uint_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002146, VkglTestCase_002146_1, VkglTestCase_002146_2);

#define VkglTestCase_002147_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002147_2 "s.scalar_to_matrix.uint_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002147, VkglTestCase_002147_1, VkglTestCase_002147_2);

#define VkglTestCase_002148_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002148_2 ".scalar_to_matrix.uint_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002148, VkglTestCase_002148_1, VkglTestCase_002148_2);

#define VkglTestCase_002149_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002149_2 "s.scalar_to_matrix.uint_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002149, VkglTestCase_002149_1, VkglTestCase_002149_2);

#define VkglTestCase_002150_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002150_2 ".scalar_to_matrix.uint_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002150, VkglTestCase_002150_1, VkglTestCase_002150_2);

#define VkglTestCase_002151_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002151_2 "ns.scalar_to_matrix.uint_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002151, VkglTestCase_002151_1, VkglTestCase_002151_2);

#define VkglTestCase_002152_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002152_2 "s.scalar_to_matrix.uint_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002152, VkglTestCase_002152_1, VkglTestCase_002152_2);

#define VkglTestCase_002153_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002153_2 "s.scalar_to_matrix.uint_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002153, VkglTestCase_002153_1, VkglTestCase_002153_2);

#define VkglTestCase_002154_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002154_2 ".scalar_to_matrix.uint_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002154, VkglTestCase_002154_1, VkglTestCase_002154_2);

#define VkglTestCase_002155_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002155_2 "s.scalar_to_matrix.uint_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002155, VkglTestCase_002155_1, VkglTestCase_002155_2);

#define VkglTestCase_002156_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002156_2 ".scalar_to_matrix.uint_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002156, VkglTestCase_002156_1, VkglTestCase_002156_2);

#define VkglTestCase_002157_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002157_2 "s.scalar_to_matrix.uint_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002157, VkglTestCase_002157_1, VkglTestCase_002157_2);

#define VkglTestCase_002158_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002158_2 ".scalar_to_matrix.uint_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002158, VkglTestCase_002158_1, VkglTestCase_002158_2);

#define VkglTestCase_002159_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002159_2 "ns.scalar_to_matrix.uint_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002159, VkglTestCase_002159_1, VkglTestCase_002159_2);

#define VkglTestCase_002160_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002160_2 "s.scalar_to_matrix.uint_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002160, VkglTestCase_002160_1, VkglTestCase_002160_2);

#define VkglTestCase_002161_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002161_2 "ns.scalar_to_matrix.bool_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002161, VkglTestCase_002161_1, VkglTestCase_002161_2);

#define VkglTestCase_002162_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002162_2 "s.scalar_to_matrix.bool_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002162, VkglTestCase_002162_1, VkglTestCase_002162_2);

#define VkglTestCase_002163_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002163_2 "s.scalar_to_matrix.bool_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002163, VkglTestCase_002163_1, VkglTestCase_002163_2);

#define VkglTestCase_002164_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002164_2 ".scalar_to_matrix.bool_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002164, VkglTestCase_002164_1, VkglTestCase_002164_2);

#define VkglTestCase_002165_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002165_2 "s.scalar_to_matrix.bool_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002165, VkglTestCase_002165_1, VkglTestCase_002165_2);

#define VkglTestCase_002166_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002166_2 ".scalar_to_matrix.bool_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002166, VkglTestCase_002166_1, VkglTestCase_002166_2);

#define VkglTestCase_002167_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002167_2 "s.scalar_to_matrix.bool_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002167, VkglTestCase_002167_1, VkglTestCase_002167_2);

#define VkglTestCase_002168_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002168_2 ".scalar_to_matrix.bool_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002168, VkglTestCase_002168_1, VkglTestCase_002168_2);

#define VkglTestCase_002169_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002169_2 "ns.scalar_to_matrix.bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002169, VkglTestCase_002169_1, VkglTestCase_002169_2);

#define VkglTestCase_002170_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002170_2 "s.scalar_to_matrix.bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002170, VkglTestCase_002170_1, VkglTestCase_002170_2);

#define VkglTestCase_002171_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002171_2 "s.scalar_to_matrix.bool_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002171, VkglTestCase_002171_1, VkglTestCase_002171_2);

#define VkglTestCase_002172_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002172_2 ".scalar_to_matrix.bool_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002172, VkglTestCase_002172_1, VkglTestCase_002172_2);

#define VkglTestCase_002173_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002173_2 "s.scalar_to_matrix.bool_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002173, VkglTestCase_002173_1, VkglTestCase_002173_2);

#define VkglTestCase_002174_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002174_2 ".scalar_to_matrix.bool_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002174, VkglTestCase_002174_1, VkglTestCase_002174_2);

#define VkglTestCase_002175_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002175_2 "s.scalar_to_matrix.bool_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002175, VkglTestCase_002175_1, VkglTestCase_002175_2);

#define VkglTestCase_002176_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002176_2 ".scalar_to_matrix.bool_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002176, VkglTestCase_002176_1, VkglTestCase_002176_2);

#define VkglTestCase_002177_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002177_2 "ns.scalar_to_matrix.bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002177, VkglTestCase_002177_1, VkglTestCase_002177_2);

#define VkglTestCase_002178_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002178_2 "s.scalar_to_matrix.bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002178, VkglTestCase_002178_1, VkglTestCase_002178_2);
