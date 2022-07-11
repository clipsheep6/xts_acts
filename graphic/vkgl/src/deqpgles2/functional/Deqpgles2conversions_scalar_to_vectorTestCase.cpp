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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000795_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000795_2 "ns.scalar_to_vector.float_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000796_2 "s.scalar_to_vector.float_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);

#define VkglTestCase_000797_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000797_2 "ns.scalar_to_vector.float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000798_2 "s.scalar_to_vector.float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000799_2 "ns.scalar_to_vector.float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000800_2 "s.scalar_to_vector.float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000801_2 "s.scalar_to_vector.float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);

#define VkglTestCase_000802_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000802_2 ".scalar_to_vector.float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000803_2 "s.scalar_to_vector.float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000804_2 ".scalar_to_vector.float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);

#define VkglTestCase_000805_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000805_2 "s.scalar_to_vector.float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000806_2 ".scalar_to_vector.float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000807_2 "s.scalar_to_vector.float_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000808_2 ".scalar_to_vector.float_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000809_2 "s.scalar_to_vector.float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000810_2 ".scalar_to_vector.float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000811_2 "s.scalar_to_vector.float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000812_2 ".scalar_to_vector.float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000813_2 "ons.scalar_to_vector.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000814_2 "ns.scalar_to_vector.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000815_2 "ons.scalar_to_vector.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);

#define VkglTestCase_000816_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000816_2 "ns.scalar_to_vector.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000817_2 "ons.scalar_to_vector.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);

#define VkglTestCase_000818_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000818_2 "ns.scalar_to_vector.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000819_2 "ns.scalar_to_vector.int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000820_2 "s.scalar_to_vector.int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000821_2 "ns.scalar_to_vector.int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);

#define VkglTestCase_000822_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000822_2 "s.scalar_to_vector.int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000823_2 "ns.scalar_to_vector.int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000824_2 "s.scalar_to_vector.int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000825_2 "ns.scalar_to_vector.int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000826_2 "s.scalar_to_vector.int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000827_2 "ns.scalar_to_vector.int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000828_2 "s.scalar_to_vector.int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000829_2 "ns.scalar_to_vector.int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000830_2 "s.scalar_to_vector.int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000831_2 "ns.scalar_to_vector.bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000832_2 "s.scalar_to_vector.bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000833_2 "ns.scalar_to_vector.bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000834_2 "s.scalar_to_vector.bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000835_2 "ns.scalar_to_vector.bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000836_2 "s.scalar_to_vector.bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000837_2 "ns.scalar_to_vector.bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000838_2 "s.scalar_to_vector.bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000839_2 "ns.scalar_to_vector.bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000840_2 "s.scalar_to_vector.bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000841_2 "ns.scalar_to_vector.bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000842_2 "s.scalar_to_vector.bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000843_2 "ns.scalar_to_vector.bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000844_2 "s.scalar_to_vector.bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000845_2 "ns.scalar_to_vector.bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000846_2 "s.scalar_to_vector.bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000847_2 "ns.scalar_to_vector.bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000848_2 "s.scalar_to_vector.bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);
