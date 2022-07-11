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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013109_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013109_2 "tput_types.user_ptr_0_0_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013109, VkglTestCase_013109_1, VkglTestCase_013109_2);

#define VkglTestCase_013110_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013110_2 "put_types.user_ptr_0_0_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013110, VkglTestCase_013110_1, VkglTestCase_013110_2);

#define VkglTestCase_013111_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013111_2 "tput_types.user_ptr_0_0_float3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013111, VkglTestCase_013111_1, VkglTestCase_013111_2);

#define VkglTestCase_013112_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013112_2 "put_types.user_ptr_0_0_float3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013112, VkglTestCase_013112_1, VkglTestCase_013112_2);

#define VkglTestCase_013113_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013113_2 "tput_types.user_ptr_0_0_float4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013113, VkglTestCase_013113_1, VkglTestCase_013113_2);

#define VkglTestCase_013114_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013114_2 "put_types.user_ptr_0_0_float4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013114, VkglTestCase_013114_1, VkglTestCase_013114_2);

#define VkglTestCase_013115_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013115_2 "tput_types.user_ptr_0_0_float2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013115, VkglTestCase_013115_1, VkglTestCase_013115_2);

#define VkglTestCase_013116_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013116_2 "put_types.user_ptr_0_0_float2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013116, VkglTestCase_013116_1, VkglTestCase_013116_2);

#define VkglTestCase_013117_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013117_2 "tput_types.user_ptr_0_0_float3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013117, VkglTestCase_013117_1, VkglTestCase_013117_2);

#define VkglTestCase_013118_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013118_2 "put_types.user_ptr_0_0_float3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013118, VkglTestCase_013118_1, VkglTestCase_013118_2);

#define VkglTestCase_013119_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013119_2 "tput_types.user_ptr_0_0_float4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013119, VkglTestCase_013119_1, VkglTestCase_013119_2);

#define VkglTestCase_013120_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013120_2 "put_types.user_ptr_0_0_float4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013120, VkglTestCase_013120_1, VkglTestCase_013120_2);

#define VkglTestCase_013121_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013121_2 "tput_types.user_ptr_0_0_float2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013121, VkglTestCase_013121_1, VkglTestCase_013121_2);

#define VkglTestCase_013122_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013122_2 "put_types.user_ptr_0_0_float2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013122, VkglTestCase_013122_1, VkglTestCase_013122_2);

#define VkglTestCase_013123_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013123_2 "tput_types.user_ptr_0_0_float3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013123, VkglTestCase_013123_1, VkglTestCase_013123_2);

#define VkglTestCase_013124_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013124_2 "put_types.user_ptr_0_0_float3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013124, VkglTestCase_013124_1, VkglTestCase_013124_2);

#define VkglTestCase_013125_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013125_2 "tput_types.user_ptr_0_0_float4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013125, VkglTestCase_013125_1, VkglTestCase_013125_2);

#define VkglTestCase_013126_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013126_2 "put_types.user_ptr_0_0_float4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013126, VkglTestCase_013126_1, VkglTestCase_013126_2);

#define VkglTestCase_013127_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013127_2 "tput_types.user_ptr_0_0_short2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013127, VkglTestCase_013127_1, VkglTestCase_013127_2);

#define VkglTestCase_013128_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013128_2 "put_types.user_ptr_0_0_short2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013128, VkglTestCase_013128_1, VkglTestCase_013128_2);

#define VkglTestCase_013129_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013129_2 "tput_types.user_ptr_0_0_short3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013129, VkglTestCase_013129_1, VkglTestCase_013129_2);

#define VkglTestCase_013130_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013130_2 "put_types.user_ptr_0_0_short3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013130, VkglTestCase_013130_1, VkglTestCase_013130_2);

#define VkglTestCase_013131_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013131_2 "tput_types.user_ptr_0_0_short4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013131, VkglTestCase_013131_1, VkglTestCase_013131_2);

#define VkglTestCase_013132_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013132_2 "put_types.user_ptr_0_0_short4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013132, VkglTestCase_013132_1, VkglTestCase_013132_2);

#define VkglTestCase_013133_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013133_2 "tput_types.user_ptr_0_0_short2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013133, VkglTestCase_013133_1, VkglTestCase_013133_2);

#define VkglTestCase_013134_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013134_2 "put_types.user_ptr_0_0_short2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013134, VkglTestCase_013134_1, VkglTestCase_013134_2);

#define VkglTestCase_013135_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013135_2 "tput_types.user_ptr_0_0_short3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013135, VkglTestCase_013135_1, VkglTestCase_013135_2);

#define VkglTestCase_013136_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013136_2 "put_types.user_ptr_0_0_short3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013136, VkglTestCase_013136_1, VkglTestCase_013136_2);

#define VkglTestCase_013137_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013137_2 "tput_types.user_ptr_0_0_short4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013137, VkglTestCase_013137_1, VkglTestCase_013137_2);

#define VkglTestCase_013138_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013138_2 "put_types.user_ptr_0_0_short4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013138, VkglTestCase_013138_1, VkglTestCase_013138_2);

#define VkglTestCase_013139_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013139_2 "tput_types.user_ptr_0_0_short2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013139, VkglTestCase_013139_1, VkglTestCase_013139_2);

#define VkglTestCase_013140_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013140_2 "put_types.user_ptr_0_0_short2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013140, VkglTestCase_013140_1, VkglTestCase_013140_2);

#define VkglTestCase_013141_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013141_2 "tput_types.user_ptr_0_0_short3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013141, VkglTestCase_013141_1, VkglTestCase_013141_2);

#define VkglTestCase_013142_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013142_2 "put_types.user_ptr_0_0_short3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013142, VkglTestCase_013142_1, VkglTestCase_013142_2);

#define VkglTestCase_013143_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013143_2 "tput_types.user_ptr_0_0_short4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013143, VkglTestCase_013143_1, VkglTestCase_013143_2);

#define VkglTestCase_013144_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013144_2 "put_types.user_ptr_0_0_short4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013144, VkglTestCase_013144_1, VkglTestCase_013144_2);

#define VkglTestCase_013145_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013145_2 "tput_types.user_ptr_0_0_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013145, VkglTestCase_013145_1, VkglTestCase_013145_2);

#define VkglTestCase_013146_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013146_2 "put_types.user_ptr_0_0_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013146, VkglTestCase_013146_1, VkglTestCase_013146_2);

#define VkglTestCase_013147_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013147_2 "tput_types.user_ptr_0_0_byte3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013147, VkglTestCase_013147_1, VkglTestCase_013147_2);

#define VkglTestCase_013148_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013148_2 "put_types.user_ptr_0_0_byte3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013148, VkglTestCase_013148_1, VkglTestCase_013148_2);

#define VkglTestCase_013149_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013149_2 "tput_types.user_ptr_0_0_byte4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013149, VkglTestCase_013149_1, VkglTestCase_013149_2);

#define VkglTestCase_013150_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013150_2 "put_types.user_ptr_0_0_byte4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013150, VkglTestCase_013150_1, VkglTestCase_013150_2);

#define VkglTestCase_013151_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013151_2 "tput_types.user_ptr_0_0_byte2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013151, VkglTestCase_013151_1, VkglTestCase_013151_2);

#define VkglTestCase_013152_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013152_2 "put_types.user_ptr_0_0_byte2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013152, VkglTestCase_013152_1, VkglTestCase_013152_2);

#define VkglTestCase_013153_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013153_2 "tput_types.user_ptr_0_0_byte3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013153, VkglTestCase_013153_1, VkglTestCase_013153_2);

#define VkglTestCase_013154_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013154_2 "put_types.user_ptr_0_0_byte3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013154, VkglTestCase_013154_1, VkglTestCase_013154_2);

#define VkglTestCase_013155_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013155_2 "tput_types.user_ptr_0_0_byte4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013155, VkglTestCase_013155_1, VkglTestCase_013155_2);

#define VkglTestCase_013156_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013156_2 "put_types.user_ptr_0_0_byte4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013156, VkglTestCase_013156_1, VkglTestCase_013156_2);

#define VkglTestCase_013157_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013157_2 "tput_types.user_ptr_0_0_byte2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013157, VkglTestCase_013157_1, VkglTestCase_013157_2);

#define VkglTestCase_013158_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013158_2 "put_types.user_ptr_0_0_byte2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013158, VkglTestCase_013158_1, VkglTestCase_013158_2);

#define VkglTestCase_013159_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013159_2 "tput_types.user_ptr_0_0_byte3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013159, VkglTestCase_013159_1, VkglTestCase_013159_2);

#define VkglTestCase_013160_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013160_2 "put_types.user_ptr_0_0_byte3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013160, VkglTestCase_013160_1, VkglTestCase_013160_2);

#define VkglTestCase_013161_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013161_2 "tput_types.user_ptr_0_0_byte4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013161, VkglTestCase_013161_1, VkglTestCase_013161_2);

#define VkglTestCase_013162_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013162_2 "put_types.user_ptr_0_0_byte4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013162, VkglTestCase_013162_1, VkglTestCase_013162_2);

#define VkglTestCase_013163_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013163_2 "types.user_ptr_0_0_unsigned_short2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013163, VkglTestCase_013163_1, VkglTestCase_013163_2);

#define VkglTestCase_013164_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013164_2 "ypes.user_ptr_0_0_unsigned_short2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013164, VkglTestCase_013164_1, VkglTestCase_013164_2);

#define VkglTestCase_013165_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013165_2 "types.user_ptr_0_0_unsigned_short3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013165, VkglTestCase_013165_1, VkglTestCase_013165_2);

#define VkglTestCase_013166_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013166_2 "ypes.user_ptr_0_0_unsigned_short3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013166, VkglTestCase_013166_1, VkglTestCase_013166_2);

#define VkglTestCase_013167_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013167_2 "types.user_ptr_0_0_unsigned_short4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013167, VkglTestCase_013167_1, VkglTestCase_013167_2);

#define VkglTestCase_013168_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013168_2 "ypes.user_ptr_0_0_unsigned_short4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013168, VkglTestCase_013168_1, VkglTestCase_013168_2);

#define VkglTestCase_013169_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013169_2 "types.user_ptr_0_0_unsigned_short2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013169, VkglTestCase_013169_1, VkglTestCase_013169_2);

#define VkglTestCase_013170_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013170_2 "ypes.user_ptr_0_0_unsigned_short2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013170, VkglTestCase_013170_1, VkglTestCase_013170_2);

#define VkglTestCase_013171_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013171_2 "types.user_ptr_0_0_unsigned_short3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013171, VkglTestCase_013171_1, VkglTestCase_013171_2);

#define VkglTestCase_013172_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013172_2 "ypes.user_ptr_0_0_unsigned_short3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013172, VkglTestCase_013172_1, VkglTestCase_013172_2);

#define VkglTestCase_013173_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013173_2 "types.user_ptr_0_0_unsigned_short4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013173, VkglTestCase_013173_1, VkglTestCase_013173_2);

#define VkglTestCase_013174_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013174_2 "ypes.user_ptr_0_0_unsigned_short4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013174, VkglTestCase_013174_1, VkglTestCase_013174_2);

#define VkglTestCase_013175_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013175_2 "types.user_ptr_0_0_unsigned_short2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013175, VkglTestCase_013175_1, VkglTestCase_013175_2);

#define VkglTestCase_013176_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013176_2 "ypes.user_ptr_0_0_unsigned_short2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013176, VkglTestCase_013176_1, VkglTestCase_013176_2);

#define VkglTestCase_013177_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013177_2 "types.user_ptr_0_0_unsigned_short3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013177, VkglTestCase_013177_1, VkglTestCase_013177_2);

#define VkglTestCase_013178_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013178_2 "ypes.user_ptr_0_0_unsigned_short3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013178, VkglTestCase_013178_1, VkglTestCase_013178_2);

#define VkglTestCase_013179_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013179_2 "types.user_ptr_0_0_unsigned_short4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013179, VkglTestCase_013179_1, VkglTestCase_013179_2);

#define VkglTestCase_013180_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_t"
#define VkglTestCase_013180_2 "ypes.user_ptr_0_0_unsigned_short4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013180, VkglTestCase_013180_1, VkglTestCase_013180_2);

#define VkglTestCase_013181_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013181_2 "_types.user_ptr_0_0_unsigned_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013181, VkglTestCase_013181_1, VkglTestCase_013181_2);

#define VkglTestCase_013182_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013182_2 "types.user_ptr_0_0_unsigned_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013182, VkglTestCase_013182_1, VkglTestCase_013182_2);

#define VkglTestCase_013183_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013183_2 "_types.user_ptr_0_0_unsigned_byte3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013183, VkglTestCase_013183_1, VkglTestCase_013183_2);

#define VkglTestCase_013184_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013184_2 "types.user_ptr_0_0_unsigned_byte3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013184, VkglTestCase_013184_1, VkglTestCase_013184_2);

#define VkglTestCase_013185_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013185_2 "_types.user_ptr_0_0_unsigned_byte4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013185, VkglTestCase_013185_1, VkglTestCase_013185_2);

#define VkglTestCase_013186_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013186_2 "types.user_ptr_0_0_unsigned_byte4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013186, VkglTestCase_013186_1, VkglTestCase_013186_2);

#define VkglTestCase_013187_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013187_2 "_types.user_ptr_0_0_unsigned_byte2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013187, VkglTestCase_013187_1, VkglTestCase_013187_2);

#define VkglTestCase_013188_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013188_2 "types.user_ptr_0_0_unsigned_byte2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013188, VkglTestCase_013188_1, VkglTestCase_013188_2);

#define VkglTestCase_013189_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013189_2 "_types.user_ptr_0_0_unsigned_byte3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013189, VkglTestCase_013189_1, VkglTestCase_013189_2);

#define VkglTestCase_013190_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013190_2 "types.user_ptr_0_0_unsigned_byte3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013190, VkglTestCase_013190_1, VkglTestCase_013190_2);

#define VkglTestCase_013191_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013191_2 "_types.user_ptr_0_0_unsigned_byte4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013191, VkglTestCase_013191_1, VkglTestCase_013191_2);

#define VkglTestCase_013192_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013192_2 "types.user_ptr_0_0_unsigned_byte4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013192, VkglTestCase_013192_1, VkglTestCase_013192_2);

#define VkglTestCase_013193_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013193_2 "_types.user_ptr_0_0_unsigned_byte2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013193, VkglTestCase_013193_1, VkglTestCase_013193_2);

#define VkglTestCase_013194_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013194_2 "types.user_ptr_0_0_unsigned_byte2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013194, VkglTestCase_013194_1, VkglTestCase_013194_2);

#define VkglTestCase_013195_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013195_2 "_types.user_ptr_0_0_unsigned_byte3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013195, VkglTestCase_013195_1, VkglTestCase_013195_2);

#define VkglTestCase_013196_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013196_2 "types.user_ptr_0_0_unsigned_byte3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013196, VkglTestCase_013196_1, VkglTestCase_013196_2);

#define VkglTestCase_013197_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output"
#define VkglTestCase_013197_2 "_types.user_ptr_0_0_unsigned_byte4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013197, VkglTestCase_013197_1, VkglTestCase_013197_2);

#define VkglTestCase_013198_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.output_"
#define VkglTestCase_013198_2 "types.user_ptr_0_0_unsigned_byte4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013198, VkglTestCase_013198_1, VkglTestCase_013198_2);

#define VkglTestCase_013199_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013199_2 "tput_types.user_ptr_0_0_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013199, VkglTestCase_013199_1, VkglTestCase_013199_2);

#define VkglTestCase_013200_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013200_2 "put_types.user_ptr_0_0_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013200, VkglTestCase_013200_1, VkglTestCase_013200_2);

#define VkglTestCase_013201_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013201_2 "tput_types.user_ptr_0_0_fixed3_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013201, VkglTestCase_013201_1, VkglTestCase_013201_2);

#define VkglTestCase_013202_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013202_2 "put_types.user_ptr_0_0_fixed3_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013202, VkglTestCase_013202_1, VkglTestCase_013202_2);

#define VkglTestCase_013203_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013203_2 "tput_types.user_ptr_0_0_fixed4_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013203, VkglTestCase_013203_1, VkglTestCase_013203_2);

#define VkglTestCase_013204_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013204_2 "put_types.user_ptr_0_0_fixed4_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013204, VkglTestCase_013204_1, VkglTestCase_013204_2);

#define VkglTestCase_013205_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013205_2 "tput_types.user_ptr_0_0_fixed2_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013205, VkglTestCase_013205_1, VkglTestCase_013205_2);

#define VkglTestCase_013206_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013206_2 "put_types.user_ptr_0_0_fixed2_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013206, VkglTestCase_013206_1, VkglTestCase_013206_2);

#define VkglTestCase_013207_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013207_2 "tput_types.user_ptr_0_0_fixed3_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013207, VkglTestCase_013207_1, VkglTestCase_013207_2);

#define VkglTestCase_013208_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013208_2 "put_types.user_ptr_0_0_fixed3_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013208, VkglTestCase_013208_1, VkglTestCase_013208_2);

#define VkglTestCase_013209_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013209_2 "tput_types.user_ptr_0_0_fixed4_vec3_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013209, VkglTestCase_013209_1, VkglTestCase_013209_2);

#define VkglTestCase_013210_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013210_2 "put_types.user_ptr_0_0_fixed4_vec3_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013210, VkglTestCase_013210_1, VkglTestCase_013210_2);

#define VkglTestCase_013211_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013211_2 "tput_types.user_ptr_0_0_fixed2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013211, VkglTestCase_013211_1, VkglTestCase_013211_2);

#define VkglTestCase_013212_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013212_2 "put_types.user_ptr_0_0_fixed2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013212, VkglTestCase_013212_1, VkglTestCase_013212_2);

#define VkglTestCase_013213_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013213_2 "tput_types.user_ptr_0_0_fixed3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013213, VkglTestCase_013213_1, VkglTestCase_013213_2);

#define VkglTestCase_013214_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013214_2 "put_types.user_ptr_0_0_fixed3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013214, VkglTestCase_013214_1, VkglTestCase_013214_2);

#define VkglTestCase_013215_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_013215_2 "tput_types.user_ptr_0_0_fixed4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013215, VkglTestCase_013215_1, VkglTestCase_013215_2);

#define VkglTestCase_013216_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_013216_2 "put_types.user_ptr_0_0_fixed4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013216, VkglTestCase_013216_1, VkglTestCase_013216_2);
