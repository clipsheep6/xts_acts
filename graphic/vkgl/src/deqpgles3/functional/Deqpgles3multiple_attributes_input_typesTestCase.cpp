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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033759_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033759_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033759, VkglTestCase_033759_1, VkglTestCase_033759_2);

#define VkglTestCase_033760_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033760_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033760, VkglTestCase_033760_1, VkglTestCase_033760_2);

#define VkglTestCase_033761_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033761_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033761, VkglTestCase_033761_1, VkglTestCase_033761_2);

#define VkglTestCase_033762_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033762_2 "input_types.3_fixed2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033762, VkglTestCase_033762_1, VkglTestCase_033762_2);

#define VkglTestCase_033763_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033763_2 "nput_types.3_fixed2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033763, VkglTestCase_033763_1, VkglTestCase_033763_2);

#define VkglTestCase_033764_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033764_2 "tes.input_types.3_fixed2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033764, VkglTestCase_033764_1, VkglTestCase_033764_2);

#define VkglTestCase_033765_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033765_2 "utes.input_types.3_fixed2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033765, VkglTestCase_033765_1, VkglTestCase_033765_2);

#define VkglTestCase_033766_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033766_2 "tes.input_types.3_fixed2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033766, VkglTestCase_033766_1, VkglTestCase_033766_2);

#define VkglTestCase_033767_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033767_2 "input_types.3_fixed2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033767, VkglTestCase_033767_1, VkglTestCase_033767_2);

#define VkglTestCase_033768_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033768_2 "input_types.3_fixed2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033768, VkglTestCase_033768_1, VkglTestCase_033768_2);

#define VkglTestCase_033769_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033769_2 "tes.input_types.3_fixed2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033769, VkglTestCase_033769_1, VkglTestCase_033769_2);

#define VkglTestCase_033770_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033770_2 "tes.input_types.3_fixed2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033770, VkglTestCase_033770_1, VkglTestCase_033770_2);

#define VkglTestCase_033771_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033771_2 "tes.input_types.3_fixed2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033771, VkglTestCase_033771_1, VkglTestCase_033771_2);

#define VkglTestCase_033772_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033772_2 "input_types.3_fixed2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033772, VkglTestCase_033772_1, VkglTestCase_033772_2);

#define VkglTestCase_033773_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033773_2 "nput_types.3_fixed2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033773, VkglTestCase_033773_1, VkglTestCase_033773_2);

#define VkglTestCase_033774_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033774_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033774, VkglTestCase_033774_1, VkglTestCase_033774_2);

#define VkglTestCase_033775_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033775_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033775, VkglTestCase_033775_1, VkglTestCase_033775_2);

#define VkglTestCase_033776_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033776_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033776, VkglTestCase_033776_1, VkglTestCase_033776_2);

#define VkglTestCase_033777_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033777_2 "t_types.3_fixed2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033777, VkglTestCase_033777_1, VkglTestCase_033777_2);

#define VkglTestCase_033778_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033778_2 "_types.3_fixed2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033778, VkglTestCase_033778_1, VkglTestCase_033778_2);

#define VkglTestCase_033779_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033779_2 "nput_types.3_fixed2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033779, VkglTestCase_033779_1, VkglTestCase_033779_2);

#define VkglTestCase_033780_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033780_2 "input_types.3_fixed2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033780, VkglTestCase_033780_1, VkglTestCase_033780_2);

#define VkglTestCase_033781_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033781_2 "nput_types.3_fixed2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033781, VkglTestCase_033781_1, VkglTestCase_033781_2);

#define VkglTestCase_033782_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033782_2 "_types.3_fixed2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033782, VkglTestCase_033782_1, VkglTestCase_033782_2);

#define VkglTestCase_033783_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033783_2 "_types.3_fixed2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033783, VkglTestCase_033783_1, VkglTestCase_033783_2);

#define VkglTestCase_033784_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033784_2 "tes.input_types.3_byte2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033784, VkglTestCase_033784_1, VkglTestCase_033784_2);

#define VkglTestCase_033785_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033785_2 "utes.input_types.3_byte2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033785, VkglTestCase_033785_1, VkglTestCase_033785_2);

#define VkglTestCase_033786_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033786_2 "tes.input_types.3_byte2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033786, VkglTestCase_033786_1, VkglTestCase_033786_2);

#define VkglTestCase_033787_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033787_2 "input_types.3_byte2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033787, VkglTestCase_033787_1, VkglTestCase_033787_2);

#define VkglTestCase_033788_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033788_2 "input_types.3_byte2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033788, VkglTestCase_033788_1, VkglTestCase_033788_2);

#define VkglTestCase_033789_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033789_2 "utes.input_types.3_byte2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033789, VkglTestCase_033789_1, VkglTestCase_033789_2);

#define VkglTestCase_033790_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033790_2 "utes.input_types.3_byte2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033790, VkglTestCase_033790_1, VkglTestCase_033790_2);

#define VkglTestCase_033791_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033791_2 "utes.input_types.3_byte2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033791, VkglTestCase_033791_1, VkglTestCase_033791_2);

#define VkglTestCase_033792_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_033792_2 ".input_types.3_byte2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033792, VkglTestCase_033792_1, VkglTestCase_033792_2);

#define VkglTestCase_033793_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033793_2 "input_types.3_byte2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033793, VkglTestCase_033793_1, VkglTestCase_033793_2);

#define VkglTestCase_033794_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033794_2 "tes.input_types.3_byte2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033794, VkglTestCase_033794_1, VkglTestCase_033794_2);

#define VkglTestCase_033795_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033795_2 "utes.input_types.3_byte2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033795, VkglTestCase_033795_1, VkglTestCase_033795_2);

#define VkglTestCase_033796_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033796_2 "tes.input_types.3_byte2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033796, VkglTestCase_033796_1, VkglTestCase_033796_2);

#define VkglTestCase_033797_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033797_2 "input_types.3_byte2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033797, VkglTestCase_033797_1, VkglTestCase_033797_2);

#define VkglTestCase_033798_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033798_2 "input_types.3_byte2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033798, VkglTestCase_033798_1, VkglTestCase_033798_2);

#define VkglTestCase_033799_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033799_2 "input_types.3_byte2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033799, VkglTestCase_033799_1, VkglTestCase_033799_2);

#define VkglTestCase_033800_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_033800_2 ".input_types.3_byte2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033800, VkglTestCase_033800_1, VkglTestCase_033800_2);

#define VkglTestCase_033801_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033801_2 "input_types.3_byte2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033801, VkglTestCase_033801_1, VkglTestCase_033801_2);

#define VkglTestCase_033802_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033802_2 "t_types.3_byte2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033802, VkglTestCase_033802_1, VkglTestCase_033802_2);

#define VkglTestCase_033803_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033803_2 "t_types.3_byte2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033803, VkglTestCase_033803_1, VkglTestCase_033803_2);

#define VkglTestCase_033804_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033804_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033804, VkglTestCase_033804_1, VkglTestCase_033804_2);

#define VkglTestCase_033805_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033805_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033805, VkglTestCase_033805_1, VkglTestCase_033805_2);

#define VkglTestCase_033806_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033806_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033806, VkglTestCase_033806_1, VkglTestCase_033806_2);

#define VkglTestCase_033807_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033807_2 "t_types.3_byte2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033807, VkglTestCase_033807_1, VkglTestCase_033807_2);

#define VkglTestCase_033808_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033808_2 "_types.3_byte2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033808, VkglTestCase_033808_1, VkglTestCase_033808_2);

#define VkglTestCase_033809_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033809_2 "tes.input_types.3_short2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033809, VkglTestCase_033809_1, VkglTestCase_033809_2);

#define VkglTestCase_033810_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033810_2 "tes.input_types.3_short2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033810, VkglTestCase_033810_1, VkglTestCase_033810_2);

#define VkglTestCase_033811_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033811_2 "tes.input_types.3_short2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033811, VkglTestCase_033811_1, VkglTestCase_033811_2);

#define VkglTestCase_033812_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033812_2 "input_types.3_short2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033812, VkglTestCase_033812_1, VkglTestCase_033812_2);

#define VkglTestCase_033813_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033813_2 "nput_types.3_short2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033813, VkglTestCase_033813_1, VkglTestCase_033813_2);

#define VkglTestCase_033814_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033814_2 "tes.input_types.3_short2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033814, VkglTestCase_033814_1, VkglTestCase_033814_2);

#define VkglTestCase_033815_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_033815_2 "utes.input_types.3_short2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033815, VkglTestCase_033815_1, VkglTestCase_033815_2);

#define VkglTestCase_033816_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033816_2 "tes.input_types.3_short2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033816, VkglTestCase_033816_1, VkglTestCase_033816_2);

#define VkglTestCase_033817_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033817_2 "input_types.3_short2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033817, VkglTestCase_033817_1, VkglTestCase_033817_2);

#define VkglTestCase_033818_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033818_2 "input_types.3_short2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033818, VkglTestCase_033818_1, VkglTestCase_033818_2);

#define VkglTestCase_033819_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033819_2 "tes.input_types.3_short2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033819, VkglTestCase_033819_1, VkglTestCase_033819_2);

#define VkglTestCase_033820_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033820_2 "tes.input_types.3_short2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033820, VkglTestCase_033820_1, VkglTestCase_033820_2);

#define VkglTestCase_033821_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_033821_2 "tes.input_types.3_short2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033821, VkglTestCase_033821_1, VkglTestCase_033821_2);

#define VkglTestCase_033822_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033822_2 "input_types.3_short2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033822, VkglTestCase_033822_1, VkglTestCase_033822_2);

#define VkglTestCase_033823_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033823_2 "nput_types.3_short2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033823, VkglTestCase_033823_1, VkglTestCase_033823_2);

#define VkglTestCase_033824_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033824_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033824, VkglTestCase_033824_1, VkglTestCase_033824_2);

#define VkglTestCase_033825_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033825_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033825, VkglTestCase_033825_1, VkglTestCase_033825_2);

#define VkglTestCase_033826_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033826_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033826, VkglTestCase_033826_1, VkglTestCase_033826_2);

#define VkglTestCase_033827_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033827_2 "t_types.3_short2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033827, VkglTestCase_033827_1, VkglTestCase_033827_2);

#define VkglTestCase_033828_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033828_2 "_types.3_short2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033828, VkglTestCase_033828_1, VkglTestCase_033828_2);

#define VkglTestCase_033829_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033829_2 "nput_types.3_short2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033829, VkglTestCase_033829_1, VkglTestCase_033829_2);

#define VkglTestCase_033830_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033830_2 "input_types.3_short2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033830, VkglTestCase_033830_1, VkglTestCase_033830_2);

#define VkglTestCase_033831_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033831_2 "nput_types.3_short2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033831, VkglTestCase_033831_1, VkglTestCase_033831_2);

#define VkglTestCase_033832_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033832_2 "_types.3_short2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033832, VkglTestCase_033832_1, VkglTestCase_033832_2);

#define VkglTestCase_033833_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033833_2 "_types.3_short2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033833, VkglTestCase_033833_1, VkglTestCase_033833_2);

#define VkglTestCase_033834_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033834_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033834, VkglTestCase_033834_1, VkglTestCase_033834_2);

#define VkglTestCase_033835_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033835_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033835, VkglTestCase_033835_1, VkglTestCase_033835_2);

#define VkglTestCase_033836_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033836_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033836, VkglTestCase_033836_1, VkglTestCase_033836_2);

#define VkglTestCase_033837_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033837_2 "t_types.3_unsigned_byte2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033837, VkglTestCase_033837_1, VkglTestCase_033837_2);

#define VkglTestCase_033838_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033838_2 "_types.3_unsigned_byte2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033838, VkglTestCase_033838_1, VkglTestCase_033838_2);

#define VkglTestCase_033839_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033839_2 "input_types.3_unsigned_byte2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033839, VkglTestCase_033839_1, VkglTestCase_033839_2);

#define VkglTestCase_033840_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_033840_2 ".input_types.3_unsigned_byte2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033840, VkglTestCase_033840_1, VkglTestCase_033840_2);

#define VkglTestCase_033841_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033841_2 "input_types.3_unsigned_byte2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033841, VkglTestCase_033841_1, VkglTestCase_033841_2);

#define VkglTestCase_033842_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033842_2 "t_types.3_unsigned_byte2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033842, VkglTestCase_033842_1, VkglTestCase_033842_2);

#define VkglTestCase_033843_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033843_2 "t_types.3_unsigned_byte2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033843, VkglTestCase_033843_1, VkglTestCase_033843_2);

#define VkglTestCase_033844_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033844_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033844, VkglTestCase_033844_1, VkglTestCase_033844_2);

#define VkglTestCase_033845_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033845_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033845, VkglTestCase_033845_1, VkglTestCase_033845_2);

#define VkglTestCase_033846_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033846_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033846, VkglTestCase_033846_1, VkglTestCase_033846_2);

#define VkglTestCase_033847_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033847_2 "t_types.3_unsigned_byte2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033847, VkglTestCase_033847_1, VkglTestCase_033847_2);

#define VkglTestCase_033848_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033848_2 "_types.3_unsigned_byte2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033848, VkglTestCase_033848_1, VkglTestCase_033848_2);

#define VkglTestCase_033849_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033849_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033849, VkglTestCase_033849_1, VkglTestCase_033849_2);

#define VkglTestCase_033850_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033850_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033850, VkglTestCase_033850_1, VkglTestCase_033850_2);

#define VkglTestCase_033851_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033851_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033851, VkglTestCase_033851_1, VkglTestCase_033851_2);

#define VkglTestCase_033852_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_ty"
#define VkglTestCase_033852_2 "pes.3_unsigned_byte2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033852, VkglTestCase_033852_1, VkglTestCase_033852_2);

#define VkglTestCase_033853_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033853_2 "es.3_unsigned_byte2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033853, VkglTestCase_033853_1, VkglTestCase_033853_2);

#define VkglTestCase_033854_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033854_2 "_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033854, VkglTestCase_033854_1, VkglTestCase_033854_2);

#define VkglTestCase_033855_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033855_2 "t_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033855, VkglTestCase_033855_1, VkglTestCase_033855_2);

#define VkglTestCase_033856_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033856_2 "_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033856, VkglTestCase_033856_1, VkglTestCase_033856_2);

#define VkglTestCase_033857_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033857_2 "es.3_unsigned_byte2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033857, VkglTestCase_033857_1, VkglTestCase_033857_2);

#define VkglTestCase_033858_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033858_2 "es.3_unsigned_byte2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033858, VkglTestCase_033858_1, VkglTestCase_033858_2);

#define VkglTestCase_033859_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033859_2 "nput_types.3_unsigned_short2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033859, VkglTestCase_033859_1, VkglTestCase_033859_2);

#define VkglTestCase_033860_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033860_2 "input_types.3_unsigned_short2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033860, VkglTestCase_033860_1, VkglTestCase_033860_2);

#define VkglTestCase_033861_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033861_2 "nput_types.3_unsigned_short2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033861, VkglTestCase_033861_1, VkglTestCase_033861_2);

#define VkglTestCase_033862_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033862_2 "_types.3_unsigned_short2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033862, VkglTestCase_033862_1, VkglTestCase_033862_2);

#define VkglTestCase_033863_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033863_2 "_types.3_unsigned_short2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033863, VkglTestCase_033863_1, VkglTestCase_033863_2);

#define VkglTestCase_033864_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033864_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033864, VkglTestCase_033864_1, VkglTestCase_033864_2);

#define VkglTestCase_033865_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033865_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033865, VkglTestCase_033865_1, VkglTestCase_033865_2);

#define VkglTestCase_033866_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033866_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033866, VkglTestCase_033866_1, VkglTestCase_033866_2);

#define VkglTestCase_033867_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033867_2 "t_types.3_unsigned_short2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033867, VkglTestCase_033867_1, VkglTestCase_033867_2);

#define VkglTestCase_033868_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033868_2 "_types.3_unsigned_short2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033868, VkglTestCase_033868_1, VkglTestCase_033868_2);

#define VkglTestCase_033869_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033869_2 "nput_types.3_unsigned_short2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033869, VkglTestCase_033869_1, VkglTestCase_033869_2);

#define VkglTestCase_033870_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_033870_2 "input_types.3_unsigned_short2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033870, VkglTestCase_033870_1, VkglTestCase_033870_2);

#define VkglTestCase_033871_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_033871_2 "nput_types.3_unsigned_short2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033871, VkglTestCase_033871_1, VkglTestCase_033871_2);

#define VkglTestCase_033872_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033872_2 "_types.3_unsigned_short2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033872, VkglTestCase_033872_1, VkglTestCase_033872_2);

#define VkglTestCase_033873_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033873_2 "_types.3_unsigned_short2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033873, VkglTestCase_033873_1, VkglTestCase_033873_2);

#define VkglTestCase_033874_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033874_2 "_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033874, VkglTestCase_033874_1, VkglTestCase_033874_2);

#define VkglTestCase_033875_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_033875_2 "t_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033875, VkglTestCase_033875_1, VkglTestCase_033875_2);

#define VkglTestCase_033876_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033876_2 "_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033876, VkglTestCase_033876_1, VkglTestCase_033876_2);

#define VkglTestCase_033877_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033877_2 "es.3_unsigned_short2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033877, VkglTestCase_033877_1, VkglTestCase_033877_2);

#define VkglTestCase_033878_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033878_2 "es.3_unsigned_short2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033878, VkglTestCase_033878_1, VkglTestCase_033878_2);

#define VkglTestCase_033879_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033879_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033879, VkglTestCase_033879_1, VkglTestCase_033879_2);

#define VkglTestCase_033880_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033880_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033880, VkglTestCase_033880_1, VkglTestCase_033880_2);

#define VkglTestCase_033881_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_033881_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033881, VkglTestCase_033881_1, VkglTestCase_033881_2);

#define VkglTestCase_033882_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_033882_2 "es.3_unsigned_short2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033882, VkglTestCase_033882_1, VkglTestCase_033882_2);

#define VkglTestCase_033883_1 "dEQP-GLES3.functional.vertex_arrays.multiple_attributes.input_type"
#define VkglTestCase_033883_2 "s.3_unsigned_short2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033883, VkglTestCase_033883_1, VkglTestCase_033883_2);
