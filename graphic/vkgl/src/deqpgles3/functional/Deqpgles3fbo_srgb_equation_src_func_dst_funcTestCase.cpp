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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30030TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30030TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_029466_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_029466_2 "srgb.equation_src_func_dst_func.add_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029466, VkglTestCase_029466_1, VkglTestCase_029466_2);

#define VkglTestCase_029467_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_029467_2 "_srgb.equation_src_func_dst_func.add_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029467, VkglTestCase_029467_1, VkglTestCase_029467_2);

#define VkglTestCase_029468_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029468_2 "gb.equation_src_func_dst_func.add_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029468, VkglTestCase_029468_1, VkglTestCase_029468_2);

#define VkglTestCase_029469_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029469_2 "uation_src_func_dst_func.add_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029469, VkglTestCase_029469_1, VkglTestCase_029469_2);

#define VkglTestCase_029470_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029470_2 "gb.equation_src_func_dst_func.add_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029470, VkglTestCase_029470_1, VkglTestCase_029470_2);

#define VkglTestCase_029471_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029471_2 "uation_src_func_dst_func.add_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029471, VkglTestCase_029471_1, VkglTestCase_029471_2);

#define VkglTestCase_029472_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029472_2 "gb.equation_src_func_dst_func.add_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029472, VkglTestCase_029472_1, VkglTestCase_029472_2);

#define VkglTestCase_029473_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029473_2 "uation_src_func_dst_func.add_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029473, VkglTestCase_029473_1, VkglTestCase_029473_2);

#define VkglTestCase_029474_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029474_2 "gb.equation_src_func_dst_func.add_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029474, VkglTestCase_029474_1, VkglTestCase_029474_2);

#define VkglTestCase_029475_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029475_2 "uation_src_func_dst_func.add_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029475, VkglTestCase_029475_1, VkglTestCase_029475_2);

#define VkglTestCase_029476_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029476_2 "equation_src_func_dst_func.add_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029476, VkglTestCase_029476_1, VkglTestCase_029476_2);

#define VkglTestCase_029477_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029477_2 "ion_src_func_dst_func.add_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029477, VkglTestCase_029477_1, VkglTestCase_029477_2);

#define VkglTestCase_029478_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029478_2 "equation_src_func_dst_func.add_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029478, VkglTestCase_029478_1, VkglTestCase_029478_2);

#define VkglTestCase_029479_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029479_2 "ion_src_func_dst_func.add_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029479, VkglTestCase_029479_1, VkglTestCase_029479_2);

#define VkglTestCase_029480_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029480_2 "uation_src_func_dst_func.add_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029480, VkglTestCase_029480_1, VkglTestCase_029480_2);

#define VkglTestCase_029481_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_029481_2 "_srgb.equation_src_func_dst_func.add_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029481, VkglTestCase_029481_1, VkglTestCase_029481_2);

#define VkglTestCase_029482_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_029482_2 "_srgb.equation_src_func_dst_func.add_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029482, VkglTestCase_029482_1, VkglTestCase_029482_2);

#define VkglTestCase_029483_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029483_2 "gb.equation_src_func_dst_func.add_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029483, VkglTestCase_029483_1, VkglTestCase_029483_2);

#define VkglTestCase_029484_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029484_2 "uation_src_func_dst_func.add_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029484, VkglTestCase_029484_1, VkglTestCase_029484_2);

#define VkglTestCase_029485_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029485_2 "gb.equation_src_func_dst_func.add_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029485, VkglTestCase_029485_1, VkglTestCase_029485_2);

#define VkglTestCase_029486_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029486_2 "uation_src_func_dst_func.add_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029486, VkglTestCase_029486_1, VkglTestCase_029486_2);

#define VkglTestCase_029487_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029487_2 "gb.equation_src_func_dst_func.add_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029487, VkglTestCase_029487_1, VkglTestCase_029487_2);

#define VkglTestCase_029488_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029488_2 "uation_src_func_dst_func.add_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029488, VkglTestCase_029488_1, VkglTestCase_029488_2);

#define VkglTestCase_029489_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029489_2 "gb.equation_src_func_dst_func.add_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029489, VkglTestCase_029489_1, VkglTestCase_029489_2);

#define VkglTestCase_029490_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029490_2 "uation_src_func_dst_func.add_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029490, VkglTestCase_029490_1, VkglTestCase_029490_2);

#define VkglTestCase_029491_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029491_2 ".equation_src_func_dst_func.add_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029491, VkglTestCase_029491_1, VkglTestCase_029491_2);

#define VkglTestCase_029492_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029492_2 "tion_src_func_dst_func.add_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029492, VkglTestCase_029492_1, VkglTestCase_029492_2);

#define VkglTestCase_029493_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029493_2 ".equation_src_func_dst_func.add_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029493, VkglTestCase_029493_1, VkglTestCase_029493_2);

#define VkglTestCase_029494_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029494_2 "tion_src_func_dst_func.add_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029494, VkglTestCase_029494_1, VkglTestCase_029494_2);

#define VkglTestCase_029495_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
#define VkglTestCase_029495_2 "quation_src_func_dst_func.add_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029495, VkglTestCase_029495_1, VkglTestCase_029495_2);

#define VkglTestCase_029496_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029496_2 "gb.equation_src_func_dst_func.add_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029496, VkglTestCase_029496_1, VkglTestCase_029496_2);

#define VkglTestCase_029497_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029497_2 "gb.equation_src_func_dst_func.add_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029497, VkglTestCase_029497_1, VkglTestCase_029497_2);

#define VkglTestCase_029498_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029498_2 "equation_src_func_dst_func.add_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029498, VkglTestCase_029498_1, VkglTestCase_029498_2);

#define VkglTestCase_029499_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029499_2 "ion_src_func_dst_func.add_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029499, VkglTestCase_029499_1, VkglTestCase_029499_2);

#define VkglTestCase_029500_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029500_2 "equation_src_func_dst_func.add_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029500, VkglTestCase_029500_1, VkglTestCase_029500_2);

#define VkglTestCase_029501_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029501_2 "ion_src_func_dst_func.add_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029501, VkglTestCase_029501_1, VkglTestCase_029501_2);

#define VkglTestCase_029502_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029502_2 "equation_src_func_dst_func.add_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029502, VkglTestCase_029502_1, VkglTestCase_029502_2);

#define VkglTestCase_029503_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029503_2 "ion_src_func_dst_func.add_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029503, VkglTestCase_029503_1, VkglTestCase_029503_2);

#define VkglTestCase_029504_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029504_2 "equation_src_func_dst_func.add_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029504, VkglTestCase_029504_1, VkglTestCase_029504_2);

#define VkglTestCase_029505_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029505_2 "ion_src_func_dst_func.add_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029505, VkglTestCase_029505_1, VkglTestCase_029505_2);

#define VkglTestCase_029506_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029506_2 "uation_src_func_dst_func.add_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029506, VkglTestCase_029506_1, VkglTestCase_029506_2);

#define VkglTestCase_029507_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029507_2 "n_src_func_dst_func.add_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029507, VkglTestCase_029507_1, VkglTestCase_029507_2);

#define VkglTestCase_029508_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029508_2 "uation_src_func_dst_func.add_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029508, VkglTestCase_029508_1, VkglTestCase_029508_2);

#define VkglTestCase_029509_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029509_2 "n_src_func_dst_func.add_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029509, VkglTestCase_029509_1, VkglTestCase_029509_2);

#define VkglTestCase_029510_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029510_2 "tion_src_func_dst_func.add_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029510, VkglTestCase_029510_1, VkglTestCase_029510_2);

#define VkglTestCase_029511_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029511_2 "uation_src_func_dst_func.add_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029511, VkglTestCase_029511_1, VkglTestCase_029511_2);

#define VkglTestCase_029512_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029512_2 "uation_src_func_dst_func.add_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029512, VkglTestCase_029512_1, VkglTestCase_029512_2);

#define VkglTestCase_029513_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029513_2 "ion_src_func_dst_func.add_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029513, VkglTestCase_029513_1, VkglTestCase_029513_2);

#define VkglTestCase_029514_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029514_2 "rc_func_dst_func.add_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029514, VkglTestCase_029514_1, VkglTestCase_029514_2);

#define VkglTestCase_029515_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029515_2 "ion_src_func_dst_func.add_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029515, VkglTestCase_029515_1, VkglTestCase_029515_2);

#define VkglTestCase_029516_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029516_2 "rc_func_dst_func.add_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029516, VkglTestCase_029516_1, VkglTestCase_029516_2);

#define VkglTestCase_029517_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029517_2 "ion_src_func_dst_func.add_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029517, VkglTestCase_029517_1, VkglTestCase_029517_2);

#define VkglTestCase_029518_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029518_2 "rc_func_dst_func.add_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029518, VkglTestCase_029518_1, VkglTestCase_029518_2);

#define VkglTestCase_029519_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029519_2 "ion_src_func_dst_func.add_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029519, VkglTestCase_029519_1, VkglTestCase_029519_2);

#define VkglTestCase_029520_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029520_2 "rc_func_dst_func.add_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029520, VkglTestCase_029520_1, VkglTestCase_029520_2);

#define VkglTestCase_029521_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029521_2 "n_src_func_dst_func.add_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029521, VkglTestCase_029521_1, VkglTestCase_029521_2);

#define VkglTestCase_029522_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029522_2 "_func_dst_func.add_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029522, VkglTestCase_029522_1, VkglTestCase_029522_2);

#define VkglTestCase_029523_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029523_2 "n_src_func_dst_func.add_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029523, VkglTestCase_029523_1, VkglTestCase_029523_2);

#define VkglTestCase_029524_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029524_2 "_func_dst_func.add_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029524, VkglTestCase_029524_1, VkglTestCase_029524_2);

#define VkglTestCase_029525_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029525_2 "src_func_dst_func.add_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029525, VkglTestCase_029525_1, VkglTestCase_029525_2);

#define VkglTestCase_029526_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029526_2 "gb.equation_src_func_dst_func.add_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029526, VkglTestCase_029526_1, VkglTestCase_029526_2);

#define VkglTestCase_029527_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029527_2 "gb.equation_src_func_dst_func.add_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029527, VkglTestCase_029527_1, VkglTestCase_029527_2);

#define VkglTestCase_029528_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029528_2 "equation_src_func_dst_func.add_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029528, VkglTestCase_029528_1, VkglTestCase_029528_2);

#define VkglTestCase_029529_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029529_2 "ion_src_func_dst_func.add_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029529, VkglTestCase_029529_1, VkglTestCase_029529_2);

#define VkglTestCase_029530_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029530_2 "equation_src_func_dst_func.add_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029530, VkglTestCase_029530_1, VkglTestCase_029530_2);

#define VkglTestCase_029531_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029531_2 "ion_src_func_dst_func.add_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029531, VkglTestCase_029531_1, VkglTestCase_029531_2);

#define VkglTestCase_029532_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029532_2 "equation_src_func_dst_func.add_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029532, VkglTestCase_029532_1, VkglTestCase_029532_2);

#define VkglTestCase_029533_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029533_2 "ion_src_func_dst_func.add_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029533, VkglTestCase_029533_1, VkglTestCase_029533_2);

#define VkglTestCase_029534_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029534_2 "equation_src_func_dst_func.add_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029534, VkglTestCase_029534_1, VkglTestCase_029534_2);

#define VkglTestCase_029535_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029535_2 "ion_src_func_dst_func.add_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029535, VkglTestCase_029535_1, VkglTestCase_029535_2);

#define VkglTestCase_029536_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029536_2 "uation_src_func_dst_func.add_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029536, VkglTestCase_029536_1, VkglTestCase_029536_2);

#define VkglTestCase_029537_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029537_2 "n_src_func_dst_func.add_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029537, VkglTestCase_029537_1, VkglTestCase_029537_2);

#define VkglTestCase_029538_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029538_2 "uation_src_func_dst_func.add_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029538, VkglTestCase_029538_1, VkglTestCase_029538_2);

#define VkglTestCase_029539_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029539_2 "n_src_func_dst_func.add_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029539, VkglTestCase_029539_1, VkglTestCase_029539_2);

#define VkglTestCase_029540_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029540_2 "tion_src_func_dst_func.add_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029540, VkglTestCase_029540_1, VkglTestCase_029540_2);

#define VkglTestCase_029541_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029541_2 "uation_src_func_dst_func.add_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029541, VkglTestCase_029541_1, VkglTestCase_029541_2);

#define VkglTestCase_029542_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029542_2 "uation_src_func_dst_func.add_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029542, VkglTestCase_029542_1, VkglTestCase_029542_2);

#define VkglTestCase_029543_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029543_2 "ion_src_func_dst_func.add_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029543, VkglTestCase_029543_1, VkglTestCase_029543_2);

#define VkglTestCase_029544_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029544_2 "rc_func_dst_func.add_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029544, VkglTestCase_029544_1, VkglTestCase_029544_2);

#define VkglTestCase_029545_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029545_2 "ion_src_func_dst_func.add_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029545, VkglTestCase_029545_1, VkglTestCase_029545_2);

#define VkglTestCase_029546_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029546_2 "rc_func_dst_func.add_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029546, VkglTestCase_029546_1, VkglTestCase_029546_2);

#define VkglTestCase_029547_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029547_2 "ion_src_func_dst_func.add_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029547, VkglTestCase_029547_1, VkglTestCase_029547_2);

#define VkglTestCase_029548_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029548_2 "rc_func_dst_func.add_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029548, VkglTestCase_029548_1, VkglTestCase_029548_2);

#define VkglTestCase_029549_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029549_2 "ion_src_func_dst_func.add_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029549, VkglTestCase_029549_1, VkglTestCase_029549_2);

#define VkglTestCase_029550_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029550_2 "rc_func_dst_func.add_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029550, VkglTestCase_029550_1, VkglTestCase_029550_2);

#define VkglTestCase_029551_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029551_2 "n_src_func_dst_func.add_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029551, VkglTestCase_029551_1, VkglTestCase_029551_2);

#define VkglTestCase_029552_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029552_2 "_func_dst_func.add_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029552, VkglTestCase_029552_1, VkglTestCase_029552_2);

#define VkglTestCase_029553_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029553_2 "n_src_func_dst_func.add_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029553, VkglTestCase_029553_1, VkglTestCase_029553_2);

#define VkglTestCase_029554_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029554_2 "_func_dst_func.add_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029554, VkglTestCase_029554_1, VkglTestCase_029554_2);

#define VkglTestCase_029555_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029555_2 "src_func_dst_func.add_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029555, VkglTestCase_029555_1, VkglTestCase_029555_2);

#define VkglTestCase_029556_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029556_2 "gb.equation_src_func_dst_func.add_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029556, VkglTestCase_029556_1, VkglTestCase_029556_2);

#define VkglTestCase_029557_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029557_2 "gb.equation_src_func_dst_func.add_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029557, VkglTestCase_029557_1, VkglTestCase_029557_2);

#define VkglTestCase_029558_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029558_2 "equation_src_func_dst_func.add_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029558, VkglTestCase_029558_1, VkglTestCase_029558_2);

#define VkglTestCase_029559_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029559_2 "ion_src_func_dst_func.add_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029559, VkglTestCase_029559_1, VkglTestCase_029559_2);

#define VkglTestCase_029560_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029560_2 "equation_src_func_dst_func.add_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029560, VkglTestCase_029560_1, VkglTestCase_029560_2);

#define VkglTestCase_029561_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029561_2 "ion_src_func_dst_func.add_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029561, VkglTestCase_029561_1, VkglTestCase_029561_2);

#define VkglTestCase_029562_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029562_2 "equation_src_func_dst_func.add_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029562, VkglTestCase_029562_1, VkglTestCase_029562_2);

#define VkglTestCase_029563_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029563_2 "ion_src_func_dst_func.add_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029563, VkglTestCase_029563_1, VkglTestCase_029563_2);

#define VkglTestCase_029564_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029564_2 "equation_src_func_dst_func.add_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029564, VkglTestCase_029564_1, VkglTestCase_029564_2);

#define VkglTestCase_029565_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029565_2 "ion_src_func_dst_func.add_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029565, VkglTestCase_029565_1, VkglTestCase_029565_2);

#define VkglTestCase_029566_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029566_2 "uation_src_func_dst_func.add_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029566, VkglTestCase_029566_1, VkglTestCase_029566_2);

#define VkglTestCase_029567_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029567_2 "n_src_func_dst_func.add_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029567, VkglTestCase_029567_1, VkglTestCase_029567_2);

#define VkglTestCase_029568_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029568_2 "uation_src_func_dst_func.add_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029568, VkglTestCase_029568_1, VkglTestCase_029568_2);

#define VkglTestCase_029569_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029569_2 "n_src_func_dst_func.add_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029569, VkglTestCase_029569_1, VkglTestCase_029569_2);

#define VkglTestCase_029570_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029570_2 "tion_src_func_dst_func.add_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029570, VkglTestCase_029570_1, VkglTestCase_029570_2);

#define VkglTestCase_029571_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029571_2 "uation_src_func_dst_func.add_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029571, VkglTestCase_029571_1, VkglTestCase_029571_2);

#define VkglTestCase_029572_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029572_2 "uation_src_func_dst_func.add_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029572, VkglTestCase_029572_1, VkglTestCase_029572_2);

#define VkglTestCase_029573_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029573_2 "ion_src_func_dst_func.add_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029573, VkglTestCase_029573_1, VkglTestCase_029573_2);

#define VkglTestCase_029574_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029574_2 "rc_func_dst_func.add_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029574, VkglTestCase_029574_1, VkglTestCase_029574_2);

#define VkglTestCase_029575_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029575_2 "ion_src_func_dst_func.add_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029575, VkglTestCase_029575_1, VkglTestCase_029575_2);

#define VkglTestCase_029576_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029576_2 "rc_func_dst_func.add_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029576, VkglTestCase_029576_1, VkglTestCase_029576_2);

#define VkglTestCase_029577_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029577_2 "ion_src_func_dst_func.add_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029577, VkglTestCase_029577_1, VkglTestCase_029577_2);

#define VkglTestCase_029578_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029578_2 "rc_func_dst_func.add_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029578, VkglTestCase_029578_1, VkglTestCase_029578_2);

#define VkglTestCase_029579_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029579_2 "ion_src_func_dst_func.add_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029579, VkglTestCase_029579_1, VkglTestCase_029579_2);

#define VkglTestCase_029580_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029580_2 "rc_func_dst_func.add_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029580, VkglTestCase_029580_1, VkglTestCase_029580_2);

#define VkglTestCase_029581_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029581_2 "n_src_func_dst_func.add_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029581, VkglTestCase_029581_1, VkglTestCase_029581_2);

#define VkglTestCase_029582_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029582_2 "_func_dst_func.add_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029582, VkglTestCase_029582_1, VkglTestCase_029582_2);

#define VkglTestCase_029583_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029583_2 "n_src_func_dst_func.add_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029583, VkglTestCase_029583_1, VkglTestCase_029583_2);

#define VkglTestCase_029584_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029584_2 "_func_dst_func.add_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029584, VkglTestCase_029584_1, VkglTestCase_029584_2);

#define VkglTestCase_029585_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029585_2 "src_func_dst_func.add_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029585, VkglTestCase_029585_1, VkglTestCase_029585_2);

#define VkglTestCase_029586_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029586_2 "gb.equation_src_func_dst_func.add_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029586, VkglTestCase_029586_1, VkglTestCase_029586_2);

#define VkglTestCase_029587_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029587_2 "gb.equation_src_func_dst_func.add_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029587, VkglTestCase_029587_1, VkglTestCase_029587_2);

#define VkglTestCase_029588_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029588_2 "equation_src_func_dst_func.add_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029588, VkglTestCase_029588_1, VkglTestCase_029588_2);

#define VkglTestCase_029589_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029589_2 "ion_src_func_dst_func.add_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029589, VkglTestCase_029589_1, VkglTestCase_029589_2);

#define VkglTestCase_029590_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029590_2 "equation_src_func_dst_func.add_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029590, VkglTestCase_029590_1, VkglTestCase_029590_2);

#define VkglTestCase_029591_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029591_2 "ion_src_func_dst_func.add_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029591, VkglTestCase_029591_1, VkglTestCase_029591_2);

#define VkglTestCase_029592_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029592_2 "equation_src_func_dst_func.add_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029592, VkglTestCase_029592_1, VkglTestCase_029592_2);

#define VkglTestCase_029593_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029593_2 "ion_src_func_dst_func.add_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029593, VkglTestCase_029593_1, VkglTestCase_029593_2);

#define VkglTestCase_029594_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029594_2 "equation_src_func_dst_func.add_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029594, VkglTestCase_029594_1, VkglTestCase_029594_2);

#define VkglTestCase_029595_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029595_2 "ion_src_func_dst_func.add_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029595, VkglTestCase_029595_1, VkglTestCase_029595_2);

#define VkglTestCase_029596_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029596_2 "uation_src_func_dst_func.add_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029596, VkglTestCase_029596_1, VkglTestCase_029596_2);

#define VkglTestCase_029597_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029597_2 "n_src_func_dst_func.add_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029597, VkglTestCase_029597_1, VkglTestCase_029597_2);

#define VkglTestCase_029598_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029598_2 "uation_src_func_dst_func.add_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029598, VkglTestCase_029598_1, VkglTestCase_029598_2);

#define VkglTestCase_029599_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029599_2 "n_src_func_dst_func.add_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029599, VkglTestCase_029599_1, VkglTestCase_029599_2);

#define VkglTestCase_029600_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029600_2 "tion_src_func_dst_func.add_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029600, VkglTestCase_029600_1, VkglTestCase_029600_2);

#define VkglTestCase_029601_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029601_2 "uation_src_func_dst_func.add_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029601, VkglTestCase_029601_1, VkglTestCase_029601_2);

#define VkglTestCase_029602_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029602_2 "uation_src_func_dst_func.add_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029602, VkglTestCase_029602_1, VkglTestCase_029602_2);

#define VkglTestCase_029603_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029603_2 "ion_src_func_dst_func.add_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029603, VkglTestCase_029603_1, VkglTestCase_029603_2);

#define VkglTestCase_029604_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029604_2 "rc_func_dst_func.add_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029604, VkglTestCase_029604_1, VkglTestCase_029604_2);

#define VkglTestCase_029605_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029605_2 "ion_src_func_dst_func.add_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029605, VkglTestCase_029605_1, VkglTestCase_029605_2);

#define VkglTestCase_029606_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029606_2 "rc_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029606, VkglTestCase_029606_1, VkglTestCase_029606_2);

#define VkglTestCase_029607_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029607_2 "ion_src_func_dst_func.add_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029607, VkglTestCase_029607_1, VkglTestCase_029607_2);

#define VkglTestCase_029608_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029608_2 "rc_func_dst_func.add_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029608, VkglTestCase_029608_1, VkglTestCase_029608_2);

#define VkglTestCase_029609_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029609_2 "ion_src_func_dst_func.add_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029609, VkglTestCase_029609_1, VkglTestCase_029609_2);

#define VkglTestCase_029610_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029610_2 "rc_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029610, VkglTestCase_029610_1, VkglTestCase_029610_2);

#define VkglTestCase_029611_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029611_2 "n_src_func_dst_func.add_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029611, VkglTestCase_029611_1, VkglTestCase_029611_2);

#define VkglTestCase_029612_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029612_2 "_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029612, VkglTestCase_029612_1, VkglTestCase_029612_2);

#define VkglTestCase_029613_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029613_2 "n_src_func_dst_func.add_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029613, VkglTestCase_029613_1, VkglTestCase_029613_2);

#define VkglTestCase_029614_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029614_2 "_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029614, VkglTestCase_029614_1, VkglTestCase_029614_2);

#define VkglTestCase_029615_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029615_2 "src_func_dst_func.add_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029615, VkglTestCase_029615_1, VkglTestCase_029615_2);

#define VkglTestCase_029616_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029616_2 "equation_src_func_dst_func.add_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029616, VkglTestCase_029616_1, VkglTestCase_029616_2);

#define VkglTestCase_029617_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029617_2 ".equation_src_func_dst_func.add_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029617, VkglTestCase_029617_1, VkglTestCase_029617_2);

#define VkglTestCase_029618_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029618_2 "uation_src_func_dst_func.add_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029618, VkglTestCase_029618_1, VkglTestCase_029618_2);

#define VkglTestCase_029619_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029619_2 "n_src_func_dst_func.add_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029619, VkglTestCase_029619_1, VkglTestCase_029619_2);

#define VkglTestCase_029620_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029620_2 "uation_src_func_dst_func.add_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029620, VkglTestCase_029620_1, VkglTestCase_029620_2);

#define VkglTestCase_029621_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029621_2 "n_src_func_dst_func.add_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029621, VkglTestCase_029621_1, VkglTestCase_029621_2);

#define VkglTestCase_029622_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029622_2 "uation_src_func_dst_func.add_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029622, VkglTestCase_029622_1, VkglTestCase_029622_2);

#define VkglTestCase_029623_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029623_2 "n_src_func_dst_func.add_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029623, VkglTestCase_029623_1, VkglTestCase_029623_2);

#define VkglTestCase_029624_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029624_2 "uation_src_func_dst_func.add_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029624, VkglTestCase_029624_1, VkglTestCase_029624_2);

#define VkglTestCase_029625_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029625_2 "n_src_func_dst_func.add_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029625, VkglTestCase_029625_1, VkglTestCase_029625_2);

#define VkglTestCase_029626_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029626_2 "ion_src_func_dst_func.add_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029626, VkglTestCase_029626_1, VkglTestCase_029626_2);

#define VkglTestCase_029627_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029627_2 "rc_func_dst_func.add_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029627, VkglTestCase_029627_1, VkglTestCase_029627_2);

#define VkglTestCase_029628_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029628_2 "ion_src_func_dst_func.add_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029628, VkglTestCase_029628_1, VkglTestCase_029628_2);

#define VkglTestCase_029629_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029629_2 "rc_func_dst_func.add_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029629, VkglTestCase_029629_1, VkglTestCase_029629_2);

#define VkglTestCase_029630_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029630_2 "n_src_func_dst_func.add_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029630, VkglTestCase_029630_1, VkglTestCase_029630_2);

#define VkglTestCase_029631_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029631_2 "ion_src_func_dst_func.add_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029631, VkglTestCase_029631_1, VkglTestCase_029631_2);

#define VkglTestCase_029632_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029632_2 "tion_src_func_dst_func.add_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029632, VkglTestCase_029632_1, VkglTestCase_029632_2);

#define VkglTestCase_029633_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029633_2 "n_src_func_dst_func.add_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029633, VkglTestCase_029633_1, VkglTestCase_029633_2);

#define VkglTestCase_029634_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029634_2 "_func_dst_func.add_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029634, VkglTestCase_029634_1, VkglTestCase_029634_2);

#define VkglTestCase_029635_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029635_2 "n_src_func_dst_func.add_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029635, VkglTestCase_029635_1, VkglTestCase_029635_2);

#define VkglTestCase_029636_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029636_2 "_func_dst_func.add_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029636, VkglTestCase_029636_1, VkglTestCase_029636_2);

#define VkglTestCase_029637_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029637_2 "n_src_func_dst_func.add_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029637, VkglTestCase_029637_1, VkglTestCase_029637_2);

#define VkglTestCase_029638_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029638_2 "_func_dst_func.add_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029638, VkglTestCase_029638_1, VkglTestCase_029638_2);

#define VkglTestCase_029639_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029639_2 "n_src_func_dst_func.add_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029639, VkglTestCase_029639_1, VkglTestCase_029639_2);

#define VkglTestCase_029640_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029640_2 "_func_dst_func.add_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029640, VkglTestCase_029640_1, VkglTestCase_029640_2);

#define VkglTestCase_029641_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029641_2 "rc_func_dst_func.add_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029641, VkglTestCase_029641_1, VkglTestCase_029641_2);

#define VkglTestCase_029642_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029642_2 "nc_dst_func.add_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029642, VkglTestCase_029642_1, VkglTestCase_029642_2);

#define VkglTestCase_029643_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029643_2 "rc_func_dst_func.add_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029643, VkglTestCase_029643_1, VkglTestCase_029643_2);

#define VkglTestCase_029644_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029644_2 "nc_dst_func.add_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029644, VkglTestCase_029644_1, VkglTestCase_029644_2);

#define VkglTestCase_029645_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029645_2 "_func_dst_func.add_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029645, VkglTestCase_029645_1, VkglTestCase_029645_2);

#define VkglTestCase_029646_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029646_2 "equation_src_func_dst_func.add_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029646, VkglTestCase_029646_1, VkglTestCase_029646_2);

#define VkglTestCase_029647_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029647_2 ".equation_src_func_dst_func.add_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029647, VkglTestCase_029647_1, VkglTestCase_029647_2);

#define VkglTestCase_029648_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029648_2 "uation_src_func_dst_func.add_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029648, VkglTestCase_029648_1, VkglTestCase_029648_2);

#define VkglTestCase_029649_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029649_2 "n_src_func_dst_func.add_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029649, VkglTestCase_029649_1, VkglTestCase_029649_2);

#define VkglTestCase_029650_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029650_2 "uation_src_func_dst_func.add_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029650, VkglTestCase_029650_1, VkglTestCase_029650_2);

#define VkglTestCase_029651_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029651_2 "n_src_func_dst_func.add_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029651, VkglTestCase_029651_1, VkglTestCase_029651_2);

#define VkglTestCase_029652_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029652_2 "uation_src_func_dst_func.add_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029652, VkglTestCase_029652_1, VkglTestCase_029652_2);

#define VkglTestCase_029653_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029653_2 "n_src_func_dst_func.add_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029653, VkglTestCase_029653_1, VkglTestCase_029653_2);

#define VkglTestCase_029654_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029654_2 "uation_src_func_dst_func.add_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029654, VkglTestCase_029654_1, VkglTestCase_029654_2);

#define VkglTestCase_029655_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029655_2 "n_src_func_dst_func.add_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029655, VkglTestCase_029655_1, VkglTestCase_029655_2);

#define VkglTestCase_029656_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029656_2 "ion_src_func_dst_func.add_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029656, VkglTestCase_029656_1, VkglTestCase_029656_2);

#define VkglTestCase_029657_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029657_2 "rc_func_dst_func.add_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029657, VkglTestCase_029657_1, VkglTestCase_029657_2);

#define VkglTestCase_029658_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029658_2 "ion_src_func_dst_func.add_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029658, VkglTestCase_029658_1, VkglTestCase_029658_2);

#define VkglTestCase_029659_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029659_2 "rc_func_dst_func.add_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029659, VkglTestCase_029659_1, VkglTestCase_029659_2);

#define VkglTestCase_029660_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029660_2 "n_src_func_dst_func.add_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029660, VkglTestCase_029660_1, VkglTestCase_029660_2);

#define VkglTestCase_029661_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029661_2 "ion_src_func_dst_func.add_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029661, VkglTestCase_029661_1, VkglTestCase_029661_2);

#define VkglTestCase_029662_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029662_2 "tion_src_func_dst_func.add_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029662, VkglTestCase_029662_1, VkglTestCase_029662_2);

#define VkglTestCase_029663_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029663_2 "n_src_func_dst_func.add_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029663, VkglTestCase_029663_1, VkglTestCase_029663_2);

#define VkglTestCase_029664_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029664_2 "_func_dst_func.add_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029664, VkglTestCase_029664_1, VkglTestCase_029664_2);

#define VkglTestCase_029665_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029665_2 "n_src_func_dst_func.add_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029665, VkglTestCase_029665_1, VkglTestCase_029665_2);

#define VkglTestCase_029666_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029666_2 "_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029666, VkglTestCase_029666_1, VkglTestCase_029666_2);

#define VkglTestCase_029667_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029667_2 "n_src_func_dst_func.add_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029667, VkglTestCase_029667_1, VkglTestCase_029667_2);

#define VkglTestCase_029668_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029668_2 "_func_dst_func.add_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029668, VkglTestCase_029668_1, VkglTestCase_029668_2);

#define VkglTestCase_029669_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029669_2 "n_src_func_dst_func.add_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029669, VkglTestCase_029669_1, VkglTestCase_029669_2);

#define VkglTestCase_029670_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029670_2 "_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029670, VkglTestCase_029670_1, VkglTestCase_029670_2);

#define VkglTestCase_029671_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029671_2 "rc_func_dst_func.add_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029671, VkglTestCase_029671_1, VkglTestCase_029671_2);

#define VkglTestCase_029672_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029672_2 "nc_dst_func.add_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029672, VkglTestCase_029672_1, VkglTestCase_029672_2);

#define VkglTestCase_029673_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029673_2 "rc_func_dst_func.add_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029673, VkglTestCase_029673_1, VkglTestCase_029673_2);

#define VkglTestCase_029674_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029674_2 "nc_dst_func.add_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029674, VkglTestCase_029674_1, VkglTestCase_029674_2);

#define VkglTestCase_029675_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029675_2 "_func_dst_func.add_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029675, VkglTestCase_029675_1, VkglTestCase_029675_2);

#define VkglTestCase_029676_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029676_2 "uation_src_func_dst_func.add_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029676, VkglTestCase_029676_1, VkglTestCase_029676_2);

#define VkglTestCase_029677_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
#define VkglTestCase_029677_2 "quation_src_func_dst_func.add_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029677, VkglTestCase_029677_1, VkglTestCase_029677_2);

#define VkglTestCase_029678_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029678_2 "tion_src_func_dst_func.add_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029678, VkglTestCase_029678_1, VkglTestCase_029678_2);

#define VkglTestCase_029679_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029679_2 "src_func_dst_func.add_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029679, VkglTestCase_029679_1, VkglTestCase_029679_2);

#define VkglTestCase_029680_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029680_2 "tion_src_func_dst_func.add_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029680, VkglTestCase_029680_1, VkglTestCase_029680_2);

#define VkglTestCase_029681_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029681_2 "src_func_dst_func.add_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029681, VkglTestCase_029681_1, VkglTestCase_029681_2);

#define VkglTestCase_029682_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029682_2 "tion_src_func_dst_func.add_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029682, VkglTestCase_029682_1, VkglTestCase_029682_2);

#define VkglTestCase_029683_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029683_2 "src_func_dst_func.add_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029683, VkglTestCase_029683_1, VkglTestCase_029683_2);

#define VkglTestCase_029684_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029684_2 "tion_src_func_dst_func.add_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029684, VkglTestCase_029684_1, VkglTestCase_029684_2);

#define VkglTestCase_029685_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029685_2 "src_func_dst_func.add_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029685, VkglTestCase_029685_1, VkglTestCase_029685_2);

#define VkglTestCase_029686_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029686_2 "n_src_func_dst_func.add_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029686, VkglTestCase_029686_1, VkglTestCase_029686_2);

#define VkglTestCase_029687_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029687_2 "_func_dst_func.add_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029687, VkglTestCase_029687_1, VkglTestCase_029687_2);

#define VkglTestCase_029688_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029688_2 "n_src_func_dst_func.add_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029688, VkglTestCase_029688_1, VkglTestCase_029688_2);

#define VkglTestCase_029689_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029689_2 "_func_dst_func.add_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029689, VkglTestCase_029689_1, VkglTestCase_029689_2);

#define VkglTestCase_029690_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029690_2 "src_func_dst_func.add_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029690, VkglTestCase_029690_1, VkglTestCase_029690_2);

#define VkglTestCase_029691_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029691_2 "gb.equation_src_func_dst_func.subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029691, VkglTestCase_029691_1, VkglTestCase_029691_2);

#define VkglTestCase_029692_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029692_2 "gb.equation_src_func_dst_func.subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029692, VkglTestCase_029692_1, VkglTestCase_029692_2);

#define VkglTestCase_029693_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029693_2 "equation_src_func_dst_func.subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029693, VkglTestCase_029693_1, VkglTestCase_029693_2);

#define VkglTestCase_029694_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029694_2 "ion_src_func_dst_func.subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029694, VkglTestCase_029694_1, VkglTestCase_029694_2);

#define VkglTestCase_029695_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029695_2 "equation_src_func_dst_func.subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029695, VkglTestCase_029695_1, VkglTestCase_029695_2);

#define VkglTestCase_029696_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029696_2 "ion_src_func_dst_func.subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029696, VkglTestCase_029696_1, VkglTestCase_029696_2);

#define VkglTestCase_029697_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029697_2 "equation_src_func_dst_func.subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029697, VkglTestCase_029697_1, VkglTestCase_029697_2);

#define VkglTestCase_029698_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029698_2 "ion_src_func_dst_func.subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029698, VkglTestCase_029698_1, VkglTestCase_029698_2);

#define VkglTestCase_029699_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029699_2 "equation_src_func_dst_func.subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029699, VkglTestCase_029699_1, VkglTestCase_029699_2);

#define VkglTestCase_029700_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029700_2 "ion_src_func_dst_func.subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029700, VkglTestCase_029700_1, VkglTestCase_029700_2);

#define VkglTestCase_029701_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029701_2 "uation_src_func_dst_func.subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029701, VkglTestCase_029701_1, VkglTestCase_029701_2);

#define VkglTestCase_029702_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029702_2 "n_src_func_dst_func.subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029702, VkglTestCase_029702_1, VkglTestCase_029702_2);

#define VkglTestCase_029703_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029703_2 "uation_src_func_dst_func.subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029703, VkglTestCase_029703_1, VkglTestCase_029703_2);

#define VkglTestCase_029704_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029704_2 "n_src_func_dst_func.subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029704, VkglTestCase_029704_1, VkglTestCase_029704_2);

#define VkglTestCase_029705_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029705_2 "tion_src_func_dst_func.subtract_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029705, VkglTestCase_029705_1, VkglTestCase_029705_2);

#define VkglTestCase_029706_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_029706_2 "gb.equation_src_func_dst_func.subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029706, VkglTestCase_029706_1, VkglTestCase_029706_2);

#define VkglTestCase_029707_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_029707_2 "rgb.equation_src_func_dst_func.subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029707, VkglTestCase_029707_1, VkglTestCase_029707_2);

#define VkglTestCase_029708_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029708_2 ".equation_src_func_dst_func.subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029708, VkglTestCase_029708_1, VkglTestCase_029708_2);

#define VkglTestCase_029709_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029709_2 "tion_src_func_dst_func.subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029709, VkglTestCase_029709_1, VkglTestCase_029709_2);

#define VkglTestCase_029710_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029710_2 ".equation_src_func_dst_func.subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029710, VkglTestCase_029710_1, VkglTestCase_029710_2);

#define VkglTestCase_029711_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029711_2 "tion_src_func_dst_func.subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029711, VkglTestCase_029711_1, VkglTestCase_029711_2);

#define VkglTestCase_029712_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029712_2 ".equation_src_func_dst_func.subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029712, VkglTestCase_029712_1, VkglTestCase_029712_2);

#define VkglTestCase_029713_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029713_2 "tion_src_func_dst_func.subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029713, VkglTestCase_029713_1, VkglTestCase_029713_2);

#define VkglTestCase_029714_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029714_2 ".equation_src_func_dst_func.subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029714, VkglTestCase_029714_1, VkglTestCase_029714_2);

#define VkglTestCase_029715_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029715_2 "tion_src_func_dst_func.subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029715, VkglTestCase_029715_1, VkglTestCase_029715_2);

#define VkglTestCase_029716_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029716_2 "uation_src_func_dst_func.subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029716, VkglTestCase_029716_1, VkglTestCase_029716_2);

#define VkglTestCase_029717_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029717_2 "n_src_func_dst_func.subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029717, VkglTestCase_029717_1, VkglTestCase_029717_2);

#define VkglTestCase_029718_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029718_2 "uation_src_func_dst_func.subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029718, VkglTestCase_029718_1, VkglTestCase_029718_2);

#define VkglTestCase_029719_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029719_2 "n_src_func_dst_func.subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029719, VkglTestCase_029719_1, VkglTestCase_029719_2);

#define VkglTestCase_029720_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029720_2 "tion_src_func_dst_func.subtract_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029720, VkglTestCase_029720_1, VkglTestCase_029720_2);

#define VkglTestCase_029721_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029721_2 "equation_src_func_dst_func.subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029721, VkglTestCase_029721_1, VkglTestCase_029721_2);

#define VkglTestCase_029722_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029722_2 ".equation_src_func_dst_func.subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029722, VkglTestCase_029722_1, VkglTestCase_029722_2);

#define VkglTestCase_029723_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029723_2 "uation_src_func_dst_func.subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029723, VkglTestCase_029723_1, VkglTestCase_029723_2);

#define VkglTestCase_029724_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029724_2 "n_src_func_dst_func.subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029724, VkglTestCase_029724_1, VkglTestCase_029724_2);

#define VkglTestCase_029725_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029725_2 "uation_src_func_dst_func.subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029725, VkglTestCase_029725_1, VkglTestCase_029725_2);

#define VkglTestCase_029726_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029726_2 "n_src_func_dst_func.subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029726, VkglTestCase_029726_1, VkglTestCase_029726_2);

#define VkglTestCase_029727_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029727_2 "uation_src_func_dst_func.subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029727, VkglTestCase_029727_1, VkglTestCase_029727_2);

#define VkglTestCase_029728_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029728_2 "n_src_func_dst_func.subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029728, VkglTestCase_029728_1, VkglTestCase_029728_2);

#define VkglTestCase_029729_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029729_2 "uation_src_func_dst_func.subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029729, VkglTestCase_029729_1, VkglTestCase_029729_2);

#define VkglTestCase_029730_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029730_2 "n_src_func_dst_func.subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029730, VkglTestCase_029730_1, VkglTestCase_029730_2);

#define VkglTestCase_029731_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029731_2 "ion_src_func_dst_func.subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029731, VkglTestCase_029731_1, VkglTestCase_029731_2);

#define VkglTestCase_029732_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029732_2 "rc_func_dst_func.subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029732, VkglTestCase_029732_1, VkglTestCase_029732_2);

#define VkglTestCase_029733_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029733_2 "ion_src_func_dst_func.subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029733, VkglTestCase_029733_1, VkglTestCase_029733_2);

#define VkglTestCase_029734_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029734_2 "rc_func_dst_func.subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029734, VkglTestCase_029734_1, VkglTestCase_029734_2);

#define VkglTestCase_029735_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029735_2 "n_src_func_dst_func.subtract_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029735, VkglTestCase_029735_1, VkglTestCase_029735_2);

#define VkglTestCase_029736_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029736_2 "ion_src_func_dst_func.subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029736, VkglTestCase_029736_1, VkglTestCase_029736_2);

#define VkglTestCase_029737_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029737_2 "tion_src_func_dst_func.subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029737, VkglTestCase_029737_1, VkglTestCase_029737_2);

#define VkglTestCase_029738_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029738_2 "n_src_func_dst_func.subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029738, VkglTestCase_029738_1, VkglTestCase_029738_2);

#define VkglTestCase_029739_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029739_2 "_func_dst_func.subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029739, VkglTestCase_029739_1, VkglTestCase_029739_2);

#define VkglTestCase_029740_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029740_2 "n_src_func_dst_func.subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029740, VkglTestCase_029740_1, VkglTestCase_029740_2);

#define VkglTestCase_029741_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029741_2 "_func_dst_func.subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029741, VkglTestCase_029741_1, VkglTestCase_029741_2);

#define VkglTestCase_029742_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029742_2 "n_src_func_dst_func.subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029742, VkglTestCase_029742_1, VkglTestCase_029742_2);

#define VkglTestCase_029743_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029743_2 "_func_dst_func.subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029743, VkglTestCase_029743_1, VkglTestCase_029743_2);

#define VkglTestCase_029744_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029744_2 "n_src_func_dst_func.subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029744, VkglTestCase_029744_1, VkglTestCase_029744_2);

#define VkglTestCase_029745_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029745_2 "_func_dst_func.subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029745, VkglTestCase_029745_1, VkglTestCase_029745_2);

#define VkglTestCase_029746_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029746_2 "rc_func_dst_func.subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029746, VkglTestCase_029746_1, VkglTestCase_029746_2);

#define VkglTestCase_029747_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029747_2 "nc_dst_func.subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029747, VkglTestCase_029747_1, VkglTestCase_029747_2);

#define VkglTestCase_029748_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029748_2 "rc_func_dst_func.subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029748, VkglTestCase_029748_1, VkglTestCase_029748_2);

#define VkglTestCase_029749_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029749_2 "nc_dst_func.subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029749, VkglTestCase_029749_1, VkglTestCase_029749_2);

#define VkglTestCase_029750_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029750_2 "_func_dst_func.subtract_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029750, VkglTestCase_029750_1, VkglTestCase_029750_2);

#define VkglTestCase_029751_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029751_2 "equation_src_func_dst_func.subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029751, VkglTestCase_029751_1, VkglTestCase_029751_2);

#define VkglTestCase_029752_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029752_2 ".equation_src_func_dst_func.subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029752, VkglTestCase_029752_1, VkglTestCase_029752_2);

#define VkglTestCase_029753_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029753_2 "uation_src_func_dst_func.subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029753, VkglTestCase_029753_1, VkglTestCase_029753_2);

#define VkglTestCase_029754_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029754_2 "n_src_func_dst_func.subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029754, VkglTestCase_029754_1, VkglTestCase_029754_2);

#define VkglTestCase_029755_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029755_2 "uation_src_func_dst_func.subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029755, VkglTestCase_029755_1, VkglTestCase_029755_2);

#define VkglTestCase_029756_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029756_2 "n_src_func_dst_func.subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029756, VkglTestCase_029756_1, VkglTestCase_029756_2);

#define VkglTestCase_029757_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029757_2 "uation_src_func_dst_func.subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029757, VkglTestCase_029757_1, VkglTestCase_029757_2);

#define VkglTestCase_029758_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029758_2 "n_src_func_dst_func.subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029758, VkglTestCase_029758_1, VkglTestCase_029758_2);

#define VkglTestCase_029759_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029759_2 "uation_src_func_dst_func.subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029759, VkglTestCase_029759_1, VkglTestCase_029759_2);

#define VkglTestCase_029760_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029760_2 "n_src_func_dst_func.subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029760, VkglTestCase_029760_1, VkglTestCase_029760_2);

#define VkglTestCase_029761_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029761_2 "ion_src_func_dst_func.subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029761, VkglTestCase_029761_1, VkglTestCase_029761_2);

#define VkglTestCase_029762_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029762_2 "rc_func_dst_func.subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029762, VkglTestCase_029762_1, VkglTestCase_029762_2);

#define VkglTestCase_029763_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029763_2 "ion_src_func_dst_func.subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029763, VkglTestCase_029763_1, VkglTestCase_029763_2);

#define VkglTestCase_029764_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029764_2 "rc_func_dst_func.subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029764, VkglTestCase_029764_1, VkglTestCase_029764_2);

#define VkglTestCase_029765_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029765_2 "n_src_func_dst_func.subtract_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029765, VkglTestCase_029765_1, VkglTestCase_029765_2);

#define VkglTestCase_029766_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029766_2 "ion_src_func_dst_func.subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029766, VkglTestCase_029766_1, VkglTestCase_029766_2);

#define VkglTestCase_029767_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029767_2 "tion_src_func_dst_func.subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029767, VkglTestCase_029767_1, VkglTestCase_029767_2);

#define VkglTestCase_029768_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029768_2 "n_src_func_dst_func.subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029768, VkglTestCase_029768_1, VkglTestCase_029768_2);

#define VkglTestCase_029769_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029769_2 "_func_dst_func.subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029769, VkglTestCase_029769_1, VkglTestCase_029769_2);

#define VkglTestCase_029770_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029770_2 "n_src_func_dst_func.subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029770, VkglTestCase_029770_1, VkglTestCase_029770_2);

#define VkglTestCase_029771_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029771_2 "_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029771, VkglTestCase_029771_1, VkglTestCase_029771_2);

#define VkglTestCase_029772_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029772_2 "n_src_func_dst_func.subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029772, VkglTestCase_029772_1, VkglTestCase_029772_2);

#define VkglTestCase_029773_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029773_2 "_func_dst_func.subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029773, VkglTestCase_029773_1, VkglTestCase_029773_2);

#define VkglTestCase_029774_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029774_2 "n_src_func_dst_func.subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029774, VkglTestCase_029774_1, VkglTestCase_029774_2);

#define VkglTestCase_029775_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029775_2 "_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029775, VkglTestCase_029775_1, VkglTestCase_029775_2);

#define VkglTestCase_029776_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029776_2 "rc_func_dst_func.subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029776, VkglTestCase_029776_1, VkglTestCase_029776_2);

#define VkglTestCase_029777_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029777_2 "nc_dst_func.subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029777, VkglTestCase_029777_1, VkglTestCase_029777_2);

#define VkglTestCase_029778_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029778_2 "rc_func_dst_func.subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029778, VkglTestCase_029778_1, VkglTestCase_029778_2);

#define VkglTestCase_029779_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029779_2 "nc_dst_func.subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029779, VkglTestCase_029779_1, VkglTestCase_029779_2);

#define VkglTestCase_029780_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029780_2 "_func_dst_func.subtract_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029780, VkglTestCase_029780_1, VkglTestCase_029780_2);

#define VkglTestCase_029781_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029781_2 "equation_src_func_dst_func.subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029781, VkglTestCase_029781_1, VkglTestCase_029781_2);

#define VkglTestCase_029782_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029782_2 ".equation_src_func_dst_func.subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029782, VkglTestCase_029782_1, VkglTestCase_029782_2);

#define VkglTestCase_029783_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029783_2 "uation_src_func_dst_func.subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029783, VkglTestCase_029783_1, VkglTestCase_029783_2);

#define VkglTestCase_029784_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029784_2 "n_src_func_dst_func.subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029784, VkglTestCase_029784_1, VkglTestCase_029784_2);

#define VkglTestCase_029785_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029785_2 "uation_src_func_dst_func.subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029785, VkglTestCase_029785_1, VkglTestCase_029785_2);

#define VkglTestCase_029786_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029786_2 "n_src_func_dst_func.subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029786, VkglTestCase_029786_1, VkglTestCase_029786_2);

#define VkglTestCase_029787_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029787_2 "uation_src_func_dst_func.subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029787, VkglTestCase_029787_1, VkglTestCase_029787_2);

#define VkglTestCase_029788_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029788_2 "n_src_func_dst_func.subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029788, VkglTestCase_029788_1, VkglTestCase_029788_2);

#define VkglTestCase_029789_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029789_2 "uation_src_func_dst_func.subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029789, VkglTestCase_029789_1, VkglTestCase_029789_2);

#define VkglTestCase_029790_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029790_2 "n_src_func_dst_func.subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029790, VkglTestCase_029790_1, VkglTestCase_029790_2);

#define VkglTestCase_029791_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029791_2 "ion_src_func_dst_func.subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029791, VkglTestCase_029791_1, VkglTestCase_029791_2);

#define VkglTestCase_029792_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029792_2 "rc_func_dst_func.subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029792, VkglTestCase_029792_1, VkglTestCase_029792_2);

#define VkglTestCase_029793_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029793_2 "ion_src_func_dst_func.subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029793, VkglTestCase_029793_1, VkglTestCase_029793_2);

#define VkglTestCase_029794_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029794_2 "rc_func_dst_func.subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029794, VkglTestCase_029794_1, VkglTestCase_029794_2);

#define VkglTestCase_029795_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029795_2 "n_src_func_dst_func.subtract_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029795, VkglTestCase_029795_1, VkglTestCase_029795_2);

#define VkglTestCase_029796_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029796_2 "ion_src_func_dst_func.subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029796, VkglTestCase_029796_1, VkglTestCase_029796_2);

#define VkglTestCase_029797_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029797_2 "tion_src_func_dst_func.subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029797, VkglTestCase_029797_1, VkglTestCase_029797_2);

#define VkglTestCase_029798_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029798_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029798, VkglTestCase_029798_1, VkglTestCase_029798_2);

#define VkglTestCase_029799_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029799_2 "_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029799, VkglTestCase_029799_1, VkglTestCase_029799_2);

#define VkglTestCase_029800_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029800_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029800, VkglTestCase_029800_1, VkglTestCase_029800_2);

#define VkglTestCase_029801_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029801_2 "_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029801, VkglTestCase_029801_1, VkglTestCase_029801_2);

#define VkglTestCase_029802_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029802_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029802, VkglTestCase_029802_1, VkglTestCase_029802_2);

#define VkglTestCase_029803_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029803_2 "_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029803, VkglTestCase_029803_1, VkglTestCase_029803_2);

#define VkglTestCase_029804_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029804_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029804, VkglTestCase_029804_1, VkglTestCase_029804_2);

#define VkglTestCase_029805_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029805_2 "_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029805, VkglTestCase_029805_1, VkglTestCase_029805_2);

#define VkglTestCase_029806_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029806_2 "rc_func_dst_func.subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029806, VkglTestCase_029806_1, VkglTestCase_029806_2);

#define VkglTestCase_029807_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029807_2 "nc_dst_func.subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029807, VkglTestCase_029807_1, VkglTestCase_029807_2);

#define VkglTestCase_029808_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029808_2 "rc_func_dst_func.subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029808, VkglTestCase_029808_1, VkglTestCase_029808_2);

#define VkglTestCase_029809_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029809_2 "nc_dst_func.subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029809, VkglTestCase_029809_1, VkglTestCase_029809_2);

#define VkglTestCase_029810_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029810_2 "_func_dst_func.subtract_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029810, VkglTestCase_029810_1, VkglTestCase_029810_2);

#define VkglTestCase_029811_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029811_2 "equation_src_func_dst_func.subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029811, VkglTestCase_029811_1, VkglTestCase_029811_2);

#define VkglTestCase_029812_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_029812_2 ".equation_src_func_dst_func.subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029812, VkglTestCase_029812_1, VkglTestCase_029812_2);

#define VkglTestCase_029813_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029813_2 "uation_src_func_dst_func.subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029813, VkglTestCase_029813_1, VkglTestCase_029813_2);

#define VkglTestCase_029814_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029814_2 "n_src_func_dst_func.subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029814, VkglTestCase_029814_1, VkglTestCase_029814_2);

#define VkglTestCase_029815_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029815_2 "uation_src_func_dst_func.subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029815, VkglTestCase_029815_1, VkglTestCase_029815_2);

#define VkglTestCase_029816_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029816_2 "n_src_func_dst_func.subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029816, VkglTestCase_029816_1, VkglTestCase_029816_2);

#define VkglTestCase_029817_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029817_2 "uation_src_func_dst_func.subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029817, VkglTestCase_029817_1, VkglTestCase_029817_2);

#define VkglTestCase_029818_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029818_2 "n_src_func_dst_func.subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029818, VkglTestCase_029818_1, VkglTestCase_029818_2);

#define VkglTestCase_029819_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029819_2 "uation_src_func_dst_func.subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029819, VkglTestCase_029819_1, VkglTestCase_029819_2);

#define VkglTestCase_029820_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029820_2 "n_src_func_dst_func.subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029820, VkglTestCase_029820_1, VkglTestCase_029820_2);

#define VkglTestCase_029821_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029821_2 "ion_src_func_dst_func.subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029821, VkglTestCase_029821_1, VkglTestCase_029821_2);

#define VkglTestCase_029822_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029822_2 "rc_func_dst_func.subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029822, VkglTestCase_029822_1, VkglTestCase_029822_2);

#define VkglTestCase_029823_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029823_2 "ion_src_func_dst_func.subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029823, VkglTestCase_029823_1, VkglTestCase_029823_2);

#define VkglTestCase_029824_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029824_2 "rc_func_dst_func.subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029824, VkglTestCase_029824_1, VkglTestCase_029824_2);

#define VkglTestCase_029825_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029825_2 "n_src_func_dst_func.subtract_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029825, VkglTestCase_029825_1, VkglTestCase_029825_2);

#define VkglTestCase_029826_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029826_2 "ion_src_func_dst_func.subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029826, VkglTestCase_029826_1, VkglTestCase_029826_2);

#define VkglTestCase_029827_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029827_2 "tion_src_func_dst_func.subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029827, VkglTestCase_029827_1, VkglTestCase_029827_2);

#define VkglTestCase_029828_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029828_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029828, VkglTestCase_029828_1, VkglTestCase_029828_2);

#define VkglTestCase_029829_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029829_2 "_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029829, VkglTestCase_029829_1, VkglTestCase_029829_2);

#define VkglTestCase_029830_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029830_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029830, VkglTestCase_029830_1, VkglTestCase_029830_2);

#define VkglTestCase_029831_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029831_2 "_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029831, VkglTestCase_029831_1, VkglTestCase_029831_2);

#define VkglTestCase_029832_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029832_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029832, VkglTestCase_029832_1, VkglTestCase_029832_2);

#define VkglTestCase_029833_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029833_2 "_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029833, VkglTestCase_029833_1, VkglTestCase_029833_2);

#define VkglTestCase_029834_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029834_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029834, VkglTestCase_029834_1, VkglTestCase_029834_2);

#define VkglTestCase_029835_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029835_2 "_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029835, VkglTestCase_029835_1, VkglTestCase_029835_2);

#define VkglTestCase_029836_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029836_2 "rc_func_dst_func.subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029836, VkglTestCase_029836_1, VkglTestCase_029836_2);

#define VkglTestCase_029837_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029837_2 "nc_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029837, VkglTestCase_029837_1, VkglTestCase_029837_2);

#define VkglTestCase_029838_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029838_2 "rc_func_dst_func.subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029838, VkglTestCase_029838_1, VkglTestCase_029838_2);

#define VkglTestCase_029839_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029839_2 "nc_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029839, VkglTestCase_029839_1, VkglTestCase_029839_2);

#define VkglTestCase_029840_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029840_2 "_func_dst_func.subtract_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029840, VkglTestCase_029840_1, VkglTestCase_029840_2);

#define VkglTestCase_029841_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029841_2 "uation_src_func_dst_func.subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029841, VkglTestCase_029841_1, VkglTestCase_029841_2);

#define VkglTestCase_029842_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029842_2 "uation_src_func_dst_func.subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029842, VkglTestCase_029842_1, VkglTestCase_029842_2);

#define VkglTestCase_029843_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029843_2 "ion_src_func_dst_func.subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029843, VkglTestCase_029843_1, VkglTestCase_029843_2);

#define VkglTestCase_029844_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029844_2 "rc_func_dst_func.subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029844, VkglTestCase_029844_1, VkglTestCase_029844_2);

#define VkglTestCase_029845_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029845_2 "ion_src_func_dst_func.subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029845, VkglTestCase_029845_1, VkglTestCase_029845_2);

#define VkglTestCase_029846_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029846_2 "rc_func_dst_func.subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029846, VkglTestCase_029846_1, VkglTestCase_029846_2);

#define VkglTestCase_029847_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029847_2 "ion_src_func_dst_func.subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029847, VkglTestCase_029847_1, VkglTestCase_029847_2);

#define VkglTestCase_029848_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029848_2 "rc_func_dst_func.subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029848, VkglTestCase_029848_1, VkglTestCase_029848_2);

#define VkglTestCase_029849_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029849_2 "ion_src_func_dst_func.subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029849, VkglTestCase_029849_1, VkglTestCase_029849_2);

#define VkglTestCase_029850_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029850_2 "rc_func_dst_func.subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029850, VkglTestCase_029850_1, VkglTestCase_029850_2);

#define VkglTestCase_029851_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029851_2 "n_src_func_dst_func.subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029851, VkglTestCase_029851_1, VkglTestCase_029851_2);

#define VkglTestCase_029852_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029852_2 "_func_dst_func.subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029852, VkglTestCase_029852_1, VkglTestCase_029852_2);

#define VkglTestCase_029853_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029853_2 "n_src_func_dst_func.subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029853, VkglTestCase_029853_1, VkglTestCase_029853_2);

#define VkglTestCase_029854_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029854_2 "_func_dst_func.subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029854, VkglTestCase_029854_1, VkglTestCase_029854_2);

#define VkglTestCase_029855_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029855_2 "src_func_dst_func.subtract_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029855, VkglTestCase_029855_1, VkglTestCase_029855_2);

#define VkglTestCase_029856_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029856_2 "n_src_func_dst_func.subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029856, VkglTestCase_029856_1, VkglTestCase_029856_2);

#define VkglTestCase_029857_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029857_2 "n_src_func_dst_func.subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029857, VkglTestCase_029857_1, VkglTestCase_029857_2);

#define VkglTestCase_029858_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029858_2 "rc_func_dst_func.subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029858, VkglTestCase_029858_1, VkglTestCase_029858_2);

#define VkglTestCase_029859_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029859_2 "nc_dst_func.subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029859, VkglTestCase_029859_1, VkglTestCase_029859_2);

#define VkglTestCase_029860_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029860_2 "rc_func_dst_func.subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029860, VkglTestCase_029860_1, VkglTestCase_029860_2);

#define VkglTestCase_029861_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029861_2 "nc_dst_func.subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029861, VkglTestCase_029861_1, VkglTestCase_029861_2);

#define VkglTestCase_029862_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029862_2 "rc_func_dst_func.subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029862, VkglTestCase_029862_1, VkglTestCase_029862_2);

#define VkglTestCase_029863_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029863_2 "nc_dst_func.subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029863, VkglTestCase_029863_1, VkglTestCase_029863_2);

#define VkglTestCase_029864_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029864_2 "rc_func_dst_func.subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029864, VkglTestCase_029864_1, VkglTestCase_029864_2);

#define VkglTestCase_029865_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029865_2 "nc_dst_func.subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029865, VkglTestCase_029865_1, VkglTestCase_029865_2);

#define VkglTestCase_029866_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029866_2 "_func_dst_func.subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029866, VkglTestCase_029866_1, VkglTestCase_029866_2);

#define VkglTestCase_029867_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func"
#define VkglTestCase_029867_2 "_dst_func.subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029867, VkglTestCase_029867_1, VkglTestCase_029867_2);

#define VkglTestCase_029868_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029868_2 "_func_dst_func.subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029868, VkglTestCase_029868_1, VkglTestCase_029868_2);

#define VkglTestCase_029869_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func"
#define VkglTestCase_029869_2 "_dst_func.subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029869, VkglTestCase_029869_1, VkglTestCase_029869_2);

#define VkglTestCase_029870_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029870_2 "unc_dst_func.subtract_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029870, VkglTestCase_029870_1, VkglTestCase_029870_2);

#define VkglTestCase_029871_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029871_2 "uation_src_func_dst_func.subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029871, VkglTestCase_029871_1, VkglTestCase_029871_2);

#define VkglTestCase_029872_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
#define VkglTestCase_029872_2 "uation_src_func_dst_func.subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029872, VkglTestCase_029872_1, VkglTestCase_029872_2);

#define VkglTestCase_029873_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029873_2 "ion_src_func_dst_func.subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029873, VkglTestCase_029873_1, VkglTestCase_029873_2);

#define VkglTestCase_029874_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029874_2 "rc_func_dst_func.subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029874, VkglTestCase_029874_1, VkglTestCase_029874_2);

#define VkglTestCase_029875_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029875_2 "ion_src_func_dst_func.subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029875, VkglTestCase_029875_1, VkglTestCase_029875_2);

#define VkglTestCase_029876_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029876_2 "rc_func_dst_func.subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029876, VkglTestCase_029876_1, VkglTestCase_029876_2);

#define VkglTestCase_029877_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029877_2 "ion_src_func_dst_func.subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029877, VkglTestCase_029877_1, VkglTestCase_029877_2);

#define VkglTestCase_029878_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029878_2 "rc_func_dst_func.subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029878, VkglTestCase_029878_1, VkglTestCase_029878_2);

#define VkglTestCase_029879_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
#define VkglTestCase_029879_2 "ion_src_func_dst_func.subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029879, VkglTestCase_029879_1, VkglTestCase_029879_2);

#define VkglTestCase_029880_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029880_2 "rc_func_dst_func.subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029880, VkglTestCase_029880_1, VkglTestCase_029880_2);

#define VkglTestCase_029881_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029881_2 "n_src_func_dst_func.subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029881, VkglTestCase_029881_1, VkglTestCase_029881_2);

#define VkglTestCase_029882_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029882_2 "_func_dst_func.subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029882, VkglTestCase_029882_1, VkglTestCase_029882_2);

#define VkglTestCase_029883_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029883_2 "n_src_func_dst_func.subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029883, VkglTestCase_029883_1, VkglTestCase_029883_2);

#define VkglTestCase_029884_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029884_2 "_func_dst_func.subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029884, VkglTestCase_029884_1, VkglTestCase_029884_2);

#define VkglTestCase_029885_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029885_2 "src_func_dst_func.subtract_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029885, VkglTestCase_029885_1, VkglTestCase_029885_2);

#define VkglTestCase_029886_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029886_2 "n_src_func_dst_func.subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029886, VkglTestCase_029886_1, VkglTestCase_029886_2);

#define VkglTestCase_029887_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029887_2 "n_src_func_dst_func.subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029887, VkglTestCase_029887_1, VkglTestCase_029887_2);

#define VkglTestCase_029888_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029888_2 "rc_func_dst_func.subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029888, VkglTestCase_029888_1, VkglTestCase_029888_2);

#define VkglTestCase_029889_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029889_2 "nc_dst_func.subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029889, VkglTestCase_029889_1, VkglTestCase_029889_2);

#define VkglTestCase_029890_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029890_2 "rc_func_dst_func.subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029890, VkglTestCase_029890_1, VkglTestCase_029890_2);

#define VkglTestCase_029891_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029891_2 "nc_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029891, VkglTestCase_029891_1, VkglTestCase_029891_2);

#define VkglTestCase_029892_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029892_2 "rc_func_dst_func.subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029892, VkglTestCase_029892_1, VkglTestCase_029892_2);

#define VkglTestCase_029893_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029893_2 "nc_dst_func.subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029893, VkglTestCase_029893_1, VkglTestCase_029893_2);

#define VkglTestCase_029894_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
#define VkglTestCase_029894_2 "rc_func_dst_func.subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029894, VkglTestCase_029894_1, VkglTestCase_029894_2);

#define VkglTestCase_029895_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_029895_2 "nc_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029895, VkglTestCase_029895_1, VkglTestCase_029895_2);

#define VkglTestCase_029896_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029896_2 "_func_dst_func.subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029896, VkglTestCase_029896_1, VkglTestCase_029896_2);

#define VkglTestCase_029897_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func"
#define VkglTestCase_029897_2 "_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029897, VkglTestCase_029897_1, VkglTestCase_029897_2);

#define VkglTestCase_029898_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029898_2 "_func_dst_func.subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029898, VkglTestCase_029898_1, VkglTestCase_029898_2);

#define VkglTestCase_029899_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func"
#define VkglTestCase_029899_2 "_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029899, VkglTestCase_029899_1, VkglTestCase_029899_2);

#define VkglTestCase_029900_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029900_2 "unc_dst_func.subtract_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029900, VkglTestCase_029900_1, VkglTestCase_029900_2);

#define VkglTestCase_029901_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029901_2 "tion_src_func_dst_func.subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029901, VkglTestCase_029901_1, VkglTestCase_029901_2);

#define VkglTestCase_029902_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029902_2 "tion_src_func_dst_func.subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029902, VkglTestCase_029902_1, VkglTestCase_029902_2);

#define VkglTestCase_029903_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029903_2 "n_src_func_dst_func.subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029903, VkglTestCase_029903_1, VkglTestCase_029903_2);

#define VkglTestCase_029904_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029904_2 "_func_dst_func.subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029904, VkglTestCase_029904_1, VkglTestCase_029904_2);

#define VkglTestCase_029905_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029905_2 "n_src_func_dst_func.subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029905, VkglTestCase_029905_1, VkglTestCase_029905_2);

#define VkglTestCase_029906_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029906_2 "_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029906, VkglTestCase_029906_1, VkglTestCase_029906_2);

#define VkglTestCase_029907_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029907_2 "n_src_func_dst_func.subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029907, VkglTestCase_029907_1, VkglTestCase_029907_2);

#define VkglTestCase_029908_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029908_2 "_func_dst_func.subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029908, VkglTestCase_029908_1, VkglTestCase_029908_2);

#define VkglTestCase_029909_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
#define VkglTestCase_029909_2 "n_src_func_dst_func.subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029909, VkglTestCase_029909_1, VkglTestCase_029909_2);

#define VkglTestCase_029910_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
#define VkglTestCase_029910_2 "_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029910, VkglTestCase_029910_1, VkglTestCase_029910_2);

#define VkglTestCase_029911_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029911_2 "src_func_dst_func.subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029911, VkglTestCase_029911_1, VkglTestCase_029911_2);

#define VkglTestCase_029912_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029912_2 "unc_dst_func.subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029912, VkglTestCase_029912_1, VkglTestCase_029912_2);

#define VkglTestCase_029913_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029913_2 "src_func_dst_func.subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029913, VkglTestCase_029913_1, VkglTestCase_029913_2);

#define VkglTestCase_029914_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029914_2 "unc_dst_func.subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029914, VkglTestCase_029914_1, VkglTestCase_029914_2);

#define VkglTestCase_029915_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029915_2 "c_func_dst_func.subtract_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029915, VkglTestCase_029915_1, VkglTestCase_029915_2);

#define VkglTestCase_029916_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
#define VkglTestCase_029916_2 "quation_src_func_dst_func.reverse_subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029916, VkglTestCase_029916_1, VkglTestCase_029916_2);

#define VkglTestCase_029917_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
#define VkglTestCase_029917_2 "quation_src_func_dst_func.reverse_subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029917, VkglTestCase_029917_1, VkglTestCase_029917_2);

#define VkglTestCase_029918_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029918_2 "tion_src_func_dst_func.reverse_subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029918, VkglTestCase_029918_1, VkglTestCase_029918_2);

#define VkglTestCase_029919_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029919_2 "src_func_dst_func.reverse_subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029919, VkglTestCase_029919_1, VkglTestCase_029919_2);

#define VkglTestCase_029920_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029920_2 "tion_src_func_dst_func.reverse_subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029920, VkglTestCase_029920_1, VkglTestCase_029920_2);

#define VkglTestCase_029921_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029921_2 "src_func_dst_func.reverse_subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029921, VkglTestCase_029921_1, VkglTestCase_029921_2);

#define VkglTestCase_029922_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029922_2 "tion_src_func_dst_func.reverse_subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029922, VkglTestCase_029922_1, VkglTestCase_029922_2);

#define VkglTestCase_029923_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029923_2 "src_func_dst_func.reverse_subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029923, VkglTestCase_029923_1, VkglTestCase_029923_2);

#define VkglTestCase_029924_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029924_2 "tion_src_func_dst_func.reverse_subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029924, VkglTestCase_029924_1, VkglTestCase_029924_2);

#define VkglTestCase_029925_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029925_2 "src_func_dst_func.reverse_subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029925, VkglTestCase_029925_1, VkglTestCase_029925_2);

#define VkglTestCase_029926_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029926_2 "on_src_func_dst_func.reverse_subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029926, VkglTestCase_029926_1, VkglTestCase_029926_2);

#define VkglTestCase_029927_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029927_2 "c_func_dst_func.reverse_subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029927, VkglTestCase_029927_1, VkglTestCase_029927_2);

#define VkglTestCase_029928_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029928_2 "on_src_func_dst_func.reverse_subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029928, VkglTestCase_029928_1, VkglTestCase_029928_2);

#define VkglTestCase_029929_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029929_2 "c_func_dst_func.reverse_subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029929, VkglTestCase_029929_1, VkglTestCase_029929_2);

#define VkglTestCase_029930_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029930_2 "_src_func_dst_func.reverse_subtract_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029930, VkglTestCase_029930_1, VkglTestCase_029930_2);

#define VkglTestCase_029931_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
#define VkglTestCase_029931_2 "quation_src_func_dst_func.reverse_subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029931, VkglTestCase_029931_1, VkglTestCase_029931_2);

#define VkglTestCase_029932_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
#define VkglTestCase_029932_2 "equation_src_func_dst_func.reverse_subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029932, VkglTestCase_029932_1, VkglTestCase_029932_2);

#define VkglTestCase_029933_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029933_2 "ation_src_func_dst_func.reverse_subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029933, VkglTestCase_029933_1, VkglTestCase_029933_2);

#define VkglTestCase_029934_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029934_2 "_src_func_dst_func.reverse_subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029934, VkglTestCase_029934_1, VkglTestCase_029934_2);

#define VkglTestCase_029935_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029935_2 "ation_src_func_dst_func.reverse_subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029935, VkglTestCase_029935_1, VkglTestCase_029935_2);

#define VkglTestCase_029936_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029936_2 "_src_func_dst_func.reverse_subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029936, VkglTestCase_029936_1, VkglTestCase_029936_2);

#define VkglTestCase_029937_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029937_2 "ation_src_func_dst_func.reverse_subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029937, VkglTestCase_029937_1, VkglTestCase_029937_2);

#define VkglTestCase_029938_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029938_2 "_src_func_dst_func.reverse_subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029938, VkglTestCase_029938_1, VkglTestCase_029938_2);

#define VkglTestCase_029939_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029939_2 "ation_src_func_dst_func.reverse_subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029939, VkglTestCase_029939_1, VkglTestCase_029939_2);

#define VkglTestCase_029940_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029940_2 "_src_func_dst_func.reverse_subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029940, VkglTestCase_029940_1, VkglTestCase_029940_2);

#define VkglTestCase_029941_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029941_2 "on_src_func_dst_func.reverse_subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029941, VkglTestCase_029941_1, VkglTestCase_029941_2);

#define VkglTestCase_029942_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029942_2 "c_func_dst_func.reverse_subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029942, VkglTestCase_029942_1, VkglTestCase_029942_2);

#define VkglTestCase_029943_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029943_2 "on_src_func_dst_func.reverse_subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029943, VkglTestCase_029943_1, VkglTestCase_029943_2);

#define VkglTestCase_029944_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029944_2 "c_func_dst_func.reverse_subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029944, VkglTestCase_029944_1, VkglTestCase_029944_2);

#define VkglTestCase_029945_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029945_2 "_src_func_dst_func.reverse_subtract_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029945, VkglTestCase_029945_1, VkglTestCase_029945_2);

#define VkglTestCase_029946_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029946_2 "tion_src_func_dst_func.reverse_subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029946, VkglTestCase_029946_1, VkglTestCase_029946_2);

#define VkglTestCase_029947_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029947_2 "ation_src_func_dst_func.reverse_subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029947, VkglTestCase_029947_1, VkglTestCase_029947_2);

#define VkglTestCase_029948_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029948_2 "on_src_func_dst_func.reverse_subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029948, VkglTestCase_029948_1, VkglTestCase_029948_2);

#define VkglTestCase_029949_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029949_2 "c_func_dst_func.reverse_subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029949, VkglTestCase_029949_1, VkglTestCase_029949_2);

#define VkglTestCase_029950_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029950_2 "on_src_func_dst_func.reverse_subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029950, VkglTestCase_029950_1, VkglTestCase_029950_2);

#define VkglTestCase_029951_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029951_2 "c_func_dst_func.reverse_subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029951, VkglTestCase_029951_1, VkglTestCase_029951_2);

#define VkglTestCase_029952_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029952_2 "on_src_func_dst_func.reverse_subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029952, VkglTestCase_029952_1, VkglTestCase_029952_2);

#define VkglTestCase_029953_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029953_2 "c_func_dst_func.reverse_subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029953, VkglTestCase_029953_1, VkglTestCase_029953_2);

#define VkglTestCase_029954_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029954_2 "on_src_func_dst_func.reverse_subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029954, VkglTestCase_029954_1, VkglTestCase_029954_2);

#define VkglTestCase_029955_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029955_2 "c_func_dst_func.reverse_subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029955, VkglTestCase_029955_1, VkglTestCase_029955_2);

#define VkglTestCase_029956_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029956_2 "src_func_dst_func.reverse_subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029956, VkglTestCase_029956_1, VkglTestCase_029956_2);

#define VkglTestCase_029957_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029957_2 "unc_dst_func.reverse_subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029957, VkglTestCase_029957_1, VkglTestCase_029957_2);

#define VkglTestCase_029958_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029958_2 "src_func_dst_func.reverse_subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029958, VkglTestCase_029958_1, VkglTestCase_029958_2);

#define VkglTestCase_029959_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029959_2 "unc_dst_func.reverse_subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029959, VkglTestCase_029959_1, VkglTestCase_029959_2);

#define VkglTestCase_029960_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029960_2 "c_func_dst_func.reverse_subtract_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029960, VkglTestCase_029960_1, VkglTestCase_029960_2);

#define VkglTestCase_029961_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029961_2 "src_func_dst_func.reverse_subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029961, VkglTestCase_029961_1, VkglTestCase_029961_2);

#define VkglTestCase_029962_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029962_2 "_src_func_dst_func.reverse_subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029962, VkglTestCase_029962_1, VkglTestCase_029962_2);

#define VkglTestCase_029963_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029963_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029963, VkglTestCase_029963_1, VkglTestCase_029963_2);

#define VkglTestCase_029964_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029964_2 "c_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029964, VkglTestCase_029964_1, VkglTestCase_029964_2);

#define VkglTestCase_029965_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029965_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029965, VkglTestCase_029965_1, VkglTestCase_029965_2);

#define VkglTestCase_029966_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029966_2 "c_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029966, VkglTestCase_029966_1, VkglTestCase_029966_2);

#define VkglTestCase_029967_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029967_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029967, VkglTestCase_029967_1, VkglTestCase_029967_2);

#define VkglTestCase_029968_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029968_2 "c_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029968, VkglTestCase_029968_1, VkglTestCase_029968_2);

#define VkglTestCase_029969_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029969_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029969, VkglTestCase_029969_1, VkglTestCase_029969_2);

#define VkglTestCase_029970_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029970_2 "c_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029970, VkglTestCase_029970_1, VkglTestCase_029970_2);

#define VkglTestCase_029971_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029971_2 "unc_dst_func.reverse_subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029971, VkglTestCase_029971_1, VkglTestCase_029971_2);

#define VkglTestCase_029972_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_029972_2 "st_func.reverse_subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029972, VkglTestCase_029972_1, VkglTestCase_029972_2);

#define VkglTestCase_029973_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029973_2 "unc_dst_func.reverse_subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029973, VkglTestCase_029973_1, VkglTestCase_029973_2);

#define VkglTestCase_029974_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_029974_2 "st_func.reverse_subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029974, VkglTestCase_029974_1, VkglTestCase_029974_2);

#define VkglTestCase_029975_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029975_2 "c_dst_func.reverse_subtract_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029975, VkglTestCase_029975_1, VkglTestCase_029975_2);

#define VkglTestCase_029976_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_029976_2 "tion_src_func_dst_func.reverse_subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029976, VkglTestCase_029976_1, VkglTestCase_029976_2);

#define VkglTestCase_029977_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_029977_2 "ation_src_func_dst_func.reverse_subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029977, VkglTestCase_029977_1, VkglTestCase_029977_2);

#define VkglTestCase_029978_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029978_2 "on_src_func_dst_func.reverse_subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029978, VkglTestCase_029978_1, VkglTestCase_029978_2);

#define VkglTestCase_029979_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029979_2 "c_func_dst_func.reverse_subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029979, VkglTestCase_029979_1, VkglTestCase_029979_2);

#define VkglTestCase_029980_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029980_2 "on_src_func_dst_func.reverse_subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029980, VkglTestCase_029980_1, VkglTestCase_029980_2);

#define VkglTestCase_029981_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029981_2 "c_func_dst_func.reverse_subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029981, VkglTestCase_029981_1, VkglTestCase_029981_2);

#define VkglTestCase_029982_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029982_2 "on_src_func_dst_func.reverse_subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029982, VkglTestCase_029982_1, VkglTestCase_029982_2);

#define VkglTestCase_029983_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029983_2 "c_func_dst_func.reverse_subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029983, VkglTestCase_029983_1, VkglTestCase_029983_2);

#define VkglTestCase_029984_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_029984_2 "on_src_func_dst_func.reverse_subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029984, VkglTestCase_029984_1, VkglTestCase_029984_2);

#define VkglTestCase_029985_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029985_2 "c_func_dst_func.reverse_subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029985, VkglTestCase_029985_1, VkglTestCase_029985_2);

#define VkglTestCase_029986_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029986_2 "src_func_dst_func.reverse_subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029986, VkglTestCase_029986_1, VkglTestCase_029986_2);

#define VkglTestCase_029987_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029987_2 "unc_dst_func.reverse_subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029987, VkglTestCase_029987_1, VkglTestCase_029987_2);

#define VkglTestCase_029988_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029988_2 "src_func_dst_func.reverse_subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029988, VkglTestCase_029988_1, VkglTestCase_029988_2);

#define VkglTestCase_029989_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_029989_2 "unc_dst_func.reverse_subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029989, VkglTestCase_029989_1, VkglTestCase_029989_2);

#define VkglTestCase_029990_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029990_2 "c_func_dst_func.reverse_subtract_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029990, VkglTestCase_029990_1, VkglTestCase_029990_2);

#define VkglTestCase_029991_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_029991_2 "src_func_dst_func.reverse_subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029991, VkglTestCase_029991_1, VkglTestCase_029991_2);

#define VkglTestCase_029992_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_029992_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029992, VkglTestCase_029992_1, VkglTestCase_029992_2);

#define VkglTestCase_029993_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029993_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029993, VkglTestCase_029993_1, VkglTestCase_029993_2);

#define VkglTestCase_029994_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029994_2 "c_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029994, VkglTestCase_029994_1, VkglTestCase_029994_2);

#define VkglTestCase_029995_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029995_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029995, VkglTestCase_029995_1, VkglTestCase_029995_2);

#define VkglTestCase_029996_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029996_2 "c_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029996, VkglTestCase_029996_1, VkglTestCase_029996_2);

#define VkglTestCase_029997_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029997_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029997, VkglTestCase_029997_1, VkglTestCase_029997_2);

#define VkglTestCase_029998_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_029998_2 "c_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029998, VkglTestCase_029998_1, VkglTestCase_029998_2);

#define VkglTestCase_029999_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_029999_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029999, VkglTestCase_029999_1, VkglTestCase_029999_2);

#define VkglTestCase_030000_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030000_2 "c_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030000, VkglTestCase_030000_1, VkglTestCase_030000_2);

#define VkglTestCase_030001_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030001_2 "unc_dst_func.reverse_subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030001, VkglTestCase_030001_1, VkglTestCase_030001_2);

#define VkglTestCase_030002_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030002_2 "st_func.reverse_subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030002, VkglTestCase_030002_1, VkglTestCase_030002_2);

#define VkglTestCase_030003_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030003_2 "unc_dst_func.reverse_subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030003, VkglTestCase_030003_1, VkglTestCase_030003_2);

#define VkglTestCase_030004_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030004_2 "st_func.reverse_subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030004, VkglTestCase_030004_1, VkglTestCase_030004_2);

#define VkglTestCase_030005_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030005_2 "c_dst_func.reverse_subtract_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030005, VkglTestCase_030005_1, VkglTestCase_030005_2);

#define VkglTestCase_030006_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_030006_2 "tion_src_func_dst_func.reverse_subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030006, VkglTestCase_030006_1, VkglTestCase_030006_2);

#define VkglTestCase_030007_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_030007_2 "ation_src_func_dst_func.reverse_subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030007, VkglTestCase_030007_1, VkglTestCase_030007_2);

#define VkglTestCase_030008_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030008_2 "on_src_func_dst_func.reverse_subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030008, VkglTestCase_030008_1, VkglTestCase_030008_2);

#define VkglTestCase_030009_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030009_2 "c_func_dst_func.reverse_subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030009, VkglTestCase_030009_1, VkglTestCase_030009_2);

#define VkglTestCase_030010_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030010_2 "on_src_func_dst_func.reverse_subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030010, VkglTestCase_030010_1, VkglTestCase_030010_2);

#define VkglTestCase_030011_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030011_2 "c_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030011, VkglTestCase_030011_1, VkglTestCase_030011_2);

#define VkglTestCase_030012_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030012_2 "on_src_func_dst_func.reverse_subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030012, VkglTestCase_030012_1, VkglTestCase_030012_2);

#define VkglTestCase_030013_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030013_2 "c_func_dst_func.reverse_subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030013, VkglTestCase_030013_1, VkglTestCase_030013_2);

#define VkglTestCase_030014_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030014_2 "on_src_func_dst_func.reverse_subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030014, VkglTestCase_030014_1, VkglTestCase_030014_2);

#define VkglTestCase_030015_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030015_2 "c_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030015, VkglTestCase_030015_1, VkglTestCase_030015_2);

#define VkglTestCase_030016_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030016_2 "src_func_dst_func.reverse_subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030016, VkglTestCase_030016_1, VkglTestCase_030016_2);

#define VkglTestCase_030017_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030017_2 "unc_dst_func.reverse_subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030017, VkglTestCase_030017_1, VkglTestCase_030017_2);

#define VkglTestCase_030018_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030018_2 "src_func_dst_func.reverse_subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030018, VkglTestCase_030018_1, VkglTestCase_030018_2);

#define VkglTestCase_030019_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030019_2 "unc_dst_func.reverse_subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030019, VkglTestCase_030019_1, VkglTestCase_030019_2);

#define VkglTestCase_030020_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030020_2 "c_func_dst_func.reverse_subtract_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030020, VkglTestCase_030020_1, VkglTestCase_030020_2);

#define VkglTestCase_030021_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030021_2 "src_func_dst_func.reverse_subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030021, VkglTestCase_030021_1, VkglTestCase_030021_2);

#define VkglTestCase_030022_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_030022_2 "_src_func_dst_func.reverse_subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030022, VkglTestCase_030022_1, VkglTestCase_030022_2);

#define VkglTestCase_030023_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030023_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030023, VkglTestCase_030023_1, VkglTestCase_030023_2);

#define VkglTestCase_030024_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030024_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030024, VkglTestCase_030024_1, VkglTestCase_030024_2);

#define VkglTestCase_030025_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030025_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030025, VkglTestCase_030025_1, VkglTestCase_030025_2);

#define VkglTestCase_030026_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030026_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030026, VkglTestCase_030026_1, VkglTestCase_030026_2);

#define VkglTestCase_030027_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030027_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030027, VkglTestCase_030027_1, VkglTestCase_030027_2);

#define VkglTestCase_030028_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030028_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030028, VkglTestCase_030028_1, VkglTestCase_030028_2);

#define VkglTestCase_030029_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030029_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030029, VkglTestCase_030029_1, VkglTestCase_030029_2);

#define VkglTestCase_030030_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030030_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030030, VkglTestCase_030030_1, VkglTestCase_030030_2);

#define VkglTestCase_030031_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030031_2 "unc_dst_func.reverse_subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030031, VkglTestCase_030031_1, VkglTestCase_030031_2);

#define VkglTestCase_030032_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030032_2 "st_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030032, VkglTestCase_030032_1, VkglTestCase_030032_2);

#define VkglTestCase_030033_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030033_2 "unc_dst_func.reverse_subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030033, VkglTestCase_030033_1, VkglTestCase_030033_2);

#define VkglTestCase_030034_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030034_2 "st_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030034, VkglTestCase_030034_1, VkglTestCase_030034_2);

#define VkglTestCase_030035_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030035_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030035, VkglTestCase_030035_1, VkglTestCase_030035_2);

#define VkglTestCase_030036_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
#define VkglTestCase_030036_2 "tion_src_func_dst_func.reverse_subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030036, VkglTestCase_030036_1, VkglTestCase_030036_2);

#define VkglTestCase_030037_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equ"
#define VkglTestCase_030037_2 "ation_src_func_dst_func.reverse_subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030037, VkglTestCase_030037_1, VkglTestCase_030037_2);

#define VkglTestCase_030038_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030038_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030038, VkglTestCase_030038_1, VkglTestCase_030038_2);

#define VkglTestCase_030039_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030039_2 "c_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030039, VkglTestCase_030039_1, VkglTestCase_030039_2);

#define VkglTestCase_030040_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030040_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030040, VkglTestCase_030040_1, VkglTestCase_030040_2);

#define VkglTestCase_030041_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030041_2 "c_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030041, VkglTestCase_030041_1, VkglTestCase_030041_2);

#define VkglTestCase_030042_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030042_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030042, VkglTestCase_030042_1, VkglTestCase_030042_2);

#define VkglTestCase_030043_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030043_2 "c_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030043, VkglTestCase_030043_1, VkglTestCase_030043_2);

#define VkglTestCase_030044_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030044_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030044, VkglTestCase_030044_1, VkglTestCase_030044_2);

#define VkglTestCase_030045_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030045_2 "c_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030045, VkglTestCase_030045_1, VkglTestCase_030045_2);

#define VkglTestCase_030046_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030046_2 "src_func_dst_func.reverse_subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030046, VkglTestCase_030046_1, VkglTestCase_030046_2);

#define VkglTestCase_030047_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030047_2 "unc_dst_func.reverse_subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030047, VkglTestCase_030047_1, VkglTestCase_030047_2);

#define VkglTestCase_030048_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030048_2 "src_func_dst_func.reverse_subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030048, VkglTestCase_030048_1, VkglTestCase_030048_2);

#define VkglTestCase_030049_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030049_2 "unc_dst_func.reverse_subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030049, VkglTestCase_030049_1, VkglTestCase_030049_2);

#define VkglTestCase_030050_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030050_2 "c_func_dst_func.reverse_subtract_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030050, VkglTestCase_030050_1, VkglTestCase_030050_2);

#define VkglTestCase_030051_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030051_2 "src_func_dst_func.reverse_subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030051, VkglTestCase_030051_1, VkglTestCase_030051_2);

#define VkglTestCase_030052_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_030052_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030052, VkglTestCase_030052_1, VkglTestCase_030052_2);

#define VkglTestCase_030053_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030053_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030053, VkglTestCase_030053_1, VkglTestCase_030053_2);

#define VkglTestCase_030054_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030054_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030054, VkglTestCase_030054_1, VkglTestCase_030054_2);

#define VkglTestCase_030055_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030055_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030055, VkglTestCase_030055_1, VkglTestCase_030055_2);

#define VkglTestCase_030056_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030056_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030056, VkglTestCase_030056_1, VkglTestCase_030056_2);

#define VkglTestCase_030057_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030057_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030057, VkglTestCase_030057_1, VkglTestCase_030057_2);

#define VkglTestCase_030058_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030058_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030058, VkglTestCase_030058_1, VkglTestCase_030058_2);

#define VkglTestCase_030059_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030059_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030059, VkglTestCase_030059_1, VkglTestCase_030059_2);

#define VkglTestCase_030060_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030060_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030060, VkglTestCase_030060_1, VkglTestCase_030060_2);

#define VkglTestCase_030061_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030061_2 "unc_dst_func.reverse_subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030061, VkglTestCase_030061_1, VkglTestCase_030061_2);

#define VkglTestCase_030062_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030062_2 "st_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030062, VkglTestCase_030062_1, VkglTestCase_030062_2);

#define VkglTestCase_030063_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030063_2 "unc_dst_func.reverse_subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030063, VkglTestCase_030063_1, VkglTestCase_030063_2);

#define VkglTestCase_030064_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030064_2 "st_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030064, VkglTestCase_030064_1, VkglTestCase_030064_2);

#define VkglTestCase_030065_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030065_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030065, VkglTestCase_030065_1, VkglTestCase_030065_2);

#define VkglTestCase_030066_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030066_2 "on_src_func_dst_func.reverse_subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030066, VkglTestCase_030066_1, VkglTestCase_030066_2);

#define VkglTestCase_030067_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030067_2 "on_src_func_dst_func.reverse_subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030067, VkglTestCase_030067_1, VkglTestCase_030067_2);

#define VkglTestCase_030068_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030068_2 "src_func_dst_func.reverse_subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030068, VkglTestCase_030068_1, VkglTestCase_030068_2);

#define VkglTestCase_030069_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030069_2 "unc_dst_func.reverse_subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030069, VkglTestCase_030069_1, VkglTestCase_030069_2);

#define VkglTestCase_030070_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030070_2 "src_func_dst_func.reverse_subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030070, VkglTestCase_030070_1, VkglTestCase_030070_2);

#define VkglTestCase_030071_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030071_2 "unc_dst_func.reverse_subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030071, VkglTestCase_030071_1, VkglTestCase_030071_2);

#define VkglTestCase_030072_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030072_2 "src_func_dst_func.reverse_subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030072, VkglTestCase_030072_1, VkglTestCase_030072_2);

#define VkglTestCase_030073_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030073_2 "unc_dst_func.reverse_subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030073, VkglTestCase_030073_1, VkglTestCase_030073_2);

#define VkglTestCase_030074_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030074_2 "src_func_dst_func.reverse_subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030074, VkglTestCase_030074_1, VkglTestCase_030074_2);

#define VkglTestCase_030075_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030075_2 "unc_dst_func.reverse_subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030075, VkglTestCase_030075_1, VkglTestCase_030075_2);

#define VkglTestCase_030076_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030076_2 "c_func_dst_func.reverse_subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030076, VkglTestCase_030076_1, VkglTestCase_030076_2);

#define VkglTestCase_030077_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030077_2 "c_dst_func.reverse_subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030077, VkglTestCase_030077_1, VkglTestCase_030077_2);

#define VkglTestCase_030078_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030078_2 "c_func_dst_func.reverse_subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030078, VkglTestCase_030078_1, VkglTestCase_030078_2);

#define VkglTestCase_030079_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030079_2 "c_dst_func.reverse_subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030079, VkglTestCase_030079_1, VkglTestCase_030079_2);

#define VkglTestCase_030080_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_"
#define VkglTestCase_030080_2 "func_dst_func.reverse_subtract_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030080, VkglTestCase_030080_1, VkglTestCase_030080_2);

#define VkglTestCase_030081_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030081_2 "c_func_dst_func.reverse_subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030081, VkglTestCase_030081_1, VkglTestCase_030081_2);

#define VkglTestCase_030082_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030082_2 "c_func_dst_func.reverse_subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030082, VkglTestCase_030082_1, VkglTestCase_030082_2);

#define VkglTestCase_030083_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030083_2 "unc_dst_func.reverse_subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030083, VkglTestCase_030083_1, VkglTestCase_030083_2);

#define VkglTestCase_030084_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030084_2 "st_func.reverse_subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030084, VkglTestCase_030084_1, VkglTestCase_030084_2);

#define VkglTestCase_030085_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030085_2 "unc_dst_func.reverse_subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030085, VkglTestCase_030085_1, VkglTestCase_030085_2);

#define VkglTestCase_030086_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030086_2 "st_func.reverse_subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030086, VkglTestCase_030086_1, VkglTestCase_030086_2);

#define VkglTestCase_030087_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030087_2 "unc_dst_func.reverse_subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030087, VkglTestCase_030087_1, VkglTestCase_030087_2);

#define VkglTestCase_030088_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030088_2 "st_func.reverse_subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030088, VkglTestCase_030088_1, VkglTestCase_030088_2);

#define VkglTestCase_030089_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030089_2 "unc_dst_func.reverse_subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030089, VkglTestCase_030089_1, VkglTestCase_030089_2);

#define VkglTestCase_030090_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030090_2 "st_func.reverse_subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030090, VkglTestCase_030090_1, VkglTestCase_030090_2);

#define VkglTestCase_030091_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030091_2 "c_dst_func.reverse_subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030091, VkglTestCase_030091_1, VkglTestCase_030091_2);

#define VkglTestCase_030092_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_dst"
#define VkglTestCase_030092_2 "_func.reverse_subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030092, VkglTestCase_030092_1, VkglTestCase_030092_2);

#define VkglTestCase_030093_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030093_2 "c_dst_func.reverse_subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030093, VkglTestCase_030093_1, VkglTestCase_030093_2);

#define VkglTestCase_030094_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_dst"
#define VkglTestCase_030094_2 "_func.reverse_subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030094, VkglTestCase_030094_1, VkglTestCase_030094_2);

#define VkglTestCase_030095_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_"
#define VkglTestCase_030095_2 "dst_func.reverse_subtract_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030095, VkglTestCase_030095_1, VkglTestCase_030095_2);

#define VkglTestCase_030096_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030096_2 "on_src_func_dst_func.reverse_subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030096, VkglTestCase_030096_1, VkglTestCase_030096_2);

#define VkglTestCase_030097_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equati"
#define VkglTestCase_030097_2 "on_src_func_dst_func.reverse_subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030097, VkglTestCase_030097_1, VkglTestCase_030097_2);

#define VkglTestCase_030098_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030098_2 "src_func_dst_func.reverse_subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030098, VkglTestCase_030098_1, VkglTestCase_030098_2);

#define VkglTestCase_030099_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030099_2 "unc_dst_func.reverse_subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030099, VkglTestCase_030099_1, VkglTestCase_030099_2);

#define VkglTestCase_030100_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030100_2 "src_func_dst_func.reverse_subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030100, VkglTestCase_030100_1, VkglTestCase_030100_2);

#define VkglTestCase_030101_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030101_2 "unc_dst_func.reverse_subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030101, VkglTestCase_030101_1, VkglTestCase_030101_2);

#define VkglTestCase_030102_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030102_2 "src_func_dst_func.reverse_subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030102, VkglTestCase_030102_1, VkglTestCase_030102_2);

#define VkglTestCase_030103_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030103_2 "unc_dst_func.reverse_subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030103, VkglTestCase_030103_1, VkglTestCase_030103_2);

#define VkglTestCase_030104_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
#define VkglTestCase_030104_2 "src_func_dst_func.reverse_subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030104, VkglTestCase_030104_1, VkglTestCase_030104_2);

#define VkglTestCase_030105_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030105_2 "unc_dst_func.reverse_subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030105, VkglTestCase_030105_1, VkglTestCase_030105_2);

#define VkglTestCase_030106_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030106_2 "c_func_dst_func.reverse_subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030106, VkglTestCase_030106_1, VkglTestCase_030106_2);

#define VkglTestCase_030107_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030107_2 "c_dst_func.reverse_subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030107, VkglTestCase_030107_1, VkglTestCase_030107_2);

#define VkglTestCase_030108_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030108_2 "c_func_dst_func.reverse_subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030108, VkglTestCase_030108_1, VkglTestCase_030108_2);

#define VkglTestCase_030109_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030109_2 "c_dst_func.reverse_subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030109, VkglTestCase_030109_1, VkglTestCase_030109_2);

#define VkglTestCase_030110_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_"
#define VkglTestCase_030110_2 "func_dst_func.reverse_subtract_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030110, VkglTestCase_030110_1, VkglTestCase_030110_2);

#define VkglTestCase_030111_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030111_2 "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030111, VkglTestCase_030111_1, VkglTestCase_030111_2);

#define VkglTestCase_030112_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030112_2 "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030112, VkglTestCase_030112_1, VkglTestCase_030112_2);

#define VkglTestCase_030113_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030113_2 "unc_dst_func.reverse_subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030113, VkglTestCase_030113_1, VkglTestCase_030113_2);

#define VkglTestCase_030114_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030114_2 "st_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030114, VkglTestCase_030114_1, VkglTestCase_030114_2);

#define VkglTestCase_030115_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030115_2 "unc_dst_func.reverse_subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030115, VkglTestCase_030115_1, VkglTestCase_030115_2);

#define VkglTestCase_030116_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030116_2 "st_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030116, VkglTestCase_030116_1, VkglTestCase_030116_2);

#define VkglTestCase_030117_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030117_2 "unc_dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030117, VkglTestCase_030117_1, VkglTestCase_030117_2);

#define VkglTestCase_030118_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030118_2 "st_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030118, VkglTestCase_030118_1, VkglTestCase_030118_2);

#define VkglTestCase_030119_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_f"
#define VkglTestCase_030119_2 "unc_dst_func.reverse_subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030119, VkglTestCase_030119_1, VkglTestCase_030119_2);

#define VkglTestCase_030120_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_d"
#define VkglTestCase_030120_2 "st_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030120, VkglTestCase_030120_1, VkglTestCase_030120_2);

#define VkglTestCase_030121_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030121_2 "c_dst_func.reverse_subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030121, VkglTestCase_030121_1, VkglTestCase_030121_2);

#define VkglTestCase_030122_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_dst"
#define VkglTestCase_030122_2 "_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030122, VkglTestCase_030122_1, VkglTestCase_030122_2);

#define VkglTestCase_030123_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030123_2 "c_dst_func.reverse_subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030123, VkglTestCase_030123_1, VkglTestCase_030123_2);

#define VkglTestCase_030124_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_dst"
#define VkglTestCase_030124_2 "_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030124, VkglTestCase_030124_1, VkglTestCase_030124_2);

#define VkglTestCase_030125_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_"
#define VkglTestCase_030125_2 "dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030125, VkglTestCase_030125_1, VkglTestCase_030125_2);

#define VkglTestCase_030126_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_030126_2 "_src_func_dst_func.reverse_subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030126, VkglTestCase_030126_1, VkglTestCase_030126_2);

#define VkglTestCase_030127_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation"
#define VkglTestCase_030127_2 "_src_func_dst_func.reverse_subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030127, VkglTestCase_030127_1, VkglTestCase_030127_2);

#define VkglTestCase_030128_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030128_2 "c_func_dst_func.reverse_subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030128, VkglTestCase_030128_1, VkglTestCase_030128_2);

#define VkglTestCase_030129_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030129_2 "c_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030129, VkglTestCase_030129_1, VkglTestCase_030129_2);

#define VkglTestCase_030130_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030130_2 "c_func_dst_func.reverse_subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030130, VkglTestCase_030130_1, VkglTestCase_030130_2);

#define VkglTestCase_030131_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030131_2 "c_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030131, VkglTestCase_030131_1, VkglTestCase_030131_2);

#define VkglTestCase_030132_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030132_2 "c_func_dst_func.reverse_subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030132, VkglTestCase_030132_1, VkglTestCase_030132_2);

#define VkglTestCase_030133_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030133_2 "c_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030133, VkglTestCase_030133_1, VkglTestCase_030133_2);

#define VkglTestCase_030134_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_sr"
#define VkglTestCase_030134_2 "c_func_dst_func.reverse_subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030134, VkglTestCase_030134_1, VkglTestCase_030134_2);

#define VkglTestCase_030135_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fun"
#define VkglTestCase_030135_2 "c_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030135, VkglTestCase_030135_1, VkglTestCase_030135_2);

#define VkglTestCase_030136_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_"
#define VkglTestCase_030136_2 "func_dst_func.reverse_subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030136, VkglTestCase_030136_1, VkglTestCase_030136_2);

#define VkglTestCase_030137_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_"
#define VkglTestCase_030137_2 "dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030137, VkglTestCase_030137_1, VkglTestCase_030137_2);

#define VkglTestCase_030138_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_"
#define VkglTestCase_030138_2 "func_dst_func.reverse_subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030138, VkglTestCase_030138_1, VkglTestCase_030138_2);

#define VkglTestCase_030139_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_func_"
#define VkglTestCase_030139_2 "dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030139, VkglTestCase_030139_1, VkglTestCase_030139_2);

#define VkglTestCase_030140_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src_fu"
#define VkglTestCase_030140_2 "nc_dst_func.reverse_subtract_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030140, VkglTestCase_030140_1, VkglTestCase_030140_2);

#define VkglTestCase_030141_1 "dEQP-GLES3.functional.fragment_ops.blend"
#define VkglTestCase_030141_2 ".fbo_srgb.equation_src_func_dst_func.min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030141, VkglTestCase_030141_1, VkglTestCase_030141_2);

#define VkglTestCase_030142_1 "dEQP-GLES3.functional.fragment_ops.blend"
#define VkglTestCase_030142_2 ".fbo_srgb.equation_src_func_dst_func.max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030142, VkglTestCase_030142_1, VkglTestCase_030142_2);
=======
static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
        "srgb.equation_src_func_dst_func.add_zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029466 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.equation_src_func_dst_func.add_zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029467 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029468 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029469 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029470 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029471 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029472 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029473 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029474 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029475 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029476 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029477 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029478 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029479 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029480 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.equation_src_func_dst_func.add_one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029481 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo"
        "_srgb.equation_src_func_dst_func.add_one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029482 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029483 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029484 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029485 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029486 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029487 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029488 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029489 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029490 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".equation_src_func_dst_func.add_one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029491 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
        "tion_src_func_dst_func.add_one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029492 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
        ".equation_src_func_dst_func.add_one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029493 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
        "tion_src_func_dst_func.add_one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029494 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.e"
        "quation_src_func_dst_func.add_one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029495 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029496 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029497 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029498 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029499 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029500 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029501 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029502 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029503 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029504 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029505 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029506 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
        "n_src_func_dst_func.add_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029507 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029508 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
        "n_src_func_dst_func.add_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029509 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equa"
        "tion_src_func_dst_func.add_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029510 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029511 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029512 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029513 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
        "rc_func_dst_func.add_one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029514 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029515 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
        "rc_func_dst_func.add_one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029516 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029517 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
        "rc_func_dst_func.add_one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029518 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029519 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_s"
        "rc_func_dst_func.add_one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029520 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029521 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
        "_func_dst_func.add_one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029522 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029523 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_src"
        "_func_dst_func.add_one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029524 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equation_"
        "src_func_dst_func.add_one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029525 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029526 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
        "gb.equation_src_func_dst_func.add_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029527 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029528 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029529 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029530 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029531 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029532 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029533 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb."
        "equation_src_func_dst_func.add_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029534 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equat"
        "ion_src_func_dst_func.add_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029535 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029536 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.equatio"
        "n_src_func_dst_func.add_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029537 end";
}

static HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_029538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.eq"
        "uation_src_func_dst_func.add_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30030TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30030TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30030TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30030TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30030TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_029538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_029538 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
