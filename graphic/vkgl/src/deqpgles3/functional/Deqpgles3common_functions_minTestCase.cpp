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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012770_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012770_2 ".common_functions.min.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012770, VkglTestCase_012770_1, VkglTestCase_012770_2);

#define VkglTestCase_012771_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012771_2 "common_functions.min.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012771, VkglTestCase_012771_1, VkglTestCase_012771_2);

#define VkglTestCase_012772_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012772_2 "ommon_functions.min.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012772, VkglTestCase_012772_1, VkglTestCase_012772_2);

#define VkglTestCase_012773_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012773_2 "mmon_functions.min.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012773, VkglTestCase_012773_1, VkglTestCase_012773_2);

#define VkglTestCase_012774_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012774_2 "common_functions.min.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012774, VkglTestCase_012774_1, VkglTestCase_012774_2);

#define VkglTestCase_012775_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012775_2 "ommon_functions.min.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012775, VkglTestCase_012775_1, VkglTestCase_012775_2);

#define VkglTestCase_012776_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012776_2 ".common_functions.min.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012776, VkglTestCase_012776_1, VkglTestCase_012776_2);

#define VkglTestCase_012777_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012777_2 "common_functions.min.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012777, VkglTestCase_012777_1, VkglTestCase_012777_2);

#define VkglTestCase_012778_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012778_2 "common_functions.min.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012778, VkglTestCase_012778_1, VkglTestCase_012778_2);

#define VkglTestCase_012779_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012779_2 "ommon_functions.min.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012779, VkglTestCase_012779_1, VkglTestCase_012779_2);

#define VkglTestCase_012780_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012780_2 ".common_functions.min.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012780, VkglTestCase_012780_1, VkglTestCase_012780_2);

#define VkglTestCase_012781_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012781_2 "common_functions.min.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012781, VkglTestCase_012781_1, VkglTestCase_012781_2);

#define VkglTestCase_012782_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012782_2 ".common_functions.min.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012782, VkglTestCase_012782_1, VkglTestCase_012782_2);

#define VkglTestCase_012783_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012783_2 "common_functions.min.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012783, VkglTestCase_012783_1, VkglTestCase_012783_2);

#define VkglTestCase_012784_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012784_2 "common_functions.min.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012784, VkglTestCase_012784_1, VkglTestCase_012784_2);

#define VkglTestCase_012785_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012785_2 "ommon_functions.min.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012785, VkglTestCase_012785_1, VkglTestCase_012785_2);

#define VkglTestCase_012786_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012786_2 ".common_functions.min.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012786, VkglTestCase_012786_1, VkglTestCase_012786_2);

#define VkglTestCase_012787_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012787_2 "common_functions.min.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012787, VkglTestCase_012787_1, VkglTestCase_012787_2);

#define VkglTestCase_012788_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012788_2 ".common_functions.min.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012788, VkglTestCase_012788_1, VkglTestCase_012788_2);

#define VkglTestCase_012789_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012789_2 "common_functions.min.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012789, VkglTestCase_012789_1, VkglTestCase_012789_2);

#define VkglTestCase_012790_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012790_2 "common_functions.min.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012790, VkglTestCase_012790_1, VkglTestCase_012790_2);

#define VkglTestCase_012791_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012791_2 "ommon_functions.min.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012791, VkglTestCase_012791_1, VkglTestCase_012791_2);

#define VkglTestCase_012792_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012792_2 ".common_functions.min.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012792, VkglTestCase_012792_1, VkglTestCase_012792_2);

#define VkglTestCase_012793_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012793_2 "common_functions.min.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012793, VkglTestCase_012793_1, VkglTestCase_012793_2);

#define VkglTestCase_012794_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012794_2 "mmon_functions.min.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012794, VkglTestCase_012794_1, VkglTestCase_012794_2);

#define VkglTestCase_012795_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012795_2 "mon_functions.min.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012795, VkglTestCase_012795_1, VkglTestCase_012795_2);

#define VkglTestCase_012796_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012796_2 "mon_functions.min.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012796, VkglTestCase_012796_1, VkglTestCase_012796_2);

#define VkglTestCase_012797_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012797_2 "on_functions.min.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012797, VkglTestCase_012797_1, VkglTestCase_012797_2);

#define VkglTestCase_012798_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012798_2 "mmon_functions.min.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012798, VkglTestCase_012798_1, VkglTestCase_012798_2);

#define VkglTestCase_012799_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012799_2 "mon_functions.min.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012799, VkglTestCase_012799_1, VkglTestCase_012799_2);

#define VkglTestCase_012800_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012800_2 "mmon_functions.min.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012800, VkglTestCase_012800_1, VkglTestCase_012800_2);

#define VkglTestCase_012801_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012801_2 "mon_functions.min.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012801, VkglTestCase_012801_1, VkglTestCase_012801_2);

#define VkglTestCase_012802_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012802_2 "mon_functions.min.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012802, VkglTestCase_012802_1, VkglTestCase_012802_2);

#define VkglTestCase_012803_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012803_2 "on_functions.min.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012803, VkglTestCase_012803_1, VkglTestCase_012803_2);

#define VkglTestCase_012804_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012804_2 "mmon_functions.min.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012804, VkglTestCase_012804_1, VkglTestCase_012804_2);

#define VkglTestCase_012805_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012805_2 "mon_functions.min.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012805, VkglTestCase_012805_1, VkglTestCase_012805_2);

#define VkglTestCase_012806_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012806_2 "mmon_functions.min.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012806, VkglTestCase_012806_1, VkglTestCase_012806_2);

#define VkglTestCase_012807_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012807_2 "mon_functions.min.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012807, VkglTestCase_012807_1, VkglTestCase_012807_2);

#define VkglTestCase_012808_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012808_2 "mon_functions.min.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012808, VkglTestCase_012808_1, VkglTestCase_012808_2);

#define VkglTestCase_012809_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012809_2 "on_functions.min.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012809, VkglTestCase_012809_1, VkglTestCase_012809_2);

#define VkglTestCase_012810_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012810_2 "mmon_functions.min.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012810, VkglTestCase_012810_1, VkglTestCase_012810_2);

#define VkglTestCase_012811_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012811_2 "mon_functions.min.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012811, VkglTestCase_012811_1, VkglTestCase_012811_2);

#define VkglTestCase_012812_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012812_2 "r.common_functions.min.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012812, VkglTestCase_012812_1, VkglTestCase_012812_2);

#define VkglTestCase_012813_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012813_2 ".common_functions.min.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012813, VkglTestCase_012813_1, VkglTestCase_012813_2);

#define VkglTestCase_012814_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012814_2 "common_functions.min.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012814, VkglTestCase_012814_1, VkglTestCase_012814_2);

#define VkglTestCase_012815_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012815_2 "ommon_functions.min.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012815, VkglTestCase_012815_1, VkglTestCase_012815_2);

#define VkglTestCase_012816_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012816_2 ".common_functions.min.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012816, VkglTestCase_012816_1, VkglTestCase_012816_2);

#define VkglTestCase_012817_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012817_2 "common_functions.min.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012817, VkglTestCase_012817_1, VkglTestCase_012817_2);

#define VkglTestCase_012818_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012818_2 ".common_functions.min.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012818, VkglTestCase_012818_1, VkglTestCase_012818_2);

#define VkglTestCase_012819_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012819_2 "common_functions.min.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012819, VkglTestCase_012819_1, VkglTestCase_012819_2);

#define VkglTestCase_012820_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012820_2 "ommon_functions.min.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012820, VkglTestCase_012820_1, VkglTestCase_012820_2);

#define VkglTestCase_012821_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012821_2 "mmon_functions.min.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012821, VkglTestCase_012821_1, VkglTestCase_012821_2);

#define VkglTestCase_012822_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012822_2 "common_functions.min.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012822, VkglTestCase_012822_1, VkglTestCase_012822_2);

#define VkglTestCase_012823_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012823_2 "ommon_functions.min.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012823, VkglTestCase_012823_1, VkglTestCase_012823_2);

#define VkglTestCase_012824_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012824_2 ".common_functions.min.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012824, VkglTestCase_012824_1, VkglTestCase_012824_2);

#define VkglTestCase_012825_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012825_2 "common_functions.min.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012825, VkglTestCase_012825_1, VkglTestCase_012825_2);

#define VkglTestCase_012826_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012826_2 "ommon_functions.min.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012826, VkglTestCase_012826_1, VkglTestCase_012826_2);

#define VkglTestCase_012827_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012827_2 "mmon_functions.min.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012827, VkglTestCase_012827_1, VkglTestCase_012827_2);

#define VkglTestCase_012828_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012828_2 "common_functions.min.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012828, VkglTestCase_012828_1, VkglTestCase_012828_2);

#define VkglTestCase_012829_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012829_2 "ommon_functions.min.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012829, VkglTestCase_012829_1, VkglTestCase_012829_2);

#define VkglTestCase_012830_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012830_2 ".common_functions.min.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012830, VkglTestCase_012830_1, VkglTestCase_012830_2);

#define VkglTestCase_012831_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012831_2 "common_functions.min.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012831, VkglTestCase_012831_1, VkglTestCase_012831_2);

#define VkglTestCase_012832_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012832_2 "ommon_functions.min.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012832, VkglTestCase_012832_1, VkglTestCase_012832_2);

#define VkglTestCase_012833_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012833_2 "mmon_functions.min.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012833, VkglTestCase_012833_1, VkglTestCase_012833_2);

#define VkglTestCase_012834_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012834_2 "common_functions.min.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012834, VkglTestCase_012834_1, VkglTestCase_012834_2);

#define VkglTestCase_012835_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012835_2 "ommon_functions.min.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012835, VkglTestCase_012835_1, VkglTestCase_012835_2);

#define VkglTestCase_012836_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012836_2 "ommon_functions.min.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012836, VkglTestCase_012836_1, VkglTestCase_012836_2);

#define VkglTestCase_012837_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012837_2 "mmon_functions.min.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012837, VkglTestCase_012837_1, VkglTestCase_012837_2);

#define VkglTestCase_012838_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012838_2 "mon_functions.min.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012838, VkglTestCase_012838_1, VkglTestCase_012838_2);

#define VkglTestCase_012839_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012839_2 "on_functions.min.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012839, VkglTestCase_012839_1, VkglTestCase_012839_2);

#define VkglTestCase_012840_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012840_2 "mmon_functions.min.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012840, VkglTestCase_012840_1, VkglTestCase_012840_2);

#define VkglTestCase_012841_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012841_2 "mon_functions.min.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012841, VkglTestCase_012841_1, VkglTestCase_012841_2);

#define VkglTestCase_012842_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012842_2 "ommon_functions.min.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012842, VkglTestCase_012842_1, VkglTestCase_012842_2);

#define VkglTestCase_012843_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012843_2 "mmon_functions.min.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012843, VkglTestCase_012843_1, VkglTestCase_012843_2);

#define VkglTestCase_012844_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012844_2 "mon_functions.min.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012844, VkglTestCase_012844_1, VkglTestCase_012844_2);

#define VkglTestCase_012845_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012845_2 "on_functions.min.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012845, VkglTestCase_012845_1, VkglTestCase_012845_2);

#define VkglTestCase_012846_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012846_2 "mmon_functions.min.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012846, VkglTestCase_012846_1, VkglTestCase_012846_2);

#define VkglTestCase_012847_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012847_2 "mon_functions.min.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012847, VkglTestCase_012847_1, VkglTestCase_012847_2);

#define VkglTestCase_012848_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012848_2 "ommon_functions.min.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012848, VkglTestCase_012848_1, VkglTestCase_012848_2);

#define VkglTestCase_012849_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012849_2 "mmon_functions.min.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012849, VkglTestCase_012849_1, VkglTestCase_012849_2);

#define VkglTestCase_012850_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012850_2 "mon_functions.min.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012850, VkglTestCase_012850_1, VkglTestCase_012850_2);

#define VkglTestCase_012851_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012851_2 "on_functions.min.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012851, VkglTestCase_012851_1, VkglTestCase_012851_2);

#define VkglTestCase_012852_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012852_2 "mmon_functions.min.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012852, VkglTestCase_012852_1, VkglTestCase_012852_2);

#define VkglTestCase_012853_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012853_2 "mon_functions.min.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012853, VkglTestCase_012853_1, VkglTestCase_012853_2);

#define VkglTestCase_012854_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012854_2 ".common_functions.min.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012854, VkglTestCase_012854_1, VkglTestCase_012854_2);

#define VkglTestCase_012855_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012855_2 "common_functions.min.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012855, VkglTestCase_012855_1, VkglTestCase_012855_2);

#define VkglTestCase_012856_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012856_2 "common_functions.min.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012856, VkglTestCase_012856_1, VkglTestCase_012856_2);

#define VkglTestCase_012857_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012857_2 "ommon_functions.min.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012857, VkglTestCase_012857_1, VkglTestCase_012857_2);

#define VkglTestCase_012858_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012858_2 ".common_functions.min.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012858, VkglTestCase_012858_1, VkglTestCase_012858_2);

#define VkglTestCase_012859_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012859_2 "common_functions.min.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012859, VkglTestCase_012859_1, VkglTestCase_012859_2);

#define VkglTestCase_012860_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012860_2 ".common_functions.min.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012860, VkglTestCase_012860_1, VkglTestCase_012860_2);

#define VkglTestCase_012861_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012861_2 "common_functions.min.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012861, VkglTestCase_012861_1, VkglTestCase_012861_2);

#define VkglTestCase_012862_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012862_2 "ommon_functions.min.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012862, VkglTestCase_012862_1, VkglTestCase_012862_2);

#define VkglTestCase_012863_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012863_2 "mmon_functions.min.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012863, VkglTestCase_012863_1, VkglTestCase_012863_2);

#define VkglTestCase_012864_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012864_2 "common_functions.min.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012864, VkglTestCase_012864_1, VkglTestCase_012864_2);

#define VkglTestCase_012865_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012865_2 "ommon_functions.min.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012865, VkglTestCase_012865_1, VkglTestCase_012865_2);

#define VkglTestCase_012866_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012866_2 ".common_functions.min.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012866, VkglTestCase_012866_1, VkglTestCase_012866_2);

#define VkglTestCase_012867_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012867_2 "common_functions.min.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012867, VkglTestCase_012867_1, VkglTestCase_012867_2);

#define VkglTestCase_012868_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012868_2 "ommon_functions.min.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012868, VkglTestCase_012868_1, VkglTestCase_012868_2);

#define VkglTestCase_012869_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012869_2 "mmon_functions.min.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012869, VkglTestCase_012869_1, VkglTestCase_012869_2);

#define VkglTestCase_012870_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012870_2 "common_functions.min.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012870, VkglTestCase_012870_1, VkglTestCase_012870_2);

#define VkglTestCase_012871_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012871_2 "ommon_functions.min.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012871, VkglTestCase_012871_1, VkglTestCase_012871_2);

#define VkglTestCase_012872_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012872_2 ".common_functions.min.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012872, VkglTestCase_012872_1, VkglTestCase_012872_2);

#define VkglTestCase_012873_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012873_2 "common_functions.min.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012873, VkglTestCase_012873_1, VkglTestCase_012873_2);

#define VkglTestCase_012874_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012874_2 "ommon_functions.min.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012874, VkglTestCase_012874_1, VkglTestCase_012874_2);

#define VkglTestCase_012875_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012875_2 "mmon_functions.min.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012875, VkglTestCase_012875_1, VkglTestCase_012875_2);

#define VkglTestCase_012876_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012876_2 "common_functions.min.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012876, VkglTestCase_012876_1, VkglTestCase_012876_2);

#define VkglTestCase_012877_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012877_2 "ommon_functions.min.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012877, VkglTestCase_012877_1, VkglTestCase_012877_2);

#define VkglTestCase_012878_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012878_2 "mmon_functions.min.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012878, VkglTestCase_012878_1, VkglTestCase_012878_2);

#define VkglTestCase_012879_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012879_2 "mon_functions.min.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012879, VkglTestCase_012879_1, VkglTestCase_012879_2);

#define VkglTestCase_012880_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012880_2 "mon_functions.min.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012880, VkglTestCase_012880_1, VkglTestCase_012880_2);

#define VkglTestCase_012881_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012881_2 "on_functions.min.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012881, VkglTestCase_012881_1, VkglTestCase_012881_2);

#define VkglTestCase_012882_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012882_2 "mmon_functions.min.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012882, VkglTestCase_012882_1, VkglTestCase_012882_2);

#define VkglTestCase_012883_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012883_2 "mon_functions.min.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012883, VkglTestCase_012883_1, VkglTestCase_012883_2);

#define VkglTestCase_012884_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012884_2 "mmon_functions.min.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012884, VkglTestCase_012884_1, VkglTestCase_012884_2);

#define VkglTestCase_012885_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012885_2 "mon_functions.min.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012885, VkglTestCase_012885_1, VkglTestCase_012885_2);

#define VkglTestCase_012886_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012886_2 "mon_functions.min.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012886, VkglTestCase_012886_1, VkglTestCase_012886_2);

#define VkglTestCase_012887_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012887_2 "on_functions.min.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012887, VkglTestCase_012887_1, VkglTestCase_012887_2);

#define VkglTestCase_012888_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012888_2 "mmon_functions.min.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012888, VkglTestCase_012888_1, VkglTestCase_012888_2);

#define VkglTestCase_012889_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012889_2 "mon_functions.min.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012889, VkglTestCase_012889_1, VkglTestCase_012889_2);

#define VkglTestCase_012890_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012890_2 "mmon_functions.min.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012890, VkglTestCase_012890_1, VkglTestCase_012890_2);

#define VkglTestCase_012891_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012891_2 "mon_functions.min.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012891, VkglTestCase_012891_1, VkglTestCase_012891_2);

#define VkglTestCase_012892_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012892_2 "mon_functions.min.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012892, VkglTestCase_012892_1, VkglTestCase_012892_2);

#define VkglTestCase_012893_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012893_2 "on_functions.min.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012893, VkglTestCase_012893_1, VkglTestCase_012893_2);

#define VkglTestCase_012894_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012894_2 "mmon_functions.min.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012894, VkglTestCase_012894_1, VkglTestCase_012894_2);

#define VkglTestCase_012895_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012895_2 "mon_functions.min.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012895, VkglTestCase_012895_1, VkglTestCase_012895_2);
