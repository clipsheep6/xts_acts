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

#define VkglTestCase_013073_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013073_2 "ize.user_ptr_0_0_float2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013073, VkglTestCase_013073_1, VkglTestCase_013073_2);

#define VkglTestCase_013074_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013074_2 "ze.user_ptr_0_0_float2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013074, VkglTestCase_013074_1, VkglTestCase_013074_2);

#define VkglTestCase_013075_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013075_2 "ize.user_ptr_0_0_float3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013075, VkglTestCase_013075_1, VkglTestCase_013075_2);

#define VkglTestCase_013076_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013076_2 "ze.user_ptr_0_0_float3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013076, VkglTestCase_013076_1, VkglTestCase_013076_2);

#define VkglTestCase_013077_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013077_2 "ize.user_ptr_0_0_float4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013077, VkglTestCase_013077_1, VkglTestCase_013077_2);

#define VkglTestCase_013078_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013078_2 "ze.user_ptr_0_0_float4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013078, VkglTestCase_013078_1, VkglTestCase_013078_2);

#define VkglTestCase_013079_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013079_2 "ize.user_ptr_0_0_short2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013079, VkglTestCase_013079_1, VkglTestCase_013079_2);

#define VkglTestCase_013080_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013080_2 "ze.user_ptr_0_0_short2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013080, VkglTestCase_013080_1, VkglTestCase_013080_2);

#define VkglTestCase_013081_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013081_2 "ize.user_ptr_0_0_short3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013081, VkglTestCase_013081_1, VkglTestCase_013081_2);

#define VkglTestCase_013082_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013082_2 "ze.user_ptr_0_0_short3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013082, VkglTestCase_013082_1, VkglTestCase_013082_2);

#define VkglTestCase_013083_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013083_2 "ize.user_ptr_0_0_short4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013083, VkglTestCase_013083_1, VkglTestCase_013083_2);

#define VkglTestCase_013084_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013084_2 "ze.user_ptr_0_0_short4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013084, VkglTestCase_013084_1, VkglTestCase_013084_2);

#define VkglTestCase_013085_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013085_2 "ize.user_ptr_0_0_byte2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013085, VkglTestCase_013085_1, VkglTestCase_013085_2);

#define VkglTestCase_013086_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013086_2 "ze.user_ptr_0_0_byte2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013086, VkglTestCase_013086_1, VkglTestCase_013086_2);

#define VkglTestCase_013087_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013087_2 "ize.user_ptr_0_0_byte3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013087, VkglTestCase_013087_1, VkglTestCase_013087_2);

#define VkglTestCase_013088_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013088_2 "ze.user_ptr_0_0_byte3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013088, VkglTestCase_013088_1, VkglTestCase_013088_2);

#define VkglTestCase_013089_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013089_2 "ize.user_ptr_0_0_byte4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013089, VkglTestCase_013089_1, VkglTestCase_013089_2);

#define VkglTestCase_013090_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013090_2 "ze.user_ptr_0_0_byte4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013090, VkglTestCase_013090_1, VkglTestCase_013090_2);

#define VkglTestCase_013091_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013091_2 "ser_ptr_0_0_unsigned_short2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013091, VkglTestCase_013091_1, VkglTestCase_013091_2);

#define VkglTestCase_013092_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.us"
#define VkglTestCase_013092_2 "er_ptr_0_0_unsigned_short2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013092, VkglTestCase_013092_1, VkglTestCase_013092_2);

#define VkglTestCase_013093_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013093_2 "ser_ptr_0_0_unsigned_short3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013093, VkglTestCase_013093_1, VkglTestCase_013093_2);

#define VkglTestCase_013094_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.us"
#define VkglTestCase_013094_2 "er_ptr_0_0_unsigned_short3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013094, VkglTestCase_013094_1, VkglTestCase_013094_2);

#define VkglTestCase_013095_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013095_2 "ser_ptr_0_0_unsigned_short4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013095, VkglTestCase_013095_1, VkglTestCase_013095_2);

#define VkglTestCase_013096_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.us"
#define VkglTestCase_013096_2 "er_ptr_0_0_unsigned_short4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013096, VkglTestCase_013096_1, VkglTestCase_013096_2);

#define VkglTestCase_013097_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize."
#define VkglTestCase_013097_2 "user_ptr_0_0_unsigned_byte2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013097, VkglTestCase_013097_1, VkglTestCase_013097_2);

#define VkglTestCase_013098_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013098_2 "ser_ptr_0_0_unsigned_byte2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013098, VkglTestCase_013098_1, VkglTestCase_013098_2);

#define VkglTestCase_013099_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize."
#define VkglTestCase_013099_2 "user_ptr_0_0_unsigned_byte3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013099, VkglTestCase_013099_1, VkglTestCase_013099_2);

#define VkglTestCase_013100_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013100_2 "ser_ptr_0_0_unsigned_byte3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013100, VkglTestCase_013100_1, VkglTestCase_013100_2);

#define VkglTestCase_013101_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize."
#define VkglTestCase_013101_2 "user_ptr_0_0_unsigned_byte4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013101, VkglTestCase_013101_1, VkglTestCase_013101_2);

#define VkglTestCase_013102_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normalize.u"
#define VkglTestCase_013102_2 "ser_ptr_0_0_unsigned_byte4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013102, VkglTestCase_013102_1, VkglTestCase_013102_2);

#define VkglTestCase_013103_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013103_2 "ize.user_ptr_0_0_fixed2_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013103, VkglTestCase_013103_1, VkglTestCase_013103_2);

#define VkglTestCase_013104_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013104_2 "ze.user_ptr_0_0_fixed2_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013104, VkglTestCase_013104_1, VkglTestCase_013104_2);

#define VkglTestCase_013105_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013105_2 "ize.user_ptr_0_0_fixed3_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013105, VkglTestCase_013105_1, VkglTestCase_013105_2);

#define VkglTestCase_013106_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013106_2 "ze.user_ptr_0_0_fixed3_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013106, VkglTestCase_013106_1, VkglTestCase_013106_2);

#define VkglTestCase_013107_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normal"
#define VkglTestCase_013107_2 "ize.user_ptr_0_0_fixed4_normalized_vec4_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013107, VkglTestCase_013107_1, VkglTestCase_013107_2);

#define VkglTestCase_013108_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute.normali"
#define VkglTestCase_013108_2 "ze.user_ptr_0_0_fixed4_normalized_vec4_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013108, VkglTestCase_013108_1, VkglTestCase_013108_2);
