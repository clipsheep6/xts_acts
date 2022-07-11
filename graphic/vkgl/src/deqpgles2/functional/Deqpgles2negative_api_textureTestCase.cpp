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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013729_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013729_2 "exture.activetexture_invalid_texture"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013729, VkglTestCase_013729_1, VkglTestCase_013729_2);

#define VkglTestCase_013730_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013730_2 ".texture.bindtexture_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013730, VkglTestCase_013730_1, VkglTestCase_013730_2);

#define VkglTestCase_013731_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013731_2 ".texture.bindtexture_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013731, VkglTestCase_013731_1, VkglTestCase_013731_2);

#define VkglTestCase_013732_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013732_2 "ure.compressedteximage_2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013732, VkglTestCase_013732_1, VkglTestCase_013732_2);

#define VkglTestCase_013733_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013733_2 ".compressedteximage_2d_invalid_format_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013733, VkglTestCase_013733_1, VkglTestCase_013733_2);

#define VkglTestCase_013734_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013734_2 ".compressedteximage_2d_invalid_format_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013734, VkglTestCase_013734_1, VkglTestCase_013734_2);

#define VkglTestCase_013735_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013735_2 "ure.compressedteximage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013735, VkglTestCase_013735_1, VkglTestCase_013735_2);

#define VkglTestCase_013736_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013736_2 "ure.compressedteximage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013736, VkglTestCase_013736_1, VkglTestCase_013736_2);

#define VkglTestCase_013737_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013737_2 "ure.compressedteximage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013737, VkglTestCase_013737_1, VkglTestCase_013737_2);

#define VkglTestCase_013738_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013738_2 "e.compressedteximage2d_level_max_cube_pos"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013738, VkglTestCase_013738_1, VkglTestCase_013738_2);

#define VkglTestCase_013739_1 "dEQP-GLES2.functional.negative_api.texture."
#define VkglTestCase_013739_2 "compressedteximage2d_neg_width_height_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013739, VkglTestCase_013739_1, VkglTestCase_013739_2);

#define VkglTestCase_013740_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013740_2 "mpressedteximage2d_neg_width_height_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013740, VkglTestCase_013740_1, VkglTestCase_013740_2);

#define VkglTestCase_013741_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013741_2 "mpressedteximage2d_neg_width_height_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013741, VkglTestCase_013741_1, VkglTestCase_013741_2);

#define VkglTestCase_013742_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013742_2 "mpressedteximage2d_neg_width_height_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013742, VkglTestCase_013742_1, VkglTestCase_013742_2);

#define VkglTestCase_013743_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013743_2 "mpressedteximage2d_neg_width_height_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013743, VkglTestCase_013743_1, VkglTestCase_013743_2);

#define VkglTestCase_013744_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013744_2 "mpressedteximage2d_neg_width_height_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013744, VkglTestCase_013744_1, VkglTestCase_013744_2);

#define VkglTestCase_013745_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013745_2 "mpressedteximage2d_neg_width_height_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013745, VkglTestCase_013745_1, VkglTestCase_013745_2);

#define VkglTestCase_013746_1 "dEQP-GLES2.functional.negative_api.texture."
#define VkglTestCase_013746_2 "compressedteximage2d_width_height_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013746, VkglTestCase_013746_1, VkglTestCase_013746_2);

#define VkglTestCase_013747_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013747_2 "mpressedteximage2d_width_height_max_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013747, VkglTestCase_013747_1, VkglTestCase_013747_2);

#define VkglTestCase_013748_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013748_2 "mpressedteximage2d_width_height_max_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013748, VkglTestCase_013748_1, VkglTestCase_013748_2);

#define VkglTestCase_013749_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013749_2 "mpressedteximage2d_width_height_max_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013749, VkglTestCase_013749_1, VkglTestCase_013749_2);

#define VkglTestCase_013750_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013750_2 "mpressedteximage2d_width_height_max_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013750, VkglTestCase_013750_1, VkglTestCase_013750_2);

#define VkglTestCase_013751_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013751_2 "mpressedteximage2d_width_height_max_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013751, VkglTestCase_013751_1, VkglTestCase_013751_2);

#define VkglTestCase_013752_1 "dEQP-GLES2.functional.negative_api.texture.co"
#define VkglTestCase_013752_2 "mpressedteximage2d_width_height_max_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013752, VkglTestCase_013752_1, VkglTestCase_013752_2);

#define VkglTestCase_013753_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013753_2 "ure.compressedteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013753, VkglTestCase_013753_1, VkglTestCase_013753_2);

#define VkglTestCase_013754_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013754_2 "ompressedteximage2d_invalid_border_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013754, VkglTestCase_013754_1, VkglTestCase_013754_2);

#define VkglTestCase_013755_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013755_2 "ompressedteximage2d_invalid_border_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013755, VkglTestCase_013755_1, VkglTestCase_013755_2);

#define VkglTestCase_013756_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013756_2 "ompressedteximage2d_invalid_border_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013756, VkglTestCase_013756_1, VkglTestCase_013756_2);

#define VkglTestCase_013757_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013757_2 "ompressedteximage2d_invalid_border_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013757, VkglTestCase_013757_1, VkglTestCase_013757_2);

#define VkglTestCase_013758_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013758_2 "ompressedteximage2d_invalid_border_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013758, VkglTestCase_013758_1, VkglTestCase_013758_2);

#define VkglTestCase_013759_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013759_2 "ompressedteximage2d_invalid_border_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013759, VkglTestCase_013759_1, VkglTestCase_013759_2);

#define VkglTestCase_013760_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013760_2 "ture.compressedteximage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013760, VkglTestCase_013760_1, VkglTestCase_013760_2);

#define VkglTestCase_013761_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013761_2 "exture.copyteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013761, VkglTestCase_013761_1, VkglTestCase_013761_2);

#define VkglTestCase_013762_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013762_2 "ure.copyteximage2d_invalid_format_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013762, VkglTestCase_013762_1, VkglTestCase_013762_2);

#define VkglTestCase_013763_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013763_2 "ture.copyteximage2d_invalid_format_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013763, VkglTestCase_013763_1, VkglTestCase_013763_2);

#define VkglTestCase_013764_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013764_2 "e.copyteximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013764, VkglTestCase_013764_1, VkglTestCase_013764_2);

#define VkglTestCase_013765_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013765_2 "exture.copyteximage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013765, VkglTestCase_013765_1, VkglTestCase_013765_2);

#define VkglTestCase_013766_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013766_2 "exture.copyteximage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013766, VkglTestCase_013766_1, VkglTestCase_013766_2);

#define VkglTestCase_013767_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013767_2 "exture.copyteximage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013767, VkglTestCase_013767_1, VkglTestCase_013767_2);

#define VkglTestCase_013768_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013768_2 "exture.copyteximage2d_level_max_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013768, VkglTestCase_013768_1, VkglTestCase_013768_2);

#define VkglTestCase_013769_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013769_2 ".copyteximage2d_invalid_width_height_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013769, VkglTestCase_013769_1, VkglTestCase_013769_2);

#define VkglTestCase_013770_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013770_2 "opyteximage2d_invalid_width_height_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013770, VkglTestCase_013770_1, VkglTestCase_013770_2);

#define VkglTestCase_013771_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013771_2 "opyteximage2d_invalid_width_height_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013771, VkglTestCase_013771_1, VkglTestCase_013771_2);

#define VkglTestCase_013772_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013772_2 "opyteximage2d_invalid_width_height_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013772, VkglTestCase_013772_1, VkglTestCase_013772_2);

#define VkglTestCase_013773_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013773_2 "opyteximage2d_invalid_width_height_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013773, VkglTestCase_013773_1, VkglTestCase_013773_2);

#define VkglTestCase_013774_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013774_2 "opyteximage2d_invalid_width_height_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013774, VkglTestCase_013774_1, VkglTestCase_013774_2);

#define VkglTestCase_013775_1 "dEQP-GLES2.functional.negative_api.texture.c"
#define VkglTestCase_013775_2 "opyteximage2d_invalid_width_height_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013775, VkglTestCase_013775_1, VkglTestCase_013775_2);

#define VkglTestCase_013776_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013776_2 "re.copyteximage2d_width_height_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013776, VkglTestCase_013776_1, VkglTestCase_013776_2);

#define VkglTestCase_013777_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013777_2 ".copyteximage2d_width_height_max_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013777, VkglTestCase_013777_1, VkglTestCase_013777_2);

#define VkglTestCase_013778_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013778_2 ".copyteximage2d_width_height_max_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013778, VkglTestCase_013778_1, VkglTestCase_013778_2);

#define VkglTestCase_013779_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013779_2 ".copyteximage2d_width_height_max_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013779, VkglTestCase_013779_1, VkglTestCase_013779_2);

#define VkglTestCase_013780_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013780_2 ".copyteximage2d_width_height_max_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013780, VkglTestCase_013780_1, VkglTestCase_013780_2);

#define VkglTestCase_013781_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013781_2 ".copyteximage2d_width_height_max_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013781, VkglTestCase_013781_1, VkglTestCase_013781_2);

#define VkglTestCase_013782_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013782_2 ".copyteximage2d_width_height_max_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013782, VkglTestCase_013782_1, VkglTestCase_013782_2);

#define VkglTestCase_013783_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013783_2 "ure.copyteximage2d_invalid_border_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013783, VkglTestCase_013783_1, VkglTestCase_013783_2);

#define VkglTestCase_013784_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013784_2 "e.copyteximage2d_invalid_border_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013784, VkglTestCase_013784_1, VkglTestCase_013784_2);

#define VkglTestCase_013785_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013785_2 "e.copyteximage2d_invalid_border_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013785, VkglTestCase_013785_1, VkglTestCase_013785_2);

#define VkglTestCase_013786_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013786_2 "e.copyteximage2d_invalid_border_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013786, VkglTestCase_013786_1, VkglTestCase_013786_2);

#define VkglTestCase_013787_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013787_2 "e.copyteximage2d_invalid_border_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013787, VkglTestCase_013787_1, VkglTestCase_013787_2);

#define VkglTestCase_013788_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013788_2 "e.copyteximage2d_invalid_border_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013788, VkglTestCase_013788_1, VkglTestCase_013788_2);

#define VkglTestCase_013789_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013789_2 "e.copyteximage2d_invalid_border_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013789, VkglTestCase_013789_1, VkglTestCase_013789_2);

#define VkglTestCase_013790_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013790_2 "re.copyteximage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013790, VkglTestCase_013790_1, VkglTestCase_013790_2);

#define VkglTestCase_013791_1 "dEQP-GLES2.functional.negative_api.te"
#define VkglTestCase_013791_2 "xture.copytexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013791, VkglTestCase_013791_1, VkglTestCase_013791_2);

#define VkglTestCase_013792_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013792_2 "ture.copytexsubimage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013792, VkglTestCase_013792_1, VkglTestCase_013792_2);

#define VkglTestCase_013793_1 "dEQP-GLES2.functional.negative_api.te"
#define VkglTestCase_013793_2 "xture.copytexsubimage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013793, VkglTestCase_013793_1, VkglTestCase_013793_2);

#define VkglTestCase_013794_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013794_2 "ture.copytexsubimage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013794, VkglTestCase_013794_1, VkglTestCase_013794_2);

#define VkglTestCase_013795_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013795_2 "ure.copytexsubimage2d_level_max_cube_pos"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013795, VkglTestCase_013795_1, VkglTestCase_013795_2);

#define VkglTestCase_013796_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013796_2 "texture.copytexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013796, VkglTestCase_013796_1, VkglTestCase_013796_2);

#define VkglTestCase_013797_1 "dEQP-GLES2.functional.negative_api.te"
#define VkglTestCase_013797_2 "xture.copytexsubimage2d_offset_allowed"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013797, VkglTestCase_013797_1, VkglTestCase_013797_2);

#define VkglTestCase_013798_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013798_2 "exture.copytexsubimage2d_neg_wdt_hgt"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013798, VkglTestCase_013798_1, VkglTestCase_013798_2);

#define VkglTestCase_013799_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013799_2 "e.copytexsubimage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013799, VkglTestCase_013799_1, VkglTestCase_013799_2);

#define VkglTestCase_013800_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013800_2 "exture.deletetextures_invalid_number"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013800, VkglTestCase_013800_1, VkglTestCase_013800_2);

#define VkglTestCase_013801_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013801_2 "ture.deletetextures_invalid_number_bind"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013801, VkglTestCase_013801_1, VkglTestCase_013801_2);

#define VkglTestCase_013802_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013802_2 "exture.generatemipmap_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013802, VkglTestCase_013802_1, VkglTestCase_013802_2);

#define VkglTestCase_013803_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013803_2 "texture.generatemipmap_npot_wdt_hgt"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013803, VkglTestCase_013803_1, VkglTestCase_013803_2);

#define VkglTestCase_013804_1 "dEQP-GLES2.functional.negative_api.texture"
#define VkglTestCase_013804_2 ".generatemipmap_zero_level_array_compressed"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013804, VkglTestCase_013804_1, VkglTestCase_013804_2);

#define VkglTestCase_013805_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013805_2 "exture.generatemipmap_incomplete_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013805, VkglTestCase_013805_1, VkglTestCase_013805_2);

#define VkglTestCase_013806_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013806_2 "i.texture.gentextures_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013806, VkglTestCase_013806_1, VkglTestCase_013806_2);

#define VkglTestCase_013807_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013807_2 ".texture.pixelstorei_invalid_pname"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013807, VkglTestCase_013807_1, VkglTestCase_013807_2);

#define VkglTestCase_013808_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013808_2 ".texture.pixelstorei_invalid_param"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013808, VkglTestCase_013808_1, VkglTestCase_013808_2);

#define VkglTestCase_013809_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013809_2 ".texture.teximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013809, VkglTestCase_013809_1, VkglTestCase_013809_2);

#define VkglTestCase_013810_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013810_2 ".texture.teximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013810, VkglTestCase_013810_1, VkglTestCase_013810_2);

#define VkglTestCase_013811_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013811_2 "i.texture.teximage2d_invalid_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013811, VkglTestCase_013811_1, VkglTestCase_013811_2);

#define VkglTestCase_013812_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013812_2 "ure.teximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013812, VkglTestCase_013812_1, VkglTestCase_013812_2);

#define VkglTestCase_013813_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013813_2 ".texture.teximage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013813, VkglTestCase_013813_1, VkglTestCase_013813_2);

#define VkglTestCase_013814_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013814_2 ".texture.teximage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013814, VkglTestCase_013814_1, VkglTestCase_013814_2);

#define VkglTestCase_013815_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013815_2 ".texture.teximage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013815, VkglTestCase_013815_1, VkglTestCase_013815_2);

#define VkglTestCase_013816_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013816_2 ".texture.teximage2d_level_max_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013816, VkglTestCase_013816_1, VkglTestCase_013816_2);

#define VkglTestCase_013817_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013817_2 "ture.teximage2d_invalid_internalformat"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013817, VkglTestCase_013817_1, VkglTestCase_013817_2);

#define VkglTestCase_013818_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013818_2 "ture.teximage2d_neg_width_height_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013818, VkglTestCase_013818_1, VkglTestCase_013818_2);

#define VkglTestCase_013819_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013819_2 "re.teximage2d_neg_width_height_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013819, VkglTestCase_013819_1, VkglTestCase_013819_2);

#define VkglTestCase_013820_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013820_2 "re.teximage2d_neg_width_height_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013820, VkglTestCase_013820_1, VkglTestCase_013820_2);

#define VkglTestCase_013821_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013821_2 "re.teximage2d_neg_width_height_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013821, VkglTestCase_013821_1, VkglTestCase_013821_2);

#define VkglTestCase_013822_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013822_2 "re.teximage2d_neg_width_height_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013822, VkglTestCase_013822_1, VkglTestCase_013822_2);

#define VkglTestCase_013823_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013823_2 "re.teximage2d_neg_width_height_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013823, VkglTestCase_013823_1, VkglTestCase_013823_2);

#define VkglTestCase_013824_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013824_2 "re.teximage2d_neg_width_height_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013824, VkglTestCase_013824_1, VkglTestCase_013824_2);

#define VkglTestCase_013825_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013825_2 "ture.teximage2d_width_height_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013825, VkglTestCase_013825_1, VkglTestCase_013825_2);

#define VkglTestCase_013826_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013826_2 "re.teximage2d_width_height_max_cube_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013826, VkglTestCase_013826_1, VkglTestCase_013826_2);

#define VkglTestCase_013827_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013827_2 "re.teximage2d_width_height_max_cube_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013827, VkglTestCase_013827_1, VkglTestCase_013827_2);

#define VkglTestCase_013828_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013828_2 "re.teximage2d_width_height_max_cube_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013828, VkglTestCase_013828_1, VkglTestCase_013828_2);

#define VkglTestCase_013829_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013829_2 "re.teximage2d_width_height_max_cube_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013829, VkglTestCase_013829_1, VkglTestCase_013829_2);

#define VkglTestCase_013830_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013830_2 "re.teximage2d_width_height_max_cube_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013830, VkglTestCase_013830_1, VkglTestCase_013830_2);

#define VkglTestCase_013831_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013831_2 "re.teximage2d_width_height_max_cube_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013831, VkglTestCase_013831_1, VkglTestCase_013831_2);

#define VkglTestCase_013832_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013832_2 ".texture.teximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013832, VkglTestCase_013832_1, VkglTestCase_013832_2);

#define VkglTestCase_013833_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013833_2 ".texture.teximage2d_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013833, VkglTestCase_013833_1, VkglTestCase_013833_2);

#define VkglTestCase_013834_1 "dEQP-GLES2.functional.negative_api.te"
#define VkglTestCase_013834_2 "xture.teximage2d_type_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013834, VkglTestCase_013834_1, VkglTestCase_013834_2);

#define VkglTestCase_013835_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013835_2 "texture.texsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013835, VkglTestCase_013835_1, VkglTestCase_013835_2);

#define VkglTestCase_013836_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013836_2 "texture.texsubimage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013836, VkglTestCase_013836_1, VkglTestCase_013836_2);

#define VkglTestCase_013837_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013837_2 ".texture.texsubimage2d_invalid_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013837, VkglTestCase_013837_1, VkglTestCase_013837_2);

#define VkglTestCase_013838_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013838_2 "exture.texsubimage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013838, VkglTestCase_013838_1, VkglTestCase_013838_2);

#define VkglTestCase_013839_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013839_2 "texture.texsubimage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013839, VkglTestCase_013839_1, VkglTestCase_013839_2);

#define VkglTestCase_013840_1 "dEQP-GLES2.functional.negative_api.t"
#define VkglTestCase_013840_2 "exture.texsubimage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013840, VkglTestCase_013840_1, VkglTestCase_013840_2);

#define VkglTestCase_013841_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013841_2 "texture.texsubimage2d_level_max_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013841, VkglTestCase_013841_1, VkglTestCase_013841_2);

#define VkglTestCase_013842_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013842_2 "i.texture.texsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013842, VkglTestCase_013842_1, VkglTestCase_013842_2);

#define VkglTestCase_013843_1 "dEQP-GLES2.functional.negative_api."
#define VkglTestCase_013843_2 "texture.texsubimage2d_offset_allowed"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013843, VkglTestCase_013843_1, VkglTestCase_013843_2);

#define VkglTestCase_013844_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013844_2 ".texture.texsubimage2d_neg_wdt_hgt"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013844, VkglTestCase_013844_1, VkglTestCase_013844_2);

#define VkglTestCase_013845_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013845_2 "ture.texsubimage2d_type_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013845, VkglTestCase_013845_1, VkglTestCase_013845_2);

#define VkglTestCase_013846_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013846_2 "ve_api.texture.texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013846, VkglTestCase_013846_1, VkglTestCase_013846_2);

#define VkglTestCase_013847_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013847_2 "_api.texture.texparameteri_bind"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013847, VkglTestCase_013847_1, VkglTestCase_013847_2);

#define VkglTestCase_013848_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013848_2 "ve_api.texture.texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013848, VkglTestCase_013848_1, VkglTestCase_013848_2);

#define VkglTestCase_013849_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013849_2 "_api.texture.texparameterf_bind"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013849, VkglTestCase_013849_1, VkglTestCase_013849_2);

#define VkglTestCase_013850_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013850_2 "ve_api.texture.texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013850, VkglTestCase_013850_1, VkglTestCase_013850_2);

#define VkglTestCase_013851_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013851_2 "api.texture.texparameteriv_bind"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013851, VkglTestCase_013851_1, VkglTestCase_013851_2);

#define VkglTestCase_013852_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013852_2 "ve_api.texture.texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013852, VkglTestCase_013852_1, VkglTestCase_013852_2);

#define VkglTestCase_013853_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013853_2 "api.texture.texparameterfv_bind"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013853, VkglTestCase_013853_1, VkglTestCase_013853_2);

#define VkglTestCase_013854_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013854_2 "re.compressedtexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013854, VkglTestCase_013854_1, VkglTestCase_013854_2);

#define VkglTestCase_013855_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013855_2 "e.compressedtexsubimage2d_neg_level_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013855, VkglTestCase_013855_1, VkglTestCase_013855_2);

#define VkglTestCase_013856_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013856_2 "re.compressedtexsubimage2d_neg_level_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013856, VkglTestCase_013856_1, VkglTestCase_013856_2);

#define VkglTestCase_013857_1 "dEQP-GLES2.functional.negative_api.textur"
#define VkglTestCase_013857_2 "e.compressedtexsubimage2d_level_max_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013857, VkglTestCase_013857_1, VkglTestCase_013857_2);

#define VkglTestCase_013858_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013858_2 "re.compressedtexsubimage2d_level_max_cube"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013858, VkglTestCase_013858_1, VkglTestCase_013858_2);

#define VkglTestCase_013859_1 "dEQP-GLES2.functional.negative_api.tex"
#define VkglTestCase_013859_2 "ture.compressedtexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013859, VkglTestCase_013859_1, VkglTestCase_013859_2);

#define VkglTestCase_013860_1 "dEQP-GLES2.functional.negative_api.textu"
#define VkglTestCase_013860_2 "re.compressedtexsubimage2d_offset_allowed"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013860, VkglTestCase_013860_1, VkglTestCase_013860_2);

#define VkglTestCase_013861_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013861_2 "ure.compressedtexsubimage2d_neg_wdt_hgt"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013861, VkglTestCase_013861_1, VkglTestCase_013861_2);

#define VkglTestCase_013862_1 "dEQP-GLES2.functional.negative_api.text"
#define VkglTestCase_013862_2 "ure.compressedtexsubimage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013862, VkglTestCase_013862_1, VkglTestCase_013862_2);
