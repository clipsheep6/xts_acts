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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019774_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019774_2 "ions.builtin_functions.common.abs_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019774, VkglTestCase_019774_1, VkglTestCase_019774_2);

#define VkglTestCase_019775_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019775_2 "ons.builtin_functions.common.abs_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019775, VkglTestCase_019775_1, VkglTestCase_019775_2);

#define VkglTestCase_019776_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019776_2 "sions.builtin_functions.common.abs_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019776, VkglTestCase_019776_1, VkglTestCase_019776_2);

#define VkglTestCase_019777_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019777_2 "ions.builtin_functions.common.abs_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019777, VkglTestCase_019777_1, VkglTestCase_019777_2);

#define VkglTestCase_019778_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019778_2 "sions.builtin_functions.common.abs_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019778, VkglTestCase_019778_1, VkglTestCase_019778_2);

#define VkglTestCase_019779_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019779_2 "ions.builtin_functions.common.abs_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019779, VkglTestCase_019779_1, VkglTestCase_019779_2);

#define VkglTestCase_019780_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019780_2 "sions.builtin_functions.common.abs_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019780, VkglTestCase_019780_1, VkglTestCase_019780_2);

#define VkglTestCase_019781_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019781_2 "ions.builtin_functions.common.abs_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019781, VkglTestCase_019781_1, VkglTestCase_019781_2);

#define VkglTestCase_019782_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019782_2 "sions.builtin_functions.common.abs_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019782, VkglTestCase_019782_1, VkglTestCase_019782_2);

#define VkglTestCase_019783_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019783_2 "ions.builtin_functions.common.abs_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019783, VkglTestCase_019783_1, VkglTestCase_019783_2);

#define VkglTestCase_019784_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019784_2 "ions.builtin_functions.common.abs_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019784, VkglTestCase_019784_1, VkglTestCase_019784_2);

#define VkglTestCase_019785_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019785_2 "ons.builtin_functions.common.abs_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019785, VkglTestCase_019785_1, VkglTestCase_019785_2);

#define VkglTestCase_019786_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019786_2 "ions.builtin_functions.common.abs_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019786, VkglTestCase_019786_1, VkglTestCase_019786_2);

#define VkglTestCase_019787_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019787_2 "ons.builtin_functions.common.abs_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019787, VkglTestCase_019787_1, VkglTestCase_019787_2);

#define VkglTestCase_019788_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019788_2 "ions.builtin_functions.common.abs_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019788, VkglTestCase_019788_1, VkglTestCase_019788_2);

#define VkglTestCase_019789_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019789_2 "ons.builtin_functions.common.abs_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019789, VkglTestCase_019789_1, VkglTestCase_019789_2);

#define VkglTestCase_019790_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019790_2 "ions.builtin_functions.common.sign_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019790, VkglTestCase_019790_1, VkglTestCase_019790_2);

#define VkglTestCase_019791_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019791_2 "ons.builtin_functions.common.sign_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019791, VkglTestCase_019791_1, VkglTestCase_019791_2);

#define VkglTestCase_019792_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019792_2 "ions.builtin_functions.common.sign_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019792, VkglTestCase_019792_1, VkglTestCase_019792_2);

#define VkglTestCase_019793_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019793_2 "ons.builtin_functions.common.sign_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019793, VkglTestCase_019793_1, VkglTestCase_019793_2);

#define VkglTestCase_019794_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019794_2 "ions.builtin_functions.common.sign_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019794, VkglTestCase_019794_1, VkglTestCase_019794_2);

#define VkglTestCase_019795_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019795_2 "ons.builtin_functions.common.sign_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019795, VkglTestCase_019795_1, VkglTestCase_019795_2);

#define VkglTestCase_019796_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019796_2 "ions.builtin_functions.common.sign_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019796, VkglTestCase_019796_1, VkglTestCase_019796_2);

#define VkglTestCase_019797_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019797_2 "ons.builtin_functions.common.sign_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019797, VkglTestCase_019797_1, VkglTestCase_019797_2);

#define VkglTestCase_019798_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019798_2 "sions.builtin_functions.common.sign_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019798, VkglTestCase_019798_1, VkglTestCase_019798_2);

#define VkglTestCase_019799_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019799_2 "ions.builtin_functions.common.sign_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019799, VkglTestCase_019799_1, VkglTestCase_019799_2);

#define VkglTestCase_019800_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019800_2 "ions.builtin_functions.common.sign_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019800, VkglTestCase_019800_1, VkglTestCase_019800_2);

#define VkglTestCase_019801_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019801_2 "ons.builtin_functions.common.sign_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019801, VkglTestCase_019801_1, VkglTestCase_019801_2);

#define VkglTestCase_019802_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019802_2 "ions.builtin_functions.common.sign_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019802, VkglTestCase_019802_1, VkglTestCase_019802_2);

#define VkglTestCase_019803_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019803_2 "ons.builtin_functions.common.sign_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019803, VkglTestCase_019803_1, VkglTestCase_019803_2);

#define VkglTestCase_019804_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019804_2 "ions.builtin_functions.common.sign_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019804, VkglTestCase_019804_1, VkglTestCase_019804_2);

#define VkglTestCase_019805_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019805_2 "ons.builtin_functions.common.sign_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019805, VkglTestCase_019805_1, VkglTestCase_019805_2);

#define VkglTestCase_019806_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019806_2 "ons.builtin_functions.common.floor_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019806, VkglTestCase_019806_1, VkglTestCase_019806_2);

#define VkglTestCase_019807_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019807_2 "ns.builtin_functions.common.floor_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019807, VkglTestCase_019807_1, VkglTestCase_019807_2);

#define VkglTestCase_019808_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019808_2 "ions.builtin_functions.common.floor_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019808, VkglTestCase_019808_1, VkglTestCase_019808_2);

#define VkglTestCase_019809_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019809_2 "ons.builtin_functions.common.floor_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019809, VkglTestCase_019809_1, VkglTestCase_019809_2);

#define VkglTestCase_019810_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019810_2 "ions.builtin_functions.common.floor_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019810, VkglTestCase_019810_1, VkglTestCase_019810_2);

#define VkglTestCase_019811_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019811_2 "ons.builtin_functions.common.floor_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019811, VkglTestCase_019811_1, VkglTestCase_019811_2);

#define VkglTestCase_019812_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019812_2 "ions.builtin_functions.common.floor_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019812, VkglTestCase_019812_1, VkglTestCase_019812_2);

#define VkglTestCase_019813_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019813_2 "ons.builtin_functions.common.floor_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019813, VkglTestCase_019813_1, VkglTestCase_019813_2);

#define VkglTestCase_019814_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019814_2 "ons.builtin_functions.common.trunc_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019814, VkglTestCase_019814_1, VkglTestCase_019814_2);

#define VkglTestCase_019815_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019815_2 "ns.builtin_functions.common.trunc_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019815, VkglTestCase_019815_1, VkglTestCase_019815_2);

#define VkglTestCase_019816_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019816_2 "ions.builtin_functions.common.trunc_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019816, VkglTestCase_019816_1, VkglTestCase_019816_2);

#define VkglTestCase_019817_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019817_2 "ons.builtin_functions.common.trunc_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019817, VkglTestCase_019817_1, VkglTestCase_019817_2);

#define VkglTestCase_019818_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019818_2 "ions.builtin_functions.common.trunc_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019818, VkglTestCase_019818_1, VkglTestCase_019818_2);

#define VkglTestCase_019819_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019819_2 "ons.builtin_functions.common.trunc_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019819, VkglTestCase_019819_1, VkglTestCase_019819_2);

#define VkglTestCase_019820_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019820_2 "ions.builtin_functions.common.trunc_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019820, VkglTestCase_019820_1, VkglTestCase_019820_2);

#define VkglTestCase_019821_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019821_2 "ons.builtin_functions.common.trunc_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019821, VkglTestCase_019821_1, VkglTestCase_019821_2);

#define VkglTestCase_019822_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019822_2 "ons.builtin_functions.common.round_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019822, VkglTestCase_019822_1, VkglTestCase_019822_2);

#define VkglTestCase_019823_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019823_2 "ns.builtin_functions.common.round_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019823, VkglTestCase_019823_1, VkglTestCase_019823_2);

#define VkglTestCase_019824_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019824_2 "ions.builtin_functions.common.round_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019824, VkglTestCase_019824_1, VkglTestCase_019824_2);

#define VkglTestCase_019825_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019825_2 "ons.builtin_functions.common.round_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019825, VkglTestCase_019825_1, VkglTestCase_019825_2);

#define VkglTestCase_019826_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019826_2 "ions.builtin_functions.common.round_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019826, VkglTestCase_019826_1, VkglTestCase_019826_2);

#define VkglTestCase_019827_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019827_2 "ons.builtin_functions.common.round_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019827, VkglTestCase_019827_1, VkglTestCase_019827_2);

#define VkglTestCase_019828_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019828_2 "ions.builtin_functions.common.round_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019828, VkglTestCase_019828_1, VkglTestCase_019828_2);

#define VkglTestCase_019829_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019829_2 "ons.builtin_functions.common.round_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019829, VkglTestCase_019829_1, VkglTestCase_019829_2);

#define VkglTestCase_019830_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019830_2 "ions.builtin_functions.common.ceil_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019830, VkglTestCase_019830_1, VkglTestCase_019830_2);

#define VkglTestCase_019831_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019831_2 "ons.builtin_functions.common.ceil_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019831, VkglTestCase_019831_1, VkglTestCase_019831_2);

#define VkglTestCase_019832_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019832_2 "ions.builtin_functions.common.ceil_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019832, VkglTestCase_019832_1, VkglTestCase_019832_2);

#define VkglTestCase_019833_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019833_2 "ons.builtin_functions.common.ceil_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019833, VkglTestCase_019833_1, VkglTestCase_019833_2);

#define VkglTestCase_019834_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019834_2 "ions.builtin_functions.common.ceil_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019834, VkglTestCase_019834_1, VkglTestCase_019834_2);

#define VkglTestCase_019835_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019835_2 "ons.builtin_functions.common.ceil_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019835, VkglTestCase_019835_1, VkglTestCase_019835_2);

#define VkglTestCase_019836_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019836_2 "ions.builtin_functions.common.ceil_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019836, VkglTestCase_019836_1, VkglTestCase_019836_2);

#define VkglTestCase_019837_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019837_2 "ons.builtin_functions.common.ceil_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019837, VkglTestCase_019837_1, VkglTestCase_019837_2);

#define VkglTestCase_019838_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019838_2 "ions.builtin_functions.common.min_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019838, VkglTestCase_019838_1, VkglTestCase_019838_2);

#define VkglTestCase_019839_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019839_2 "ons.builtin_functions.common.min_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019839, VkglTestCase_019839_1, VkglTestCase_019839_2);

#define VkglTestCase_019840_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019840_2 "sions.builtin_functions.common.min_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019840, VkglTestCase_019840_1, VkglTestCase_019840_2);

#define VkglTestCase_019841_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019841_2 "ions.builtin_functions.common.min_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019841, VkglTestCase_019841_1, VkglTestCase_019841_2);

#define VkglTestCase_019842_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019842_2 "ns.builtin_functions.common.min_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019842, VkglTestCase_019842_1, VkglTestCase_019842_2);

#define VkglTestCase_019843_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019843_2 "s.builtin_functions.common.min_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019843, VkglTestCase_019843_1, VkglTestCase_019843_2);

#define VkglTestCase_019844_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019844_2 "sions.builtin_functions.common.min_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019844, VkglTestCase_019844_1, VkglTestCase_019844_2);

#define VkglTestCase_019845_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019845_2 "ions.builtin_functions.common.min_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019845, VkglTestCase_019845_1, VkglTestCase_019845_2);

#define VkglTestCase_019846_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019846_2 "ns.builtin_functions.common.min_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019846, VkglTestCase_019846_1, VkglTestCase_019846_2);

#define VkglTestCase_019847_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019847_2 "s.builtin_functions.common.min_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019847, VkglTestCase_019847_1, VkglTestCase_019847_2);

#define VkglTestCase_019848_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019848_2 "sions.builtin_functions.common.min_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019848, VkglTestCase_019848_1, VkglTestCase_019848_2);

#define VkglTestCase_019849_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019849_2 "ions.builtin_functions.common.min_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019849, VkglTestCase_019849_1, VkglTestCase_019849_2);

#define VkglTestCase_019850_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019850_2 "ns.builtin_functions.common.min_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019850, VkglTestCase_019850_1, VkglTestCase_019850_2);

#define VkglTestCase_019851_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019851_2 "s.builtin_functions.common.min_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019851, VkglTestCase_019851_1, VkglTestCase_019851_2);

#define VkglTestCase_019852_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019852_2 "sions.builtin_functions.common.min_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019852, VkglTestCase_019852_1, VkglTestCase_019852_2);

#define VkglTestCase_019853_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019853_2 "ions.builtin_functions.common.min_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019853, VkglTestCase_019853_1, VkglTestCase_019853_2);

#define VkglTestCase_019854_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019854_2 "ions.builtin_functions.common.min_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019854, VkglTestCase_019854_1, VkglTestCase_019854_2);

#define VkglTestCase_019855_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019855_2 "ons.builtin_functions.common.min_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019855, VkglTestCase_019855_1, VkglTestCase_019855_2);

#define VkglTestCase_019856_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019856_2 "ns.builtin_functions.common.min_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019856, VkglTestCase_019856_1, VkglTestCase_019856_2);

#define VkglTestCase_019857_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019857_2 "s.builtin_functions.common.min_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019857, VkglTestCase_019857_1, VkglTestCase_019857_2);

#define VkglTestCase_019858_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019858_2 "ions.builtin_functions.common.min_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019858, VkglTestCase_019858_1, VkglTestCase_019858_2);

#define VkglTestCase_019859_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019859_2 "ons.builtin_functions.common.min_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019859, VkglTestCase_019859_1, VkglTestCase_019859_2);

#define VkglTestCase_019860_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019860_2 "ns.builtin_functions.common.min_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019860, VkglTestCase_019860_1, VkglTestCase_019860_2);

#define VkglTestCase_019861_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019861_2 "s.builtin_functions.common.min_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019861, VkglTestCase_019861_1, VkglTestCase_019861_2);

#define VkglTestCase_019862_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019862_2 "ions.builtin_functions.common.min_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019862, VkglTestCase_019862_1, VkglTestCase_019862_2);

#define VkglTestCase_019863_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019863_2 "ons.builtin_functions.common.min_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019863, VkglTestCase_019863_1, VkglTestCase_019863_2);

#define VkglTestCase_019864_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019864_2 "ns.builtin_functions.common.min_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019864, VkglTestCase_019864_1, VkglTestCase_019864_2);

#define VkglTestCase_019865_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019865_2 "s.builtin_functions.common.min_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019865, VkglTestCase_019865_1, VkglTestCase_019865_2);

#define VkglTestCase_019866_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019866_2 "sions.builtin_functions.common.min_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019866, VkglTestCase_019866_1, VkglTestCase_019866_2);

#define VkglTestCase_019867_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019867_2 "ions.builtin_functions.common.min_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019867, VkglTestCase_019867_1, VkglTestCase_019867_2);

#define VkglTestCase_019868_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019868_2 "ions.builtin_functions.common.min_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019868, VkglTestCase_019868_1, VkglTestCase_019868_2);

#define VkglTestCase_019869_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019869_2 "ons.builtin_functions.common.min_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019869, VkglTestCase_019869_1, VkglTestCase_019869_2);

#define VkglTestCase_019870_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019870_2 "ns.builtin_functions.common.min_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019870, VkglTestCase_019870_1, VkglTestCase_019870_2);

#define VkglTestCase_019871_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019871_2 "s.builtin_functions.common.min_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019871, VkglTestCase_019871_1, VkglTestCase_019871_2);

#define VkglTestCase_019872_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019872_2 "ions.builtin_functions.common.min_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019872, VkglTestCase_019872_1, VkglTestCase_019872_2);

#define VkglTestCase_019873_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019873_2 "ons.builtin_functions.common.min_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019873, VkglTestCase_019873_1, VkglTestCase_019873_2);

#define VkglTestCase_019874_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019874_2 "ns.builtin_functions.common.min_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019874, VkglTestCase_019874_1, VkglTestCase_019874_2);

#define VkglTestCase_019875_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019875_2 "s.builtin_functions.common.min_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019875, VkglTestCase_019875_1, VkglTestCase_019875_2);

#define VkglTestCase_019876_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019876_2 "ions.builtin_functions.common.min_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019876, VkglTestCase_019876_1, VkglTestCase_019876_2);

#define VkglTestCase_019877_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019877_2 "ons.builtin_functions.common.min_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019877, VkglTestCase_019877_1, VkglTestCase_019877_2);

#define VkglTestCase_019878_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019878_2 "ns.builtin_functions.common.min_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019878, VkglTestCase_019878_1, VkglTestCase_019878_2);

#define VkglTestCase_019879_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019879_2 "s.builtin_functions.common.min_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019879, VkglTestCase_019879_1, VkglTestCase_019879_2);

#define VkglTestCase_019880_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019880_2 "ions.builtin_functions.common.max_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019880, VkglTestCase_019880_1, VkglTestCase_019880_2);

#define VkglTestCase_019881_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019881_2 "ons.builtin_functions.common.max_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019881, VkglTestCase_019881_1, VkglTestCase_019881_2);

#define VkglTestCase_019882_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019882_2 "sions.builtin_functions.common.max_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019882, VkglTestCase_019882_1, VkglTestCase_019882_2);

#define VkglTestCase_019883_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019883_2 "ions.builtin_functions.common.max_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019883, VkglTestCase_019883_1, VkglTestCase_019883_2);

#define VkglTestCase_019884_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019884_2 "ns.builtin_functions.common.max_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019884, VkglTestCase_019884_1, VkglTestCase_019884_2);

#define VkglTestCase_019885_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019885_2 "s.builtin_functions.common.max_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019885, VkglTestCase_019885_1, VkglTestCase_019885_2);

#define VkglTestCase_019886_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019886_2 "sions.builtin_functions.common.max_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019886, VkglTestCase_019886_1, VkglTestCase_019886_2);

#define VkglTestCase_019887_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019887_2 "ions.builtin_functions.common.max_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019887, VkglTestCase_019887_1, VkglTestCase_019887_2);

#define VkglTestCase_019888_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019888_2 "ns.builtin_functions.common.max_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019888, VkglTestCase_019888_1, VkglTestCase_019888_2);

#define VkglTestCase_019889_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019889_2 "s.builtin_functions.common.max_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019889, VkglTestCase_019889_1, VkglTestCase_019889_2);

#define VkglTestCase_019890_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019890_2 "sions.builtin_functions.common.max_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019890, VkglTestCase_019890_1, VkglTestCase_019890_2);

#define VkglTestCase_019891_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019891_2 "ions.builtin_functions.common.max_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019891, VkglTestCase_019891_1, VkglTestCase_019891_2);

#define VkglTestCase_019892_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019892_2 "ns.builtin_functions.common.max_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019892, VkglTestCase_019892_1, VkglTestCase_019892_2);

#define VkglTestCase_019893_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019893_2 "s.builtin_functions.common.max_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019893, VkglTestCase_019893_1, VkglTestCase_019893_2);

#define VkglTestCase_019894_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019894_2 "sions.builtin_functions.common.max_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019894, VkglTestCase_019894_1, VkglTestCase_019894_2);

#define VkglTestCase_019895_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019895_2 "ions.builtin_functions.common.max_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019895, VkglTestCase_019895_1, VkglTestCase_019895_2);

#define VkglTestCase_019896_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019896_2 "ions.builtin_functions.common.max_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019896, VkglTestCase_019896_1, VkglTestCase_019896_2);

#define VkglTestCase_019897_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019897_2 "ons.builtin_functions.common.max_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019897, VkglTestCase_019897_1, VkglTestCase_019897_2);

#define VkglTestCase_019898_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019898_2 "ns.builtin_functions.common.max_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019898, VkglTestCase_019898_1, VkglTestCase_019898_2);

#define VkglTestCase_019899_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019899_2 "s.builtin_functions.common.max_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019899, VkglTestCase_019899_1, VkglTestCase_019899_2);

#define VkglTestCase_019900_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019900_2 "ions.builtin_functions.common.max_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019900, VkglTestCase_019900_1, VkglTestCase_019900_2);

#define VkglTestCase_019901_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019901_2 "ons.builtin_functions.common.max_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019901, VkglTestCase_019901_1, VkglTestCase_019901_2);

#define VkglTestCase_019902_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019902_2 "ns.builtin_functions.common.max_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019902, VkglTestCase_019902_1, VkglTestCase_019902_2);

#define VkglTestCase_019903_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019903_2 "s.builtin_functions.common.max_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019903, VkglTestCase_019903_1, VkglTestCase_019903_2);

#define VkglTestCase_019904_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019904_2 "ions.builtin_functions.common.max_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019904, VkglTestCase_019904_1, VkglTestCase_019904_2);

#define VkglTestCase_019905_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019905_2 "ons.builtin_functions.common.max_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019905, VkglTestCase_019905_1, VkglTestCase_019905_2);

#define VkglTestCase_019906_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019906_2 "ns.builtin_functions.common.max_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019906, VkglTestCase_019906_1, VkglTestCase_019906_2);

#define VkglTestCase_019907_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019907_2 "s.builtin_functions.common.max_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019907, VkglTestCase_019907_1, VkglTestCase_019907_2);

#define VkglTestCase_019908_1 "dEQP-GLES3.functional.shaders.constant_expres"
#define VkglTestCase_019908_2 "sions.builtin_functions.common.max_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019908, VkglTestCase_019908_1, VkglTestCase_019908_2);

#define VkglTestCase_019909_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019909_2 "ions.builtin_functions.common.max_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019909, VkglTestCase_019909_1, VkglTestCase_019909_2);

#define VkglTestCase_019910_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019910_2 "ions.builtin_functions.common.max_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019910, VkglTestCase_019910_1, VkglTestCase_019910_2);

#define VkglTestCase_019911_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019911_2 "ons.builtin_functions.common.max_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019911, VkglTestCase_019911_1, VkglTestCase_019911_2);

#define VkglTestCase_019912_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019912_2 "ns.builtin_functions.common.max_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019912, VkglTestCase_019912_1, VkglTestCase_019912_2);

#define VkglTestCase_019913_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019913_2 "s.builtin_functions.common.max_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019913, VkglTestCase_019913_1, VkglTestCase_019913_2);

#define VkglTestCase_019914_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019914_2 "ions.builtin_functions.common.max_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019914, VkglTestCase_019914_1, VkglTestCase_019914_2);

#define VkglTestCase_019915_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019915_2 "ons.builtin_functions.common.max_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019915, VkglTestCase_019915_1, VkglTestCase_019915_2);

#define VkglTestCase_019916_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019916_2 "ns.builtin_functions.common.max_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019916, VkglTestCase_019916_1, VkglTestCase_019916_2);

#define VkglTestCase_019917_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019917_2 "s.builtin_functions.common.max_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019917, VkglTestCase_019917_1, VkglTestCase_019917_2);

#define VkglTestCase_019918_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019918_2 "ions.builtin_functions.common.max_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019918, VkglTestCase_019918_1, VkglTestCase_019918_2);

#define VkglTestCase_019919_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019919_2 "ons.builtin_functions.common.max_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019919, VkglTestCase_019919_1, VkglTestCase_019919_2);

#define VkglTestCase_019920_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019920_2 "ns.builtin_functions.common.max_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019920, VkglTestCase_019920_1, VkglTestCase_019920_2);

#define VkglTestCase_019921_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019921_2 "s.builtin_functions.common.max_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019921, VkglTestCase_019921_1, VkglTestCase_019921_2);

#define VkglTestCase_019922_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019922_2 "ons.builtin_functions.common.clamp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019922, VkglTestCase_019922_1, VkglTestCase_019922_2);

#define VkglTestCase_019923_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019923_2 "ns.builtin_functions.common.clamp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019923, VkglTestCase_019923_1, VkglTestCase_019923_2);

#define VkglTestCase_019924_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019924_2 "ions.builtin_functions.common.clamp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019924, VkglTestCase_019924_1, VkglTestCase_019924_2);

#define VkglTestCase_019925_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019925_2 "ons.builtin_functions.common.clamp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019925, VkglTestCase_019925_1, VkglTestCase_019925_2);

#define VkglTestCase_019926_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019926_2 "s.builtin_functions.common.clamp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019926, VkglTestCase_019926_1, VkglTestCase_019926_2);

#define VkglTestCase_019927_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019927_2 ".builtin_functions.common.clamp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019927, VkglTestCase_019927_1, VkglTestCase_019927_2);

#define VkglTestCase_019928_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019928_2 "ions.builtin_functions.common.clamp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019928, VkglTestCase_019928_1, VkglTestCase_019928_2);

#define VkglTestCase_019929_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019929_2 "ons.builtin_functions.common.clamp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019929, VkglTestCase_019929_1, VkglTestCase_019929_2);

#define VkglTestCase_019930_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019930_2 "s.builtin_functions.common.clamp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019930, VkglTestCase_019930_1, VkglTestCase_019930_2);

#define VkglTestCase_019931_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019931_2 ".builtin_functions.common.clamp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019931, VkglTestCase_019931_1, VkglTestCase_019931_2);

#define VkglTestCase_019932_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019932_2 "ions.builtin_functions.common.clamp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019932, VkglTestCase_019932_1, VkglTestCase_019932_2);

#define VkglTestCase_019933_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019933_2 "ons.builtin_functions.common.clamp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019933, VkglTestCase_019933_1, VkglTestCase_019933_2);

#define VkglTestCase_019934_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019934_2 "s.builtin_functions.common.clamp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019934, VkglTestCase_019934_1, VkglTestCase_019934_2);

#define VkglTestCase_019935_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019935_2 ".builtin_functions.common.clamp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019935, VkglTestCase_019935_1, VkglTestCase_019935_2);

#define VkglTestCase_019936_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019936_2 "ions.builtin_functions.common.clamp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019936, VkglTestCase_019936_1, VkglTestCase_019936_2);

#define VkglTestCase_019937_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019937_2 "ons.builtin_functions.common.clamp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019937, VkglTestCase_019937_1, VkglTestCase_019937_2);

#define VkglTestCase_019938_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019938_2 "ons.builtin_functions.common.clamp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019938, VkglTestCase_019938_1, VkglTestCase_019938_2);

#define VkglTestCase_019939_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019939_2 "ns.builtin_functions.common.clamp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019939, VkglTestCase_019939_1, VkglTestCase_019939_2);

#define VkglTestCase_019940_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019940_2 "s.builtin_functions.common.clamp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019940, VkglTestCase_019940_1, VkglTestCase_019940_2);

#define VkglTestCase_019941_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019941_2 ".builtin_functions.common.clamp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019941, VkglTestCase_019941_1, VkglTestCase_019941_2);

#define VkglTestCase_019942_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019942_2 "ons.builtin_functions.common.clamp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019942, VkglTestCase_019942_1, VkglTestCase_019942_2);

#define VkglTestCase_019943_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019943_2 "ns.builtin_functions.common.clamp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019943, VkglTestCase_019943_1, VkglTestCase_019943_2);

#define VkglTestCase_019944_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019944_2 "s.builtin_functions.common.clamp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019944, VkglTestCase_019944_1, VkglTestCase_019944_2);

#define VkglTestCase_019945_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019945_2 ".builtin_functions.common.clamp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019945, VkglTestCase_019945_1, VkglTestCase_019945_2);

#define VkglTestCase_019946_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019946_2 "ons.builtin_functions.common.clamp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019946, VkglTestCase_019946_1, VkglTestCase_019946_2);

#define VkglTestCase_019947_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019947_2 "ns.builtin_functions.common.clamp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019947, VkglTestCase_019947_1, VkglTestCase_019947_2);

#define VkglTestCase_019948_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019948_2 "s.builtin_functions.common.clamp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019948, VkglTestCase_019948_1, VkglTestCase_019948_2);

#define VkglTestCase_019949_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019949_2 ".builtin_functions.common.clamp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019949, VkglTestCase_019949_1, VkglTestCase_019949_2);

#define VkglTestCase_019950_1 "dEQP-GLES3.functional.shaders.constant_express"
#define VkglTestCase_019950_2 "ions.builtin_functions.common.clamp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019950, VkglTestCase_019950_1, VkglTestCase_019950_2);

#define VkglTestCase_019951_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019951_2 "ons.builtin_functions.common.clamp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019951, VkglTestCase_019951_1, VkglTestCase_019951_2);

#define VkglTestCase_019952_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019952_2 "ons.builtin_functions.common.clamp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019952, VkglTestCase_019952_1, VkglTestCase_019952_2);

#define VkglTestCase_019953_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019953_2 "ns.builtin_functions.common.clamp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019953, VkglTestCase_019953_1, VkglTestCase_019953_2);

#define VkglTestCase_019954_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019954_2 "s.builtin_functions.common.clamp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019954, VkglTestCase_019954_1, VkglTestCase_019954_2);

#define VkglTestCase_019955_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019955_2 ".builtin_functions.common.clamp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019955, VkglTestCase_019955_1, VkglTestCase_019955_2);

#define VkglTestCase_019956_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019956_2 "ons.builtin_functions.common.clamp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019956, VkglTestCase_019956_1, VkglTestCase_019956_2);

#define VkglTestCase_019957_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019957_2 "ns.builtin_functions.common.clamp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019957, VkglTestCase_019957_1, VkglTestCase_019957_2);

#define VkglTestCase_019958_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019958_2 "s.builtin_functions.common.clamp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019958, VkglTestCase_019958_1, VkglTestCase_019958_2);

#define VkglTestCase_019959_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019959_2 ".builtin_functions.common.clamp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019959, VkglTestCase_019959_1, VkglTestCase_019959_2);

#define VkglTestCase_019960_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019960_2 "ons.builtin_functions.common.clamp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019960, VkglTestCase_019960_1, VkglTestCase_019960_2);

#define VkglTestCase_019961_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019961_2 "ns.builtin_functions.common.clamp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019961, VkglTestCase_019961_1, VkglTestCase_019961_2);

#define VkglTestCase_019962_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019962_2 "s.builtin_functions.common.clamp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019962, VkglTestCase_019962_1, VkglTestCase_019962_2);

#define VkglTestCase_019963_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019963_2 ".builtin_functions.common.clamp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019963, VkglTestCase_019963_1, VkglTestCase_019963_2);
