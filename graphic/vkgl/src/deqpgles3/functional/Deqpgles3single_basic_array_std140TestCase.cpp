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
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035067_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035067_2 "_basic_array.std140.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035067, VkglTestCase_035067_1, VkglTestCase_035067_2);

#define VkglTestCase_035068_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035068_2 "basic_array.std140.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035068, VkglTestCase_035068_1, VkglTestCase_035068_2);

#define VkglTestCase_035069_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035069_2 "e_basic_array.std140.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035069, VkglTestCase_035069_1, VkglTestCase_035069_2);

#define VkglTestCase_035070_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035070_2 "e_basic_array.std140.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035070, VkglTestCase_035070_1, VkglTestCase_035070_2);

#define VkglTestCase_035071_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035071_2 "_basic_array.std140.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035071, VkglTestCase_035071_1, VkglTestCase_035071_2);

#define VkglTestCase_035072_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035072_2 "le_basic_array.std140.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035072, VkglTestCase_035072_1, VkglTestCase_035072_2);

#define VkglTestCase_035073_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035073_2 "e_basic_array.std140.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035073, VkglTestCase_035073_1, VkglTestCase_035073_2);

#define VkglTestCase_035074_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035074_2 "_basic_array.std140.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035074, VkglTestCase_035074_1, VkglTestCase_035074_2);

#define VkglTestCase_035075_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035075_2 "le_basic_array.std140.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035075, VkglTestCase_035075_1, VkglTestCase_035075_2);

#define VkglTestCase_035076_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035076_2 "e_basic_array.std140.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035076, VkglTestCase_035076_1, VkglTestCase_035076_2);

#define VkglTestCase_035077_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035077_2 "_basic_array.std140.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035077, VkglTestCase_035077_1, VkglTestCase_035077_2);

#define VkglTestCase_035078_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035078_2 "le_basic_array.std140.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035078, VkglTestCase_035078_1, VkglTestCase_035078_2);

#define VkglTestCase_035079_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035079_2 "e_basic_array.std140.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035079, VkglTestCase_035079_1, VkglTestCase_035079_2);

#define VkglTestCase_035080_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035080_2 "_basic_array.std140.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035080, VkglTestCase_035080_1, VkglTestCase_035080_2);

#define VkglTestCase_035081_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035081_2 "le_basic_array.std140.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035081, VkglTestCase_035081_1, VkglTestCase_035081_2);

#define VkglTestCase_035082_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035082_2 "_basic_array.std140.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035082, VkglTestCase_035082_1, VkglTestCase_035082_2);

#define VkglTestCase_035083_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035083_2 "basic_array.std140.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035083, VkglTestCase_035083_1, VkglTestCase_035083_2);

#define VkglTestCase_035084_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035084_2 "e_basic_array.std140.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035084, VkglTestCase_035084_1, VkglTestCase_035084_2);

#define VkglTestCase_035085_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035085_2 "_basic_array.std140.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035085, VkglTestCase_035085_1, VkglTestCase_035085_2);

#define VkglTestCase_035086_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035086_2 "basic_array.std140.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035086, VkglTestCase_035086_1, VkglTestCase_035086_2);

#define VkglTestCase_035087_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035087_2 "e_basic_array.std140.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035087, VkglTestCase_035087_1, VkglTestCase_035087_2);

#define VkglTestCase_035088_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035088_2 "_basic_array.std140.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035088, VkglTestCase_035088_1, VkglTestCase_035088_2);

#define VkglTestCase_035089_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035089_2 "basic_array.std140.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035089, VkglTestCase_035089_1, VkglTestCase_035089_2);

#define VkglTestCase_035090_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035090_2 "e_basic_array.std140.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035090, VkglTestCase_035090_1, VkglTestCase_035090_2);

#define VkglTestCase_035091_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035091_2 "e_basic_array.std140.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035091, VkglTestCase_035091_1, VkglTestCase_035091_2);

#define VkglTestCase_035092_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035092_2 "_basic_array.std140.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035092, VkglTestCase_035092_1, VkglTestCase_035092_2);

#define VkglTestCase_035093_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035093_2 "le_basic_array.std140.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035093, VkglTestCase_035093_1, VkglTestCase_035093_2);

#define VkglTestCase_035094_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035094_2 "_basic_array.std140.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035094, VkglTestCase_035094_1, VkglTestCase_035094_2);

#define VkglTestCase_035095_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035095_2 "basic_array.std140.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035095, VkglTestCase_035095_1, VkglTestCase_035095_2);

#define VkglTestCase_035096_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035096_2 "e_basic_array.std140.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035096, VkglTestCase_035096_1, VkglTestCase_035096_2);

#define VkglTestCase_035097_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035097_2 "_basic_array.std140.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035097, VkglTestCase_035097_1, VkglTestCase_035097_2);

#define VkglTestCase_035098_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035098_2 "basic_array.std140.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035098, VkglTestCase_035098_1, VkglTestCase_035098_2);

#define VkglTestCase_035099_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035099_2 "e_basic_array.std140.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035099, VkglTestCase_035099_1, VkglTestCase_035099_2);

#define VkglTestCase_035100_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035100_2 "_basic_array.std140.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035100, VkglTestCase_035100_1, VkglTestCase_035100_2);

#define VkglTestCase_035101_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035101_2 "basic_array.std140.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035101, VkglTestCase_035101_1, VkglTestCase_035101_2);

#define VkglTestCase_035102_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035102_2 "e_basic_array.std140.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035102, VkglTestCase_035102_1, VkglTestCase_035102_2);

#define VkglTestCase_035103_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035103_2 "e_basic_array.std140.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035103, VkglTestCase_035103_1, VkglTestCase_035103_2);

#define VkglTestCase_035104_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035104_2 "_basic_array.std140.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035104, VkglTestCase_035104_1, VkglTestCase_035104_2);

#define VkglTestCase_035105_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035105_2 "le_basic_array.std140.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035105, VkglTestCase_035105_1, VkglTestCase_035105_2);

#define VkglTestCase_035106_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035106_2 "_basic_array.std140.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035106, VkglTestCase_035106_1, VkglTestCase_035106_2);

#define VkglTestCase_035107_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035107_2 "basic_array.std140.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035107, VkglTestCase_035107_1, VkglTestCase_035107_2);

#define VkglTestCase_035108_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035108_2 "e_basic_array.std140.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035108, VkglTestCase_035108_1, VkglTestCase_035108_2);

#define VkglTestCase_035109_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035109_2 "_basic_array.std140.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035109, VkglTestCase_035109_1, VkglTestCase_035109_2);

#define VkglTestCase_035110_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035110_2 "basic_array.std140.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035110, VkglTestCase_035110_1, VkglTestCase_035110_2);

#define VkglTestCase_035111_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035111_2 "e_basic_array.std140.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035111, VkglTestCase_035111_1, VkglTestCase_035111_2);

#define VkglTestCase_035112_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035112_2 "_basic_array.std140.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035112, VkglTestCase_035112_1, VkglTestCase_035112_2);

#define VkglTestCase_035113_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035113_2 "basic_array.std140.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035113, VkglTestCase_035113_1, VkglTestCase_035113_2);

#define VkglTestCase_035114_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035114_2 "e_basic_array.std140.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035114, VkglTestCase_035114_1, VkglTestCase_035114_2);

#define VkglTestCase_035115_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035115_2 "e_basic_array.std140.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035115, VkglTestCase_035115_1, VkglTestCase_035115_2);

#define VkglTestCase_035116_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035116_2 "_basic_array.std140.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035116, VkglTestCase_035116_1, VkglTestCase_035116_2);

#define VkglTestCase_035117_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035117_2 "le_basic_array.std140.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035117, VkglTestCase_035117_1, VkglTestCase_035117_2);

#define VkglTestCase_035118_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035118_2 "ic_array.std140.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035118, VkglTestCase_035118_1, VkglTestCase_035118_2);

#define VkglTestCase_035119_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035119_2 "c_array.std140.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035119, VkglTestCase_035119_1, VkglTestCase_035119_2);

#define VkglTestCase_035120_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_035120_2 "sic_array.std140.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035120, VkglTestCase_035120_1, VkglTestCase_035120_2);

#define VkglTestCase_035121_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035121_2 "_array.std140.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035121, VkglTestCase_035121_1, VkglTestCase_035121_2);

#define VkglTestCase_035122_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035122_2 "array.std140.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035122, VkglTestCase_035122_1, VkglTestCase_035122_2);

#define VkglTestCase_035123_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035123_2 "c_array.std140.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035123, VkglTestCase_035123_1, VkglTestCase_035123_2);

#define VkglTestCase_035124_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035124_2 "e_basic_array.std140.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035124, VkglTestCase_035124_1, VkglTestCase_035124_2);

#define VkglTestCase_035125_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035125_2 "_basic_array.std140.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035125, VkglTestCase_035125_1, VkglTestCase_035125_2);

#define VkglTestCase_035126_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035126_2 "le_basic_array.std140.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035126, VkglTestCase_035126_1, VkglTestCase_035126_2);

#define VkglTestCase_035127_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035127_2 "ic_array.std140.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035127, VkglTestCase_035127_1, VkglTestCase_035127_2);

#define VkglTestCase_035128_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035128_2 "c_array.std140.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035128, VkglTestCase_035128_1, VkglTestCase_035128_2);

#define VkglTestCase_035129_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_035129_2 "sic_array.std140.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035129, VkglTestCase_035129_1, VkglTestCase_035129_2);

#define VkglTestCase_035130_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035130_2 "_array.std140.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035130, VkglTestCase_035130_1, VkglTestCase_035130_2);

#define VkglTestCase_035131_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035131_2 "array.std140.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035131, VkglTestCase_035131_1, VkglTestCase_035131_2);

#define VkglTestCase_035132_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035132_2 "c_array.std140.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035132, VkglTestCase_035132_1, VkglTestCase_035132_2);

#define VkglTestCase_035133_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035133_2 "e_basic_array.std140.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035133, VkglTestCase_035133_1, VkglTestCase_035133_2);

#define VkglTestCase_035134_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035134_2 "_basic_array.std140.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035134, VkglTestCase_035134_1, VkglTestCase_035134_2);

#define VkglTestCase_035135_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_035135_2 "le_basic_array.std140.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035135, VkglTestCase_035135_1, VkglTestCase_035135_2);

#define VkglTestCase_035136_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035136_2 "ic_array.std140.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035136, VkglTestCase_035136_1, VkglTestCase_035136_2);

#define VkglTestCase_035137_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035137_2 "c_array.std140.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035137, VkglTestCase_035137_1, VkglTestCase_035137_2);

#define VkglTestCase_035138_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_035138_2 "sic_array.std140.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035138, VkglTestCase_035138_1, VkglTestCase_035138_2);

#define VkglTestCase_035139_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035139_2 "_array.std140.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035139, VkglTestCase_035139_1, VkglTestCase_035139_2);

#define VkglTestCase_035140_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035140_2 "array.std140.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035140, VkglTestCase_035140_1, VkglTestCase_035140_2);

#define VkglTestCase_035141_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035141_2 "c_array.std140.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035141, VkglTestCase_035141_1, VkglTestCase_035141_2);

#define VkglTestCase_035142_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035142_2 "_basic_array.std140.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035142, VkglTestCase_035142_1, VkglTestCase_035142_2);

#define VkglTestCase_035143_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035143_2 "basic_array.std140.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035143, VkglTestCase_035143_1, VkglTestCase_035143_2);

#define VkglTestCase_035144_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035144_2 "e_basic_array.std140.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035144, VkglTestCase_035144_1, VkglTestCase_035144_2);

#define VkglTestCase_035145_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035145_2 "c_array.std140.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035145, VkglTestCase_035145_1, VkglTestCase_035145_2);

#define VkglTestCase_035146_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035146_2 "_array.std140.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035146, VkglTestCase_035146_1, VkglTestCase_035146_2);

#define VkglTestCase_035147_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035147_2 "ic_array.std140.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035147, VkglTestCase_035147_1, VkglTestCase_035147_2);

#define VkglTestCase_035148_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035148_2 "array.std140.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035148, VkglTestCase_035148_1, VkglTestCase_035148_2);

#define VkglTestCase_035149_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035149_2 "rray.std140.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035149, VkglTestCase_035149_1, VkglTestCase_035149_2);

#define VkglTestCase_035150_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035150_2 "_array.std140.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035150, VkglTestCase_035150_1, VkglTestCase_035150_2);

#define VkglTestCase_035151_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035151_2 "_basic_array.std140.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035151, VkglTestCase_035151_1, VkglTestCase_035151_2);

#define VkglTestCase_035152_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035152_2 "basic_array.std140.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035152, VkglTestCase_035152_1, VkglTestCase_035152_2);

#define VkglTestCase_035153_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035153_2 "e_basic_array.std140.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035153, VkglTestCase_035153_1, VkglTestCase_035153_2);

#define VkglTestCase_035154_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035154_2 "c_array.std140.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035154, VkglTestCase_035154_1, VkglTestCase_035154_2);

#define VkglTestCase_035155_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035155_2 "_array.std140.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035155, VkglTestCase_035155_1, VkglTestCase_035155_2);

#define VkglTestCase_035156_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035156_2 "ic_array.std140.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035156, VkglTestCase_035156_1, VkglTestCase_035156_2);

#define VkglTestCase_035157_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035157_2 "array.std140.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035157, VkglTestCase_035157_1, VkglTestCase_035157_2);

#define VkglTestCase_035158_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035158_2 "rray.std140.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035158, VkglTestCase_035158_1, VkglTestCase_035158_2);

#define VkglTestCase_035159_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035159_2 "_array.std140.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035159, VkglTestCase_035159_1, VkglTestCase_035159_2);

#define VkglTestCase_035160_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035160_2 "_basic_array.std140.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035160, VkglTestCase_035160_1, VkglTestCase_035160_2);

#define VkglTestCase_035161_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035161_2 "basic_array.std140.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035161, VkglTestCase_035161_1, VkglTestCase_035161_2);

#define VkglTestCase_035162_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035162_2 "e_basic_array.std140.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035162, VkglTestCase_035162_1, VkglTestCase_035162_2);

#define VkglTestCase_035163_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035163_2 "c_array.std140.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035163, VkglTestCase_035163_1, VkglTestCase_035163_2);

#define VkglTestCase_035164_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035164_2 "_array.std140.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035164, VkglTestCase_035164_1, VkglTestCase_035164_2);

#define VkglTestCase_035165_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035165_2 "ic_array.std140.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035165, VkglTestCase_035165_1, VkglTestCase_035165_2);

#define VkglTestCase_035166_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035166_2 "array.std140.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035166, VkglTestCase_035166_1, VkglTestCase_035166_2);

#define VkglTestCase_035167_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035167_2 "rray.std140.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035167, VkglTestCase_035167_1, VkglTestCase_035167_2);

#define VkglTestCase_035168_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035168_2 "_array.std140.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035168, VkglTestCase_035168_1, VkglTestCase_035168_2);

#define VkglTestCase_035169_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035169_2 "_basic_array.std140.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035169, VkglTestCase_035169_1, VkglTestCase_035169_2);

#define VkglTestCase_035170_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035170_2 "basic_array.std140.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035170, VkglTestCase_035170_1, VkglTestCase_035170_2);

#define VkglTestCase_035171_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035171_2 "e_basic_array.std140.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035171, VkglTestCase_035171_1, VkglTestCase_035171_2);

#define VkglTestCase_035172_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035172_2 "c_array.std140.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035172, VkglTestCase_035172_1, VkglTestCase_035172_2);

#define VkglTestCase_035173_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035173_2 "_array.std140.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035173, VkglTestCase_035173_1, VkglTestCase_035173_2);

#define VkglTestCase_035174_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035174_2 "ic_array.std140.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035174, VkglTestCase_035174_1, VkglTestCase_035174_2);

#define VkglTestCase_035175_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035175_2 "array.std140.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035175, VkglTestCase_035175_1, VkglTestCase_035175_2);

#define VkglTestCase_035176_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035176_2 "rray.std140.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035176, VkglTestCase_035176_1, VkglTestCase_035176_2);

#define VkglTestCase_035177_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035177_2 "_array.std140.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035177, VkglTestCase_035177_1, VkglTestCase_035177_2);

#define VkglTestCase_035178_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035178_2 "_basic_array.std140.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035178, VkglTestCase_035178_1, VkglTestCase_035178_2);

#define VkglTestCase_035179_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035179_2 "basic_array.std140.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035179, VkglTestCase_035179_1, VkglTestCase_035179_2);

#define VkglTestCase_035180_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035180_2 "e_basic_array.std140.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035180, VkglTestCase_035180_1, VkglTestCase_035180_2);

#define VkglTestCase_035181_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035181_2 "c_array.std140.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035181, VkglTestCase_035181_1, VkglTestCase_035181_2);

#define VkglTestCase_035182_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035182_2 "_array.std140.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035182, VkglTestCase_035182_1, VkglTestCase_035182_2);

#define VkglTestCase_035183_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035183_2 "ic_array.std140.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035183, VkglTestCase_035183_1, VkglTestCase_035183_2);

#define VkglTestCase_035184_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035184_2 "array.std140.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035184, VkglTestCase_035184_1, VkglTestCase_035184_2);

#define VkglTestCase_035185_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035185_2 "rray.std140.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035185, VkglTestCase_035185_1, VkglTestCase_035185_2);

#define VkglTestCase_035186_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035186_2 "_array.std140.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035186, VkglTestCase_035186_1, VkglTestCase_035186_2);

#define VkglTestCase_035187_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035187_2 "_basic_array.std140.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035187, VkglTestCase_035187_1, VkglTestCase_035187_2);

#define VkglTestCase_035188_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035188_2 "basic_array.std140.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035188, VkglTestCase_035188_1, VkglTestCase_035188_2);

#define VkglTestCase_035189_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035189_2 "e_basic_array.std140.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035189, VkglTestCase_035189_1, VkglTestCase_035189_2);

#define VkglTestCase_035190_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035190_2 "c_array.std140.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035190, VkglTestCase_035190_1, VkglTestCase_035190_2);

#define VkglTestCase_035191_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035191_2 "_array.std140.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035191, VkglTestCase_035191_1, VkglTestCase_035191_2);

#define VkglTestCase_035192_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035192_2 "ic_array.std140.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035192, VkglTestCase_035192_1, VkglTestCase_035192_2);

#define VkglTestCase_035193_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035193_2 "array.std140.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035193, VkglTestCase_035193_1, VkglTestCase_035193_2);

#define VkglTestCase_035194_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035194_2 "rray.std140.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035194, VkglTestCase_035194_1, VkglTestCase_035194_2);

#define VkglTestCase_035195_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035195_2 "_array.std140.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035195, VkglTestCase_035195_1, VkglTestCase_035195_2);
