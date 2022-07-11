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

#define VkglTestCase_013217_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013217_2 "e.usages.buffer_0_0_float2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013217, VkglTestCase_013217_1, VkglTestCase_013217_2);

#define VkglTestCase_013218_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013218_2 "e.usages.buffer_0_0_float2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013218, VkglTestCase_013218_1, VkglTestCase_013218_2);

#define VkglTestCase_013219_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013219_2 "e.usages.buffer_0_0_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013219, VkglTestCase_013219_1, VkglTestCase_013219_2);

#define VkglTestCase_013220_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013220_2 "e.usages.buffer_0_8_float2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013220, VkglTestCase_013220_1, VkglTestCase_013220_2);

#define VkglTestCase_013221_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013221_2 "e.usages.buffer_0_8_float2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013221, VkglTestCase_013221_1, VkglTestCase_013221_2);

#define VkglTestCase_013222_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013222_2 "e.usages.buffer_0_8_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013222, VkglTestCase_013222_1, VkglTestCase_013222_2);

#define VkglTestCase_013223_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013223_2 "e.usages.buffer_0_32_float2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013223, VkglTestCase_013223_1, VkglTestCase_013223_2);

#define VkglTestCase_013224_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013224_2 "e.usages.buffer_0_32_float2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013224, VkglTestCase_013224_1, VkglTestCase_013224_2);

#define VkglTestCase_013225_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013225_2 ".usages.buffer_0_32_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013225, VkglTestCase_013225_1, VkglTestCase_013225_2);

#define VkglTestCase_013226_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013226_2 ".usages.buffer_0_0_float2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013226, VkglTestCase_013226_1, VkglTestCase_013226_2);

#define VkglTestCase_013227_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013227_2 ".usages.buffer_0_0_float2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013227, VkglTestCase_013227_1, VkglTestCase_013227_2);

#define VkglTestCase_013228_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013228_2 ".usages.buffer_0_0_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013228, VkglTestCase_013228_1, VkglTestCase_013228_2);

#define VkglTestCase_013229_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013229_2 ".usages.buffer_0_8_float2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013229, VkglTestCase_013229_1, VkglTestCase_013229_2);

#define VkglTestCase_013230_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013230_2 ".usages.buffer_0_8_float2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013230, VkglTestCase_013230_1, VkglTestCase_013230_2);

#define VkglTestCase_013231_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013231_2 ".usages.buffer_0_8_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013231, VkglTestCase_013231_1, VkglTestCase_013231_2);

#define VkglTestCase_013232_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013232_2 ".usages.buffer_0_32_float2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013232, VkglTestCase_013232_1, VkglTestCase_013232_2);

#define VkglTestCase_013233_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013233_2 ".usages.buffer_0_32_float2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013233, VkglTestCase_013233_1, VkglTestCase_013233_2);

#define VkglTestCase_013234_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013234_2 "usages.buffer_0_32_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013234, VkglTestCase_013234_1, VkglTestCase_013234_2);

#define VkglTestCase_013235_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013235_2 "e.usages.buffer_0_0_fixed2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013235, VkglTestCase_013235_1, VkglTestCase_013235_2);

#define VkglTestCase_013236_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013236_2 "e.usages.buffer_0_0_fixed2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013236, VkglTestCase_013236_1, VkglTestCase_013236_2);

#define VkglTestCase_013237_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013237_2 "e.usages.buffer_0_0_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013237, VkglTestCase_013237_1, VkglTestCase_013237_2);

#define VkglTestCase_013238_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013238_2 "e.usages.buffer_0_8_fixed2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013238, VkglTestCase_013238_1, VkglTestCase_013238_2);

#define VkglTestCase_013239_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013239_2 "e.usages.buffer_0_8_fixed2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013239, VkglTestCase_013239_1, VkglTestCase_013239_2);

#define VkglTestCase_013240_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013240_2 "e.usages.buffer_0_8_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013240, VkglTestCase_013240_1, VkglTestCase_013240_2);

#define VkglTestCase_013241_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013241_2 "e.usages.buffer_0_32_fixed2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013241, VkglTestCase_013241_1, VkglTestCase_013241_2);

#define VkglTestCase_013242_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013242_2 "e.usages.buffer_0_32_fixed2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013242, VkglTestCase_013242_1, VkglTestCase_013242_2);

#define VkglTestCase_013243_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013243_2 ".usages.buffer_0_32_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013243, VkglTestCase_013243_1, VkglTestCase_013243_2);

#define VkglTestCase_013244_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013244_2 ".usages.buffer_0_0_fixed2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013244, VkglTestCase_013244_1, VkglTestCase_013244_2);

#define VkglTestCase_013245_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013245_2 ".usages.buffer_0_0_fixed2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013245, VkglTestCase_013245_1, VkglTestCase_013245_2);

#define VkglTestCase_013246_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013246_2 ".usages.buffer_0_0_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013246, VkglTestCase_013246_1, VkglTestCase_013246_2);

#define VkglTestCase_013247_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013247_2 ".usages.buffer_0_8_fixed2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013247, VkglTestCase_013247_1, VkglTestCase_013247_2);

#define VkglTestCase_013248_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013248_2 ".usages.buffer_0_8_fixed2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013248, VkglTestCase_013248_1, VkglTestCase_013248_2);

#define VkglTestCase_013249_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013249_2 ".usages.buffer_0_8_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013249, VkglTestCase_013249_1, VkglTestCase_013249_2);

#define VkglTestCase_013250_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013250_2 ".usages.buffer_0_32_fixed2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013250, VkglTestCase_013250_1, VkglTestCase_013250_2);

#define VkglTestCase_013251_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013251_2 ".usages.buffer_0_32_fixed2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013251, VkglTestCase_013251_1, VkglTestCase_013251_2);

#define VkglTestCase_013252_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013252_2 "usages.buffer_0_32_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013252, VkglTestCase_013252_1, VkglTestCase_013252_2);

#define VkglTestCase_013253_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013253_2 "e.usages.buffer_0_0_short2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013253, VkglTestCase_013253_1, VkglTestCase_013253_2);

#define VkglTestCase_013254_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013254_2 "e.usages.buffer_0_0_short2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013254, VkglTestCase_013254_1, VkglTestCase_013254_2);

#define VkglTestCase_013255_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013255_2 "e.usages.buffer_0_0_short2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013255, VkglTestCase_013255_1, VkglTestCase_013255_2);

#define VkglTestCase_013256_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013256_2 "e.usages.buffer_0_4_short2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013256, VkglTestCase_013256_1, VkglTestCase_013256_2);

#define VkglTestCase_013257_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013257_2 "e.usages.buffer_0_4_short2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013257, VkglTestCase_013257_1, VkglTestCase_013257_2);

#define VkglTestCase_013258_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013258_2 "e.usages.buffer_0_4_short2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013258, VkglTestCase_013258_1, VkglTestCase_013258_2);

#define VkglTestCase_013259_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013259_2 "e.usages.buffer_0_32_short2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013259, VkglTestCase_013259_1, VkglTestCase_013259_2);

#define VkglTestCase_013260_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013260_2 "e.usages.buffer_0_32_short2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013260, VkglTestCase_013260_1, VkglTestCase_013260_2);

#define VkglTestCase_013261_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013261_2 ".usages.buffer_0_32_short2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013261, VkglTestCase_013261_1, VkglTestCase_013261_2);

#define VkglTestCase_013262_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013262_2 ".usages.buffer_0_0_short2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013262, VkglTestCase_013262_1, VkglTestCase_013262_2);

#define VkglTestCase_013263_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013263_2 ".usages.buffer_0_0_short2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013263, VkglTestCase_013263_1, VkglTestCase_013263_2);

#define VkglTestCase_013264_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013264_2 ".usages.buffer_0_0_short2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013264, VkglTestCase_013264_1, VkglTestCase_013264_2);

#define VkglTestCase_013265_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013265_2 ".usages.buffer_0_4_short2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013265, VkglTestCase_013265_1, VkglTestCase_013265_2);

#define VkglTestCase_013266_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013266_2 ".usages.buffer_0_4_short2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013266, VkglTestCase_013266_1, VkglTestCase_013266_2);

#define VkglTestCase_013267_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013267_2 ".usages.buffer_0_4_short2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013267, VkglTestCase_013267_1, VkglTestCase_013267_2);

#define VkglTestCase_013268_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013268_2 ".usages.buffer_0_32_short2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013268, VkglTestCase_013268_1, VkglTestCase_013268_2);

#define VkglTestCase_013269_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013269_2 ".usages.buffer_0_32_short2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013269, VkglTestCase_013269_1, VkglTestCase_013269_2);

#define VkglTestCase_013270_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013270_2 "usages.buffer_0_32_short2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013270, VkglTestCase_013270_1, VkglTestCase_013270_2);

#define VkglTestCase_013271_1 "dEQP-GLES2.functional.vertex_arrays.single_attribu"
#define VkglTestCase_013271_2 "te.usages.buffer_0_0_byte2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013271, VkglTestCase_013271_1, VkglTestCase_013271_2);

#define VkglTestCase_013272_1 "dEQP-GLES2.functional.vertex_arrays.single_attribu"
#define VkglTestCase_013272_2 "te.usages.buffer_0_0_byte2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013272, VkglTestCase_013272_1, VkglTestCase_013272_2);

#define VkglTestCase_013273_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013273_2 "e.usages.buffer_0_0_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013273, VkglTestCase_013273_1, VkglTestCase_013273_2);

#define VkglTestCase_013274_1 "dEQP-GLES2.functional.vertex_arrays.single_attribu"
#define VkglTestCase_013274_2 "te.usages.buffer_0_2_byte2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013274, VkglTestCase_013274_1, VkglTestCase_013274_2);

#define VkglTestCase_013275_1 "dEQP-GLES2.functional.vertex_arrays.single_attribu"
#define VkglTestCase_013275_2 "te.usages.buffer_0_2_byte2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013275, VkglTestCase_013275_1, VkglTestCase_013275_2);

#define VkglTestCase_013276_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013276_2 "e.usages.buffer_0_2_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013276, VkglTestCase_013276_1, VkglTestCase_013276_2);

#define VkglTestCase_013277_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013277_2 "e.usages.buffer_0_17_byte2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013277, VkglTestCase_013277_1, VkglTestCase_013277_2);

#define VkglTestCase_013278_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013278_2 "e.usages.buffer_0_17_byte2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013278, VkglTestCase_013278_1, VkglTestCase_013278_2);

#define VkglTestCase_013279_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013279_2 "e.usages.buffer_0_17_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013279, VkglTestCase_013279_1, VkglTestCase_013279_2);

#define VkglTestCase_013280_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013280_2 "e.usages.buffer_0_32_byte2_vec2_static_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013280, VkglTestCase_013280_1, VkglTestCase_013280_2);

#define VkglTestCase_013281_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013281_2 "e.usages.buffer_0_32_byte2_vec2_stream_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013281, VkglTestCase_013281_1, VkglTestCase_013281_2);

#define VkglTestCase_013282_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013282_2 "e.usages.buffer_0_32_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013282, VkglTestCase_013282_1, VkglTestCase_013282_2);

#define VkglTestCase_013283_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013283_2 "e.usages.buffer_0_0_byte2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013283, VkglTestCase_013283_1, VkglTestCase_013283_2);

#define VkglTestCase_013284_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013284_2 "e.usages.buffer_0_0_byte2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013284, VkglTestCase_013284_1, VkglTestCase_013284_2);

#define VkglTestCase_013285_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013285_2 ".usages.buffer_0_0_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013285, VkglTestCase_013285_1, VkglTestCase_013285_2);

#define VkglTestCase_013286_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013286_2 "e.usages.buffer_0_2_byte2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013286, VkglTestCase_013286_1, VkglTestCase_013286_2);

#define VkglTestCase_013287_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013287_2 "e.usages.buffer_0_2_byte2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013287, VkglTestCase_013287_1, VkglTestCase_013287_2);

#define VkglTestCase_013288_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013288_2 ".usages.buffer_0_2_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013288, VkglTestCase_013288_1, VkglTestCase_013288_2);

#define VkglTestCase_013289_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013289_2 ".usages.buffer_0_17_byte2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013289, VkglTestCase_013289_1, VkglTestCase_013289_2);

#define VkglTestCase_013290_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013290_2 ".usages.buffer_0_17_byte2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013290, VkglTestCase_013290_1, VkglTestCase_013290_2);

#define VkglTestCase_013291_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013291_2 ".usages.buffer_0_17_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013291, VkglTestCase_013291_1, VkglTestCase_013291_2);

#define VkglTestCase_013292_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013292_2 ".usages.buffer_0_32_byte2_vec2_static_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013292, VkglTestCase_013292_1, VkglTestCase_013292_2);

#define VkglTestCase_013293_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013293_2 ".usages.buffer_0_32_byte2_vec2_stream_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013293, VkglTestCase_013293_1, VkglTestCase_013293_2);

#define VkglTestCase_013294_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013294_2 ".usages.buffer_0_32_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013294, VkglTestCase_013294_1, VkglTestCase_013294_2);
