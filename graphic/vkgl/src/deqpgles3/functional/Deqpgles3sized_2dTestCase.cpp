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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021887_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021887_2 "e.format.sized.2d.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021887, VkglTestCase_021887_1, VkglTestCase_021887_2);

#define VkglTestCase_021888_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021888_2 ".format.sized.2d.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021888, VkglTestCase_021888_1, VkglTestCase_021888_2);

#define VkglTestCase_021889_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021889_2 "e.format.sized.2d.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021889, VkglTestCase_021889_1, VkglTestCase_021889_2);

#define VkglTestCase_021890_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021890_2 ".format.sized.2d.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021890, VkglTestCase_021890_1, VkglTestCase_021890_2);

#define VkglTestCase_021891_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021891_2 ".format.sized.2d.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021891, VkglTestCase_021891_1, VkglTestCase_021891_2);

#define VkglTestCase_021892_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021892_2 ".format.sized.2d.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021892, VkglTestCase_021892_1, VkglTestCase_021892_2);

#define VkglTestCase_021893_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021893_2 "e.format.sized.2d.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021893, VkglTestCase_021893_1, VkglTestCase_021893_2);

#define VkglTestCase_021894_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021894_2 ".format.sized.2d.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021894, VkglTestCase_021894_1, VkglTestCase_021894_2);

#define VkglTestCase_021895_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021895_2 "e.format.sized.2d.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021895, VkglTestCase_021895_1, VkglTestCase_021895_2);

#define VkglTestCase_021896_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021896_2 ".format.sized.2d.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021896, VkglTestCase_021896_1, VkglTestCase_021896_2);

#define VkglTestCase_021897_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021897_2 ".format.sized.2d.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021897, VkglTestCase_021897_1, VkglTestCase_021897_2);

#define VkglTestCase_021898_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021898_2 ".format.sized.2d.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021898, VkglTestCase_021898_1, VkglTestCase_021898_2);

#define VkglTestCase_021899_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021899_2 "re.format.sized.2d.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021899, VkglTestCase_021899_1, VkglTestCase_021899_2);

#define VkglTestCase_021900_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021900_2 "e.format.sized.2d.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021900, VkglTestCase_021900_1, VkglTestCase_021900_2);

#define VkglTestCase_021901_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021901_2 "e.format.sized.2d.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021901, VkglTestCase_021901_1, VkglTestCase_021901_2);

#define VkglTestCase_021902_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021902_2 "e.format.sized.2d.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021902, VkglTestCase_021902_1, VkglTestCase_021902_2);

#define VkglTestCase_021903_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021903_2 "e.format.sized.2d.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021903, VkglTestCase_021903_1, VkglTestCase_021903_2);

#define VkglTestCase_021904_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021904_2 ".format.sized.2d.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021904, VkglTestCase_021904_1, VkglTestCase_021904_2);

#define VkglTestCase_021905_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021905_2 "ormat.sized.2d.srgb8_alpha8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021905, VkglTestCase_021905_1, VkglTestCase_021905_2);

#define VkglTestCase_021906_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021906_2 "ormat.sized.2d.srgb8_alpha8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021906, VkglTestCase_021906_1, VkglTestCase_021906_2);

#define VkglTestCase_021907_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021907_2 "e.format.sized.2d.srgb_r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021907, VkglTestCase_021907_1, VkglTestCase_021907_2);

#define VkglTestCase_021908_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021908_2 ".format.sized.2d.srgb_r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021908, VkglTestCase_021908_1, VkglTestCase_021908_2);

#define VkglTestCase_021909_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021909_2 ".format.sized.2d.srgb_rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021909, VkglTestCase_021909_1, VkglTestCase_021909_2);

#define VkglTestCase_021910_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021910_2 ".format.sized.2d.srgb_rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021910, VkglTestCase_021910_1, VkglTestCase_021910_2);

#define VkglTestCase_021911_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021911_2 ".format.sized.2d.rgb10_a2_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021911, VkglTestCase_021911_1, VkglTestCase_021911_2);

#define VkglTestCase_021912_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021912_2 ".format.sized.2d.rgb10_a2_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021912, VkglTestCase_021912_1, VkglTestCase_021912_2);

#define VkglTestCase_021913_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021913_2 "format.sized.2d.rgb10_a2ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021913, VkglTestCase_021913_1, VkglTestCase_021913_2);

#define VkglTestCase_021914_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021914_2 "format.sized.2d.rgb10_a2ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021914, VkglTestCase_021914_1, VkglTestCase_021914_2);

#define VkglTestCase_021915_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021915_2 "re.format.sized.2d.rgba4_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021915, VkglTestCase_021915_1, VkglTestCase_021915_2);

#define VkglTestCase_021916_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021916_2 "e.format.sized.2d.rgba4_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021916, VkglTestCase_021916_1, VkglTestCase_021916_2);

#define VkglTestCase_021917_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021917_2 "e.format.sized.2d.rgb5_a1_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021917, VkglTestCase_021917_1, VkglTestCase_021917_2);

#define VkglTestCase_021918_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021918_2 ".format.sized.2d.rgb5_a1_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021918, VkglTestCase_021918_1, VkglTestCase_021918_2);

#define VkglTestCase_021919_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021919_2 "format.sized.2d.rgba8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021919, VkglTestCase_021919_1, VkglTestCase_021919_2);

#define VkglTestCase_021920_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021920_2 "ormat.sized.2d.rgba8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021920, VkglTestCase_021920_1, VkglTestCase_021920_2);

#define VkglTestCase_021921_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021921_2 "re.format.sized.2d.rgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021921, VkglTestCase_021921_1, VkglTestCase_021921_2);

#define VkglTestCase_021922_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021922_2 "re.format.sized.2d.rgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021922, VkglTestCase_021922_1, VkglTestCase_021922_2);

#define VkglTestCase_021923_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021923_2 "e.format.sized.2d.rgb565_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021923, VkglTestCase_021923_1, VkglTestCase_021923_2);

#define VkglTestCase_021924_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021924_2 "e.format.sized.2d.rgb565_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021924, VkglTestCase_021924_1, VkglTestCase_021924_2);

#define VkglTestCase_021925_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_021925_2 "rmat.sized.2d.r11f_g11f_b10f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021925, VkglTestCase_021925_1, VkglTestCase_021925_2);

#define VkglTestCase_021926_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_021926_2 "rmat.sized.2d.r11f_g11f_b10f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021926, VkglTestCase_021926_1, VkglTestCase_021926_2);

#define VkglTestCase_021927_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021927_2 "e.format.sized.2d.rgb32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021927, VkglTestCase_021927_1, VkglTestCase_021927_2);

#define VkglTestCase_021928_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021928_2 "e.format.sized.2d.rgb32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021928, VkglTestCase_021928_1, VkglTestCase_021928_2);

#define VkglTestCase_021929_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021929_2 "e.format.sized.2d.rgb32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021929, VkglTestCase_021929_1, VkglTestCase_021929_2);

#define VkglTestCase_021930_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021930_2 "e.format.sized.2d.rgb32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021930, VkglTestCase_021930_1, VkglTestCase_021930_2);

#define VkglTestCase_021931_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021931_2 "e.format.sized.2d.rgb32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021931, VkglTestCase_021931_1, VkglTestCase_021931_2);

#define VkglTestCase_021932_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021932_2 ".format.sized.2d.rgb32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021932, VkglTestCase_021932_1, VkglTestCase_021932_2);

#define VkglTestCase_021933_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021933_2 "e.format.sized.2d.rgb16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021933, VkglTestCase_021933_1, VkglTestCase_021933_2);

#define VkglTestCase_021934_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021934_2 "e.format.sized.2d.rgb16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021934, VkglTestCase_021934_1, VkglTestCase_021934_2);

#define VkglTestCase_021935_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021935_2 "e.format.sized.2d.rgb16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021935, VkglTestCase_021935_1, VkglTestCase_021935_2);

#define VkglTestCase_021936_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021936_2 "e.format.sized.2d.rgb16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021936, VkglTestCase_021936_1, VkglTestCase_021936_2);

#define VkglTestCase_021937_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021937_2 "e.format.sized.2d.rgb16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021937, VkglTestCase_021937_1, VkglTestCase_021937_2);

#define VkglTestCase_021938_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021938_2 ".format.sized.2d.rgb16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021938, VkglTestCase_021938_1, VkglTestCase_021938_2);

#define VkglTestCase_021939_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021939_2 "format.sized.2d.rgb8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021939, VkglTestCase_021939_1, VkglTestCase_021939_2);

#define VkglTestCase_021940_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021940_2 "format.sized.2d.rgb8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021940, VkglTestCase_021940_1, VkglTestCase_021940_2);

#define VkglTestCase_021941_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021941_2 "re.format.sized.2d.rgb8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021941, VkglTestCase_021941_1, VkglTestCase_021941_2);

#define VkglTestCase_021942_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021942_2 "e.format.sized.2d.rgb8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021942, VkglTestCase_021942_1, VkglTestCase_021942_2);

#define VkglTestCase_021943_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021943_2 "e.format.sized.2d.rgb8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021943, VkglTestCase_021943_1, VkglTestCase_021943_2);

#define VkglTestCase_021944_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021944_2 "e.format.sized.2d.rgb8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021944, VkglTestCase_021944_1, VkglTestCase_021944_2);

#define VkglTestCase_021945_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021945_2 "re.format.sized.2d.srgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021945, VkglTestCase_021945_1, VkglTestCase_021945_2);

#define VkglTestCase_021946_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021946_2 "e.format.sized.2d.srgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021946, VkglTestCase_021946_1, VkglTestCase_021946_2);

#define VkglTestCase_021947_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021947_2 "e.format.sized.2d.rgb9_e5_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021947, VkglTestCase_021947_1, VkglTestCase_021947_2);

#define VkglTestCase_021948_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021948_2 ".format.sized.2d.rgb9_e5_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021948, VkglTestCase_021948_1, VkglTestCase_021948_2);

#define VkglTestCase_021949_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021949_2 "re.format.sized.2d.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021949, VkglTestCase_021949_1, VkglTestCase_021949_2);

#define VkglTestCase_021950_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021950_2 "e.format.sized.2d.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021950, VkglTestCase_021950_1, VkglTestCase_021950_2);

#define VkglTestCase_021951_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021951_2 "re.format.sized.2d.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021951, VkglTestCase_021951_1, VkglTestCase_021951_2);

#define VkglTestCase_021952_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021952_2 "e.format.sized.2d.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021952, VkglTestCase_021952_1, VkglTestCase_021952_2);

#define VkglTestCase_021953_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021953_2 "e.format.sized.2d.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021953, VkglTestCase_021953_1, VkglTestCase_021953_2);

#define VkglTestCase_021954_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021954_2 "e.format.sized.2d.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021954, VkglTestCase_021954_1, VkglTestCase_021954_2);

#define VkglTestCase_021955_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021955_2 "re.format.sized.2d.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021955, VkglTestCase_021955_1, VkglTestCase_021955_2);

#define VkglTestCase_021956_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021956_2 "e.format.sized.2d.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021956, VkglTestCase_021956_1, VkglTestCase_021956_2);

#define VkglTestCase_021957_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021957_2 "re.format.sized.2d.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021957, VkglTestCase_021957_1, VkglTestCase_021957_2);

#define VkglTestCase_021958_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021958_2 "e.format.sized.2d.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021958, VkglTestCase_021958_1, VkglTestCase_021958_2);

#define VkglTestCase_021959_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021959_2 "e.format.sized.2d.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021959, VkglTestCase_021959_1, VkglTestCase_021959_2);

#define VkglTestCase_021960_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021960_2 "e.format.sized.2d.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021960, VkglTestCase_021960_1, VkglTestCase_021960_2);

#define VkglTestCase_021961_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_021961_2 "ure.format.sized.2d.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021961, VkglTestCase_021961_1, VkglTestCase_021961_2);

#define VkglTestCase_021962_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021962_2 "re.format.sized.2d.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021962, VkglTestCase_021962_1, VkglTestCase_021962_2);

#define VkglTestCase_021963_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021963_2 "re.format.sized.2d.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021963, VkglTestCase_021963_1, VkglTestCase_021963_2);

#define VkglTestCase_021964_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021964_2 "re.format.sized.2d.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021964, VkglTestCase_021964_1, VkglTestCase_021964_2);

#define VkglTestCase_021965_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021965_2 "re.format.sized.2d.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021965, VkglTestCase_021965_1, VkglTestCase_021965_2);

#define VkglTestCase_021966_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021966_2 "e.format.sized.2d.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021966, VkglTestCase_021966_1, VkglTestCase_021966_2);

#define VkglTestCase_021967_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021967_2 ".format.sized.2d.rg8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021967, VkglTestCase_021967_1, VkglTestCase_021967_2);

#define VkglTestCase_021968_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021968_2 "format.sized.2d.rg8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021968, VkglTestCase_021968_1, VkglTestCase_021968_2);

#define VkglTestCase_021969_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021969_2 "re.format.sized.2d.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021969, VkglTestCase_021969_1, VkglTestCase_021969_2);

#define VkglTestCase_021970_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021970_2 "re.format.sized.2d.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021970, VkglTestCase_021970_1, VkglTestCase_021970_2);

#define VkglTestCase_021971_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021971_2 "re.format.sized.2d.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021971, VkglTestCase_021971_1, VkglTestCase_021971_2);

#define VkglTestCase_021972_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021972_2 "re.format.sized.2d.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021972, VkglTestCase_021972_1, VkglTestCase_021972_2);

#define VkglTestCase_021973_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021973_2 "re.format.sized.2d.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021973, VkglTestCase_021973_1, VkglTestCase_021973_2);

#define VkglTestCase_021974_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021974_2 "e.format.sized.2d.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021974, VkglTestCase_021974_1, VkglTestCase_021974_2);

#define VkglTestCase_021975_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021975_2 "re.format.sized.2d.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021975, VkglTestCase_021975_1, VkglTestCase_021975_2);

#define VkglTestCase_021976_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021976_2 "re.format.sized.2d.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021976, VkglTestCase_021976_1, VkglTestCase_021976_2);

#define VkglTestCase_021977_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021977_2 "re.format.sized.2d.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021977, VkglTestCase_021977_1, VkglTestCase_021977_2);

#define VkglTestCase_021978_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021978_2 "re.format.sized.2d.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021978, VkglTestCase_021978_1, VkglTestCase_021978_2);

#define VkglTestCase_021979_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021979_2 "re.format.sized.2d.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021979, VkglTestCase_021979_1, VkglTestCase_021979_2);

#define VkglTestCase_021980_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021980_2 "e.format.sized.2d.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021980, VkglTestCase_021980_1, VkglTestCase_021980_2);

#define VkglTestCase_021981_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_021981_2 "ure.format.sized.2d.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021981, VkglTestCase_021981_1, VkglTestCase_021981_2);

#define VkglTestCase_021982_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_021982_2 "ure.format.sized.2d.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021982, VkglTestCase_021982_1, VkglTestCase_021982_2);

#define VkglTestCase_021983_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_021983_2 "ure.format.sized.2d.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021983, VkglTestCase_021983_1, VkglTestCase_021983_2);

#define VkglTestCase_021984_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021984_2 "re.format.sized.2d.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021984, VkglTestCase_021984_1, VkglTestCase_021984_2);

#define VkglTestCase_021985_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021985_2 "re.format.sized.2d.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021985, VkglTestCase_021985_1, VkglTestCase_021985_2);

#define VkglTestCase_021986_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_021986_2 "re.format.sized.2d.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021986, VkglTestCase_021986_1, VkglTestCase_021986_2);

#define VkglTestCase_021987_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021987_2 ".format.sized.2d.r8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021987, VkglTestCase_021987_1, VkglTestCase_021987_2);

#define VkglTestCase_021988_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021988_2 ".format.sized.2d.r8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021988, VkglTestCase_021988_1, VkglTestCase_021988_2);

#define VkglTestCase_021989_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021989_2 "at.sized.2d.depth_component32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021989, VkglTestCase_021989_1, VkglTestCase_021989_2);

#define VkglTestCase_021990_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021990_2 "at.sized.2d.depth_component32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021990, VkglTestCase_021990_1, VkglTestCase_021990_2);

#define VkglTestCase_021991_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021991_2 "mat.sized.2d.depth_component24_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021991, VkglTestCase_021991_1, VkglTestCase_021991_2);

#define VkglTestCase_021992_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021992_2 "at.sized.2d.depth_component24_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021992, VkglTestCase_021992_1, VkglTestCase_021992_2);

#define VkglTestCase_021993_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021993_2 "mat.sized.2d.depth_component16_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021993, VkglTestCase_021993_1, VkglTestCase_021993_2);

#define VkglTestCase_021994_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021994_2 "at.sized.2d.depth_component16_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021994, VkglTestCase_021994_1, VkglTestCase_021994_2);

#define VkglTestCase_021995_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021995_2 "mat.sized.2d.depth32f_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021995, VkglTestCase_021995_1, VkglTestCase_021995_2);

#define VkglTestCase_021996_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021996_2 "at.sized.2d.depth32f_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021996, VkglTestCase_021996_1, VkglTestCase_021996_2);

#define VkglTestCase_021997_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021997_2 "mat.sized.2d.depth24_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021997, VkglTestCase_021997_1, VkglTestCase_021997_2);

#define VkglTestCase_021998_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021998_2 "mat.sized.2d.depth24_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021998, VkglTestCase_021998_1, VkglTestCase_021998_2);
