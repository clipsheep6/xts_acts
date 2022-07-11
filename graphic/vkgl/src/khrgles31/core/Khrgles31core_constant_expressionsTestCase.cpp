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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000797_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000797_2 "ions.basic_radians_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000798_2 "ions.basic_radians_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000799_2 "ns.basic_radians_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000800_2 "ons.basic_radians_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000801_2 "sions.basic_radians_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);

#define VkglTestCase_000802_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000802_2 "ions.basic_radians_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000803_2 "ns.basic_radians_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000804_2 "ions.basic_radians_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);

#define VkglTestCase_000805_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000805_2 "sions.basic_radians_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000806_2 "ions.basic_radians_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000807_2 "ns.basic_radians_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000808_2 "ions.basic_radians_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000809_2 "sions.basic_radians_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000810_2 "ions.basic_radians_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000811_2 "ns.basic_radians_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000812_2 "ions.basic_radians_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000813_2 "ions.basic_degrees_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000814_2 "ions.basic_degrees_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000815_2 "ns.basic_degrees_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);

#define VkglTestCase_000816_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000816_2 "ons.basic_degrees_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000817_2 "sions.basic_degrees_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);

#define VkglTestCase_000818_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000818_2 "ions.basic_degrees_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000819_2 "ns.basic_degrees_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000820_2 "ions.basic_degrees_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000821_2 "sions.basic_degrees_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);

#define VkglTestCase_000822_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000822_2 "ions.basic_degrees_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000823_2 "ns.basic_degrees_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000824_2 "ions.basic_degrees_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000825_2 "sions.basic_degrees_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000826_2 "ions.basic_degrees_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000827_2 "ns.basic_degrees_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000828_2 "ions.basic_degrees_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000829_2 "ssions.basic_sin_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000830_2 "ssions.basic_sin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000831_2 "ions.basic_sin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000832_2 "sions.basic_sin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000833_2 "essions.basic_sin_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000834_2 "ssions.basic_sin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000835_2 "ions.basic_sin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000836_2 "ssions.basic_sin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000837_2 "essions.basic_sin_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000838_2 "ssions.basic_sin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000839_2 "ions.basic_sin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000840_2 "ssions.basic_sin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000841_2 "essions.basic_sin_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000842_2 "ssions.basic_sin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000843_2 "ions.basic_sin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000844_2 "ssions.basic_sin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000845_2 "ssions.basic_cos_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000846_2 "ssions.basic_cos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000847_2 "ions.basic_cos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000848_2 "sions.basic_cos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);

#define VkglTestCase_000849_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000849_2 "essions.basic_cos_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000850_2 "ssions.basic_cos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000851_2 "ions.basic_cos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);

#define VkglTestCase_000852_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000852_2 "ssions.basic_cos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000852, VkglTestCase_000852_1, VkglTestCase_000852_2);

#define VkglTestCase_000853_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000853_2 "essions.basic_cos_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000853, VkglTestCase_000853_1, VkglTestCase_000853_2);

#define VkglTestCase_000854_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000854_2 "ssions.basic_cos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000855_2 "ions.basic_cos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000856_2 "ssions.basic_cos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000857_2 "essions.basic_cos_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000858_2 "ssions.basic_cos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000859_2 "ions.basic_cos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000860_2 "ssions.basic_cos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000861_2 "ssions.basic_asin_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000862_2 "sions.basic_asin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000863_2 "ons.basic_asin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000864_2 "sions.basic_asin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000865_2 "ssions.basic_asin_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000866_2 "ssions.basic_asin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000867_2 "ions.basic_asin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000868_2 "sions.basic_asin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000869_2 "ssions.basic_asin_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000870_2 "ssions.basic_asin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000871_2 "ions.basic_asin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);

#define VkglTestCase_000872_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000872_2 "sions.basic_asin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000873_2 "ssions.basic_asin_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000874_2 "ssions.basic_asin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000875_2 "ions.basic_asin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000876_2 "sions.basic_asin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);

#define VkglTestCase_000877_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000877_2 "ssions.basic_acos_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);

#define VkglTestCase_000878_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000878_2 "sions.basic_acos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000879_2 "ons.basic_acos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000880_2 "sions.basic_acos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000881_2 "ssions.basic_acos_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);

#define VkglTestCase_000882_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000882_2 "ssions.basic_acos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000883_2 "ions.basic_acos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000884_2 "sions.basic_acos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000885_2 "ssions.basic_acos_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000886_2 "ssions.basic_acos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000887_2 "ions.basic_acos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);

#define VkglTestCase_000888_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000888_2 "sions.basic_acos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000888, VkglTestCase_000888_1, VkglTestCase_000888_2);

#define VkglTestCase_000889_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000889_2 "ssions.basic_acos_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000889, VkglTestCase_000889_1, VkglTestCase_000889_2);

#define VkglTestCase_000890_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000890_2 "ssions.basic_acos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000890, VkglTestCase_000890_1, VkglTestCase_000890_2);

#define VkglTestCase_000891_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000891_2 "ions.basic_acos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000891, VkglTestCase_000891_1, VkglTestCase_000891_2);

#define VkglTestCase_000892_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000892_2 "sions.basic_acos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000892, VkglTestCase_000892_1, VkglTestCase_000892_2);

#define VkglTestCase_000893_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000893_2 "ssions.basic_pow_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000893, VkglTestCase_000893_1, VkglTestCase_000893_2);

#define VkglTestCase_000894_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000894_2 "ssions.basic_pow_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000894, VkglTestCase_000894_1, VkglTestCase_000894_2);

#define VkglTestCase_000895_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000895_2 "ions.basic_pow_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000895, VkglTestCase_000895_1, VkglTestCase_000895_2);

#define VkglTestCase_000896_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000896_2 "sions.basic_pow_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000896, VkglTestCase_000896_1, VkglTestCase_000896_2);

#define VkglTestCase_000897_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000897_2 "essions.basic_pow_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000897, VkglTestCase_000897_1, VkglTestCase_000897_2);

#define VkglTestCase_000898_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000898_2 "ssions.basic_pow_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000899_2 "ions.basic_pow_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000900_2 "ssions.basic_pow_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000901_2 "essions.basic_pow_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000902_2 "ssions.basic_pow_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);

#define VkglTestCase_000903_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000903_2 "ions.basic_pow_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000904_2 "ssions.basic_pow_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000905_2 "essions.basic_pow_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000906_2 "ssions.basic_pow_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000907_2 "ions.basic_pow_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);

#define VkglTestCase_000908_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000908_2 "ssions.basic_pow_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000909_2 "ssions.basic_exp_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);

#define VkglTestCase_000910_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000910_2 "ssions.basic_exp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000911_2 "ions.basic_exp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000912_2 "sions.basic_exp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000913_2 "essions.basic_exp_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);

#define VkglTestCase_000914_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000914_2 "ssions.basic_exp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000915_2 "ions.basic_exp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000916_2 "ssions.basic_exp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000917_2 "essions.basic_exp_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000918_2 "ssions.basic_exp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000919_2 "ions.basic_exp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000920_2 "ssions.basic_exp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000921_2 "essions.basic_exp_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000922_2 "ssions.basic_exp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000923_2 "ions.basic_exp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000924_2 "ssions.basic_exp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000925_2 "ssions.basic_log_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000926_2 "ssions.basic_log_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000927_2 "ions.basic_log_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000928_2 "sions.basic_log_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000929_2 "essions.basic_log_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000930_2 "ssions.basic_log_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000931_2 "ions.basic_log_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000932_2 "ssions.basic_log_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000933_2 "essions.basic_log_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000934_2 "ssions.basic_log_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000935_2 "ions.basic_log_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000936_2 "ssions.basic_log_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_000937_2 "essions.basic_log_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000938_2 "ssions.basic_log_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000939_2 "ions.basic_log_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000940_2 "ssions.basic_log_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000941_2 "ssions.basic_exp2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);

#define VkglTestCase_000942_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000942_2 "sions.basic_exp2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000943_2 "ons.basic_exp2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);

#define VkglTestCase_000944_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000944_2 "sions.basic_exp2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000945_2 "ssions.basic_exp2_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);

#define VkglTestCase_000946_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000946_2 "ssions.basic_exp2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000947_2 "ions.basic_exp2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);

#define VkglTestCase_000948_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000948_2 "sions.basic_exp2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);

#define VkglTestCase_000949_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000949_2 "ssions.basic_exp2_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000950_2 "ssions.basic_exp2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000951_2 "ions.basic_exp2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000952_2 "sions.basic_exp2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000953_2 "ssions.basic_exp2_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000954_2 "ssions.basic_exp2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000955_2 "ions.basic_exp2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000956_2 "sions.basic_exp2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);

#define VkglTestCase_000957_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000957_2 "ssions.basic_log2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);

#define VkglTestCase_000958_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000958_2 "sions.basic_log2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000959_2 "ons.basic_log2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);

#define VkglTestCase_000960_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000960_2 "sions.basic_log2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);

#define VkglTestCase_000961_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000961_2 "ssions.basic_log2_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000962_2 "ssions.basic_log2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000963_2 "ions.basic_log2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000964_2 "sions.basic_log2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000965_2 "ssions.basic_log2_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000966_2 "ssions.basic_log2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000967_2 "ions.basic_log2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);

#define VkglTestCase_000968_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000968_2 "sions.basic_log2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000969_2 "ssions.basic_log2_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000970_2 "ssions.basic_log2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000971_2 "ions.basic_log2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000972_2 "sions.basic_log2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);

#define VkglTestCase_000973_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000973_2 "ssions.basic_sqrt_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);

#define VkglTestCase_000974_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000974_2 "sions.basic_sqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000974, VkglTestCase_000974_1, VkglTestCase_000974_2);

#define VkglTestCase_000975_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000975_2 "ons.basic_sqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000975, VkglTestCase_000975_1, VkglTestCase_000975_2);

#define VkglTestCase_000976_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000976_2 "sions.basic_sqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000976, VkglTestCase_000976_1, VkglTestCase_000976_2);

#define VkglTestCase_000977_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000977_2 "ssions.basic_sqrt_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000977, VkglTestCase_000977_1, VkglTestCase_000977_2);

#define VkglTestCase_000978_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000978_2 "ssions.basic_sqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000978, VkglTestCase_000978_1, VkglTestCase_000978_2);

#define VkglTestCase_000979_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000979_2 "ions.basic_sqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000979, VkglTestCase_000979_1, VkglTestCase_000979_2);

#define VkglTestCase_000980_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000980_2 "sions.basic_sqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000980, VkglTestCase_000980_1, VkglTestCase_000980_2);

#define VkglTestCase_000981_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000981_2 "ssions.basic_sqrt_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000981, VkglTestCase_000981_1, VkglTestCase_000981_2);

#define VkglTestCase_000982_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000982_2 "ssions.basic_sqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000982, VkglTestCase_000982_1, VkglTestCase_000982_2);

#define VkglTestCase_000983_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000983_2 "ions.basic_sqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000983, VkglTestCase_000983_1, VkglTestCase_000983_2);

#define VkglTestCase_000984_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000984_2 "sions.basic_sqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000985_2 "ssions.basic_sqrt_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_000986_2 "ssions.basic_sqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_000987_2 "ions.basic_sqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_000988_2 "sions.basic_sqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000989_2 "ns.basic_inversesqrt_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000990_2 "ns.basic_inversesqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_000991_2 ".basic_inversesqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_000992_2 "s.basic_inversesqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000993_2 "ons.basic_inversesqrt_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000994_2 "ns.basic_inversesqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_000995_2 ".basic_inversesqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);

#define VkglTestCase_000996_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000996_2 "ns.basic_inversesqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000996, VkglTestCase_000996_1, VkglTestCase_000996_2);

#define VkglTestCase_000997_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_000997_2 "ons.basic_inversesqrt_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000997, VkglTestCase_000997_1, VkglTestCase_000997_2);

#define VkglTestCase_000998_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_000998_2 "ns.basic_inversesqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000998, VkglTestCase_000998_1, VkglTestCase_000998_2);

#define VkglTestCase_000999_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_000999_2 ".basic_inversesqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000999, VkglTestCase_000999_1, VkglTestCase_000999_2);

#define VkglTestCase_001000_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001000_2 "ns.basic_inversesqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001000, VkglTestCase_001000_1, VkglTestCase_001000_2);

#define VkglTestCase_001001_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001001_2 "ons.basic_inversesqrt_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001001, VkglTestCase_001001_1, VkglTestCase_001001_2);

#define VkglTestCase_001002_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001002_2 "ns.basic_inversesqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001002, VkglTestCase_001002_1, VkglTestCase_001002_2);

#define VkglTestCase_001003_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001003_2 ".basic_inversesqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001003, VkglTestCase_001003_1, VkglTestCase_001003_2);

#define VkglTestCase_001004_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001004_2 "ns.basic_inversesqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001004, VkglTestCase_001004_1, VkglTestCase_001004_2);

#define VkglTestCase_001005_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001005_2 "essions.basic_abs_int_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001005, VkglTestCase_001005_1, VkglTestCase_001005_2);

#define VkglTestCase_001006_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001006_2 "essions.basic_abs_int_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001006, VkglTestCase_001006_1, VkglTestCase_001006_2);

#define VkglTestCase_001007_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001007_2 "sions.basic_abs_int_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001007, VkglTestCase_001007_1, VkglTestCase_001007_2);

#define VkglTestCase_001008_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001008_2 "ssions.basic_abs_int_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001008, VkglTestCase_001008_1, VkglTestCase_001008_2);

#define VkglTestCase_001009_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001009_2 "ssions.basic_abs_ivec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001009, VkglTestCase_001009_1, VkglTestCase_001009_2);

#define VkglTestCase_001010_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001010_2 "ssions.basic_abs_ivec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001010, VkglTestCase_001010_1, VkglTestCase_001010_2);

#define VkglTestCase_001011_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001011_2 "ions.basic_abs_ivec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001011, VkglTestCase_001011_1, VkglTestCase_001011_2);

#define VkglTestCase_001012_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001012_2 "sions.basic_abs_ivec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001012, VkglTestCase_001012_1, VkglTestCase_001012_2);

#define VkglTestCase_001013_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001013_2 "ssions.basic_abs_ivec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001013, VkglTestCase_001013_1, VkglTestCase_001013_2);

#define VkglTestCase_001014_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001014_2 "ssions.basic_abs_ivec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001014, VkglTestCase_001014_1, VkglTestCase_001014_2);

#define VkglTestCase_001015_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001015_2 "ions.basic_abs_ivec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001015, VkglTestCase_001015_1, VkglTestCase_001015_2);

#define VkglTestCase_001016_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001016_2 "sions.basic_abs_ivec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001016, VkglTestCase_001016_1, VkglTestCase_001016_2);

#define VkglTestCase_001017_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001017_2 "ssions.basic_abs_ivec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001017, VkglTestCase_001017_1, VkglTestCase_001017_2);

#define VkglTestCase_001018_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001018_2 "ssions.basic_abs_ivec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001018, VkglTestCase_001018_1, VkglTestCase_001018_2);

#define VkglTestCase_001019_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001019_2 "ions.basic_abs_ivec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001019, VkglTestCase_001019_1, VkglTestCase_001019_2);

#define VkglTestCase_001020_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001020_2 "sions.basic_abs_ivec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001020, VkglTestCase_001020_1, VkglTestCase_001020_2);

#define VkglTestCase_001021_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001021_2 "ssions.basic_sign_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001021, VkglTestCase_001021_1, VkglTestCase_001021_2);

#define VkglTestCase_001022_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001022_2 "sions.basic_sign_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001022, VkglTestCase_001022_1, VkglTestCase_001022_2);

#define VkglTestCase_001023_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001023_2 "ons.basic_sign_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001023, VkglTestCase_001023_1, VkglTestCase_001023_2);

#define VkglTestCase_001024_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001024_2 "sions.basic_sign_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001024, VkglTestCase_001024_1, VkglTestCase_001024_2);

#define VkglTestCase_001025_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001025_2 "ssions.basic_sign_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001025, VkglTestCase_001025_1, VkglTestCase_001025_2);

#define VkglTestCase_001026_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001026_2 "ssions.basic_sign_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001026, VkglTestCase_001026_1, VkglTestCase_001026_2);

#define VkglTestCase_001027_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001027_2 "ions.basic_sign_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001027, VkglTestCase_001027_1, VkglTestCase_001027_2);

#define VkglTestCase_001028_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001028_2 "sions.basic_sign_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001028, VkglTestCase_001028_1, VkglTestCase_001028_2);

#define VkglTestCase_001029_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001029_2 "ssions.basic_sign_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001029, VkglTestCase_001029_1, VkglTestCase_001029_2);

#define VkglTestCase_001030_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001030_2 "ssions.basic_sign_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001030, VkglTestCase_001030_1, VkglTestCase_001030_2);

#define VkglTestCase_001031_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001031_2 "ions.basic_sign_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001031, VkglTestCase_001031_1, VkglTestCase_001031_2);

#define VkglTestCase_001032_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001032_2 "sions.basic_sign_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001033_2 "ssions.basic_sign_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001034_2 "ssions.basic_sign_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001035_2 "ions.basic_sign_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001036_2 "sions.basic_sign_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001037_2 "sions.basic_floor_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001038_2 "sions.basic_floor_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001039_2 "ons.basic_floor_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001040_2 "ions.basic_floor_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);

#define VkglTestCase_001041_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001041_2 "ssions.basic_floor_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001042_2 "sions.basic_floor_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001043_2 "ons.basic_floor_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001044_2 "sions.basic_floor_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001045_2 "ssions.basic_floor_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001046_2 "sions.basic_floor_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001047_2 "ons.basic_floor_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);

#define VkglTestCase_001048_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001048_2 "sions.basic_floor_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001049_2 "ssions.basic_floor_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001050_2 "sions.basic_floor_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001051_2 "ons.basic_floor_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001052_2 "sions.basic_floor_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001053_2 "sions.basic_trunc_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001054_2 "sions.basic_trunc_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001055_2 "ons.basic_trunc_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001056_2 "ions.basic_trunc_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001057_2 "ssions.basic_trunc_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001058_2 "sions.basic_trunc_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001059_2 "ons.basic_trunc_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);

#define VkglTestCase_001060_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001060_2 "sions.basic_trunc_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001061_2 "ssions.basic_trunc_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001062_2 "sions.basic_trunc_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001063_2 "ons.basic_trunc_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001064_2 "sions.basic_trunc_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);

#define VkglTestCase_001065_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001065_2 "ssions.basic_trunc_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001066_2 "sions.basic_trunc_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001067_2 "ons.basic_trunc_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001068_2 "sions.basic_trunc_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001069_2 "sions.basic_round_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001070_2 "sions.basic_round_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001071_2 "ons.basic_round_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001072_2 "ions.basic_round_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001073_2 "ssions.basic_round_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001074_2 "sions.basic_round_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001075_2 "ons.basic_round_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001076_2 "sions.basic_round_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001077_2 "ssions.basic_round_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);

#define VkglTestCase_001078_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001078_2 "sions.basic_round_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001079_2 "ons.basic_round_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001080_2 "sions.basic_round_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001081_2 "ssions.basic_round_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);

#define VkglTestCase_001082_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001082_2 "sions.basic_round_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);

#define VkglTestCase_001083_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001083_2 "ons.basic_round_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001083, VkglTestCase_001083_1, VkglTestCase_001083_2);

#define VkglTestCase_001084_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001084_2 "sions.basic_round_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001084, VkglTestCase_001084_1, VkglTestCase_001084_2);

#define VkglTestCase_001085_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001085_2 "ssions.basic_ceil_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001085, VkglTestCase_001085_1, VkglTestCase_001085_2);

#define VkglTestCase_001086_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001086_2 "sions.basic_ceil_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001086, VkglTestCase_001086_1, VkglTestCase_001086_2);

#define VkglTestCase_001087_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001087_2 "ons.basic_ceil_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001087, VkglTestCase_001087_1, VkglTestCase_001087_2);

#define VkglTestCase_001088_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001088_2 "sions.basic_ceil_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001088, VkglTestCase_001088_1, VkglTestCase_001088_2);

#define VkglTestCase_001089_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001089_2 "ssions.basic_ceil_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001089, VkglTestCase_001089_1, VkglTestCase_001089_2);

#define VkglTestCase_001090_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001090_2 "ssions.basic_ceil_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001090, VkglTestCase_001090_1, VkglTestCase_001090_2);

#define VkglTestCase_001091_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001091_2 "ions.basic_ceil_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001091, VkglTestCase_001091_1, VkglTestCase_001091_2);

#define VkglTestCase_001092_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001092_2 "sions.basic_ceil_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001092, VkglTestCase_001092_1, VkglTestCase_001092_2);

#define VkglTestCase_001093_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001093_2 "ssions.basic_ceil_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001093, VkglTestCase_001093_1, VkglTestCase_001093_2);

#define VkglTestCase_001094_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001094_2 "ssions.basic_ceil_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001094, VkglTestCase_001094_1, VkglTestCase_001094_2);

#define VkglTestCase_001095_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001095_2 "ions.basic_ceil_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001095, VkglTestCase_001095_1, VkglTestCase_001095_2);

#define VkglTestCase_001096_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001096_2 "sions.basic_ceil_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001096, VkglTestCase_001096_1, VkglTestCase_001096_2);

#define VkglTestCase_001097_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001097_2 "ssions.basic_ceil_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001097, VkglTestCase_001097_1, VkglTestCase_001097_2);

#define VkglTestCase_001098_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001098_2 "ssions.basic_ceil_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001098, VkglTestCase_001098_1, VkglTestCase_001098_2);

#define VkglTestCase_001099_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001099_2 "ions.basic_ceil_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001099, VkglTestCase_001099_1, VkglTestCase_001099_2);

#define VkglTestCase_001100_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001100_2 "sions.basic_ceil_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001100, VkglTestCase_001100_1, VkglTestCase_001100_2);

#define VkglTestCase_001101_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001101_2 "ssions.basic_mod_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001102_2 "ssions.basic_mod_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001103_2 "ions.basic_mod_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001104_2 "sions.basic_mod_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001105_2 "essions.basic_mod_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);

#define VkglTestCase_001106_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001106_2 "ssions.basic_mod_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001107_2 "ions.basic_mod_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001108_2 "ssions.basic_mod_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001109_2 "ions.basic_mod_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001110_2 "ons.basic_mod_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001111_2 "s.basic_mod_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001112_2 "ons.basic_mod_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);

#define VkglTestCase_001113_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001113_2 "essions.basic_mod_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001114_2 "ssions.basic_mod_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001115_2 "ions.basic_mod_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001116_2 "ssions.basic_mod_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001117_2 "ions.basic_mod_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001118_2 "ons.basic_mod_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001119_2 "s.basic_mod_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001120_2 "ons.basic_mod_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001121_2 "essions.basic_mod_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001122_2 "ssions.basic_mod_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001123_2 "ions.basic_mod_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);

#define VkglTestCase_001124_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001124_2 "ssions.basic_mod_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001125_2 "ions.basic_mod_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);

#define VkglTestCase_001126_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001126_2 "ons.basic_mod_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001127_2 "s.basic_mod_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001128_2 "ons.basic_mod_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001129_2 "ssions.basic_min_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001130_2 "ssions.basic_min_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001131_2 "ions.basic_min_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);

#define VkglTestCase_001132_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001132_2 "sions.basic_min_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001133_2 "essions.basic_min_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001134_2 "ssions.basic_min_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001135_2 "ions.basic_min_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001136_2 "ssions.basic_min_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);

#define VkglTestCase_001137_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001137_2 "ions.basic_min_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001137, VkglTestCase_001137_1, VkglTestCase_001137_2);

#define VkglTestCase_001138_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001138_2 "ons.basic_min_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001138, VkglTestCase_001138_1, VkglTestCase_001138_2);

#define VkglTestCase_001139_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001139_2 "s.basic_min_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001139, VkglTestCase_001139_1, VkglTestCase_001139_2);

#define VkglTestCase_001140_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001140_2 "ons.basic_min_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001140, VkglTestCase_001140_1, VkglTestCase_001140_2);

#define VkglTestCase_001141_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001141_2 "essions.basic_min_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001141, VkglTestCase_001141_1, VkglTestCase_001141_2);

#define VkglTestCase_001142_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001142_2 "ssions.basic_min_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001142, VkglTestCase_001142_1, VkglTestCase_001142_2);

#define VkglTestCase_001143_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001143_2 "ions.basic_min_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001143, VkglTestCase_001143_1, VkglTestCase_001143_2);

#define VkglTestCase_001144_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001144_2 "ssions.basic_min_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001144, VkglTestCase_001144_1, VkglTestCase_001144_2);

#define VkglTestCase_001145_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001145_2 "ions.basic_min_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001146_2 "ons.basic_min_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);

#define VkglTestCase_001147_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001147_2 "s.basic_min_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001147, VkglTestCase_001147_1, VkglTestCase_001147_2);

#define VkglTestCase_001148_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001148_2 "ons.basic_min_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001148, VkglTestCase_001148_1, VkglTestCase_001148_2);

#define VkglTestCase_001149_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001149_2 "essions.basic_min_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001150_2 "ssions.basic_min_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001151_2 "ions.basic_min_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001152_2 "ssions.basic_min_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001153_2 "ions.basic_min_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001154_2 "ons.basic_min_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001155_2 "s.basic_min_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001156_2 "ons.basic_min_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001157_2 "ssions.basic_max_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001158_2 "ssions.basic_max_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001159_2 "ions.basic_max_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001160_2 "sions.basic_max_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001161_2 "essions.basic_max_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001162_2 "ssions.basic_max_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001163_2 "ions.basic_max_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);

#define VkglTestCase_001164_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001164_2 "ssions.basic_max_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001165_2 "ions.basic_max_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001166_2 "ons.basic_max_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);

#define VkglTestCase_001167_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001167_2 "s.basic_max_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001168_2 "ons.basic_max_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001169_2 "essions.basic_max_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001170_2 "ssions.basic_max_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001171_2 "ions.basic_max_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001172_2 "ssions.basic_max_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001173_2 "ions.basic_max_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);

#define VkglTestCase_001174_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001174_2 "ons.basic_max_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001175_2 "s.basic_max_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001176_2 "ons.basic_max_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001177_2 "essions.basic_max_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001178_2 "ssions.basic_max_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001179_2 "ions.basic_max_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);

#define VkglTestCase_001180_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001180_2 "ssions.basic_max_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001181_2 "ions.basic_max_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);

#define VkglTestCase_001182_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001182_2 "ons.basic_max_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001183_2 "s.basic_max_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001184_2 "ons.basic_max_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);

#define VkglTestCase_001185_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001185_2 "sions.basic_clamp_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001186_2 "sions.basic_clamp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001187_2 "ons.basic_clamp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001188_2 "ions.basic_clamp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001189_2 "ssions.basic_clamp_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001190_2 "sions.basic_clamp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001191_2 "ons.basic_clamp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001192_2 "sions.basic_clamp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001193_2 "ons.basic_clamp_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001194_2 "ns.basic_clamp_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001195_2 ".basic_clamp_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001196_2 "ns.basic_clamp_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001197_2 "ssions.basic_clamp_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001198_2 "sions.basic_clamp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);

#define VkglTestCase_001199_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001199_2 "ons.basic_clamp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001200_2 "sions.basic_clamp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001201_2 "ons.basic_clamp_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001202_2 "ns.basic_clamp_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001203_2 ".basic_clamp_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001204_2 "ns.basic_clamp_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001205_2 "ssions.basic_clamp_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);

#define VkglTestCase_001206_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001206_2 "sions.basic_clamp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001207_2 "ons.basic_clamp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001208_2 "sions.basic_clamp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);

#define VkglTestCase_001209_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001209_2 "ons.basic_clamp_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);

#define VkglTestCase_001210_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001210_2 "ns.basic_clamp_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001210, VkglTestCase_001210_1, VkglTestCase_001210_2);

#define VkglTestCase_001211_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001211_2 ".basic_clamp_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001211, VkglTestCase_001211_1, VkglTestCase_001211_2);

#define VkglTestCase_001212_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001212_2 "ns.basic_clamp_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001212, VkglTestCase_001212_1, VkglTestCase_001212_2);

#define VkglTestCase_001213_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001213_2 "sions.basic_length_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001213, VkglTestCase_001213_1, VkglTestCase_001213_2);

#define VkglTestCase_001214_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001214_2 "ions.basic_length_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001215_2 "ns.basic_length_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001216_2 "ions.basic_length_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001217_2 "sions.basic_length_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001218_2 "sions.basic_length_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001219_2 "ons.basic_length_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001220_2 "ions.basic_length_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001221_2 "sions.basic_length_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001222_2 "sions.basic_length_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001223_2 "ons.basic_length_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001224_2 "ions.basic_length_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001225_2 "sions.basic_length_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);

#define VkglTestCase_001226_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001226_2 "sions.basic_length_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001227_2 "ons.basic_length_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001228_2 "ions.basic_length_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001229_2 "ssions.basic_dot_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001230_2 "ssions.basic_dot_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001231_2 "ions.basic_dot_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001232_2 "sions.basic_dot_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);

#define VkglTestCase_001233_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001233_2 "essions.basic_dot_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001234_2 "ssions.basic_dot_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001235_2 "ions.basic_dot_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001236_2 "ssions.basic_dot_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);

#define VkglTestCase_001237_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001237_2 "essions.basic_dot_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001237, VkglTestCase_001237_1, VkglTestCase_001237_2);

#define VkglTestCase_001238_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001238_2 "ssions.basic_dot_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001238, VkglTestCase_001238_1, VkglTestCase_001238_2);

#define VkglTestCase_001239_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001239_2 "ions.basic_dot_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001239, VkglTestCase_001239_1, VkglTestCase_001239_2);

#define VkglTestCase_001240_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001240_2 "ssions.basic_dot_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001240, VkglTestCase_001240_1, VkglTestCase_001240_2);

#define VkglTestCase_001241_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001241_2 "essions.basic_dot_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001241, VkglTestCase_001241_1, VkglTestCase_001241_2);

#define VkglTestCase_001242_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001242_2 "ssions.basic_dot_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001242, VkglTestCase_001242_1, VkglTestCase_001242_2);

#define VkglTestCase_001243_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001243_2 "ions.basic_dot_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001243, VkglTestCase_001243_1, VkglTestCase_001243_2);

#define VkglTestCase_001244_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001244_2 "ssions.basic_dot_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001244, VkglTestCase_001244_1, VkglTestCase_001244_2);

#define VkglTestCase_001245_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001245_2 "ons.basic_normalize_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001245, VkglTestCase_001245_1, VkglTestCase_001245_2);

#define VkglTestCase_001246_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001246_2 "ons.basic_normalize_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001246, VkglTestCase_001246_1, VkglTestCase_001246_2);

#define VkglTestCase_001247_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001247_2 "s.basic_normalize_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001247, VkglTestCase_001247_1, VkglTestCase_001247_2);

#define VkglTestCase_001248_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001248_2 "ns.basic_normalize_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001248, VkglTestCase_001248_1, VkglTestCase_001248_2);

#define VkglTestCase_001249_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001249_2 "ions.basic_normalize_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001249, VkglTestCase_001249_1, VkglTestCase_001249_2);

#define VkglTestCase_001250_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001250_2 "ons.basic_normalize_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001250, VkglTestCase_001250_1, VkglTestCase_001250_2);

#define VkglTestCase_001251_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001251_2 "s.basic_normalize_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001251, VkglTestCase_001251_1, VkglTestCase_001251_2);

#define VkglTestCase_001252_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001252_2 "ons.basic_normalize_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001252, VkglTestCase_001252_1, VkglTestCase_001252_2);

#define VkglTestCase_001253_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001253_2 "ions.basic_normalize_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001253, VkglTestCase_001253_1, VkglTestCase_001253_2);

#define VkglTestCase_001254_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001254_2 "ons.basic_normalize_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001254, VkglTestCase_001254_1, VkglTestCase_001254_2);

#define VkglTestCase_001255_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001255_2 "s.basic_normalize_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001255, VkglTestCase_001255_1, VkglTestCase_001255_2);

#define VkglTestCase_001256_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001256_2 "ons.basic_normalize_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001256, VkglTestCase_001256_1, VkglTestCase_001256_2);

#define VkglTestCase_001257_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001257_2 "ions.basic_normalize_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001257, VkglTestCase_001257_1, VkglTestCase_001257_2);

#define VkglTestCase_001258_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001258_2 "ons.basic_normalize_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001258, VkglTestCase_001258_1, VkglTestCase_001258_2);

#define VkglTestCase_001259_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001259_2 "s.basic_normalize_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001259, VkglTestCase_001259_1, VkglTestCase_001259_2);

#define VkglTestCase_001260_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001260_2 "ons.basic_normalize_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001260, VkglTestCase_001260_1, VkglTestCase_001260_2);

#define VkglTestCase_001261_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001261_2 "ions.array_radians_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001261, VkglTestCase_001261_1, VkglTestCase_001261_2);

#define VkglTestCase_001262_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001262_2 "ions.array_radians_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001262, VkglTestCase_001262_1, VkglTestCase_001262_2);

#define VkglTestCase_001263_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001263_2 "ns.array_radians_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001263, VkglTestCase_001263_1, VkglTestCase_001263_2);

#define VkglTestCase_001264_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001264_2 "ons.array_radians_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001264, VkglTestCase_001264_1, VkglTestCase_001264_2);

#define VkglTestCase_001265_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001265_2 "sions.array_radians_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001265, VkglTestCase_001265_1, VkglTestCase_001265_2);

#define VkglTestCase_001266_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001266_2 "ions.array_radians_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001266, VkglTestCase_001266_1, VkglTestCase_001266_2);

#define VkglTestCase_001267_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001267_2 "ns.array_radians_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001267, VkglTestCase_001267_1, VkglTestCase_001267_2);

#define VkglTestCase_001268_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001268_2 "ions.array_radians_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001268, VkglTestCase_001268_1, VkglTestCase_001268_2);

#define VkglTestCase_001269_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001269_2 "sions.array_radians_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001269, VkglTestCase_001269_1, VkglTestCase_001269_2);

#define VkglTestCase_001270_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001270_2 "ions.array_radians_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001270, VkglTestCase_001270_1, VkglTestCase_001270_2);

#define VkglTestCase_001271_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001271_2 "ns.array_radians_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001271, VkglTestCase_001271_1, VkglTestCase_001271_2);

#define VkglTestCase_001272_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001272_2 "ions.array_radians_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001272, VkglTestCase_001272_1, VkglTestCase_001272_2);

#define VkglTestCase_001273_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001273_2 "sions.array_radians_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001273, VkglTestCase_001273_1, VkglTestCase_001273_2);

#define VkglTestCase_001274_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001274_2 "ions.array_radians_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001274, VkglTestCase_001274_1, VkglTestCase_001274_2);

#define VkglTestCase_001275_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001275_2 "ns.array_radians_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001275, VkglTestCase_001275_1, VkglTestCase_001275_2);

#define VkglTestCase_001276_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001276_2 "ions.array_radians_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001276, VkglTestCase_001276_1, VkglTestCase_001276_2);

#define VkglTestCase_001277_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001277_2 "ions.array_degrees_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001277, VkglTestCase_001277_1, VkglTestCase_001277_2);

#define VkglTestCase_001278_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001278_2 "ions.array_degrees_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001278, VkglTestCase_001278_1, VkglTestCase_001278_2);

#define VkglTestCase_001279_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001279_2 "ns.array_degrees_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001279, VkglTestCase_001279_1, VkglTestCase_001279_2);

#define VkglTestCase_001280_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001280_2 "ons.array_degrees_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001280, VkglTestCase_001280_1, VkglTestCase_001280_2);

#define VkglTestCase_001281_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001281_2 "sions.array_degrees_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001281, VkglTestCase_001281_1, VkglTestCase_001281_2);

#define VkglTestCase_001282_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001282_2 "ions.array_degrees_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001282, VkglTestCase_001282_1, VkglTestCase_001282_2);

#define VkglTestCase_001283_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001283_2 "ns.array_degrees_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001283, VkglTestCase_001283_1, VkglTestCase_001283_2);

#define VkglTestCase_001284_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001284_2 "ions.array_degrees_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001284, VkglTestCase_001284_1, VkglTestCase_001284_2);

#define VkglTestCase_001285_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001285_2 "sions.array_degrees_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001285, VkglTestCase_001285_1, VkglTestCase_001285_2);

#define VkglTestCase_001286_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001286_2 "ions.array_degrees_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001286, VkglTestCase_001286_1, VkglTestCase_001286_2);

#define VkglTestCase_001287_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001287_2 "ns.array_degrees_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001287, VkglTestCase_001287_1, VkglTestCase_001287_2);

#define VkglTestCase_001288_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001288_2 "ions.array_degrees_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001288, VkglTestCase_001288_1, VkglTestCase_001288_2);

#define VkglTestCase_001289_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001289_2 "sions.array_degrees_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001289, VkglTestCase_001289_1, VkglTestCase_001289_2);

#define VkglTestCase_001290_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001290_2 "ions.array_degrees_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001290, VkglTestCase_001290_1, VkglTestCase_001290_2);

#define VkglTestCase_001291_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001291_2 "ns.array_degrees_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001291, VkglTestCase_001291_1, VkglTestCase_001291_2);

#define VkglTestCase_001292_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001292_2 "ions.array_degrees_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001292, VkglTestCase_001292_1, VkglTestCase_001292_2);

#define VkglTestCase_001293_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001293_2 "ssions.array_sin_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001293, VkglTestCase_001293_1, VkglTestCase_001293_2);

#define VkglTestCase_001294_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001294_2 "ssions.array_sin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001294, VkglTestCase_001294_1, VkglTestCase_001294_2);

#define VkglTestCase_001295_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001295_2 "ions.array_sin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001295, VkglTestCase_001295_1, VkglTestCase_001295_2);

#define VkglTestCase_001296_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001296_2 "sions.array_sin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001296, VkglTestCase_001296_1, VkglTestCase_001296_2);

#define VkglTestCase_001297_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001297_2 "essions.array_sin_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001297, VkglTestCase_001297_1, VkglTestCase_001297_2);

#define VkglTestCase_001298_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001298_2 "ssions.array_sin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001298, VkglTestCase_001298_1, VkglTestCase_001298_2);

#define VkglTestCase_001299_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001299_2 "ions.array_sin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001299, VkglTestCase_001299_1, VkglTestCase_001299_2);

#define VkglTestCase_001300_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001300_2 "ssions.array_sin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001300, VkglTestCase_001300_1, VkglTestCase_001300_2);

#define VkglTestCase_001301_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001301_2 "essions.array_sin_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001301, VkglTestCase_001301_1, VkglTestCase_001301_2);

#define VkglTestCase_001302_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001302_2 "ssions.array_sin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001302, VkglTestCase_001302_1, VkglTestCase_001302_2);

#define VkglTestCase_001303_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001303_2 "ions.array_sin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001303, VkglTestCase_001303_1, VkglTestCase_001303_2);

#define VkglTestCase_001304_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001304_2 "ssions.array_sin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001304, VkglTestCase_001304_1, VkglTestCase_001304_2);

#define VkglTestCase_001305_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001305_2 "essions.array_sin_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001305, VkglTestCase_001305_1, VkglTestCase_001305_2);

#define VkglTestCase_001306_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001306_2 "ssions.array_sin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001306, VkglTestCase_001306_1, VkglTestCase_001306_2);

#define VkglTestCase_001307_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001307_2 "ions.array_sin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001307, VkglTestCase_001307_1, VkglTestCase_001307_2);

#define VkglTestCase_001308_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001308_2 "ssions.array_sin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001308, VkglTestCase_001308_1, VkglTestCase_001308_2);

#define VkglTestCase_001309_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001309_2 "ssions.array_cos_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001309, VkglTestCase_001309_1, VkglTestCase_001309_2);

#define VkglTestCase_001310_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001310_2 "ssions.array_cos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001310, VkglTestCase_001310_1, VkglTestCase_001310_2);

#define VkglTestCase_001311_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001311_2 "ions.array_cos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001311, VkglTestCase_001311_1, VkglTestCase_001311_2);

#define VkglTestCase_001312_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001312_2 "sions.array_cos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001312, VkglTestCase_001312_1, VkglTestCase_001312_2);

#define VkglTestCase_001313_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001313_2 "essions.array_cos_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001313, VkglTestCase_001313_1, VkglTestCase_001313_2);

#define VkglTestCase_001314_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001314_2 "ssions.array_cos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001314, VkglTestCase_001314_1, VkglTestCase_001314_2);

#define VkglTestCase_001315_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001315_2 "ions.array_cos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001315, VkglTestCase_001315_1, VkglTestCase_001315_2);

#define VkglTestCase_001316_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001316_2 "ssions.array_cos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001316, VkglTestCase_001316_1, VkglTestCase_001316_2);

#define VkglTestCase_001317_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001317_2 "essions.array_cos_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001317, VkglTestCase_001317_1, VkglTestCase_001317_2);

#define VkglTestCase_001318_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001318_2 "ssions.array_cos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001318, VkglTestCase_001318_1, VkglTestCase_001318_2);

#define VkglTestCase_001319_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001319_2 "ions.array_cos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001319, VkglTestCase_001319_1, VkglTestCase_001319_2);

#define VkglTestCase_001320_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001320_2 "ssions.array_cos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001320, VkglTestCase_001320_1, VkglTestCase_001320_2);

#define VkglTestCase_001321_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001321_2 "essions.array_cos_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001321, VkglTestCase_001321_1, VkglTestCase_001321_2);

#define VkglTestCase_001322_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001322_2 "ssions.array_cos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001322, VkglTestCase_001322_1, VkglTestCase_001322_2);

#define VkglTestCase_001323_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001323_2 "ions.array_cos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001323, VkglTestCase_001323_1, VkglTestCase_001323_2);

#define VkglTestCase_001324_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001324_2 "ssions.array_cos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001324, VkglTestCase_001324_1, VkglTestCase_001324_2);

#define VkglTestCase_001325_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001325_2 "ssions.array_asin_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001325, VkglTestCase_001325_1, VkglTestCase_001325_2);

#define VkglTestCase_001326_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001326_2 "sions.array_asin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001326, VkglTestCase_001326_1, VkglTestCase_001326_2);

#define VkglTestCase_001327_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001327_2 "ons.array_asin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001327, VkglTestCase_001327_1, VkglTestCase_001327_2);

#define VkglTestCase_001328_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001328_2 "sions.array_asin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001328, VkglTestCase_001328_1, VkglTestCase_001328_2);

#define VkglTestCase_001329_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001329_2 "ssions.array_asin_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001329, VkglTestCase_001329_1, VkglTestCase_001329_2);

#define VkglTestCase_001330_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001330_2 "ssions.array_asin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001330, VkglTestCase_001330_1, VkglTestCase_001330_2);

#define VkglTestCase_001331_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001331_2 "ions.array_asin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001331, VkglTestCase_001331_1, VkglTestCase_001331_2);

#define VkglTestCase_001332_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001332_2 "sions.array_asin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001332, VkglTestCase_001332_1, VkglTestCase_001332_2);

#define VkglTestCase_001333_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001333_2 "ssions.array_asin_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001333, VkglTestCase_001333_1, VkglTestCase_001333_2);

#define VkglTestCase_001334_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001334_2 "ssions.array_asin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001334, VkglTestCase_001334_1, VkglTestCase_001334_2);

#define VkglTestCase_001335_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001335_2 "ions.array_asin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001335, VkglTestCase_001335_1, VkglTestCase_001335_2);

#define VkglTestCase_001336_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001336_2 "sions.array_asin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001336, VkglTestCase_001336_1, VkglTestCase_001336_2);

#define VkglTestCase_001337_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001337_2 "ssions.array_asin_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001337, VkglTestCase_001337_1, VkglTestCase_001337_2);

#define VkglTestCase_001338_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001338_2 "ssions.array_asin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001338, VkglTestCase_001338_1, VkglTestCase_001338_2);

#define VkglTestCase_001339_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001339_2 "ions.array_asin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001339, VkglTestCase_001339_1, VkglTestCase_001339_2);

#define VkglTestCase_001340_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001340_2 "sions.array_asin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001340, VkglTestCase_001340_1, VkglTestCase_001340_2);

#define VkglTestCase_001341_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001341_2 "ssions.array_acos_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001341, VkglTestCase_001341_1, VkglTestCase_001341_2);

#define VkglTestCase_001342_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001342_2 "sions.array_acos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001342, VkglTestCase_001342_1, VkglTestCase_001342_2);

#define VkglTestCase_001343_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001343_2 "ons.array_acos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001343, VkglTestCase_001343_1, VkglTestCase_001343_2);

#define VkglTestCase_001344_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001344_2 "sions.array_acos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001344, VkglTestCase_001344_1, VkglTestCase_001344_2);

#define VkglTestCase_001345_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001345_2 "ssions.array_acos_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001345, VkglTestCase_001345_1, VkglTestCase_001345_2);

#define VkglTestCase_001346_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001346_2 "ssions.array_acos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001346, VkglTestCase_001346_1, VkglTestCase_001346_2);

#define VkglTestCase_001347_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001347_2 "ions.array_acos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001347, VkglTestCase_001347_1, VkglTestCase_001347_2);

#define VkglTestCase_001348_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001348_2 "sions.array_acos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001348, VkglTestCase_001348_1, VkglTestCase_001348_2);

#define VkglTestCase_001349_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001349_2 "ssions.array_acos_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001349, VkglTestCase_001349_1, VkglTestCase_001349_2);

#define VkglTestCase_001350_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001350_2 "ssions.array_acos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001350, VkglTestCase_001350_1, VkglTestCase_001350_2);

#define VkglTestCase_001351_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001351_2 "ions.array_acos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001351, VkglTestCase_001351_1, VkglTestCase_001351_2);

#define VkglTestCase_001352_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001352_2 "sions.array_acos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001352, VkglTestCase_001352_1, VkglTestCase_001352_2);

#define VkglTestCase_001353_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001353_2 "ssions.array_acos_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001353, VkglTestCase_001353_1, VkglTestCase_001353_2);

#define VkglTestCase_001354_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001354_2 "ssions.array_acos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001354, VkglTestCase_001354_1, VkglTestCase_001354_2);

#define VkglTestCase_001355_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001355_2 "ions.array_acos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001355, VkglTestCase_001355_1, VkglTestCase_001355_2);

#define VkglTestCase_001356_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001356_2 "sions.array_acos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001356, VkglTestCase_001356_1, VkglTestCase_001356_2);

#define VkglTestCase_001357_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001357_2 "ssions.array_pow_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001357, VkglTestCase_001357_1, VkglTestCase_001357_2);

#define VkglTestCase_001358_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001358_2 "ssions.array_pow_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001358, VkglTestCase_001358_1, VkglTestCase_001358_2);

#define VkglTestCase_001359_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001359_2 "ions.array_pow_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001359, VkglTestCase_001359_1, VkglTestCase_001359_2);

#define VkglTestCase_001360_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001360_2 "sions.array_pow_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001360, VkglTestCase_001360_1, VkglTestCase_001360_2);

#define VkglTestCase_001361_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001361_2 "essions.array_pow_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001361, VkglTestCase_001361_1, VkglTestCase_001361_2);

#define VkglTestCase_001362_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001362_2 "ssions.array_pow_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001362, VkglTestCase_001362_1, VkglTestCase_001362_2);

#define VkglTestCase_001363_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001363_2 "ions.array_pow_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001363, VkglTestCase_001363_1, VkglTestCase_001363_2);

#define VkglTestCase_001364_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001364_2 "ssions.array_pow_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001364, VkglTestCase_001364_1, VkglTestCase_001364_2);

#define VkglTestCase_001365_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001365_2 "essions.array_pow_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001365, VkglTestCase_001365_1, VkglTestCase_001365_2);

#define VkglTestCase_001366_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001366_2 "ssions.array_pow_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001366, VkglTestCase_001366_1, VkglTestCase_001366_2);

#define VkglTestCase_001367_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001367_2 "ions.array_pow_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001367, VkglTestCase_001367_1, VkglTestCase_001367_2);

#define VkglTestCase_001368_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001368_2 "ssions.array_pow_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001368, VkglTestCase_001368_1, VkglTestCase_001368_2);

#define VkglTestCase_001369_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001369_2 "essions.array_pow_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001369, VkglTestCase_001369_1, VkglTestCase_001369_2);

#define VkglTestCase_001370_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001370_2 "ssions.array_pow_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001370, VkglTestCase_001370_1, VkglTestCase_001370_2);

#define VkglTestCase_001371_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001371_2 "ions.array_pow_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001371, VkglTestCase_001371_1, VkglTestCase_001371_2);

#define VkglTestCase_001372_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001372_2 "ssions.array_pow_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001372, VkglTestCase_001372_1, VkglTestCase_001372_2);

#define VkglTestCase_001373_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001373_2 "ssions.array_exp_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001373, VkglTestCase_001373_1, VkglTestCase_001373_2);

#define VkglTestCase_001374_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001374_2 "ssions.array_exp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001374, VkglTestCase_001374_1, VkglTestCase_001374_2);

#define VkglTestCase_001375_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001375_2 "ions.array_exp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001375, VkglTestCase_001375_1, VkglTestCase_001375_2);

#define VkglTestCase_001376_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001376_2 "sions.array_exp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001376, VkglTestCase_001376_1, VkglTestCase_001376_2);

#define VkglTestCase_001377_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001377_2 "essions.array_exp_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001377, VkglTestCase_001377_1, VkglTestCase_001377_2);

#define VkglTestCase_001378_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001378_2 "ssions.array_exp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001378, VkglTestCase_001378_1, VkglTestCase_001378_2);

#define VkglTestCase_001379_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001379_2 "ions.array_exp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001379, VkglTestCase_001379_1, VkglTestCase_001379_2);

#define VkglTestCase_001380_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001380_2 "ssions.array_exp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001380, VkglTestCase_001380_1, VkglTestCase_001380_2);

#define VkglTestCase_001381_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001381_2 "essions.array_exp_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001381, VkglTestCase_001381_1, VkglTestCase_001381_2);

#define VkglTestCase_001382_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001382_2 "ssions.array_exp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001382, VkglTestCase_001382_1, VkglTestCase_001382_2);

#define VkglTestCase_001383_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001383_2 "ions.array_exp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001383, VkglTestCase_001383_1, VkglTestCase_001383_2);

#define VkglTestCase_001384_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001384_2 "ssions.array_exp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001384, VkglTestCase_001384_1, VkglTestCase_001384_2);

#define VkglTestCase_001385_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001385_2 "essions.array_exp_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001385, VkglTestCase_001385_1, VkglTestCase_001385_2);

#define VkglTestCase_001386_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001386_2 "ssions.array_exp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001386, VkglTestCase_001386_1, VkglTestCase_001386_2);

#define VkglTestCase_001387_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001387_2 "ions.array_exp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001387, VkglTestCase_001387_1, VkglTestCase_001387_2);

#define VkglTestCase_001388_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001388_2 "ssions.array_exp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001388, VkglTestCase_001388_1, VkglTestCase_001388_2);

#define VkglTestCase_001389_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001389_2 "ssions.array_log_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001389, VkglTestCase_001389_1, VkglTestCase_001389_2);

#define VkglTestCase_001390_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001390_2 "ssions.array_log_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001390, VkglTestCase_001390_1, VkglTestCase_001390_2);

#define VkglTestCase_001391_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001391_2 "ions.array_log_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001391, VkglTestCase_001391_1, VkglTestCase_001391_2);

#define VkglTestCase_001392_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001392_2 "sions.array_log_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001392, VkglTestCase_001392_1, VkglTestCase_001392_2);

#define VkglTestCase_001393_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001393_2 "essions.array_log_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001393, VkglTestCase_001393_1, VkglTestCase_001393_2);

#define VkglTestCase_001394_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001394_2 "ssions.array_log_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001394, VkglTestCase_001394_1, VkglTestCase_001394_2);

#define VkglTestCase_001395_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001395_2 "ions.array_log_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001395, VkglTestCase_001395_1, VkglTestCase_001395_2);

#define VkglTestCase_001396_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001396_2 "ssions.array_log_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001396, VkglTestCase_001396_1, VkglTestCase_001396_2);

#define VkglTestCase_001397_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001397_2 "essions.array_log_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001397, VkglTestCase_001397_1, VkglTestCase_001397_2);

#define VkglTestCase_001398_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001398_2 "ssions.array_log_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001398, VkglTestCase_001398_1, VkglTestCase_001398_2);

#define VkglTestCase_001399_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001399_2 "ions.array_log_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001399, VkglTestCase_001399_1, VkglTestCase_001399_2);

#define VkglTestCase_001400_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001400_2 "ssions.array_log_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001400, VkglTestCase_001400_1, VkglTestCase_001400_2);

#define VkglTestCase_001401_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001401_2 "essions.array_log_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001401, VkglTestCase_001401_1, VkglTestCase_001401_2);

#define VkglTestCase_001402_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001402_2 "ssions.array_log_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001402, VkglTestCase_001402_1, VkglTestCase_001402_2);

#define VkglTestCase_001403_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001403_2 "ions.array_log_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001403, VkglTestCase_001403_1, VkglTestCase_001403_2);

#define VkglTestCase_001404_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001404_2 "ssions.array_log_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001404, VkglTestCase_001404_1, VkglTestCase_001404_2);

#define VkglTestCase_001405_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001405_2 "ssions.array_exp2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001405, VkglTestCase_001405_1, VkglTestCase_001405_2);

#define VkglTestCase_001406_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001406_2 "sions.array_exp2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001406, VkglTestCase_001406_1, VkglTestCase_001406_2);

#define VkglTestCase_001407_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001407_2 "ons.array_exp2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001407, VkglTestCase_001407_1, VkglTestCase_001407_2);

#define VkglTestCase_001408_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001408_2 "sions.array_exp2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001408, VkglTestCase_001408_1, VkglTestCase_001408_2);

#define VkglTestCase_001409_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001409_2 "ssions.array_exp2_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001409, VkglTestCase_001409_1, VkglTestCase_001409_2);

#define VkglTestCase_001410_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001410_2 "ssions.array_exp2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001410, VkglTestCase_001410_1, VkglTestCase_001410_2);

#define VkglTestCase_001411_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001411_2 "ions.array_exp2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001411, VkglTestCase_001411_1, VkglTestCase_001411_2);

#define VkglTestCase_001412_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001412_2 "sions.array_exp2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001412, VkglTestCase_001412_1, VkglTestCase_001412_2);

#define VkglTestCase_001413_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001413_2 "ssions.array_exp2_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001413, VkglTestCase_001413_1, VkglTestCase_001413_2);

#define VkglTestCase_001414_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001414_2 "ssions.array_exp2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001414, VkglTestCase_001414_1, VkglTestCase_001414_2);

#define VkglTestCase_001415_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001415_2 "ions.array_exp2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001415, VkglTestCase_001415_1, VkglTestCase_001415_2);

#define VkglTestCase_001416_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001416_2 "sions.array_exp2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001416, VkglTestCase_001416_1, VkglTestCase_001416_2);

#define VkglTestCase_001417_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001417_2 "ssions.array_exp2_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001417, VkglTestCase_001417_1, VkglTestCase_001417_2);

#define VkglTestCase_001418_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001418_2 "ssions.array_exp2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001418, VkglTestCase_001418_1, VkglTestCase_001418_2);

#define VkglTestCase_001419_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001419_2 "ions.array_exp2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001419, VkglTestCase_001419_1, VkglTestCase_001419_2);

#define VkglTestCase_001420_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001420_2 "sions.array_exp2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001420, VkglTestCase_001420_1, VkglTestCase_001420_2);

#define VkglTestCase_001421_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001421_2 "ssions.array_log2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001421, VkglTestCase_001421_1, VkglTestCase_001421_2);

#define VkglTestCase_001422_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001422_2 "sions.array_log2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001422, VkglTestCase_001422_1, VkglTestCase_001422_2);

#define VkglTestCase_001423_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001423_2 "ons.array_log2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001423, VkglTestCase_001423_1, VkglTestCase_001423_2);

#define VkglTestCase_001424_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001424_2 "sions.array_log2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001424, VkglTestCase_001424_1, VkglTestCase_001424_2);

#define VkglTestCase_001425_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001425_2 "ssions.array_log2_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001425, VkglTestCase_001425_1, VkglTestCase_001425_2);

#define VkglTestCase_001426_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001426_2 "ssions.array_log2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001426, VkglTestCase_001426_1, VkglTestCase_001426_2);

#define VkglTestCase_001427_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001427_2 "ions.array_log2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001427, VkglTestCase_001427_1, VkglTestCase_001427_2);

#define VkglTestCase_001428_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001428_2 "sions.array_log2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001428, VkglTestCase_001428_1, VkglTestCase_001428_2);

#define VkglTestCase_001429_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001429_2 "ssions.array_log2_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001429, VkglTestCase_001429_1, VkglTestCase_001429_2);

#define VkglTestCase_001430_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001430_2 "ssions.array_log2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001430, VkglTestCase_001430_1, VkglTestCase_001430_2);

#define VkglTestCase_001431_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001431_2 "ions.array_log2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001431, VkglTestCase_001431_1, VkglTestCase_001431_2);

#define VkglTestCase_001432_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001432_2 "sions.array_log2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001432, VkglTestCase_001432_1, VkglTestCase_001432_2);

#define VkglTestCase_001433_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001433_2 "ssions.array_log2_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001433, VkglTestCase_001433_1, VkglTestCase_001433_2);

#define VkglTestCase_001434_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001434_2 "ssions.array_log2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001434, VkglTestCase_001434_1, VkglTestCase_001434_2);

#define VkglTestCase_001435_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001435_2 "ions.array_log2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001435, VkglTestCase_001435_1, VkglTestCase_001435_2);

#define VkglTestCase_001436_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001436_2 "sions.array_log2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001436, VkglTestCase_001436_1, VkglTestCase_001436_2);

#define VkglTestCase_001437_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001437_2 "ssions.array_sqrt_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001437, VkglTestCase_001437_1, VkglTestCase_001437_2);

#define VkglTestCase_001438_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001438_2 "sions.array_sqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001438, VkglTestCase_001438_1, VkglTestCase_001438_2);

#define VkglTestCase_001439_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001439_2 "ons.array_sqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001439, VkglTestCase_001439_1, VkglTestCase_001439_2);

#define VkglTestCase_001440_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001440_2 "sions.array_sqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001440, VkglTestCase_001440_1, VkglTestCase_001440_2);

#define VkglTestCase_001441_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001441_2 "ssions.array_sqrt_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001441, VkglTestCase_001441_1, VkglTestCase_001441_2);

#define VkglTestCase_001442_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001442_2 "ssions.array_sqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001442, VkglTestCase_001442_1, VkglTestCase_001442_2);

#define VkglTestCase_001443_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001443_2 "ions.array_sqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001443, VkglTestCase_001443_1, VkglTestCase_001443_2);

#define VkglTestCase_001444_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001444_2 "sions.array_sqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001444, VkglTestCase_001444_1, VkglTestCase_001444_2);

#define VkglTestCase_001445_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001445_2 "ssions.array_sqrt_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001445, VkglTestCase_001445_1, VkglTestCase_001445_2);

#define VkglTestCase_001446_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001446_2 "ssions.array_sqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001446, VkglTestCase_001446_1, VkglTestCase_001446_2);

#define VkglTestCase_001447_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001447_2 "ions.array_sqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001447, VkglTestCase_001447_1, VkglTestCase_001447_2);

#define VkglTestCase_001448_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001448_2 "sions.array_sqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001448, VkglTestCase_001448_1, VkglTestCase_001448_2);

#define VkglTestCase_001449_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001449_2 "ssions.array_sqrt_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001449, VkglTestCase_001449_1, VkglTestCase_001449_2);

#define VkglTestCase_001450_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001450_2 "ssions.array_sqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001450, VkglTestCase_001450_1, VkglTestCase_001450_2);

#define VkglTestCase_001451_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001451_2 "ions.array_sqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001451, VkglTestCase_001451_1, VkglTestCase_001451_2);

#define VkglTestCase_001452_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001452_2 "sions.array_sqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001452, VkglTestCase_001452_1, VkglTestCase_001452_2);

#define VkglTestCase_001453_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001453_2 "ns.array_inversesqrt_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001453, VkglTestCase_001453_1, VkglTestCase_001453_2);

#define VkglTestCase_001454_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001454_2 "ns.array_inversesqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001454, VkglTestCase_001454_1, VkglTestCase_001454_2);

#define VkglTestCase_001455_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001455_2 ".array_inversesqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001455, VkglTestCase_001455_1, VkglTestCase_001455_2);

#define VkglTestCase_001456_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001456_2 "s.array_inversesqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001456, VkglTestCase_001456_1, VkglTestCase_001456_2);

#define VkglTestCase_001457_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001457_2 "ons.array_inversesqrt_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001457, VkglTestCase_001457_1, VkglTestCase_001457_2);

#define VkglTestCase_001458_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001458_2 "ns.array_inversesqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001458, VkglTestCase_001458_1, VkglTestCase_001458_2);

#define VkglTestCase_001459_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001459_2 ".array_inversesqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001459, VkglTestCase_001459_1, VkglTestCase_001459_2);

#define VkglTestCase_001460_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001460_2 "ns.array_inversesqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001460, VkglTestCase_001460_1, VkglTestCase_001460_2);

#define VkglTestCase_001461_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001461_2 "ons.array_inversesqrt_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001461, VkglTestCase_001461_1, VkglTestCase_001461_2);

#define VkglTestCase_001462_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001462_2 "ns.array_inversesqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001462, VkglTestCase_001462_1, VkglTestCase_001462_2);

#define VkglTestCase_001463_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001463_2 ".array_inversesqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001463, VkglTestCase_001463_1, VkglTestCase_001463_2);

#define VkglTestCase_001464_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001464_2 "ns.array_inversesqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001464, VkglTestCase_001464_1, VkglTestCase_001464_2);

#define VkglTestCase_001465_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001465_2 "ons.array_inversesqrt_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001465, VkglTestCase_001465_1, VkglTestCase_001465_2);

#define VkglTestCase_001466_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001466_2 "ns.array_inversesqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001466, VkglTestCase_001466_1, VkglTestCase_001466_2);

#define VkglTestCase_001467_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001467_2 ".array_inversesqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001467, VkglTestCase_001467_1, VkglTestCase_001467_2);

#define VkglTestCase_001468_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001468_2 "ns.array_inversesqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001468, VkglTestCase_001468_1, VkglTestCase_001468_2);

#define VkglTestCase_001469_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001469_2 "essions.array_abs_int_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001469, VkglTestCase_001469_1, VkglTestCase_001469_2);

#define VkglTestCase_001470_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001470_2 "essions.array_abs_int_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001470, VkglTestCase_001470_1, VkglTestCase_001470_2);

#define VkglTestCase_001471_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001471_2 "sions.array_abs_int_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001471, VkglTestCase_001471_1, VkglTestCase_001471_2);

#define VkglTestCase_001472_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001472_2 "ssions.array_abs_int_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001472, VkglTestCase_001472_1, VkglTestCase_001472_2);

#define VkglTestCase_001473_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001473_2 "ssions.array_abs_ivec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001473, VkglTestCase_001473_1, VkglTestCase_001473_2);

#define VkglTestCase_001474_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001474_2 "ssions.array_abs_ivec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001474, VkglTestCase_001474_1, VkglTestCase_001474_2);

#define VkglTestCase_001475_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001475_2 "ions.array_abs_ivec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001475, VkglTestCase_001475_1, VkglTestCase_001475_2);

#define VkglTestCase_001476_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001476_2 "sions.array_abs_ivec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001476, VkglTestCase_001476_1, VkglTestCase_001476_2);

#define VkglTestCase_001477_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001477_2 "ssions.array_abs_ivec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001477, VkglTestCase_001477_1, VkglTestCase_001477_2);

#define VkglTestCase_001478_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001478_2 "ssions.array_abs_ivec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001478, VkglTestCase_001478_1, VkglTestCase_001478_2);

#define VkglTestCase_001479_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001479_2 "ions.array_abs_ivec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001479, VkglTestCase_001479_1, VkglTestCase_001479_2);

#define VkglTestCase_001480_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001480_2 "sions.array_abs_ivec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001480, VkglTestCase_001480_1, VkglTestCase_001480_2);

#define VkglTestCase_001481_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001481_2 "ssions.array_abs_ivec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001481, VkglTestCase_001481_1, VkglTestCase_001481_2);

#define VkglTestCase_001482_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001482_2 "ssions.array_abs_ivec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001482, VkglTestCase_001482_1, VkglTestCase_001482_2);

#define VkglTestCase_001483_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001483_2 "ions.array_abs_ivec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001483, VkglTestCase_001483_1, VkglTestCase_001483_2);

#define VkglTestCase_001484_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001484_2 "sions.array_abs_ivec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001484, VkglTestCase_001484_1, VkglTestCase_001484_2);

#define VkglTestCase_001485_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001485_2 "ssions.array_sign_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001485, VkglTestCase_001485_1, VkglTestCase_001485_2);

#define VkglTestCase_001486_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001486_2 "sions.array_sign_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001486, VkglTestCase_001486_1, VkglTestCase_001486_2);

#define VkglTestCase_001487_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001487_2 "ons.array_sign_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001487, VkglTestCase_001487_1, VkglTestCase_001487_2);

#define VkglTestCase_001488_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001488_2 "sions.array_sign_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001488, VkglTestCase_001488_1, VkglTestCase_001488_2);

#define VkglTestCase_001489_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001489_2 "ssions.array_sign_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001489, VkglTestCase_001489_1, VkglTestCase_001489_2);

#define VkglTestCase_001490_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001490_2 "ssions.array_sign_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001490, VkglTestCase_001490_1, VkglTestCase_001490_2);

#define VkglTestCase_001491_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001491_2 "ions.array_sign_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001491, VkglTestCase_001491_1, VkglTestCase_001491_2);

#define VkglTestCase_001492_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001492_2 "sions.array_sign_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001492, VkglTestCase_001492_1, VkglTestCase_001492_2);

#define VkglTestCase_001493_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001493_2 "ssions.array_sign_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001493, VkglTestCase_001493_1, VkglTestCase_001493_2);

#define VkglTestCase_001494_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001494_2 "ssions.array_sign_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001494, VkglTestCase_001494_1, VkglTestCase_001494_2);

#define VkglTestCase_001495_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001495_2 "ions.array_sign_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001495, VkglTestCase_001495_1, VkglTestCase_001495_2);

#define VkglTestCase_001496_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001496_2 "sions.array_sign_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001496, VkglTestCase_001496_1, VkglTestCase_001496_2);

#define VkglTestCase_001497_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001497_2 "ssions.array_sign_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001497, VkglTestCase_001497_1, VkglTestCase_001497_2);

#define VkglTestCase_001498_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001498_2 "ssions.array_sign_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001498, VkglTestCase_001498_1, VkglTestCase_001498_2);

#define VkglTestCase_001499_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001499_2 "ions.array_sign_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001499, VkglTestCase_001499_1, VkglTestCase_001499_2);

#define VkglTestCase_001500_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001500_2 "sions.array_sign_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001500, VkglTestCase_001500_1, VkglTestCase_001500_2);

#define VkglTestCase_001501_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001501_2 "sions.array_floor_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001501, VkglTestCase_001501_1, VkglTestCase_001501_2);

#define VkglTestCase_001502_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001502_2 "sions.array_floor_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001502, VkglTestCase_001502_1, VkglTestCase_001502_2);

#define VkglTestCase_001503_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001503_2 "ons.array_floor_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001503, VkglTestCase_001503_1, VkglTestCase_001503_2);

#define VkglTestCase_001504_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001504_2 "ions.array_floor_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001504, VkglTestCase_001504_1, VkglTestCase_001504_2);

#define VkglTestCase_001505_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001505_2 "ssions.array_floor_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001505, VkglTestCase_001505_1, VkglTestCase_001505_2);

#define VkglTestCase_001506_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001506_2 "sions.array_floor_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001506, VkglTestCase_001506_1, VkglTestCase_001506_2);

#define VkglTestCase_001507_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001507_2 "ons.array_floor_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001507, VkglTestCase_001507_1, VkglTestCase_001507_2);

#define VkglTestCase_001508_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001508_2 "sions.array_floor_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001508, VkglTestCase_001508_1, VkglTestCase_001508_2);

#define VkglTestCase_001509_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001509_2 "ssions.array_floor_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001509, VkglTestCase_001509_1, VkglTestCase_001509_2);

#define VkglTestCase_001510_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001510_2 "sions.array_floor_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001510, VkglTestCase_001510_1, VkglTestCase_001510_2);

#define VkglTestCase_001511_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001511_2 "ons.array_floor_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001511, VkglTestCase_001511_1, VkglTestCase_001511_2);

#define VkglTestCase_001512_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001512_2 "sions.array_floor_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001512, VkglTestCase_001512_1, VkglTestCase_001512_2);

#define VkglTestCase_001513_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001513_2 "ssions.array_floor_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001513, VkglTestCase_001513_1, VkglTestCase_001513_2);

#define VkglTestCase_001514_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001514_2 "sions.array_floor_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001514, VkglTestCase_001514_1, VkglTestCase_001514_2);

#define VkglTestCase_001515_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001515_2 "ons.array_floor_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001515, VkglTestCase_001515_1, VkglTestCase_001515_2);

#define VkglTestCase_001516_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001516_2 "sions.array_floor_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001516, VkglTestCase_001516_1, VkglTestCase_001516_2);

#define VkglTestCase_001517_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001517_2 "sions.array_trunc_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001517, VkglTestCase_001517_1, VkglTestCase_001517_2);

#define VkglTestCase_001518_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001518_2 "sions.array_trunc_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001518, VkglTestCase_001518_1, VkglTestCase_001518_2);

#define VkglTestCase_001519_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001519_2 "ons.array_trunc_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001519, VkglTestCase_001519_1, VkglTestCase_001519_2);

#define VkglTestCase_001520_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001520_2 "ions.array_trunc_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001520, VkglTestCase_001520_1, VkglTestCase_001520_2);

#define VkglTestCase_001521_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001521_2 "ssions.array_trunc_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001521, VkglTestCase_001521_1, VkglTestCase_001521_2);

#define VkglTestCase_001522_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001522_2 "sions.array_trunc_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001522, VkglTestCase_001522_1, VkglTestCase_001522_2);

#define VkglTestCase_001523_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001523_2 "ons.array_trunc_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001523, VkglTestCase_001523_1, VkglTestCase_001523_2);

#define VkglTestCase_001524_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001524_2 "sions.array_trunc_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001524, VkglTestCase_001524_1, VkglTestCase_001524_2);

#define VkglTestCase_001525_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001525_2 "ssions.array_trunc_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001525, VkglTestCase_001525_1, VkglTestCase_001525_2);

#define VkglTestCase_001526_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001526_2 "sions.array_trunc_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001526, VkglTestCase_001526_1, VkglTestCase_001526_2);

#define VkglTestCase_001527_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001527_2 "ons.array_trunc_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001527, VkglTestCase_001527_1, VkglTestCase_001527_2);

#define VkglTestCase_001528_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001528_2 "sions.array_trunc_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001528, VkglTestCase_001528_1, VkglTestCase_001528_2);

#define VkglTestCase_001529_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001529_2 "ssions.array_trunc_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001529, VkglTestCase_001529_1, VkglTestCase_001529_2);

#define VkglTestCase_001530_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001530_2 "sions.array_trunc_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001530, VkglTestCase_001530_1, VkglTestCase_001530_2);

#define VkglTestCase_001531_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001531_2 "ons.array_trunc_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001531, VkglTestCase_001531_1, VkglTestCase_001531_2);

#define VkglTestCase_001532_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001532_2 "sions.array_trunc_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001532, VkglTestCase_001532_1, VkglTestCase_001532_2);

#define VkglTestCase_001533_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001533_2 "sions.array_round_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001533, VkglTestCase_001533_1, VkglTestCase_001533_2);

#define VkglTestCase_001534_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001534_2 "sions.array_round_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001534, VkglTestCase_001534_1, VkglTestCase_001534_2);

#define VkglTestCase_001535_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001535_2 "ons.array_round_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001535, VkglTestCase_001535_1, VkglTestCase_001535_2);

#define VkglTestCase_001536_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001536_2 "ions.array_round_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001536, VkglTestCase_001536_1, VkglTestCase_001536_2);

#define VkglTestCase_001537_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001537_2 "ssions.array_round_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001537, VkglTestCase_001537_1, VkglTestCase_001537_2);

#define VkglTestCase_001538_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001538_2 "sions.array_round_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001538, VkglTestCase_001538_1, VkglTestCase_001538_2);

#define VkglTestCase_001539_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001539_2 "ons.array_round_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001539, VkglTestCase_001539_1, VkglTestCase_001539_2);

#define VkglTestCase_001540_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001540_2 "sions.array_round_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001540, VkglTestCase_001540_1, VkglTestCase_001540_2);

#define VkglTestCase_001541_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001541_2 "ssions.array_round_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001541, VkglTestCase_001541_1, VkglTestCase_001541_2);

#define VkglTestCase_001542_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001542_2 "sions.array_round_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001542, VkglTestCase_001542_1, VkglTestCase_001542_2);

#define VkglTestCase_001543_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001543_2 "ons.array_round_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001543, VkglTestCase_001543_1, VkglTestCase_001543_2);

#define VkglTestCase_001544_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001544_2 "sions.array_round_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001544, VkglTestCase_001544_1, VkglTestCase_001544_2);

#define VkglTestCase_001545_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001545_2 "ssions.array_round_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001545, VkglTestCase_001545_1, VkglTestCase_001545_2);

#define VkglTestCase_001546_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001546_2 "sions.array_round_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001546, VkglTestCase_001546_1, VkglTestCase_001546_2);

#define VkglTestCase_001547_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001547_2 "ons.array_round_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001547, VkglTestCase_001547_1, VkglTestCase_001547_2);

#define VkglTestCase_001548_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001548_2 "sions.array_round_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001548, VkglTestCase_001548_1, VkglTestCase_001548_2);

#define VkglTestCase_001549_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001549_2 "ssions.array_ceil_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001549, VkglTestCase_001549_1, VkglTestCase_001549_2);

#define VkglTestCase_001550_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001550_2 "sions.array_ceil_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001550, VkglTestCase_001550_1, VkglTestCase_001550_2);

#define VkglTestCase_001551_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001551_2 "ons.array_ceil_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001551, VkglTestCase_001551_1, VkglTestCase_001551_2);

#define VkglTestCase_001552_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001552_2 "sions.array_ceil_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001552, VkglTestCase_001552_1, VkglTestCase_001552_2);

#define VkglTestCase_001553_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001553_2 "ssions.array_ceil_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001553, VkglTestCase_001553_1, VkglTestCase_001553_2);

#define VkglTestCase_001554_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001554_2 "ssions.array_ceil_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001554, VkglTestCase_001554_1, VkglTestCase_001554_2);

#define VkglTestCase_001555_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001555_2 "ions.array_ceil_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001555, VkglTestCase_001555_1, VkglTestCase_001555_2);

#define VkglTestCase_001556_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001556_2 "sions.array_ceil_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001556, VkglTestCase_001556_1, VkglTestCase_001556_2);

#define VkglTestCase_001557_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001557_2 "ssions.array_ceil_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001557, VkglTestCase_001557_1, VkglTestCase_001557_2);

#define VkglTestCase_001558_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001558_2 "ssions.array_ceil_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001558, VkglTestCase_001558_1, VkglTestCase_001558_2);

#define VkglTestCase_001559_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001559_2 "ions.array_ceil_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001559, VkglTestCase_001559_1, VkglTestCase_001559_2);

#define VkglTestCase_001560_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001560_2 "sions.array_ceil_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001560, VkglTestCase_001560_1, VkglTestCase_001560_2);

#define VkglTestCase_001561_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001561_2 "ssions.array_ceil_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001561, VkglTestCase_001561_1, VkglTestCase_001561_2);

#define VkglTestCase_001562_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001562_2 "ssions.array_ceil_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001562, VkglTestCase_001562_1, VkglTestCase_001562_2);

#define VkglTestCase_001563_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001563_2 "ions.array_ceil_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001563, VkglTestCase_001563_1, VkglTestCase_001563_2);

#define VkglTestCase_001564_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001564_2 "sions.array_ceil_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001564, VkglTestCase_001564_1, VkglTestCase_001564_2);

#define VkglTestCase_001565_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001565_2 "ssions.array_mod_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001565, VkglTestCase_001565_1, VkglTestCase_001565_2);

#define VkglTestCase_001566_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001566_2 "ssions.array_mod_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001566, VkglTestCase_001566_1, VkglTestCase_001566_2);

#define VkglTestCase_001567_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001567_2 "ions.array_mod_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001567, VkglTestCase_001567_1, VkglTestCase_001567_2);

#define VkglTestCase_001568_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001568_2 "sions.array_mod_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001568, VkglTestCase_001568_1, VkglTestCase_001568_2);

#define VkglTestCase_001569_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001569_2 "essions.array_mod_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001569, VkglTestCase_001569_1, VkglTestCase_001569_2);

#define VkglTestCase_001570_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001570_2 "ssions.array_mod_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001570, VkglTestCase_001570_1, VkglTestCase_001570_2);

#define VkglTestCase_001571_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001571_2 "ions.array_mod_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001571, VkglTestCase_001571_1, VkglTestCase_001571_2);

#define VkglTestCase_001572_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001572_2 "ssions.array_mod_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001572, VkglTestCase_001572_1, VkglTestCase_001572_2);

#define VkglTestCase_001573_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001573_2 "ions.array_mod_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001573, VkglTestCase_001573_1, VkglTestCase_001573_2);

#define VkglTestCase_001574_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001574_2 "ons.array_mod_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001574, VkglTestCase_001574_1, VkglTestCase_001574_2);

#define VkglTestCase_001575_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001575_2 "s.array_mod_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001575, VkglTestCase_001575_1, VkglTestCase_001575_2);

#define VkglTestCase_001576_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001576_2 "ons.array_mod_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001576, VkglTestCase_001576_1, VkglTestCase_001576_2);

#define VkglTestCase_001577_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001577_2 "essions.array_mod_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001577, VkglTestCase_001577_1, VkglTestCase_001577_2);

#define VkglTestCase_001578_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001578_2 "ssions.array_mod_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001578, VkglTestCase_001578_1, VkglTestCase_001578_2);

#define VkglTestCase_001579_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001579_2 "ions.array_mod_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001579, VkglTestCase_001579_1, VkglTestCase_001579_2);

#define VkglTestCase_001580_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001580_2 "ssions.array_mod_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001580, VkglTestCase_001580_1, VkglTestCase_001580_2);

#define VkglTestCase_001581_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001581_2 "ions.array_mod_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001581, VkglTestCase_001581_1, VkglTestCase_001581_2);

#define VkglTestCase_001582_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001582_2 "ons.array_mod_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001582, VkglTestCase_001582_1, VkglTestCase_001582_2);

#define VkglTestCase_001583_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001583_2 "s.array_mod_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001583, VkglTestCase_001583_1, VkglTestCase_001583_2);

#define VkglTestCase_001584_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001584_2 "ons.array_mod_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001584, VkglTestCase_001584_1, VkglTestCase_001584_2);

#define VkglTestCase_001585_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001585_2 "essions.array_mod_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001585, VkglTestCase_001585_1, VkglTestCase_001585_2);

#define VkglTestCase_001586_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001586_2 "ssions.array_mod_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001586, VkglTestCase_001586_1, VkglTestCase_001586_2);

#define VkglTestCase_001587_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001587_2 "ions.array_mod_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001587, VkglTestCase_001587_1, VkglTestCase_001587_2);

#define VkglTestCase_001588_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001588_2 "ssions.array_mod_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001588, VkglTestCase_001588_1, VkglTestCase_001588_2);

#define VkglTestCase_001589_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001589_2 "ions.array_mod_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001589, VkglTestCase_001589_1, VkglTestCase_001589_2);

#define VkglTestCase_001590_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001590_2 "ons.array_mod_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001590, VkglTestCase_001590_1, VkglTestCase_001590_2);

#define VkglTestCase_001591_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001591_2 "s.array_mod_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001591, VkglTestCase_001591_1, VkglTestCase_001591_2);

#define VkglTestCase_001592_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001592_2 "ons.array_mod_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001592, VkglTestCase_001592_1, VkglTestCase_001592_2);

#define VkglTestCase_001593_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001593_2 "ssions.array_min_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001593, VkglTestCase_001593_1, VkglTestCase_001593_2);

#define VkglTestCase_001594_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001594_2 "ssions.array_min_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001594, VkglTestCase_001594_1, VkglTestCase_001594_2);

#define VkglTestCase_001595_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001595_2 "ions.array_min_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001595, VkglTestCase_001595_1, VkglTestCase_001595_2);

#define VkglTestCase_001596_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001596_2 "sions.array_min_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001596, VkglTestCase_001596_1, VkglTestCase_001596_2);

#define VkglTestCase_001597_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001597_2 "essions.array_min_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001597, VkglTestCase_001597_1, VkglTestCase_001597_2);

#define VkglTestCase_001598_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001598_2 "ssions.array_min_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001598, VkglTestCase_001598_1, VkglTestCase_001598_2);

#define VkglTestCase_001599_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001599_2 "ions.array_min_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001599, VkglTestCase_001599_1, VkglTestCase_001599_2);

#define VkglTestCase_001600_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001600_2 "ssions.array_min_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001600, VkglTestCase_001600_1, VkglTestCase_001600_2);

#define VkglTestCase_001601_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001601_2 "ions.array_min_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001601, VkglTestCase_001601_1, VkglTestCase_001601_2);

#define VkglTestCase_001602_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001602_2 "ons.array_min_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001602, VkglTestCase_001602_1, VkglTestCase_001602_2);

#define VkglTestCase_001603_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001603_2 "s.array_min_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001603, VkglTestCase_001603_1, VkglTestCase_001603_2);

#define VkglTestCase_001604_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001604_2 "ons.array_min_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001604, VkglTestCase_001604_1, VkglTestCase_001604_2);

#define VkglTestCase_001605_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001605_2 "essions.array_min_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001605, VkglTestCase_001605_1, VkglTestCase_001605_2);

#define VkglTestCase_001606_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001606_2 "ssions.array_min_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001606, VkglTestCase_001606_1, VkglTestCase_001606_2);

#define VkglTestCase_001607_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001607_2 "ions.array_min_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001607, VkglTestCase_001607_1, VkglTestCase_001607_2);

#define VkglTestCase_001608_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001608_2 "ssions.array_min_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001608, VkglTestCase_001608_1, VkglTestCase_001608_2);

#define VkglTestCase_001609_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001609_2 "ions.array_min_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001609, VkglTestCase_001609_1, VkglTestCase_001609_2);

#define VkglTestCase_001610_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001610_2 "ons.array_min_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001610, VkglTestCase_001610_1, VkglTestCase_001610_2);

#define VkglTestCase_001611_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001611_2 "s.array_min_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001611, VkglTestCase_001611_1, VkglTestCase_001611_2);

#define VkglTestCase_001612_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001612_2 "ons.array_min_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001612, VkglTestCase_001612_1, VkglTestCase_001612_2);

#define VkglTestCase_001613_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001613_2 "essions.array_min_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001613, VkglTestCase_001613_1, VkglTestCase_001613_2);

#define VkglTestCase_001614_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001614_2 "ssions.array_min_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001614, VkglTestCase_001614_1, VkglTestCase_001614_2);

#define VkglTestCase_001615_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001615_2 "ions.array_min_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001615, VkglTestCase_001615_1, VkglTestCase_001615_2);

#define VkglTestCase_001616_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001616_2 "ssions.array_min_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001616, VkglTestCase_001616_1, VkglTestCase_001616_2);

#define VkglTestCase_001617_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001617_2 "ions.array_min_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001617, VkglTestCase_001617_1, VkglTestCase_001617_2);

#define VkglTestCase_001618_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001618_2 "ons.array_min_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001618, VkglTestCase_001618_1, VkglTestCase_001618_2);

#define VkglTestCase_001619_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001619_2 "s.array_min_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001619, VkglTestCase_001619_1, VkglTestCase_001619_2);

#define VkglTestCase_001620_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001620_2 "ons.array_min_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001620, VkglTestCase_001620_1, VkglTestCase_001620_2);

#define VkglTestCase_001621_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001621_2 "ssions.array_max_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001621, VkglTestCase_001621_1, VkglTestCase_001621_2);

#define VkglTestCase_001622_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001622_2 "ssions.array_max_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001622, VkglTestCase_001622_1, VkglTestCase_001622_2);

#define VkglTestCase_001623_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001623_2 "ions.array_max_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001623, VkglTestCase_001623_1, VkglTestCase_001623_2);

#define VkglTestCase_001624_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001624_2 "sions.array_max_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001624, VkglTestCase_001624_1, VkglTestCase_001624_2);

#define VkglTestCase_001625_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001625_2 "essions.array_max_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001625, VkglTestCase_001625_1, VkglTestCase_001625_2);

#define VkglTestCase_001626_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001626_2 "ssions.array_max_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001626, VkglTestCase_001626_1, VkglTestCase_001626_2);

#define VkglTestCase_001627_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001627_2 "ions.array_max_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001627, VkglTestCase_001627_1, VkglTestCase_001627_2);

#define VkglTestCase_001628_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001628_2 "ssions.array_max_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001628, VkglTestCase_001628_1, VkglTestCase_001628_2);

#define VkglTestCase_001629_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001629_2 "ions.array_max_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001629, VkglTestCase_001629_1, VkglTestCase_001629_2);

#define VkglTestCase_001630_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001630_2 "ons.array_max_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001630, VkglTestCase_001630_1, VkglTestCase_001630_2);

#define VkglTestCase_001631_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001631_2 "s.array_max_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001631, VkglTestCase_001631_1, VkglTestCase_001631_2);

#define VkglTestCase_001632_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001632_2 "ons.array_max_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001632, VkglTestCase_001632_1, VkglTestCase_001632_2);

#define VkglTestCase_001633_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001633_2 "essions.array_max_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001633, VkglTestCase_001633_1, VkglTestCase_001633_2);

#define VkglTestCase_001634_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001634_2 "ssions.array_max_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001634, VkglTestCase_001634_1, VkglTestCase_001634_2);

#define VkglTestCase_001635_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001635_2 "ions.array_max_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001635, VkglTestCase_001635_1, VkglTestCase_001635_2);

#define VkglTestCase_001636_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001636_2 "ssions.array_max_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001636, VkglTestCase_001636_1, VkglTestCase_001636_2);

#define VkglTestCase_001637_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001637_2 "ions.array_max_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001637, VkglTestCase_001637_1, VkglTestCase_001637_2);

#define VkglTestCase_001638_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001638_2 "ons.array_max_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001638, VkglTestCase_001638_1, VkglTestCase_001638_2);

#define VkglTestCase_001639_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001639_2 "s.array_max_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001639, VkglTestCase_001639_1, VkglTestCase_001639_2);

#define VkglTestCase_001640_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001640_2 "ons.array_max_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001640, VkglTestCase_001640_1, VkglTestCase_001640_2);

#define VkglTestCase_001641_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001641_2 "essions.array_max_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001641, VkglTestCase_001641_1, VkglTestCase_001641_2);

#define VkglTestCase_001642_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001642_2 "ssions.array_max_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001642, VkglTestCase_001642_1, VkglTestCase_001642_2);

#define VkglTestCase_001643_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001643_2 "ions.array_max_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001643, VkglTestCase_001643_1, VkglTestCase_001643_2);

#define VkglTestCase_001644_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001644_2 "ssions.array_max_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001644, VkglTestCase_001644_1, VkglTestCase_001644_2);

#define VkglTestCase_001645_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001645_2 "ions.array_max_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001645, VkglTestCase_001645_1, VkglTestCase_001645_2);

#define VkglTestCase_001646_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001646_2 "ons.array_max_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001646, VkglTestCase_001646_1, VkglTestCase_001646_2);

#define VkglTestCase_001647_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001647_2 "s.array_max_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001647, VkglTestCase_001647_1, VkglTestCase_001647_2);

#define VkglTestCase_001648_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001648_2 "ons.array_max_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001648, VkglTestCase_001648_1, VkglTestCase_001648_2);

#define VkglTestCase_001649_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001649_2 "sions.array_clamp_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001649, VkglTestCase_001649_1, VkglTestCase_001649_2);

#define VkglTestCase_001650_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001650_2 "sions.array_clamp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001650, VkglTestCase_001650_1, VkglTestCase_001650_2);

#define VkglTestCase_001651_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001651_2 "ons.array_clamp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001651, VkglTestCase_001651_1, VkglTestCase_001651_2);

#define VkglTestCase_001652_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001652_2 "ions.array_clamp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001652, VkglTestCase_001652_1, VkglTestCase_001652_2);

#define VkglTestCase_001653_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001653_2 "ssions.array_clamp_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001653, VkglTestCase_001653_1, VkglTestCase_001653_2);

#define VkglTestCase_001654_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001654_2 "sions.array_clamp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001654, VkglTestCase_001654_1, VkglTestCase_001654_2);

#define VkglTestCase_001655_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001655_2 "ons.array_clamp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001655, VkglTestCase_001655_1, VkglTestCase_001655_2);

#define VkglTestCase_001656_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001656_2 "sions.array_clamp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001656, VkglTestCase_001656_1, VkglTestCase_001656_2);

#define VkglTestCase_001657_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001657_2 "ons.array_clamp_vec2_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001657, VkglTestCase_001657_1, VkglTestCase_001657_2);

#define VkglTestCase_001658_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001658_2 "ns.array_clamp_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001658, VkglTestCase_001658_1, VkglTestCase_001658_2);

#define VkglTestCase_001659_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001659_2 ".array_clamp_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001659, VkglTestCase_001659_1, VkglTestCase_001659_2);

#define VkglTestCase_001660_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001660_2 "ns.array_clamp_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001660, VkglTestCase_001660_1, VkglTestCase_001660_2);

#define VkglTestCase_001661_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001661_2 "ssions.array_clamp_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001661, VkglTestCase_001661_1, VkglTestCase_001661_2);

#define VkglTestCase_001662_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001662_2 "sions.array_clamp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001662, VkglTestCase_001662_1, VkglTestCase_001662_2);

#define VkglTestCase_001663_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001663_2 "ons.array_clamp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001663, VkglTestCase_001663_1, VkglTestCase_001663_2);

#define VkglTestCase_001664_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001664_2 "sions.array_clamp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001664, VkglTestCase_001664_1, VkglTestCase_001664_2);

#define VkglTestCase_001665_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001665_2 "ons.array_clamp_vec3_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001665, VkglTestCase_001665_1, VkglTestCase_001665_2);

#define VkglTestCase_001666_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001666_2 "ns.array_clamp_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001666, VkglTestCase_001666_1, VkglTestCase_001666_2);

#define VkglTestCase_001667_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001667_2 ".array_clamp_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001667, VkglTestCase_001667_1, VkglTestCase_001667_2);

#define VkglTestCase_001668_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001668_2 "ns.array_clamp_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001668, VkglTestCase_001668_1, VkglTestCase_001668_2);

#define VkglTestCase_001669_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001669_2 "ssions.array_clamp_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001669, VkglTestCase_001669_1, VkglTestCase_001669_2);

#define VkglTestCase_001670_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001670_2 "sions.array_clamp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001670, VkglTestCase_001670_1, VkglTestCase_001670_2);

#define VkglTestCase_001671_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001671_2 "ons.array_clamp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001671, VkglTestCase_001671_1, VkglTestCase_001671_2);

#define VkglTestCase_001672_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001672_2 "sions.array_clamp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001672, VkglTestCase_001672_1, VkglTestCase_001672_2);

#define VkglTestCase_001673_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001673_2 "ons.array_clamp_vec4_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001673, VkglTestCase_001673_1, VkglTestCase_001673_2);

#define VkglTestCase_001674_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001674_2 "ns.array_clamp_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001674, VkglTestCase_001674_1, VkglTestCase_001674_2);

#define VkglTestCase_001675_1 "KHR-GLES31.core.constant_expressions"
#define VkglTestCase_001675_2 ".array_clamp_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001675, VkglTestCase_001675_1, VkglTestCase_001675_2);

#define VkglTestCase_001676_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001676_2 "ns.array_clamp_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001676, VkglTestCase_001676_1, VkglTestCase_001676_2);

#define VkglTestCase_001677_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001677_2 "sions.array_length_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001677, VkglTestCase_001677_1, VkglTestCase_001677_2);

#define VkglTestCase_001678_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001678_2 "ions.array_length_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001678, VkglTestCase_001678_1, VkglTestCase_001678_2);

#define VkglTestCase_001679_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001679_2 "ns.array_length_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001679, VkglTestCase_001679_1, VkglTestCase_001679_2);

#define VkglTestCase_001680_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001680_2 "ions.array_length_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001680, VkglTestCase_001680_1, VkglTestCase_001680_2);

#define VkglTestCase_001681_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001681_2 "sions.array_length_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001681, VkglTestCase_001681_1, VkglTestCase_001681_2);

#define VkglTestCase_001682_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001682_2 "sions.array_length_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001682, VkglTestCase_001682_1, VkglTestCase_001682_2);

#define VkglTestCase_001683_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001683_2 "ons.array_length_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001683, VkglTestCase_001683_1, VkglTestCase_001683_2);

#define VkglTestCase_001684_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001684_2 "ions.array_length_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001684, VkglTestCase_001684_1, VkglTestCase_001684_2);

#define VkglTestCase_001685_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001685_2 "sions.array_length_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001685, VkglTestCase_001685_1, VkglTestCase_001685_2);

#define VkglTestCase_001686_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001686_2 "sions.array_length_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001686, VkglTestCase_001686_1, VkglTestCase_001686_2);

#define VkglTestCase_001687_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001687_2 "ons.array_length_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001687, VkglTestCase_001687_1, VkglTestCase_001687_2);

#define VkglTestCase_001688_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001688_2 "ions.array_length_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001688, VkglTestCase_001688_1, VkglTestCase_001688_2);

#define VkglTestCase_001689_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001689_2 "sions.array_length_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001689, VkglTestCase_001689_1, VkglTestCase_001689_2);

#define VkglTestCase_001690_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001690_2 "sions.array_length_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001690, VkglTestCase_001690_1, VkglTestCase_001690_2);

#define VkglTestCase_001691_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001691_2 "ons.array_length_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001691, VkglTestCase_001691_1, VkglTestCase_001691_2);

#define VkglTestCase_001692_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001692_2 "ions.array_length_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001692, VkglTestCase_001692_1, VkglTestCase_001692_2);

#define VkglTestCase_001693_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001693_2 "ssions.array_dot_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001693, VkglTestCase_001693_1, VkglTestCase_001693_2);

#define VkglTestCase_001694_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001694_2 "ssions.array_dot_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001694, VkglTestCase_001694_1, VkglTestCase_001694_2);

#define VkglTestCase_001695_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001695_2 "ions.array_dot_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001695, VkglTestCase_001695_1, VkglTestCase_001695_2);

#define VkglTestCase_001696_1 "KHR-GLES31.core.constant_expres"
#define VkglTestCase_001696_2 "sions.array_dot_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001696, VkglTestCase_001696_1, VkglTestCase_001696_2);

#define VkglTestCase_001697_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001697_2 "essions.array_dot_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001697, VkglTestCase_001697_1, VkglTestCase_001697_2);

#define VkglTestCase_001698_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001698_2 "ssions.array_dot_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001698, VkglTestCase_001698_1, VkglTestCase_001698_2);

#define VkglTestCase_001699_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001699_2 "ions.array_dot_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001699, VkglTestCase_001699_1, VkglTestCase_001699_2);

#define VkglTestCase_001700_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001700_2 "ssions.array_dot_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001700, VkglTestCase_001700_1, VkglTestCase_001700_2);

#define VkglTestCase_001701_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001701_2 "essions.array_dot_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001701, VkglTestCase_001701_1, VkglTestCase_001701_2);

#define VkglTestCase_001702_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001702_2 "ssions.array_dot_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001702, VkglTestCase_001702_1, VkglTestCase_001702_2);

#define VkglTestCase_001703_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001703_2 "ions.array_dot_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001703, VkglTestCase_001703_1, VkglTestCase_001703_2);

#define VkglTestCase_001704_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001704_2 "ssions.array_dot_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001704, VkglTestCase_001704_1, VkglTestCase_001704_2);

#define VkglTestCase_001705_1 "KHR-GLES31.core.constant_expr"
#define VkglTestCase_001705_2 "essions.array_dot_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001705, VkglTestCase_001705_1, VkglTestCase_001705_2);

#define VkglTestCase_001706_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001706_2 "ssions.array_dot_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001706, VkglTestCase_001706_1, VkglTestCase_001706_2);

#define VkglTestCase_001707_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001707_2 "ions.array_dot_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001707, VkglTestCase_001707_1, VkglTestCase_001707_2);

#define VkglTestCase_001708_1 "KHR-GLES31.core.constant_expre"
#define VkglTestCase_001708_2 "ssions.array_dot_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001708, VkglTestCase_001708_1, VkglTestCase_001708_2);

#define VkglTestCase_001709_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001709_2 "ons.array_normalize_float_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001709, VkglTestCase_001709_1, VkglTestCase_001709_2);

#define VkglTestCase_001710_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001710_2 "ons.array_normalize_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001710, VkglTestCase_001710_1, VkglTestCase_001710_2);

#define VkglTestCase_001711_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001711_2 "s.array_normalize_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001711, VkglTestCase_001711_1, VkglTestCase_001711_2);

#define VkglTestCase_001712_1 "KHR-GLES31.core.constant_expressio"
#define VkglTestCase_001712_2 "ns.array_normalize_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001712, VkglTestCase_001712_1, VkglTestCase_001712_2);

#define VkglTestCase_001713_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001713_2 "ions.array_normalize_vec2_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001713, VkglTestCase_001713_1, VkglTestCase_001713_2);

#define VkglTestCase_001714_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001714_2 "ons.array_normalize_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001714, VkglTestCase_001714_1, VkglTestCase_001714_2);

#define VkglTestCase_001715_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001715_2 "s.array_normalize_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001715, VkglTestCase_001715_1, VkglTestCase_001715_2);

#define VkglTestCase_001716_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001716_2 "ons.array_normalize_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001716, VkglTestCase_001716_1, VkglTestCase_001716_2);

#define VkglTestCase_001717_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001717_2 "ions.array_normalize_vec3_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001717, VkglTestCase_001717_1, VkglTestCase_001717_2);

#define VkglTestCase_001718_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001718_2 "ons.array_normalize_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001718, VkglTestCase_001718_1, VkglTestCase_001718_2);

#define VkglTestCase_001719_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001719_2 "s.array_normalize_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001719, VkglTestCase_001719_1, VkglTestCase_001719_2);

#define VkglTestCase_001720_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001720_2 "ons.array_normalize_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001720, VkglTestCase_001720_1, VkglTestCase_001720_2);

#define VkglTestCase_001721_1 "KHR-GLES31.core.constant_express"
#define VkglTestCase_001721_2 "ions.array_normalize_vec4_compute"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001721, VkglTestCase_001721_1, VkglTestCase_001721_2);

#define VkglTestCase_001722_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001722_2 "ons.array_normalize_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001722, VkglTestCase_001722_1, VkglTestCase_001722_2);

#define VkglTestCase_001723_1 "KHR-GLES31.core.constant_expression"
#define VkglTestCase_001723_2 "s.array_normalize_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001723, VkglTestCase_001723_1, VkglTestCase_001723_2);

#define VkglTestCase_001724_1 "KHR-GLES31.core.constant_expressi"
#define VkglTestCase_001724_2 "ons.array_normalize_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_001724, VkglTestCase_001724_1, VkglTestCase_001724_2);
