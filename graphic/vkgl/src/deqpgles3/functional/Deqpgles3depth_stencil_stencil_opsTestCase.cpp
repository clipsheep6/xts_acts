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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027774_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027774_2 "pth_stencil.stencil_ops.keep_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027774, VkglTestCase_027774_1, VkglTestCase_027774_2);

#define VkglTestCase_027775_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027775_2 "pth_stencil.stencil_ops.keep_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027775, VkglTestCase_027775_1, VkglTestCase_027775_2);

#define VkglTestCase_027776_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027776_2 "h_stencil.stencil_ops.keep_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027776, VkglTestCase_027776_1, VkglTestCase_027776_2);

#define VkglTestCase_027777_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027777_2 "pth_stencil.stencil_ops.keep_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027777, VkglTestCase_027777_1, VkglTestCase_027777_2);

#define VkglTestCase_027778_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027778_2 "pth_stencil.stencil_ops.keep_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027778, VkglTestCase_027778_1, VkglTestCase_027778_2);

#define VkglTestCase_027779_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027779_2 "th_stencil.stencil_ops.keep_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027779, VkglTestCase_027779_1, VkglTestCase_027779_2);

#define VkglTestCase_027780_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027780_2 "_stencil.stencil_ops.keep_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027780, VkglTestCase_027780_1, VkglTestCase_027780_2);

#define VkglTestCase_027781_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027781_2 "_stencil.stencil_ops.keep_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027781, VkglTestCase_027781_1, VkglTestCase_027781_2);

#define VkglTestCase_027782_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027782_2 "pth_stencil.stencil_ops.keep_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027782, VkglTestCase_027782_1, VkglTestCase_027782_2);

#define VkglTestCase_027783_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027783_2 "pth_stencil.stencil_ops.keep_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027783, VkglTestCase_027783_1, VkglTestCase_027783_2);

#define VkglTestCase_027784_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027784_2 "h_stencil.stencil_ops.keep_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027784, VkglTestCase_027784_1, VkglTestCase_027784_2);

#define VkglTestCase_027785_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027785_2 "pth_stencil.stencil_ops.keep_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027785, VkglTestCase_027785_1, VkglTestCase_027785_2);

#define VkglTestCase_027786_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027786_2 "pth_stencil.stencil_ops.keep_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027786, VkglTestCase_027786_1, VkglTestCase_027786_2);

#define VkglTestCase_027787_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027787_2 "th_stencil.stencil_ops.keep_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027787, VkglTestCase_027787_1, VkglTestCase_027787_2);

#define VkglTestCase_027788_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027788_2 "_stencil.stencil_ops.keep_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027788, VkglTestCase_027788_1, VkglTestCase_027788_2);

#define VkglTestCase_027789_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027789_2 "_stencil.stencil_ops.keep_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027789, VkglTestCase_027789_1, VkglTestCase_027789_2);

#define VkglTestCase_027790_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027790_2 "h_stencil.stencil_ops.keep_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027790, VkglTestCase_027790_1, VkglTestCase_027790_2);

#define VkglTestCase_027791_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027791_2 "h_stencil.stencil_ops.keep_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027791, VkglTestCase_027791_1, VkglTestCase_027791_2);

#define VkglTestCase_027792_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027792_2 "_stencil.stencil_ops.keep_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027792, VkglTestCase_027792_1, VkglTestCase_027792_2);

#define VkglTestCase_027793_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027793_2 "h_stencil.stencil_ops.keep_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027793, VkglTestCase_027793_1, VkglTestCase_027793_2);

#define VkglTestCase_027794_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027794_2 "h_stencil.stencil_ops.keep_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027794, VkglTestCase_027794_1, VkglTestCase_027794_2);

#define VkglTestCase_027795_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027795_2 "_stencil.stencil_ops.keep_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027795, VkglTestCase_027795_1, VkglTestCase_027795_2);

#define VkglTestCase_027796_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027796_2 "stencil.stencil_ops.keep_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027796, VkglTestCase_027796_1, VkglTestCase_027796_2);

#define VkglTestCase_027797_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027797_2 "stencil.stencil_ops.keep_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027797, VkglTestCase_027797_1, VkglTestCase_027797_2);

#define VkglTestCase_027798_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027798_2 "pth_stencil.stencil_ops.keep_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027798, VkglTestCase_027798_1, VkglTestCase_027798_2);

#define VkglTestCase_027799_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027799_2 "pth_stencil.stencil_ops.keep_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027799, VkglTestCase_027799_1, VkglTestCase_027799_2);

#define VkglTestCase_027800_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027800_2 "h_stencil.stencil_ops.keep_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027800, VkglTestCase_027800_1, VkglTestCase_027800_2);

#define VkglTestCase_027801_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027801_2 "pth_stencil.stencil_ops.keep_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027801, VkglTestCase_027801_1, VkglTestCase_027801_2);

#define VkglTestCase_027802_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027802_2 "pth_stencil.stencil_ops.keep_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027802, VkglTestCase_027802_1, VkglTestCase_027802_2);

#define VkglTestCase_027803_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027803_2 "th_stencil.stencil_ops.keep_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027803, VkglTestCase_027803_1, VkglTestCase_027803_2);

#define VkglTestCase_027804_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027804_2 "_stencil.stencil_ops.keep_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027804, VkglTestCase_027804_1, VkglTestCase_027804_2);

#define VkglTestCase_027805_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027805_2 "_stencil.stencil_ops.keep_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027805, VkglTestCase_027805_1, VkglTestCase_027805_2);

#define VkglTestCase_027806_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027806_2 "pth_stencil.stencil_ops.keep_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027806, VkglTestCase_027806_1, VkglTestCase_027806_2);

#define VkglTestCase_027807_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027807_2 "pth_stencil.stencil_ops.keep_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027807, VkglTestCase_027807_1, VkglTestCase_027807_2);

#define VkglTestCase_027808_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027808_2 "h_stencil.stencil_ops.keep_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027808, VkglTestCase_027808_1, VkglTestCase_027808_2);

#define VkglTestCase_027809_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027809_2 "pth_stencil.stencil_ops.keep_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027809, VkglTestCase_027809_1, VkglTestCase_027809_2);

#define VkglTestCase_027810_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027810_2 "pth_stencil.stencil_ops.keep_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027810, VkglTestCase_027810_1, VkglTestCase_027810_2);

#define VkglTestCase_027811_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027811_2 "th_stencil.stencil_ops.keep_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027811, VkglTestCase_027811_1, VkglTestCase_027811_2);

#define VkglTestCase_027812_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027812_2 "_stencil.stencil_ops.keep_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027812, VkglTestCase_027812_1, VkglTestCase_027812_2);

#define VkglTestCase_027813_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027813_2 "_stencil.stencil_ops.keep_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027813, VkglTestCase_027813_1, VkglTestCase_027813_2);

#define VkglTestCase_027814_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027814_2 "th_stencil.stencil_ops.keep_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027814, VkglTestCase_027814_1, VkglTestCase_027814_2);

#define VkglTestCase_027815_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027815_2 "th_stencil.stencil_ops.keep_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027815, VkglTestCase_027815_1, VkglTestCase_027815_2);

#define VkglTestCase_027816_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027816_2 "_stencil.stencil_ops.keep_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027816, VkglTestCase_027816_1, VkglTestCase_027816_2);

#define VkglTestCase_027817_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027817_2 "th_stencil.stencil_ops.keep_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027817, VkglTestCase_027817_1, VkglTestCase_027817_2);

#define VkglTestCase_027818_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027818_2 "th_stencil.stencil_ops.keep_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027818, VkglTestCase_027818_1, VkglTestCase_027818_2);

#define VkglTestCase_027819_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027819_2 "h_stencil.stencil_ops.keep_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027819, VkglTestCase_027819_1, VkglTestCase_027819_2);

#define VkglTestCase_027820_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027820_2 "stencil.stencil_ops.keep_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027820, VkglTestCase_027820_1, VkglTestCase_027820_2);

#define VkglTestCase_027821_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027821_2 "stencil.stencil_ops.keep_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027821, VkglTestCase_027821_1, VkglTestCase_027821_2);

#define VkglTestCase_027822_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027822_2 "_stencil.stencil_ops.keep_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027822, VkglTestCase_027822_1, VkglTestCase_027822_2);

#define VkglTestCase_027823_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027823_2 "_stencil.stencil_ops.keep_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027823, VkglTestCase_027823_1, VkglTestCase_027823_2);

#define VkglTestCase_027824_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027824_2 "stencil.stencil_ops.keep_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027824, VkglTestCase_027824_1, VkglTestCase_027824_2);

#define VkglTestCase_027825_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027825_2 "_stencil.stencil_ops.keep_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027825, VkglTestCase_027825_1, VkglTestCase_027825_2);

#define VkglTestCase_027826_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027826_2 "_stencil.stencil_ops.keep_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027826, VkglTestCase_027826_1, VkglTestCase_027826_2);

#define VkglTestCase_027827_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027827_2 "stencil.stencil_ops.keep_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027827, VkglTestCase_027827_1, VkglTestCase_027827_2);

#define VkglTestCase_027828_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027828_2 "tencil.stencil_ops.keep_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027828, VkglTestCase_027828_1, VkglTestCase_027828_2);

#define VkglTestCase_027829_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027829_2 "tencil.stencil_ops.keep_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027829, VkglTestCase_027829_1, VkglTestCase_027829_2);

#define VkglTestCase_027830_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027830_2 "_stencil.stencil_ops.keep_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027830, VkglTestCase_027830_1, VkglTestCase_027830_2);

#define VkglTestCase_027831_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027831_2 "_stencil.stencil_ops.keep_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027831, VkglTestCase_027831_1, VkglTestCase_027831_2);

#define VkglTestCase_027832_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027832_2 "stencil.stencil_ops.keep_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027832, VkglTestCase_027832_1, VkglTestCase_027832_2);

#define VkglTestCase_027833_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027833_2 "_stencil.stencil_ops.keep_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027833, VkglTestCase_027833_1, VkglTestCase_027833_2);

#define VkglTestCase_027834_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027834_2 "_stencil.stencil_ops.keep_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027834, VkglTestCase_027834_1, VkglTestCase_027834_2);

#define VkglTestCase_027835_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027835_2 "stencil.stencil_ops.keep_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027835, VkglTestCase_027835_1, VkglTestCase_027835_2);

#define VkglTestCase_027836_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027836_2 "tencil.stencil_ops.keep_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027836, VkglTestCase_027836_1, VkglTestCase_027836_2);

#define VkglTestCase_027837_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027837_2 "tencil.stencil_ops.keep_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027837, VkglTestCase_027837_1, VkglTestCase_027837_2);

#define VkglTestCase_027838_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027838_2 "pth_stencil.stencil_ops.zero_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027838, VkglTestCase_027838_1, VkglTestCase_027838_2);

#define VkglTestCase_027839_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027839_2 "pth_stencil.stencil_ops.zero_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027839, VkglTestCase_027839_1, VkglTestCase_027839_2);

#define VkglTestCase_027840_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027840_2 "h_stencil.stencil_ops.zero_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027840, VkglTestCase_027840_1, VkglTestCase_027840_2);

#define VkglTestCase_027841_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027841_2 "pth_stencil.stencil_ops.zero_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027841, VkglTestCase_027841_1, VkglTestCase_027841_2);

#define VkglTestCase_027842_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027842_2 "pth_stencil.stencil_ops.zero_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027842, VkglTestCase_027842_1, VkglTestCase_027842_2);

#define VkglTestCase_027843_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027843_2 "th_stencil.stencil_ops.zero_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027843, VkglTestCase_027843_1, VkglTestCase_027843_2);

#define VkglTestCase_027844_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027844_2 "_stencil.stencil_ops.zero_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027844, VkglTestCase_027844_1, VkglTestCase_027844_2);

#define VkglTestCase_027845_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027845_2 "_stencil.stencil_ops.zero_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027845, VkglTestCase_027845_1, VkglTestCase_027845_2);

#define VkglTestCase_027846_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027846_2 "pth_stencil.stencil_ops.zero_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027846, VkglTestCase_027846_1, VkglTestCase_027846_2);

#define VkglTestCase_027847_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027847_2 "pth_stencil.stencil_ops.zero_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027847, VkglTestCase_027847_1, VkglTestCase_027847_2);

#define VkglTestCase_027848_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027848_2 "h_stencil.stencil_ops.zero_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027848, VkglTestCase_027848_1, VkglTestCase_027848_2);

#define VkglTestCase_027849_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027849_2 "pth_stencil.stencil_ops.zero_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027849, VkglTestCase_027849_1, VkglTestCase_027849_2);

#define VkglTestCase_027850_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027850_2 "pth_stencil.stencil_ops.zero_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027850, VkglTestCase_027850_1, VkglTestCase_027850_2);

#define VkglTestCase_027851_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027851_2 "th_stencil.stencil_ops.zero_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027851, VkglTestCase_027851_1, VkglTestCase_027851_2);

#define VkglTestCase_027852_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027852_2 "_stencil.stencil_ops.zero_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027852, VkglTestCase_027852_1, VkglTestCase_027852_2);

#define VkglTestCase_027853_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027853_2 "_stencil.stencil_ops.zero_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027853, VkglTestCase_027853_1, VkglTestCase_027853_2);

#define VkglTestCase_027854_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027854_2 "h_stencil.stencil_ops.zero_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027854, VkglTestCase_027854_1, VkglTestCase_027854_2);

#define VkglTestCase_027855_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027855_2 "h_stencil.stencil_ops.zero_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027855, VkglTestCase_027855_1, VkglTestCase_027855_2);

#define VkglTestCase_027856_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027856_2 "_stencil.stencil_ops.zero_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027856, VkglTestCase_027856_1, VkglTestCase_027856_2);

#define VkglTestCase_027857_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027857_2 "h_stencil.stencil_ops.zero_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027857, VkglTestCase_027857_1, VkglTestCase_027857_2);

#define VkglTestCase_027858_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027858_2 "h_stencil.stencil_ops.zero_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027858, VkglTestCase_027858_1, VkglTestCase_027858_2);

#define VkglTestCase_027859_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027859_2 "_stencil.stencil_ops.zero_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027859, VkglTestCase_027859_1, VkglTestCase_027859_2);

#define VkglTestCase_027860_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027860_2 "stencil.stencil_ops.zero_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027860, VkglTestCase_027860_1, VkglTestCase_027860_2);

#define VkglTestCase_027861_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027861_2 "stencil.stencil_ops.zero_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027861, VkglTestCase_027861_1, VkglTestCase_027861_2);

#define VkglTestCase_027862_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027862_2 "pth_stencil.stencil_ops.zero_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027862, VkglTestCase_027862_1, VkglTestCase_027862_2);

#define VkglTestCase_027863_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027863_2 "pth_stencil.stencil_ops.zero_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027863, VkglTestCase_027863_1, VkglTestCase_027863_2);

#define VkglTestCase_027864_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027864_2 "h_stencil.stencil_ops.zero_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027864, VkglTestCase_027864_1, VkglTestCase_027864_2);

#define VkglTestCase_027865_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027865_2 "pth_stencil.stencil_ops.zero_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027865, VkglTestCase_027865_1, VkglTestCase_027865_2);

#define VkglTestCase_027866_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027866_2 "pth_stencil.stencil_ops.zero_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027866, VkglTestCase_027866_1, VkglTestCase_027866_2);

#define VkglTestCase_027867_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027867_2 "th_stencil.stencil_ops.zero_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027867, VkglTestCase_027867_1, VkglTestCase_027867_2);

#define VkglTestCase_027868_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027868_2 "_stencil.stencil_ops.zero_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027868, VkglTestCase_027868_1, VkglTestCase_027868_2);

#define VkglTestCase_027869_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027869_2 "_stencil.stencil_ops.zero_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027869, VkglTestCase_027869_1, VkglTestCase_027869_2);

#define VkglTestCase_027870_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027870_2 "pth_stencil.stencil_ops.zero_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027870, VkglTestCase_027870_1, VkglTestCase_027870_2);

#define VkglTestCase_027871_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027871_2 "pth_stencil.stencil_ops.zero_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027871, VkglTestCase_027871_1, VkglTestCase_027871_2);

#define VkglTestCase_027872_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027872_2 "h_stencil.stencil_ops.zero_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027872, VkglTestCase_027872_1, VkglTestCase_027872_2);

#define VkglTestCase_027873_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027873_2 "pth_stencil.stencil_ops.zero_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027873, VkglTestCase_027873_1, VkglTestCase_027873_2);

#define VkglTestCase_027874_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027874_2 "pth_stencil.stencil_ops.zero_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027874, VkglTestCase_027874_1, VkglTestCase_027874_2);

#define VkglTestCase_027875_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027875_2 "th_stencil.stencil_ops.zero_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027875, VkglTestCase_027875_1, VkglTestCase_027875_2);

#define VkglTestCase_027876_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027876_2 "_stencil.stencil_ops.zero_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027876, VkglTestCase_027876_1, VkglTestCase_027876_2);

#define VkglTestCase_027877_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027877_2 "_stencil.stencil_ops.zero_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027877, VkglTestCase_027877_1, VkglTestCase_027877_2);

#define VkglTestCase_027878_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027878_2 "th_stencil.stencil_ops.zero_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027878, VkglTestCase_027878_1, VkglTestCase_027878_2);

#define VkglTestCase_027879_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027879_2 "th_stencil.stencil_ops.zero_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027879, VkglTestCase_027879_1, VkglTestCase_027879_2);

#define VkglTestCase_027880_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027880_2 "_stencil.stencil_ops.zero_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027880, VkglTestCase_027880_1, VkglTestCase_027880_2);

#define VkglTestCase_027881_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027881_2 "th_stencil.stencil_ops.zero_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027881, VkglTestCase_027881_1, VkglTestCase_027881_2);

#define VkglTestCase_027882_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027882_2 "th_stencil.stencil_ops.zero_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027882, VkglTestCase_027882_1, VkglTestCase_027882_2);

#define VkglTestCase_027883_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027883_2 "h_stencil.stencil_ops.zero_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027883, VkglTestCase_027883_1, VkglTestCase_027883_2);

#define VkglTestCase_027884_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027884_2 "stencil.stencil_ops.zero_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027884, VkglTestCase_027884_1, VkglTestCase_027884_2);

#define VkglTestCase_027885_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027885_2 "stencil.stencil_ops.zero_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027885, VkglTestCase_027885_1, VkglTestCase_027885_2);

#define VkglTestCase_027886_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027886_2 "_stencil.stencil_ops.zero_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027886, VkglTestCase_027886_1, VkglTestCase_027886_2);

#define VkglTestCase_027887_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027887_2 "_stencil.stencil_ops.zero_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027887, VkglTestCase_027887_1, VkglTestCase_027887_2);

#define VkglTestCase_027888_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027888_2 "stencil.stencil_ops.zero_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027888, VkglTestCase_027888_1, VkglTestCase_027888_2);

#define VkglTestCase_027889_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027889_2 "_stencil.stencil_ops.zero_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027889, VkglTestCase_027889_1, VkglTestCase_027889_2);

#define VkglTestCase_027890_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027890_2 "_stencil.stencil_ops.zero_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027890, VkglTestCase_027890_1, VkglTestCase_027890_2);

#define VkglTestCase_027891_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027891_2 "stencil.stencil_ops.zero_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027891, VkglTestCase_027891_1, VkglTestCase_027891_2);

#define VkglTestCase_027892_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027892_2 "tencil.stencil_ops.zero_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027892, VkglTestCase_027892_1, VkglTestCase_027892_2);

#define VkglTestCase_027893_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027893_2 "tencil.stencil_ops.zero_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027893, VkglTestCase_027893_1, VkglTestCase_027893_2);

#define VkglTestCase_027894_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027894_2 "_stencil.stencil_ops.zero_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027894, VkglTestCase_027894_1, VkglTestCase_027894_2);

#define VkglTestCase_027895_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027895_2 "_stencil.stencil_ops.zero_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027895, VkglTestCase_027895_1, VkglTestCase_027895_2);

#define VkglTestCase_027896_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027896_2 "stencil.stencil_ops.zero_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027896, VkglTestCase_027896_1, VkglTestCase_027896_2);

#define VkglTestCase_027897_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027897_2 "_stencil.stencil_ops.zero_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027897, VkglTestCase_027897_1, VkglTestCase_027897_2);

#define VkglTestCase_027898_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027898_2 "_stencil.stencil_ops.zero_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027898, VkglTestCase_027898_1, VkglTestCase_027898_2);

#define VkglTestCase_027899_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027899_2 "stencil.stencil_ops.zero_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027899, VkglTestCase_027899_1, VkglTestCase_027899_2);

#define VkglTestCase_027900_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027900_2 "tencil.stencil_ops.zero_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027900, VkglTestCase_027900_1, VkglTestCase_027900_2);

#define VkglTestCase_027901_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027901_2 "tencil.stencil_ops.zero_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027901, VkglTestCase_027901_1, VkglTestCase_027901_2);

#define VkglTestCase_027902_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027902_2 "h_stencil.stencil_ops.replace_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027902, VkglTestCase_027902_1, VkglTestCase_027902_2);

#define VkglTestCase_027903_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027903_2 "h_stencil.stencil_ops.replace_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027903, VkglTestCase_027903_1, VkglTestCase_027903_2);

#define VkglTestCase_027904_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027904_2 "_stencil.stencil_ops.replace_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027904, VkglTestCase_027904_1, VkglTestCase_027904_2);

#define VkglTestCase_027905_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027905_2 "h_stencil.stencil_ops.replace_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027905, VkglTestCase_027905_1, VkglTestCase_027905_2);

#define VkglTestCase_027906_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027906_2 "h_stencil.stencil_ops.replace_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027906, VkglTestCase_027906_1, VkglTestCase_027906_2);

#define VkglTestCase_027907_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027907_2 "_stencil.stencil_ops.replace_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027907, VkglTestCase_027907_1, VkglTestCase_027907_2);

#define VkglTestCase_027908_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027908_2 "stencil.stencil_ops.replace_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027908, VkglTestCase_027908_1, VkglTestCase_027908_2);

#define VkglTestCase_027909_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027909_2 "stencil.stencil_ops.replace_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027909, VkglTestCase_027909_1, VkglTestCase_027909_2);

#define VkglTestCase_027910_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027910_2 "h_stencil.stencil_ops.replace_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027910, VkglTestCase_027910_1, VkglTestCase_027910_2);

#define VkglTestCase_027911_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027911_2 "h_stencil.stencil_ops.replace_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027911, VkglTestCase_027911_1, VkglTestCase_027911_2);

#define VkglTestCase_027912_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027912_2 "_stencil.stencil_ops.replace_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027912, VkglTestCase_027912_1, VkglTestCase_027912_2);

#define VkglTestCase_027913_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027913_2 "h_stencil.stencil_ops.replace_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027913, VkglTestCase_027913_1, VkglTestCase_027913_2);

#define VkglTestCase_027914_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027914_2 "h_stencil.stencil_ops.replace_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027914, VkglTestCase_027914_1, VkglTestCase_027914_2);

#define VkglTestCase_027915_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027915_2 "_stencil.stencil_ops.replace_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027915, VkglTestCase_027915_1, VkglTestCase_027915_2);

#define VkglTestCase_027916_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027916_2 "stencil.stencil_ops.replace_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027916, VkglTestCase_027916_1, VkglTestCase_027916_2);

#define VkglTestCase_027917_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027917_2 "stencil.stencil_ops.replace_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027917, VkglTestCase_027917_1, VkglTestCase_027917_2);

#define VkglTestCase_027918_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027918_2 "_stencil.stencil_ops.replace_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027918, VkglTestCase_027918_1, VkglTestCase_027918_2);

#define VkglTestCase_027919_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027919_2 "_stencil.stencil_ops.replace_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027919, VkglTestCase_027919_1, VkglTestCase_027919_2);

#define VkglTestCase_027920_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027920_2 "tencil.stencil_ops.replace_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027920, VkglTestCase_027920_1, VkglTestCase_027920_2);

#define VkglTestCase_027921_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027921_2 "_stencil.stencil_ops.replace_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027921, VkglTestCase_027921_1, VkglTestCase_027921_2);

#define VkglTestCase_027922_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027922_2 "_stencil.stencil_ops.replace_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027922, VkglTestCase_027922_1, VkglTestCase_027922_2);

#define VkglTestCase_027923_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027923_2 "stencil.stencil_ops.replace_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027923, VkglTestCase_027923_1, VkglTestCase_027923_2);

#define VkglTestCase_027924_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_027924_2 "encil.stencil_ops.replace_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027924, VkglTestCase_027924_1, VkglTestCase_027924_2);

#define VkglTestCase_027925_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_027925_2 "encil.stencil_ops.replace_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027925, VkglTestCase_027925_1, VkglTestCase_027925_2);

#define VkglTestCase_027926_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027926_2 "h_stencil.stencil_ops.replace_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027926, VkglTestCase_027926_1, VkglTestCase_027926_2);

#define VkglTestCase_027927_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027927_2 "h_stencil.stencil_ops.replace_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027927, VkglTestCase_027927_1, VkglTestCase_027927_2);

#define VkglTestCase_027928_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027928_2 "_stencil.stencil_ops.replace_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027928, VkglTestCase_027928_1, VkglTestCase_027928_2);

#define VkglTestCase_027929_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027929_2 "h_stencil.stencil_ops.replace_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027929, VkglTestCase_027929_1, VkglTestCase_027929_2);

#define VkglTestCase_027930_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027930_2 "h_stencil.stencil_ops.replace_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027930, VkglTestCase_027930_1, VkglTestCase_027930_2);

#define VkglTestCase_027931_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027931_2 "_stencil.stencil_ops.replace_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027931, VkglTestCase_027931_1, VkglTestCase_027931_2);

#define VkglTestCase_027932_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027932_2 "stencil.stencil_ops.replace_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027932, VkglTestCase_027932_1, VkglTestCase_027932_2);

#define VkglTestCase_027933_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027933_2 "stencil.stencil_ops.replace_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027933, VkglTestCase_027933_1, VkglTestCase_027933_2);

#define VkglTestCase_027934_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027934_2 "h_stencil.stencil_ops.replace_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027934, VkglTestCase_027934_1, VkglTestCase_027934_2);

#define VkglTestCase_027935_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027935_2 "h_stencil.stencil_ops.replace_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027935, VkglTestCase_027935_1, VkglTestCase_027935_2);

#define VkglTestCase_027936_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027936_2 "_stencil.stencil_ops.replace_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027936, VkglTestCase_027936_1, VkglTestCase_027936_2);

#define VkglTestCase_027937_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027937_2 "h_stencil.stencil_ops.replace_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027937, VkglTestCase_027937_1, VkglTestCase_027937_2);

#define VkglTestCase_027938_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027938_2 "h_stencil.stencil_ops.replace_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027938, VkglTestCase_027938_1, VkglTestCase_027938_2);

#define VkglTestCase_027939_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027939_2 "_stencil.stencil_ops.replace_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027939, VkglTestCase_027939_1, VkglTestCase_027939_2);

#define VkglTestCase_027940_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027940_2 "stencil.stencil_ops.replace_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027940, VkglTestCase_027940_1, VkglTestCase_027940_2);

#define VkglTestCase_027941_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027941_2 "stencil.stencil_ops.replace_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027941, VkglTestCase_027941_1, VkglTestCase_027941_2);

#define VkglTestCase_027942_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027942_2 "_stencil.stencil_ops.replace_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027942, VkglTestCase_027942_1, VkglTestCase_027942_2);

#define VkglTestCase_027943_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027943_2 "_stencil.stencil_ops.replace_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027943, VkglTestCase_027943_1, VkglTestCase_027943_2);

#define VkglTestCase_027944_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027944_2 "stencil.stencil_ops.replace_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027944, VkglTestCase_027944_1, VkglTestCase_027944_2);

#define VkglTestCase_027945_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027945_2 "_stencil.stencil_ops.replace_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027945, VkglTestCase_027945_1, VkglTestCase_027945_2);

#define VkglTestCase_027946_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027946_2 "_stencil.stencil_ops.replace_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027946, VkglTestCase_027946_1, VkglTestCase_027946_2);

#define VkglTestCase_027947_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027947_2 "stencil.stencil_ops.replace_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027947, VkglTestCase_027947_1, VkglTestCase_027947_2);

#define VkglTestCase_027948_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027948_2 "tencil.stencil_ops.replace_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027948, VkglTestCase_027948_1, VkglTestCase_027948_2);

#define VkglTestCase_027949_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027949_2 "tencil.stencil_ops.replace_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027949, VkglTestCase_027949_1, VkglTestCase_027949_2);

#define VkglTestCase_027950_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027950_2 "stencil.stencil_ops.replace_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027950, VkglTestCase_027950_1, VkglTestCase_027950_2);

#define VkglTestCase_027951_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027951_2 "stencil.stencil_ops.replace_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027951, VkglTestCase_027951_1, VkglTestCase_027951_2);

#define VkglTestCase_027952_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_027952_2 "encil.stencil_ops.replace_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027952, VkglTestCase_027952_1, VkglTestCase_027952_2);

#define VkglTestCase_027953_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027953_2 "stencil.stencil_ops.replace_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027953, VkglTestCase_027953_1, VkglTestCase_027953_2);

#define VkglTestCase_027954_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027954_2 "stencil.stencil_ops.replace_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027954, VkglTestCase_027954_1, VkglTestCase_027954_2);

#define VkglTestCase_027955_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027955_2 "tencil.stencil_ops.replace_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027955, VkglTestCase_027955_1, VkglTestCase_027955_2);

#define VkglTestCase_027956_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_027956_2 "ncil.stencil_ops.replace_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027956, VkglTestCase_027956_1, VkglTestCase_027956_2);

#define VkglTestCase_027957_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_027957_2 "ncil.stencil_ops.replace_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027957, VkglTestCase_027957_1, VkglTestCase_027957_2);

#define VkglTestCase_027958_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027958_2 "stencil.stencil_ops.replace_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027958, VkglTestCase_027958_1, VkglTestCase_027958_2);

#define VkglTestCase_027959_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027959_2 "stencil.stencil_ops.replace_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027959, VkglTestCase_027959_1, VkglTestCase_027959_2);

#define VkglTestCase_027960_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_027960_2 "encil.stencil_ops.replace_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027960, VkglTestCase_027960_1, VkglTestCase_027960_2);

#define VkglTestCase_027961_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027961_2 "stencil.stencil_ops.replace_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027961, VkglTestCase_027961_1, VkglTestCase_027961_2);

#define VkglTestCase_027962_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027962_2 "stencil.stencil_ops.replace_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027962, VkglTestCase_027962_1, VkglTestCase_027962_2);

#define VkglTestCase_027963_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_027963_2 "tencil.stencil_ops.replace_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027963, VkglTestCase_027963_1, VkglTestCase_027963_2);

#define VkglTestCase_027964_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_027964_2 "ncil.stencil_ops.replace_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027964, VkglTestCase_027964_1, VkglTestCase_027964_2);

#define VkglTestCase_027965_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_027965_2 "ncil.stencil_ops.replace_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027965, VkglTestCase_027965_1, VkglTestCase_027965_2);

#define VkglTestCase_027966_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027966_2 "pth_stencil.stencil_ops.incr_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027966, VkglTestCase_027966_1, VkglTestCase_027966_2);

#define VkglTestCase_027967_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027967_2 "pth_stencil.stencil_ops.incr_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027967, VkglTestCase_027967_1, VkglTestCase_027967_2);

#define VkglTestCase_027968_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027968_2 "h_stencil.stencil_ops.incr_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027968, VkglTestCase_027968_1, VkglTestCase_027968_2);

#define VkglTestCase_027969_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027969_2 "pth_stencil.stencil_ops.incr_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027969, VkglTestCase_027969_1, VkglTestCase_027969_2);

#define VkglTestCase_027970_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027970_2 "pth_stencil.stencil_ops.incr_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027970, VkglTestCase_027970_1, VkglTestCase_027970_2);

#define VkglTestCase_027971_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027971_2 "th_stencil.stencil_ops.incr_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027971, VkglTestCase_027971_1, VkglTestCase_027971_2);

#define VkglTestCase_027972_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027972_2 "_stencil.stencil_ops.incr_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027972, VkglTestCase_027972_1, VkglTestCase_027972_2);

#define VkglTestCase_027973_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027973_2 "_stencil.stencil_ops.incr_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027973, VkglTestCase_027973_1, VkglTestCase_027973_2);

#define VkglTestCase_027974_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027974_2 "pth_stencil.stencil_ops.incr_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027974, VkglTestCase_027974_1, VkglTestCase_027974_2);

#define VkglTestCase_027975_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027975_2 "pth_stencil.stencil_ops.incr_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027975, VkglTestCase_027975_1, VkglTestCase_027975_2);

#define VkglTestCase_027976_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027976_2 "h_stencil.stencil_ops.incr_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027976, VkglTestCase_027976_1, VkglTestCase_027976_2);

#define VkglTestCase_027977_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027977_2 "pth_stencil.stencil_ops.incr_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027977, VkglTestCase_027977_1, VkglTestCase_027977_2);

#define VkglTestCase_027978_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027978_2 "pth_stencil.stencil_ops.incr_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027978, VkglTestCase_027978_1, VkglTestCase_027978_2);

#define VkglTestCase_027979_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027979_2 "th_stencil.stencil_ops.incr_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027979, VkglTestCase_027979_1, VkglTestCase_027979_2);

#define VkglTestCase_027980_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027980_2 "_stencil.stencil_ops.incr_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027980, VkglTestCase_027980_1, VkglTestCase_027980_2);

#define VkglTestCase_027981_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027981_2 "_stencil.stencil_ops.incr_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027981, VkglTestCase_027981_1, VkglTestCase_027981_2);

#define VkglTestCase_027982_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027982_2 "h_stencil.stencil_ops.incr_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027982, VkglTestCase_027982_1, VkglTestCase_027982_2);

#define VkglTestCase_027983_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027983_2 "h_stencil.stencil_ops.incr_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027983, VkglTestCase_027983_1, VkglTestCase_027983_2);

#define VkglTestCase_027984_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027984_2 "_stencil.stencil_ops.incr_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027984, VkglTestCase_027984_1, VkglTestCase_027984_2);

#define VkglTestCase_027985_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027985_2 "h_stencil.stencil_ops.incr_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027985, VkglTestCase_027985_1, VkglTestCase_027985_2);

#define VkglTestCase_027986_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027986_2 "h_stencil.stencil_ops.incr_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027986, VkglTestCase_027986_1, VkglTestCase_027986_2);

#define VkglTestCase_027987_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027987_2 "_stencil.stencil_ops.incr_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027987, VkglTestCase_027987_1, VkglTestCase_027987_2);

#define VkglTestCase_027988_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027988_2 "stencil.stencil_ops.incr_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027988, VkglTestCase_027988_1, VkglTestCase_027988_2);

#define VkglTestCase_027989_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_027989_2 "stencil.stencil_ops.incr_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027989, VkglTestCase_027989_1, VkglTestCase_027989_2);

#define VkglTestCase_027990_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027990_2 "pth_stencil.stencil_ops.incr_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027990, VkglTestCase_027990_1, VkglTestCase_027990_2);

#define VkglTestCase_027991_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027991_2 "pth_stencil.stencil_ops.incr_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027991, VkglTestCase_027991_1, VkglTestCase_027991_2);

#define VkglTestCase_027992_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_027992_2 "h_stencil.stencil_ops.incr_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027992, VkglTestCase_027992_1, VkglTestCase_027992_2);

#define VkglTestCase_027993_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027993_2 "pth_stencil.stencil_ops.incr_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027993, VkglTestCase_027993_1, VkglTestCase_027993_2);

#define VkglTestCase_027994_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027994_2 "pth_stencil.stencil_ops.incr_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027994, VkglTestCase_027994_1, VkglTestCase_027994_2);

#define VkglTestCase_027995_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_027995_2 "th_stencil.stencil_ops.incr_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027995, VkglTestCase_027995_1, VkglTestCase_027995_2);

#define VkglTestCase_027996_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027996_2 "_stencil.stencil_ops.incr_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027996, VkglTestCase_027996_1, VkglTestCase_027996_2);

#define VkglTestCase_027997_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_027997_2 "_stencil.stencil_ops.incr_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027997, VkglTestCase_027997_1, VkglTestCase_027997_2);

#define VkglTestCase_027998_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027998_2 "pth_stencil.stencil_ops.incr_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027998, VkglTestCase_027998_1, VkglTestCase_027998_2);

#define VkglTestCase_027999_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_027999_2 "pth_stencil.stencil_ops.incr_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027999, VkglTestCase_027999_1, VkglTestCase_027999_2);

#define VkglTestCase_028000_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028000_2 "h_stencil.stencil_ops.incr_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028000, VkglTestCase_028000_1, VkglTestCase_028000_2);

#define VkglTestCase_028001_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028001_2 "pth_stencil.stencil_ops.incr_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028001, VkglTestCase_028001_1, VkglTestCase_028001_2);

#define VkglTestCase_028002_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028002_2 "pth_stencil.stencil_ops.incr_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028002, VkglTestCase_028002_1, VkglTestCase_028002_2);

#define VkglTestCase_028003_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028003_2 "th_stencil.stencil_ops.incr_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028003, VkglTestCase_028003_1, VkglTestCase_028003_2);

#define VkglTestCase_028004_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028004_2 "_stencil.stencil_ops.incr_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028004, VkglTestCase_028004_1, VkglTestCase_028004_2);

#define VkglTestCase_028005_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028005_2 "_stencil.stencil_ops.incr_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028005, VkglTestCase_028005_1, VkglTestCase_028005_2);

#define VkglTestCase_028006_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028006_2 "th_stencil.stencil_ops.incr_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028006, VkglTestCase_028006_1, VkglTestCase_028006_2);

#define VkglTestCase_028007_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028007_2 "th_stencil.stencil_ops.incr_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028007, VkglTestCase_028007_1, VkglTestCase_028007_2);

#define VkglTestCase_028008_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028008_2 "_stencil.stencil_ops.incr_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028008, VkglTestCase_028008_1, VkglTestCase_028008_2);

#define VkglTestCase_028009_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028009_2 "th_stencil.stencil_ops.incr_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028009, VkglTestCase_028009_1, VkglTestCase_028009_2);

#define VkglTestCase_028010_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028010_2 "th_stencil.stencil_ops.incr_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028010, VkglTestCase_028010_1, VkglTestCase_028010_2);

#define VkglTestCase_028011_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028011_2 "h_stencil.stencil_ops.incr_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028011, VkglTestCase_028011_1, VkglTestCase_028011_2);

#define VkglTestCase_028012_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028012_2 "stencil.stencil_ops.incr_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028012, VkglTestCase_028012_1, VkglTestCase_028012_2);

#define VkglTestCase_028013_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028013_2 "stencil.stencil_ops.incr_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028013, VkglTestCase_028013_1, VkglTestCase_028013_2);

#define VkglTestCase_028014_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028014_2 "_stencil.stencil_ops.incr_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028014, VkglTestCase_028014_1, VkglTestCase_028014_2);

#define VkglTestCase_028015_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028015_2 "_stencil.stencil_ops.incr_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028015, VkglTestCase_028015_1, VkglTestCase_028015_2);

#define VkglTestCase_028016_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028016_2 "stencil.stencil_ops.incr_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028016, VkglTestCase_028016_1, VkglTestCase_028016_2);

#define VkglTestCase_028017_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028017_2 "_stencil.stencil_ops.incr_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028017, VkglTestCase_028017_1, VkglTestCase_028017_2);

#define VkglTestCase_028018_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028018_2 "_stencil.stencil_ops.incr_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028018, VkglTestCase_028018_1, VkglTestCase_028018_2);

#define VkglTestCase_028019_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028019_2 "stencil.stencil_ops.incr_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028019, VkglTestCase_028019_1, VkglTestCase_028019_2);

#define VkglTestCase_028020_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028020_2 "tencil.stencil_ops.incr_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028020, VkglTestCase_028020_1, VkglTestCase_028020_2);

#define VkglTestCase_028021_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028021_2 "tencil.stencil_ops.incr_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028021, VkglTestCase_028021_1, VkglTestCase_028021_2);

#define VkglTestCase_028022_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028022_2 "_stencil.stencil_ops.incr_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028022, VkglTestCase_028022_1, VkglTestCase_028022_2);

#define VkglTestCase_028023_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028023_2 "_stencil.stencil_ops.incr_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028023, VkglTestCase_028023_1, VkglTestCase_028023_2);

#define VkglTestCase_028024_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028024_2 "stencil.stencil_ops.incr_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028024, VkglTestCase_028024_1, VkglTestCase_028024_2);

#define VkglTestCase_028025_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028025_2 "_stencil.stencil_ops.incr_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028025, VkglTestCase_028025_1, VkglTestCase_028025_2);

#define VkglTestCase_028026_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028026_2 "_stencil.stencil_ops.incr_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028026, VkglTestCase_028026_1, VkglTestCase_028026_2);

#define VkglTestCase_028027_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028027_2 "stencil.stencil_ops.incr_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028027, VkglTestCase_028027_1, VkglTestCase_028027_2);

#define VkglTestCase_028028_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028028_2 "tencil.stencil_ops.incr_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028028, VkglTestCase_028028_1, VkglTestCase_028028_2);

#define VkglTestCase_028029_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028029_2 "tencil.stencil_ops.incr_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028029, VkglTestCase_028029_1, VkglTestCase_028029_2);

#define VkglTestCase_028030_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028030_2 "pth_stencil.stencil_ops.decr_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028030, VkglTestCase_028030_1, VkglTestCase_028030_2);

#define VkglTestCase_028031_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028031_2 "pth_stencil.stencil_ops.decr_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028031, VkglTestCase_028031_1, VkglTestCase_028031_2);

#define VkglTestCase_028032_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028032_2 "h_stencil.stencil_ops.decr_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028032, VkglTestCase_028032_1, VkglTestCase_028032_2);

#define VkglTestCase_028033_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028033_2 "pth_stencil.stencil_ops.decr_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028033, VkglTestCase_028033_1, VkglTestCase_028033_2);

#define VkglTestCase_028034_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028034_2 "pth_stencil.stencil_ops.decr_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028034, VkglTestCase_028034_1, VkglTestCase_028034_2);

#define VkglTestCase_028035_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028035_2 "th_stencil.stencil_ops.decr_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028035, VkglTestCase_028035_1, VkglTestCase_028035_2);

#define VkglTestCase_028036_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028036_2 "_stencil.stencil_ops.decr_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028036, VkglTestCase_028036_1, VkglTestCase_028036_2);

#define VkglTestCase_028037_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028037_2 "_stencil.stencil_ops.decr_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028037, VkglTestCase_028037_1, VkglTestCase_028037_2);

#define VkglTestCase_028038_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028038_2 "pth_stencil.stencil_ops.decr_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028038, VkglTestCase_028038_1, VkglTestCase_028038_2);

#define VkglTestCase_028039_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028039_2 "pth_stencil.stencil_ops.decr_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028039, VkglTestCase_028039_1, VkglTestCase_028039_2);

#define VkglTestCase_028040_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028040_2 "h_stencil.stencil_ops.decr_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028040, VkglTestCase_028040_1, VkglTestCase_028040_2);

#define VkglTestCase_028041_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028041_2 "pth_stencil.stencil_ops.decr_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028041, VkglTestCase_028041_1, VkglTestCase_028041_2);

#define VkglTestCase_028042_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028042_2 "pth_stencil.stencil_ops.decr_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028042, VkglTestCase_028042_1, VkglTestCase_028042_2);

#define VkglTestCase_028043_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028043_2 "th_stencil.stencil_ops.decr_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028043, VkglTestCase_028043_1, VkglTestCase_028043_2);

#define VkglTestCase_028044_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028044_2 "_stencil.stencil_ops.decr_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028044, VkglTestCase_028044_1, VkglTestCase_028044_2);

#define VkglTestCase_028045_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028045_2 "_stencil.stencil_ops.decr_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028045, VkglTestCase_028045_1, VkglTestCase_028045_2);

#define VkglTestCase_028046_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028046_2 "h_stencil.stencil_ops.decr_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028046, VkglTestCase_028046_1, VkglTestCase_028046_2);

#define VkglTestCase_028047_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028047_2 "h_stencil.stencil_ops.decr_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028047, VkglTestCase_028047_1, VkglTestCase_028047_2);

#define VkglTestCase_028048_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028048_2 "_stencil.stencil_ops.decr_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028048, VkglTestCase_028048_1, VkglTestCase_028048_2);

#define VkglTestCase_028049_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028049_2 "h_stencil.stencil_ops.decr_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028049, VkglTestCase_028049_1, VkglTestCase_028049_2);

#define VkglTestCase_028050_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028050_2 "h_stencil.stencil_ops.decr_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028050, VkglTestCase_028050_1, VkglTestCase_028050_2);

#define VkglTestCase_028051_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028051_2 "_stencil.stencil_ops.decr_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028051, VkglTestCase_028051_1, VkglTestCase_028051_2);

#define VkglTestCase_028052_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028052_2 "stencil.stencil_ops.decr_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028052, VkglTestCase_028052_1, VkglTestCase_028052_2);

#define VkglTestCase_028053_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028053_2 "stencil.stencil_ops.decr_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028053, VkglTestCase_028053_1, VkglTestCase_028053_2);

#define VkglTestCase_028054_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028054_2 "pth_stencil.stencil_ops.decr_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028054, VkglTestCase_028054_1, VkglTestCase_028054_2);

#define VkglTestCase_028055_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028055_2 "pth_stencil.stencil_ops.decr_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028055, VkglTestCase_028055_1, VkglTestCase_028055_2);

#define VkglTestCase_028056_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028056_2 "h_stencil.stencil_ops.decr_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028056, VkglTestCase_028056_1, VkglTestCase_028056_2);

#define VkglTestCase_028057_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028057_2 "pth_stencil.stencil_ops.decr_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028057, VkglTestCase_028057_1, VkglTestCase_028057_2);

#define VkglTestCase_028058_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028058_2 "pth_stencil.stencil_ops.decr_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028058, VkglTestCase_028058_1, VkglTestCase_028058_2);

#define VkglTestCase_028059_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028059_2 "th_stencil.stencil_ops.decr_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028059, VkglTestCase_028059_1, VkglTestCase_028059_2);

#define VkglTestCase_028060_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028060_2 "_stencil.stencil_ops.decr_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028060, VkglTestCase_028060_1, VkglTestCase_028060_2);

#define VkglTestCase_028061_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028061_2 "_stencil.stencil_ops.decr_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028061, VkglTestCase_028061_1, VkglTestCase_028061_2);

#define VkglTestCase_028062_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028062_2 "pth_stencil.stencil_ops.decr_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028062, VkglTestCase_028062_1, VkglTestCase_028062_2);

#define VkglTestCase_028063_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028063_2 "pth_stencil.stencil_ops.decr_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028063, VkglTestCase_028063_1, VkglTestCase_028063_2);

#define VkglTestCase_028064_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028064_2 "h_stencil.stencil_ops.decr_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028064, VkglTestCase_028064_1, VkglTestCase_028064_2);

#define VkglTestCase_028065_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028065_2 "pth_stencil.stencil_ops.decr_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028065, VkglTestCase_028065_1, VkglTestCase_028065_2);

#define VkglTestCase_028066_1 "dEQP-GLES3.functional.fragment_ops.de"
#define VkglTestCase_028066_2 "pth_stencil.stencil_ops.decr_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028066, VkglTestCase_028066_1, VkglTestCase_028066_2);

#define VkglTestCase_028067_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028067_2 "th_stencil.stencil_ops.decr_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028067, VkglTestCase_028067_1, VkglTestCase_028067_2);

#define VkglTestCase_028068_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028068_2 "_stencil.stencil_ops.decr_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028068, VkglTestCase_028068_1, VkglTestCase_028068_2);

#define VkglTestCase_028069_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028069_2 "_stencil.stencil_ops.decr_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028069, VkglTestCase_028069_1, VkglTestCase_028069_2);

#define VkglTestCase_028070_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028070_2 "th_stencil.stencil_ops.decr_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028070, VkglTestCase_028070_1, VkglTestCase_028070_2);

#define VkglTestCase_028071_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028071_2 "th_stencil.stencil_ops.decr_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028071, VkglTestCase_028071_1, VkglTestCase_028071_2);

#define VkglTestCase_028072_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028072_2 "_stencil.stencil_ops.decr_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028072, VkglTestCase_028072_1, VkglTestCase_028072_2);

#define VkglTestCase_028073_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028073_2 "th_stencil.stencil_ops.decr_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028073, VkglTestCase_028073_1, VkglTestCase_028073_2);

#define VkglTestCase_028074_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028074_2 "th_stencil.stencil_ops.decr_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028074, VkglTestCase_028074_1, VkglTestCase_028074_2);

#define VkglTestCase_028075_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028075_2 "h_stencil.stencil_ops.decr_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028075, VkglTestCase_028075_1, VkglTestCase_028075_2);

#define VkglTestCase_028076_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028076_2 "stencil.stencil_ops.decr_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028076, VkglTestCase_028076_1, VkglTestCase_028076_2);

#define VkglTestCase_028077_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028077_2 "stencil.stencil_ops.decr_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028077, VkglTestCase_028077_1, VkglTestCase_028077_2);

#define VkglTestCase_028078_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028078_2 "_stencil.stencil_ops.decr_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028078, VkglTestCase_028078_1, VkglTestCase_028078_2);

#define VkglTestCase_028079_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028079_2 "_stencil.stencil_ops.decr_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028079, VkglTestCase_028079_1, VkglTestCase_028079_2);

#define VkglTestCase_028080_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028080_2 "stencil.stencil_ops.decr_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028080, VkglTestCase_028080_1, VkglTestCase_028080_2);

#define VkglTestCase_028081_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028081_2 "_stencil.stencil_ops.decr_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028081, VkglTestCase_028081_1, VkglTestCase_028081_2);

#define VkglTestCase_028082_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028082_2 "_stencil.stencil_ops.decr_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028082, VkglTestCase_028082_1, VkglTestCase_028082_2);

#define VkglTestCase_028083_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028083_2 "stencil.stencil_ops.decr_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028083, VkglTestCase_028083_1, VkglTestCase_028083_2);

#define VkglTestCase_028084_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028084_2 "tencil.stencil_ops.decr_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028084, VkglTestCase_028084_1, VkglTestCase_028084_2);

#define VkglTestCase_028085_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028085_2 "tencil.stencil_ops.decr_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028085, VkglTestCase_028085_1, VkglTestCase_028085_2);

#define VkglTestCase_028086_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028086_2 "_stencil.stencil_ops.decr_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028086, VkglTestCase_028086_1, VkglTestCase_028086_2);

#define VkglTestCase_028087_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028087_2 "_stencil.stencil_ops.decr_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028087, VkglTestCase_028087_1, VkglTestCase_028087_2);

#define VkglTestCase_028088_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028088_2 "stencil.stencil_ops.decr_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028088, VkglTestCase_028088_1, VkglTestCase_028088_2);

#define VkglTestCase_028089_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028089_2 "_stencil.stencil_ops.decr_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028089, VkglTestCase_028089_1, VkglTestCase_028089_2);

#define VkglTestCase_028090_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028090_2 "_stencil.stencil_ops.decr_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028090, VkglTestCase_028090_1, VkglTestCase_028090_2);

#define VkglTestCase_028091_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028091_2 "stencil.stencil_ops.decr_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028091, VkglTestCase_028091_1, VkglTestCase_028091_2);

#define VkglTestCase_028092_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028092_2 "tencil.stencil_ops.decr_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028092, VkglTestCase_028092_1, VkglTestCase_028092_2);

#define VkglTestCase_028093_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028093_2 "tencil.stencil_ops.decr_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028093, VkglTestCase_028093_1, VkglTestCase_028093_2);

#define VkglTestCase_028094_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028094_2 "th_stencil.stencil_ops.invert_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028094, VkglTestCase_028094_1, VkglTestCase_028094_2);

#define VkglTestCase_028095_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028095_2 "th_stencil.stencil_ops.invert_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028095, VkglTestCase_028095_1, VkglTestCase_028095_2);

#define VkglTestCase_028096_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028096_2 "_stencil.stencil_ops.invert_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028096, VkglTestCase_028096_1, VkglTestCase_028096_2);

#define VkglTestCase_028097_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028097_2 "th_stencil.stencil_ops.invert_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028097, VkglTestCase_028097_1, VkglTestCase_028097_2);

#define VkglTestCase_028098_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028098_2 "th_stencil.stencil_ops.invert_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028098, VkglTestCase_028098_1, VkglTestCase_028098_2);

#define VkglTestCase_028099_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028099_2 "h_stencil.stencil_ops.invert_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028099, VkglTestCase_028099_1, VkglTestCase_028099_2);

#define VkglTestCase_028100_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028100_2 "stencil.stencil_ops.invert_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028100, VkglTestCase_028100_1, VkglTestCase_028100_2);

#define VkglTestCase_028101_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028101_2 "stencil.stencil_ops.invert_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028101, VkglTestCase_028101_1, VkglTestCase_028101_2);

#define VkglTestCase_028102_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028102_2 "th_stencil.stencil_ops.invert_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028102, VkglTestCase_028102_1, VkglTestCase_028102_2);

#define VkglTestCase_028103_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028103_2 "th_stencil.stencil_ops.invert_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028103, VkglTestCase_028103_1, VkglTestCase_028103_2);

#define VkglTestCase_028104_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028104_2 "_stencil.stencil_ops.invert_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028104, VkglTestCase_028104_1, VkglTestCase_028104_2);

#define VkglTestCase_028105_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028105_2 "th_stencil.stencil_ops.invert_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028105, VkglTestCase_028105_1, VkglTestCase_028105_2);

#define VkglTestCase_028106_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028106_2 "th_stencil.stencil_ops.invert_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028106, VkglTestCase_028106_1, VkglTestCase_028106_2);

#define VkglTestCase_028107_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028107_2 "h_stencil.stencil_ops.invert_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028107, VkglTestCase_028107_1, VkglTestCase_028107_2);

#define VkglTestCase_028108_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028108_2 "stencil.stencil_ops.invert_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028108, VkglTestCase_028108_1, VkglTestCase_028108_2);

#define VkglTestCase_028109_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028109_2 "stencil.stencil_ops.invert_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028109, VkglTestCase_028109_1, VkglTestCase_028109_2);

#define VkglTestCase_028110_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028110_2 "_stencil.stencil_ops.invert_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028110, VkglTestCase_028110_1, VkglTestCase_028110_2);

#define VkglTestCase_028111_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028111_2 "_stencil.stencil_ops.invert_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028111, VkglTestCase_028111_1, VkglTestCase_028111_2);

#define VkglTestCase_028112_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028112_2 "stencil.stencil_ops.invert_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028112, VkglTestCase_028112_1, VkglTestCase_028112_2);

#define VkglTestCase_028113_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028113_2 "_stencil.stencil_ops.invert_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028113, VkglTestCase_028113_1, VkglTestCase_028113_2);

#define VkglTestCase_028114_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028114_2 "_stencil.stencil_ops.invert_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028114, VkglTestCase_028114_1, VkglTestCase_028114_2);

#define VkglTestCase_028115_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028115_2 "stencil.stencil_ops.invert_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028115, VkglTestCase_028115_1, VkglTestCase_028115_2);

#define VkglTestCase_028116_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028116_2 "tencil.stencil_ops.invert_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028116, VkglTestCase_028116_1, VkglTestCase_028116_2);

#define VkglTestCase_028117_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028117_2 "tencil.stencil_ops.invert_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028117, VkglTestCase_028117_1, VkglTestCase_028117_2);

#define VkglTestCase_028118_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028118_2 "th_stencil.stencil_ops.invert_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028118, VkglTestCase_028118_1, VkglTestCase_028118_2);

#define VkglTestCase_028119_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028119_2 "th_stencil.stencil_ops.invert_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028119, VkglTestCase_028119_1, VkglTestCase_028119_2);

#define VkglTestCase_028120_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028120_2 "_stencil.stencil_ops.invert_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028120, VkglTestCase_028120_1, VkglTestCase_028120_2);

#define VkglTestCase_028121_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028121_2 "th_stencil.stencil_ops.invert_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028121, VkglTestCase_028121_1, VkglTestCase_028121_2);

#define VkglTestCase_028122_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028122_2 "th_stencil.stencil_ops.invert_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028122, VkglTestCase_028122_1, VkglTestCase_028122_2);

#define VkglTestCase_028123_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028123_2 "h_stencil.stencil_ops.invert_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028123, VkglTestCase_028123_1, VkglTestCase_028123_2);

#define VkglTestCase_028124_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028124_2 "stencil.stencil_ops.invert_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028124, VkglTestCase_028124_1, VkglTestCase_028124_2);

#define VkglTestCase_028125_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028125_2 "stencil.stencil_ops.invert_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028125, VkglTestCase_028125_1, VkglTestCase_028125_2);

#define VkglTestCase_028126_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028126_2 "th_stencil.stencil_ops.invert_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028126, VkglTestCase_028126_1, VkglTestCase_028126_2);

#define VkglTestCase_028127_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028127_2 "th_stencil.stencil_ops.invert_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028127, VkglTestCase_028127_1, VkglTestCase_028127_2);

#define VkglTestCase_028128_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028128_2 "_stencil.stencil_ops.invert_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028128, VkglTestCase_028128_1, VkglTestCase_028128_2);

#define VkglTestCase_028129_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028129_2 "th_stencil.stencil_ops.invert_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028129, VkglTestCase_028129_1, VkglTestCase_028129_2);

#define VkglTestCase_028130_1 "dEQP-GLES3.functional.fragment_ops.dep"
#define VkglTestCase_028130_2 "th_stencil.stencil_ops.invert_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028130, VkglTestCase_028130_1, VkglTestCase_028130_2);

#define VkglTestCase_028131_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028131_2 "h_stencil.stencil_ops.invert_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028131, VkglTestCase_028131_1, VkglTestCase_028131_2);

#define VkglTestCase_028132_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028132_2 "stencil.stencil_ops.invert_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028132, VkglTestCase_028132_1, VkglTestCase_028132_2);

#define VkglTestCase_028133_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028133_2 "stencil.stencil_ops.invert_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028133, VkglTestCase_028133_1, VkglTestCase_028133_2);

#define VkglTestCase_028134_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028134_2 "h_stencil.stencil_ops.invert_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028134, VkglTestCase_028134_1, VkglTestCase_028134_2);

#define VkglTestCase_028135_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028135_2 "h_stencil.stencil_ops.invert_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028135, VkglTestCase_028135_1, VkglTestCase_028135_2);

#define VkglTestCase_028136_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028136_2 "stencil.stencil_ops.invert_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028136, VkglTestCase_028136_1, VkglTestCase_028136_2);

#define VkglTestCase_028137_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028137_2 "h_stencil.stencil_ops.invert_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028137, VkglTestCase_028137_1, VkglTestCase_028137_2);

#define VkglTestCase_028138_1 "dEQP-GLES3.functional.fragment_ops.dept"
#define VkglTestCase_028138_2 "h_stencil.stencil_ops.invert_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028138, VkglTestCase_028138_1, VkglTestCase_028138_2);

#define VkglTestCase_028139_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028139_2 "_stencil.stencil_ops.invert_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028139, VkglTestCase_028139_1, VkglTestCase_028139_2);

#define VkglTestCase_028140_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028140_2 "tencil.stencil_ops.invert_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028140, VkglTestCase_028140_1, VkglTestCase_028140_2);

#define VkglTestCase_028141_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028141_2 "tencil.stencil_ops.invert_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028141, VkglTestCase_028141_1, VkglTestCase_028141_2);

#define VkglTestCase_028142_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028142_2 "stencil.stencil_ops.invert_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028142, VkglTestCase_028142_1, VkglTestCase_028142_2);

#define VkglTestCase_028143_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028143_2 "stencil.stencil_ops.invert_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028143, VkglTestCase_028143_1, VkglTestCase_028143_2);

#define VkglTestCase_028144_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028144_2 "tencil.stencil_ops.invert_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028144, VkglTestCase_028144_1, VkglTestCase_028144_2);

#define VkglTestCase_028145_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028145_2 "stencil.stencil_ops.invert_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028145, VkglTestCase_028145_1, VkglTestCase_028145_2);

#define VkglTestCase_028146_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028146_2 "stencil.stencil_ops.invert_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028146, VkglTestCase_028146_1, VkglTestCase_028146_2);

#define VkglTestCase_028147_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028147_2 "tencil.stencil_ops.invert_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028147, VkglTestCase_028147_1, VkglTestCase_028147_2);

#define VkglTestCase_028148_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028148_2 "encil.stencil_ops.invert_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028148, VkglTestCase_028148_1, VkglTestCase_028148_2);

#define VkglTestCase_028149_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028149_2 "encil.stencil_ops.invert_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028149, VkglTestCase_028149_1, VkglTestCase_028149_2);

#define VkglTestCase_028150_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028150_2 "stencil.stencil_ops.invert_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028150, VkglTestCase_028150_1, VkglTestCase_028150_2);

#define VkglTestCase_028151_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028151_2 "stencil.stencil_ops.invert_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028151, VkglTestCase_028151_1, VkglTestCase_028151_2);

#define VkglTestCase_028152_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028152_2 "tencil.stencil_ops.invert_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028152, VkglTestCase_028152_1, VkglTestCase_028152_2);

#define VkglTestCase_028153_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028153_2 "stencil.stencil_ops.invert_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028153, VkglTestCase_028153_1, VkglTestCase_028153_2);

#define VkglTestCase_028154_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028154_2 "stencil.stencil_ops.invert_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028154, VkglTestCase_028154_1, VkglTestCase_028154_2);

#define VkglTestCase_028155_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028155_2 "tencil.stencil_ops.invert_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028155, VkglTestCase_028155_1, VkglTestCase_028155_2);

#define VkglTestCase_028156_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028156_2 "encil.stencil_ops.invert_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028156, VkglTestCase_028156_1, VkglTestCase_028156_2);

#define VkglTestCase_028157_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028157_2 "encil.stencil_ops.invert_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028157, VkglTestCase_028157_1, VkglTestCase_028157_2);

#define VkglTestCase_028158_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028158_2 "_stencil.stencil_ops.incr_wrap_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028158, VkglTestCase_028158_1, VkglTestCase_028158_2);

#define VkglTestCase_028159_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028159_2 "_stencil.stencil_ops.incr_wrap_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028159, VkglTestCase_028159_1, VkglTestCase_028159_2);

#define VkglTestCase_028160_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028160_2 "stencil.stencil_ops.incr_wrap_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028160, VkglTestCase_028160_1, VkglTestCase_028160_2);

#define VkglTestCase_028161_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028161_2 "_stencil.stencil_ops.incr_wrap_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028161, VkglTestCase_028161_1, VkglTestCase_028161_2);

#define VkglTestCase_028162_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028162_2 "_stencil.stencil_ops.incr_wrap_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028162, VkglTestCase_028162_1, VkglTestCase_028162_2);

#define VkglTestCase_028163_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028163_2 "stencil.stencil_ops.incr_wrap_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028163, VkglTestCase_028163_1, VkglTestCase_028163_2);

#define VkglTestCase_028164_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028164_2 "tencil.stencil_ops.incr_wrap_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028164, VkglTestCase_028164_1, VkglTestCase_028164_2);

#define VkglTestCase_028165_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028165_2 "tencil.stencil_ops.incr_wrap_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028165, VkglTestCase_028165_1, VkglTestCase_028165_2);

#define VkglTestCase_028166_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028166_2 "_stencil.stencil_ops.incr_wrap_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028166, VkglTestCase_028166_1, VkglTestCase_028166_2);

#define VkglTestCase_028167_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028167_2 "_stencil.stencil_ops.incr_wrap_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028167, VkglTestCase_028167_1, VkglTestCase_028167_2);

#define VkglTestCase_028168_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028168_2 "stencil.stencil_ops.incr_wrap_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028168, VkglTestCase_028168_1, VkglTestCase_028168_2);

#define VkglTestCase_028169_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028169_2 "_stencil.stencil_ops.incr_wrap_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028169, VkglTestCase_028169_1, VkglTestCase_028169_2);

#define VkglTestCase_028170_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028170_2 "_stencil.stencil_ops.incr_wrap_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028170, VkglTestCase_028170_1, VkglTestCase_028170_2);

#define VkglTestCase_028171_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028171_2 "stencil.stencil_ops.incr_wrap_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028171, VkglTestCase_028171_1, VkglTestCase_028171_2);

#define VkglTestCase_028172_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028172_2 "tencil.stencil_ops.incr_wrap_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028172, VkglTestCase_028172_1, VkglTestCase_028172_2);

#define VkglTestCase_028173_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028173_2 "tencil.stencil_ops.incr_wrap_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028173, VkglTestCase_028173_1, VkglTestCase_028173_2);

#define VkglTestCase_028174_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028174_2 "stencil.stencil_ops.incr_wrap_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028174, VkglTestCase_028174_1, VkglTestCase_028174_2);

#define VkglTestCase_028175_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028175_2 "stencil.stencil_ops.incr_wrap_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028175, VkglTestCase_028175_1, VkglTestCase_028175_2);

#define VkglTestCase_028176_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028176_2 "encil.stencil_ops.incr_wrap_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028176, VkglTestCase_028176_1, VkglTestCase_028176_2);

#define VkglTestCase_028177_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028177_2 "stencil.stencil_ops.incr_wrap_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028177, VkglTestCase_028177_1, VkglTestCase_028177_2);

#define VkglTestCase_028178_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028178_2 "stencil.stencil_ops.incr_wrap_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028178, VkglTestCase_028178_1, VkglTestCase_028178_2);

#define VkglTestCase_028179_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028179_2 "tencil.stencil_ops.incr_wrap_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028179, VkglTestCase_028179_1, VkglTestCase_028179_2);

#define VkglTestCase_028180_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028180_2 "ncil.stencil_ops.incr_wrap_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028180, VkglTestCase_028180_1, VkglTestCase_028180_2);

#define VkglTestCase_028181_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028181_2 "ncil.stencil_ops.incr_wrap_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028181, VkglTestCase_028181_1, VkglTestCase_028181_2);

#define VkglTestCase_028182_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028182_2 "_stencil.stencil_ops.incr_wrap_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028182, VkglTestCase_028182_1, VkglTestCase_028182_2);

#define VkglTestCase_028183_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028183_2 "_stencil.stencil_ops.incr_wrap_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028183, VkglTestCase_028183_1, VkglTestCase_028183_2);

#define VkglTestCase_028184_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028184_2 "stencil.stencil_ops.incr_wrap_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028184, VkglTestCase_028184_1, VkglTestCase_028184_2);

#define VkglTestCase_028185_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028185_2 "_stencil.stencil_ops.incr_wrap_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028185, VkglTestCase_028185_1, VkglTestCase_028185_2);

#define VkglTestCase_028186_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028186_2 "_stencil.stencil_ops.incr_wrap_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028186, VkglTestCase_028186_1, VkglTestCase_028186_2);

#define VkglTestCase_028187_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028187_2 "stencil.stencil_ops.incr_wrap_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028187, VkglTestCase_028187_1, VkglTestCase_028187_2);

#define VkglTestCase_028188_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028188_2 "tencil.stencil_ops.incr_wrap_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028188, VkglTestCase_028188_1, VkglTestCase_028188_2);

#define VkglTestCase_028189_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028189_2 "tencil.stencil_ops.incr_wrap_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028189, VkglTestCase_028189_1, VkglTestCase_028189_2);

#define VkglTestCase_028190_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028190_2 "_stencil.stencil_ops.incr_wrap_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028190, VkglTestCase_028190_1, VkglTestCase_028190_2);

#define VkglTestCase_028191_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028191_2 "_stencil.stencil_ops.incr_wrap_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028191, VkglTestCase_028191_1, VkglTestCase_028191_2);

#define VkglTestCase_028192_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028192_2 "stencil.stencil_ops.incr_wrap_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028192, VkglTestCase_028192_1, VkglTestCase_028192_2);

#define VkglTestCase_028193_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028193_2 "_stencil.stencil_ops.incr_wrap_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028193, VkglTestCase_028193_1, VkglTestCase_028193_2);

#define VkglTestCase_028194_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028194_2 "_stencil.stencil_ops.incr_wrap_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028194, VkglTestCase_028194_1, VkglTestCase_028194_2);

#define VkglTestCase_028195_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028195_2 "stencil.stencil_ops.incr_wrap_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028195, VkglTestCase_028195_1, VkglTestCase_028195_2);

#define VkglTestCase_028196_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028196_2 "tencil.stencil_ops.incr_wrap_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028196, VkglTestCase_028196_1, VkglTestCase_028196_2);

#define VkglTestCase_028197_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028197_2 "tencil.stencil_ops.incr_wrap_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028197, VkglTestCase_028197_1, VkglTestCase_028197_2);

#define VkglTestCase_028198_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028198_2 "stencil.stencil_ops.incr_wrap_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028198, VkglTestCase_028198_1, VkglTestCase_028198_2);

#define VkglTestCase_028199_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028199_2 "stencil.stencil_ops.incr_wrap_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028199, VkglTestCase_028199_1, VkglTestCase_028199_2);

#define VkglTestCase_028200_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028200_2 "tencil.stencil_ops.incr_wrap_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028200, VkglTestCase_028200_1, VkglTestCase_028200_2);

#define VkglTestCase_028201_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028201_2 "stencil.stencil_ops.incr_wrap_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028201, VkglTestCase_028201_1, VkglTestCase_028201_2);

#define VkglTestCase_028202_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028202_2 "stencil.stencil_ops.incr_wrap_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028202, VkglTestCase_028202_1, VkglTestCase_028202_2);

#define VkglTestCase_028203_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028203_2 "tencil.stencil_ops.incr_wrap_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028203, VkglTestCase_028203_1, VkglTestCase_028203_2);

#define VkglTestCase_028204_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028204_2 "encil.stencil_ops.incr_wrap_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028204, VkglTestCase_028204_1, VkglTestCase_028204_2);

#define VkglTestCase_028205_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028205_2 "encil.stencil_ops.incr_wrap_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028205, VkglTestCase_028205_1, VkglTestCase_028205_2);

#define VkglTestCase_028206_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028206_2 "tencil.stencil_ops.incr_wrap_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028206, VkglTestCase_028206_1, VkglTestCase_028206_2);

#define VkglTestCase_028207_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028207_2 "tencil.stencil_ops.incr_wrap_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028207, VkglTestCase_028207_1, VkglTestCase_028207_2);

#define VkglTestCase_028208_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028208_2 "ncil.stencil_ops.incr_wrap_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028208, VkglTestCase_028208_1, VkglTestCase_028208_2);

#define VkglTestCase_028209_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028209_2 "tencil.stencil_ops.incr_wrap_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028209, VkglTestCase_028209_1, VkglTestCase_028209_2);

#define VkglTestCase_028210_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028210_2 "tencil.stencil_ops.incr_wrap_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028210, VkglTestCase_028210_1, VkglTestCase_028210_2);

#define VkglTestCase_028211_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028211_2 "encil.stencil_ops.incr_wrap_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028211, VkglTestCase_028211_1, VkglTestCase_028211_2);

#define VkglTestCase_028212_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028212_2 "cil.stencil_ops.incr_wrap_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028212, VkglTestCase_028212_1, VkglTestCase_028212_2);

#define VkglTestCase_028213_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028213_2 "cil.stencil_ops.incr_wrap_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028213, VkglTestCase_028213_1, VkglTestCase_028213_2);

#define VkglTestCase_028214_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028214_2 "tencil.stencil_ops.incr_wrap_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028214, VkglTestCase_028214_1, VkglTestCase_028214_2);

#define VkglTestCase_028215_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028215_2 "tencil.stencil_ops.incr_wrap_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028215, VkglTestCase_028215_1, VkglTestCase_028215_2);

#define VkglTestCase_028216_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028216_2 "ncil.stencil_ops.incr_wrap_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028216, VkglTestCase_028216_1, VkglTestCase_028216_2);

#define VkglTestCase_028217_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028217_2 "tencil.stencil_ops.incr_wrap_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028217, VkglTestCase_028217_1, VkglTestCase_028217_2);

#define VkglTestCase_028218_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028218_2 "tencil.stencil_ops.incr_wrap_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028218, VkglTestCase_028218_1, VkglTestCase_028218_2);

#define VkglTestCase_028219_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028219_2 "encil.stencil_ops.incr_wrap_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028219, VkglTestCase_028219_1, VkglTestCase_028219_2);

#define VkglTestCase_028220_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028220_2 "cil.stencil_ops.incr_wrap_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028220, VkglTestCase_028220_1, VkglTestCase_028220_2);

#define VkglTestCase_028221_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028221_2 "cil.stencil_ops.incr_wrap_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028221, VkglTestCase_028221_1, VkglTestCase_028221_2);

#define VkglTestCase_028222_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028222_2 "_stencil.stencil_ops.decr_wrap_keep_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028222, VkglTestCase_028222_1, VkglTestCase_028222_2);

#define VkglTestCase_028223_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028223_2 "_stencil.stencil_ops.decr_wrap_keep_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028223, VkglTestCase_028223_1, VkglTestCase_028223_2);

#define VkglTestCase_028224_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028224_2 "stencil.stencil_ops.decr_wrap_keep_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028224, VkglTestCase_028224_1, VkglTestCase_028224_2);

#define VkglTestCase_028225_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028225_2 "_stencil.stencil_ops.decr_wrap_keep_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028225, VkglTestCase_028225_1, VkglTestCase_028225_2);

#define VkglTestCase_028226_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028226_2 "_stencil.stencil_ops.decr_wrap_keep_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028226, VkglTestCase_028226_1, VkglTestCase_028226_2);

#define VkglTestCase_028227_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028227_2 "stencil.stencil_ops.decr_wrap_keep_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028227, VkglTestCase_028227_1, VkglTestCase_028227_2);

#define VkglTestCase_028228_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028228_2 "tencil.stencil_ops.decr_wrap_keep_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028228, VkglTestCase_028228_1, VkglTestCase_028228_2);

#define VkglTestCase_028229_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028229_2 "tencil.stencil_ops.decr_wrap_keep_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028229, VkglTestCase_028229_1, VkglTestCase_028229_2);

#define VkglTestCase_028230_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028230_2 "_stencil.stencil_ops.decr_wrap_zero_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028230, VkglTestCase_028230_1, VkglTestCase_028230_2);

#define VkglTestCase_028231_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028231_2 "_stencil.stencil_ops.decr_wrap_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028231, VkglTestCase_028231_1, VkglTestCase_028231_2);

#define VkglTestCase_028232_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028232_2 "stencil.stencil_ops.decr_wrap_zero_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028232, VkglTestCase_028232_1, VkglTestCase_028232_2);

#define VkglTestCase_028233_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028233_2 "_stencil.stencil_ops.decr_wrap_zero_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028233, VkglTestCase_028233_1, VkglTestCase_028233_2);

#define VkglTestCase_028234_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028234_2 "_stencil.stencil_ops.decr_wrap_zero_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028234, VkglTestCase_028234_1, VkglTestCase_028234_2);

#define VkglTestCase_028235_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028235_2 "stencil.stencil_ops.decr_wrap_zero_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028235, VkglTestCase_028235_1, VkglTestCase_028235_2);

#define VkglTestCase_028236_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028236_2 "tencil.stencil_ops.decr_wrap_zero_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028236, VkglTestCase_028236_1, VkglTestCase_028236_2);

#define VkglTestCase_028237_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028237_2 "tencil.stencil_ops.decr_wrap_zero_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028237, VkglTestCase_028237_1, VkglTestCase_028237_2);

#define VkglTestCase_028238_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028238_2 "stencil.stencil_ops.decr_wrap_replace_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028238, VkglTestCase_028238_1, VkglTestCase_028238_2);

#define VkglTestCase_028239_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028239_2 "stencil.stencil_ops.decr_wrap_replace_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028239, VkglTestCase_028239_1, VkglTestCase_028239_2);

#define VkglTestCase_028240_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028240_2 "encil.stencil_ops.decr_wrap_replace_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028240, VkglTestCase_028240_1, VkglTestCase_028240_2);

#define VkglTestCase_028241_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028241_2 "stencil.stencil_ops.decr_wrap_replace_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028241, VkglTestCase_028241_1, VkglTestCase_028241_2);

#define VkglTestCase_028242_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028242_2 "stencil.stencil_ops.decr_wrap_replace_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028242, VkglTestCase_028242_1, VkglTestCase_028242_2);

#define VkglTestCase_028243_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028243_2 "tencil.stencil_ops.decr_wrap_replace_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028243, VkglTestCase_028243_1, VkglTestCase_028243_2);

#define VkglTestCase_028244_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028244_2 "ncil.stencil_ops.decr_wrap_replace_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028244, VkglTestCase_028244_1, VkglTestCase_028244_2);

#define VkglTestCase_028245_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028245_2 "ncil.stencil_ops.decr_wrap_replace_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028245, VkglTestCase_028245_1, VkglTestCase_028245_2);

#define VkglTestCase_028246_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028246_2 "_stencil.stencil_ops.decr_wrap_incr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028246, VkglTestCase_028246_1, VkglTestCase_028246_2);

#define VkglTestCase_028247_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028247_2 "_stencil.stencil_ops.decr_wrap_incr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028247, VkglTestCase_028247_1, VkglTestCase_028247_2);

#define VkglTestCase_028248_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028248_2 "stencil.stencil_ops.decr_wrap_incr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028248, VkglTestCase_028248_1, VkglTestCase_028248_2);

#define VkglTestCase_028249_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028249_2 "_stencil.stencil_ops.decr_wrap_incr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028249, VkglTestCase_028249_1, VkglTestCase_028249_2);

#define VkglTestCase_028250_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028250_2 "_stencil.stencil_ops.decr_wrap_incr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028250, VkglTestCase_028250_1, VkglTestCase_028250_2);

#define VkglTestCase_028251_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028251_2 "stencil.stencil_ops.decr_wrap_incr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028251, VkglTestCase_028251_1, VkglTestCase_028251_2);

#define VkglTestCase_028252_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028252_2 "tencil.stencil_ops.decr_wrap_incr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028252, VkglTestCase_028252_1, VkglTestCase_028252_2);

#define VkglTestCase_028253_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028253_2 "tencil.stencil_ops.decr_wrap_incr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028253, VkglTestCase_028253_1, VkglTestCase_028253_2);

#define VkglTestCase_028254_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028254_2 "_stencil.stencil_ops.decr_wrap_decr_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028254, VkglTestCase_028254_1, VkglTestCase_028254_2);

#define VkglTestCase_028255_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028255_2 "_stencil.stencil_ops.decr_wrap_decr_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028255, VkglTestCase_028255_1, VkglTestCase_028255_2);

#define VkglTestCase_028256_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028256_2 "stencil.stencil_ops.decr_wrap_decr_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028256, VkglTestCase_028256_1, VkglTestCase_028256_2);

#define VkglTestCase_028257_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028257_2 "_stencil.stencil_ops.decr_wrap_decr_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028257, VkglTestCase_028257_1, VkglTestCase_028257_2);

#define VkglTestCase_028258_1 "dEQP-GLES3.functional.fragment_ops.depth"
#define VkglTestCase_028258_2 "_stencil.stencil_ops.decr_wrap_decr_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028258, VkglTestCase_028258_1, VkglTestCase_028258_2);

#define VkglTestCase_028259_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028259_2 "stencil.stencil_ops.decr_wrap_decr_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028259, VkglTestCase_028259_1, VkglTestCase_028259_2);

#define VkglTestCase_028260_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028260_2 "tencil.stencil_ops.decr_wrap_decr_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028260, VkglTestCase_028260_1, VkglTestCase_028260_2);

#define VkglTestCase_028261_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028261_2 "tencil.stencil_ops.decr_wrap_decr_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028261, VkglTestCase_028261_1, VkglTestCase_028261_2);

#define VkglTestCase_028262_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028262_2 "stencil.stencil_ops.decr_wrap_invert_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028262, VkglTestCase_028262_1, VkglTestCase_028262_2);

#define VkglTestCase_028263_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028263_2 "stencil.stencil_ops.decr_wrap_invert_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028263, VkglTestCase_028263_1, VkglTestCase_028263_2);

#define VkglTestCase_028264_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028264_2 "tencil.stencil_ops.decr_wrap_invert_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028264, VkglTestCase_028264_1, VkglTestCase_028264_2);

#define VkglTestCase_028265_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028265_2 "stencil.stencil_ops.decr_wrap_invert_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028265, VkglTestCase_028265_1, VkglTestCase_028265_2);

#define VkglTestCase_028266_1 "dEQP-GLES3.functional.fragment_ops.depth_"
#define VkglTestCase_028266_2 "stencil.stencil_ops.decr_wrap_invert_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028266, VkglTestCase_028266_1, VkglTestCase_028266_2);

#define VkglTestCase_028267_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028267_2 "tencil.stencil_ops.decr_wrap_invert_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028267, VkglTestCase_028267_1, VkglTestCase_028267_2);

#define VkglTestCase_028268_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028268_2 "encil.stencil_ops.decr_wrap_invert_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028268, VkglTestCase_028268_1, VkglTestCase_028268_2);

#define VkglTestCase_028269_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028269_2 "encil.stencil_ops.decr_wrap_invert_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028269, VkglTestCase_028269_1, VkglTestCase_028269_2);

#define VkglTestCase_028270_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028270_2 "tencil.stencil_ops.decr_wrap_incr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028270, VkglTestCase_028270_1, VkglTestCase_028270_2);

#define VkglTestCase_028271_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028271_2 "tencil.stencil_ops.decr_wrap_incr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028271, VkglTestCase_028271_1, VkglTestCase_028271_2);

#define VkglTestCase_028272_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028272_2 "ncil.stencil_ops.decr_wrap_incr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028272, VkglTestCase_028272_1, VkglTestCase_028272_2);

#define VkglTestCase_028273_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028273_2 "tencil.stencil_ops.decr_wrap_incr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028273, VkglTestCase_028273_1, VkglTestCase_028273_2);

#define VkglTestCase_028274_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028274_2 "tencil.stencil_ops.decr_wrap_incr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028274, VkglTestCase_028274_1, VkglTestCase_028274_2);

#define VkglTestCase_028275_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028275_2 "encil.stencil_ops.decr_wrap_incr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028275, VkglTestCase_028275_1, VkglTestCase_028275_2);

#define VkglTestCase_028276_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028276_2 "cil.stencil_ops.decr_wrap_incr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028276, VkglTestCase_028276_1, VkglTestCase_028276_2);

#define VkglTestCase_028277_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028277_2 "cil.stencil_ops.decr_wrap_incr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028277, VkglTestCase_028277_1, VkglTestCase_028277_2);

#define VkglTestCase_028278_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028278_2 "tencil.stencil_ops.decr_wrap_decr_wrap_keep"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028278, VkglTestCase_028278_1, VkglTestCase_028278_2);

#define VkglTestCase_028279_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028279_2 "tencil.stencil_ops.decr_wrap_decr_wrap_zero"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028279, VkglTestCase_028279_1, VkglTestCase_028279_2);

#define VkglTestCase_028280_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_028280_2 "ncil.stencil_ops.decr_wrap_decr_wrap_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028280, VkglTestCase_028280_1, VkglTestCase_028280_2);

#define VkglTestCase_028281_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028281_2 "tencil.stencil_ops.decr_wrap_decr_wrap_incr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028281, VkglTestCase_028281_1, VkglTestCase_028281_2);

#define VkglTestCase_028282_1 "dEQP-GLES3.functional.fragment_ops.depth_s"
#define VkglTestCase_028282_2 "tencil.stencil_ops.decr_wrap_decr_wrap_decr"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028282, VkglTestCase_028282_1, VkglTestCase_028282_2);

#define VkglTestCase_028283_1 "dEQP-GLES3.functional.fragment_ops.depth_st"
#define VkglTestCase_028283_2 "encil.stencil_ops.decr_wrap_decr_wrap_invert"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028283, VkglTestCase_028283_1, VkglTestCase_028283_2);

#define VkglTestCase_028284_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028284_2 "cil.stencil_ops.decr_wrap_decr_wrap_incr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028284, VkglTestCase_028284_1, VkglTestCase_028284_2);

#define VkglTestCase_028285_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_028285_2 "cil.stencil_ops.decr_wrap_decr_wrap_decr_wrap"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_028285, VkglTestCase_028285_1, VkglTestCase_028285_2);
