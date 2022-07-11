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
#include "../ActsDeqpgles30030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029216_1 "dEQP-GLES3.functional.fragment_ops.blend.defaul"
#define VkglTestCase_029216_2 "t_framebuffer.rgb_func_alpha_func.dst.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029216, VkglTestCase_029216_1, VkglTestCase_029216_2);

#define VkglTestCase_029217_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_029217_2 "lt_framebuffer.rgb_func_alpha_func.dst.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029217, VkglTestCase_029217_1, VkglTestCase_029217_2);

#define VkglTestCase_029218_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029218_2 "framebuffer.rgb_func_alpha_func.dst.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029218, VkglTestCase_029218_1, VkglTestCase_029218_2);

#define VkglTestCase_029219_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029219_2 "buffer.rgb_func_alpha_func.dst.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029219, VkglTestCase_029219_1, VkglTestCase_029219_2);

#define VkglTestCase_029220_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029220_2 "framebuffer.rgb_func_alpha_func.dst.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029220, VkglTestCase_029220_1, VkglTestCase_029220_2);

#define VkglTestCase_029221_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029221_2 "buffer.rgb_func_alpha_func.dst.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029221, VkglTestCase_029221_1, VkglTestCase_029221_2);

#define VkglTestCase_029222_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029222_2 "framebuffer.rgb_func_alpha_func.dst.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029222, VkglTestCase_029222_1, VkglTestCase_029222_2);

#define VkglTestCase_029223_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029223_2 "buffer.rgb_func_alpha_func.dst.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029223, VkglTestCase_029223_1, VkglTestCase_029223_2);

#define VkglTestCase_029224_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029224_2 "framebuffer.rgb_func_alpha_func.dst.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029224, VkglTestCase_029224_1, VkglTestCase_029224_2);

#define VkglTestCase_029225_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029225_2 "buffer.rgb_func_alpha_func.dst.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029225, VkglTestCase_029225_1, VkglTestCase_029225_2);

#define VkglTestCase_029226_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029226_2 "mebuffer.rgb_func_alpha_func.dst.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029226, VkglTestCase_029226_1, VkglTestCase_029226_2);

#define VkglTestCase_029227_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029227_2 "fer.rgb_func_alpha_func.dst.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029227, VkglTestCase_029227_1, VkglTestCase_029227_2);

#define VkglTestCase_029228_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029228_2 "mebuffer.rgb_func_alpha_func.dst.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029228, VkglTestCase_029228_1, VkglTestCase_029228_2);

#define VkglTestCase_029229_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029229_2 "fer.rgb_func_alpha_func.dst.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029229, VkglTestCase_029229_1, VkglTestCase_029229_2);

#define VkglTestCase_029230_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029230_2 "buffer.rgb_func_alpha_func.dst.zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029230, VkglTestCase_029230_1, VkglTestCase_029230_2);

#define VkglTestCase_029231_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_029231_2 "lt_framebuffer.rgb_func_alpha_func.dst.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029231, VkglTestCase_029231_1, VkglTestCase_029231_2);

#define VkglTestCase_029232_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_029232_2 "lt_framebuffer.rgb_func_alpha_func.dst.one_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029232, VkglTestCase_029232_1, VkglTestCase_029232_2);

#define VkglTestCase_029233_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029233_2 "framebuffer.rgb_func_alpha_func.dst.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029233, VkglTestCase_029233_1, VkglTestCase_029233_2);

#define VkglTestCase_029234_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029234_2 "buffer.rgb_func_alpha_func.dst.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029234, VkglTestCase_029234_1, VkglTestCase_029234_2);

#define VkglTestCase_029235_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029235_2 "framebuffer.rgb_func_alpha_func.dst.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029235, VkglTestCase_029235_1, VkglTestCase_029235_2);

#define VkglTestCase_029236_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029236_2 "buffer.rgb_func_alpha_func.dst.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029236, VkglTestCase_029236_1, VkglTestCase_029236_2);

#define VkglTestCase_029237_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029237_2 "framebuffer.rgb_func_alpha_func.dst.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029237, VkglTestCase_029237_1, VkglTestCase_029237_2);

#define VkglTestCase_029238_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029238_2 "buffer.rgb_func_alpha_func.dst.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029238, VkglTestCase_029238_1, VkglTestCase_029238_2);

#define VkglTestCase_029239_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029239_2 "framebuffer.rgb_func_alpha_func.dst.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029239, VkglTestCase_029239_1, VkglTestCase_029239_2);

#define VkglTestCase_029240_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029240_2 "buffer.rgb_func_alpha_func.dst.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029240, VkglTestCase_029240_1, VkglTestCase_029240_2);

#define VkglTestCase_029241_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029241_2 "amebuffer.rgb_func_alpha_func.dst.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029241, VkglTestCase_029241_1, VkglTestCase_029241_2);

#define VkglTestCase_029242_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029242_2 "ffer.rgb_func_alpha_func.dst.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029242, VkglTestCase_029242_1, VkglTestCase_029242_2);

#define VkglTestCase_029243_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029243_2 "amebuffer.rgb_func_alpha_func.dst.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029243, VkglTestCase_029243_1, VkglTestCase_029243_2);

#define VkglTestCase_029244_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029244_2 "ffer.rgb_func_alpha_func.dst.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029244, VkglTestCase_029244_1, VkglTestCase_029244_2);

#define VkglTestCase_029245_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_029245_2 "ebuffer.rgb_func_alpha_func.dst.one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029245, VkglTestCase_029245_1, VkglTestCase_029245_2);

#define VkglTestCase_029246_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029246_2 "framebuffer.rgb_func_alpha_func.dst.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029246, VkglTestCase_029246_1, VkglTestCase_029246_2);

#define VkglTestCase_029247_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029247_2 "framebuffer.rgb_func_alpha_func.dst.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029247, VkglTestCase_029247_1, VkglTestCase_029247_2);

#define VkglTestCase_029248_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029248_2 "mebuffer.rgb_func_alpha_func.dst.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029248, VkglTestCase_029248_1, VkglTestCase_029248_2);

#define VkglTestCase_029249_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029249_2 "fer.rgb_func_alpha_func.dst.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029249, VkglTestCase_029249_1, VkglTestCase_029249_2);

#define VkglTestCase_029250_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029250_2 "mebuffer.rgb_func_alpha_func.dst.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029250, VkglTestCase_029250_1, VkglTestCase_029250_2);

#define VkglTestCase_029251_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029251_2 "fer.rgb_func_alpha_func.dst.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029251, VkglTestCase_029251_1, VkglTestCase_029251_2);

#define VkglTestCase_029252_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029252_2 "mebuffer.rgb_func_alpha_func.dst.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029252, VkglTestCase_029252_1, VkglTestCase_029252_2);

#define VkglTestCase_029253_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029253_2 "fer.rgb_func_alpha_func.dst.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029253, VkglTestCase_029253_1, VkglTestCase_029253_2);

#define VkglTestCase_029254_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029254_2 "mebuffer.rgb_func_alpha_func.dst.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029254, VkglTestCase_029254_1, VkglTestCase_029254_2);

#define VkglTestCase_029255_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029255_2 "fer.rgb_func_alpha_func.dst.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029255, VkglTestCase_029255_1, VkglTestCase_029255_2);

#define VkglTestCase_029256_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029256_2 "buffer.rgb_func_alpha_func.dst.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029256, VkglTestCase_029256_1, VkglTestCase_029256_2);

#define VkglTestCase_029257_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029257_2 "r.rgb_func_alpha_func.dst.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029257, VkglTestCase_029257_1, VkglTestCase_029257_2);

#define VkglTestCase_029258_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029258_2 "buffer.rgb_func_alpha_func.dst.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029258, VkglTestCase_029258_1, VkglTestCase_029258_2);

#define VkglTestCase_029259_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029259_2 "r.rgb_func_alpha_func.dst.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029259, VkglTestCase_029259_1, VkglTestCase_029259_2);

#define VkglTestCase_029260_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029260_2 "ffer.rgb_func_alpha_func.dst.src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029260, VkglTestCase_029260_1, VkglTestCase_029260_2);

#define VkglTestCase_029261_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029261_2 "buffer.rgb_func_alpha_func.dst.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029261, VkglTestCase_029261_1, VkglTestCase_029261_2);

#define VkglTestCase_029262_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029262_2 "buffer.rgb_func_alpha_func.dst.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029262, VkglTestCase_029262_1, VkglTestCase_029262_2);

#define VkglTestCase_029263_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029263_2 "fer.rgb_func_alpha_func.dst.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029263, VkglTestCase_029263_1, VkglTestCase_029263_2);

#define VkglTestCase_029264_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029264_2 "gb_func_alpha_func.dst.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029264, VkglTestCase_029264_1, VkglTestCase_029264_2);

#define VkglTestCase_029265_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029265_2 "fer.rgb_func_alpha_func.dst.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029265, VkglTestCase_029265_1, VkglTestCase_029265_2);

#define VkglTestCase_029266_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029266_2 "gb_func_alpha_func.dst.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029266, VkglTestCase_029266_1, VkglTestCase_029266_2);

#define VkglTestCase_029267_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029267_2 "fer.rgb_func_alpha_func.dst.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029267, VkglTestCase_029267_1, VkglTestCase_029267_2);

#define VkglTestCase_029268_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029268_2 "gb_func_alpha_func.dst.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029268, VkglTestCase_029268_1, VkglTestCase_029268_2);

#define VkglTestCase_029269_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029269_2 "fer.rgb_func_alpha_func.dst.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029269, VkglTestCase_029269_1, VkglTestCase_029269_2);

#define VkglTestCase_029270_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029270_2 "gb_func_alpha_func.dst.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029270, VkglTestCase_029270_1, VkglTestCase_029270_2);

#define VkglTestCase_029271_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029271_2 "r.rgb_func_alpha_func.dst.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029271, VkglTestCase_029271_1, VkglTestCase_029271_2);

#define VkglTestCase_029272_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029272_2 "_func_alpha_func.dst.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029272, VkglTestCase_029272_1, VkglTestCase_029272_2);

#define VkglTestCase_029273_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029273_2 "r.rgb_func_alpha_func.dst.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029273, VkglTestCase_029273_1, VkglTestCase_029273_2);

#define VkglTestCase_029274_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029274_2 "_func_alpha_func.dst.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029274, VkglTestCase_029274_1, VkglTestCase_029274_2);

#define VkglTestCase_029275_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029275_2 "rgb_func_alpha_func.dst.one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029275, VkglTestCase_029275_1, VkglTestCase_029275_2);

#define VkglTestCase_029276_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029276_2 "framebuffer.rgb_func_alpha_func.dst.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029276, VkglTestCase_029276_1, VkglTestCase_029276_2);

#define VkglTestCase_029277_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029277_2 "framebuffer.rgb_func_alpha_func.dst.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029277, VkglTestCase_029277_1, VkglTestCase_029277_2);

#define VkglTestCase_029278_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029278_2 "mebuffer.rgb_func_alpha_func.dst.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029278, VkglTestCase_029278_1, VkglTestCase_029278_2);

#define VkglTestCase_029279_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029279_2 "fer.rgb_func_alpha_func.dst.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029279, VkglTestCase_029279_1, VkglTestCase_029279_2);

#define VkglTestCase_029280_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029280_2 "mebuffer.rgb_func_alpha_func.dst.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029280, VkglTestCase_029280_1, VkglTestCase_029280_2);

#define VkglTestCase_029281_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029281_2 "fer.rgb_func_alpha_func.dst.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029281, VkglTestCase_029281_1, VkglTestCase_029281_2);

#define VkglTestCase_029282_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029282_2 "mebuffer.rgb_func_alpha_func.dst.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029282, VkglTestCase_029282_1, VkglTestCase_029282_2);

#define VkglTestCase_029283_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029283_2 "fer.rgb_func_alpha_func.dst.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029283, VkglTestCase_029283_1, VkglTestCase_029283_2);

#define VkglTestCase_029284_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029284_2 "mebuffer.rgb_func_alpha_func.dst.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029284, VkglTestCase_029284_1, VkglTestCase_029284_2);

#define VkglTestCase_029285_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029285_2 "fer.rgb_func_alpha_func.dst.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029285, VkglTestCase_029285_1, VkglTestCase_029285_2);

#define VkglTestCase_029286_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029286_2 "buffer.rgb_func_alpha_func.dst.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029286, VkglTestCase_029286_1, VkglTestCase_029286_2);

#define VkglTestCase_029287_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029287_2 "r.rgb_func_alpha_func.dst.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029287, VkglTestCase_029287_1, VkglTestCase_029287_2);

#define VkglTestCase_029288_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029288_2 "buffer.rgb_func_alpha_func.dst.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029288, VkglTestCase_029288_1, VkglTestCase_029288_2);

#define VkglTestCase_029289_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029289_2 "r.rgb_func_alpha_func.dst.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029289, VkglTestCase_029289_1, VkglTestCase_029289_2);

#define VkglTestCase_029290_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029290_2 "ffer.rgb_func_alpha_func.dst.dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029290, VkglTestCase_029290_1, VkglTestCase_029290_2);

#define VkglTestCase_029291_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029291_2 "buffer.rgb_func_alpha_func.dst.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029291, VkglTestCase_029291_1, VkglTestCase_029291_2);

#define VkglTestCase_029292_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029292_2 "buffer.rgb_func_alpha_func.dst.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029292, VkglTestCase_029292_1, VkglTestCase_029292_2);

#define VkglTestCase_029293_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029293_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029293, VkglTestCase_029293_1, VkglTestCase_029293_2);

#define VkglTestCase_029294_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029294_2 "gb_func_alpha_func.dst.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029294, VkglTestCase_029294_1, VkglTestCase_029294_2);

#define VkglTestCase_029295_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029295_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029295, VkglTestCase_029295_1, VkglTestCase_029295_2);

#define VkglTestCase_029296_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029296_2 "gb_func_alpha_func.dst.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029296, VkglTestCase_029296_1, VkglTestCase_029296_2);

#define VkglTestCase_029297_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029297_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029297, VkglTestCase_029297_1, VkglTestCase_029297_2);

#define VkglTestCase_029298_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029298_2 "gb_func_alpha_func.dst.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029298, VkglTestCase_029298_1, VkglTestCase_029298_2);

#define VkglTestCase_029299_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029299_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029299, VkglTestCase_029299_1, VkglTestCase_029299_2);

#define VkglTestCase_029300_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029300_2 "gb_func_alpha_func.dst.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029300, VkglTestCase_029300_1, VkglTestCase_029300_2);

#define VkglTestCase_029301_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029301_2 "r.rgb_func_alpha_func.dst.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029301, VkglTestCase_029301_1, VkglTestCase_029301_2);

#define VkglTestCase_029302_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029302_2 "_func_alpha_func.dst.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029302, VkglTestCase_029302_1, VkglTestCase_029302_2);

#define VkglTestCase_029303_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029303_2 "r.rgb_func_alpha_func.dst.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029303, VkglTestCase_029303_1, VkglTestCase_029303_2);

#define VkglTestCase_029304_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029304_2 "_func_alpha_func.dst.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029304, VkglTestCase_029304_1, VkglTestCase_029304_2);

#define VkglTestCase_029305_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029305_2 "rgb_func_alpha_func.dst.one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029305, VkglTestCase_029305_1, VkglTestCase_029305_2);

#define VkglTestCase_029306_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029306_2 "framebuffer.rgb_func_alpha_func.dst.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029306, VkglTestCase_029306_1, VkglTestCase_029306_2);

#define VkglTestCase_029307_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029307_2 "framebuffer.rgb_func_alpha_func.dst.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029307, VkglTestCase_029307_1, VkglTestCase_029307_2);

#define VkglTestCase_029308_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029308_2 "mebuffer.rgb_func_alpha_func.dst.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029308, VkglTestCase_029308_1, VkglTestCase_029308_2);

#define VkglTestCase_029309_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029309_2 "fer.rgb_func_alpha_func.dst.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029309, VkglTestCase_029309_1, VkglTestCase_029309_2);

#define VkglTestCase_029310_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029310_2 "mebuffer.rgb_func_alpha_func.dst.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029310, VkglTestCase_029310_1, VkglTestCase_029310_2);

#define VkglTestCase_029311_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029311_2 "fer.rgb_func_alpha_func.dst.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029311, VkglTestCase_029311_1, VkglTestCase_029311_2);

#define VkglTestCase_029312_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029312_2 "mebuffer.rgb_func_alpha_func.dst.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029312, VkglTestCase_029312_1, VkglTestCase_029312_2);

#define VkglTestCase_029313_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029313_2 "fer.rgb_func_alpha_func.dst.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029313, VkglTestCase_029313_1, VkglTestCase_029313_2);

#define VkglTestCase_029314_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029314_2 "mebuffer.rgb_func_alpha_func.dst.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029314, VkglTestCase_029314_1, VkglTestCase_029314_2);

#define VkglTestCase_029315_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029315_2 "fer.rgb_func_alpha_func.dst.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029315, VkglTestCase_029315_1, VkglTestCase_029315_2);

#define VkglTestCase_029316_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029316_2 "buffer.rgb_func_alpha_func.dst.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029316, VkglTestCase_029316_1, VkglTestCase_029316_2);

#define VkglTestCase_029317_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029317_2 "r.rgb_func_alpha_func.dst.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029317, VkglTestCase_029317_1, VkglTestCase_029317_2);

#define VkglTestCase_029318_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029318_2 "buffer.rgb_func_alpha_func.dst.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029318, VkglTestCase_029318_1, VkglTestCase_029318_2);

#define VkglTestCase_029319_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029319_2 "r.rgb_func_alpha_func.dst.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029319, VkglTestCase_029319_1, VkglTestCase_029319_2);

#define VkglTestCase_029320_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029320_2 "ffer.rgb_func_alpha_func.dst.src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029320, VkglTestCase_029320_1, VkglTestCase_029320_2);

#define VkglTestCase_029321_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029321_2 "buffer.rgb_func_alpha_func.dst.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029321, VkglTestCase_029321_1, VkglTestCase_029321_2);

#define VkglTestCase_029322_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029322_2 "buffer.rgb_func_alpha_func.dst.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029322, VkglTestCase_029322_1, VkglTestCase_029322_2);

#define VkglTestCase_029323_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029323_2 "fer.rgb_func_alpha_func.dst.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029323, VkglTestCase_029323_1, VkglTestCase_029323_2);

#define VkglTestCase_029324_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029324_2 "gb_func_alpha_func.dst.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029324, VkglTestCase_029324_1, VkglTestCase_029324_2);

#define VkglTestCase_029325_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029325_2 "fer.rgb_func_alpha_func.dst.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029325, VkglTestCase_029325_1, VkglTestCase_029325_2);

#define VkglTestCase_029326_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029326_2 "gb_func_alpha_func.dst.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029326, VkglTestCase_029326_1, VkglTestCase_029326_2);

#define VkglTestCase_029327_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029327_2 "fer.rgb_func_alpha_func.dst.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029327, VkglTestCase_029327_1, VkglTestCase_029327_2);

#define VkglTestCase_029328_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029328_2 "gb_func_alpha_func.dst.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029328, VkglTestCase_029328_1, VkglTestCase_029328_2);

#define VkglTestCase_029329_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029329_2 "fer.rgb_func_alpha_func.dst.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029329, VkglTestCase_029329_1, VkglTestCase_029329_2);

#define VkglTestCase_029330_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029330_2 "gb_func_alpha_func.dst.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029330, VkglTestCase_029330_1, VkglTestCase_029330_2);

#define VkglTestCase_029331_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029331_2 "r.rgb_func_alpha_func.dst.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029331, VkglTestCase_029331_1, VkglTestCase_029331_2);

#define VkglTestCase_029332_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029332_2 "_func_alpha_func.dst.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029332, VkglTestCase_029332_1, VkglTestCase_029332_2);

#define VkglTestCase_029333_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029333_2 "r.rgb_func_alpha_func.dst.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029333, VkglTestCase_029333_1, VkglTestCase_029333_2);

#define VkglTestCase_029334_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029334_2 "_func_alpha_func.dst.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029334, VkglTestCase_029334_1, VkglTestCase_029334_2);

#define VkglTestCase_029335_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029335_2 "rgb_func_alpha_func.dst.one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029335, VkglTestCase_029335_1, VkglTestCase_029335_2);

#define VkglTestCase_029336_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029336_2 "framebuffer.rgb_func_alpha_func.dst.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029336, VkglTestCase_029336_1, VkglTestCase_029336_2);

#define VkglTestCase_029337_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029337_2 "framebuffer.rgb_func_alpha_func.dst.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029337, VkglTestCase_029337_1, VkglTestCase_029337_2);

#define VkglTestCase_029338_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029338_2 "mebuffer.rgb_func_alpha_func.dst.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029338, VkglTestCase_029338_1, VkglTestCase_029338_2);

#define VkglTestCase_029339_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029339_2 "fer.rgb_func_alpha_func.dst.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029339, VkglTestCase_029339_1, VkglTestCase_029339_2);

#define VkglTestCase_029340_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029340_2 "mebuffer.rgb_func_alpha_func.dst.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029340, VkglTestCase_029340_1, VkglTestCase_029340_2);

#define VkglTestCase_029341_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029341_2 "fer.rgb_func_alpha_func.dst.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029341, VkglTestCase_029341_1, VkglTestCase_029341_2);

#define VkglTestCase_029342_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029342_2 "mebuffer.rgb_func_alpha_func.dst.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029342, VkglTestCase_029342_1, VkglTestCase_029342_2);

#define VkglTestCase_029343_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029343_2 "fer.rgb_func_alpha_func.dst.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029343, VkglTestCase_029343_1, VkglTestCase_029343_2);

#define VkglTestCase_029344_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029344_2 "mebuffer.rgb_func_alpha_func.dst.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029344, VkglTestCase_029344_1, VkglTestCase_029344_2);

#define VkglTestCase_029345_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029345_2 "fer.rgb_func_alpha_func.dst.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029345, VkglTestCase_029345_1, VkglTestCase_029345_2);

#define VkglTestCase_029346_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029346_2 "buffer.rgb_func_alpha_func.dst.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029346, VkglTestCase_029346_1, VkglTestCase_029346_2);

#define VkglTestCase_029347_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029347_2 "r.rgb_func_alpha_func.dst.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029347, VkglTestCase_029347_1, VkglTestCase_029347_2);

#define VkglTestCase_029348_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029348_2 "buffer.rgb_func_alpha_func.dst.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029348, VkglTestCase_029348_1, VkglTestCase_029348_2);

#define VkglTestCase_029349_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029349_2 "r.rgb_func_alpha_func.dst.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029349, VkglTestCase_029349_1, VkglTestCase_029349_2);

#define VkglTestCase_029350_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029350_2 "ffer.rgb_func_alpha_func.dst.dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029350, VkglTestCase_029350_1, VkglTestCase_029350_2);

#define VkglTestCase_029351_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029351_2 "buffer.rgb_func_alpha_func.dst.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029351, VkglTestCase_029351_1, VkglTestCase_029351_2);

#define VkglTestCase_029352_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029352_2 "buffer.rgb_func_alpha_func.dst.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029352, VkglTestCase_029352_1, VkglTestCase_029352_2);

#define VkglTestCase_029353_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029353_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029353, VkglTestCase_029353_1, VkglTestCase_029353_2);

#define VkglTestCase_029354_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029354_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029354, VkglTestCase_029354_1, VkglTestCase_029354_2);

#define VkglTestCase_029355_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029355_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029355, VkglTestCase_029355_1, VkglTestCase_029355_2);

#define VkglTestCase_029356_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029356_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029356, VkglTestCase_029356_1, VkglTestCase_029356_2);

#define VkglTestCase_029357_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029357_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029357, VkglTestCase_029357_1, VkglTestCase_029357_2);

#define VkglTestCase_029358_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029358_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029358, VkglTestCase_029358_1, VkglTestCase_029358_2);

#define VkglTestCase_029359_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029359_2 "fer.rgb_func_alpha_func.dst.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029359, VkglTestCase_029359_1, VkglTestCase_029359_2);

#define VkglTestCase_029360_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029360_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029360, VkglTestCase_029360_1, VkglTestCase_029360_2);

#define VkglTestCase_029361_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029361_2 "r.rgb_func_alpha_func.dst.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029361, VkglTestCase_029361_1, VkglTestCase_029361_2);

#define VkglTestCase_029362_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029362_2 "_func_alpha_func.dst.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029362, VkglTestCase_029362_1, VkglTestCase_029362_2);

#define VkglTestCase_029363_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029363_2 "r.rgb_func_alpha_func.dst.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029363, VkglTestCase_029363_1, VkglTestCase_029363_2);

#define VkglTestCase_029364_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029364_2 "_func_alpha_func.dst.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029364, VkglTestCase_029364_1, VkglTestCase_029364_2);

#define VkglTestCase_029365_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029365_2 "rgb_func_alpha_func.dst.one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029365, VkglTestCase_029365_1, VkglTestCase_029365_2);

#define VkglTestCase_029366_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029366_2 "mebuffer.rgb_func_alpha_func.dst.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029366, VkglTestCase_029366_1, VkglTestCase_029366_2);

#define VkglTestCase_029367_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029367_2 "amebuffer.rgb_func_alpha_func.dst.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029367, VkglTestCase_029367_1, VkglTestCase_029367_2);

#define VkglTestCase_029368_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029368_2 "buffer.rgb_func_alpha_func.dst.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029368, VkglTestCase_029368_1, VkglTestCase_029368_2);

#define VkglTestCase_029369_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029369_2 "r.rgb_func_alpha_func.dst.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029369, VkglTestCase_029369_1, VkglTestCase_029369_2);

#define VkglTestCase_029370_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029370_2 "buffer.rgb_func_alpha_func.dst.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029370, VkglTestCase_029370_1, VkglTestCase_029370_2);

#define VkglTestCase_029371_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029371_2 "r.rgb_func_alpha_func.dst.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029371, VkglTestCase_029371_1, VkglTestCase_029371_2);

#define VkglTestCase_029372_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029372_2 "buffer.rgb_func_alpha_func.dst.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029372, VkglTestCase_029372_1, VkglTestCase_029372_2);

#define VkglTestCase_029373_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029373_2 "r.rgb_func_alpha_func.dst.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029373, VkglTestCase_029373_1, VkglTestCase_029373_2);

#define VkglTestCase_029374_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029374_2 "buffer.rgb_func_alpha_func.dst.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029374, VkglTestCase_029374_1, VkglTestCase_029374_2);

#define VkglTestCase_029375_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029375_2 "r.rgb_func_alpha_func.dst.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029375, VkglTestCase_029375_1, VkglTestCase_029375_2);

#define VkglTestCase_029376_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029376_2 "fer.rgb_func_alpha_func.dst.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029376, VkglTestCase_029376_1, VkglTestCase_029376_2);

#define VkglTestCase_029377_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029377_2 "gb_func_alpha_func.dst.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029377, VkglTestCase_029377_1, VkglTestCase_029377_2);

#define VkglTestCase_029378_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029378_2 "fer.rgb_func_alpha_func.dst.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029378, VkglTestCase_029378_1, VkglTestCase_029378_2);

#define VkglTestCase_029379_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029379_2 "gb_func_alpha_func.dst.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029379, VkglTestCase_029379_1, VkglTestCase_029379_2);

#define VkglTestCase_029380_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029380_2 "r.rgb_func_alpha_func.dst.constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029380, VkglTestCase_029380_1, VkglTestCase_029380_2);

#define VkglTestCase_029381_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029381_2 "fer.rgb_func_alpha_func.dst.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029381, VkglTestCase_029381_1, VkglTestCase_029381_2);

#define VkglTestCase_029382_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029382_2 "ffer.rgb_func_alpha_func.dst.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029382, VkglTestCase_029382_1, VkglTestCase_029382_2);

#define VkglTestCase_029383_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029383_2 "r.rgb_func_alpha_func.dst.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029383, VkglTestCase_029383_1, VkglTestCase_029383_2);

#define VkglTestCase_029384_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029384_2 "_func_alpha_func.dst.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029384, VkglTestCase_029384_1, VkglTestCase_029384_2);

#define VkglTestCase_029385_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029385_2 "r.rgb_func_alpha_func.dst.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029385, VkglTestCase_029385_1, VkglTestCase_029385_2);

#define VkglTestCase_029386_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029386_2 "_func_alpha_func.dst.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029386, VkglTestCase_029386_1, VkglTestCase_029386_2);

#define VkglTestCase_029387_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029387_2 "r.rgb_func_alpha_func.dst.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029387, VkglTestCase_029387_1, VkglTestCase_029387_2);

#define VkglTestCase_029388_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029388_2 "_func_alpha_func.dst.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029388, VkglTestCase_029388_1, VkglTestCase_029388_2);

#define VkglTestCase_029389_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029389_2 "r.rgb_func_alpha_func.dst.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029389, VkglTestCase_029389_1, VkglTestCase_029389_2);

#define VkglTestCase_029390_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029390_2 "_func_alpha_func.dst.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029390, VkglTestCase_029390_1, VkglTestCase_029390_2);

#define VkglTestCase_029391_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029391_2 "gb_func_alpha_func.dst.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029391, VkglTestCase_029391_1, VkglTestCase_029391_2);

#define VkglTestCase_029392_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029392_2 "nc_alpha_func.dst.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029392, VkglTestCase_029392_1, VkglTestCase_029392_2);

#define VkglTestCase_029393_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029393_2 "gb_func_alpha_func.dst.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029393, VkglTestCase_029393_1, VkglTestCase_029393_2);

#define VkglTestCase_029394_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029394_2 "nc_alpha_func.dst.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029394, VkglTestCase_029394_1, VkglTestCase_029394_2);

#define VkglTestCase_029395_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029395_2 "_func_alpha_func.dst.one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029395, VkglTestCase_029395_1, VkglTestCase_029395_2);

#define VkglTestCase_029396_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029396_2 "mebuffer.rgb_func_alpha_func.dst.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029396, VkglTestCase_029396_1, VkglTestCase_029396_2);

#define VkglTestCase_029397_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029397_2 "amebuffer.rgb_func_alpha_func.dst.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029397, VkglTestCase_029397_1, VkglTestCase_029397_2);

#define VkglTestCase_029398_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029398_2 "buffer.rgb_func_alpha_func.dst.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029398, VkglTestCase_029398_1, VkglTestCase_029398_2);

#define VkglTestCase_029399_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029399_2 "r.rgb_func_alpha_func.dst.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029399, VkglTestCase_029399_1, VkglTestCase_029399_2);

#define VkglTestCase_029400_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029400_2 "buffer.rgb_func_alpha_func.dst.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029400, VkglTestCase_029400_1, VkglTestCase_029400_2);

#define VkglTestCase_029401_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029401_2 "r.rgb_func_alpha_func.dst.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029401, VkglTestCase_029401_1, VkglTestCase_029401_2);

#define VkglTestCase_029402_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029402_2 "buffer.rgb_func_alpha_func.dst.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029402, VkglTestCase_029402_1, VkglTestCase_029402_2);

#define VkglTestCase_029403_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029403_2 "r.rgb_func_alpha_func.dst.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029403, VkglTestCase_029403_1, VkglTestCase_029403_2);

#define VkglTestCase_029404_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029404_2 "buffer.rgb_func_alpha_func.dst.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029404, VkglTestCase_029404_1, VkglTestCase_029404_2);

#define VkglTestCase_029405_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029405_2 "r.rgb_func_alpha_func.dst.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029405, VkglTestCase_029405_1, VkglTestCase_029405_2);

#define VkglTestCase_029406_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029406_2 "fer.rgb_func_alpha_func.dst.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029406, VkglTestCase_029406_1, VkglTestCase_029406_2);

#define VkglTestCase_029407_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029407_2 "gb_func_alpha_func.dst.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029407, VkglTestCase_029407_1, VkglTestCase_029407_2);

#define VkglTestCase_029408_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029408_2 "fer.rgb_func_alpha_func.dst.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029408, VkglTestCase_029408_1, VkglTestCase_029408_2);

#define VkglTestCase_029409_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029409_2 "gb_func_alpha_func.dst.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029409, VkglTestCase_029409_1, VkglTestCase_029409_2);

#define VkglTestCase_029410_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029410_2 "r.rgb_func_alpha_func.dst.constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029410, VkglTestCase_029410_1, VkglTestCase_029410_2);

#define VkglTestCase_029411_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029411_2 "fer.rgb_func_alpha_func.dst.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029411, VkglTestCase_029411_1, VkglTestCase_029411_2);

#define VkglTestCase_029412_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029412_2 "ffer.rgb_func_alpha_func.dst.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029412, VkglTestCase_029412_1, VkglTestCase_029412_2);

#define VkglTestCase_029413_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029413_2 "r.rgb_func_alpha_func.dst.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029413, VkglTestCase_029413_1, VkglTestCase_029413_2);

#define VkglTestCase_029414_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029414_2 "_func_alpha_func.dst.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029414, VkglTestCase_029414_1, VkglTestCase_029414_2);

#define VkglTestCase_029415_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029415_2 "r.rgb_func_alpha_func.dst.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029415, VkglTestCase_029415_1, VkglTestCase_029415_2);

#define VkglTestCase_029416_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029416_2 "_func_alpha_func.dst.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029416, VkglTestCase_029416_1, VkglTestCase_029416_2);

#define VkglTestCase_029417_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029417_2 "r.rgb_func_alpha_func.dst.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029417, VkglTestCase_029417_1, VkglTestCase_029417_2);

#define VkglTestCase_029418_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029418_2 "_func_alpha_func.dst.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029418, VkglTestCase_029418_1, VkglTestCase_029418_2);

#define VkglTestCase_029419_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029419_2 "r.rgb_func_alpha_func.dst.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029419, VkglTestCase_029419_1, VkglTestCase_029419_2);

#define VkglTestCase_029420_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029420_2 "_func_alpha_func.dst.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029420, VkglTestCase_029420_1, VkglTestCase_029420_2);

#define VkglTestCase_029421_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029421_2 "gb_func_alpha_func.dst.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029421, VkglTestCase_029421_1, VkglTestCase_029421_2);

#define VkglTestCase_029422_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029422_2 "nc_alpha_func.dst.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029422, VkglTestCase_029422_1, VkglTestCase_029422_2);

#define VkglTestCase_029423_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029423_2 "gb_func_alpha_func.dst.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029423, VkglTestCase_029423_1, VkglTestCase_029423_2);

#define VkglTestCase_029424_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029424_2 "nc_alpha_func.dst.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029424, VkglTestCase_029424_1, VkglTestCase_029424_2);

#define VkglTestCase_029425_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029425_2 "_func_alpha_func.dst.one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029425, VkglTestCase_029425_1, VkglTestCase_029425_2);

#define VkglTestCase_029426_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029426_2 "buffer.rgb_func_alpha_func.dst.src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029426, VkglTestCase_029426_1, VkglTestCase_029426_2);

#define VkglTestCase_029427_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_029427_2 "ebuffer.rgb_func_alpha_func.dst.src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029427, VkglTestCase_029427_1, VkglTestCase_029427_2);

#define VkglTestCase_029428_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029428_2 "ffer.rgb_func_alpha_func.dst.src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029428, VkglTestCase_029428_1, VkglTestCase_029428_2);

#define VkglTestCase_029429_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029429_2 "rgb_func_alpha_func.dst.src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029429, VkglTestCase_029429_1, VkglTestCase_029429_2);

#define VkglTestCase_029430_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029430_2 "ffer.rgb_func_alpha_func.dst.src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029430, VkglTestCase_029430_1, VkglTestCase_029430_2);

#define VkglTestCase_029431_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029431_2 "rgb_func_alpha_func.dst.src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029431, VkglTestCase_029431_1, VkglTestCase_029431_2);

#define VkglTestCase_029432_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029432_2 "ffer.rgb_func_alpha_func.dst.src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029432, VkglTestCase_029432_1, VkglTestCase_029432_2);

#define VkglTestCase_029433_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029433_2 "rgb_func_alpha_func.dst.src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029433, VkglTestCase_029433_1, VkglTestCase_029433_2);

#define VkglTestCase_029434_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029434_2 "ffer.rgb_func_alpha_func.dst.src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029434, VkglTestCase_029434_1, VkglTestCase_029434_2);

#define VkglTestCase_029435_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029435_2 "rgb_func_alpha_func.dst.src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029435, VkglTestCase_029435_1, VkglTestCase_029435_2);

#define VkglTestCase_029436_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029436_2 "r.rgb_func_alpha_func.dst.src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029436, VkglTestCase_029436_1, VkglTestCase_029436_2);

#define VkglTestCase_029437_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029437_2 "_func_alpha_func.dst.src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029437, VkglTestCase_029437_1, VkglTestCase_029437_2);

#define VkglTestCase_029438_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029438_2 "r.rgb_func_alpha_func.dst.src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029438, VkglTestCase_029438_1, VkglTestCase_029438_2);

#define VkglTestCase_029439_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029439_2 "_func_alpha_func.dst.src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029439, VkglTestCase_029439_1, VkglTestCase_029439_2);

#define VkglTestCase_029440_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029440_2 "rgb_func_alpha_func.dst.src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029440, VkglTestCase_029440_1, VkglTestCase_029440_2);

#define VkglTestCase_030368_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030368_2 "fbo_srgb.rgb_func_alpha_func.dst.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030368, VkglTestCase_030368_1, VkglTestCase_030368_2);

#define VkglTestCase_030369_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030369_2 "fbo_srgb.rgb_func_alpha_func.dst.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030369, VkglTestCase_030369_1, VkglTestCase_030369_2);

#define VkglTestCase_030370_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030370_2 "_srgb.rgb_func_alpha_func.dst.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030370, VkglTestCase_030370_1, VkglTestCase_030370_2);

#define VkglTestCase_030371_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030371_2 ".rgb_func_alpha_func.dst.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030371, VkglTestCase_030371_1, VkglTestCase_030371_2);

#define VkglTestCase_030372_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030372_2 "_srgb.rgb_func_alpha_func.dst.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030372, VkglTestCase_030372_1, VkglTestCase_030372_2);

#define VkglTestCase_030373_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030373_2 ".rgb_func_alpha_func.dst.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030373, VkglTestCase_030373_1, VkglTestCase_030373_2);

#define VkglTestCase_030374_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030374_2 "_srgb.rgb_func_alpha_func.dst.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030374, VkglTestCase_030374_1, VkglTestCase_030374_2);

#define VkglTestCase_030375_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030375_2 ".rgb_func_alpha_func.dst.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030375, VkglTestCase_030375_1, VkglTestCase_030375_2);

#define VkglTestCase_030376_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030376_2 "_srgb.rgb_func_alpha_func.dst.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030376, VkglTestCase_030376_1, VkglTestCase_030376_2);

#define VkglTestCase_030377_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030377_2 ".rgb_func_alpha_func.dst.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030377, VkglTestCase_030377_1, VkglTestCase_030377_2);

#define VkglTestCase_030378_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030378_2 "rgb.rgb_func_alpha_func.dst.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030378, VkglTestCase_030378_1, VkglTestCase_030378_2);

#define VkglTestCase_030379_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030379_2 "gb_func_alpha_func.dst.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030379, VkglTestCase_030379_1, VkglTestCase_030379_2);

#define VkglTestCase_030380_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030380_2 "rgb.rgb_func_alpha_func.dst.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030380, VkglTestCase_030380_1, VkglTestCase_030380_2);

#define VkglTestCase_030381_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030381_2 "gb_func_alpha_func.dst.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030381, VkglTestCase_030381_1, VkglTestCase_030381_2);

#define VkglTestCase_030382_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030382_2 "b.rgb_func_alpha_func.dst.zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030382, VkglTestCase_030382_1, VkglTestCase_030382_2);

#define VkglTestCase_030383_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030383_2 "fbo_srgb.rgb_func_alpha_func.dst.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030383, VkglTestCase_030383_1, VkglTestCase_030383_2);

#define VkglTestCase_030384_1 "dEQP-GLES3.functional.fragment_ops.blend"
#define VkglTestCase_030384_2 ".fbo_srgb.rgb_func_alpha_func.dst.one_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030384, VkglTestCase_030384_1, VkglTestCase_030384_2);

#define VkglTestCase_030385_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030385_2 "o_srgb.rgb_func_alpha_func.dst.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030385, VkglTestCase_030385_1, VkglTestCase_030385_2);

#define VkglTestCase_030386_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030386_2 "b.rgb_func_alpha_func.dst.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030386, VkglTestCase_030386_1, VkglTestCase_030386_2);

#define VkglTestCase_030387_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030387_2 "o_srgb.rgb_func_alpha_func.dst.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030387, VkglTestCase_030387_1, VkglTestCase_030387_2);

#define VkglTestCase_030388_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030388_2 "b.rgb_func_alpha_func.dst.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030388, VkglTestCase_030388_1, VkglTestCase_030388_2);

#define VkglTestCase_030389_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030389_2 "o_srgb.rgb_func_alpha_func.dst.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030389, VkglTestCase_030389_1, VkglTestCase_030389_2);

#define VkglTestCase_030390_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030390_2 "b.rgb_func_alpha_func.dst.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030390, VkglTestCase_030390_1, VkglTestCase_030390_2);

#define VkglTestCase_030391_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030391_2 "o_srgb.rgb_func_alpha_func.dst.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030391, VkglTestCase_030391_1, VkglTestCase_030391_2);

#define VkglTestCase_030392_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030392_2 "b.rgb_func_alpha_func.dst.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030392, VkglTestCase_030392_1, VkglTestCase_030392_2);

#define VkglTestCase_030393_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030393_2 "rgb.rgb_func_alpha_func.dst.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030393, VkglTestCase_030393_1, VkglTestCase_030393_2);

#define VkglTestCase_030394_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030394_2 "gb_func_alpha_func.dst.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030394, VkglTestCase_030394_1, VkglTestCase_030394_2);

#define VkglTestCase_030395_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030395_2 "rgb.rgb_func_alpha_func.dst.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030395, VkglTestCase_030395_1, VkglTestCase_030395_2);

#define VkglTestCase_030396_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030396_2 "gb_func_alpha_func.dst.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030396, VkglTestCase_030396_1, VkglTestCase_030396_2);

#define VkglTestCase_030397_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030397_2 "b.rgb_func_alpha_func.dst.one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030397, VkglTestCase_030397_1, VkglTestCase_030397_2);

#define VkglTestCase_030398_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030398_2 "_srgb.rgb_func_alpha_func.dst.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030398, VkglTestCase_030398_1, VkglTestCase_030398_2);

#define VkglTestCase_030399_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030399_2 "o_srgb.rgb_func_alpha_func.dst.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030399, VkglTestCase_030399_1, VkglTestCase_030399_2);

#define VkglTestCase_030400_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030400_2 "rgb.rgb_func_alpha_func.dst.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030400, VkglTestCase_030400_1, VkglTestCase_030400_2);

#define VkglTestCase_030401_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030401_2 "gb_func_alpha_func.dst.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030401, VkglTestCase_030401_1, VkglTestCase_030401_2);

#define VkglTestCase_030402_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030402_2 "rgb.rgb_func_alpha_func.dst.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030402, VkglTestCase_030402_1, VkglTestCase_030402_2);

#define VkglTestCase_030403_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030403_2 "gb_func_alpha_func.dst.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030403, VkglTestCase_030403_1, VkglTestCase_030403_2);

#define VkglTestCase_030404_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030404_2 "rgb.rgb_func_alpha_func.dst.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030404, VkglTestCase_030404_1, VkglTestCase_030404_2);

#define VkglTestCase_030405_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030405_2 "gb_func_alpha_func.dst.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030405, VkglTestCase_030405_1, VkglTestCase_030405_2);

#define VkglTestCase_030406_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030406_2 "rgb.rgb_func_alpha_func.dst.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030406, VkglTestCase_030406_1, VkglTestCase_030406_2);

#define VkglTestCase_030407_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030407_2 "gb_func_alpha_func.dst.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030407, VkglTestCase_030407_1, VkglTestCase_030407_2);

#define VkglTestCase_030408_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030408_2 ".rgb_func_alpha_func.dst.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030408, VkglTestCase_030408_1, VkglTestCase_030408_2);

#define VkglTestCase_030409_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030409_2 "func_alpha_func.dst.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030409, VkglTestCase_030409_1, VkglTestCase_030409_2);

#define VkglTestCase_030410_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030410_2 ".rgb_func_alpha_func.dst.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030410, VkglTestCase_030410_1, VkglTestCase_030410_2);

#define VkglTestCase_030411_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030411_2 "func_alpha_func.dst.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030411, VkglTestCase_030411_1, VkglTestCase_030411_2);

#define VkglTestCase_030412_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030412_2 "gb_func_alpha_func.dst.src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030412, VkglTestCase_030412_1, VkglTestCase_030412_2);

#define VkglTestCase_030413_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030413_2 ".rgb_func_alpha_func.dst.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030413, VkglTestCase_030413_1, VkglTestCase_030413_2);

#define VkglTestCase_030414_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030414_2 "b.rgb_func_alpha_func.dst.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030414, VkglTestCase_030414_1, VkglTestCase_030414_2);

#define VkglTestCase_030415_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030415_2 "gb_func_alpha_func.dst.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030415, VkglTestCase_030415_1, VkglTestCase_030415_2);

#define VkglTestCase_030416_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030416_2 "nc_alpha_func.dst.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030416, VkglTestCase_030416_1, VkglTestCase_030416_2);

#define VkglTestCase_030417_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030417_2 "gb_func_alpha_func.dst.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030417, VkglTestCase_030417_1, VkglTestCase_030417_2);

#define VkglTestCase_030418_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030418_2 "nc_alpha_func.dst.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030418, VkglTestCase_030418_1, VkglTestCase_030418_2);

#define VkglTestCase_030419_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030419_2 "gb_func_alpha_func.dst.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030419, VkglTestCase_030419_1, VkglTestCase_030419_2);

#define VkglTestCase_030420_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030420_2 "nc_alpha_func.dst.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030420, VkglTestCase_030420_1, VkglTestCase_030420_2);

#define VkglTestCase_030421_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030421_2 "gb_func_alpha_func.dst.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030421, VkglTestCase_030421_1, VkglTestCase_030421_2);

#define VkglTestCase_030422_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030422_2 "nc_alpha_func.dst.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030422, VkglTestCase_030422_1, VkglTestCase_030422_2);

#define VkglTestCase_030423_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030423_2 "func_alpha_func.dst.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030423, VkglTestCase_030423_1, VkglTestCase_030423_2);

#define VkglTestCase_030424_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030424_2 "alpha_func.dst.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030424, VkglTestCase_030424_1, VkglTestCase_030424_2);

#define VkglTestCase_030425_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030425_2 "func_alpha_func.dst.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030425, VkglTestCase_030425_1, VkglTestCase_030425_2);

#define VkglTestCase_030426_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030426_2 "alpha_func.dst.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030426, VkglTestCase_030426_1, VkglTestCase_030426_2);

#define VkglTestCase_030427_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030427_2 "nc_alpha_func.dst.one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030427, VkglTestCase_030427_1, VkglTestCase_030427_2);

#define VkglTestCase_030428_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030428_2 "_srgb.rgb_func_alpha_func.dst.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030428, VkglTestCase_030428_1, VkglTestCase_030428_2);

#define VkglTestCase_030429_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030429_2 "o_srgb.rgb_func_alpha_func.dst.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030429, VkglTestCase_030429_1, VkglTestCase_030429_2);

#define VkglTestCase_030430_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030430_2 "rgb.rgb_func_alpha_func.dst.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030430, VkglTestCase_030430_1, VkglTestCase_030430_2);

#define VkglTestCase_030431_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030431_2 "gb_func_alpha_func.dst.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030431, VkglTestCase_030431_1, VkglTestCase_030431_2);

#define VkglTestCase_030432_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030432_2 "rgb.rgb_func_alpha_func.dst.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030432, VkglTestCase_030432_1, VkglTestCase_030432_2);

#define VkglTestCase_030433_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030433_2 "gb_func_alpha_func.dst.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030433, VkglTestCase_030433_1, VkglTestCase_030433_2);

#define VkglTestCase_030434_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030434_2 "rgb.rgb_func_alpha_func.dst.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030434, VkglTestCase_030434_1, VkglTestCase_030434_2);

#define VkglTestCase_030435_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030435_2 "gb_func_alpha_func.dst.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030435, VkglTestCase_030435_1, VkglTestCase_030435_2);

#define VkglTestCase_030436_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030436_2 "rgb.rgb_func_alpha_func.dst.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030436, VkglTestCase_030436_1, VkglTestCase_030436_2);

#define VkglTestCase_030437_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030437_2 "gb_func_alpha_func.dst.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030437, VkglTestCase_030437_1, VkglTestCase_030437_2);

#define VkglTestCase_030438_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030438_2 ".rgb_func_alpha_func.dst.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030438, VkglTestCase_030438_1, VkglTestCase_030438_2);

#define VkglTestCase_030439_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030439_2 "func_alpha_func.dst.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030439, VkglTestCase_030439_1, VkglTestCase_030439_2);

#define VkglTestCase_030440_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030440_2 ".rgb_func_alpha_func.dst.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030440, VkglTestCase_030440_1, VkglTestCase_030440_2);

#define VkglTestCase_030441_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030441_2 "func_alpha_func.dst.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030441, VkglTestCase_030441_1, VkglTestCase_030441_2);

#define VkglTestCase_030442_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030442_2 "gb_func_alpha_func.dst.dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030442, VkglTestCase_030442_1, VkglTestCase_030442_2);

#define VkglTestCase_030443_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030443_2 ".rgb_func_alpha_func.dst.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030443, VkglTestCase_030443_1, VkglTestCase_030443_2);

#define VkglTestCase_030444_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030444_2 "b.rgb_func_alpha_func.dst.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030444, VkglTestCase_030444_1, VkglTestCase_030444_2);

#define VkglTestCase_030445_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030445_2 "gb_func_alpha_func.dst.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030445, VkglTestCase_030445_1, VkglTestCase_030445_2);

#define VkglTestCase_030446_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030446_2 "nc_alpha_func.dst.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030446, VkglTestCase_030446_1, VkglTestCase_030446_2);

#define VkglTestCase_030447_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030447_2 "gb_func_alpha_func.dst.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030447, VkglTestCase_030447_1, VkglTestCase_030447_2);

#define VkglTestCase_030448_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030448_2 "nc_alpha_func.dst.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030448, VkglTestCase_030448_1, VkglTestCase_030448_2);

#define VkglTestCase_030449_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030449_2 "gb_func_alpha_func.dst.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030449, VkglTestCase_030449_1, VkglTestCase_030449_2);

#define VkglTestCase_030450_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030450_2 "nc_alpha_func.dst.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030450, VkglTestCase_030450_1, VkglTestCase_030450_2);

#define VkglTestCase_030451_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030451_2 "gb_func_alpha_func.dst.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030451, VkglTestCase_030451_1, VkglTestCase_030451_2);

#define VkglTestCase_030452_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030452_2 "nc_alpha_func.dst.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030452, VkglTestCase_030452_1, VkglTestCase_030452_2);

#define VkglTestCase_030453_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030453_2 "func_alpha_func.dst.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030453, VkglTestCase_030453_1, VkglTestCase_030453_2);

#define VkglTestCase_030454_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030454_2 "alpha_func.dst.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030454, VkglTestCase_030454_1, VkglTestCase_030454_2);

#define VkglTestCase_030455_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030455_2 "func_alpha_func.dst.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030455, VkglTestCase_030455_1, VkglTestCase_030455_2);

#define VkglTestCase_030456_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030456_2 "alpha_func.dst.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030456, VkglTestCase_030456_1, VkglTestCase_030456_2);

#define VkglTestCase_030457_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030457_2 "nc_alpha_func.dst.one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030457, VkglTestCase_030457_1, VkglTestCase_030457_2);

#define VkglTestCase_030458_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030458_2 "_srgb.rgb_func_alpha_func.dst.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030458, VkglTestCase_030458_1, VkglTestCase_030458_2);

#define VkglTestCase_030459_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030459_2 "o_srgb.rgb_func_alpha_func.dst.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030459, VkglTestCase_030459_1, VkglTestCase_030459_2);

#define VkglTestCase_030460_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030460_2 "rgb.rgb_func_alpha_func.dst.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030460, VkglTestCase_030460_1, VkglTestCase_030460_2);

#define VkglTestCase_030461_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030461_2 "gb_func_alpha_func.dst.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030461, VkglTestCase_030461_1, VkglTestCase_030461_2);

#define VkglTestCase_030462_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030462_2 "rgb.rgb_func_alpha_func.dst.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030462, VkglTestCase_030462_1, VkglTestCase_030462_2);

#define VkglTestCase_030463_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030463_2 "gb_func_alpha_func.dst.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030463, VkglTestCase_030463_1, VkglTestCase_030463_2);

#define VkglTestCase_030464_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030464_2 "rgb.rgb_func_alpha_func.dst.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030464, VkglTestCase_030464_1, VkglTestCase_030464_2);

#define VkglTestCase_030465_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030465_2 "gb_func_alpha_func.dst.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030465, VkglTestCase_030465_1, VkglTestCase_030465_2);

#define VkglTestCase_030466_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030466_2 "rgb.rgb_func_alpha_func.dst.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030466, VkglTestCase_030466_1, VkglTestCase_030466_2);

#define VkglTestCase_030467_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030467_2 "gb_func_alpha_func.dst.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030467, VkglTestCase_030467_1, VkglTestCase_030467_2);

#define VkglTestCase_030468_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030468_2 ".rgb_func_alpha_func.dst.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030468, VkglTestCase_030468_1, VkglTestCase_030468_2);

#define VkglTestCase_030469_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030469_2 "func_alpha_func.dst.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030469, VkglTestCase_030469_1, VkglTestCase_030469_2);

#define VkglTestCase_030470_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030470_2 ".rgb_func_alpha_func.dst.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030470, VkglTestCase_030470_1, VkglTestCase_030470_2);

#define VkglTestCase_030471_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030471_2 "func_alpha_func.dst.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030471, VkglTestCase_030471_1, VkglTestCase_030471_2);

#define VkglTestCase_030472_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030472_2 "gb_func_alpha_func.dst.src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030472, VkglTestCase_030472_1, VkglTestCase_030472_2);

#define VkglTestCase_030473_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030473_2 ".rgb_func_alpha_func.dst.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030473, VkglTestCase_030473_1, VkglTestCase_030473_2);

#define VkglTestCase_030474_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030474_2 "b.rgb_func_alpha_func.dst.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030474, VkglTestCase_030474_1, VkglTestCase_030474_2);

#define VkglTestCase_030475_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030475_2 "gb_func_alpha_func.dst.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030475, VkglTestCase_030475_1, VkglTestCase_030475_2);

#define VkglTestCase_030476_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030476_2 "nc_alpha_func.dst.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030476, VkglTestCase_030476_1, VkglTestCase_030476_2);

#define VkglTestCase_030477_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030477_2 "gb_func_alpha_func.dst.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030477, VkglTestCase_030477_1, VkglTestCase_030477_2);

#define VkglTestCase_030478_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030478_2 "nc_alpha_func.dst.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030478, VkglTestCase_030478_1, VkglTestCase_030478_2);

#define VkglTestCase_030479_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030479_2 "gb_func_alpha_func.dst.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030479, VkglTestCase_030479_1, VkglTestCase_030479_2);

#define VkglTestCase_030480_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030480_2 "nc_alpha_func.dst.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030480, VkglTestCase_030480_1, VkglTestCase_030480_2);

#define VkglTestCase_030481_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030481_2 "gb_func_alpha_func.dst.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030481, VkglTestCase_030481_1, VkglTestCase_030481_2);

#define VkglTestCase_030482_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030482_2 "nc_alpha_func.dst.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030482, VkglTestCase_030482_1, VkglTestCase_030482_2);

#define VkglTestCase_030483_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030483_2 "func_alpha_func.dst.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030483, VkglTestCase_030483_1, VkglTestCase_030483_2);

#define VkglTestCase_030484_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030484_2 "alpha_func.dst.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030484, VkglTestCase_030484_1, VkglTestCase_030484_2);

#define VkglTestCase_030485_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030485_2 "func_alpha_func.dst.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030485, VkglTestCase_030485_1, VkglTestCase_030485_2);

#define VkglTestCase_030486_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030486_2 "alpha_func.dst.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030486, VkglTestCase_030486_1, VkglTestCase_030486_2);

#define VkglTestCase_030487_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030487_2 "nc_alpha_func.dst.one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030487, VkglTestCase_030487_1, VkglTestCase_030487_2);

#define VkglTestCase_030488_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030488_2 "_srgb.rgb_func_alpha_func.dst.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030488, VkglTestCase_030488_1, VkglTestCase_030488_2);

#define VkglTestCase_030489_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030489_2 "o_srgb.rgb_func_alpha_func.dst.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030489, VkglTestCase_030489_1, VkglTestCase_030489_2);

#define VkglTestCase_030490_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030490_2 "rgb.rgb_func_alpha_func.dst.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030490, VkglTestCase_030490_1, VkglTestCase_030490_2);

#define VkglTestCase_030491_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030491_2 "gb_func_alpha_func.dst.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030491, VkglTestCase_030491_1, VkglTestCase_030491_2);

#define VkglTestCase_030492_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030492_2 "rgb.rgb_func_alpha_func.dst.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030492, VkglTestCase_030492_1, VkglTestCase_030492_2);

#define VkglTestCase_030493_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030493_2 "gb_func_alpha_func.dst.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030493, VkglTestCase_030493_1, VkglTestCase_030493_2);

#define VkglTestCase_030494_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030494_2 "rgb.rgb_func_alpha_func.dst.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030494, VkglTestCase_030494_1, VkglTestCase_030494_2);

#define VkglTestCase_030495_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030495_2 "gb_func_alpha_func.dst.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030495, VkglTestCase_030495_1, VkglTestCase_030495_2);

#define VkglTestCase_030496_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030496_2 "rgb.rgb_func_alpha_func.dst.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030496, VkglTestCase_030496_1, VkglTestCase_030496_2);

#define VkglTestCase_030497_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030497_2 "gb_func_alpha_func.dst.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030497, VkglTestCase_030497_1, VkglTestCase_030497_2);

#define VkglTestCase_030498_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030498_2 ".rgb_func_alpha_func.dst.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030498, VkglTestCase_030498_1, VkglTestCase_030498_2);

#define VkglTestCase_030499_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030499_2 "func_alpha_func.dst.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030499, VkglTestCase_030499_1, VkglTestCase_030499_2);

#define VkglTestCase_030500_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030500_2 ".rgb_func_alpha_func.dst.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030500, VkglTestCase_030500_1, VkglTestCase_030500_2);

#define VkglTestCase_030501_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030501_2 "func_alpha_func.dst.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030501, VkglTestCase_030501_1, VkglTestCase_030501_2);

#define VkglTestCase_030502_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030502_2 "gb_func_alpha_func.dst.dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030502, VkglTestCase_030502_1, VkglTestCase_030502_2);

#define VkglTestCase_030503_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030503_2 ".rgb_func_alpha_func.dst.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030503, VkglTestCase_030503_1, VkglTestCase_030503_2);

#define VkglTestCase_030504_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030504_2 "b.rgb_func_alpha_func.dst.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030504, VkglTestCase_030504_1, VkglTestCase_030504_2);

#define VkglTestCase_030505_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030505_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030505, VkglTestCase_030505_1, VkglTestCase_030505_2);

#define VkglTestCase_030506_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030506_2 "nc_alpha_func.dst.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030506, VkglTestCase_030506_1, VkglTestCase_030506_2);

#define VkglTestCase_030507_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030507_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030507, VkglTestCase_030507_1, VkglTestCase_030507_2);

#define VkglTestCase_030508_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030508_2 "nc_alpha_func.dst.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030508, VkglTestCase_030508_1, VkglTestCase_030508_2);

#define VkglTestCase_030509_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030509_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030509, VkglTestCase_030509_1, VkglTestCase_030509_2);

#define VkglTestCase_030510_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030510_2 "nc_alpha_func.dst.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030510, VkglTestCase_030510_1, VkglTestCase_030510_2);

#define VkglTestCase_030511_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030511_2 "gb_func_alpha_func.dst.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030511, VkglTestCase_030511_1, VkglTestCase_030511_2);

#define VkglTestCase_030512_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030512_2 "nc_alpha_func.dst.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030512, VkglTestCase_030512_1, VkglTestCase_030512_2);

#define VkglTestCase_030513_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030513_2 "func_alpha_func.dst.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030513, VkglTestCase_030513_1, VkglTestCase_030513_2);

#define VkglTestCase_030514_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030514_2 "alpha_func.dst.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030514, VkglTestCase_030514_1, VkglTestCase_030514_2);

#define VkglTestCase_030515_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030515_2 "func_alpha_func.dst.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030515, VkglTestCase_030515_1, VkglTestCase_030515_2);

#define VkglTestCase_030516_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030516_2 "alpha_func.dst.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030516, VkglTestCase_030516_1, VkglTestCase_030516_2);

#define VkglTestCase_030517_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030517_2 "nc_alpha_func.dst.one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030517, VkglTestCase_030517_1, VkglTestCase_030517_2);

#define VkglTestCase_030518_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030518_2 "rgb.rgb_func_alpha_func.dst.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030518, VkglTestCase_030518_1, VkglTestCase_030518_2);

#define VkglTestCase_030519_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030519_2 "rgb.rgb_func_alpha_func.dst.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030519, VkglTestCase_030519_1, VkglTestCase_030519_2);

#define VkglTestCase_030520_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030520_2 ".rgb_func_alpha_func.dst.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030520, VkglTestCase_030520_1, VkglTestCase_030520_2);

#define VkglTestCase_030521_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030521_2 "func_alpha_func.dst.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030521, VkglTestCase_030521_1, VkglTestCase_030521_2);

#define VkglTestCase_030522_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030522_2 ".rgb_func_alpha_func.dst.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030522, VkglTestCase_030522_1, VkglTestCase_030522_2);

#define VkglTestCase_030523_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030523_2 "func_alpha_func.dst.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030523, VkglTestCase_030523_1, VkglTestCase_030523_2);

#define VkglTestCase_030524_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030524_2 ".rgb_func_alpha_func.dst.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030524, VkglTestCase_030524_1, VkglTestCase_030524_2);

#define VkglTestCase_030525_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030525_2 "func_alpha_func.dst.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030525, VkglTestCase_030525_1, VkglTestCase_030525_2);

#define VkglTestCase_030526_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030526_2 ".rgb_func_alpha_func.dst.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030526, VkglTestCase_030526_1, VkglTestCase_030526_2);

#define VkglTestCase_030527_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030527_2 "func_alpha_func.dst.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030527, VkglTestCase_030527_1, VkglTestCase_030527_2);

#define VkglTestCase_030528_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030528_2 "gb_func_alpha_func.dst.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030528, VkglTestCase_030528_1, VkglTestCase_030528_2);

#define VkglTestCase_030529_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030529_2 "nc_alpha_func.dst.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030529, VkglTestCase_030529_1, VkglTestCase_030529_2);

#define VkglTestCase_030530_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030530_2 "gb_func_alpha_func.dst.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030530, VkglTestCase_030530_1, VkglTestCase_030530_2);

#define VkglTestCase_030531_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030531_2 "nc_alpha_func.dst.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030531, VkglTestCase_030531_1, VkglTestCase_030531_2);

#define VkglTestCase_030532_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030532_2 "_func_alpha_func.dst.constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030532, VkglTestCase_030532_1, VkglTestCase_030532_2);

#define VkglTestCase_030533_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030533_2 "gb_func_alpha_func.dst.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030533, VkglTestCase_030533_1, VkglTestCase_030533_2);

#define VkglTestCase_030534_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030534_2 "gb_func_alpha_func.dst.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030534, VkglTestCase_030534_1, VkglTestCase_030534_2);

#define VkglTestCase_030535_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030535_2 "func_alpha_func.dst.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030535, VkglTestCase_030535_1, VkglTestCase_030535_2);

#define VkglTestCase_030536_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030536_2 "alpha_func.dst.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030536, VkglTestCase_030536_1, VkglTestCase_030536_2);

#define VkglTestCase_030537_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030537_2 "func_alpha_func.dst.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030537, VkglTestCase_030537_1, VkglTestCase_030537_2);

#define VkglTestCase_030538_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030538_2 "alpha_func.dst.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030538, VkglTestCase_030538_1, VkglTestCase_030538_2);

#define VkglTestCase_030539_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030539_2 "func_alpha_func.dst.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030539, VkglTestCase_030539_1, VkglTestCase_030539_2);

#define VkglTestCase_030540_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030540_2 "alpha_func.dst.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030540, VkglTestCase_030540_1, VkglTestCase_030540_2);

#define VkglTestCase_030541_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030541_2 "func_alpha_func.dst.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030541, VkglTestCase_030541_1, VkglTestCase_030541_2);

#define VkglTestCase_030542_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030542_2 "alpha_func.dst.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030542, VkglTestCase_030542_1, VkglTestCase_030542_2);

#define VkglTestCase_030543_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030543_2 "nc_alpha_func.dst.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030543, VkglTestCase_030543_1, VkglTestCase_030543_2);

#define VkglTestCase_030544_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030544_2 "pha_func.dst.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030544, VkglTestCase_030544_1, VkglTestCase_030544_2);

#define VkglTestCase_030545_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030545_2 "nc_alpha_func.dst.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030545, VkglTestCase_030545_1, VkglTestCase_030545_2);

#define VkglTestCase_030546_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030546_2 "pha_func.dst.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030546, VkglTestCase_030546_1, VkglTestCase_030546_2);

#define VkglTestCase_030547_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030547_2 "_alpha_func.dst.one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030547, VkglTestCase_030547_1, VkglTestCase_030547_2);

#define VkglTestCase_030548_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030548_2 "rgb.rgb_func_alpha_func.dst.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030548, VkglTestCase_030548_1, VkglTestCase_030548_2);

#define VkglTestCase_030549_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030549_2 "rgb.rgb_func_alpha_func.dst.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030549, VkglTestCase_030549_1, VkglTestCase_030549_2);

#define VkglTestCase_030550_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030550_2 ".rgb_func_alpha_func.dst.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030550, VkglTestCase_030550_1, VkglTestCase_030550_2);

#define VkglTestCase_030551_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030551_2 "func_alpha_func.dst.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030551, VkglTestCase_030551_1, VkglTestCase_030551_2);

#define VkglTestCase_030552_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030552_2 ".rgb_func_alpha_func.dst.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030552, VkglTestCase_030552_1, VkglTestCase_030552_2);

#define VkglTestCase_030553_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030553_2 "func_alpha_func.dst.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030553, VkglTestCase_030553_1, VkglTestCase_030553_2);

#define VkglTestCase_030554_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030554_2 ".rgb_func_alpha_func.dst.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030554, VkglTestCase_030554_1, VkglTestCase_030554_2);

#define VkglTestCase_030555_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030555_2 "func_alpha_func.dst.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030555, VkglTestCase_030555_1, VkglTestCase_030555_2);

#define VkglTestCase_030556_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030556_2 ".rgb_func_alpha_func.dst.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030556, VkglTestCase_030556_1, VkglTestCase_030556_2);

#define VkglTestCase_030557_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030557_2 "func_alpha_func.dst.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030557, VkglTestCase_030557_1, VkglTestCase_030557_2);

#define VkglTestCase_030558_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030558_2 "gb_func_alpha_func.dst.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030558, VkglTestCase_030558_1, VkglTestCase_030558_2);

#define VkglTestCase_030559_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030559_2 "nc_alpha_func.dst.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030559, VkglTestCase_030559_1, VkglTestCase_030559_2);

#define VkglTestCase_030560_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030560_2 "gb_func_alpha_func.dst.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030560, VkglTestCase_030560_1, VkglTestCase_030560_2);

#define VkglTestCase_030561_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030561_2 "nc_alpha_func.dst.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030561, VkglTestCase_030561_1, VkglTestCase_030561_2);

#define VkglTestCase_030562_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030562_2 "_func_alpha_func.dst.constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030562, VkglTestCase_030562_1, VkglTestCase_030562_2);

#define VkglTestCase_030563_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030563_2 "gb_func_alpha_func.dst.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030563, VkglTestCase_030563_1, VkglTestCase_030563_2);

#define VkglTestCase_030564_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030564_2 "gb_func_alpha_func.dst.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030564, VkglTestCase_030564_1, VkglTestCase_030564_2);

#define VkglTestCase_030565_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030565_2 "func_alpha_func.dst.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030565, VkglTestCase_030565_1, VkglTestCase_030565_2);

#define VkglTestCase_030566_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030566_2 "alpha_func.dst.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030566, VkglTestCase_030566_1, VkglTestCase_030566_2);

#define VkglTestCase_030567_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030567_2 "func_alpha_func.dst.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030567, VkglTestCase_030567_1, VkglTestCase_030567_2);

#define VkglTestCase_030568_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030568_2 "alpha_func.dst.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030568, VkglTestCase_030568_1, VkglTestCase_030568_2);

#define VkglTestCase_030569_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030569_2 "func_alpha_func.dst.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030569, VkglTestCase_030569_1, VkglTestCase_030569_2);

#define VkglTestCase_030570_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030570_2 "alpha_func.dst.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030570, VkglTestCase_030570_1, VkglTestCase_030570_2);

#define VkglTestCase_030571_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030571_2 "func_alpha_func.dst.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030571, VkglTestCase_030571_1, VkglTestCase_030571_2);

#define VkglTestCase_030572_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030572_2 "alpha_func.dst.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030572, VkglTestCase_030572_1, VkglTestCase_030572_2);

#define VkglTestCase_030573_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030573_2 "nc_alpha_func.dst.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030573, VkglTestCase_030573_1, VkglTestCase_030573_2);

#define VkglTestCase_030574_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030574_2 "pha_func.dst.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030574, VkglTestCase_030574_1, VkglTestCase_030574_2);

#define VkglTestCase_030575_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030575_2 "nc_alpha_func.dst.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030575, VkglTestCase_030575_1, VkglTestCase_030575_2);

#define VkglTestCase_030576_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030576_2 "pha_func.dst.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030576, VkglTestCase_030576_1, VkglTestCase_030576_2);

#define VkglTestCase_030577_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030577_2 "_alpha_func.dst.one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030577, VkglTestCase_030577_1, VkglTestCase_030577_2);

#define VkglTestCase_030578_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030578_2 "b.rgb_func_alpha_func.dst.src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030578, VkglTestCase_030578_1, VkglTestCase_030578_2);

#define VkglTestCase_030579_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030579_2 "b.rgb_func_alpha_func.dst.src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030579, VkglTestCase_030579_1, VkglTestCase_030579_2);

#define VkglTestCase_030580_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030580_2 "gb_func_alpha_func.dst.src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030580, VkglTestCase_030580_1, VkglTestCase_030580_2);

#define VkglTestCase_030581_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030581_2 "nc_alpha_func.dst.src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030581, VkglTestCase_030581_1, VkglTestCase_030581_2);

#define VkglTestCase_030582_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030582_2 "gb_func_alpha_func.dst.src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030582, VkglTestCase_030582_1, VkglTestCase_030582_2);

#define VkglTestCase_030583_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030583_2 "nc_alpha_func.dst.src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030583, VkglTestCase_030583_1, VkglTestCase_030583_2);

#define VkglTestCase_030584_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030584_2 "gb_func_alpha_func.dst.src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030584, VkglTestCase_030584_1, VkglTestCase_030584_2);

#define VkglTestCase_030585_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030585_2 "nc_alpha_func.dst.src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030585, VkglTestCase_030585_1, VkglTestCase_030585_2);

#define VkglTestCase_030586_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030586_2 "gb_func_alpha_func.dst.src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030586, VkglTestCase_030586_1, VkglTestCase_030586_2);

#define VkglTestCase_030587_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030587_2 "nc_alpha_func.dst.src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030587, VkglTestCase_030587_1, VkglTestCase_030587_2);

#define VkglTestCase_030588_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030588_2 "_func_alpha_func.dst.src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030588, VkglTestCase_030588_1, VkglTestCase_030588_2);

#define VkglTestCase_030589_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030589_2 "_alpha_func.dst.src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030589, VkglTestCase_030589_1, VkglTestCase_030589_2);

#define VkglTestCase_030590_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030590_2 "_func_alpha_func.dst.src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030590, VkglTestCase_030590_1, VkglTestCase_030590_2);

#define VkglTestCase_030591_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030591_2 "_alpha_func.dst.src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030591, VkglTestCase_030591_1, VkglTestCase_030591_2);

#define VkglTestCase_030592_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_f"
#define VkglTestCase_030592_2 "unc_alpha_func.dst.src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_030592, VkglTestCase_030592_1, VkglTestCase_030592_2);
