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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000013_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000013_2 "functions.common.abs.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000014_2 "nctions.common.abs.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000015_2 "unctions.common.abs.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000016_2 "functions.common.abs.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000017_2 "nctions.common.abs.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000018_2 "tions.common.abs.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000019_2 "nctions.common.abs.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000020_2 "unctions.common.abs.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000021_2 "unctions.common.abs.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000022_2 "ctions.common.abs.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000023_2 "unctions.common.abs.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000024_2 "functions.common.abs.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000025_2 "functions.common.abs.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000026_2 "nctions.common.abs.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000027_2 "functions.common.abs.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000028_2 "_functions.common.abs.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000029_2 "unctions.common.abs.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000030_2 "ctions.common.abs.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000031_2 "nctions.common.abs.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000032_2 "unctions.common.abs.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000033_2 "functions.common.abs.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);

#define VkglTestCase_000034_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000034_2 "nctions.common.abs.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000034, VkglTestCase_000034_1, VkglTestCase_000034_2);

#define VkglTestCase_000035_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000035_2 "unctions.common.abs.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000035, VkglTestCase_000035_1, VkglTestCase_000035_2);

#define VkglTestCase_000036_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000036_2 "functions.common.abs.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000036, VkglTestCase_000036_1, VkglTestCase_000036_2);

#define VkglTestCase_000037_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000037_2 "functions.common.abs.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000037, VkglTestCase_000037_1, VkglTestCase_000037_2);

#define VkglTestCase_000038_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000038_2 "nctions.common.abs.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000038, VkglTestCase_000038_1, VkglTestCase_000038_2);

#define VkglTestCase_000039_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000039_2 "functions.common.abs.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000039, VkglTestCase_000039_1, VkglTestCase_000039_2);

#define VkglTestCase_000040_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000040_2 "_functions.common.abs.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000040, VkglTestCase_000040_1, VkglTestCase_000040_2);

#define VkglTestCase_000041_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000041_2 "unctions.common.abs.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000041, VkglTestCase_000041_1, VkglTestCase_000041_2);

#define VkglTestCase_000042_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000042_2 "ctions.common.abs.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000042, VkglTestCase_000042_1, VkglTestCase_000042_2);

#define VkglTestCase_000043_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000043_2 "nctions.common.abs.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000043, VkglTestCase_000043_1, VkglTestCase_000043_2);

#define VkglTestCase_000044_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000044_2 "unctions.common.abs.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000044, VkglTestCase_000044_1, VkglTestCase_000044_2);

#define VkglTestCase_000045_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000045_2 "functions.common.abs.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000045, VkglTestCase_000045_1, VkglTestCase_000045_2);

#define VkglTestCase_000046_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000046_2 "nctions.common.abs.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000046, VkglTestCase_000046_1, VkglTestCase_000046_2);

#define VkglTestCase_000047_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000047_2 "unctions.common.abs.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000047, VkglTestCase_000047_1, VkglTestCase_000047_2);

#define VkglTestCase_000048_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000048_2 "functions.common.abs.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000048, VkglTestCase_000048_1, VkglTestCase_000048_2);

#define VkglTestCase_000049_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000049_2 "functions.common.abs.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000050_2 "nctions.common.abs.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000051_2 "functions.common.abs.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000052_2 "_functions.common.abs.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000053_2 "unctions.common.abs.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000054_2 "ctions.common.abs.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000055_2 "nctions.common.abs.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000056_2 "unctions.common.abs.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000057_2 "functions.common.abs.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000058_2 "nctions.common.abs.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000059_2 "unctions.common.abs.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000060_2 "functions.common.abs.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000061_2 "_functions.common.abs.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000062_2 "unctions.common.abs.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000063_2 "functions.common.abs.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000064_2 "_functions.common.abs.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000065_2 "unctions.common.abs.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000066_2 "ctions.common.abs.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000067_2 "unctions.common.abs.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000068_2 "functions.common.abs.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000069_2 "functions.common.abs.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000070_2 "nctions.common.abs.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000071_2 "functions.common.abs.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);

#define VkglTestCase_000072_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_000072_2 "_functions.common.abs.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000073_2 "functions.common.abs.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000074_2 "nctions.common.abs.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000075_2 "unctions.common.abs.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000076_2 "functions.common.abs.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000077_2 "nctions.common.abs.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000078_2 "tions.common.abs.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000079_2 "nctions.common.abs.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000080_2 "unctions.common.abs.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000081_2 "unctions.common.abs.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000082_2 "ctions.common.abs.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000083_2 "unctions.common.abs.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000084_2 "functions.common.abs.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000085_2 "functions.common.abs.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000086_2 "nctions.common.abs.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000087_2 "unctions.common.abs.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000088_2 "functions.common.abs.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);

#define VkglTestCase_000089_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000089_2 "nctions.common.abs.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);

#define VkglTestCase_000090_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000090_2 "tions.common.abs.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000091_2 "nctions.common.abs.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000092_2 "unctions.common.abs.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000093_2 "unctions.common.abs.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000094_2 "ctions.common.abs.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000095_2 "unctions.common.abs.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000096_2 "functions.common.abs.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000097_2 "functions.common.abs.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000098_2 "nctions.common.abs.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000099_2 "unctions.common.abs.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000100_2 "functions.common.abs.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000101_2 "nctions.common.abs.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000102_2 "tions.common.abs.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);

#define VkglTestCase_000103_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000103_2 "nctions.common.abs.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000103, VkglTestCase_000103_1, VkglTestCase_000103_2);

#define VkglTestCase_000104_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000104_2 "unctions.common.abs.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000105_2 "unctions.common.abs.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000106_2 "ctions.common.abs.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000107_2 "unctions.common.abs.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);

#define VkglTestCase_000108_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000108_2 "functions.common.abs.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);
