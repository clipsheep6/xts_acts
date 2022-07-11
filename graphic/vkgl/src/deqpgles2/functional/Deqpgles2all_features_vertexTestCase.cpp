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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010032_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010032_2 ".random.all_features.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010032, VkglTestCase_010032_1, VkglTestCase_010032_2);

#define VkglTestCase_010033_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010033_2 ".random.all_features.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010033, VkglTestCase_010033_1, VkglTestCase_010033_2);

#define VkglTestCase_010034_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010034_2 ".random.all_features.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010034, VkglTestCase_010034_1, VkglTestCase_010034_2);

#define VkglTestCase_010035_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010035_2 ".random.all_features.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010035, VkglTestCase_010035_1, VkglTestCase_010035_2);

#define VkglTestCase_010036_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010036_2 ".random.all_features.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010036, VkglTestCase_010036_1, VkglTestCase_010036_2);

#define VkglTestCase_010037_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010037_2 ".random.all_features.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010037, VkglTestCase_010037_1, VkglTestCase_010037_2);

#define VkglTestCase_010038_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010038_2 ".random.all_features.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010038, VkglTestCase_010038_1, VkglTestCase_010038_2);

#define VkglTestCase_010039_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010039_2 ".random.all_features.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010039, VkglTestCase_010039_1, VkglTestCase_010039_2);

#define VkglTestCase_010040_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010040_2 ".random.all_features.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010040, VkglTestCase_010040_1, VkglTestCase_010040_2);

#define VkglTestCase_010041_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010041_2 ".random.all_features.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010041, VkglTestCase_010041_1, VkglTestCase_010041_2);

#define VkglTestCase_010042_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010042_2 ".random.all_features.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010042, VkglTestCase_010042_1, VkglTestCase_010042_2);

#define VkglTestCase_010043_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010043_2 ".random.all_features.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010043, VkglTestCase_010043_1, VkglTestCase_010043_2);

#define VkglTestCase_010044_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010044_2 ".random.all_features.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010044, VkglTestCase_010044_1, VkglTestCase_010044_2);

#define VkglTestCase_010045_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010045_2 ".random.all_features.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010045, VkglTestCase_010045_1, VkglTestCase_010045_2);

#define VkglTestCase_010046_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010046_2 ".random.all_features.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010046, VkglTestCase_010046_1, VkglTestCase_010046_2);

#define VkglTestCase_010047_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010047_2 ".random.all_features.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010047, VkglTestCase_010047_1, VkglTestCase_010047_2);

#define VkglTestCase_010048_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010048_2 ".random.all_features.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010048, VkglTestCase_010048_1, VkglTestCase_010048_2);

#define VkglTestCase_010049_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010049_2 ".random.all_features.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010049, VkglTestCase_010049_1, VkglTestCase_010049_2);

#define VkglTestCase_010050_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010050_2 ".random.all_features.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010050, VkglTestCase_010050_1, VkglTestCase_010050_2);

#define VkglTestCase_010051_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010051_2 ".random.all_features.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010051, VkglTestCase_010051_1, VkglTestCase_010051_2);

#define VkglTestCase_010052_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010052_2 ".random.all_features.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010052, VkglTestCase_010052_1, VkglTestCase_010052_2);

#define VkglTestCase_010053_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010053_2 ".random.all_features.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010053, VkglTestCase_010053_1, VkglTestCase_010053_2);

#define VkglTestCase_010054_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010054_2 ".random.all_features.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010054, VkglTestCase_010054_1, VkglTestCase_010054_2);

#define VkglTestCase_010055_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010055_2 ".random.all_features.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010055, VkglTestCase_010055_1, VkglTestCase_010055_2);

#define VkglTestCase_010056_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010056_2 ".random.all_features.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010056, VkglTestCase_010056_1, VkglTestCase_010056_2);

#define VkglTestCase_010057_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010057_2 ".random.all_features.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010057, VkglTestCase_010057_1, VkglTestCase_010057_2);

#define VkglTestCase_010058_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010058_2 ".random.all_features.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010058, VkglTestCase_010058_1, VkglTestCase_010058_2);

#define VkglTestCase_010059_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010059_2 ".random.all_features.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010059, VkglTestCase_010059_1, VkglTestCase_010059_2);

#define VkglTestCase_010060_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010060_2 ".random.all_features.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010060, VkglTestCase_010060_1, VkglTestCase_010060_2);

#define VkglTestCase_010061_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010061_2 ".random.all_features.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010061, VkglTestCase_010061_1, VkglTestCase_010061_2);

#define VkglTestCase_010062_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010062_2 ".random.all_features.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010062, VkglTestCase_010062_1, VkglTestCase_010062_2);

#define VkglTestCase_010063_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010063_2 ".random.all_features.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010063, VkglTestCase_010063_1, VkglTestCase_010063_2);

#define VkglTestCase_010064_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010064_2 ".random.all_features.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010064, VkglTestCase_010064_1, VkglTestCase_010064_2);

#define VkglTestCase_010065_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010065_2 ".random.all_features.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010065, VkglTestCase_010065_1, VkglTestCase_010065_2);

#define VkglTestCase_010066_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010066_2 ".random.all_features.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010066, VkglTestCase_010066_1, VkglTestCase_010066_2);

#define VkglTestCase_010067_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010067_2 ".random.all_features.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010067, VkglTestCase_010067_1, VkglTestCase_010067_2);

#define VkglTestCase_010068_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010068_2 ".random.all_features.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010068, VkglTestCase_010068_1, VkglTestCase_010068_2);

#define VkglTestCase_010069_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010069_2 ".random.all_features.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010069, VkglTestCase_010069_1, VkglTestCase_010069_2);

#define VkglTestCase_010070_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010070_2 ".random.all_features.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010070, VkglTestCase_010070_1, VkglTestCase_010070_2);

#define VkglTestCase_010071_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010071_2 ".random.all_features.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010071, VkglTestCase_010071_1, VkglTestCase_010071_2);

#define VkglTestCase_010072_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010072_2 ".random.all_features.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010072, VkglTestCase_010072_1, VkglTestCase_010072_2);

#define VkglTestCase_010073_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010073_2 ".random.all_features.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010073, VkglTestCase_010073_1, VkglTestCase_010073_2);

#define VkglTestCase_010074_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010074_2 ".random.all_features.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010074, VkglTestCase_010074_1, VkglTestCase_010074_2);

#define VkglTestCase_010075_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010075_2 ".random.all_features.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010075, VkglTestCase_010075_1, VkglTestCase_010075_2);

#define VkglTestCase_010076_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010076_2 ".random.all_features.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010076, VkglTestCase_010076_1, VkglTestCase_010076_2);

#define VkglTestCase_010077_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010077_2 ".random.all_features.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010077, VkglTestCase_010077_1, VkglTestCase_010077_2);

#define VkglTestCase_010078_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010078_2 ".random.all_features.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010078, VkglTestCase_010078_1, VkglTestCase_010078_2);

#define VkglTestCase_010079_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010079_2 ".random.all_features.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010079, VkglTestCase_010079_1, VkglTestCase_010079_2);

#define VkglTestCase_010080_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010080_2 ".random.all_features.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010080, VkglTestCase_010080_1, VkglTestCase_010080_2);

#define VkglTestCase_010081_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010081_2 ".random.all_features.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010081, VkglTestCase_010081_1, VkglTestCase_010081_2);

#define VkglTestCase_010082_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010082_2 ".random.all_features.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010082, VkglTestCase_010082_1, VkglTestCase_010082_2);

#define VkglTestCase_010083_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010083_2 ".random.all_features.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010083, VkglTestCase_010083_1, VkglTestCase_010083_2);

#define VkglTestCase_010084_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010084_2 ".random.all_features.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010084, VkglTestCase_010084_1, VkglTestCase_010084_2);

#define VkglTestCase_010085_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010085_2 ".random.all_features.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010085, VkglTestCase_010085_1, VkglTestCase_010085_2);

#define VkglTestCase_010086_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010086_2 ".random.all_features.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010086, VkglTestCase_010086_1, VkglTestCase_010086_2);

#define VkglTestCase_010087_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010087_2 ".random.all_features.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010087, VkglTestCase_010087_1, VkglTestCase_010087_2);

#define VkglTestCase_010088_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010088_2 ".random.all_features.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010088, VkglTestCase_010088_1, VkglTestCase_010088_2);

#define VkglTestCase_010089_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010089_2 ".random.all_features.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010089, VkglTestCase_010089_1, VkglTestCase_010089_2);

#define VkglTestCase_010090_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010090_2 ".random.all_features.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010090, VkglTestCase_010090_1, VkglTestCase_010090_2);

#define VkglTestCase_010091_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010091_2 ".random.all_features.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010091, VkglTestCase_010091_1, VkglTestCase_010091_2);

#define VkglTestCase_010092_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010092_2 ".random.all_features.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010092, VkglTestCase_010092_1, VkglTestCase_010092_2);

#define VkglTestCase_010093_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010093_2 ".random.all_features.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010093, VkglTestCase_010093_1, VkglTestCase_010093_2);

#define VkglTestCase_010094_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010094_2 ".random.all_features.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010094, VkglTestCase_010094_1, VkglTestCase_010094_2);

#define VkglTestCase_010095_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010095_2 ".random.all_features.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010095, VkglTestCase_010095_1, VkglTestCase_010095_2);

#define VkglTestCase_010096_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010096_2 ".random.all_features.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010096, VkglTestCase_010096_1, VkglTestCase_010096_2);

#define VkglTestCase_010097_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010097_2 ".random.all_features.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010097, VkglTestCase_010097_1, VkglTestCase_010097_2);

#define VkglTestCase_010098_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010098_2 ".random.all_features.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010098, VkglTestCase_010098_1, VkglTestCase_010098_2);

#define VkglTestCase_010099_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010099_2 ".random.all_features.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010099, VkglTestCase_010099_1, VkglTestCase_010099_2);

#define VkglTestCase_010100_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010100_2 ".random.all_features.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010100, VkglTestCase_010100_1, VkglTestCase_010100_2);

#define VkglTestCase_010101_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010101_2 ".random.all_features.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010101, VkglTestCase_010101_1, VkglTestCase_010101_2);

#define VkglTestCase_010102_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010102_2 ".random.all_features.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010102, VkglTestCase_010102_1, VkglTestCase_010102_2);

#define VkglTestCase_010103_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010103_2 ".random.all_features.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010103, VkglTestCase_010103_1, VkglTestCase_010103_2);

#define VkglTestCase_010104_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010104_2 ".random.all_features.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010104, VkglTestCase_010104_1, VkglTestCase_010104_2);

#define VkglTestCase_010105_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010105_2 ".random.all_features.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010105, VkglTestCase_010105_1, VkglTestCase_010105_2);

#define VkglTestCase_010106_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010106_2 ".random.all_features.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010106, VkglTestCase_010106_1, VkglTestCase_010106_2);

#define VkglTestCase_010107_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010107_2 ".random.all_features.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010107, VkglTestCase_010107_1, VkglTestCase_010107_2);

#define VkglTestCase_010108_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010108_2 ".random.all_features.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010108, VkglTestCase_010108_1, VkglTestCase_010108_2);

#define VkglTestCase_010109_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010109_2 ".random.all_features.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010109, VkglTestCase_010109_1, VkglTestCase_010109_2);

#define VkglTestCase_010110_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010110_2 ".random.all_features.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010110, VkglTestCase_010110_1, VkglTestCase_010110_2);

#define VkglTestCase_010111_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010111_2 ".random.all_features.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010111, VkglTestCase_010111_1, VkglTestCase_010111_2);

#define VkglTestCase_010112_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010112_2 ".random.all_features.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010112, VkglTestCase_010112_1, VkglTestCase_010112_2);

#define VkglTestCase_010113_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010113_2 ".random.all_features.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010113, VkglTestCase_010113_1, VkglTestCase_010113_2);

#define VkglTestCase_010114_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010114_2 ".random.all_features.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010114, VkglTestCase_010114_1, VkglTestCase_010114_2);

#define VkglTestCase_010115_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010115_2 ".random.all_features.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010115, VkglTestCase_010115_1, VkglTestCase_010115_2);

#define VkglTestCase_010116_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010116_2 ".random.all_features.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010116, VkglTestCase_010116_1, VkglTestCase_010116_2);

#define VkglTestCase_010117_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010117_2 ".random.all_features.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010117, VkglTestCase_010117_1, VkglTestCase_010117_2);

#define VkglTestCase_010118_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010118_2 ".random.all_features.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010118, VkglTestCase_010118_1, VkglTestCase_010118_2);

#define VkglTestCase_010119_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010119_2 ".random.all_features.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010119, VkglTestCase_010119_1, VkglTestCase_010119_2);

#define VkglTestCase_010120_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010120_2 ".random.all_features.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010120, VkglTestCase_010120_1, VkglTestCase_010120_2);

#define VkglTestCase_010121_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010121_2 ".random.all_features.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010121, VkglTestCase_010121_1, VkglTestCase_010121_2);

#define VkglTestCase_010122_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010122_2 ".random.all_features.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010122, VkglTestCase_010122_1, VkglTestCase_010122_2);

#define VkglTestCase_010123_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010123_2 ".random.all_features.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010123, VkglTestCase_010123_1, VkglTestCase_010123_2);

#define VkglTestCase_010124_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010124_2 ".random.all_features.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010124, VkglTestCase_010124_1, VkglTestCase_010124_2);

#define VkglTestCase_010125_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010125_2 ".random.all_features.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010125, VkglTestCase_010125_1, VkglTestCase_010125_2);

#define VkglTestCase_010126_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010126_2 ".random.all_features.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010126, VkglTestCase_010126_1, VkglTestCase_010126_2);

#define VkglTestCase_010127_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010127_2 ".random.all_features.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010127, VkglTestCase_010127_1, VkglTestCase_010127_2);

#define VkglTestCase_010128_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010128_2 ".random.all_features.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010128, VkglTestCase_010128_1, VkglTestCase_010128_2);

#define VkglTestCase_010129_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010129_2 ".random.all_features.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010129, VkglTestCase_010129_1, VkglTestCase_010129_2);

#define VkglTestCase_010130_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010130_2 ".random.all_features.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010130, VkglTestCase_010130_1, VkglTestCase_010130_2);

#define VkglTestCase_010131_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_010131_2 ".random.all_features.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010131, VkglTestCase_010131_1, VkglTestCase_010131_2);
