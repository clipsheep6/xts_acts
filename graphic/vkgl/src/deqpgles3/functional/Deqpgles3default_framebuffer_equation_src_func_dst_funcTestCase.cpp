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
#include "../ActsDeqpgles30029TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30029TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_028314_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_028314_2 "ramebuffer.equation_src_func_dst_func.add_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028314, VkglTestCase_028314_1, VkglTestCase_028314_2);

#define VkglTestCase_028315_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_028315_2 "ramebuffer.equation_src_func_dst_func.add_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028315, VkglTestCase_028315_1, VkglTestCase_028315_2);

#define VkglTestCase_028316_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028316_2 "ebuffer.equation_src_func_dst_func.add_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028316, VkglTestCase_028316_1, VkglTestCase_028316_2);

#define VkglTestCase_028317_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028317_2 "er.equation_src_func_dst_func.add_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028317, VkglTestCase_028317_1, VkglTestCase_028317_2);

#define VkglTestCase_028318_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028318_2 "ebuffer.equation_src_func_dst_func.add_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028318, VkglTestCase_028318_1, VkglTestCase_028318_2);

#define VkglTestCase_028319_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028319_2 "er.equation_src_func_dst_func.add_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028319, VkglTestCase_028319_1, VkglTestCase_028319_2);

#define VkglTestCase_028320_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028320_2 "ebuffer.equation_src_func_dst_func.add_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028320, VkglTestCase_028320_1, VkglTestCase_028320_2);

#define VkglTestCase_028321_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028321_2 "er.equation_src_func_dst_func.add_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028321, VkglTestCase_028321_1, VkglTestCase_028321_2);

#define VkglTestCase_028322_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028322_2 "ebuffer.equation_src_func_dst_func.add_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028322, VkglTestCase_028322_1, VkglTestCase_028322_2);

#define VkglTestCase_028323_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028323_2 "er.equation_src_func_dst_func.add_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028323, VkglTestCase_028323_1, VkglTestCase_028323_2);

#define VkglTestCase_028324_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028324_2 "uffer.equation_src_func_dst_func.add_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028324, VkglTestCase_028324_1, VkglTestCase_028324_2);

#define VkglTestCase_028325_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028325_2 ".equation_src_func_dst_func.add_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028325, VkglTestCase_028325_1, VkglTestCase_028325_2);

#define VkglTestCase_028326_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028326_2 "uffer.equation_src_func_dst_func.add_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028326, VkglTestCase_028326_1, VkglTestCase_028326_2);

#define VkglTestCase_028327_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028327_2 ".equation_src_func_dst_func.add_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028327, VkglTestCase_028327_1, VkglTestCase_028327_2);

#define VkglTestCase_028328_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028328_2 "fer.equation_src_func_dst_func.add_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028328, VkglTestCase_028328_1, VkglTestCase_028328_2);

#define VkglTestCase_028329_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_028329_2 "ramebuffer.equation_src_func_dst_func.add_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028329, VkglTestCase_028329_1, VkglTestCase_028329_2);

#define VkglTestCase_028330_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_028330_2 "framebuffer.equation_src_func_dst_func.add_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028330, VkglTestCase_028330_1, VkglTestCase_028330_2);

#define VkglTestCase_028331_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028331_2 "mebuffer.equation_src_func_dst_func.add_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028331, VkglTestCase_028331_1, VkglTestCase_028331_2);

#define VkglTestCase_028332_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028332_2 "fer.equation_src_func_dst_func.add_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028332, VkglTestCase_028332_1, VkglTestCase_028332_2);

#define VkglTestCase_028333_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028333_2 "mebuffer.equation_src_func_dst_func.add_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028333, VkglTestCase_028333_1, VkglTestCase_028333_2);

#define VkglTestCase_028334_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028334_2 "fer.equation_src_func_dst_func.add_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028334, VkglTestCase_028334_1, VkglTestCase_028334_2);

#define VkglTestCase_028335_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028335_2 "mebuffer.equation_src_func_dst_func.add_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028335, VkglTestCase_028335_1, VkglTestCase_028335_2);

#define VkglTestCase_028336_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028336_2 "fer.equation_src_func_dst_func.add_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028336, VkglTestCase_028336_1, VkglTestCase_028336_2);

#define VkglTestCase_028337_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028337_2 "mebuffer.equation_src_func_dst_func.add_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028337, VkglTestCase_028337_1, VkglTestCase_028337_2);

#define VkglTestCase_028338_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028338_2 "fer.equation_src_func_dst_func.add_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028338, VkglTestCase_028338_1, VkglTestCase_028338_2);

#define VkglTestCase_028339_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028339_2 "uffer.equation_src_func_dst_func.add_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028339, VkglTestCase_028339_1, VkglTestCase_028339_2);

#define VkglTestCase_028340_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028340_2 ".equation_src_func_dst_func.add_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028340, VkglTestCase_028340_1, VkglTestCase_028340_2);

#define VkglTestCase_028341_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028341_2 "uffer.equation_src_func_dst_func.add_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028341, VkglTestCase_028341_1, VkglTestCase_028341_2);

#define VkglTestCase_028342_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028342_2 ".equation_src_func_dst_func.add_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028342, VkglTestCase_028342_1, VkglTestCase_028342_2);

#define VkglTestCase_028343_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028343_2 "fer.equation_src_func_dst_func.add_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028343, VkglTestCase_028343_1, VkglTestCase_028343_2);

#define VkglTestCase_028344_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028344_2 "ebuffer.equation_src_func_dst_func.add_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028344, VkglTestCase_028344_1, VkglTestCase_028344_2);

#define VkglTestCase_028345_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028345_2 "mebuffer.equation_src_func_dst_func.add_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028345, VkglTestCase_028345_1, VkglTestCase_028345_2);

#define VkglTestCase_028346_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028346_2 "uffer.equation_src_func_dst_func.add_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028346, VkglTestCase_028346_1, VkglTestCase_028346_2);

#define VkglTestCase_028347_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028347_2 ".equation_src_func_dst_func.add_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028347, VkglTestCase_028347_1, VkglTestCase_028347_2);

#define VkglTestCase_028348_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028348_2 "uffer.equation_src_func_dst_func.add_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028348, VkglTestCase_028348_1, VkglTestCase_028348_2);

#define VkglTestCase_028349_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028349_2 ".equation_src_func_dst_func.add_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028349, VkglTestCase_028349_1, VkglTestCase_028349_2);

#define VkglTestCase_028350_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028350_2 "uffer.equation_src_func_dst_func.add_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028350, VkglTestCase_028350_1, VkglTestCase_028350_2);

#define VkglTestCase_028351_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028351_2 ".equation_src_func_dst_func.add_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028351, VkglTestCase_028351_1, VkglTestCase_028351_2);

#define VkglTestCase_028352_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028352_2 "uffer.equation_src_func_dst_func.add_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028352, VkglTestCase_028352_1, VkglTestCase_028352_2);

#define VkglTestCase_028353_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028353_2 ".equation_src_func_dst_func.add_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028353, VkglTestCase_028353_1, VkglTestCase_028353_2);

#define VkglTestCase_028354_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028354_2 "er.equation_src_func_dst_func.add_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028354, VkglTestCase_028354_1, VkglTestCase_028354_2);

#define VkglTestCase_028355_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028355_2 "uation_src_func_dst_func.add_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028355, VkglTestCase_028355_1, VkglTestCase_028355_2);

#define VkglTestCase_028356_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028356_2 "er.equation_src_func_dst_func.add_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028356, VkglTestCase_028356_1, VkglTestCase_028356_2);

#define VkglTestCase_028357_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028357_2 "uation_src_func_dst_func.add_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028357, VkglTestCase_028357_1, VkglTestCase_028357_2);

#define VkglTestCase_028358_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028358_2 ".equation_src_func_dst_func.add_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028358, VkglTestCase_028358_1, VkglTestCase_028358_2);

#define VkglTestCase_028359_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028359_2 "er.equation_src_func_dst_func.add_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028359, VkglTestCase_028359_1, VkglTestCase_028359_2);

#define VkglTestCase_028360_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028360_2 "fer.equation_src_func_dst_func.add_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028360, VkglTestCase_028360_1, VkglTestCase_028360_2);

#define VkglTestCase_028361_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028361_2 ".equation_src_func_dst_func.add_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028361, VkglTestCase_028361_1, VkglTestCase_028361_2);

#define VkglTestCase_028362_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028362_2 "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028362, VkglTestCase_028362_1, VkglTestCase_028362_2);

#define VkglTestCase_028363_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028363_2 ".equation_src_func_dst_func.add_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028363, VkglTestCase_028363_1, VkglTestCase_028363_2);

#define VkglTestCase_028364_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028364_2 "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028364, VkglTestCase_028364_1, VkglTestCase_028364_2);

#define VkglTestCase_028365_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028365_2 ".equation_src_func_dst_func.add_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028365, VkglTestCase_028365_1, VkglTestCase_028365_2);

#define VkglTestCase_028366_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028366_2 "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028366, VkglTestCase_028366_1, VkglTestCase_028366_2);

#define VkglTestCase_028367_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028367_2 ".equation_src_func_dst_func.add_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028367, VkglTestCase_028367_1, VkglTestCase_028367_2);

#define VkglTestCase_028368_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028368_2 "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028368, VkglTestCase_028368_1, VkglTestCase_028368_2);

#define VkglTestCase_028369_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028369_2 "uation_src_func_dst_func.add_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028369, VkglTestCase_028369_1, VkglTestCase_028369_2);

#define VkglTestCase_028370_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028370_2 "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028370, VkglTestCase_028370_1, VkglTestCase_028370_2);

#define VkglTestCase_028371_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028371_2 "uation_src_func_dst_func.add_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028371, VkglTestCase_028371_1, VkglTestCase_028371_2);

#define VkglTestCase_028372_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028372_2 "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028372, VkglTestCase_028372_1, VkglTestCase_028372_2);

#define VkglTestCase_028373_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028373_2 "tion_src_func_dst_func.add_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028373, VkglTestCase_028373_1, VkglTestCase_028373_2);

#define VkglTestCase_028374_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028374_2 "ebuffer.equation_src_func_dst_func.add_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028374, VkglTestCase_028374_1, VkglTestCase_028374_2);

#define VkglTestCase_028375_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028375_2 "mebuffer.equation_src_func_dst_func.add_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028375, VkglTestCase_028375_1, VkglTestCase_028375_2);

#define VkglTestCase_028376_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028376_2 "uffer.equation_src_func_dst_func.add_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028376, VkglTestCase_028376_1, VkglTestCase_028376_2);

#define VkglTestCase_028377_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028377_2 ".equation_src_func_dst_func.add_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028377, VkglTestCase_028377_1, VkglTestCase_028377_2);

#define VkglTestCase_028378_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028378_2 "uffer.equation_src_func_dst_func.add_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028378, VkglTestCase_028378_1, VkglTestCase_028378_2);

#define VkglTestCase_028379_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028379_2 ".equation_src_func_dst_func.add_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028379, VkglTestCase_028379_1, VkglTestCase_028379_2);

#define VkglTestCase_028380_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028380_2 "uffer.equation_src_func_dst_func.add_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028380, VkglTestCase_028380_1, VkglTestCase_028380_2);

#define VkglTestCase_028381_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028381_2 ".equation_src_func_dst_func.add_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028381, VkglTestCase_028381_1, VkglTestCase_028381_2);

#define VkglTestCase_028382_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028382_2 "uffer.equation_src_func_dst_func.add_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028382, VkglTestCase_028382_1, VkglTestCase_028382_2);

#define VkglTestCase_028383_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028383_2 ".equation_src_func_dst_func.add_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028383, VkglTestCase_028383_1, VkglTestCase_028383_2);

#define VkglTestCase_028384_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028384_2 "er.equation_src_func_dst_func.add_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028384, VkglTestCase_028384_1, VkglTestCase_028384_2);

#define VkglTestCase_028385_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028385_2 "uation_src_func_dst_func.add_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028385, VkglTestCase_028385_1, VkglTestCase_028385_2);

#define VkglTestCase_028386_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028386_2 "er.equation_src_func_dst_func.add_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028386, VkglTestCase_028386_1, VkglTestCase_028386_2);

#define VkglTestCase_028387_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028387_2 "uation_src_func_dst_func.add_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028387, VkglTestCase_028387_1, VkglTestCase_028387_2);

#define VkglTestCase_028388_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028388_2 ".equation_src_func_dst_func.add_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028388, VkglTestCase_028388_1, VkglTestCase_028388_2);

#define VkglTestCase_028389_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028389_2 "er.equation_src_func_dst_func.add_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028389, VkglTestCase_028389_1, VkglTestCase_028389_2);

#define VkglTestCase_028390_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028390_2 "fer.equation_src_func_dst_func.add_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028390, VkglTestCase_028390_1, VkglTestCase_028390_2);

#define VkglTestCase_028391_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028391_2 ".equation_src_func_dst_func.add_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028391, VkglTestCase_028391_1, VkglTestCase_028391_2);

#define VkglTestCase_028392_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028392_2 "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028392, VkglTestCase_028392_1, VkglTestCase_028392_2);

#define VkglTestCase_028393_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028393_2 ".equation_src_func_dst_func.add_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028393, VkglTestCase_028393_1, VkglTestCase_028393_2);

#define VkglTestCase_028394_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028394_2 "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028394, VkglTestCase_028394_1, VkglTestCase_028394_2);

#define VkglTestCase_028395_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028395_2 ".equation_src_func_dst_func.add_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028395, VkglTestCase_028395_1, VkglTestCase_028395_2);

#define VkglTestCase_028396_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028396_2 "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028396, VkglTestCase_028396_1, VkglTestCase_028396_2);

#define VkglTestCase_028397_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028397_2 ".equation_src_func_dst_func.add_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028397, VkglTestCase_028397_1, VkglTestCase_028397_2);

#define VkglTestCase_028398_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028398_2 "tion_src_func_dst_func.add_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028398, VkglTestCase_028398_1, VkglTestCase_028398_2);

#define VkglTestCase_028399_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028399_2 "uation_src_func_dst_func.add_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028399, VkglTestCase_028399_1, VkglTestCase_028399_2);

#define VkglTestCase_028400_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028400_2 "n_src_func_dst_func.add_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028400, VkglTestCase_028400_1, VkglTestCase_028400_2);

#define VkglTestCase_028401_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028401_2 "uation_src_func_dst_func.add_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028401, VkglTestCase_028401_1, VkglTestCase_028401_2);

#define VkglTestCase_028402_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028402_2 "n_src_func_dst_func.add_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028402, VkglTestCase_028402_1, VkglTestCase_028402_2);

#define VkglTestCase_028403_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028403_2 "tion_src_func_dst_func.add_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028403, VkglTestCase_028403_1, VkglTestCase_028403_2);

#define VkglTestCase_028404_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028404_2 "ebuffer.equation_src_func_dst_func.add_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028404, VkglTestCase_028404_1, VkglTestCase_028404_2);

#define VkglTestCase_028405_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028405_2 "mebuffer.equation_src_func_dst_func.add_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028405, VkglTestCase_028405_1, VkglTestCase_028405_2);

#define VkglTestCase_028406_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028406_2 "uffer.equation_src_func_dst_func.add_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028406, VkglTestCase_028406_1, VkglTestCase_028406_2);

#define VkglTestCase_028407_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028407_2 ".equation_src_func_dst_func.add_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028407, VkglTestCase_028407_1, VkglTestCase_028407_2);

#define VkglTestCase_028408_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028408_2 "uffer.equation_src_func_dst_func.add_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028408, VkglTestCase_028408_1, VkglTestCase_028408_2);

#define VkglTestCase_028409_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028409_2 ".equation_src_func_dst_func.add_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028409, VkglTestCase_028409_1, VkglTestCase_028409_2);

#define VkglTestCase_028410_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028410_2 "uffer.equation_src_func_dst_func.add_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028410, VkglTestCase_028410_1, VkglTestCase_028410_2);

#define VkglTestCase_028411_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028411_2 ".equation_src_func_dst_func.add_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028411, VkglTestCase_028411_1, VkglTestCase_028411_2);

#define VkglTestCase_028412_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028412_2 "uffer.equation_src_func_dst_func.add_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028412, VkglTestCase_028412_1, VkglTestCase_028412_2);

#define VkglTestCase_028413_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028413_2 ".equation_src_func_dst_func.add_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028413, VkglTestCase_028413_1, VkglTestCase_028413_2);

#define VkglTestCase_028414_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028414_2 "er.equation_src_func_dst_func.add_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028414, VkglTestCase_028414_1, VkglTestCase_028414_2);

#define VkglTestCase_028415_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028415_2 "uation_src_func_dst_func.add_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028415, VkglTestCase_028415_1, VkglTestCase_028415_2);

#define VkglTestCase_028416_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028416_2 "er.equation_src_func_dst_func.add_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028416, VkglTestCase_028416_1, VkglTestCase_028416_2);

#define VkglTestCase_028417_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028417_2 "uation_src_func_dst_func.add_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028417, VkglTestCase_028417_1, VkglTestCase_028417_2);

#define VkglTestCase_028418_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028418_2 ".equation_src_func_dst_func.add_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028418, VkglTestCase_028418_1, VkglTestCase_028418_2);

#define VkglTestCase_028419_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028419_2 "er.equation_src_func_dst_func.add_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028419, VkglTestCase_028419_1, VkglTestCase_028419_2);

#define VkglTestCase_028420_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028420_2 "fer.equation_src_func_dst_func.add_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028420, VkglTestCase_028420_1, VkglTestCase_028420_2);

#define VkglTestCase_028421_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028421_2 ".equation_src_func_dst_func.add_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028421, VkglTestCase_028421_1, VkglTestCase_028421_2);

#define VkglTestCase_028422_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028422_2 "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028422, VkglTestCase_028422_1, VkglTestCase_028422_2);

#define VkglTestCase_028423_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028423_2 ".equation_src_func_dst_func.add_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028423, VkglTestCase_028423_1, VkglTestCase_028423_2);

#define VkglTestCase_028424_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028424_2 "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028424, VkglTestCase_028424_1, VkglTestCase_028424_2);

#define VkglTestCase_028425_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028425_2 ".equation_src_func_dst_func.add_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028425, VkglTestCase_028425_1, VkglTestCase_028425_2);

#define VkglTestCase_028426_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028426_2 "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028426, VkglTestCase_028426_1, VkglTestCase_028426_2);

#define VkglTestCase_028427_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028427_2 ".equation_src_func_dst_func.add_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028427, VkglTestCase_028427_1, VkglTestCase_028427_2);

#define VkglTestCase_028428_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028428_2 "tion_src_func_dst_func.add_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028428, VkglTestCase_028428_1, VkglTestCase_028428_2);

#define VkglTestCase_028429_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028429_2 "uation_src_func_dst_func.add_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028429, VkglTestCase_028429_1, VkglTestCase_028429_2);

#define VkglTestCase_028430_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028430_2 "n_src_func_dst_func.add_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028430, VkglTestCase_028430_1, VkglTestCase_028430_2);

#define VkglTestCase_028431_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028431_2 "uation_src_func_dst_func.add_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028431, VkglTestCase_028431_1, VkglTestCase_028431_2);

#define VkglTestCase_028432_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028432_2 "n_src_func_dst_func.add_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028432, VkglTestCase_028432_1, VkglTestCase_028432_2);

#define VkglTestCase_028433_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028433_2 "tion_src_func_dst_func.add_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028433, VkglTestCase_028433_1, VkglTestCase_028433_2);

#define VkglTestCase_028434_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028434_2 "ebuffer.equation_src_func_dst_func.add_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028434, VkglTestCase_028434_1, VkglTestCase_028434_2);

#define VkglTestCase_028435_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028435_2 "mebuffer.equation_src_func_dst_func.add_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028435, VkglTestCase_028435_1, VkglTestCase_028435_2);

#define VkglTestCase_028436_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028436_2 "uffer.equation_src_func_dst_func.add_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028436, VkglTestCase_028436_1, VkglTestCase_028436_2);

#define VkglTestCase_028437_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028437_2 ".equation_src_func_dst_func.add_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028437, VkglTestCase_028437_1, VkglTestCase_028437_2);

#define VkglTestCase_028438_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028438_2 "uffer.equation_src_func_dst_func.add_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028438, VkglTestCase_028438_1, VkglTestCase_028438_2);

#define VkglTestCase_028439_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028439_2 ".equation_src_func_dst_func.add_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028439, VkglTestCase_028439_1, VkglTestCase_028439_2);

#define VkglTestCase_028440_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028440_2 "uffer.equation_src_func_dst_func.add_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028440, VkglTestCase_028440_1, VkglTestCase_028440_2);

#define VkglTestCase_028441_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028441_2 ".equation_src_func_dst_func.add_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028441, VkglTestCase_028441_1, VkglTestCase_028441_2);

#define VkglTestCase_028442_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028442_2 "uffer.equation_src_func_dst_func.add_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028442, VkglTestCase_028442_1, VkglTestCase_028442_2);

#define VkglTestCase_028443_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028443_2 ".equation_src_func_dst_func.add_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028443, VkglTestCase_028443_1, VkglTestCase_028443_2);

#define VkglTestCase_028444_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028444_2 "er.equation_src_func_dst_func.add_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028444, VkglTestCase_028444_1, VkglTestCase_028444_2);

#define VkglTestCase_028445_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028445_2 "uation_src_func_dst_func.add_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028445, VkglTestCase_028445_1, VkglTestCase_028445_2);

#define VkglTestCase_028446_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028446_2 "er.equation_src_func_dst_func.add_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028446, VkglTestCase_028446_1, VkglTestCase_028446_2);

#define VkglTestCase_028447_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028447_2 "uation_src_func_dst_func.add_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028447, VkglTestCase_028447_1, VkglTestCase_028447_2);

#define VkglTestCase_028448_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028448_2 ".equation_src_func_dst_func.add_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028448, VkglTestCase_028448_1, VkglTestCase_028448_2);

#define VkglTestCase_028449_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028449_2 "er.equation_src_func_dst_func.add_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028449, VkglTestCase_028449_1, VkglTestCase_028449_2);

#define VkglTestCase_028450_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028450_2 "fer.equation_src_func_dst_func.add_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028450, VkglTestCase_028450_1, VkglTestCase_028450_2);

#define VkglTestCase_028451_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028451_2 ".equation_src_func_dst_func.add_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028451, VkglTestCase_028451_1, VkglTestCase_028451_2);

#define VkglTestCase_028452_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028452_2 "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028452, VkglTestCase_028452_1, VkglTestCase_028452_2);

#define VkglTestCase_028453_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028453_2 ".equation_src_func_dst_func.add_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028453, VkglTestCase_028453_1, VkglTestCase_028453_2);

#define VkglTestCase_028454_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028454_2 "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028454, VkglTestCase_028454_1, VkglTestCase_028454_2);

#define VkglTestCase_028455_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028455_2 ".equation_src_func_dst_func.add_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028455, VkglTestCase_028455_1, VkglTestCase_028455_2);

#define VkglTestCase_028456_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028456_2 "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028456, VkglTestCase_028456_1, VkglTestCase_028456_2);

#define VkglTestCase_028457_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028457_2 ".equation_src_func_dst_func.add_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028457, VkglTestCase_028457_1, VkglTestCase_028457_2);

#define VkglTestCase_028458_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028458_2 "tion_src_func_dst_func.add_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028458, VkglTestCase_028458_1, VkglTestCase_028458_2);

#define VkglTestCase_028459_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028459_2 "uation_src_func_dst_func.add_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028459, VkglTestCase_028459_1, VkglTestCase_028459_2);

#define VkglTestCase_028460_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028460_2 "n_src_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028460, VkglTestCase_028460_1, VkglTestCase_028460_2);

#define VkglTestCase_028461_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028461_2 "uation_src_func_dst_func.add_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028461, VkglTestCase_028461_1, VkglTestCase_028461_2);

#define VkglTestCase_028462_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028462_2 "n_src_func_dst_func.add_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028462, VkglTestCase_028462_1, VkglTestCase_028462_2);

#define VkglTestCase_028463_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028463_2 "tion_src_func_dst_func.add_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028463, VkglTestCase_028463_1, VkglTestCase_028463_2);

#define VkglTestCase_028464_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028464_2 "uffer.equation_src_func_dst_func.add_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028464, VkglTestCase_028464_1, VkglTestCase_028464_2);

#define VkglTestCase_028465_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028465_2 "uffer.equation_src_func_dst_func.add_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028465, VkglTestCase_028465_1, VkglTestCase_028465_2);

#define VkglTestCase_028466_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028466_2 "er.equation_src_func_dst_func.add_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028466, VkglTestCase_028466_1, VkglTestCase_028466_2);

#define VkglTestCase_028467_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028467_2 "uation_src_func_dst_func.add_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028467, VkglTestCase_028467_1, VkglTestCase_028467_2);

#define VkglTestCase_028468_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028468_2 "er.equation_src_func_dst_func.add_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028468, VkglTestCase_028468_1, VkglTestCase_028468_2);

#define VkglTestCase_028469_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028469_2 "uation_src_func_dst_func.add_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028469, VkglTestCase_028469_1, VkglTestCase_028469_2);

#define VkglTestCase_028470_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028470_2 "er.equation_src_func_dst_func.add_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028470, VkglTestCase_028470_1, VkglTestCase_028470_2);

#define VkglTestCase_028471_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028471_2 "uation_src_func_dst_func.add_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028471, VkglTestCase_028471_1, VkglTestCase_028471_2);

#define VkglTestCase_028472_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028472_2 "er.equation_src_func_dst_func.add_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028472, VkglTestCase_028472_1, VkglTestCase_028472_2);

#define VkglTestCase_028473_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028473_2 "uation_src_func_dst_func.add_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028473, VkglTestCase_028473_1, VkglTestCase_028473_2);

#define VkglTestCase_028474_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028474_2 ".equation_src_func_dst_func.add_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028474, VkglTestCase_028474_1, VkglTestCase_028474_2);

#define VkglTestCase_028475_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028475_2 "tion_src_func_dst_func.add_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028475, VkglTestCase_028475_1, VkglTestCase_028475_2);

#define VkglTestCase_028476_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028476_2 ".equation_src_func_dst_func.add_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028476, VkglTestCase_028476_1, VkglTestCase_028476_2);

#define VkglTestCase_028477_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028477_2 "tion_src_func_dst_func.add_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028477, VkglTestCase_028477_1, VkglTestCase_028477_2);

#define VkglTestCase_028478_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028478_2 "quation_src_func_dst_func.add_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028478, VkglTestCase_028478_1, VkglTestCase_028478_2);

#define VkglTestCase_028479_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028479_2 ".equation_src_func_dst_func.add_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028479, VkglTestCase_028479_1, VkglTestCase_028479_2);

#define VkglTestCase_028480_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028480_2 ".equation_src_func_dst_func.add_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028480, VkglTestCase_028480_1, VkglTestCase_028480_2);

#define VkglTestCase_028481_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028481_2 "uation_src_func_dst_func.add_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028481, VkglTestCase_028481_1, VkglTestCase_028481_2);

#define VkglTestCase_028482_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028482_2 "n_src_func_dst_func.add_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028482, VkglTestCase_028482_1, VkglTestCase_028482_2);

#define VkglTestCase_028483_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028483_2 "uation_src_func_dst_func.add_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028483, VkglTestCase_028483_1, VkglTestCase_028483_2);

#define VkglTestCase_028484_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028484_2 "n_src_func_dst_func.add_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028484, VkglTestCase_028484_1, VkglTestCase_028484_2);

#define VkglTestCase_028485_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028485_2 "uation_src_func_dst_func.add_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028485, VkglTestCase_028485_1, VkglTestCase_028485_2);

#define VkglTestCase_028486_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028486_2 "n_src_func_dst_func.add_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028486, VkglTestCase_028486_1, VkglTestCase_028486_2);

#define VkglTestCase_028487_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028487_2 "uation_src_func_dst_func.add_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028487, VkglTestCase_028487_1, VkglTestCase_028487_2);

#define VkglTestCase_028488_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028488_2 "n_src_func_dst_func.add_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028488, VkglTestCase_028488_1, VkglTestCase_028488_2);

#define VkglTestCase_028489_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028489_2 "tion_src_func_dst_func.add_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028489, VkglTestCase_028489_1, VkglTestCase_028489_2);

#define VkglTestCase_028490_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028490_2 "src_func_dst_func.add_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028490, VkglTestCase_028490_1, VkglTestCase_028490_2);

#define VkglTestCase_028491_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028491_2 "tion_src_func_dst_func.add_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028491, VkglTestCase_028491_1, VkglTestCase_028491_2);

#define VkglTestCase_028492_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028492_2 "src_func_dst_func.add_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028492, VkglTestCase_028492_1, VkglTestCase_028492_2);

#define VkglTestCase_028493_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028493_2 "on_src_func_dst_func.add_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028493, VkglTestCase_028493_1, VkglTestCase_028493_2);

#define VkglTestCase_028494_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028494_2 "uffer.equation_src_func_dst_func.add_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028494, VkglTestCase_028494_1, VkglTestCase_028494_2);

#define VkglTestCase_028495_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028495_2 "uffer.equation_src_func_dst_func.add_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028495, VkglTestCase_028495_1, VkglTestCase_028495_2);

#define VkglTestCase_028496_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028496_2 "er.equation_src_func_dst_func.add_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028496, VkglTestCase_028496_1, VkglTestCase_028496_2);

#define VkglTestCase_028497_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028497_2 "uation_src_func_dst_func.add_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028497, VkglTestCase_028497_1, VkglTestCase_028497_2);

#define VkglTestCase_028498_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028498_2 "er.equation_src_func_dst_func.add_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028498, VkglTestCase_028498_1, VkglTestCase_028498_2);

#define VkglTestCase_028499_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028499_2 "uation_src_func_dst_func.add_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028499, VkglTestCase_028499_1, VkglTestCase_028499_2);

#define VkglTestCase_028500_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028500_2 "er.equation_src_func_dst_func.add_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028500, VkglTestCase_028500_1, VkglTestCase_028500_2);

#define VkglTestCase_028501_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028501_2 "uation_src_func_dst_func.add_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028501, VkglTestCase_028501_1, VkglTestCase_028501_2);

#define VkglTestCase_028502_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028502_2 "er.equation_src_func_dst_func.add_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028502, VkglTestCase_028502_1, VkglTestCase_028502_2);

#define VkglTestCase_028503_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028503_2 "uation_src_func_dst_func.add_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028503, VkglTestCase_028503_1, VkglTestCase_028503_2);

#define VkglTestCase_028504_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028504_2 ".equation_src_func_dst_func.add_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028504, VkglTestCase_028504_1, VkglTestCase_028504_2);

#define VkglTestCase_028505_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028505_2 "tion_src_func_dst_func.add_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028505, VkglTestCase_028505_1, VkglTestCase_028505_2);

#define VkglTestCase_028506_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028506_2 ".equation_src_func_dst_func.add_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028506, VkglTestCase_028506_1, VkglTestCase_028506_2);

#define VkglTestCase_028507_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028507_2 "tion_src_func_dst_func.add_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028507, VkglTestCase_028507_1, VkglTestCase_028507_2);

#define VkglTestCase_028508_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028508_2 "quation_src_func_dst_func.add_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028508, VkglTestCase_028508_1, VkglTestCase_028508_2);

#define VkglTestCase_028509_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028509_2 ".equation_src_func_dst_func.add_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028509, VkglTestCase_028509_1, VkglTestCase_028509_2);

#define VkglTestCase_028510_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028510_2 ".equation_src_func_dst_func.add_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028510, VkglTestCase_028510_1, VkglTestCase_028510_2);

#define VkglTestCase_028511_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028511_2 "uation_src_func_dst_func.add_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028511, VkglTestCase_028511_1, VkglTestCase_028511_2);

#define VkglTestCase_028512_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028512_2 "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028512, VkglTestCase_028512_1, VkglTestCase_028512_2);

#define VkglTestCase_028513_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028513_2 "uation_src_func_dst_func.add_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028513, VkglTestCase_028513_1, VkglTestCase_028513_2);

#define VkglTestCase_028514_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028514_2 "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028514, VkglTestCase_028514_1, VkglTestCase_028514_2);

#define VkglTestCase_028515_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028515_2 "uation_src_func_dst_func.add_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028515, VkglTestCase_028515_1, VkglTestCase_028515_2);

#define VkglTestCase_028516_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028516_2 "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028516, VkglTestCase_028516_1, VkglTestCase_028516_2);

#define VkglTestCase_028517_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028517_2 "uation_src_func_dst_func.add_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028517, VkglTestCase_028517_1, VkglTestCase_028517_2);

#define VkglTestCase_028518_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028518_2 "n_src_func_dst_func.add_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028518, VkglTestCase_028518_1, VkglTestCase_028518_2);

#define VkglTestCase_028519_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028519_2 "tion_src_func_dst_func.add_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028519, VkglTestCase_028519_1, VkglTestCase_028519_2);

#define VkglTestCase_028520_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028520_2 "src_func_dst_func.add_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028520, VkglTestCase_028520_1, VkglTestCase_028520_2);

#define VkglTestCase_028521_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028521_2 "tion_src_func_dst_func.add_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028521, VkglTestCase_028521_1, VkglTestCase_028521_2);

#define VkglTestCase_028522_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028522_2 "src_func_dst_func.add_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028522, VkglTestCase_028522_1, VkglTestCase_028522_2);

#define VkglTestCase_028523_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028523_2 "on_src_func_dst_func.add_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028523, VkglTestCase_028523_1, VkglTestCase_028523_2);

#define VkglTestCase_028524_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028524_2 "fer.equation_src_func_dst_func.add_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028524, VkglTestCase_028524_1, VkglTestCase_028524_2);

#define VkglTestCase_028525_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028525_2 "fer.equation_src_func_dst_func.add_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028525, VkglTestCase_028525_1, VkglTestCase_028525_2);

#define VkglTestCase_028526_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028526_2 ".equation_src_func_dst_func.add_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028526, VkglTestCase_028526_1, VkglTestCase_028526_2);

#define VkglTestCase_028527_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028527_2 "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028527, VkglTestCase_028527_1, VkglTestCase_028527_2);

#define VkglTestCase_028528_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028528_2 ".equation_src_func_dst_func.add_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028528, VkglTestCase_028528_1, VkglTestCase_028528_2);

#define VkglTestCase_028529_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028529_2 "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028529, VkglTestCase_028529_1, VkglTestCase_028529_2);

#define VkglTestCase_028530_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028530_2 ".equation_src_func_dst_func.add_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028530, VkglTestCase_028530_1, VkglTestCase_028530_2);

#define VkglTestCase_028531_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028531_2 "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028531, VkglTestCase_028531_1, VkglTestCase_028531_2);

#define VkglTestCase_028532_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028532_2 ".equation_src_func_dst_func.add_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028532, VkglTestCase_028532_1, VkglTestCase_028532_2);

#define VkglTestCase_028533_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028533_2 "tion_src_func_dst_func.add_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028533, VkglTestCase_028533_1, VkglTestCase_028533_2);

#define VkglTestCase_028534_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028534_2 "quation_src_func_dst_func.add_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028534, VkglTestCase_028534_1, VkglTestCase_028534_2);

#define VkglTestCase_028535_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028535_2 "on_src_func_dst_func.add_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028535, VkglTestCase_028535_1, VkglTestCase_028535_2);

#define VkglTestCase_028536_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028536_2 "quation_src_func_dst_func.add_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028536, VkglTestCase_028536_1, VkglTestCase_028536_2);

#define VkglTestCase_028537_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028537_2 "on_src_func_dst_func.add_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028537, VkglTestCase_028537_1, VkglTestCase_028537_2);

#define VkglTestCase_028538_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028538_2 "ation_src_func_dst_func.add_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028538, VkglTestCase_028538_1, VkglTestCase_028538_2);

#define VkglTestCase_028539_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_028539_2 "ebuffer.equation_src_func_dst_func.subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028539, VkglTestCase_028539_1, VkglTestCase_028539_2);

#define VkglTestCase_028540_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028540_2 "mebuffer.equation_src_func_dst_func.subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028540, VkglTestCase_028540_1, VkglTestCase_028540_2);

#define VkglTestCase_028541_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028541_2 "uffer.equation_src_func_dst_func.subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028541, VkglTestCase_028541_1, VkglTestCase_028541_2);

#define VkglTestCase_028542_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028542_2 ".equation_src_func_dst_func.subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028542, VkglTestCase_028542_1, VkglTestCase_028542_2);

#define VkglTestCase_028543_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028543_2 "uffer.equation_src_func_dst_func.subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028543, VkglTestCase_028543_1, VkglTestCase_028543_2);

#define VkglTestCase_028544_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028544_2 ".equation_src_func_dst_func.subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028544, VkglTestCase_028544_1, VkglTestCase_028544_2);

#define VkglTestCase_028545_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028545_2 "uffer.equation_src_func_dst_func.subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028545, VkglTestCase_028545_1, VkglTestCase_028545_2);

#define VkglTestCase_028546_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028546_2 ".equation_src_func_dst_func.subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028546, VkglTestCase_028546_1, VkglTestCase_028546_2);

#define VkglTestCase_028547_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028547_2 "uffer.equation_src_func_dst_func.subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028547, VkglTestCase_028547_1, VkglTestCase_028547_2);

#define VkglTestCase_028548_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028548_2 ".equation_src_func_dst_func.subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028548, VkglTestCase_028548_1, VkglTestCase_028548_2);

#define VkglTestCase_028549_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028549_2 "er.equation_src_func_dst_func.subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028549, VkglTestCase_028549_1, VkglTestCase_028549_2);

#define VkglTestCase_028550_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028550_2 "uation_src_func_dst_func.subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028550, VkglTestCase_028550_1, VkglTestCase_028550_2);

#define VkglTestCase_028551_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028551_2 "er.equation_src_func_dst_func.subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028551, VkglTestCase_028551_1, VkglTestCase_028551_2);

#define VkglTestCase_028552_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028552_2 "uation_src_func_dst_func.subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028552, VkglTestCase_028552_1, VkglTestCase_028552_2);

#define VkglTestCase_028553_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028553_2 ".equation_src_func_dst_func.subtract_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028553, VkglTestCase_028553_1, VkglTestCase_028553_2);

#define VkglTestCase_028554_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028554_2 "mebuffer.equation_src_func_dst_func.subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028554, VkglTestCase_028554_1, VkglTestCase_028554_2);

#define VkglTestCase_028555_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_028555_2 "mebuffer.equation_src_func_dst_func.subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028555, VkglTestCase_028555_1, VkglTestCase_028555_2);

#define VkglTestCase_028556_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028556_2 "uffer.equation_src_func_dst_func.subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028556, VkglTestCase_028556_1, VkglTestCase_028556_2);

#define VkglTestCase_028557_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028557_2 ".equation_src_func_dst_func.subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028557, VkglTestCase_028557_1, VkglTestCase_028557_2);

#define VkglTestCase_028558_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028558_2 "uffer.equation_src_func_dst_func.subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028558, VkglTestCase_028558_1, VkglTestCase_028558_2);

#define VkglTestCase_028559_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028559_2 ".equation_src_func_dst_func.subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028559, VkglTestCase_028559_1, VkglTestCase_028559_2);

#define VkglTestCase_028560_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028560_2 "uffer.equation_src_func_dst_func.subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028560, VkglTestCase_028560_1, VkglTestCase_028560_2);

#define VkglTestCase_028561_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028561_2 ".equation_src_func_dst_func.subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028561, VkglTestCase_028561_1, VkglTestCase_028561_2);

#define VkglTestCase_028562_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028562_2 "uffer.equation_src_func_dst_func.subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028562, VkglTestCase_028562_1, VkglTestCase_028562_2);

#define VkglTestCase_028563_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028563_2 ".equation_src_func_dst_func.subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028563, VkglTestCase_028563_1, VkglTestCase_028563_2);

#define VkglTestCase_028564_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028564_2 "fer.equation_src_func_dst_func.subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028564, VkglTestCase_028564_1, VkglTestCase_028564_2);

#define VkglTestCase_028565_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028565_2 "quation_src_func_dst_func.subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028565, VkglTestCase_028565_1, VkglTestCase_028565_2);

#define VkglTestCase_028566_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028566_2 "fer.equation_src_func_dst_func.subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028566, VkglTestCase_028566_1, VkglTestCase_028566_2);

#define VkglTestCase_028567_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028567_2 "quation_src_func_dst_func.subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028567, VkglTestCase_028567_1, VkglTestCase_028567_2);

#define VkglTestCase_028568_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028568_2 "r.equation_src_func_dst_func.subtract_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028568, VkglTestCase_028568_1, VkglTestCase_028568_2);

#define VkglTestCase_028569_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028569_2 "uffer.equation_src_func_dst_func.subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028569, VkglTestCase_028569_1, VkglTestCase_028569_2);

#define VkglTestCase_028570_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028570_2 "uffer.equation_src_func_dst_func.subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028570, VkglTestCase_028570_1, VkglTestCase_028570_2);

#define VkglTestCase_028571_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028571_2 "er.equation_src_func_dst_func.subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028571, VkglTestCase_028571_1, VkglTestCase_028571_2);

#define VkglTestCase_028572_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028572_2 "uation_src_func_dst_func.subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028572, VkglTestCase_028572_1, VkglTestCase_028572_2);

#define VkglTestCase_028573_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028573_2 "er.equation_src_func_dst_func.subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028573, VkglTestCase_028573_1, VkglTestCase_028573_2);

#define VkglTestCase_028574_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028574_2 "uation_src_func_dst_func.subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028574, VkglTestCase_028574_1, VkglTestCase_028574_2);

#define VkglTestCase_028575_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028575_2 "er.equation_src_func_dst_func.subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028575, VkglTestCase_028575_1, VkglTestCase_028575_2);

#define VkglTestCase_028576_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028576_2 "uation_src_func_dst_func.subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028576, VkglTestCase_028576_1, VkglTestCase_028576_2);

#define VkglTestCase_028577_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028577_2 "er.equation_src_func_dst_func.subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028577, VkglTestCase_028577_1, VkglTestCase_028577_2);

#define VkglTestCase_028578_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028578_2 "uation_src_func_dst_func.subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028578, VkglTestCase_028578_1, VkglTestCase_028578_2);

#define VkglTestCase_028579_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028579_2 ".equation_src_func_dst_func.subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028579, VkglTestCase_028579_1, VkglTestCase_028579_2);

#define VkglTestCase_028580_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028580_2 "tion_src_func_dst_func.subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028580, VkglTestCase_028580_1, VkglTestCase_028580_2);

#define VkglTestCase_028581_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028581_2 ".equation_src_func_dst_func.subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028581, VkglTestCase_028581_1, VkglTestCase_028581_2);

#define VkglTestCase_028582_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028582_2 "tion_src_func_dst_func.subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028582, VkglTestCase_028582_1, VkglTestCase_028582_2);

#define VkglTestCase_028583_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028583_2 "quation_src_func_dst_func.subtract_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028583, VkglTestCase_028583_1, VkglTestCase_028583_2);

#define VkglTestCase_028584_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028584_2 ".equation_src_func_dst_func.subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028584, VkglTestCase_028584_1, VkglTestCase_028584_2);

#define VkglTestCase_028585_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028585_2 ".equation_src_func_dst_func.subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028585, VkglTestCase_028585_1, VkglTestCase_028585_2);

#define VkglTestCase_028586_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028586_2 "uation_src_func_dst_func.subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028586, VkglTestCase_028586_1, VkglTestCase_028586_2);

#define VkglTestCase_028587_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028587_2 "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028587, VkglTestCase_028587_1, VkglTestCase_028587_2);

#define VkglTestCase_028588_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028588_2 "uation_src_func_dst_func.subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028588, VkglTestCase_028588_1, VkglTestCase_028588_2);

#define VkglTestCase_028589_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028589_2 "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028589, VkglTestCase_028589_1, VkglTestCase_028589_2);

#define VkglTestCase_028590_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028590_2 "uation_src_func_dst_func.subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028590, VkglTestCase_028590_1, VkglTestCase_028590_2);

#define VkglTestCase_028591_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028591_2 "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028591, VkglTestCase_028591_1, VkglTestCase_028591_2);

#define VkglTestCase_028592_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028592_2 "uation_src_func_dst_func.subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028592, VkglTestCase_028592_1, VkglTestCase_028592_2);

#define VkglTestCase_028593_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028593_2 "n_src_func_dst_func.subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028593, VkglTestCase_028593_1, VkglTestCase_028593_2);

#define VkglTestCase_028594_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028594_2 "tion_src_func_dst_func.subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028594, VkglTestCase_028594_1, VkglTestCase_028594_2);

#define VkglTestCase_028595_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028595_2 "src_func_dst_func.subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028595, VkglTestCase_028595_1, VkglTestCase_028595_2);

#define VkglTestCase_028596_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028596_2 "tion_src_func_dst_func.subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028596, VkglTestCase_028596_1, VkglTestCase_028596_2);

#define VkglTestCase_028597_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028597_2 "src_func_dst_func.subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028597, VkglTestCase_028597_1, VkglTestCase_028597_2);

#define VkglTestCase_028598_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028598_2 "on_src_func_dst_func.subtract_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028598, VkglTestCase_028598_1, VkglTestCase_028598_2);

#define VkglTestCase_028599_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028599_2 "uffer.equation_src_func_dst_func.subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028599, VkglTestCase_028599_1, VkglTestCase_028599_2);

#define VkglTestCase_028600_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028600_2 "uffer.equation_src_func_dst_func.subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028600, VkglTestCase_028600_1, VkglTestCase_028600_2);

#define VkglTestCase_028601_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028601_2 "er.equation_src_func_dst_func.subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028601, VkglTestCase_028601_1, VkglTestCase_028601_2);

#define VkglTestCase_028602_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028602_2 "uation_src_func_dst_func.subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028602, VkglTestCase_028602_1, VkglTestCase_028602_2);

#define VkglTestCase_028603_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028603_2 "er.equation_src_func_dst_func.subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028603, VkglTestCase_028603_1, VkglTestCase_028603_2);

#define VkglTestCase_028604_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028604_2 "uation_src_func_dst_func.subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028604, VkglTestCase_028604_1, VkglTestCase_028604_2);

#define VkglTestCase_028605_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028605_2 "er.equation_src_func_dst_func.subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028605, VkglTestCase_028605_1, VkglTestCase_028605_2);

#define VkglTestCase_028606_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028606_2 "uation_src_func_dst_func.subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028606, VkglTestCase_028606_1, VkglTestCase_028606_2);

#define VkglTestCase_028607_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028607_2 "er.equation_src_func_dst_func.subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028607, VkglTestCase_028607_1, VkglTestCase_028607_2);

#define VkglTestCase_028608_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028608_2 "uation_src_func_dst_func.subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028608, VkglTestCase_028608_1, VkglTestCase_028608_2);

#define VkglTestCase_028609_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028609_2 ".equation_src_func_dst_func.subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028609, VkglTestCase_028609_1, VkglTestCase_028609_2);

#define VkglTestCase_028610_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028610_2 "tion_src_func_dst_func.subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028610, VkglTestCase_028610_1, VkglTestCase_028610_2);

#define VkglTestCase_028611_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028611_2 ".equation_src_func_dst_func.subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028611, VkglTestCase_028611_1, VkglTestCase_028611_2);

#define VkglTestCase_028612_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028612_2 "tion_src_func_dst_func.subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028612, VkglTestCase_028612_1, VkglTestCase_028612_2);

#define VkglTestCase_028613_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028613_2 "quation_src_func_dst_func.subtract_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028613, VkglTestCase_028613_1, VkglTestCase_028613_2);

#define VkglTestCase_028614_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028614_2 ".equation_src_func_dst_func.subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028614, VkglTestCase_028614_1, VkglTestCase_028614_2);

#define VkglTestCase_028615_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028615_2 ".equation_src_func_dst_func.subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028615, VkglTestCase_028615_1, VkglTestCase_028615_2);

#define VkglTestCase_028616_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028616_2 "uation_src_func_dst_func.subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028616, VkglTestCase_028616_1, VkglTestCase_028616_2);

#define VkglTestCase_028617_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028617_2 "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028617, VkglTestCase_028617_1, VkglTestCase_028617_2);

#define VkglTestCase_028618_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028618_2 "uation_src_func_dst_func.subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028618, VkglTestCase_028618_1, VkglTestCase_028618_2);

#define VkglTestCase_028619_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028619_2 "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028619, VkglTestCase_028619_1, VkglTestCase_028619_2);

#define VkglTestCase_028620_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028620_2 "uation_src_func_dst_func.subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028620, VkglTestCase_028620_1, VkglTestCase_028620_2);

#define VkglTestCase_028621_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028621_2 "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028621, VkglTestCase_028621_1, VkglTestCase_028621_2);

#define VkglTestCase_028622_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028622_2 "uation_src_func_dst_func.subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028622, VkglTestCase_028622_1, VkglTestCase_028622_2);

#define VkglTestCase_028623_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028623_2 "n_src_func_dst_func.subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028623, VkglTestCase_028623_1, VkglTestCase_028623_2);

#define VkglTestCase_028624_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028624_2 "tion_src_func_dst_func.subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028624, VkglTestCase_028624_1, VkglTestCase_028624_2);

#define VkglTestCase_028625_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028625_2 "src_func_dst_func.subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028625, VkglTestCase_028625_1, VkglTestCase_028625_2);

#define VkglTestCase_028626_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028626_2 "tion_src_func_dst_func.subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028626, VkglTestCase_028626_1, VkglTestCase_028626_2);

#define VkglTestCase_028627_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028627_2 "src_func_dst_func.subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028627, VkglTestCase_028627_1, VkglTestCase_028627_2);

#define VkglTestCase_028628_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028628_2 "on_src_func_dst_func.subtract_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028628, VkglTestCase_028628_1, VkglTestCase_028628_2);

#define VkglTestCase_028629_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028629_2 "uffer.equation_src_func_dst_func.subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028629, VkglTestCase_028629_1, VkglTestCase_028629_2);

#define VkglTestCase_028630_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028630_2 "uffer.equation_src_func_dst_func.subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028630, VkglTestCase_028630_1, VkglTestCase_028630_2);

#define VkglTestCase_028631_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028631_2 "er.equation_src_func_dst_func.subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028631, VkglTestCase_028631_1, VkglTestCase_028631_2);

#define VkglTestCase_028632_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028632_2 "uation_src_func_dst_func.subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028632, VkglTestCase_028632_1, VkglTestCase_028632_2);

#define VkglTestCase_028633_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028633_2 "er.equation_src_func_dst_func.subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028633, VkglTestCase_028633_1, VkglTestCase_028633_2);

#define VkglTestCase_028634_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028634_2 "uation_src_func_dst_func.subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028634, VkglTestCase_028634_1, VkglTestCase_028634_2);

#define VkglTestCase_028635_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028635_2 "er.equation_src_func_dst_func.subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028635, VkglTestCase_028635_1, VkglTestCase_028635_2);

#define VkglTestCase_028636_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028636_2 "uation_src_func_dst_func.subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028636, VkglTestCase_028636_1, VkglTestCase_028636_2);

#define VkglTestCase_028637_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028637_2 "er.equation_src_func_dst_func.subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028637, VkglTestCase_028637_1, VkglTestCase_028637_2);

#define VkglTestCase_028638_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028638_2 "uation_src_func_dst_func.subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028638, VkglTestCase_028638_1, VkglTestCase_028638_2);

#define VkglTestCase_028639_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028639_2 ".equation_src_func_dst_func.subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028639, VkglTestCase_028639_1, VkglTestCase_028639_2);

#define VkglTestCase_028640_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028640_2 "tion_src_func_dst_func.subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028640, VkglTestCase_028640_1, VkglTestCase_028640_2);

#define VkglTestCase_028641_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028641_2 ".equation_src_func_dst_func.subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028641, VkglTestCase_028641_1, VkglTestCase_028641_2);

#define VkglTestCase_028642_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028642_2 "tion_src_func_dst_func.subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028642, VkglTestCase_028642_1, VkglTestCase_028642_2);

#define VkglTestCase_028643_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028643_2 "quation_src_func_dst_func.subtract_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028643, VkglTestCase_028643_1, VkglTestCase_028643_2);

#define VkglTestCase_028644_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028644_2 ".equation_src_func_dst_func.subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028644, VkglTestCase_028644_1, VkglTestCase_028644_2);

#define VkglTestCase_028645_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028645_2 ".equation_src_func_dst_func.subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028645, VkglTestCase_028645_1, VkglTestCase_028645_2);

#define VkglTestCase_028646_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028646_2 "uation_src_func_dst_func.subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028646, VkglTestCase_028646_1, VkglTestCase_028646_2);

#define VkglTestCase_028647_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028647_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028647, VkglTestCase_028647_1, VkglTestCase_028647_2);

#define VkglTestCase_028648_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028648_2 "uation_src_func_dst_func.subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028648, VkglTestCase_028648_1, VkglTestCase_028648_2);

#define VkglTestCase_028649_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028649_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028649, VkglTestCase_028649_1, VkglTestCase_028649_2);

#define VkglTestCase_028650_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028650_2 "uation_src_func_dst_func.subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028650, VkglTestCase_028650_1, VkglTestCase_028650_2);

#define VkglTestCase_028651_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028651_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028651, VkglTestCase_028651_1, VkglTestCase_028651_2);

#define VkglTestCase_028652_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028652_2 "uation_src_func_dst_func.subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028652, VkglTestCase_028652_1, VkglTestCase_028652_2);

#define VkglTestCase_028653_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028653_2 "n_src_func_dst_func.subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028653, VkglTestCase_028653_1, VkglTestCase_028653_2);

#define VkglTestCase_028654_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028654_2 "tion_src_func_dst_func.subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028654, VkglTestCase_028654_1, VkglTestCase_028654_2);

#define VkglTestCase_028655_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028655_2 "src_func_dst_func.subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028655, VkglTestCase_028655_1, VkglTestCase_028655_2);

#define VkglTestCase_028656_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028656_2 "tion_src_func_dst_func.subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028656, VkglTestCase_028656_1, VkglTestCase_028656_2);

#define VkglTestCase_028657_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028657_2 "src_func_dst_func.subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028657, VkglTestCase_028657_1, VkglTestCase_028657_2);

#define VkglTestCase_028658_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028658_2 "on_src_func_dst_func.subtract_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028658, VkglTestCase_028658_1, VkglTestCase_028658_2);

#define VkglTestCase_028659_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028659_2 "uffer.equation_src_func_dst_func.subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028659, VkglTestCase_028659_1, VkglTestCase_028659_2);

#define VkglTestCase_028660_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
#define VkglTestCase_028660_2 "uffer.equation_src_func_dst_func.subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028660, VkglTestCase_028660_1, VkglTestCase_028660_2);

#define VkglTestCase_028661_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028661_2 "er.equation_src_func_dst_func.subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028661, VkglTestCase_028661_1, VkglTestCase_028661_2);

#define VkglTestCase_028662_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028662_2 "uation_src_func_dst_func.subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028662, VkglTestCase_028662_1, VkglTestCase_028662_2);

#define VkglTestCase_028663_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028663_2 "er.equation_src_func_dst_func.subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028663, VkglTestCase_028663_1, VkglTestCase_028663_2);

#define VkglTestCase_028664_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028664_2 "uation_src_func_dst_func.subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028664, VkglTestCase_028664_1, VkglTestCase_028664_2);

#define VkglTestCase_028665_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028665_2 "er.equation_src_func_dst_func.subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028665, VkglTestCase_028665_1, VkglTestCase_028665_2);

#define VkglTestCase_028666_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028666_2 "uation_src_func_dst_func.subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028666, VkglTestCase_028666_1, VkglTestCase_028666_2);

#define VkglTestCase_028667_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028667_2 "er.equation_src_func_dst_func.subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028667, VkglTestCase_028667_1, VkglTestCase_028667_2);

#define VkglTestCase_028668_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028668_2 "uation_src_func_dst_func.subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028668, VkglTestCase_028668_1, VkglTestCase_028668_2);

#define VkglTestCase_028669_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028669_2 ".equation_src_func_dst_func.subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028669, VkglTestCase_028669_1, VkglTestCase_028669_2);

#define VkglTestCase_028670_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028670_2 "tion_src_func_dst_func.subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028670, VkglTestCase_028670_1, VkglTestCase_028670_2);

#define VkglTestCase_028671_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028671_2 ".equation_src_func_dst_func.subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028671, VkglTestCase_028671_1, VkglTestCase_028671_2);

#define VkglTestCase_028672_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028672_2 "tion_src_func_dst_func.subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028672, VkglTestCase_028672_1, VkglTestCase_028672_2);

#define VkglTestCase_028673_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028673_2 "quation_src_func_dst_func.subtract_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028673, VkglTestCase_028673_1, VkglTestCase_028673_2);

#define VkglTestCase_028674_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028674_2 ".equation_src_func_dst_func.subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028674, VkglTestCase_028674_1, VkglTestCase_028674_2);

#define VkglTestCase_028675_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028675_2 ".equation_src_func_dst_func.subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028675, VkglTestCase_028675_1, VkglTestCase_028675_2);

#define VkglTestCase_028676_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028676_2 "uation_src_func_dst_func.subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028676, VkglTestCase_028676_1, VkglTestCase_028676_2);

#define VkglTestCase_028677_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028677_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028677, VkglTestCase_028677_1, VkglTestCase_028677_2);

#define VkglTestCase_028678_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028678_2 "uation_src_func_dst_func.subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028678, VkglTestCase_028678_1, VkglTestCase_028678_2);

#define VkglTestCase_028679_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028679_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028679, VkglTestCase_028679_1, VkglTestCase_028679_2);

#define VkglTestCase_028680_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028680_2 "uation_src_func_dst_func.subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028680, VkglTestCase_028680_1, VkglTestCase_028680_2);

#define VkglTestCase_028681_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028681_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028681, VkglTestCase_028681_1, VkglTestCase_028681_2);

#define VkglTestCase_028682_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028682_2 "uation_src_func_dst_func.subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028682, VkglTestCase_028682_1, VkglTestCase_028682_2);

#define VkglTestCase_028683_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028683_2 "n_src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028683, VkglTestCase_028683_1, VkglTestCase_028683_2);

#define VkglTestCase_028684_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028684_2 "tion_src_func_dst_func.subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028684, VkglTestCase_028684_1, VkglTestCase_028684_2);

#define VkglTestCase_028685_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028685_2 "src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028685, VkglTestCase_028685_1, VkglTestCase_028685_2);

#define VkglTestCase_028686_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028686_2 "tion_src_func_dst_func.subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028686, VkglTestCase_028686_1, VkglTestCase_028686_2);

#define VkglTestCase_028687_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028687_2 "src_func_dst_func.subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028687, VkglTestCase_028687_1, VkglTestCase_028687_2);

#define VkglTestCase_028688_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028688_2 "on_src_func_dst_func.subtract_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028688, VkglTestCase_028688_1, VkglTestCase_028688_2);

#define VkglTestCase_028689_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028689_2 "er.equation_src_func_dst_func.subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028689, VkglTestCase_028689_1, VkglTestCase_028689_2);

#define VkglTestCase_028690_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028690_2 "fer.equation_src_func_dst_func.subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028690, VkglTestCase_028690_1, VkglTestCase_028690_2);

#define VkglTestCase_028691_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028691_2 ".equation_src_func_dst_func.subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028691, VkglTestCase_028691_1, VkglTestCase_028691_2);

#define VkglTestCase_028692_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028692_2 "tion_src_func_dst_func.subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028692, VkglTestCase_028692_1, VkglTestCase_028692_2);

#define VkglTestCase_028693_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028693_2 ".equation_src_func_dst_func.subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028693, VkglTestCase_028693_1, VkglTestCase_028693_2);

#define VkglTestCase_028694_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028694_2 "tion_src_func_dst_func.subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028694, VkglTestCase_028694_1, VkglTestCase_028694_2);

#define VkglTestCase_028695_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028695_2 ".equation_src_func_dst_func.subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028695, VkglTestCase_028695_1, VkglTestCase_028695_2);

#define VkglTestCase_028696_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028696_2 "tion_src_func_dst_func.subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028696, VkglTestCase_028696_1, VkglTestCase_028696_2);

#define VkglTestCase_028697_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028697_2 ".equation_src_func_dst_func.subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028697, VkglTestCase_028697_1, VkglTestCase_028697_2);

#define VkglTestCase_028698_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028698_2 "tion_src_func_dst_func.subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028698, VkglTestCase_028698_1, VkglTestCase_028698_2);

#define VkglTestCase_028699_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028699_2 "uation_src_func_dst_func.subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028699, VkglTestCase_028699_1, VkglTestCase_028699_2);

#define VkglTestCase_028700_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028700_2 "n_src_func_dst_func.subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028700, VkglTestCase_028700_1, VkglTestCase_028700_2);

#define VkglTestCase_028701_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028701_2 "uation_src_func_dst_func.subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028701, VkglTestCase_028701_1, VkglTestCase_028701_2);

#define VkglTestCase_028702_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028702_2 "n_src_func_dst_func.subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028702, VkglTestCase_028702_1, VkglTestCase_028702_2);

#define VkglTestCase_028703_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028703_2 "tion_src_func_dst_func.subtract_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028703, VkglTestCase_028703_1, VkglTestCase_028703_2);

#define VkglTestCase_028704_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028704_2 "uation_src_func_dst_func.subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028704, VkglTestCase_028704_1, VkglTestCase_028704_2);

#define VkglTestCase_028705_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028705_2 "quation_src_func_dst_func.subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028705, VkglTestCase_028705_1, VkglTestCase_028705_2);

#define VkglTestCase_028706_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028706_2 "tion_src_func_dst_func.subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028706, VkglTestCase_028706_1, VkglTestCase_028706_2);

#define VkglTestCase_028707_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028707_2 "src_func_dst_func.subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028707, VkglTestCase_028707_1, VkglTestCase_028707_2);

#define VkglTestCase_028708_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028708_2 "tion_src_func_dst_func.subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028708, VkglTestCase_028708_1, VkglTestCase_028708_2);

#define VkglTestCase_028709_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028709_2 "src_func_dst_func.subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028709, VkglTestCase_028709_1, VkglTestCase_028709_2);

#define VkglTestCase_028710_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028710_2 "tion_src_func_dst_func.subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028710, VkglTestCase_028710_1, VkglTestCase_028710_2);

#define VkglTestCase_028711_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028711_2 "src_func_dst_func.subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028711, VkglTestCase_028711_1, VkglTestCase_028711_2);

#define VkglTestCase_028712_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028712_2 "tion_src_func_dst_func.subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028712, VkglTestCase_028712_1, VkglTestCase_028712_2);

#define VkglTestCase_028713_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028713_2 "src_func_dst_func.subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028713, VkglTestCase_028713_1, VkglTestCase_028713_2);

#define VkglTestCase_028714_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028714_2 "n_src_func_dst_func.subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028714, VkglTestCase_028714_1, VkglTestCase_028714_2);

#define VkglTestCase_028715_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
#define VkglTestCase_028715_2 "_func_dst_func.subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028715, VkglTestCase_028715_1, VkglTestCase_028715_2);

#define VkglTestCase_028716_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028716_2 "n_src_func_dst_func.subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028716, VkglTestCase_028716_1, VkglTestCase_028716_2);

#define VkglTestCase_028717_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
#define VkglTestCase_028717_2 "_func_dst_func.subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028717, VkglTestCase_028717_1, VkglTestCase_028717_2);

#define VkglTestCase_028718_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028718_2 "src_func_dst_func.subtract_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028718, VkglTestCase_028718_1, VkglTestCase_028718_2);

#define VkglTestCase_028719_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
#define VkglTestCase_028719_2 "er.equation_src_func_dst_func.subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028719, VkglTestCase_028719_1, VkglTestCase_028719_2);

#define VkglTestCase_028720_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028720_2 "fer.equation_src_func_dst_func.subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028720, VkglTestCase_028720_1, VkglTestCase_028720_2);

#define VkglTestCase_028721_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028721_2 ".equation_src_func_dst_func.subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028721, VkglTestCase_028721_1, VkglTestCase_028721_2);

#define VkglTestCase_028722_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028722_2 "tion_src_func_dst_func.subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028722, VkglTestCase_028722_1, VkglTestCase_028722_2);

#define VkglTestCase_028723_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028723_2 ".equation_src_func_dst_func.subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028723, VkglTestCase_028723_1, VkglTestCase_028723_2);

#define VkglTestCase_028724_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028724_2 "tion_src_func_dst_func.subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028724, VkglTestCase_028724_1, VkglTestCase_028724_2);

#define VkglTestCase_028725_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028725_2 ".equation_src_func_dst_func.subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028725, VkglTestCase_028725_1, VkglTestCase_028725_2);

#define VkglTestCase_028726_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028726_2 "tion_src_func_dst_func.subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028726, VkglTestCase_028726_1, VkglTestCase_028726_2);

#define VkglTestCase_028727_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028727_2 ".equation_src_func_dst_func.subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028727, VkglTestCase_028727_1, VkglTestCase_028727_2);

#define VkglTestCase_028728_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028728_2 "tion_src_func_dst_func.subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028728, VkglTestCase_028728_1, VkglTestCase_028728_2);

#define VkglTestCase_028729_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028729_2 "uation_src_func_dst_func.subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028729, VkglTestCase_028729_1, VkglTestCase_028729_2);

#define VkglTestCase_028730_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028730_2 "n_src_func_dst_func.subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028730, VkglTestCase_028730_1, VkglTestCase_028730_2);

#define VkglTestCase_028731_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028731_2 "uation_src_func_dst_func.subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028731, VkglTestCase_028731_1, VkglTestCase_028731_2);

#define VkglTestCase_028732_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028732_2 "n_src_func_dst_func.subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028732, VkglTestCase_028732_1, VkglTestCase_028732_2);

#define VkglTestCase_028733_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028733_2 "tion_src_func_dst_func.subtract_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028733, VkglTestCase_028733_1, VkglTestCase_028733_2);

#define VkglTestCase_028734_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028734_2 "uation_src_func_dst_func.subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028734, VkglTestCase_028734_1, VkglTestCase_028734_2);

#define VkglTestCase_028735_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028735_2 "quation_src_func_dst_func.subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028735, VkglTestCase_028735_1, VkglTestCase_028735_2);

#define VkglTestCase_028736_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028736_2 "tion_src_func_dst_func.subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028736, VkglTestCase_028736_1, VkglTestCase_028736_2);

#define VkglTestCase_028737_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028737_2 "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028737, VkglTestCase_028737_1, VkglTestCase_028737_2);

#define VkglTestCase_028738_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028738_2 "tion_src_func_dst_func.subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028738, VkglTestCase_028738_1, VkglTestCase_028738_2);

#define VkglTestCase_028739_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028739_2 "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028739, VkglTestCase_028739_1, VkglTestCase_028739_2);

#define VkglTestCase_028740_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028740_2 "tion_src_func_dst_func.subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028740, VkglTestCase_028740_1, VkglTestCase_028740_2);

#define VkglTestCase_028741_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028741_2 "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028741, VkglTestCase_028741_1, VkglTestCase_028741_2);

#define VkglTestCase_028742_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028742_2 "tion_src_func_dst_func.subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028742, VkglTestCase_028742_1, VkglTestCase_028742_2);

#define VkglTestCase_028743_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028743_2 "src_func_dst_func.subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028743, VkglTestCase_028743_1, VkglTestCase_028743_2);

#define VkglTestCase_028744_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028744_2 "n_src_func_dst_func.subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028744, VkglTestCase_028744_1, VkglTestCase_028744_2);

#define VkglTestCase_028745_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
#define VkglTestCase_028745_2 "_func_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028745, VkglTestCase_028745_1, VkglTestCase_028745_2);

#define VkglTestCase_028746_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
#define VkglTestCase_028746_2 "n_src_func_dst_func.subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028746, VkglTestCase_028746_1, VkglTestCase_028746_2);

#define VkglTestCase_028747_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src"
#define VkglTestCase_028747_2 "_func_dst_func.subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028747, VkglTestCase_028747_1, VkglTestCase_028747_2);

#define VkglTestCase_028748_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028748_2 "src_func_dst_func.subtract_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028748, VkglTestCase_028748_1, VkglTestCase_028748_2);

#define VkglTestCase_028749_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
#define VkglTestCase_028749_2 ".equation_src_func_dst_func.subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028749, VkglTestCase_028749_1, VkglTestCase_028749_2);

#define VkglTestCase_028750_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028750_2 "r.equation_src_func_dst_func.subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028750, VkglTestCase_028750_1, VkglTestCase_028750_2);

#define VkglTestCase_028751_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028751_2 "quation_src_func_dst_func.subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028751, VkglTestCase_028751_1, VkglTestCase_028751_2);

#define VkglTestCase_028752_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028752_2 "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028752, VkglTestCase_028752_1, VkglTestCase_028752_2);

#define VkglTestCase_028753_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028753_2 "quation_src_func_dst_func.subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028753, VkglTestCase_028753_1, VkglTestCase_028753_2);

#define VkglTestCase_028754_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028754_2 "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028754, VkglTestCase_028754_1, VkglTestCase_028754_2);

#define VkglTestCase_028755_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028755_2 "quation_src_func_dst_func.subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028755, VkglTestCase_028755_1, VkglTestCase_028755_2);

#define VkglTestCase_028756_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028756_2 "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028756, VkglTestCase_028756_1, VkglTestCase_028756_2);

#define VkglTestCase_028757_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028757_2 "quation_src_func_dst_func.subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028757, VkglTestCase_028757_1, VkglTestCase_028757_2);

#define VkglTestCase_028758_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028758_2 "on_src_func_dst_func.subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028758, VkglTestCase_028758_1, VkglTestCase_028758_2);

#define VkglTestCase_028759_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028759_2 "tion_src_func_dst_func.subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028759, VkglTestCase_028759_1, VkglTestCase_028759_2);

#define VkglTestCase_028760_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028760_2 "src_func_dst_func.subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028760, VkglTestCase_028760_1, VkglTestCase_028760_2);

#define VkglTestCase_028761_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
#define VkglTestCase_028761_2 "tion_src_func_dst_func.subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028761, VkglTestCase_028761_1, VkglTestCase_028761_2);

#define VkglTestCase_028762_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_"
#define VkglTestCase_028762_2 "src_func_dst_func.subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028762, VkglTestCase_028762_1, VkglTestCase_028762_2);

#define VkglTestCase_028763_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028763_2 "on_src_func_dst_func.subtract_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028763, VkglTestCase_028763_1, VkglTestCase_028763_2);

#define VkglTestCase_028764_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_028764_2 "fer.equation_src_func_dst_func.reverse_subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028764, VkglTestCase_028764_1, VkglTestCase_028764_2);

#define VkglTestCase_028765_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_028765_2 "ffer.equation_src_func_dst_func.reverse_subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028765, VkglTestCase_028765_1, VkglTestCase_028765_2);

#define VkglTestCase_028766_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028766_2 "r.equation_src_func_dst_func.reverse_subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028766, VkglTestCase_028766_1, VkglTestCase_028766_2);

#define VkglTestCase_028767_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028767_2 "ation_src_func_dst_func.reverse_subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028767, VkglTestCase_028767_1, VkglTestCase_028767_2);

#define VkglTestCase_028768_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028768_2 "r.equation_src_func_dst_func.reverse_subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028768, VkglTestCase_028768_1, VkglTestCase_028768_2);

#define VkglTestCase_028769_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028769_2 "ation_src_func_dst_func.reverse_subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028769, VkglTestCase_028769_1, VkglTestCase_028769_2);

#define VkglTestCase_028770_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028770_2 "r.equation_src_func_dst_func.reverse_subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028770, VkglTestCase_028770_1, VkglTestCase_028770_2);

#define VkglTestCase_028771_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028771_2 "ation_src_func_dst_func.reverse_subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028771, VkglTestCase_028771_1, VkglTestCase_028771_2);

#define VkglTestCase_028772_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028772_2 "r.equation_src_func_dst_func.reverse_subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028772, VkglTestCase_028772_1, VkglTestCase_028772_2);

#define VkglTestCase_028773_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028773_2 "ation_src_func_dst_func.reverse_subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028773, VkglTestCase_028773_1, VkglTestCase_028773_2);

#define VkglTestCase_028774_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028774_2 "quation_src_func_dst_func.reverse_subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028774, VkglTestCase_028774_1, VkglTestCase_028774_2);

#define VkglTestCase_028775_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028775_2 "on_src_func_dst_func.reverse_subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028775, VkglTestCase_028775_1, VkglTestCase_028775_2);

#define VkglTestCase_028776_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028776_2 "quation_src_func_dst_func.reverse_subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028776, VkglTestCase_028776_1, VkglTestCase_028776_2);

#define VkglTestCase_028777_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028777_2 "on_src_func_dst_func.reverse_subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028777, VkglTestCase_028777_1, VkglTestCase_028777_2);

#define VkglTestCase_028778_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028778_2 "ation_src_func_dst_func.reverse_subtract_zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028778, VkglTestCase_028778_1, VkglTestCase_028778_2);

#define VkglTestCase_028779_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_028779_2 "ffer.equation_src_func_dst_func.reverse_subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028779, VkglTestCase_028779_1, VkglTestCase_028779_2);

#define VkglTestCase_028780_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_028780_2 "ffer.equation_src_func_dst_func.reverse_subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028780, VkglTestCase_028780_1, VkglTestCase_028780_2);

#define VkglTestCase_028781_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028781_2 "r.equation_src_func_dst_func.reverse_subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028781, VkglTestCase_028781_1, VkglTestCase_028781_2);

#define VkglTestCase_028782_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028782_2 "ation_src_func_dst_func.reverse_subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028782, VkglTestCase_028782_1, VkglTestCase_028782_2);

#define VkglTestCase_028783_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028783_2 "r.equation_src_func_dst_func.reverse_subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028783, VkglTestCase_028783_1, VkglTestCase_028783_2);

#define VkglTestCase_028784_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028784_2 "ation_src_func_dst_func.reverse_subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028784, VkglTestCase_028784_1, VkglTestCase_028784_2);

#define VkglTestCase_028785_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028785_2 "r.equation_src_func_dst_func.reverse_subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028785, VkglTestCase_028785_1, VkglTestCase_028785_2);

#define VkglTestCase_028786_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028786_2 "ation_src_func_dst_func.reverse_subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028786, VkglTestCase_028786_1, VkglTestCase_028786_2);

#define VkglTestCase_028787_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028787_2 "r.equation_src_func_dst_func.reverse_subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028787, VkglTestCase_028787_1, VkglTestCase_028787_2);

#define VkglTestCase_028788_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028788_2 "ation_src_func_dst_func.reverse_subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028788, VkglTestCase_028788_1, VkglTestCase_028788_2);

#define VkglTestCase_028789_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_028789_2 "equation_src_func_dst_func.reverse_subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028789, VkglTestCase_028789_1, VkglTestCase_028789_2);

#define VkglTestCase_028790_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028790_2 "ion_src_func_dst_func.reverse_subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028790, VkglTestCase_028790_1, VkglTestCase_028790_2);

#define VkglTestCase_028791_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_028791_2 "equation_src_func_dst_func.reverse_subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028791, VkglTestCase_028791_1, VkglTestCase_028791_2);

#define VkglTestCase_028792_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028792_2 "ion_src_func_dst_func.reverse_subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028792, VkglTestCase_028792_1, VkglTestCase_028792_2);

#define VkglTestCase_028793_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028793_2 "uation_src_func_dst_func.reverse_subtract_one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028793, VkglTestCase_028793_1, VkglTestCase_028793_2);

#define VkglTestCase_028794_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028794_2 "r.equation_src_func_dst_func.reverse_subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028794, VkglTestCase_028794_1, VkglTestCase_028794_2);

#define VkglTestCase_028795_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028795_2 "r.equation_src_func_dst_func.reverse_subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028795, VkglTestCase_028795_1, VkglTestCase_028795_2);

#define VkglTestCase_028796_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028796_2 "quation_src_func_dst_func.reverse_subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028796, VkglTestCase_028796_1, VkglTestCase_028796_2);

#define VkglTestCase_028797_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028797_2 "on_src_func_dst_func.reverse_subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028797, VkglTestCase_028797_1, VkglTestCase_028797_2);

#define VkglTestCase_028798_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028798_2 "quation_src_func_dst_func.reverse_subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028798, VkglTestCase_028798_1, VkglTestCase_028798_2);

#define VkglTestCase_028799_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028799_2 "on_src_func_dst_func.reverse_subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028799, VkglTestCase_028799_1, VkglTestCase_028799_2);

#define VkglTestCase_028800_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028800_2 "quation_src_func_dst_func.reverse_subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028800, VkglTestCase_028800_1, VkglTestCase_028800_2);

#define VkglTestCase_028801_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028801_2 "on_src_func_dst_func.reverse_subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028801, VkglTestCase_028801_1, VkglTestCase_028801_2);

#define VkglTestCase_028802_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028802_2 "quation_src_func_dst_func.reverse_subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028802, VkglTestCase_028802_1, VkglTestCase_028802_2);

#define VkglTestCase_028803_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028803_2 "on_src_func_dst_func.reverse_subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028803, VkglTestCase_028803_1, VkglTestCase_028803_2);

#define VkglTestCase_028804_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028804_2 "ation_src_func_dst_func.reverse_subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028804, VkglTestCase_028804_1, VkglTestCase_028804_2);

#define VkglTestCase_028805_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028805_2 "_src_func_dst_func.reverse_subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028805, VkglTestCase_028805_1, VkglTestCase_028805_2);

#define VkglTestCase_028806_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028806_2 "ation_src_func_dst_func.reverse_subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028806, VkglTestCase_028806_1, VkglTestCase_028806_2);

#define VkglTestCase_028807_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028807_2 "_src_func_dst_func.reverse_subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028807, VkglTestCase_028807_1, VkglTestCase_028807_2);

#define VkglTestCase_028808_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028808_2 "ion_src_func_dst_func.reverse_subtract_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028808, VkglTestCase_028808_1, VkglTestCase_028808_2);

#define VkglTestCase_028809_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028809_2 "ation_src_func_dst_func.reverse_subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028809, VkglTestCase_028809_1, VkglTestCase_028809_2);

#define VkglTestCase_028810_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028810_2 "ation_src_func_dst_func.reverse_subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028810, VkglTestCase_028810_1, VkglTestCase_028810_2);

#define VkglTestCase_028811_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028811_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028811, VkglTestCase_028811_1, VkglTestCase_028811_2);

#define VkglTestCase_028812_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028812_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028812, VkglTestCase_028812_1, VkglTestCase_028812_2);

#define VkglTestCase_028813_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028813_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028813, VkglTestCase_028813_1, VkglTestCase_028813_2);

#define VkglTestCase_028814_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028814_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028814, VkglTestCase_028814_1, VkglTestCase_028814_2);

#define VkglTestCase_028815_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028815_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028815, VkglTestCase_028815_1, VkglTestCase_028815_2);

#define VkglTestCase_028816_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028816_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028816, VkglTestCase_028816_1, VkglTestCase_028816_2);

#define VkglTestCase_028817_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028817_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028817, VkglTestCase_028817_1, VkglTestCase_028817_2);

#define VkglTestCase_028818_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028818_2 "c_func_dst_func.reverse_subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028818, VkglTestCase_028818_1, VkglTestCase_028818_2);

#define VkglTestCase_028819_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028819_2 "_src_func_dst_func.reverse_subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028819, VkglTestCase_028819_1, VkglTestCase_028819_2);

#define VkglTestCase_028820_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028820_2 "func_dst_func.reverse_subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028820, VkglTestCase_028820_1, VkglTestCase_028820_2);

#define VkglTestCase_028821_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028821_2 "_src_func_dst_func.reverse_subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028821, VkglTestCase_028821_1, VkglTestCase_028821_2);

#define VkglTestCase_028822_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028822_2 "func_dst_func.reverse_subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028822, VkglTestCase_028822_1, VkglTestCase_028822_2);

#define VkglTestCase_028823_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028823_2 "rc_func_dst_func.reverse_subtract_one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028823, VkglTestCase_028823_1, VkglTestCase_028823_2);

#define VkglTestCase_028824_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028824_2 "r.equation_src_func_dst_func.reverse_subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028824, VkglTestCase_028824_1, VkglTestCase_028824_2);

#define VkglTestCase_028825_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028825_2 "r.equation_src_func_dst_func.reverse_subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028825, VkglTestCase_028825_1, VkglTestCase_028825_2);

#define VkglTestCase_028826_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028826_2 "quation_src_func_dst_func.reverse_subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028826, VkglTestCase_028826_1, VkglTestCase_028826_2);

#define VkglTestCase_028827_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028827_2 "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028827, VkglTestCase_028827_1, VkglTestCase_028827_2);

#define VkglTestCase_028828_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028828_2 "quation_src_func_dst_func.reverse_subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028828, VkglTestCase_028828_1, VkglTestCase_028828_2);

#define VkglTestCase_028829_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028829_2 "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028829, VkglTestCase_028829_1, VkglTestCase_028829_2);

#define VkglTestCase_028830_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028830_2 "quation_src_func_dst_func.reverse_subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028830, VkglTestCase_028830_1, VkglTestCase_028830_2);

#define VkglTestCase_028831_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028831_2 "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028831, VkglTestCase_028831_1, VkglTestCase_028831_2);

#define VkglTestCase_028832_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028832_2 "quation_src_func_dst_func.reverse_subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028832, VkglTestCase_028832_1, VkglTestCase_028832_2);

#define VkglTestCase_028833_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028833_2 "on_src_func_dst_func.reverse_subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028833, VkglTestCase_028833_1, VkglTestCase_028833_2);

#define VkglTestCase_028834_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028834_2 "ation_src_func_dst_func.reverse_subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028834, VkglTestCase_028834_1, VkglTestCase_028834_2);

#define VkglTestCase_028835_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028835_2 "_src_func_dst_func.reverse_subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028835, VkglTestCase_028835_1, VkglTestCase_028835_2);

#define VkglTestCase_028836_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028836_2 "ation_src_func_dst_func.reverse_subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028836, VkglTestCase_028836_1, VkglTestCase_028836_2);

#define VkglTestCase_028837_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028837_2 "_src_func_dst_func.reverse_subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028837, VkglTestCase_028837_1, VkglTestCase_028837_2);

#define VkglTestCase_028838_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028838_2 "ion_src_func_dst_func.reverse_subtract_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028838, VkglTestCase_028838_1, VkglTestCase_028838_2);

#define VkglTestCase_028839_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028839_2 "ation_src_func_dst_func.reverse_subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028839, VkglTestCase_028839_1, VkglTestCase_028839_2);

#define VkglTestCase_028840_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028840_2 "ation_src_func_dst_func.reverse_subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028840, VkglTestCase_028840_1, VkglTestCase_028840_2);

#define VkglTestCase_028841_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028841_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028841, VkglTestCase_028841_1, VkglTestCase_028841_2);

#define VkglTestCase_028842_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028842_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028842, VkglTestCase_028842_1, VkglTestCase_028842_2);

#define VkglTestCase_028843_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028843_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028843, VkglTestCase_028843_1, VkglTestCase_028843_2);

#define VkglTestCase_028844_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028844_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028844, VkglTestCase_028844_1, VkglTestCase_028844_2);

#define VkglTestCase_028845_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028845_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028845, VkglTestCase_028845_1, VkglTestCase_028845_2);

#define VkglTestCase_028846_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028846_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028846, VkglTestCase_028846_1, VkglTestCase_028846_2);

#define VkglTestCase_028847_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028847_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028847, VkglTestCase_028847_1, VkglTestCase_028847_2);

#define VkglTestCase_028848_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028848_2 "c_func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028848, VkglTestCase_028848_1, VkglTestCase_028848_2);

#define VkglTestCase_028849_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028849_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028849, VkglTestCase_028849_1, VkglTestCase_028849_2);

#define VkglTestCase_028850_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028850_2 "func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028850, VkglTestCase_028850_1, VkglTestCase_028850_2);

#define VkglTestCase_028851_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028851_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028851, VkglTestCase_028851_1, VkglTestCase_028851_2);

#define VkglTestCase_028852_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028852_2 "func_dst_func.reverse_subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028852, VkglTestCase_028852_1, VkglTestCase_028852_2);

#define VkglTestCase_028853_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028853_2 "rc_func_dst_func.reverse_subtract_one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028853, VkglTestCase_028853_1, VkglTestCase_028853_2);

#define VkglTestCase_028854_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028854_2 "r.equation_src_func_dst_func.reverse_subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028854, VkglTestCase_028854_1, VkglTestCase_028854_2);

#define VkglTestCase_028855_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028855_2 "r.equation_src_func_dst_func.reverse_subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028855, VkglTestCase_028855_1, VkglTestCase_028855_2);

#define VkglTestCase_028856_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028856_2 "quation_src_func_dst_func.reverse_subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028856, VkglTestCase_028856_1, VkglTestCase_028856_2);

#define VkglTestCase_028857_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028857_2 "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028857, VkglTestCase_028857_1, VkglTestCase_028857_2);

#define VkglTestCase_028858_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028858_2 "quation_src_func_dst_func.reverse_subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028858, VkglTestCase_028858_1, VkglTestCase_028858_2);

#define VkglTestCase_028859_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028859_2 "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028859, VkglTestCase_028859_1, VkglTestCase_028859_2);

#define VkglTestCase_028860_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028860_2 "quation_src_func_dst_func.reverse_subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028860, VkglTestCase_028860_1, VkglTestCase_028860_2);

#define VkglTestCase_028861_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028861_2 "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028861, VkglTestCase_028861_1, VkglTestCase_028861_2);

#define VkglTestCase_028862_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028862_2 "quation_src_func_dst_func.reverse_subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028862, VkglTestCase_028862_1, VkglTestCase_028862_2);

#define VkglTestCase_028863_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028863_2 "on_src_func_dst_func.reverse_subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028863, VkglTestCase_028863_1, VkglTestCase_028863_2);

#define VkglTestCase_028864_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028864_2 "ation_src_func_dst_func.reverse_subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028864, VkglTestCase_028864_1, VkglTestCase_028864_2);

#define VkglTestCase_028865_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028865_2 "_src_func_dst_func.reverse_subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028865, VkglTestCase_028865_1, VkglTestCase_028865_2);

#define VkglTestCase_028866_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028866_2 "ation_src_func_dst_func.reverse_subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028866, VkglTestCase_028866_1, VkglTestCase_028866_2);

#define VkglTestCase_028867_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028867_2 "_src_func_dst_func.reverse_subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028867, VkglTestCase_028867_1, VkglTestCase_028867_2);

#define VkglTestCase_028868_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028868_2 "ion_src_func_dst_func.reverse_subtract_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028868, VkglTestCase_028868_1, VkglTestCase_028868_2);

#define VkglTestCase_028869_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028869_2 "ation_src_func_dst_func.reverse_subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028869, VkglTestCase_028869_1, VkglTestCase_028869_2);

#define VkglTestCase_028870_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028870_2 "ation_src_func_dst_func.reverse_subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028870, VkglTestCase_028870_1, VkglTestCase_028870_2);

#define VkglTestCase_028871_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028871_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028871, VkglTestCase_028871_1, VkglTestCase_028871_2);

#define VkglTestCase_028872_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028872_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028872, VkglTestCase_028872_1, VkglTestCase_028872_2);

#define VkglTestCase_028873_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028873_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028873, VkglTestCase_028873_1, VkglTestCase_028873_2);

#define VkglTestCase_028874_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028874_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028874, VkglTestCase_028874_1, VkglTestCase_028874_2);

#define VkglTestCase_028875_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028875_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028875, VkglTestCase_028875_1, VkglTestCase_028875_2);

#define VkglTestCase_028876_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028876_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028876, VkglTestCase_028876_1, VkglTestCase_028876_2);

#define VkglTestCase_028877_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028877_2 "on_src_func_dst_func.reverse_subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028877, VkglTestCase_028877_1, VkglTestCase_028877_2);

#define VkglTestCase_028878_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028878_2 "c_func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028878, VkglTestCase_028878_1, VkglTestCase_028878_2);

#define VkglTestCase_028879_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028879_2 "_src_func_dst_func.reverse_subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028879, VkglTestCase_028879_1, VkglTestCase_028879_2);

#define VkglTestCase_028880_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028880_2 "func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028880, VkglTestCase_028880_1, VkglTestCase_028880_2);

#define VkglTestCase_028881_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028881_2 "_src_func_dst_func.reverse_subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028881, VkglTestCase_028881_1, VkglTestCase_028881_2);

#define VkglTestCase_028882_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028882_2 "func_dst_func.reverse_subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028882, VkglTestCase_028882_1, VkglTestCase_028882_2);

#define VkglTestCase_028883_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028883_2 "rc_func_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028883, VkglTestCase_028883_1, VkglTestCase_028883_2);

#define VkglTestCase_028884_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028884_2 "r.equation_src_func_dst_func.reverse_subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028884, VkglTestCase_028884_1, VkglTestCase_028884_2);

#define VkglTestCase_028885_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_028885_2 "r.equation_src_func_dst_func.reverse_subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028885, VkglTestCase_028885_1, VkglTestCase_028885_2);

#define VkglTestCase_028886_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028886_2 "quation_src_func_dst_func.reverse_subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028886, VkglTestCase_028886_1, VkglTestCase_028886_2);

#define VkglTestCase_028887_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028887_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028887, VkglTestCase_028887_1, VkglTestCase_028887_2);

#define VkglTestCase_028888_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028888_2 "quation_src_func_dst_func.reverse_subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028888, VkglTestCase_028888_1, VkglTestCase_028888_2);

#define VkglTestCase_028889_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028889_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028889, VkglTestCase_028889_1, VkglTestCase_028889_2);

#define VkglTestCase_028890_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028890_2 "quation_src_func_dst_func.reverse_subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028890, VkglTestCase_028890_1, VkglTestCase_028890_2);

#define VkglTestCase_028891_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028891_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028891, VkglTestCase_028891_1, VkglTestCase_028891_2);

#define VkglTestCase_028892_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028892_2 "quation_src_func_dst_func.reverse_subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028892, VkglTestCase_028892_1, VkglTestCase_028892_2);

#define VkglTestCase_028893_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028893_2 "on_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028893, VkglTestCase_028893_1, VkglTestCase_028893_2);

#define VkglTestCase_028894_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028894_2 "ation_src_func_dst_func.reverse_subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028894, VkglTestCase_028894_1, VkglTestCase_028894_2);

#define VkglTestCase_028895_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028895_2 "_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028895, VkglTestCase_028895_1, VkglTestCase_028895_2);

#define VkglTestCase_028896_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028896_2 "ation_src_func_dst_func.reverse_subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028896, VkglTestCase_028896_1, VkglTestCase_028896_2);

#define VkglTestCase_028897_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028897_2 "_src_func_dst_func.reverse_subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028897, VkglTestCase_028897_1, VkglTestCase_028897_2);

#define VkglTestCase_028898_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028898_2 "ion_src_func_dst_func.reverse_subtract_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028898, VkglTestCase_028898_1, VkglTestCase_028898_2);

#define VkglTestCase_028899_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028899_2 "ation_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028899, VkglTestCase_028899_1, VkglTestCase_028899_2);

#define VkglTestCase_028900_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028900_2 "ation_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028900, VkglTestCase_028900_1, VkglTestCase_028900_2);

#define VkglTestCase_028901_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028901_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028901, VkglTestCase_028901_1, VkglTestCase_028901_2);

#define VkglTestCase_028902_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028902_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028902, VkglTestCase_028902_1, VkglTestCase_028902_2);

#define VkglTestCase_028903_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028903_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028903, VkglTestCase_028903_1, VkglTestCase_028903_2);

#define VkglTestCase_028904_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028904_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028904, VkglTestCase_028904_1, VkglTestCase_028904_2);

#define VkglTestCase_028905_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028905_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028905, VkglTestCase_028905_1, VkglTestCase_028905_2);

#define VkglTestCase_028906_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028906_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028906, VkglTestCase_028906_1, VkglTestCase_028906_2);

#define VkglTestCase_028907_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028907_2 "on_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028907, VkglTestCase_028907_1, VkglTestCase_028907_2);

#define VkglTestCase_028908_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028908_2 "c_func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028908, VkglTestCase_028908_1, VkglTestCase_028908_2);

#define VkglTestCase_028909_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028909_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028909, VkglTestCase_028909_1, VkglTestCase_028909_2);

#define VkglTestCase_028910_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028910_2 "func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028910, VkglTestCase_028910_1, VkglTestCase_028910_2);

#define VkglTestCase_028911_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028911_2 "_src_func_dst_func.reverse_subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028911, VkglTestCase_028911_1, VkglTestCase_028911_2);

#define VkglTestCase_028912_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028912_2 "func_dst_func.reverse_subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028912, VkglTestCase_028912_1, VkglTestCase_028912_2);

#define VkglTestCase_028913_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028913_2 "rc_func_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028913, VkglTestCase_028913_1, VkglTestCase_028913_2);

#define VkglTestCase_028914_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028914_2 "quation_src_func_dst_func.reverse_subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028914, VkglTestCase_028914_1, VkglTestCase_028914_2);

#define VkglTestCase_028915_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_028915_2 "equation_src_func_dst_func.reverse_subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028915, VkglTestCase_028915_1, VkglTestCase_028915_2);

#define VkglTestCase_028916_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028916_2 "ation_src_func_dst_func.reverse_subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028916, VkglTestCase_028916_1, VkglTestCase_028916_2);

#define VkglTestCase_028917_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028917_2 "_src_func_dst_func.reverse_subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028917, VkglTestCase_028917_1, VkglTestCase_028917_2);

#define VkglTestCase_028918_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028918_2 "ation_src_func_dst_func.reverse_subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028918, VkglTestCase_028918_1, VkglTestCase_028918_2);

#define VkglTestCase_028919_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028919_2 "_src_func_dst_func.reverse_subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028919, VkglTestCase_028919_1, VkglTestCase_028919_2);

#define VkglTestCase_028920_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028920_2 "ation_src_func_dst_func.reverse_subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028920, VkglTestCase_028920_1, VkglTestCase_028920_2);

#define VkglTestCase_028921_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028921_2 "_src_func_dst_func.reverse_subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028921, VkglTestCase_028921_1, VkglTestCase_028921_2);

#define VkglTestCase_028922_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028922_2 "ation_src_func_dst_func.reverse_subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028922, VkglTestCase_028922_1, VkglTestCase_028922_2);

#define VkglTestCase_028923_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028923_2 "_src_func_dst_func.reverse_subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028923, VkglTestCase_028923_1, VkglTestCase_028923_2);

#define VkglTestCase_028924_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028924_2 "on_src_func_dst_func.reverse_subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028924, VkglTestCase_028924_1, VkglTestCase_028924_2);

#define VkglTestCase_028925_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028925_2 "c_func_dst_func.reverse_subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028925, VkglTestCase_028925_1, VkglTestCase_028925_2);

#define VkglTestCase_028926_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028926_2 "on_src_func_dst_func.reverse_subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028926, VkglTestCase_028926_1, VkglTestCase_028926_2);

#define VkglTestCase_028927_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028927_2 "c_func_dst_func.reverse_subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028927, VkglTestCase_028927_1, VkglTestCase_028927_2);

#define VkglTestCase_028928_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028928_2 "_src_func_dst_func.reverse_subtract_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028928, VkglTestCase_028928_1, VkglTestCase_028928_2);

#define VkglTestCase_028929_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028929_2 "on_src_func_dst_func.reverse_subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028929, VkglTestCase_028929_1, VkglTestCase_028929_2);

#define VkglTestCase_028930_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028930_2 "ion_src_func_dst_func.reverse_subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028930, VkglTestCase_028930_1, VkglTestCase_028930_2);

#define VkglTestCase_028931_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028931_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028931, VkglTestCase_028931_1, VkglTestCase_028931_2);

#define VkglTestCase_028932_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028932_2 "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028932, VkglTestCase_028932_1, VkglTestCase_028932_2);

#define VkglTestCase_028933_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028933_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028933, VkglTestCase_028933_1, VkglTestCase_028933_2);

#define VkglTestCase_028934_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028934_2 "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028934, VkglTestCase_028934_1, VkglTestCase_028934_2);

#define VkglTestCase_028935_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028935_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028935, VkglTestCase_028935_1, VkglTestCase_028935_2);

#define VkglTestCase_028936_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028936_2 "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028936, VkglTestCase_028936_1, VkglTestCase_028936_2);

#define VkglTestCase_028937_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028937_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028937, VkglTestCase_028937_1, VkglTestCase_028937_2);

#define VkglTestCase_028938_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028938_2 "func_dst_func.reverse_subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028938, VkglTestCase_028938_1, VkglTestCase_028938_2);

#define VkglTestCase_028939_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028939_2 "c_func_dst_func.reverse_subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028939, VkglTestCase_028939_1, VkglTestCase_028939_2);

#define VkglTestCase_028940_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
#define VkglTestCase_028940_2 "c_dst_func.reverse_subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028940, VkglTestCase_028940_1, VkglTestCase_028940_2);

#define VkglTestCase_028941_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028941_2 "c_func_dst_func.reverse_subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028941, VkglTestCase_028941_1, VkglTestCase_028941_2);

#define VkglTestCase_028942_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
#define VkglTestCase_028942_2 "c_dst_func.reverse_subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028942, VkglTestCase_028942_1, VkglTestCase_028942_2);

#define VkglTestCase_028943_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028943_2 "func_dst_func.reverse_subtract_one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028943, VkglTestCase_028943_1, VkglTestCase_028943_2);

#define VkglTestCase_028944_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.e"
#define VkglTestCase_028944_2 "quation_src_func_dst_func.reverse_subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028944, VkglTestCase_028944_1, VkglTestCase_028944_2);

#define VkglTestCase_028945_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_028945_2 "equation_src_func_dst_func.reverse_subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028945, VkglTestCase_028945_1, VkglTestCase_028945_2);

#define VkglTestCase_028946_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028946_2 "ation_src_func_dst_func.reverse_subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028946, VkglTestCase_028946_1, VkglTestCase_028946_2);

#define VkglTestCase_028947_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028947_2 "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028947, VkglTestCase_028947_1, VkglTestCase_028947_2);

#define VkglTestCase_028948_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028948_2 "ation_src_func_dst_func.reverse_subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028948, VkglTestCase_028948_1, VkglTestCase_028948_2);

#define VkglTestCase_028949_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028949_2 "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028949, VkglTestCase_028949_1, VkglTestCase_028949_2);

#define VkglTestCase_028950_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028950_2 "ation_src_func_dst_func.reverse_subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028950, VkglTestCase_028950_1, VkglTestCase_028950_2);

#define VkglTestCase_028951_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028951_2 "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028951, VkglTestCase_028951_1, VkglTestCase_028951_2);

#define VkglTestCase_028952_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028952_2 "ation_src_func_dst_func.reverse_subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028952, VkglTestCase_028952_1, VkglTestCase_028952_2);

#define VkglTestCase_028953_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028953_2 "_src_func_dst_func.reverse_subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028953, VkglTestCase_028953_1, VkglTestCase_028953_2);

#define VkglTestCase_028954_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028954_2 "on_src_func_dst_func.reverse_subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028954, VkglTestCase_028954_1, VkglTestCase_028954_2);

#define VkglTestCase_028955_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028955_2 "c_func_dst_func.reverse_subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028955, VkglTestCase_028955_1, VkglTestCase_028955_2);

#define VkglTestCase_028956_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028956_2 "on_src_func_dst_func.reverse_subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028956, VkglTestCase_028956_1, VkglTestCase_028956_2);

#define VkglTestCase_028957_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028957_2 "c_func_dst_func.reverse_subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028957, VkglTestCase_028957_1, VkglTestCase_028957_2);

#define VkglTestCase_028958_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028958_2 "_src_func_dst_func.reverse_subtract_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028958, VkglTestCase_028958_1, VkglTestCase_028958_2);

#define VkglTestCase_028959_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equati"
#define VkglTestCase_028959_2 "on_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028959, VkglTestCase_028959_1, VkglTestCase_028959_2);

#define VkglTestCase_028960_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028960_2 "ion_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028960, VkglTestCase_028960_1, VkglTestCase_028960_2);

#define VkglTestCase_028961_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028961_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028961, VkglTestCase_028961_1, VkglTestCase_028961_2);

#define VkglTestCase_028962_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028962_2 "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028962, VkglTestCase_028962_1, VkglTestCase_028962_2);

#define VkglTestCase_028963_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028963_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028963, VkglTestCase_028963_1, VkglTestCase_028963_2);

#define VkglTestCase_028964_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028964_2 "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028964, VkglTestCase_028964_1, VkglTestCase_028964_2);

#define VkglTestCase_028965_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028965_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028965, VkglTestCase_028965_1, VkglTestCase_028965_2);

#define VkglTestCase_028966_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028966_2 "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028966, VkglTestCase_028966_1, VkglTestCase_028966_2);

#define VkglTestCase_028967_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028967_2 "_src_func_dst_func.reverse_subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028967, VkglTestCase_028967_1, VkglTestCase_028967_2);

#define VkglTestCase_028968_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028968_2 "func_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028968, VkglTestCase_028968_1, VkglTestCase_028968_2);

#define VkglTestCase_028969_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028969_2 "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028969, VkglTestCase_028969_1, VkglTestCase_028969_2);

#define VkglTestCase_028970_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
#define VkglTestCase_028970_2 "c_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028970, VkglTestCase_028970_1, VkglTestCase_028970_2);

#define VkglTestCase_028971_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_sr"
#define VkglTestCase_028971_2 "c_func_dst_func.reverse_subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028971, VkglTestCase_028971_1, VkglTestCase_028971_2);

#define VkglTestCase_028972_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_fun"
#define VkglTestCase_028972_2 "c_dst_func.reverse_subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028972, VkglTestCase_028972_1, VkglTestCase_028972_2);

#define VkglTestCase_028973_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028973_2 "func_dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028973, VkglTestCase_028973_1, VkglTestCase_028973_2);

#define VkglTestCase_028974_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equ"
#define VkglTestCase_028974_2 "ation_src_func_dst_func.reverse_subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028974, VkglTestCase_028974_1, VkglTestCase_028974_2);

#define VkglTestCase_028975_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
#define VkglTestCase_028975_2 "uation_src_func_dst_func.reverse_subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028975, VkglTestCase_028975_1, VkglTestCase_028975_2);

#define VkglTestCase_028976_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028976_2 "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028976, VkglTestCase_028976_1, VkglTestCase_028976_2);

#define VkglTestCase_028977_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028977_2 "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028977, VkglTestCase_028977_1, VkglTestCase_028977_2);

#define VkglTestCase_028978_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028978_2 "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028978, VkglTestCase_028978_1, VkglTestCase_028978_2);

#define VkglTestCase_028979_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028979_2 "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028979, VkglTestCase_028979_1, VkglTestCase_028979_2);

#define VkglTestCase_028980_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028980_2 "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028980, VkglTestCase_028980_1, VkglTestCase_028980_2);

#define VkglTestCase_028981_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028981_2 "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028981, VkglTestCase_028981_1, VkglTestCase_028981_2);

#define VkglTestCase_028982_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equat"
#define VkglTestCase_028982_2 "ion_src_func_dst_func.reverse_subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028982, VkglTestCase_028982_1, VkglTestCase_028982_2);

#define VkglTestCase_028983_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028983_2 "rc_func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028983, VkglTestCase_028983_1, VkglTestCase_028983_2);

#define VkglTestCase_028984_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028984_2 "_src_func_dst_func.reverse_subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028984, VkglTestCase_028984_1, VkglTestCase_028984_2);

#define VkglTestCase_028985_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028985_2 "func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028985, VkglTestCase_028985_1, VkglTestCase_028985_2);

#define VkglTestCase_028986_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation"
#define VkglTestCase_028986_2 "_src_func_dst_func.reverse_subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028986, VkglTestCase_028986_1, VkglTestCase_028986_2);

#define VkglTestCase_028987_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_src_"
#define VkglTestCase_028987_2 "func_dst_func.reverse_subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028987, VkglTestCase_028987_1, VkglTestCase_028987_2);

#define VkglTestCase_028988_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equation_s"
#define VkglTestCase_028988_2 "rc_func_dst_func.reverse_subtract_src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028988, VkglTestCase_028988_1, VkglTestCase_028988_2);

#define VkglTestCase_028989_1 "dEQP-GLES3.functional.fragment_ops.blend.defa"
#define VkglTestCase_028989_2 "ult_framebuffer.equation_src_func_dst_func.min"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028989, VkglTestCase_028989_1, VkglTestCase_028989_2);

#define VkglTestCase_028990_1 "dEQP-GLES3.functional.fragment_ops.blend.defa"
#define VkglTestCase_028990_2 "ult_framebuffer.equation_src_func_dst_func.max"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028990, VkglTestCase_028990_1, VkglTestCase_028990_2);
=======
static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_zero_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028314 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_zero_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028315 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028316 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028317 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028318 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028319 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028320 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028321 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_zero_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028322 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_zero_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028323 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_zero_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028324 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_zero_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028325 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_zero_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028326 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_zero_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028327 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_zero_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028328 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_f"
        "ramebuffer.equation_src_func_dst_func.add_one_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028329 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_"
        "framebuffer.equation_src_func_dst_func.add_one_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028330 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028331 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028332 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028333 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028334 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028335 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028336 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_one_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028337 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028338 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_one_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028339 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028340 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_one_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028341 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028342 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028343 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028344 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028345 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028346 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028347 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028348 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028349 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028350 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028351 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028352 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028353 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028354 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028355 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028356 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028357 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028358 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_one_minus_src_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028359 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
        "fer.equation_src_func_dst_func.add_one_minus_src_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028360 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028361 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028362 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028363 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028364 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028365 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028366 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_one_minus_src_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028367 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028368 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028369 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028370 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_one_minus_src_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028371 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equatio"
        "n_src_func_dst_func.add_one_minus_src_color_one_minus_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028372 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.equa"
        "tion_src_func_dst_func.add_one_minus_src_color_src_alpha_saturate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028373 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
        "ebuffer.equation_src_func_dst_func.add_dst_color_zero",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028374 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
        "mebuffer.equation_src_func_dst_func.add_dst_color_one",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028375 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028376 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_src_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028377 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028378 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_dst_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028379 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028380 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_src_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028381 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_frameb"
        "uffer.equation_src_func_dst_func.add_dst_color_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028382 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer"
        ".equation_src_func_dst_func.add_dst_color_one_minus_dst_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028383 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_color_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028384 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.eq"
        "uation_src_func_dst_func.add_dst_color_one_minus_constant_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028385 end";
}

static HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_028386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment_ops.blend.default_framebuff"
        "er.equation_src_func_dst_func.add_dst_color_constant_alpha",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30029TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30029TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30029TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30029TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30029TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_028386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_028386 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
