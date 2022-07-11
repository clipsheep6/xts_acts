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

#define VkglTestCase_013019_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013019_2 ".strides.buffer_0_8_float2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013019, VkglTestCase_013019_1, VkglTestCase_013019_2);

#define VkglTestCase_013020_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013020_2 ".strides.buffer_0_32_float2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013020, VkglTestCase_013020_1, VkglTestCase_013020_2);

#define VkglTestCase_013021_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013021_2 "strides.buffer_0_8_float2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013021, VkglTestCase_013021_1, VkglTestCase_013021_2);

#define VkglTestCase_013022_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013022_2 "strides.buffer_0_32_float2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013022, VkglTestCase_013022_1, VkglTestCase_013022_2);

#define VkglTestCase_013023_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013023_2 ".strides.buffer_0_12_float3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013023, VkglTestCase_013023_1, VkglTestCase_013023_2);

#define VkglTestCase_013024_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013024_2 ".strides.buffer_0_32_float3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013024, VkglTestCase_013024_1, VkglTestCase_013024_2);

#define VkglTestCase_013025_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013025_2 "strides.buffer_0_12_float3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013025, VkglTestCase_013025_1, VkglTestCase_013025_2);

#define VkglTestCase_013026_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013026_2 "strides.buffer_0_32_float3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013026, VkglTestCase_013026_1, VkglTestCase_013026_2);

#define VkglTestCase_013027_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013027_2 ".strides.buffer_0_16_float4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013027, VkglTestCase_013027_1, VkglTestCase_013027_2);

#define VkglTestCase_013028_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013028_2 ".strides.buffer_0_32_float4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013028, VkglTestCase_013028_1, VkglTestCase_013028_2);

#define VkglTestCase_013029_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013029_2 "strides.buffer_0_16_float4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013029, VkglTestCase_013029_1, VkglTestCase_013029_2);

#define VkglTestCase_013030_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013030_2 "strides.buffer_0_32_float4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013030, VkglTestCase_013030_1, VkglTestCase_013030_2);

#define VkglTestCase_013031_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013031_2 ".strides.buffer_0_4_short2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013031, VkglTestCase_013031_1, VkglTestCase_013031_2);

#define VkglTestCase_013032_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013032_2 ".strides.buffer_0_32_short2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013032, VkglTestCase_013032_1, VkglTestCase_013032_2);

#define VkglTestCase_013033_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013033_2 "strides.buffer_0_4_short2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013033, VkglTestCase_013033_1, VkglTestCase_013033_2);

#define VkglTestCase_013034_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013034_2 "strides.buffer_0_32_short2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013034, VkglTestCase_013034_1, VkglTestCase_013034_2);

#define VkglTestCase_013035_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013035_2 ".strides.buffer_0_6_short3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013035, VkglTestCase_013035_1, VkglTestCase_013035_2);

#define VkglTestCase_013036_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013036_2 ".strides.buffer_0_32_short3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013036, VkglTestCase_013036_1, VkglTestCase_013036_2);

#define VkglTestCase_013037_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013037_2 "strides.buffer_0_6_short3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013037, VkglTestCase_013037_1, VkglTestCase_013037_2);

#define VkglTestCase_013038_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013038_2 "strides.buffer_0_32_short3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013038, VkglTestCase_013038_1, VkglTestCase_013038_2);

#define VkglTestCase_013039_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013039_2 ".strides.buffer_0_8_short4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013039, VkglTestCase_013039_1, VkglTestCase_013039_2);

#define VkglTestCase_013040_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013040_2 ".strides.buffer_0_32_short4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013040, VkglTestCase_013040_1, VkglTestCase_013040_2);

#define VkglTestCase_013041_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013041_2 "strides.buffer_0_8_short4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013041, VkglTestCase_013041_1, VkglTestCase_013041_2);

#define VkglTestCase_013042_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013042_2 "strides.buffer_0_32_short4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013042, VkglTestCase_013042_1, VkglTestCase_013042_2);

#define VkglTestCase_013043_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013043_2 "e.strides.buffer_0_2_byte2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013043, VkglTestCase_013043_1, VkglTestCase_013043_2);

#define VkglTestCase_013044_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013044_2 ".strides.buffer_0_17_byte2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013044, VkglTestCase_013044_1, VkglTestCase_013044_2);

#define VkglTestCase_013045_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013045_2 ".strides.buffer_0_32_byte2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013045, VkglTestCase_013045_1, VkglTestCase_013045_2);

#define VkglTestCase_013046_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013046_2 ".strides.buffer_0_2_byte2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013046, VkglTestCase_013046_1, VkglTestCase_013046_2);

#define VkglTestCase_013047_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013047_2 "strides.buffer_0_17_byte2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013047, VkglTestCase_013047_1, VkglTestCase_013047_2);

#define VkglTestCase_013048_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013048_2 "strides.buffer_0_32_byte2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013048, VkglTestCase_013048_1, VkglTestCase_013048_2);

#define VkglTestCase_013049_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013049_2 "e.strides.buffer_0_3_byte3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013049, VkglTestCase_013049_1, VkglTestCase_013049_2);

#define VkglTestCase_013050_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013050_2 ".strides.buffer_0_17_byte3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013050, VkglTestCase_013050_1, VkglTestCase_013050_2);

#define VkglTestCase_013051_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013051_2 ".strides.buffer_0_32_byte3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013051, VkglTestCase_013051_1, VkglTestCase_013051_2);

#define VkglTestCase_013052_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013052_2 ".strides.buffer_0_3_byte3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013052, VkglTestCase_013052_1, VkglTestCase_013052_2);

#define VkglTestCase_013053_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013053_2 "strides.buffer_0_17_byte3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013053, VkglTestCase_013053_1, VkglTestCase_013053_2);

#define VkglTestCase_013054_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013054_2 "strides.buffer_0_32_byte3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013054, VkglTestCase_013054_1, VkglTestCase_013054_2);

#define VkglTestCase_013055_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013055_2 "e.strides.buffer_0_4_byte4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013055, VkglTestCase_013055_1, VkglTestCase_013055_2);

#define VkglTestCase_013056_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013056_2 ".strides.buffer_0_17_byte4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013056, VkglTestCase_013056_1, VkglTestCase_013056_2);

#define VkglTestCase_013057_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013057_2 ".strides.buffer_0_32_byte4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013057, VkglTestCase_013057_1, VkglTestCase_013057_2);

#define VkglTestCase_013058_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013058_2 ".strides.buffer_0_4_byte4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013058, VkglTestCase_013058_1, VkglTestCase_013058_2);

#define VkglTestCase_013059_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013059_2 "strides.buffer_0_17_byte4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013059, VkglTestCase_013059_1, VkglTestCase_013059_2);

#define VkglTestCase_013060_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013060_2 "strides.buffer_0_32_byte4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013060, VkglTestCase_013060_1, VkglTestCase_013060_2);

#define VkglTestCase_013061_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013061_2 ".strides.buffer_0_8_fixed2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013061, VkglTestCase_013061_1, VkglTestCase_013061_2);

#define VkglTestCase_013062_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013062_2 ".strides.buffer_0_32_fixed2_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013062, VkglTestCase_013062_1, VkglTestCase_013062_2);

#define VkglTestCase_013063_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013063_2 "strides.buffer_0_8_fixed2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013063, VkglTestCase_013063_1, VkglTestCase_013063_2);

#define VkglTestCase_013064_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013064_2 "strides.buffer_0_32_fixed2_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013064, VkglTestCase_013064_1, VkglTestCase_013064_2);

#define VkglTestCase_013065_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013065_2 ".strides.buffer_0_12_fixed3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013065, VkglTestCase_013065_1, VkglTestCase_013065_2);

#define VkglTestCase_013066_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013066_2 ".strides.buffer_0_32_fixed3_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013066, VkglTestCase_013066_1, VkglTestCase_013066_2);

#define VkglTestCase_013067_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013067_2 "strides.buffer_0_12_fixed3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013067, VkglTestCase_013067_1, VkglTestCase_013067_2);

#define VkglTestCase_013068_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013068_2 "strides.buffer_0_32_fixed3_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013068, VkglTestCase_013068_1, VkglTestCase_013068_2);

#define VkglTestCase_013069_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013069_2 ".strides.buffer_0_16_fixed4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013069, VkglTestCase_013069_1, VkglTestCase_013069_2);

#define VkglTestCase_013070_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013070_2 ".strides.buffer_0_32_fixed4_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013070, VkglTestCase_013070_1, VkglTestCase_013070_2);

#define VkglTestCase_013071_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013071_2 "strides.buffer_0_16_fixed4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013071, VkglTestCase_013071_1, VkglTestCase_013071_2);

#define VkglTestCase_013072_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013072_2 "strides.buffer_0_32_fixed4_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013072, VkglTestCase_013072_1, VkglTestCase_013072_2);
