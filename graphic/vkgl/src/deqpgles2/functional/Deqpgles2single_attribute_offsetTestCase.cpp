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

#define VkglTestCase_013295_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013295_2 "e.offset.buffer_4_8_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013295, VkglTestCase_013295_1, VkglTestCase_013295_2);

#define VkglTestCase_013296_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013296_2 ".offset.buffer_4_32_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013296, VkglTestCase_013296_1, VkglTestCase_013296_2);

#define VkglTestCase_013297_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013297_2 ".offset.buffer_4_8_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013297, VkglTestCase_013297_1, VkglTestCase_013297_2);

#define VkglTestCase_013298_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013298_2 "offset.buffer_4_32_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013298, VkglTestCase_013298_1, VkglTestCase_013298_2);

#define VkglTestCase_013299_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013299_2 ".offset.buffer_32_8_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013299, VkglTestCase_013299_1, VkglTestCase_013299_2);

#define VkglTestCase_013300_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013300_2 ".offset.buffer_32_32_float2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013300, VkglTestCase_013300_1, VkglTestCase_013300_2);

#define VkglTestCase_013301_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013301_2 "offset.buffer_32_8_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013301, VkglTestCase_013301_1, VkglTestCase_013301_2);

#define VkglTestCase_013302_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013302_2 "offset.buffer_32_32_float2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013302, VkglTestCase_013302_1, VkglTestCase_013302_2);

#define VkglTestCase_013303_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013303_2 "e.offset.buffer_1_2_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013303, VkglTestCase_013303_1, VkglTestCase_013303_2);

#define VkglTestCase_013304_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013304_2 "e.offset.buffer_1_17_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013304, VkglTestCase_013304_1, VkglTestCase_013304_2);

#define VkglTestCase_013305_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013305_2 "e.offset.buffer_1_32_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013305, VkglTestCase_013305_1, VkglTestCase_013305_2);

#define VkglTestCase_013306_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013306_2 ".offset.buffer_1_2_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013306, VkglTestCase_013306_1, VkglTestCase_013306_2);

#define VkglTestCase_013307_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013307_2 ".offset.buffer_1_17_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013307, VkglTestCase_013307_1, VkglTestCase_013307_2);

#define VkglTestCase_013308_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013308_2 ".offset.buffer_1_32_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013308, VkglTestCase_013308_1, VkglTestCase_013308_2);

#define VkglTestCase_013309_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013309_2 "e.offset.buffer_4_2_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013309, VkglTestCase_013309_1, VkglTestCase_013309_2);

#define VkglTestCase_013310_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013310_2 "e.offset.buffer_4_17_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013310, VkglTestCase_013310_1, VkglTestCase_013310_2);

#define VkglTestCase_013311_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013311_2 "e.offset.buffer_4_32_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013311, VkglTestCase_013311_1, VkglTestCase_013311_2);

#define VkglTestCase_013312_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013312_2 ".offset.buffer_4_2_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013312, VkglTestCase_013312_1, VkglTestCase_013312_2);

#define VkglTestCase_013313_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013313_2 ".offset.buffer_4_17_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013313, VkglTestCase_013313_1, VkglTestCase_013313_2);

#define VkglTestCase_013314_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013314_2 ".offset.buffer_4_32_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013314, VkglTestCase_013314_1, VkglTestCase_013314_2);

#define VkglTestCase_013315_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013315_2 "e.offset.buffer_17_2_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013315, VkglTestCase_013315_1, VkglTestCase_013315_2);

#define VkglTestCase_013316_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013316_2 ".offset.buffer_17_17_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013316, VkglTestCase_013316_1, VkglTestCase_013316_2);

#define VkglTestCase_013317_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013317_2 ".offset.buffer_17_32_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013317, VkglTestCase_013317_1, VkglTestCase_013317_2);

#define VkglTestCase_013318_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013318_2 ".offset.buffer_17_2_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013318, VkglTestCase_013318_1, VkglTestCase_013318_2);

#define VkglTestCase_013319_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013319_2 "offset.buffer_17_17_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013319, VkglTestCase_013319_1, VkglTestCase_013319_2);

#define VkglTestCase_013320_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013320_2 "offset.buffer_17_32_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013320, VkglTestCase_013320_1, VkglTestCase_013320_2);

#define VkglTestCase_013321_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013321_2 "e.offset.buffer_32_2_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013321, VkglTestCase_013321_1, VkglTestCase_013321_2);

#define VkglTestCase_013322_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013322_2 ".offset.buffer_32_17_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013322, VkglTestCase_013322_1, VkglTestCase_013322_2);

#define VkglTestCase_013323_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013323_2 ".offset.buffer_32_32_byte2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013323, VkglTestCase_013323_1, VkglTestCase_013323_2);

#define VkglTestCase_013324_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013324_2 ".offset.buffer_32_2_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013324, VkglTestCase_013324_1, VkglTestCase_013324_2);

#define VkglTestCase_013325_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013325_2 "offset.buffer_32_17_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013325, VkglTestCase_013325_1, VkglTestCase_013325_2);

#define VkglTestCase_013326_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013326_2 "offset.buffer_32_32_byte2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013326, VkglTestCase_013326_1, VkglTestCase_013326_2);

#define VkglTestCase_013327_1 "dEQP-GLES2.functional.vertex_arrays.single_attribut"
#define VkglTestCase_013327_2 "e.offset.buffer_4_8_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013327, VkglTestCase_013327_1, VkglTestCase_013327_2);

#define VkglTestCase_013328_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013328_2 ".offset.buffer_4_32_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013328, VkglTestCase_013328_1, VkglTestCase_013328_2);

#define VkglTestCase_013329_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013329_2 ".offset.buffer_4_8_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013329, VkglTestCase_013329_1, VkglTestCase_013329_2);

#define VkglTestCase_013330_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013330_2 "offset.buffer_4_32_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013330, VkglTestCase_013330_1, VkglTestCase_013330_2);

#define VkglTestCase_013331_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013331_2 ".offset.buffer_32_8_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013331, VkglTestCase_013331_1, VkglTestCase_013331_2);

#define VkglTestCase_013332_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute"
#define VkglTestCase_013332_2 ".offset.buffer_32_32_fixed2_vec2_dynamic_draw_quads_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013332, VkglTestCase_013332_1, VkglTestCase_013332_2);

#define VkglTestCase_013333_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013333_2 "offset.buffer_32_8_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013333, VkglTestCase_013333_1, VkglTestCase_013333_2);

#define VkglTestCase_013334_1 "dEQP-GLES2.functional.vertex_arrays.single_attribute."
#define VkglTestCase_013334_2 "offset.buffer_32_32_fixed2_vec2_dynamic_draw_quads_256"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013334, VkglTestCase_013334_1, VkglTestCase_013334_2);
