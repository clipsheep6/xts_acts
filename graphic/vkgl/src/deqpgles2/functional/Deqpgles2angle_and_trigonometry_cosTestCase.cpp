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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005788_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005788_2 "e_and_trigonometry.cos.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005788, VkglTestCase_005788_1, VkglTestCase_005788_2);

#define VkglTestCase_005789_1 "dEQP-GLES2.functional.shaders.operator.angle"
#define VkglTestCase_005789_2 "_and_trigonometry.cos.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005789, VkglTestCase_005789_1, VkglTestCase_005789_2);

#define VkglTestCase_005790_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005790_2 "le_and_trigonometry.cos.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005790, VkglTestCase_005790_1, VkglTestCase_005790_2);

#define VkglTestCase_005791_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005791_2 "e_and_trigonometry.cos.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005791, VkglTestCase_005791_1, VkglTestCase_005791_2);

#define VkglTestCase_005792_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005792_2 "le_and_trigonometry.cos.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005792, VkglTestCase_005792_1, VkglTestCase_005792_2);

#define VkglTestCase_005793_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005793_2 "e_and_trigonometry.cos.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005793, VkglTestCase_005793_1, VkglTestCase_005793_2);

#define VkglTestCase_005794_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005794_2 "gle_and_trigonometry.cos.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005794, VkglTestCase_005794_1, VkglTestCase_005794_2);

#define VkglTestCase_005795_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005795_2 "le_and_trigonometry.cos.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005795, VkglTestCase_005795_1, VkglTestCase_005795_2);

#define VkglTestCase_005796_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005796_2 "le_and_trigonometry.cos.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005796, VkglTestCase_005796_1, VkglTestCase_005796_2);

#define VkglTestCase_005797_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005797_2 "e_and_trigonometry.cos.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005797, VkglTestCase_005797_1, VkglTestCase_005797_2);

#define VkglTestCase_005798_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005798_2 "gle_and_trigonometry.cos.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005798, VkglTestCase_005798_1, VkglTestCase_005798_2);

#define VkglTestCase_005799_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005799_2 "le_and_trigonometry.cos.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005799, VkglTestCase_005799_1, VkglTestCase_005799_2);

#define VkglTestCase_005800_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005800_2 "le_and_trigonometry.cos.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005800, VkglTestCase_005800_1, VkglTestCase_005800_2);

#define VkglTestCase_005801_1 "dEQP-GLES2.functional.shaders.operator.angl"
#define VkglTestCase_005801_2 "e_and_trigonometry.cos.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005801, VkglTestCase_005801_1, VkglTestCase_005801_2);

#define VkglTestCase_005802_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005802_2 "gle_and_trigonometry.cos.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005802, VkglTestCase_005802_1, VkglTestCase_005802_2);

#define VkglTestCase_005803_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005803_2 "le_and_trigonometry.cos.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005803, VkglTestCase_005803_1, VkglTestCase_005803_2);

#define VkglTestCase_005804_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005804_2 "gle_and_trigonometry.cos.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005804, VkglTestCase_005804_1, VkglTestCase_005804_2);

#define VkglTestCase_005805_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005805_2 "le_and_trigonometry.cos.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005805, VkglTestCase_005805_1, VkglTestCase_005805_2);

#define VkglTestCase_005806_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005806_2 "gle_and_trigonometry.cos.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005806, VkglTestCase_005806_1, VkglTestCase_005806_2);

#define VkglTestCase_005807_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005807_2 "le_and_trigonometry.cos.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005807, VkglTestCase_005807_1, VkglTestCase_005807_2);

#define VkglTestCase_005808_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005808_2 "gle_and_trigonometry.cos.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005808, VkglTestCase_005808_1, VkglTestCase_005808_2);

#define VkglTestCase_005809_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005809_2 "le_and_trigonometry.cos.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005809, VkglTestCase_005809_1, VkglTestCase_005809_2);

#define VkglTestCase_005810_1 "dEQP-GLES2.functional.shaders.operator.an"
#define VkglTestCase_005810_2 "gle_and_trigonometry.cos.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005810, VkglTestCase_005810_1, VkglTestCase_005810_2);

#define VkglTestCase_005811_1 "dEQP-GLES2.functional.shaders.operator.ang"
#define VkglTestCase_005811_2 "le_and_trigonometry.cos.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005811, VkglTestCase_005811_1, VkglTestCase_005811_2);
