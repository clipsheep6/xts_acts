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
#include "../ActsDeqpgles30029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028991_1 "dEQP-GLES3.functional.fragment_ops.blend.defaul"
#define VkglTestCase_028991_2 "t_framebuffer.rgb_func_alpha_func.src.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028991, VkglTestCase_028991_1, VkglTestCase_028991_2);

#define VkglTestCase_028992_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_028992_2 "lt_framebuffer.rgb_func_alpha_func.src.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028992, VkglTestCase_028992_1, VkglTestCase_028992_2);

#define VkglTestCase_028993_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_028993_2 "framebuffer.rgb_func_alpha_func.src.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028993, VkglTestCase_028993_1, VkglTestCase_028993_2);

#define VkglTestCase_028994_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_028994_2 "buffer.rgb_func_alpha_func.src.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028994, VkglTestCase_028994_1, VkglTestCase_028994_2);

#define VkglTestCase_028995_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_028995_2 "framebuffer.rgb_func_alpha_func.src.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028995, VkglTestCase_028995_1, VkglTestCase_028995_2);

#define VkglTestCase_028996_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_028996_2 "buffer.rgb_func_alpha_func.src.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028996, VkglTestCase_028996_1, VkglTestCase_028996_2);

#define VkglTestCase_028997_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_028997_2 "framebuffer.rgb_func_alpha_func.src.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028997, VkglTestCase_028997_1, VkglTestCase_028997_2);

#define VkglTestCase_028998_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_028998_2 "buffer.rgb_func_alpha_func.src.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028998, VkglTestCase_028998_1, VkglTestCase_028998_2);

#define VkglTestCase_028999_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_028999_2 "framebuffer.rgb_func_alpha_func.src.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028999, VkglTestCase_028999_1, VkglTestCase_028999_2);

#define VkglTestCase_029000_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029000_2 "buffer.rgb_func_alpha_func.src.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029000, VkglTestCase_029000_1, VkglTestCase_029000_2);

#define VkglTestCase_029001_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029001_2 "mebuffer.rgb_func_alpha_func.src.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029001, VkglTestCase_029001_1, VkglTestCase_029001_2);

#define VkglTestCase_029002_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029002_2 "fer.rgb_func_alpha_func.src.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029002, VkglTestCase_029002_1, VkglTestCase_029002_2);

#define VkglTestCase_029003_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029003_2 "mebuffer.rgb_func_alpha_func.src.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029003, VkglTestCase_029003_1, VkglTestCase_029003_2);

#define VkglTestCase_029004_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029004_2 "fer.rgb_func_alpha_func.src.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029004, VkglTestCase_029004_1, VkglTestCase_029004_2);

#define VkglTestCase_029005_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029005_2 "buffer.rgb_func_alpha_func.src.zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029005, VkglTestCase_029005_1, VkglTestCase_029005_2);

#define VkglTestCase_029006_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_029006_2 "lt_framebuffer.rgb_func_alpha_func.src.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029006, VkglTestCase_029006_1, VkglTestCase_029006_2);

#define VkglTestCase_029007_1 "dEQP-GLES3.functional.fragment_ops.blend.defau"
#define VkglTestCase_029007_2 "lt_framebuffer.rgb_func_alpha_func.src.one_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029007, VkglTestCase_029007_1, VkglTestCase_029007_2);

#define VkglTestCase_029008_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029008_2 "framebuffer.rgb_func_alpha_func.src.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029008, VkglTestCase_029008_1, VkglTestCase_029008_2);

#define VkglTestCase_029009_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029009_2 "buffer.rgb_func_alpha_func.src.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029009, VkglTestCase_029009_1, VkglTestCase_029009_2);

#define VkglTestCase_029010_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029010_2 "framebuffer.rgb_func_alpha_func.src.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029010, VkglTestCase_029010_1, VkglTestCase_029010_2);

#define VkglTestCase_029011_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029011_2 "buffer.rgb_func_alpha_func.src.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029011, VkglTestCase_029011_1, VkglTestCase_029011_2);

#define VkglTestCase_029012_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029012_2 "framebuffer.rgb_func_alpha_func.src.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029012, VkglTestCase_029012_1, VkglTestCase_029012_2);

#define VkglTestCase_029013_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029013_2 "buffer.rgb_func_alpha_func.src.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029013, VkglTestCase_029013_1, VkglTestCase_029013_2);

#define VkglTestCase_029014_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029014_2 "framebuffer.rgb_func_alpha_func.src.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029014, VkglTestCase_029014_1, VkglTestCase_029014_2);

#define VkglTestCase_029015_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029015_2 "buffer.rgb_func_alpha_func.src.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029015, VkglTestCase_029015_1, VkglTestCase_029015_2);

#define VkglTestCase_029016_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029016_2 "amebuffer.rgb_func_alpha_func.src.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029016, VkglTestCase_029016_1, VkglTestCase_029016_2);

#define VkglTestCase_029017_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029017_2 "ffer.rgb_func_alpha_func.src.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029017, VkglTestCase_029017_1, VkglTestCase_029017_2);

#define VkglTestCase_029018_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029018_2 "amebuffer.rgb_func_alpha_func.src.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029018, VkglTestCase_029018_1, VkglTestCase_029018_2);

#define VkglTestCase_029019_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029019_2 "ffer.rgb_func_alpha_func.src.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029019, VkglTestCase_029019_1, VkglTestCase_029019_2);

#define VkglTestCase_029020_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_029020_2 "ebuffer.rgb_func_alpha_func.src.one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029020, VkglTestCase_029020_1, VkglTestCase_029020_2);

#define VkglTestCase_029021_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029021_2 "framebuffer.rgb_func_alpha_func.src.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029021, VkglTestCase_029021_1, VkglTestCase_029021_2);

#define VkglTestCase_029022_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029022_2 "framebuffer.rgb_func_alpha_func.src.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029022, VkglTestCase_029022_1, VkglTestCase_029022_2);

#define VkglTestCase_029023_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029023_2 "mebuffer.rgb_func_alpha_func.src.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029023, VkglTestCase_029023_1, VkglTestCase_029023_2);

#define VkglTestCase_029024_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029024_2 "fer.rgb_func_alpha_func.src.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029024, VkglTestCase_029024_1, VkglTestCase_029024_2);

#define VkglTestCase_029025_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029025_2 "mebuffer.rgb_func_alpha_func.src.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029025, VkglTestCase_029025_1, VkglTestCase_029025_2);

#define VkglTestCase_029026_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029026_2 "fer.rgb_func_alpha_func.src.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029026, VkglTestCase_029026_1, VkglTestCase_029026_2);

#define VkglTestCase_029027_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029027_2 "mebuffer.rgb_func_alpha_func.src.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029027, VkglTestCase_029027_1, VkglTestCase_029027_2);

#define VkglTestCase_029028_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029028_2 "fer.rgb_func_alpha_func.src.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029028, VkglTestCase_029028_1, VkglTestCase_029028_2);

#define VkglTestCase_029029_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029029_2 "mebuffer.rgb_func_alpha_func.src.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029029, VkglTestCase_029029_1, VkglTestCase_029029_2);

#define VkglTestCase_029030_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029030_2 "fer.rgb_func_alpha_func.src.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029030, VkglTestCase_029030_1, VkglTestCase_029030_2);

#define VkglTestCase_029031_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029031_2 "buffer.rgb_func_alpha_func.src.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029031, VkglTestCase_029031_1, VkglTestCase_029031_2);

#define VkglTestCase_029032_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029032_2 "r.rgb_func_alpha_func.src.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029032, VkglTestCase_029032_1, VkglTestCase_029032_2);

#define VkglTestCase_029033_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029033_2 "buffer.rgb_func_alpha_func.src.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029033, VkglTestCase_029033_1, VkglTestCase_029033_2);

#define VkglTestCase_029034_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029034_2 "r.rgb_func_alpha_func.src.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029034, VkglTestCase_029034_1, VkglTestCase_029034_2);

#define VkglTestCase_029035_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029035_2 "ffer.rgb_func_alpha_func.src.src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029035, VkglTestCase_029035_1, VkglTestCase_029035_2);

#define VkglTestCase_029036_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029036_2 "buffer.rgb_func_alpha_func.src.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029036, VkglTestCase_029036_1, VkglTestCase_029036_2);

#define VkglTestCase_029037_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029037_2 "buffer.rgb_func_alpha_func.src.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029037, VkglTestCase_029037_1, VkglTestCase_029037_2);

#define VkglTestCase_029038_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029038_2 "fer.rgb_func_alpha_func.src.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029038, VkglTestCase_029038_1, VkglTestCase_029038_2);

#define VkglTestCase_029039_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029039_2 "gb_func_alpha_func.src.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029039, VkglTestCase_029039_1, VkglTestCase_029039_2);

#define VkglTestCase_029040_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029040_2 "fer.rgb_func_alpha_func.src.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029040, VkglTestCase_029040_1, VkglTestCase_029040_2);

#define VkglTestCase_029041_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029041_2 "gb_func_alpha_func.src.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029041, VkglTestCase_029041_1, VkglTestCase_029041_2);

#define VkglTestCase_029042_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029042_2 "fer.rgb_func_alpha_func.src.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029042, VkglTestCase_029042_1, VkglTestCase_029042_2);

#define VkglTestCase_029043_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029043_2 "gb_func_alpha_func.src.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029043, VkglTestCase_029043_1, VkglTestCase_029043_2);

#define VkglTestCase_029044_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029044_2 "fer.rgb_func_alpha_func.src.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029044, VkglTestCase_029044_1, VkglTestCase_029044_2);

#define VkglTestCase_029045_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029045_2 "gb_func_alpha_func.src.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029045, VkglTestCase_029045_1, VkglTestCase_029045_2);

#define VkglTestCase_029046_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029046_2 "r.rgb_func_alpha_func.src.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029046, VkglTestCase_029046_1, VkglTestCase_029046_2);

#define VkglTestCase_029047_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029047_2 "_func_alpha_func.src.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029047, VkglTestCase_029047_1, VkglTestCase_029047_2);

#define VkglTestCase_029048_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029048_2 "r.rgb_func_alpha_func.src.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029048, VkglTestCase_029048_1, VkglTestCase_029048_2);

#define VkglTestCase_029049_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029049_2 "_func_alpha_func.src.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029049, VkglTestCase_029049_1, VkglTestCase_029049_2);

#define VkglTestCase_029050_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029050_2 "rgb_func_alpha_func.src.one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029050, VkglTestCase_029050_1, VkglTestCase_029050_2);

#define VkglTestCase_029051_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029051_2 "framebuffer.rgb_func_alpha_func.src.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029051, VkglTestCase_029051_1, VkglTestCase_029051_2);

#define VkglTestCase_029052_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029052_2 "framebuffer.rgb_func_alpha_func.src.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029052, VkglTestCase_029052_1, VkglTestCase_029052_2);

#define VkglTestCase_029053_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029053_2 "mebuffer.rgb_func_alpha_func.src.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029053, VkglTestCase_029053_1, VkglTestCase_029053_2);

#define VkglTestCase_029054_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029054_2 "fer.rgb_func_alpha_func.src.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029054, VkglTestCase_029054_1, VkglTestCase_029054_2);

#define VkglTestCase_029055_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029055_2 "mebuffer.rgb_func_alpha_func.src.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029055, VkglTestCase_029055_1, VkglTestCase_029055_2);

#define VkglTestCase_029056_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029056_2 "fer.rgb_func_alpha_func.src.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029056, VkglTestCase_029056_1, VkglTestCase_029056_2);

#define VkglTestCase_029057_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029057_2 "mebuffer.rgb_func_alpha_func.src.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029057, VkglTestCase_029057_1, VkglTestCase_029057_2);

#define VkglTestCase_029058_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029058_2 "fer.rgb_func_alpha_func.src.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029058, VkglTestCase_029058_1, VkglTestCase_029058_2);

#define VkglTestCase_029059_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029059_2 "mebuffer.rgb_func_alpha_func.src.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029059, VkglTestCase_029059_1, VkglTestCase_029059_2);

#define VkglTestCase_029060_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029060_2 "fer.rgb_func_alpha_func.src.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029060, VkglTestCase_029060_1, VkglTestCase_029060_2);

#define VkglTestCase_029061_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029061_2 "buffer.rgb_func_alpha_func.src.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029061, VkglTestCase_029061_1, VkglTestCase_029061_2);

#define VkglTestCase_029062_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029062_2 "r.rgb_func_alpha_func.src.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029062, VkglTestCase_029062_1, VkglTestCase_029062_2);

#define VkglTestCase_029063_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029063_2 "buffer.rgb_func_alpha_func.src.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029063, VkglTestCase_029063_1, VkglTestCase_029063_2);

#define VkglTestCase_029064_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029064_2 "r.rgb_func_alpha_func.src.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029064, VkglTestCase_029064_1, VkglTestCase_029064_2);

#define VkglTestCase_029065_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029065_2 "ffer.rgb_func_alpha_func.src.dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029065, VkglTestCase_029065_1, VkglTestCase_029065_2);

#define VkglTestCase_029066_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029066_2 "buffer.rgb_func_alpha_func.src.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029066, VkglTestCase_029066_1, VkglTestCase_029066_2);

#define VkglTestCase_029067_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029067_2 "buffer.rgb_func_alpha_func.src.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029067, VkglTestCase_029067_1, VkglTestCase_029067_2);

#define VkglTestCase_029068_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029068_2 "fer.rgb_func_alpha_func.src.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029068, VkglTestCase_029068_1, VkglTestCase_029068_2);

#define VkglTestCase_029069_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029069_2 "gb_func_alpha_func.src.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029069, VkglTestCase_029069_1, VkglTestCase_029069_2);

#define VkglTestCase_029070_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029070_2 "fer.rgb_func_alpha_func.src.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029070, VkglTestCase_029070_1, VkglTestCase_029070_2);

#define VkglTestCase_029071_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029071_2 "gb_func_alpha_func.src.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029071, VkglTestCase_029071_1, VkglTestCase_029071_2);

#define VkglTestCase_029072_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029072_2 "fer.rgb_func_alpha_func.src.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029072, VkglTestCase_029072_1, VkglTestCase_029072_2);

#define VkglTestCase_029073_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029073_2 "gb_func_alpha_func.src.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029073, VkglTestCase_029073_1, VkglTestCase_029073_2);

#define VkglTestCase_029074_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029074_2 "fer.rgb_func_alpha_func.src.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029074, VkglTestCase_029074_1, VkglTestCase_029074_2);

#define VkglTestCase_029075_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029075_2 "gb_func_alpha_func.src.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029075, VkglTestCase_029075_1, VkglTestCase_029075_2);

#define VkglTestCase_029076_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029076_2 "r.rgb_func_alpha_func.src.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029076, VkglTestCase_029076_1, VkglTestCase_029076_2);

#define VkglTestCase_029077_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029077_2 "_func_alpha_func.src.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029077, VkglTestCase_029077_1, VkglTestCase_029077_2);

#define VkglTestCase_029078_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029078_2 "r.rgb_func_alpha_func.src.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029078, VkglTestCase_029078_1, VkglTestCase_029078_2);

#define VkglTestCase_029079_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029079_2 "_func_alpha_func.src.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029079, VkglTestCase_029079_1, VkglTestCase_029079_2);

#define VkglTestCase_029080_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029080_2 "rgb_func_alpha_func.src.one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029080, VkglTestCase_029080_1, VkglTestCase_029080_2);

#define VkglTestCase_029081_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029081_2 "framebuffer.rgb_func_alpha_func.src.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029081, VkglTestCase_029081_1, VkglTestCase_029081_2);

#define VkglTestCase_029082_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029082_2 "framebuffer.rgb_func_alpha_func.src.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029082, VkglTestCase_029082_1, VkglTestCase_029082_2);

#define VkglTestCase_029083_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029083_2 "mebuffer.rgb_func_alpha_func.src.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029083, VkglTestCase_029083_1, VkglTestCase_029083_2);

#define VkglTestCase_029084_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029084_2 "fer.rgb_func_alpha_func.src.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029084, VkglTestCase_029084_1, VkglTestCase_029084_2);

#define VkglTestCase_029085_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029085_2 "mebuffer.rgb_func_alpha_func.src.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029085, VkglTestCase_029085_1, VkglTestCase_029085_2);

#define VkglTestCase_029086_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029086_2 "fer.rgb_func_alpha_func.src.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029086, VkglTestCase_029086_1, VkglTestCase_029086_2);

#define VkglTestCase_029087_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029087_2 "mebuffer.rgb_func_alpha_func.src.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029087, VkglTestCase_029087_1, VkglTestCase_029087_2);

#define VkglTestCase_029088_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029088_2 "fer.rgb_func_alpha_func.src.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029088, VkglTestCase_029088_1, VkglTestCase_029088_2);

#define VkglTestCase_029089_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029089_2 "mebuffer.rgb_func_alpha_func.src.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029089, VkglTestCase_029089_1, VkglTestCase_029089_2);

#define VkglTestCase_029090_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029090_2 "fer.rgb_func_alpha_func.src.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029090, VkglTestCase_029090_1, VkglTestCase_029090_2);

#define VkglTestCase_029091_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029091_2 "buffer.rgb_func_alpha_func.src.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029091, VkglTestCase_029091_1, VkglTestCase_029091_2);

#define VkglTestCase_029092_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029092_2 "r.rgb_func_alpha_func.src.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029092, VkglTestCase_029092_1, VkglTestCase_029092_2);

#define VkglTestCase_029093_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029093_2 "buffer.rgb_func_alpha_func.src.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029093, VkglTestCase_029093_1, VkglTestCase_029093_2);

#define VkglTestCase_029094_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029094_2 "r.rgb_func_alpha_func.src.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029094, VkglTestCase_029094_1, VkglTestCase_029094_2);

#define VkglTestCase_029095_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029095_2 "ffer.rgb_func_alpha_func.src.src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029095, VkglTestCase_029095_1, VkglTestCase_029095_2);

#define VkglTestCase_029096_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029096_2 "buffer.rgb_func_alpha_func.src.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029096, VkglTestCase_029096_1, VkglTestCase_029096_2);

#define VkglTestCase_029097_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029097_2 "buffer.rgb_func_alpha_func.src.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029097, VkglTestCase_029097_1, VkglTestCase_029097_2);

#define VkglTestCase_029098_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029098_2 "fer.rgb_func_alpha_func.src.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029098, VkglTestCase_029098_1, VkglTestCase_029098_2);

#define VkglTestCase_029099_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029099_2 "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029099, VkglTestCase_029099_1, VkglTestCase_029099_2);

#define VkglTestCase_029100_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029100_2 "fer.rgb_func_alpha_func.src.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029100, VkglTestCase_029100_1, VkglTestCase_029100_2);

#define VkglTestCase_029101_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029101_2 "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029101, VkglTestCase_029101_1, VkglTestCase_029101_2);

#define VkglTestCase_029102_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029102_2 "fer.rgb_func_alpha_func.src.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029102, VkglTestCase_029102_1, VkglTestCase_029102_2);

#define VkglTestCase_029103_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029103_2 "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029103, VkglTestCase_029103_1, VkglTestCase_029103_2);

#define VkglTestCase_029104_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029104_2 "fer.rgb_func_alpha_func.src.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029104, VkglTestCase_029104_1, VkglTestCase_029104_2);

#define VkglTestCase_029105_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029105_2 "gb_func_alpha_func.src.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029105, VkglTestCase_029105_1, VkglTestCase_029105_2);

#define VkglTestCase_029106_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029106_2 "r.rgb_func_alpha_func.src.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029106, VkglTestCase_029106_1, VkglTestCase_029106_2);

#define VkglTestCase_029107_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029107_2 "_func_alpha_func.src.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029107, VkglTestCase_029107_1, VkglTestCase_029107_2);

#define VkglTestCase_029108_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029108_2 "r.rgb_func_alpha_func.src.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029108, VkglTestCase_029108_1, VkglTestCase_029108_2);

#define VkglTestCase_029109_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029109_2 "_func_alpha_func.src.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029109, VkglTestCase_029109_1, VkglTestCase_029109_2);

#define VkglTestCase_029110_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029110_2 "rgb_func_alpha_func.src.one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029110, VkglTestCase_029110_1, VkglTestCase_029110_2);

#define VkglTestCase_029111_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029111_2 "framebuffer.rgb_func_alpha_func.src.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029111, VkglTestCase_029111_1, VkglTestCase_029111_2);

#define VkglTestCase_029112_1 "dEQP-GLES3.functional.fragment_ops.blend.default_"
#define VkglTestCase_029112_2 "framebuffer.rgb_func_alpha_func.src.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029112, VkglTestCase_029112_1, VkglTestCase_029112_2);

#define VkglTestCase_029113_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029113_2 "mebuffer.rgb_func_alpha_func.src.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029113, VkglTestCase_029113_1, VkglTestCase_029113_2);

#define VkglTestCase_029114_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029114_2 "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029114, VkglTestCase_029114_1, VkglTestCase_029114_2);

#define VkglTestCase_029115_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029115_2 "mebuffer.rgb_func_alpha_func.src.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029115, VkglTestCase_029115_1, VkglTestCase_029115_2);

#define VkglTestCase_029116_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029116_2 "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029116, VkglTestCase_029116_1, VkglTestCase_029116_2);

#define VkglTestCase_029117_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029117_2 "mebuffer.rgb_func_alpha_func.src.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029117, VkglTestCase_029117_1, VkglTestCase_029117_2);

#define VkglTestCase_029118_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029118_2 "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029118, VkglTestCase_029118_1, VkglTestCase_029118_2);

#define VkglTestCase_029119_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029119_2 "mebuffer.rgb_func_alpha_func.src.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029119, VkglTestCase_029119_1, VkglTestCase_029119_2);

#define VkglTestCase_029120_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029120_2 "fer.rgb_func_alpha_func.src.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029120, VkglTestCase_029120_1, VkglTestCase_029120_2);

#define VkglTestCase_029121_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029121_2 "buffer.rgb_func_alpha_func.src.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029121, VkglTestCase_029121_1, VkglTestCase_029121_2);

#define VkglTestCase_029122_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029122_2 "r.rgb_func_alpha_func.src.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029122, VkglTestCase_029122_1, VkglTestCase_029122_2);

#define VkglTestCase_029123_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029123_2 "buffer.rgb_func_alpha_func.src.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029123, VkglTestCase_029123_1, VkglTestCase_029123_2);

#define VkglTestCase_029124_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029124_2 "r.rgb_func_alpha_func.src.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029124, VkglTestCase_029124_1, VkglTestCase_029124_2);

#define VkglTestCase_029125_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029125_2 "ffer.rgb_func_alpha_func.src.dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029125, VkglTestCase_029125_1, VkglTestCase_029125_2);

#define VkglTestCase_029126_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029126_2 "buffer.rgb_func_alpha_func.src.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029126, VkglTestCase_029126_1, VkglTestCase_029126_2);

#define VkglTestCase_029127_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029127_2 "buffer.rgb_func_alpha_func.src.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029127, VkglTestCase_029127_1, VkglTestCase_029127_2);

#define VkglTestCase_029128_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029128_2 "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029128, VkglTestCase_029128_1, VkglTestCase_029128_2);

#define VkglTestCase_029129_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029129_2 "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029129, VkglTestCase_029129_1, VkglTestCase_029129_2);

#define VkglTestCase_029130_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029130_2 "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029130, VkglTestCase_029130_1, VkglTestCase_029130_2);

#define VkglTestCase_029131_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029131_2 "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029131, VkglTestCase_029131_1, VkglTestCase_029131_2);

#define VkglTestCase_029132_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029132_2 "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029132, VkglTestCase_029132_1, VkglTestCase_029132_2);

#define VkglTestCase_029133_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029133_2 "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029133, VkglTestCase_029133_1, VkglTestCase_029133_2);

#define VkglTestCase_029134_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029134_2 "fer.rgb_func_alpha_func.src.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029134, VkglTestCase_029134_1, VkglTestCase_029134_2);

#define VkglTestCase_029135_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029135_2 "gb_func_alpha_func.src.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029135, VkglTestCase_029135_1, VkglTestCase_029135_2);

#define VkglTestCase_029136_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029136_2 "r.rgb_func_alpha_func.src.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029136, VkglTestCase_029136_1, VkglTestCase_029136_2);

#define VkglTestCase_029137_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029137_2 "_func_alpha_func.src.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029137, VkglTestCase_029137_1, VkglTestCase_029137_2);

#define VkglTestCase_029138_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029138_2 "r.rgb_func_alpha_func.src.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029138, VkglTestCase_029138_1, VkglTestCase_029138_2);

#define VkglTestCase_029139_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029139_2 "_func_alpha_func.src.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029139, VkglTestCase_029139_1, VkglTestCase_029139_2);

#define VkglTestCase_029140_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029140_2 "rgb_func_alpha_func.src.one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029140, VkglTestCase_029140_1, VkglTestCase_029140_2);

#define VkglTestCase_029141_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029141_2 "mebuffer.rgb_func_alpha_func.src.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029141, VkglTestCase_029141_1, VkglTestCase_029141_2);

#define VkglTestCase_029142_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029142_2 "amebuffer.rgb_func_alpha_func.src.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029142, VkglTestCase_029142_1, VkglTestCase_029142_2);

#define VkglTestCase_029143_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029143_2 "buffer.rgb_func_alpha_func.src.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029143, VkglTestCase_029143_1, VkglTestCase_029143_2);

#define VkglTestCase_029144_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029144_2 "r.rgb_func_alpha_func.src.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029144, VkglTestCase_029144_1, VkglTestCase_029144_2);

#define VkglTestCase_029145_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029145_2 "buffer.rgb_func_alpha_func.src.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029145, VkglTestCase_029145_1, VkglTestCase_029145_2);

#define VkglTestCase_029146_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029146_2 "r.rgb_func_alpha_func.src.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029146, VkglTestCase_029146_1, VkglTestCase_029146_2);

#define VkglTestCase_029147_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029147_2 "buffer.rgb_func_alpha_func.src.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029147, VkglTestCase_029147_1, VkglTestCase_029147_2);

#define VkglTestCase_029148_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029148_2 "r.rgb_func_alpha_func.src.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029148, VkglTestCase_029148_1, VkglTestCase_029148_2);

#define VkglTestCase_029149_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029149_2 "buffer.rgb_func_alpha_func.src.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029149, VkglTestCase_029149_1, VkglTestCase_029149_2);

#define VkglTestCase_029150_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029150_2 "r.rgb_func_alpha_func.src.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029150, VkglTestCase_029150_1, VkglTestCase_029150_2);

#define VkglTestCase_029151_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029151_2 "fer.rgb_func_alpha_func.src.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029151, VkglTestCase_029151_1, VkglTestCase_029151_2);

#define VkglTestCase_029152_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029152_2 "gb_func_alpha_func.src.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029152, VkglTestCase_029152_1, VkglTestCase_029152_2);

#define VkglTestCase_029153_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029153_2 "fer.rgb_func_alpha_func.src.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029153, VkglTestCase_029153_1, VkglTestCase_029153_2);

#define VkglTestCase_029154_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029154_2 "gb_func_alpha_func.src.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029154, VkglTestCase_029154_1, VkglTestCase_029154_2);

#define VkglTestCase_029155_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029155_2 "r.rgb_func_alpha_func.src.constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029155, VkglTestCase_029155_1, VkglTestCase_029155_2);

#define VkglTestCase_029156_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029156_2 "fer.rgb_func_alpha_func.src.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029156, VkglTestCase_029156_1, VkglTestCase_029156_2);

#define VkglTestCase_029157_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029157_2 "ffer.rgb_func_alpha_func.src.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029157, VkglTestCase_029157_1, VkglTestCase_029157_2);

#define VkglTestCase_029158_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029158_2 "r.rgb_func_alpha_func.src.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029158, VkglTestCase_029158_1, VkglTestCase_029158_2);

#define VkglTestCase_029159_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029159_2 "_func_alpha_func.src.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029159, VkglTestCase_029159_1, VkglTestCase_029159_2);

#define VkglTestCase_029160_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029160_2 "r.rgb_func_alpha_func.src.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029160, VkglTestCase_029160_1, VkglTestCase_029160_2);

#define VkglTestCase_029161_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029161_2 "_func_alpha_func.src.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029161, VkglTestCase_029161_1, VkglTestCase_029161_2);

#define VkglTestCase_029162_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029162_2 "r.rgb_func_alpha_func.src.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029162, VkglTestCase_029162_1, VkglTestCase_029162_2);

#define VkglTestCase_029163_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029163_2 "_func_alpha_func.src.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029163, VkglTestCase_029163_1, VkglTestCase_029163_2);

#define VkglTestCase_029164_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029164_2 "r.rgb_func_alpha_func.src.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029164, VkglTestCase_029164_1, VkglTestCase_029164_2);

#define VkglTestCase_029165_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029165_2 "_func_alpha_func.src.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029165, VkglTestCase_029165_1, VkglTestCase_029165_2);

#define VkglTestCase_029166_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029166_2 "gb_func_alpha_func.src.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029166, VkglTestCase_029166_1, VkglTestCase_029166_2);

#define VkglTestCase_029167_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029167_2 "nc_alpha_func.src.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029167, VkglTestCase_029167_1, VkglTestCase_029167_2);

#define VkglTestCase_029168_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029168_2 "gb_func_alpha_func.src.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029168, VkglTestCase_029168_1, VkglTestCase_029168_2);

#define VkglTestCase_029169_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029169_2 "nc_alpha_func.src.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029169, VkglTestCase_029169_1, VkglTestCase_029169_2);

#define VkglTestCase_029170_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029170_2 "_func_alpha_func.src.one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029170, VkglTestCase_029170_1, VkglTestCase_029170_2);

#define VkglTestCase_029171_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fra"
#define VkglTestCase_029171_2 "mebuffer.rgb_func_alpha_func.src.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029171, VkglTestCase_029171_1, VkglTestCase_029171_2);

#define VkglTestCase_029172_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fr"
#define VkglTestCase_029172_2 "amebuffer.rgb_func_alpha_func.src.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029172, VkglTestCase_029172_1, VkglTestCase_029172_2);

#define VkglTestCase_029173_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029173_2 "buffer.rgb_func_alpha_func.src.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029173, VkglTestCase_029173_1, VkglTestCase_029173_2);

#define VkglTestCase_029174_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029174_2 "r.rgb_func_alpha_func.src.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029174, VkglTestCase_029174_1, VkglTestCase_029174_2);

#define VkglTestCase_029175_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029175_2 "buffer.rgb_func_alpha_func.src.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029175, VkglTestCase_029175_1, VkglTestCase_029175_2);

#define VkglTestCase_029176_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029176_2 "r.rgb_func_alpha_func.src.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029176, VkglTestCase_029176_1, VkglTestCase_029176_2);

#define VkglTestCase_029177_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029177_2 "buffer.rgb_func_alpha_func.src.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029177, VkglTestCase_029177_1, VkglTestCase_029177_2);

#define VkglTestCase_029178_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029178_2 "r.rgb_func_alpha_func.src.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029178, VkglTestCase_029178_1, VkglTestCase_029178_2);

#define VkglTestCase_029179_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029179_2 "buffer.rgb_func_alpha_func.src.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029179, VkglTestCase_029179_1, VkglTestCase_029179_2);

#define VkglTestCase_029180_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029180_2 "r.rgb_func_alpha_func.src.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029180, VkglTestCase_029180_1, VkglTestCase_029180_2);

#define VkglTestCase_029181_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029181_2 "fer.rgb_func_alpha_func.src.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029181, VkglTestCase_029181_1, VkglTestCase_029181_2);

#define VkglTestCase_029182_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029182_2 "gb_func_alpha_func.src.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029182, VkglTestCase_029182_1, VkglTestCase_029182_2);

#define VkglTestCase_029183_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029183_2 "fer.rgb_func_alpha_func.src.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029183, VkglTestCase_029183_1, VkglTestCase_029183_2);

#define VkglTestCase_029184_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029184_2 "gb_func_alpha_func.src.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029184, VkglTestCase_029184_1, VkglTestCase_029184_2);

#define VkglTestCase_029185_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029185_2 "r.rgb_func_alpha_func.src.constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029185, VkglTestCase_029185_1, VkglTestCase_029185_2);

#define VkglTestCase_029186_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029186_2 "fer.rgb_func_alpha_func.src.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029186, VkglTestCase_029186_1, VkglTestCase_029186_2);

#define VkglTestCase_029187_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029187_2 "ffer.rgb_func_alpha_func.src.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029187, VkglTestCase_029187_1, VkglTestCase_029187_2);

#define VkglTestCase_029188_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029188_2 "r.rgb_func_alpha_func.src.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029188, VkglTestCase_029188_1, VkglTestCase_029188_2);

#define VkglTestCase_029189_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029189_2 "_func_alpha_func.src.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029189, VkglTestCase_029189_1, VkglTestCase_029189_2);

#define VkglTestCase_029190_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029190_2 "r.rgb_func_alpha_func.src.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029190, VkglTestCase_029190_1, VkglTestCase_029190_2);

#define VkglTestCase_029191_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029191_2 "_func_alpha_func.src.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029191, VkglTestCase_029191_1, VkglTestCase_029191_2);

#define VkglTestCase_029192_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029192_2 "r.rgb_func_alpha_func.src.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029192, VkglTestCase_029192_1, VkglTestCase_029192_2);

#define VkglTestCase_029193_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029193_2 "_func_alpha_func.src.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029193, VkglTestCase_029193_1, VkglTestCase_029193_2);

#define VkglTestCase_029194_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029194_2 "r.rgb_func_alpha_func.src.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029194, VkglTestCase_029194_1, VkglTestCase_029194_2);

#define VkglTestCase_029195_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029195_2 "_func_alpha_func.src.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029195, VkglTestCase_029195_1, VkglTestCase_029195_2);

#define VkglTestCase_029196_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029196_2 "gb_func_alpha_func.src.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029196, VkglTestCase_029196_1, VkglTestCase_029196_2);

#define VkglTestCase_029197_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029197_2 "nc_alpha_func.src.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029197, VkglTestCase_029197_1, VkglTestCase_029197_2);

#define VkglTestCase_029198_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.r"
#define VkglTestCase_029198_2 "gb_func_alpha_func.src.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029198, VkglTestCase_029198_1, VkglTestCase_029198_2);

#define VkglTestCase_029199_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb_fu"
#define VkglTestCase_029199_2 "nc_alpha_func.src.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029199, VkglTestCase_029199_1, VkglTestCase_029199_2);

#define VkglTestCase_029200_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029200_2 "_func_alpha_func.src.one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029200, VkglTestCase_029200_1, VkglTestCase_029200_2);

#define VkglTestCase_029201_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029201_2 "buffer.rgb_func_alpha_func.src.src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029201, VkglTestCase_029201_1, VkglTestCase_029201_2);

#define VkglTestCase_029202_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_029202_2 "ebuffer.rgb_func_alpha_func.src.src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029202, VkglTestCase_029202_1, VkglTestCase_029202_2);

#define VkglTestCase_029203_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029203_2 "ffer.rgb_func_alpha_func.src.src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029203, VkglTestCase_029203_1, VkglTestCase_029203_2);

#define VkglTestCase_029204_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029204_2 "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029204, VkglTestCase_029204_1, VkglTestCase_029204_2);

#define VkglTestCase_029205_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029205_2 "ffer.rgb_func_alpha_func.src.src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029205, VkglTestCase_029205_1, VkglTestCase_029205_2);

#define VkglTestCase_029206_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029206_2 "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029206, VkglTestCase_029206_1, VkglTestCase_029206_2);

#define VkglTestCase_029207_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029207_2 "ffer.rgb_func_alpha_func.src.src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029207, VkglTestCase_029207_1, VkglTestCase_029207_2);

#define VkglTestCase_029208_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029208_2 "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029208, VkglTestCase_029208_1, VkglTestCase_029208_2);

#define VkglTestCase_029209_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebu"
#define VkglTestCase_029209_2 "ffer.rgb_func_alpha_func.src.src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029209, VkglTestCase_029209_1, VkglTestCase_029209_2);

#define VkglTestCase_029210_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029210_2 "rgb_func_alpha_func.src.src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029210, VkglTestCase_029210_1, VkglTestCase_029210_2);

#define VkglTestCase_029211_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029211_2 "r.rgb_func_alpha_func.src.src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029211, VkglTestCase_029211_1, VkglTestCase_029211_2);

#define VkglTestCase_029212_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029212_2 "_func_alpha_func.src.src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029212, VkglTestCase_029212_1, VkglTestCase_029212_2);

#define VkglTestCase_029213_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffe"
#define VkglTestCase_029213_2 "r.rgb_func_alpha_func.src.src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029213, VkglTestCase_029213_1, VkglTestCase_029213_2);

#define VkglTestCase_029214_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer.rgb"
#define VkglTestCase_029214_2 "_func_alpha_func.src.src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029214, VkglTestCase_029214_1, VkglTestCase_029214_2);

#define VkglTestCase_029215_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029215_2 "rgb_func_alpha_func.src.src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_029215, VkglTestCase_029215_1, VkglTestCase_029215_2);

#define VkglTestCase_030143_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030143_2 "fbo_srgb.rgb_func_alpha_func.src.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030143, VkglTestCase_030143_1, VkglTestCase_030143_2);

#define VkglTestCase_030144_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030144_2 "fbo_srgb.rgb_func_alpha_func.src.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030144, VkglTestCase_030144_1, VkglTestCase_030144_2);

#define VkglTestCase_030145_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030145_2 "_srgb.rgb_func_alpha_func.src.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030145, VkglTestCase_030145_1, VkglTestCase_030145_2);

#define VkglTestCase_030146_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030146_2 ".rgb_func_alpha_func.src.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030146, VkglTestCase_030146_1, VkglTestCase_030146_2);

#define VkglTestCase_030147_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030147_2 "_srgb.rgb_func_alpha_func.src.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030147, VkglTestCase_030147_1, VkglTestCase_030147_2);

#define VkglTestCase_030148_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030148_2 ".rgb_func_alpha_func.src.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030148, VkglTestCase_030148_1, VkglTestCase_030148_2);

#define VkglTestCase_030149_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030149_2 "_srgb.rgb_func_alpha_func.src.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030149, VkglTestCase_030149_1, VkglTestCase_030149_2);

#define VkglTestCase_030150_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030150_2 ".rgb_func_alpha_func.src.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030150, VkglTestCase_030150_1, VkglTestCase_030150_2);

#define VkglTestCase_030151_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030151_2 "_srgb.rgb_func_alpha_func.src.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030151, VkglTestCase_030151_1, VkglTestCase_030151_2);

#define VkglTestCase_030152_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030152_2 ".rgb_func_alpha_func.src.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030152, VkglTestCase_030152_1, VkglTestCase_030152_2);

#define VkglTestCase_030153_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030153_2 "rgb.rgb_func_alpha_func.src.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030153, VkglTestCase_030153_1, VkglTestCase_030153_2);

#define VkglTestCase_030154_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030154_2 "gb_func_alpha_func.src.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030154, VkglTestCase_030154_1, VkglTestCase_030154_2);

#define VkglTestCase_030155_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030155_2 "rgb.rgb_func_alpha_func.src.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030155, VkglTestCase_030155_1, VkglTestCase_030155_2);

#define VkglTestCase_030156_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030156_2 "gb_func_alpha_func.src.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030156, VkglTestCase_030156_1, VkglTestCase_030156_2);

#define VkglTestCase_030157_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030157_2 "b.rgb_func_alpha_func.src.zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030157, VkglTestCase_030157_1, VkglTestCase_030157_2);

#define VkglTestCase_030158_1 "dEQP-GLES3.functional.fragment_ops.blend."
#define VkglTestCase_030158_2 "fbo_srgb.rgb_func_alpha_func.src.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030158, VkglTestCase_030158_1, VkglTestCase_030158_2);

#define VkglTestCase_030159_1 "dEQP-GLES3.functional.fragment_ops.blend"
#define VkglTestCase_030159_2 ".fbo_srgb.rgb_func_alpha_func.src.one_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030159, VkglTestCase_030159_1, VkglTestCase_030159_2);

#define VkglTestCase_030160_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030160_2 "o_srgb.rgb_func_alpha_func.src.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030160, VkglTestCase_030160_1, VkglTestCase_030160_2);

#define VkglTestCase_030161_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030161_2 "b.rgb_func_alpha_func.src.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030161, VkglTestCase_030161_1, VkglTestCase_030161_2);

#define VkglTestCase_030162_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030162_2 "o_srgb.rgb_func_alpha_func.src.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030162, VkglTestCase_030162_1, VkglTestCase_030162_2);

#define VkglTestCase_030163_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030163_2 "b.rgb_func_alpha_func.src.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030163, VkglTestCase_030163_1, VkglTestCase_030163_2);

#define VkglTestCase_030164_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030164_2 "o_srgb.rgb_func_alpha_func.src.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030164, VkglTestCase_030164_1, VkglTestCase_030164_2);

#define VkglTestCase_030165_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030165_2 "b.rgb_func_alpha_func.src.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030165, VkglTestCase_030165_1, VkglTestCase_030165_2);

#define VkglTestCase_030166_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030166_2 "o_srgb.rgb_func_alpha_func.src.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030166, VkglTestCase_030166_1, VkglTestCase_030166_2);

#define VkglTestCase_030167_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030167_2 "b.rgb_func_alpha_func.src.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030167, VkglTestCase_030167_1, VkglTestCase_030167_2);

#define VkglTestCase_030168_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030168_2 "rgb.rgb_func_alpha_func.src.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030168, VkglTestCase_030168_1, VkglTestCase_030168_2);

#define VkglTestCase_030169_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030169_2 "gb_func_alpha_func.src.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030169, VkglTestCase_030169_1, VkglTestCase_030169_2);

#define VkglTestCase_030170_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030170_2 "rgb.rgb_func_alpha_func.src.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030170, VkglTestCase_030170_1, VkglTestCase_030170_2);

#define VkglTestCase_030171_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030171_2 "gb_func_alpha_func.src.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030171, VkglTestCase_030171_1, VkglTestCase_030171_2);

#define VkglTestCase_030172_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030172_2 "b.rgb_func_alpha_func.src.one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030172, VkglTestCase_030172_1, VkglTestCase_030172_2);

#define VkglTestCase_030173_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030173_2 "_srgb.rgb_func_alpha_func.src.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030173, VkglTestCase_030173_1, VkglTestCase_030173_2);

#define VkglTestCase_030174_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030174_2 "o_srgb.rgb_func_alpha_func.src.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030174, VkglTestCase_030174_1, VkglTestCase_030174_2);

#define VkglTestCase_030175_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030175_2 "rgb.rgb_func_alpha_func.src.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030175, VkglTestCase_030175_1, VkglTestCase_030175_2);

#define VkglTestCase_030176_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030176_2 "gb_func_alpha_func.src.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030176, VkglTestCase_030176_1, VkglTestCase_030176_2);

#define VkglTestCase_030177_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030177_2 "rgb.rgb_func_alpha_func.src.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030177, VkglTestCase_030177_1, VkglTestCase_030177_2);

#define VkglTestCase_030178_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030178_2 "gb_func_alpha_func.src.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030178, VkglTestCase_030178_1, VkglTestCase_030178_2);

#define VkglTestCase_030179_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030179_2 "rgb.rgb_func_alpha_func.src.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030179, VkglTestCase_030179_1, VkglTestCase_030179_2);

#define VkglTestCase_030180_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030180_2 "gb_func_alpha_func.src.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030180, VkglTestCase_030180_1, VkglTestCase_030180_2);

#define VkglTestCase_030181_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030181_2 "rgb.rgb_func_alpha_func.src.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030181, VkglTestCase_030181_1, VkglTestCase_030181_2);

#define VkglTestCase_030182_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030182_2 "gb_func_alpha_func.src.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030182, VkglTestCase_030182_1, VkglTestCase_030182_2);

#define VkglTestCase_030183_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030183_2 ".rgb_func_alpha_func.src.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030183, VkglTestCase_030183_1, VkglTestCase_030183_2);

#define VkglTestCase_030184_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030184_2 "func_alpha_func.src.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030184, VkglTestCase_030184_1, VkglTestCase_030184_2);

#define VkglTestCase_030185_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030185_2 ".rgb_func_alpha_func.src.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030185, VkglTestCase_030185_1, VkglTestCase_030185_2);

#define VkglTestCase_030186_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030186_2 "func_alpha_func.src.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030186, VkglTestCase_030186_1, VkglTestCase_030186_2);

#define VkglTestCase_030187_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030187_2 "gb_func_alpha_func.src.src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030187, VkglTestCase_030187_1, VkglTestCase_030187_2);

#define VkglTestCase_030188_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030188_2 ".rgb_func_alpha_func.src.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030188, VkglTestCase_030188_1, VkglTestCase_030188_2);

#define VkglTestCase_030189_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030189_2 "b.rgb_func_alpha_func.src.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030189, VkglTestCase_030189_1, VkglTestCase_030189_2);

#define VkglTestCase_030190_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030190_2 "gb_func_alpha_func.src.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030190, VkglTestCase_030190_1, VkglTestCase_030190_2);

#define VkglTestCase_030191_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030191_2 "nc_alpha_func.src.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030191, VkglTestCase_030191_1, VkglTestCase_030191_2);

#define VkglTestCase_030192_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030192_2 "gb_func_alpha_func.src.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030192, VkglTestCase_030192_1, VkglTestCase_030192_2);

#define VkglTestCase_030193_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030193_2 "nc_alpha_func.src.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030193, VkglTestCase_030193_1, VkglTestCase_030193_2);

#define VkglTestCase_030194_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030194_2 "gb_func_alpha_func.src.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030194, VkglTestCase_030194_1, VkglTestCase_030194_2);

#define VkglTestCase_030195_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030195_2 "nc_alpha_func.src.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030195, VkglTestCase_030195_1, VkglTestCase_030195_2);

#define VkglTestCase_030196_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030196_2 "gb_func_alpha_func.src.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030196, VkglTestCase_030196_1, VkglTestCase_030196_2);

#define VkglTestCase_030197_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030197_2 "nc_alpha_func.src.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030197, VkglTestCase_030197_1, VkglTestCase_030197_2);

#define VkglTestCase_030198_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030198_2 "func_alpha_func.src.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030198, VkglTestCase_030198_1, VkglTestCase_030198_2);

#define VkglTestCase_030199_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030199_2 "alpha_func.src.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030199, VkglTestCase_030199_1, VkglTestCase_030199_2);

#define VkglTestCase_030200_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030200_2 "func_alpha_func.src.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030200, VkglTestCase_030200_1, VkglTestCase_030200_2);

#define VkglTestCase_030201_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030201_2 "alpha_func.src.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030201, VkglTestCase_030201_1, VkglTestCase_030201_2);

#define VkglTestCase_030202_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030202_2 "nc_alpha_func.src.one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030202, VkglTestCase_030202_1, VkglTestCase_030202_2);

#define VkglTestCase_030203_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030203_2 "_srgb.rgb_func_alpha_func.src.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030203, VkglTestCase_030203_1, VkglTestCase_030203_2);

#define VkglTestCase_030204_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030204_2 "o_srgb.rgb_func_alpha_func.src.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030204, VkglTestCase_030204_1, VkglTestCase_030204_2);

#define VkglTestCase_030205_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030205_2 "rgb.rgb_func_alpha_func.src.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030205, VkglTestCase_030205_1, VkglTestCase_030205_2);

#define VkglTestCase_030206_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030206_2 "gb_func_alpha_func.src.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030206, VkglTestCase_030206_1, VkglTestCase_030206_2);

#define VkglTestCase_030207_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030207_2 "rgb.rgb_func_alpha_func.src.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030207, VkglTestCase_030207_1, VkglTestCase_030207_2);

#define VkglTestCase_030208_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030208_2 "gb_func_alpha_func.src.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030208, VkglTestCase_030208_1, VkglTestCase_030208_2);

#define VkglTestCase_030209_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030209_2 "rgb.rgb_func_alpha_func.src.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030209, VkglTestCase_030209_1, VkglTestCase_030209_2);

#define VkglTestCase_030210_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030210_2 "gb_func_alpha_func.src.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030210, VkglTestCase_030210_1, VkglTestCase_030210_2);

#define VkglTestCase_030211_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030211_2 "rgb.rgb_func_alpha_func.src.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030211, VkglTestCase_030211_1, VkglTestCase_030211_2);

#define VkglTestCase_030212_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030212_2 "gb_func_alpha_func.src.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030212, VkglTestCase_030212_1, VkglTestCase_030212_2);

#define VkglTestCase_030213_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030213_2 ".rgb_func_alpha_func.src.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030213, VkglTestCase_030213_1, VkglTestCase_030213_2);

#define VkglTestCase_030214_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030214_2 "func_alpha_func.src.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030214, VkglTestCase_030214_1, VkglTestCase_030214_2);

#define VkglTestCase_030215_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030215_2 ".rgb_func_alpha_func.src.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030215, VkglTestCase_030215_1, VkglTestCase_030215_2);

#define VkglTestCase_030216_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030216_2 "func_alpha_func.src.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030216, VkglTestCase_030216_1, VkglTestCase_030216_2);

#define VkglTestCase_030217_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030217_2 "gb_func_alpha_func.src.dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030217, VkglTestCase_030217_1, VkglTestCase_030217_2);

#define VkglTestCase_030218_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030218_2 ".rgb_func_alpha_func.src.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030218, VkglTestCase_030218_1, VkglTestCase_030218_2);

#define VkglTestCase_030219_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030219_2 "b.rgb_func_alpha_func.src.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030219, VkglTestCase_030219_1, VkglTestCase_030219_2);

#define VkglTestCase_030220_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030220_2 "gb_func_alpha_func.src.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030220, VkglTestCase_030220_1, VkglTestCase_030220_2);

#define VkglTestCase_030221_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030221_2 "nc_alpha_func.src.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030221, VkglTestCase_030221_1, VkglTestCase_030221_2);

#define VkglTestCase_030222_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030222_2 "gb_func_alpha_func.src.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030222, VkglTestCase_030222_1, VkglTestCase_030222_2);

#define VkglTestCase_030223_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030223_2 "nc_alpha_func.src.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030223, VkglTestCase_030223_1, VkglTestCase_030223_2);

#define VkglTestCase_030224_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030224_2 "gb_func_alpha_func.src.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030224, VkglTestCase_030224_1, VkglTestCase_030224_2);

#define VkglTestCase_030225_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030225_2 "nc_alpha_func.src.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030225, VkglTestCase_030225_1, VkglTestCase_030225_2);

#define VkglTestCase_030226_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030226_2 "gb_func_alpha_func.src.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030226, VkglTestCase_030226_1, VkglTestCase_030226_2);

#define VkglTestCase_030227_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030227_2 "nc_alpha_func.src.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030227, VkglTestCase_030227_1, VkglTestCase_030227_2);

#define VkglTestCase_030228_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030228_2 "func_alpha_func.src.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030228, VkglTestCase_030228_1, VkglTestCase_030228_2);

#define VkglTestCase_030229_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030229_2 "alpha_func.src.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030229, VkglTestCase_030229_1, VkglTestCase_030229_2);

#define VkglTestCase_030230_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030230_2 "func_alpha_func.src.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030230, VkglTestCase_030230_1, VkglTestCase_030230_2);

#define VkglTestCase_030231_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030231_2 "alpha_func.src.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030231, VkglTestCase_030231_1, VkglTestCase_030231_2);

#define VkglTestCase_030232_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030232_2 "nc_alpha_func.src.one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030232, VkglTestCase_030232_1, VkglTestCase_030232_2);

#define VkglTestCase_030233_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030233_2 "_srgb.rgb_func_alpha_func.src.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030233, VkglTestCase_030233_1, VkglTestCase_030233_2);

#define VkglTestCase_030234_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030234_2 "o_srgb.rgb_func_alpha_func.src.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030234, VkglTestCase_030234_1, VkglTestCase_030234_2);

#define VkglTestCase_030235_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030235_2 "rgb.rgb_func_alpha_func.src.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030235, VkglTestCase_030235_1, VkglTestCase_030235_2);

#define VkglTestCase_030236_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030236_2 "gb_func_alpha_func.src.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030236, VkglTestCase_030236_1, VkglTestCase_030236_2);

#define VkglTestCase_030237_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030237_2 "rgb.rgb_func_alpha_func.src.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030237, VkglTestCase_030237_1, VkglTestCase_030237_2);

#define VkglTestCase_030238_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030238_2 "gb_func_alpha_func.src.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030238, VkglTestCase_030238_1, VkglTestCase_030238_2);

#define VkglTestCase_030239_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030239_2 "rgb.rgb_func_alpha_func.src.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030239, VkglTestCase_030239_1, VkglTestCase_030239_2);

#define VkglTestCase_030240_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030240_2 "gb_func_alpha_func.src.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030240, VkglTestCase_030240_1, VkglTestCase_030240_2);

#define VkglTestCase_030241_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030241_2 "rgb.rgb_func_alpha_func.src.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030241, VkglTestCase_030241_1, VkglTestCase_030241_2);

#define VkglTestCase_030242_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030242_2 "gb_func_alpha_func.src.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030242, VkglTestCase_030242_1, VkglTestCase_030242_2);

#define VkglTestCase_030243_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030243_2 ".rgb_func_alpha_func.src.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030243, VkglTestCase_030243_1, VkglTestCase_030243_2);

#define VkglTestCase_030244_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030244_2 "func_alpha_func.src.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030244, VkglTestCase_030244_1, VkglTestCase_030244_2);

#define VkglTestCase_030245_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030245_2 ".rgb_func_alpha_func.src.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030245, VkglTestCase_030245_1, VkglTestCase_030245_2);

#define VkglTestCase_030246_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030246_2 "func_alpha_func.src.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030246, VkglTestCase_030246_1, VkglTestCase_030246_2);

#define VkglTestCase_030247_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030247_2 "gb_func_alpha_func.src.src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030247, VkglTestCase_030247_1, VkglTestCase_030247_2);

#define VkglTestCase_030248_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030248_2 ".rgb_func_alpha_func.src.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030248, VkglTestCase_030248_1, VkglTestCase_030248_2);

#define VkglTestCase_030249_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030249_2 "b.rgb_func_alpha_func.src.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030249, VkglTestCase_030249_1, VkglTestCase_030249_2);

#define VkglTestCase_030250_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030250_2 "gb_func_alpha_func.src.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030250, VkglTestCase_030250_1, VkglTestCase_030250_2);

#define VkglTestCase_030251_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030251_2 "nc_alpha_func.src.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030251, VkglTestCase_030251_1, VkglTestCase_030251_2);

#define VkglTestCase_030252_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030252_2 "gb_func_alpha_func.src.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030252, VkglTestCase_030252_1, VkglTestCase_030252_2);

#define VkglTestCase_030253_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030253_2 "nc_alpha_func.src.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030253, VkglTestCase_030253_1, VkglTestCase_030253_2);

#define VkglTestCase_030254_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030254_2 "gb_func_alpha_func.src.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030254, VkglTestCase_030254_1, VkglTestCase_030254_2);

#define VkglTestCase_030255_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030255_2 "nc_alpha_func.src.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030255, VkglTestCase_030255_1, VkglTestCase_030255_2);

#define VkglTestCase_030256_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030256_2 "gb_func_alpha_func.src.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030256, VkglTestCase_030256_1, VkglTestCase_030256_2);

#define VkglTestCase_030257_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030257_2 "nc_alpha_func.src.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030257, VkglTestCase_030257_1, VkglTestCase_030257_2);

#define VkglTestCase_030258_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030258_2 "func_alpha_func.src.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030258, VkglTestCase_030258_1, VkglTestCase_030258_2);

#define VkglTestCase_030259_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030259_2 "alpha_func.src.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030259, VkglTestCase_030259_1, VkglTestCase_030259_2);

#define VkglTestCase_030260_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030260_2 "func_alpha_func.src.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030260, VkglTestCase_030260_1, VkglTestCase_030260_2);

#define VkglTestCase_030261_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030261_2 "alpha_func.src.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030261, VkglTestCase_030261_1, VkglTestCase_030261_2);

#define VkglTestCase_030262_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030262_2 "nc_alpha_func.src.one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030262, VkglTestCase_030262_1, VkglTestCase_030262_2);

#define VkglTestCase_030263_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo"
#define VkglTestCase_030263_2 "_srgb.rgb_func_alpha_func.src.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030263, VkglTestCase_030263_1, VkglTestCase_030263_2);

#define VkglTestCase_030264_1 "dEQP-GLES3.functional.fragment_ops.blend.fb"
#define VkglTestCase_030264_2 "o_srgb.rgb_func_alpha_func.src.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030264, VkglTestCase_030264_1, VkglTestCase_030264_2);

#define VkglTestCase_030265_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030265_2 "rgb.rgb_func_alpha_func.src.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030265, VkglTestCase_030265_1, VkglTestCase_030265_2);

#define VkglTestCase_030266_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030266_2 "gb_func_alpha_func.src.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030266, VkglTestCase_030266_1, VkglTestCase_030266_2);

#define VkglTestCase_030267_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030267_2 "rgb.rgb_func_alpha_func.src.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030267, VkglTestCase_030267_1, VkglTestCase_030267_2);

#define VkglTestCase_030268_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030268_2 "gb_func_alpha_func.src.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030268, VkglTestCase_030268_1, VkglTestCase_030268_2);

#define VkglTestCase_030269_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030269_2 "rgb.rgb_func_alpha_func.src.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030269, VkglTestCase_030269_1, VkglTestCase_030269_2);

#define VkglTestCase_030270_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030270_2 "gb_func_alpha_func.src.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030270, VkglTestCase_030270_1, VkglTestCase_030270_2);

#define VkglTestCase_030271_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030271_2 "rgb.rgb_func_alpha_func.src.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030271, VkglTestCase_030271_1, VkglTestCase_030271_2);

#define VkglTestCase_030272_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030272_2 "gb_func_alpha_func.src.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030272, VkglTestCase_030272_1, VkglTestCase_030272_2);

#define VkglTestCase_030273_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030273_2 ".rgb_func_alpha_func.src.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030273, VkglTestCase_030273_1, VkglTestCase_030273_2);

#define VkglTestCase_030274_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030274_2 "func_alpha_func.src.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030274, VkglTestCase_030274_1, VkglTestCase_030274_2);

#define VkglTestCase_030275_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030275_2 ".rgb_func_alpha_func.src.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030275, VkglTestCase_030275_1, VkglTestCase_030275_2);

#define VkglTestCase_030276_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030276_2 "func_alpha_func.src.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030276, VkglTestCase_030276_1, VkglTestCase_030276_2);

#define VkglTestCase_030277_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030277_2 "gb_func_alpha_func.src.dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030277, VkglTestCase_030277_1, VkglTestCase_030277_2);

#define VkglTestCase_030278_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030278_2 ".rgb_func_alpha_func.src.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030278, VkglTestCase_030278_1, VkglTestCase_030278_2);

#define VkglTestCase_030279_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030279_2 "b.rgb_func_alpha_func.src.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030279, VkglTestCase_030279_1, VkglTestCase_030279_2);

#define VkglTestCase_030280_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030280_2 "gb_func_alpha_func.src.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030280, VkglTestCase_030280_1, VkglTestCase_030280_2);

#define VkglTestCase_030281_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030281_2 "nc_alpha_func.src.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030281, VkglTestCase_030281_1, VkglTestCase_030281_2);

#define VkglTestCase_030282_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030282_2 "gb_func_alpha_func.src.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030282, VkglTestCase_030282_1, VkglTestCase_030282_2);

#define VkglTestCase_030283_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030283_2 "nc_alpha_func.src.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030283, VkglTestCase_030283_1, VkglTestCase_030283_2);

#define VkglTestCase_030284_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030284_2 "gb_func_alpha_func.src.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030284, VkglTestCase_030284_1, VkglTestCase_030284_2);

#define VkglTestCase_030285_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030285_2 "nc_alpha_func.src.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030285, VkglTestCase_030285_1, VkglTestCase_030285_2);

#define VkglTestCase_030286_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030286_2 "gb_func_alpha_func.src.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030286, VkglTestCase_030286_1, VkglTestCase_030286_2);

#define VkglTestCase_030287_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030287_2 "nc_alpha_func.src.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030287, VkglTestCase_030287_1, VkglTestCase_030287_2);

#define VkglTestCase_030288_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030288_2 "func_alpha_func.src.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030288, VkglTestCase_030288_1, VkglTestCase_030288_2);

#define VkglTestCase_030289_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030289_2 "alpha_func.src.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030289, VkglTestCase_030289_1, VkglTestCase_030289_2);

#define VkglTestCase_030290_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030290_2 "func_alpha_func.src.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030290, VkglTestCase_030290_1, VkglTestCase_030290_2);

#define VkglTestCase_030291_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030291_2 "alpha_func.src.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030291, VkglTestCase_030291_1, VkglTestCase_030291_2);

#define VkglTestCase_030292_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030292_2 "nc_alpha_func.src.one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030292, VkglTestCase_030292_1, VkglTestCase_030292_2);

#define VkglTestCase_030293_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030293_2 "rgb.rgb_func_alpha_func.src.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030293, VkglTestCase_030293_1, VkglTestCase_030293_2);

#define VkglTestCase_030294_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030294_2 "rgb.rgb_func_alpha_func.src.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030294, VkglTestCase_030294_1, VkglTestCase_030294_2);

#define VkglTestCase_030295_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030295_2 ".rgb_func_alpha_func.src.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030295, VkglTestCase_030295_1, VkglTestCase_030295_2);

#define VkglTestCase_030296_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030296_2 "func_alpha_func.src.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030296, VkglTestCase_030296_1, VkglTestCase_030296_2);

#define VkglTestCase_030297_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030297_2 ".rgb_func_alpha_func.src.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030297, VkglTestCase_030297_1, VkglTestCase_030297_2);

#define VkglTestCase_030298_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030298_2 "func_alpha_func.src.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030298, VkglTestCase_030298_1, VkglTestCase_030298_2);

#define VkglTestCase_030299_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030299_2 ".rgb_func_alpha_func.src.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030299, VkglTestCase_030299_1, VkglTestCase_030299_2);

#define VkglTestCase_030300_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030300_2 "func_alpha_func.src.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030300, VkglTestCase_030300_1, VkglTestCase_030300_2);

#define VkglTestCase_030301_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030301_2 ".rgb_func_alpha_func.src.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030301, VkglTestCase_030301_1, VkglTestCase_030301_2);

#define VkglTestCase_030302_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030302_2 "func_alpha_func.src.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030302, VkglTestCase_030302_1, VkglTestCase_030302_2);

#define VkglTestCase_030303_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030303_2 "gb_func_alpha_func.src.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030303, VkglTestCase_030303_1, VkglTestCase_030303_2);

#define VkglTestCase_030304_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030304_2 "nc_alpha_func.src.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030304, VkglTestCase_030304_1, VkglTestCase_030304_2);

#define VkglTestCase_030305_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030305_2 "gb_func_alpha_func.src.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030305, VkglTestCase_030305_1, VkglTestCase_030305_2);

#define VkglTestCase_030306_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030306_2 "nc_alpha_func.src.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030306, VkglTestCase_030306_1, VkglTestCase_030306_2);

#define VkglTestCase_030307_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030307_2 "_func_alpha_func.src.constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030307, VkglTestCase_030307_1, VkglTestCase_030307_2);

#define VkglTestCase_030308_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030308_2 "gb_func_alpha_func.src.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030308, VkglTestCase_030308_1, VkglTestCase_030308_2);

#define VkglTestCase_030309_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030309_2 "gb_func_alpha_func.src.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030309, VkglTestCase_030309_1, VkglTestCase_030309_2);

#define VkglTestCase_030310_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030310_2 "func_alpha_func.src.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030310, VkglTestCase_030310_1, VkglTestCase_030310_2);

#define VkglTestCase_030311_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030311_2 "alpha_func.src.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030311, VkglTestCase_030311_1, VkglTestCase_030311_2);

#define VkglTestCase_030312_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030312_2 "func_alpha_func.src.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030312, VkglTestCase_030312_1, VkglTestCase_030312_2);

#define VkglTestCase_030313_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030313_2 "alpha_func.src.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030313, VkglTestCase_030313_1, VkglTestCase_030313_2);

#define VkglTestCase_030314_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030314_2 "func_alpha_func.src.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030314, VkglTestCase_030314_1, VkglTestCase_030314_2);

#define VkglTestCase_030315_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030315_2 "alpha_func.src.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030315, VkglTestCase_030315_1, VkglTestCase_030315_2);

#define VkglTestCase_030316_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030316_2 "func_alpha_func.src.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030316, VkglTestCase_030316_1, VkglTestCase_030316_2);

#define VkglTestCase_030317_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030317_2 "alpha_func.src.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030317, VkglTestCase_030317_1, VkglTestCase_030317_2);

#define VkglTestCase_030318_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030318_2 "nc_alpha_func.src.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030318, VkglTestCase_030318_1, VkglTestCase_030318_2);

#define VkglTestCase_030319_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030319_2 "pha_func.src.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030319, VkglTestCase_030319_1, VkglTestCase_030319_2);

#define VkglTestCase_030320_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030320_2 "nc_alpha_func.src.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030320, VkglTestCase_030320_1, VkglTestCase_030320_2);

#define VkglTestCase_030321_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030321_2 "pha_func.src.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030321, VkglTestCase_030321_1, VkglTestCase_030321_2);

#define VkglTestCase_030322_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030322_2 "_alpha_func.src.one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030322, VkglTestCase_030322_1, VkglTestCase_030322_2);

#define VkglTestCase_030323_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030323_2 "rgb.rgb_func_alpha_func.src.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030323, VkglTestCase_030323_1, VkglTestCase_030323_2);

#define VkglTestCase_030324_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_s"
#define VkglTestCase_030324_2 "rgb.rgb_func_alpha_func.src.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030324, VkglTestCase_030324_1, VkglTestCase_030324_2);

#define VkglTestCase_030325_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030325_2 ".rgb_func_alpha_func.src.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030325, VkglTestCase_030325_1, VkglTestCase_030325_2);

#define VkglTestCase_030326_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030326_2 "func_alpha_func.src.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030326, VkglTestCase_030326_1, VkglTestCase_030326_2);

#define VkglTestCase_030327_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030327_2 ".rgb_func_alpha_func.src.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030327, VkglTestCase_030327_1, VkglTestCase_030327_2);

#define VkglTestCase_030328_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030328_2 "func_alpha_func.src.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030328, VkglTestCase_030328_1, VkglTestCase_030328_2);

#define VkglTestCase_030329_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030329_2 ".rgb_func_alpha_func.src.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030329, VkglTestCase_030329_1, VkglTestCase_030329_2);

#define VkglTestCase_030330_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030330_2 "func_alpha_func.src.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030330, VkglTestCase_030330_1, VkglTestCase_030330_2);

#define VkglTestCase_030331_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030331_2 ".rgb_func_alpha_func.src.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030331, VkglTestCase_030331_1, VkglTestCase_030331_2);

#define VkglTestCase_030332_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030332_2 "func_alpha_func.src.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030332, VkglTestCase_030332_1, VkglTestCase_030332_2);

#define VkglTestCase_030333_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030333_2 "gb_func_alpha_func.src.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030333, VkglTestCase_030333_1, VkglTestCase_030333_2);

#define VkglTestCase_030334_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030334_2 "nc_alpha_func.src.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030334, VkglTestCase_030334_1, VkglTestCase_030334_2);

#define VkglTestCase_030335_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030335_2 "gb_func_alpha_func.src.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030335, VkglTestCase_030335_1, VkglTestCase_030335_2);

#define VkglTestCase_030336_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030336_2 "nc_alpha_func.src.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030336, VkglTestCase_030336_1, VkglTestCase_030336_2);

#define VkglTestCase_030337_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030337_2 "_func_alpha_func.src.constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030337, VkglTestCase_030337_1, VkglTestCase_030337_2);

#define VkglTestCase_030338_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030338_2 "gb_func_alpha_func.src.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030338, VkglTestCase_030338_1, VkglTestCase_030338_2);

#define VkglTestCase_030339_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030339_2 "gb_func_alpha_func.src.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030339, VkglTestCase_030339_1, VkglTestCase_030339_2);

#define VkglTestCase_030340_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030340_2 "func_alpha_func.src.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030340, VkglTestCase_030340_1, VkglTestCase_030340_2);

#define VkglTestCase_030341_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030341_2 "alpha_func.src.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030341, VkglTestCase_030341_1, VkglTestCase_030341_2);

#define VkglTestCase_030342_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030342_2 "func_alpha_func.src.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030342, VkglTestCase_030342_1, VkglTestCase_030342_2);

#define VkglTestCase_030343_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030343_2 "alpha_func.src.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030343, VkglTestCase_030343_1, VkglTestCase_030343_2);

#define VkglTestCase_030344_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030344_2 "func_alpha_func.src.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030344, VkglTestCase_030344_1, VkglTestCase_030344_2);

#define VkglTestCase_030345_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030345_2 "alpha_func.src.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030345, VkglTestCase_030345_1, VkglTestCase_030345_2);

#define VkglTestCase_030346_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_"
#define VkglTestCase_030346_2 "func_alpha_func.src.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030346, VkglTestCase_030346_1, VkglTestCase_030346_2);

#define VkglTestCase_030347_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_"
#define VkglTestCase_030347_2 "alpha_func.src.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030347, VkglTestCase_030347_1, VkglTestCase_030347_2);

#define VkglTestCase_030348_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030348_2 "nc_alpha_func.src.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030348, VkglTestCase_030348_1, VkglTestCase_030348_2);

#define VkglTestCase_030349_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030349_2 "pha_func.src.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030349, VkglTestCase_030349_1, VkglTestCase_030349_2);

#define VkglTestCase_030350_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030350_2 "nc_alpha_func.src.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030350, VkglTestCase_030350_1, VkglTestCase_030350_2);

#define VkglTestCase_030351_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func_al"
#define VkglTestCase_030351_2 "pha_func.src.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030351, VkglTestCase_030351_1, VkglTestCase_030351_2);

#define VkglTestCase_030352_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030352_2 "_alpha_func.src.one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030352, VkglTestCase_030352_1, VkglTestCase_030352_2);

#define VkglTestCase_030353_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030353_2 "b.rgb_func_alpha_func.src.src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030353, VkglTestCase_030353_1, VkglTestCase_030353_2);

#define VkglTestCase_030354_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srg"
#define VkglTestCase_030354_2 "b.rgb_func_alpha_func.src.src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030354, VkglTestCase_030354_1, VkglTestCase_030354_2);

#define VkglTestCase_030355_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030355_2 "gb_func_alpha_func.src.src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030355, VkglTestCase_030355_1, VkglTestCase_030355_2);

#define VkglTestCase_030356_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030356_2 "nc_alpha_func.src.src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030356, VkglTestCase_030356_1, VkglTestCase_030356_2);

#define VkglTestCase_030357_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030357_2 "gb_func_alpha_func.src.src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030357, VkglTestCase_030357_1, VkglTestCase_030357_2);

#define VkglTestCase_030358_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030358_2 "nc_alpha_func.src.src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030358, VkglTestCase_030358_1, VkglTestCase_030358_2);

#define VkglTestCase_030359_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030359_2 "gb_func_alpha_func.src.src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030359, VkglTestCase_030359_1, VkglTestCase_030359_2);

#define VkglTestCase_030360_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030360_2 "nc_alpha_func.src.src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030360, VkglTestCase_030360_1, VkglTestCase_030360_2);

#define VkglTestCase_030361_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030361_2 "gb_func_alpha_func.src.src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030361, VkglTestCase_030361_1, VkglTestCase_030361_2);

#define VkglTestCase_030362_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_fu"
#define VkglTestCase_030362_2 "nc_alpha_func.src.src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030362, VkglTestCase_030362_1, VkglTestCase_030362_2);

#define VkglTestCase_030363_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030363_2 "_func_alpha_func.src.src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030363, VkglTestCase_030363_1, VkglTestCase_030363_2);

#define VkglTestCase_030364_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030364_2 "_alpha_func.src.src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030364, VkglTestCase_030364_1, VkglTestCase_030364_2);

#define VkglTestCase_030365_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb"
#define VkglTestCase_030365_2 "_func_alpha_func.src.src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030365, VkglTestCase_030365_1, VkglTestCase_030365_2);

#define VkglTestCase_030366_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_func"
#define VkglTestCase_030366_2 "_alpha_func.src.src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030366, VkglTestCase_030366_1, VkglTestCase_030366_2);

#define VkglTestCase_030367_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_f"
#define VkglTestCase_030367_2 "unc_alpha_func.src.src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_030367, VkglTestCase_030367_1, VkglTestCase_030367_2);
