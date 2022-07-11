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
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012007_1 "dEQP-GLES2.functional.fragment_ops.bl"
#define VkglTestCase_012007_2 "end.rgb_func_alpha_func.dst.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012007, VkglTestCase_012007_1, VkglTestCase_012007_2);

#define VkglTestCase_012008_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_012008_2 "lend.rgb_func_alpha_func.dst.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012008, VkglTestCase_012008_1, VkglTestCase_012008_2);

#define VkglTestCase_012009_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012009_2 "d.rgb_func_alpha_func.dst.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012009, VkglTestCase_012009_1, VkglTestCase_012009_2);

#define VkglTestCase_012010_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012010_2 "_func_alpha_func.dst.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012010, VkglTestCase_012010_1, VkglTestCase_012010_2);

#define VkglTestCase_012011_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012011_2 "d.rgb_func_alpha_func.dst.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012011, VkglTestCase_012011_1, VkglTestCase_012011_2);

#define VkglTestCase_012012_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012012_2 "_func_alpha_func.dst.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012012, VkglTestCase_012012_1, VkglTestCase_012012_2);

#define VkglTestCase_012013_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012013_2 "d.rgb_func_alpha_func.dst.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012013, VkglTestCase_012013_1, VkglTestCase_012013_2);

#define VkglTestCase_012014_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012014_2 "_func_alpha_func.dst.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012014, VkglTestCase_012014_1, VkglTestCase_012014_2);

#define VkglTestCase_012015_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012015_2 "d.rgb_func_alpha_func.dst.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012015, VkglTestCase_012015_1, VkglTestCase_012015_2);

#define VkglTestCase_012016_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012016_2 "_func_alpha_func.dst.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012016, VkglTestCase_012016_1, VkglTestCase_012016_2);

#define VkglTestCase_012017_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012017_2 "gb_func_alpha_func.dst.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012017, VkglTestCase_012017_1, VkglTestCase_012017_2);

#define VkglTestCase_012018_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012018_2 "nc_alpha_func.dst.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012018, VkglTestCase_012018_1, VkglTestCase_012018_2);

#define VkglTestCase_012019_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012019_2 "gb_func_alpha_func.dst.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012019, VkglTestCase_012019_1, VkglTestCase_012019_2);

#define VkglTestCase_012020_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012020_2 "nc_alpha_func.dst.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012020, VkglTestCase_012020_1, VkglTestCase_012020_2);

#define VkglTestCase_012021_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_012021_2 "lend.rgb_func_alpha_func.dst.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012021, VkglTestCase_012021_1, VkglTestCase_012021_2);

#define VkglTestCase_012022_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_012022_2 "lend.rgb_func_alpha_func.dst.one_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012022, VkglTestCase_012022_1, VkglTestCase_012022_2);

#define VkglTestCase_012023_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012023_2 "d.rgb_func_alpha_func.dst.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012023, VkglTestCase_012023_1, VkglTestCase_012023_2);

#define VkglTestCase_012024_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012024_2 "_func_alpha_func.dst.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012024, VkglTestCase_012024_1, VkglTestCase_012024_2);

#define VkglTestCase_012025_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012025_2 "d.rgb_func_alpha_func.dst.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012025, VkglTestCase_012025_1, VkglTestCase_012025_2);

#define VkglTestCase_012026_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012026_2 "_func_alpha_func.dst.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012026, VkglTestCase_012026_1, VkglTestCase_012026_2);

#define VkglTestCase_012027_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012027_2 "d.rgb_func_alpha_func.dst.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012027, VkglTestCase_012027_1, VkglTestCase_012027_2);

#define VkglTestCase_012028_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012028_2 "_func_alpha_func.dst.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012028, VkglTestCase_012028_1, VkglTestCase_012028_2);

#define VkglTestCase_012029_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012029_2 "d.rgb_func_alpha_func.dst.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012029, VkglTestCase_012029_1, VkglTestCase_012029_2);

#define VkglTestCase_012030_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012030_2 "_func_alpha_func.dst.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012030, VkglTestCase_012030_1, VkglTestCase_012030_2);

#define VkglTestCase_012031_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_012031_2 "rgb_func_alpha_func.dst.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012031, VkglTestCase_012031_1, VkglTestCase_012031_2);

#define VkglTestCase_012032_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_012032_2 "unc_alpha_func.dst.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012032, VkglTestCase_012032_1, VkglTestCase_012032_2);

#define VkglTestCase_012033_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_012033_2 "rgb_func_alpha_func.dst.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012033, VkglTestCase_012033_1, VkglTestCase_012033_2);

#define VkglTestCase_012034_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_012034_2 "unc_alpha_func.dst.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012034, VkglTestCase_012034_1, VkglTestCase_012034_2);

#define VkglTestCase_012035_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012035_2 "d.rgb_func_alpha_func.dst.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012035, VkglTestCase_012035_1, VkglTestCase_012035_2);

#define VkglTestCase_012036_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012036_2 "d.rgb_func_alpha_func.dst.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012036, VkglTestCase_012036_1, VkglTestCase_012036_2);

#define VkglTestCase_012037_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012037_2 "gb_func_alpha_func.dst.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012037, VkglTestCase_012037_1, VkglTestCase_012037_2);

#define VkglTestCase_012038_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012038_2 "nc_alpha_func.dst.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012038, VkglTestCase_012038_1, VkglTestCase_012038_2);

#define VkglTestCase_012039_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012039_2 "gb_func_alpha_func.dst.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012039, VkglTestCase_012039_1, VkglTestCase_012039_2);

#define VkglTestCase_012040_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012040_2 "nc_alpha_func.dst.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012040, VkglTestCase_012040_1, VkglTestCase_012040_2);

#define VkglTestCase_012041_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012041_2 "gb_func_alpha_func.dst.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012041, VkglTestCase_012041_1, VkglTestCase_012041_2);

#define VkglTestCase_012042_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012042_2 "nc_alpha_func.dst.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012042, VkglTestCase_012042_1, VkglTestCase_012042_2);

#define VkglTestCase_012043_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012043_2 "gb_func_alpha_func.dst.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012043, VkglTestCase_012043_1, VkglTestCase_012043_2);

#define VkglTestCase_012044_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012044_2 "nc_alpha_func.dst.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012044, VkglTestCase_012044_1, VkglTestCase_012044_2);

#define VkglTestCase_012045_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012045_2 "_func_alpha_func.dst.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012045, VkglTestCase_012045_1, VkglTestCase_012045_2);

#define VkglTestCase_012046_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012046_2 "_alpha_func.dst.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012046, VkglTestCase_012046_1, VkglTestCase_012046_2);

#define VkglTestCase_012047_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012047_2 "_func_alpha_func.dst.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012047, VkglTestCase_012047_1, VkglTestCase_012047_2);

#define VkglTestCase_012048_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012048_2 "_alpha_func.dst.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012048, VkglTestCase_012048_1, VkglTestCase_012048_2);

#define VkglTestCase_012049_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012049_2 "_func_alpha_func.dst.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012049, VkglTestCase_012049_1, VkglTestCase_012049_2);

#define VkglTestCase_012050_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012050_2 "_func_alpha_func.dst.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012050, VkglTestCase_012050_1, VkglTestCase_012050_2);

#define VkglTestCase_012051_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012051_2 "nc_alpha_func.dst.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012051, VkglTestCase_012051_1, VkglTestCase_012051_2);

#define VkglTestCase_012052_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012052_2 "pha_func.dst.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012052, VkglTestCase_012052_1, VkglTestCase_012052_2);

#define VkglTestCase_012053_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012053_2 "nc_alpha_func.dst.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012053, VkglTestCase_012053_1, VkglTestCase_012053_2);

#define VkglTestCase_012054_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012054_2 "pha_func.dst.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012054, VkglTestCase_012054_1, VkglTestCase_012054_2);

#define VkglTestCase_012055_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012055_2 "nc_alpha_func.dst.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012055, VkglTestCase_012055_1, VkglTestCase_012055_2);

#define VkglTestCase_012056_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012056_2 "pha_func.dst.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012056, VkglTestCase_012056_1, VkglTestCase_012056_2);

#define VkglTestCase_012057_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012057_2 "nc_alpha_func.dst.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012057, VkglTestCase_012057_1, VkglTestCase_012057_2);

#define VkglTestCase_012058_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012058_2 "pha_func.dst.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012058, VkglTestCase_012058_1, VkglTestCase_012058_2);

#define VkglTestCase_012059_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012059_2 "_alpha_func.dst.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012059, VkglTestCase_012059_1, VkglTestCase_012059_2);

#define VkglTestCase_012060_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012060_2 "a_func.dst.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012060, VkglTestCase_012060_1, VkglTestCase_012060_2);

#define VkglTestCase_012061_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012061_2 "_alpha_func.dst.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012061, VkglTestCase_012061_1, VkglTestCase_012061_2);

#define VkglTestCase_012062_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012062_2 "a_func.dst.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012062, VkglTestCase_012062_1, VkglTestCase_012062_2);

#define VkglTestCase_012063_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012063_2 "d.rgb_func_alpha_func.dst.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012063, VkglTestCase_012063_1, VkglTestCase_012063_2);

#define VkglTestCase_012064_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012064_2 "d.rgb_func_alpha_func.dst.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012064, VkglTestCase_012064_1, VkglTestCase_012064_2);

#define VkglTestCase_012065_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012065_2 "gb_func_alpha_func.dst.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012065, VkglTestCase_012065_1, VkglTestCase_012065_2);

#define VkglTestCase_012066_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012066_2 "nc_alpha_func.dst.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012066, VkglTestCase_012066_1, VkglTestCase_012066_2);

#define VkglTestCase_012067_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012067_2 "gb_func_alpha_func.dst.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012067, VkglTestCase_012067_1, VkglTestCase_012067_2);

#define VkglTestCase_012068_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012068_2 "nc_alpha_func.dst.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012068, VkglTestCase_012068_1, VkglTestCase_012068_2);

#define VkglTestCase_012069_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012069_2 "gb_func_alpha_func.dst.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012069, VkglTestCase_012069_1, VkglTestCase_012069_2);

#define VkglTestCase_012070_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012070_2 "nc_alpha_func.dst.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012070, VkglTestCase_012070_1, VkglTestCase_012070_2);

#define VkglTestCase_012071_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012071_2 "gb_func_alpha_func.dst.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012071, VkglTestCase_012071_1, VkglTestCase_012071_2);

#define VkglTestCase_012072_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012072_2 "nc_alpha_func.dst.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012072, VkglTestCase_012072_1, VkglTestCase_012072_2);

#define VkglTestCase_012073_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012073_2 "_func_alpha_func.dst.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012073, VkglTestCase_012073_1, VkglTestCase_012073_2);

#define VkglTestCase_012074_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012074_2 "_alpha_func.dst.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012074, VkglTestCase_012074_1, VkglTestCase_012074_2);

#define VkglTestCase_012075_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012075_2 "_func_alpha_func.dst.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012075, VkglTestCase_012075_1, VkglTestCase_012075_2);

#define VkglTestCase_012076_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012076_2 "_alpha_func.dst.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012076, VkglTestCase_012076_1, VkglTestCase_012076_2);

#define VkglTestCase_012077_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012077_2 "_func_alpha_func.dst.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012077, VkglTestCase_012077_1, VkglTestCase_012077_2);

#define VkglTestCase_012078_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012078_2 "_func_alpha_func.dst.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012078, VkglTestCase_012078_1, VkglTestCase_012078_2);

#define VkglTestCase_012079_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012079_2 "nc_alpha_func.dst.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012079, VkglTestCase_012079_1, VkglTestCase_012079_2);

#define VkglTestCase_012080_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012080_2 "pha_func.dst.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012080, VkglTestCase_012080_1, VkglTestCase_012080_2);

#define VkglTestCase_012081_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012081_2 "nc_alpha_func.dst.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012081, VkglTestCase_012081_1, VkglTestCase_012081_2);

#define VkglTestCase_012082_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012082_2 "pha_func.dst.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012082, VkglTestCase_012082_1, VkglTestCase_012082_2);

#define VkglTestCase_012083_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012083_2 "nc_alpha_func.dst.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012083, VkglTestCase_012083_1, VkglTestCase_012083_2);

#define VkglTestCase_012084_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012084_2 "pha_func.dst.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012084, VkglTestCase_012084_1, VkglTestCase_012084_2);

#define VkglTestCase_012085_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012085_2 "nc_alpha_func.dst.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012085, VkglTestCase_012085_1, VkglTestCase_012085_2);

#define VkglTestCase_012086_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012086_2 "pha_func.dst.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012086, VkglTestCase_012086_1, VkglTestCase_012086_2);

#define VkglTestCase_012087_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012087_2 "_alpha_func.dst.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012087, VkglTestCase_012087_1, VkglTestCase_012087_2);

#define VkglTestCase_012088_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012088_2 "a_func.dst.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012088, VkglTestCase_012088_1, VkglTestCase_012088_2);

#define VkglTestCase_012089_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012089_2 "_alpha_func.dst.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012089, VkglTestCase_012089_1, VkglTestCase_012089_2);

#define VkglTestCase_012090_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012090_2 "a_func.dst.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012090, VkglTestCase_012090_1, VkglTestCase_012090_2);

#define VkglTestCase_012091_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012091_2 "d.rgb_func_alpha_func.dst.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012091, VkglTestCase_012091_1, VkglTestCase_012091_2);

#define VkglTestCase_012092_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012092_2 "d.rgb_func_alpha_func.dst.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012092, VkglTestCase_012092_1, VkglTestCase_012092_2);

#define VkglTestCase_012093_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012093_2 "gb_func_alpha_func.dst.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012093, VkglTestCase_012093_1, VkglTestCase_012093_2);

#define VkglTestCase_012094_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012094_2 "nc_alpha_func.dst.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012094, VkglTestCase_012094_1, VkglTestCase_012094_2);

#define VkglTestCase_012095_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012095_2 "gb_func_alpha_func.dst.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012095, VkglTestCase_012095_1, VkglTestCase_012095_2);

#define VkglTestCase_012096_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012096_2 "nc_alpha_func.dst.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012096, VkglTestCase_012096_1, VkglTestCase_012096_2);

#define VkglTestCase_012097_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012097_2 "gb_func_alpha_func.dst.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012097, VkglTestCase_012097_1, VkglTestCase_012097_2);

#define VkglTestCase_012098_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012098_2 "nc_alpha_func.dst.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012098, VkglTestCase_012098_1, VkglTestCase_012098_2);

#define VkglTestCase_012099_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012099_2 "gb_func_alpha_func.dst.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012099, VkglTestCase_012099_1, VkglTestCase_012099_2);

#define VkglTestCase_012100_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012100_2 "nc_alpha_func.dst.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012100, VkglTestCase_012100_1, VkglTestCase_012100_2);

#define VkglTestCase_012101_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012101_2 "_func_alpha_func.dst.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012101, VkglTestCase_012101_1, VkglTestCase_012101_2);

#define VkglTestCase_012102_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012102_2 "_alpha_func.dst.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012102, VkglTestCase_012102_1, VkglTestCase_012102_2);

#define VkglTestCase_012103_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012103_2 "_func_alpha_func.dst.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012103, VkglTestCase_012103_1, VkglTestCase_012103_2);

#define VkglTestCase_012104_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012104_2 "_alpha_func.dst.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012104, VkglTestCase_012104_1, VkglTestCase_012104_2);

#define VkglTestCase_012105_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012105_2 "_func_alpha_func.dst.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012105, VkglTestCase_012105_1, VkglTestCase_012105_2);

#define VkglTestCase_012106_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012106_2 "_func_alpha_func.dst.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012106, VkglTestCase_012106_1, VkglTestCase_012106_2);

#define VkglTestCase_012107_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012107_2 "nc_alpha_func.dst.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012107, VkglTestCase_012107_1, VkglTestCase_012107_2);

#define VkglTestCase_012108_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012108_2 "pha_func.dst.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012108, VkglTestCase_012108_1, VkglTestCase_012108_2);

#define VkglTestCase_012109_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012109_2 "nc_alpha_func.dst.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012109, VkglTestCase_012109_1, VkglTestCase_012109_2);

#define VkglTestCase_012110_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012110_2 "pha_func.dst.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012110, VkglTestCase_012110_1, VkglTestCase_012110_2);

#define VkglTestCase_012111_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012111_2 "nc_alpha_func.dst.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012111, VkglTestCase_012111_1, VkglTestCase_012111_2);

#define VkglTestCase_012112_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012112_2 "pha_func.dst.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012112, VkglTestCase_012112_1, VkglTestCase_012112_2);

#define VkglTestCase_012113_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012113_2 "nc_alpha_func.dst.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012113, VkglTestCase_012113_1, VkglTestCase_012113_2);

#define VkglTestCase_012114_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012114_2 "pha_func.dst.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012114, VkglTestCase_012114_1, VkglTestCase_012114_2);

#define VkglTestCase_012115_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012115_2 "_alpha_func.dst.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012115, VkglTestCase_012115_1, VkglTestCase_012115_2);

#define VkglTestCase_012116_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012116_2 "a_func.dst.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012116, VkglTestCase_012116_1, VkglTestCase_012116_2);

#define VkglTestCase_012117_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012117_2 "_alpha_func.dst.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012117, VkglTestCase_012117_1, VkglTestCase_012117_2);

#define VkglTestCase_012118_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012118_2 "a_func.dst.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012118, VkglTestCase_012118_1, VkglTestCase_012118_2);

#define VkglTestCase_012119_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012119_2 "d.rgb_func_alpha_func.dst.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012119, VkglTestCase_012119_1, VkglTestCase_012119_2);

#define VkglTestCase_012120_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_012120_2 "d.rgb_func_alpha_func.dst.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012120, VkglTestCase_012120_1, VkglTestCase_012120_2);

#define VkglTestCase_012121_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012121_2 "gb_func_alpha_func.dst.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012121, VkglTestCase_012121_1, VkglTestCase_012121_2);

#define VkglTestCase_012122_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012122_2 "nc_alpha_func.dst.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012122, VkglTestCase_012122_1, VkglTestCase_012122_2);

#define VkglTestCase_012123_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012123_2 "gb_func_alpha_func.dst.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012123, VkglTestCase_012123_1, VkglTestCase_012123_2);

#define VkglTestCase_012124_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012124_2 "nc_alpha_func.dst.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012124, VkglTestCase_012124_1, VkglTestCase_012124_2);

#define VkglTestCase_012125_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012125_2 "gb_func_alpha_func.dst.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012125, VkglTestCase_012125_1, VkglTestCase_012125_2);

#define VkglTestCase_012126_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012126_2 "nc_alpha_func.dst.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012126, VkglTestCase_012126_1, VkglTestCase_012126_2);

#define VkglTestCase_012127_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012127_2 "gb_func_alpha_func.dst.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012127, VkglTestCase_012127_1, VkglTestCase_012127_2);

#define VkglTestCase_012128_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012128_2 "nc_alpha_func.dst.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012128, VkglTestCase_012128_1, VkglTestCase_012128_2);

#define VkglTestCase_012129_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012129_2 "_func_alpha_func.dst.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012129, VkglTestCase_012129_1, VkglTestCase_012129_2);

#define VkglTestCase_012130_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012130_2 "_alpha_func.dst.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012130, VkglTestCase_012130_1, VkglTestCase_012130_2);

#define VkglTestCase_012131_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012131_2 "_func_alpha_func.dst.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012131, VkglTestCase_012131_1, VkglTestCase_012131_2);

#define VkglTestCase_012132_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012132_2 "_alpha_func.dst.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012132, VkglTestCase_012132_1, VkglTestCase_012132_2);

#define VkglTestCase_012133_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012133_2 "_func_alpha_func.dst.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012133, VkglTestCase_012133_1, VkglTestCase_012133_2);

#define VkglTestCase_012134_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012134_2 "_func_alpha_func.dst.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012134, VkglTestCase_012134_1, VkglTestCase_012134_2);

#define VkglTestCase_012135_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012135_2 "nc_alpha_func.dst.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012135, VkglTestCase_012135_1, VkglTestCase_012135_2);

#define VkglTestCase_012136_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012136_2 "pha_func.dst.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012136, VkglTestCase_012136_1, VkglTestCase_012136_2);

#define VkglTestCase_012137_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012137_2 "nc_alpha_func.dst.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012137, VkglTestCase_012137_1, VkglTestCase_012137_2);

#define VkglTestCase_012138_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012138_2 "pha_func.dst.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012138, VkglTestCase_012138_1, VkglTestCase_012138_2);

#define VkglTestCase_012139_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012139_2 "nc_alpha_func.dst.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012139, VkglTestCase_012139_1, VkglTestCase_012139_2);

#define VkglTestCase_012140_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012140_2 "pha_func.dst.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012140, VkglTestCase_012140_1, VkglTestCase_012140_2);

#define VkglTestCase_012141_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012141_2 "nc_alpha_func.dst.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012141, VkglTestCase_012141_1, VkglTestCase_012141_2);

#define VkglTestCase_012142_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012142_2 "pha_func.dst.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012142, VkglTestCase_012142_1, VkglTestCase_012142_2);

#define VkglTestCase_012143_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012143_2 "_alpha_func.dst.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012143, VkglTestCase_012143_1, VkglTestCase_012143_2);

#define VkglTestCase_012144_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012144_2 "a_func.dst.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012144, VkglTestCase_012144_1, VkglTestCase_012144_2);

#define VkglTestCase_012145_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012145_2 "_alpha_func.dst.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012145, VkglTestCase_012145_1, VkglTestCase_012145_2);

#define VkglTestCase_012146_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012146_2 "a_func.dst.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012146, VkglTestCase_012146_1, VkglTestCase_012146_2);

#define VkglTestCase_012147_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012147_2 "gb_func_alpha_func.dst.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012147, VkglTestCase_012147_1, VkglTestCase_012147_2);

#define VkglTestCase_012148_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_012148_2 "rgb_func_alpha_func.dst.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012148, VkglTestCase_012148_1, VkglTestCase_012148_2);

#define VkglTestCase_012149_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012149_2 "_func_alpha_func.dst.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012149, VkglTestCase_012149_1, VkglTestCase_012149_2);

#define VkglTestCase_012150_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012150_2 "_alpha_func.dst.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012150, VkglTestCase_012150_1, VkglTestCase_012150_2);

#define VkglTestCase_012151_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012151_2 "_func_alpha_func.dst.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012151, VkglTestCase_012151_1, VkglTestCase_012151_2);

#define VkglTestCase_012152_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012152_2 "_alpha_func.dst.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012152, VkglTestCase_012152_1, VkglTestCase_012152_2);

#define VkglTestCase_012153_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012153_2 "_func_alpha_func.dst.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012153, VkglTestCase_012153_1, VkglTestCase_012153_2);

#define VkglTestCase_012154_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012154_2 "_alpha_func.dst.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012154, VkglTestCase_012154_1, VkglTestCase_012154_2);

#define VkglTestCase_012155_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012155_2 "_func_alpha_func.dst.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012155, VkglTestCase_012155_1, VkglTestCase_012155_2);

#define VkglTestCase_012156_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012156_2 "_alpha_func.dst.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012156, VkglTestCase_012156_1, VkglTestCase_012156_2);

#define VkglTestCase_012157_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012157_2 "nc_alpha_func.dst.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012157, VkglTestCase_012157_1, VkglTestCase_012157_2);

#define VkglTestCase_012158_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012158_2 "pha_func.dst.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012158, VkglTestCase_012158_1, VkglTestCase_012158_2);

#define VkglTestCase_012159_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012159_2 "nc_alpha_func.dst.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012159, VkglTestCase_012159_1, VkglTestCase_012159_2);

#define VkglTestCase_012160_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012160_2 "pha_func.dst.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012160, VkglTestCase_012160_1, VkglTestCase_012160_2);

#define VkglTestCase_012161_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012161_2 "nc_alpha_func.dst.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012161, VkglTestCase_012161_1, VkglTestCase_012161_2);

#define VkglTestCase_012162_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_012162_2 "unc_alpha_func.dst.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012162, VkglTestCase_012162_1, VkglTestCase_012162_2);

#define VkglTestCase_012163_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012163_2 "_alpha_func.dst.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012163, VkglTestCase_012163_1, VkglTestCase_012163_2);

#define VkglTestCase_012164_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012164_2 "a_func.dst.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012164, VkglTestCase_012164_1, VkglTestCase_012164_2);

#define VkglTestCase_012165_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012165_2 "_alpha_func.dst.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012165, VkglTestCase_012165_1, VkglTestCase_012165_2);

#define VkglTestCase_012166_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012166_2 "a_func.dst.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012166, VkglTestCase_012166_1, VkglTestCase_012166_2);

#define VkglTestCase_012167_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012167_2 "_alpha_func.dst.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012167, VkglTestCase_012167_1, VkglTestCase_012167_2);

#define VkglTestCase_012168_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012168_2 "a_func.dst.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012168, VkglTestCase_012168_1, VkglTestCase_012168_2);

#define VkglTestCase_012169_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012169_2 "_alpha_func.dst.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012169, VkglTestCase_012169_1, VkglTestCase_012169_2);

#define VkglTestCase_012170_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012170_2 "a_func.dst.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012170, VkglTestCase_012170_1, VkglTestCase_012170_2);

#define VkglTestCase_012171_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012171_2 "pha_func.dst.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012171, VkglTestCase_012171_1, VkglTestCase_012171_2);

#define VkglTestCase_012172_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_012172_2 "unc.dst.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012172, VkglTestCase_012172_1, VkglTestCase_012172_2);

#define VkglTestCase_012173_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012173_2 "pha_func.dst.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012173, VkglTestCase_012173_1, VkglTestCase_012173_2);

#define VkglTestCase_012174_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_012174_2 "unc.dst.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012174, VkglTestCase_012174_1, VkglTestCase_012174_2);

#define VkglTestCase_012175_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_012175_2 "gb_func_alpha_func.dst.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012175, VkglTestCase_012175_1, VkglTestCase_012175_2);

#define VkglTestCase_012176_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_012176_2 "rgb_func_alpha_func.dst.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012176, VkglTestCase_012176_1, VkglTestCase_012176_2);

#define VkglTestCase_012177_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012177_2 "_func_alpha_func.dst.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012177, VkglTestCase_012177_1, VkglTestCase_012177_2);

#define VkglTestCase_012178_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012178_2 "_alpha_func.dst.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012178, VkglTestCase_012178_1, VkglTestCase_012178_2);

#define VkglTestCase_012179_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012179_2 "_func_alpha_func.dst.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012179, VkglTestCase_012179_1, VkglTestCase_012179_2);

#define VkglTestCase_012180_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012180_2 "_alpha_func.dst.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012180, VkglTestCase_012180_1, VkglTestCase_012180_2);

#define VkglTestCase_012181_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012181_2 "_func_alpha_func.dst.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012181, VkglTestCase_012181_1, VkglTestCase_012181_2);

#define VkglTestCase_012182_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012182_2 "_alpha_func.dst.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012182, VkglTestCase_012182_1, VkglTestCase_012182_2);

#define VkglTestCase_012183_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_012183_2 "_func_alpha_func.dst.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012183, VkglTestCase_012183_1, VkglTestCase_012183_2);

#define VkglTestCase_012184_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012184_2 "_alpha_func.dst.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012184, VkglTestCase_012184_1, VkglTestCase_012184_2);

#define VkglTestCase_012185_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012185_2 "nc_alpha_func.dst.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012185, VkglTestCase_012185_1, VkglTestCase_012185_2);

#define VkglTestCase_012186_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012186_2 "pha_func.dst.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012186, VkglTestCase_012186_1, VkglTestCase_012186_2);

#define VkglTestCase_012187_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012187_2 "nc_alpha_func.dst.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012187, VkglTestCase_012187_1, VkglTestCase_012187_2);

#define VkglTestCase_012188_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012188_2 "pha_func.dst.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012188, VkglTestCase_012188_1, VkglTestCase_012188_2);

#define VkglTestCase_012189_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_012189_2 "nc_alpha_func.dst.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012189, VkglTestCase_012189_1, VkglTestCase_012189_2);

#define VkglTestCase_012190_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_012190_2 "unc_alpha_func.dst.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012190, VkglTestCase_012190_1, VkglTestCase_012190_2);

#define VkglTestCase_012191_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012191_2 "_alpha_func.dst.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012191, VkglTestCase_012191_1, VkglTestCase_012191_2);

#define VkglTestCase_012192_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012192_2 "a_func.dst.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012192, VkglTestCase_012192_1, VkglTestCase_012192_2);

#define VkglTestCase_012193_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012193_2 "_alpha_func.dst.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012193, VkglTestCase_012193_1, VkglTestCase_012193_2);

#define VkglTestCase_012194_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012194_2 "a_func.dst.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012194, VkglTestCase_012194_1, VkglTestCase_012194_2);

#define VkglTestCase_012195_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012195_2 "_alpha_func.dst.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012195, VkglTestCase_012195_1, VkglTestCase_012195_2);

#define VkglTestCase_012196_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012196_2 "a_func.dst.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012196, VkglTestCase_012196_1, VkglTestCase_012196_2);

#define VkglTestCase_012197_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012197_2 "_alpha_func.dst.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012197, VkglTestCase_012197_1, VkglTestCase_012197_2);

#define VkglTestCase_012198_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012198_2 "a_func.dst.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012198, VkglTestCase_012198_1, VkglTestCase_012198_2);

#define VkglTestCase_012199_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012199_2 "pha_func.dst.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012199, VkglTestCase_012199_1, VkglTestCase_012199_2);

#define VkglTestCase_012200_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_012200_2 "unc.dst.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012200, VkglTestCase_012200_1, VkglTestCase_012200_2);

#define VkglTestCase_012201_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_012201_2 "pha_func.dst.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012201, VkglTestCase_012201_1, VkglTestCase_012201_2);

#define VkglTestCase_012202_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_012202_2 "unc.dst.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012202, VkglTestCase_012202_1, VkglTestCase_012202_2);
