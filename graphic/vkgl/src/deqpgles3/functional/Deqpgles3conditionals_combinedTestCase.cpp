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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020994_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020994_2 "random.conditionals.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020994, VkglTestCase_020994_1, VkglTestCase_020994_2);

#define VkglTestCase_020995_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020995_2 "random.conditionals.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020995, VkglTestCase_020995_1, VkglTestCase_020995_2);

#define VkglTestCase_020996_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020996_2 "random.conditionals.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020996, VkglTestCase_020996_1, VkglTestCase_020996_2);

#define VkglTestCase_020997_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020997_2 "random.conditionals.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020997, VkglTestCase_020997_1, VkglTestCase_020997_2);

#define VkglTestCase_020998_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020998_2 "random.conditionals.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020998, VkglTestCase_020998_1, VkglTestCase_020998_2);

#define VkglTestCase_020999_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020999_2 "random.conditionals.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020999, VkglTestCase_020999_1, VkglTestCase_020999_2);

#define VkglTestCase_021000_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021000_2 "random.conditionals.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021000, VkglTestCase_021000_1, VkglTestCase_021000_2);

#define VkglTestCase_021001_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021001_2 "random.conditionals.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021001, VkglTestCase_021001_1, VkglTestCase_021001_2);

#define VkglTestCase_021002_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021002_2 "random.conditionals.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021002, VkglTestCase_021002_1, VkglTestCase_021002_2);

#define VkglTestCase_021003_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021003_2 "random.conditionals.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021003, VkglTestCase_021003_1, VkglTestCase_021003_2);

#define VkglTestCase_021004_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021004_2 "random.conditionals.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021004, VkglTestCase_021004_1, VkglTestCase_021004_2);

#define VkglTestCase_021005_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021005_2 "random.conditionals.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021005, VkglTestCase_021005_1, VkglTestCase_021005_2);

#define VkglTestCase_021006_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021006_2 "random.conditionals.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021006, VkglTestCase_021006_1, VkglTestCase_021006_2);

#define VkglTestCase_021007_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021007_2 "random.conditionals.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021007, VkglTestCase_021007_1, VkglTestCase_021007_2);

#define VkglTestCase_021008_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021008_2 "random.conditionals.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021008, VkglTestCase_021008_1, VkglTestCase_021008_2);

#define VkglTestCase_021009_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021009_2 "random.conditionals.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021009, VkglTestCase_021009_1, VkglTestCase_021009_2);

#define VkglTestCase_021010_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021010_2 "random.conditionals.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021010, VkglTestCase_021010_1, VkglTestCase_021010_2);

#define VkglTestCase_021011_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021011_2 "random.conditionals.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021011, VkglTestCase_021011_1, VkglTestCase_021011_2);

#define VkglTestCase_021012_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021012_2 "random.conditionals.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021012, VkglTestCase_021012_1, VkglTestCase_021012_2);

#define VkglTestCase_021013_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021013_2 "random.conditionals.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021013, VkglTestCase_021013_1, VkglTestCase_021013_2);

#define VkglTestCase_021014_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021014_2 "random.conditionals.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021014, VkglTestCase_021014_1, VkglTestCase_021014_2);

#define VkglTestCase_021015_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021015_2 "random.conditionals.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021015, VkglTestCase_021015_1, VkglTestCase_021015_2);

#define VkglTestCase_021016_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021016_2 "random.conditionals.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021016, VkglTestCase_021016_1, VkglTestCase_021016_2);

#define VkglTestCase_021017_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021017_2 "random.conditionals.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021017, VkglTestCase_021017_1, VkglTestCase_021017_2);

#define VkglTestCase_021018_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021018_2 "random.conditionals.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021018, VkglTestCase_021018_1, VkglTestCase_021018_2);

#define VkglTestCase_021019_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021019_2 "random.conditionals.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021019, VkglTestCase_021019_1, VkglTestCase_021019_2);

#define VkglTestCase_021020_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021020_2 "random.conditionals.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021020, VkglTestCase_021020_1, VkglTestCase_021020_2);

#define VkglTestCase_021021_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021021_2 "random.conditionals.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021021, VkglTestCase_021021_1, VkglTestCase_021021_2);

#define VkglTestCase_021022_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021022_2 "random.conditionals.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021022, VkglTestCase_021022_1, VkglTestCase_021022_2);

#define VkglTestCase_021023_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021023_2 "random.conditionals.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021023, VkglTestCase_021023_1, VkglTestCase_021023_2);

#define VkglTestCase_021024_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021024_2 "random.conditionals.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021024, VkglTestCase_021024_1, VkglTestCase_021024_2);

#define VkglTestCase_021025_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021025_2 "random.conditionals.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021025, VkglTestCase_021025_1, VkglTestCase_021025_2);

#define VkglTestCase_021026_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021026_2 "random.conditionals.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021026, VkglTestCase_021026_1, VkglTestCase_021026_2);

#define VkglTestCase_021027_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021027_2 "random.conditionals.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021027, VkglTestCase_021027_1, VkglTestCase_021027_2);

#define VkglTestCase_021028_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021028_2 "random.conditionals.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021028, VkglTestCase_021028_1, VkglTestCase_021028_2);

#define VkglTestCase_021029_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021029_2 "random.conditionals.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021029, VkglTestCase_021029_1, VkglTestCase_021029_2);

#define VkglTestCase_021030_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021030_2 "random.conditionals.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021030, VkglTestCase_021030_1, VkglTestCase_021030_2);

#define VkglTestCase_021031_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021031_2 "random.conditionals.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021031, VkglTestCase_021031_1, VkglTestCase_021031_2);

#define VkglTestCase_021032_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021032_2 "random.conditionals.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021032, VkglTestCase_021032_1, VkglTestCase_021032_2);

#define VkglTestCase_021033_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021033_2 "random.conditionals.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021033, VkglTestCase_021033_1, VkglTestCase_021033_2);

#define VkglTestCase_021034_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021034_2 "random.conditionals.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021034, VkglTestCase_021034_1, VkglTestCase_021034_2);

#define VkglTestCase_021035_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021035_2 "random.conditionals.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021035, VkglTestCase_021035_1, VkglTestCase_021035_2);

#define VkglTestCase_021036_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021036_2 "random.conditionals.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021036, VkglTestCase_021036_1, VkglTestCase_021036_2);

#define VkglTestCase_021037_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021037_2 "random.conditionals.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021037, VkglTestCase_021037_1, VkglTestCase_021037_2);

#define VkglTestCase_021038_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021038_2 "random.conditionals.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021038, VkglTestCase_021038_1, VkglTestCase_021038_2);

#define VkglTestCase_021039_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021039_2 "random.conditionals.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021039, VkglTestCase_021039_1, VkglTestCase_021039_2);

#define VkglTestCase_021040_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021040_2 "random.conditionals.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021040, VkglTestCase_021040_1, VkglTestCase_021040_2);

#define VkglTestCase_021041_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021041_2 "random.conditionals.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021041, VkglTestCase_021041_1, VkglTestCase_021041_2);

#define VkglTestCase_021042_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021042_2 "random.conditionals.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021042, VkglTestCase_021042_1, VkglTestCase_021042_2);

#define VkglTestCase_021043_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021043_2 "random.conditionals.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021043, VkglTestCase_021043_1, VkglTestCase_021043_2);

#define VkglTestCase_021044_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021044_2 "random.conditionals.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021044, VkglTestCase_021044_1, VkglTestCase_021044_2);

#define VkglTestCase_021045_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021045_2 "random.conditionals.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021045, VkglTestCase_021045_1, VkglTestCase_021045_2);

#define VkglTestCase_021046_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021046_2 "random.conditionals.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021046, VkglTestCase_021046_1, VkglTestCase_021046_2);

#define VkglTestCase_021047_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021047_2 "random.conditionals.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021047, VkglTestCase_021047_1, VkglTestCase_021047_2);

#define VkglTestCase_021048_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021048_2 "random.conditionals.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021048, VkglTestCase_021048_1, VkglTestCase_021048_2);

#define VkglTestCase_021049_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021049_2 "random.conditionals.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021049, VkglTestCase_021049_1, VkglTestCase_021049_2);

#define VkglTestCase_021050_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021050_2 "random.conditionals.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021050, VkglTestCase_021050_1, VkglTestCase_021050_2);

#define VkglTestCase_021051_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021051_2 "random.conditionals.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021051, VkglTestCase_021051_1, VkglTestCase_021051_2);

#define VkglTestCase_021052_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021052_2 "random.conditionals.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021052, VkglTestCase_021052_1, VkglTestCase_021052_2);

#define VkglTestCase_021053_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021053_2 "random.conditionals.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021053, VkglTestCase_021053_1, VkglTestCase_021053_2);

#define VkglTestCase_021054_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021054_2 "random.conditionals.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021054, VkglTestCase_021054_1, VkglTestCase_021054_2);

#define VkglTestCase_021055_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021055_2 "random.conditionals.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021055, VkglTestCase_021055_1, VkglTestCase_021055_2);

#define VkglTestCase_021056_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021056_2 "random.conditionals.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021056, VkglTestCase_021056_1, VkglTestCase_021056_2);

#define VkglTestCase_021057_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021057_2 "random.conditionals.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021057, VkglTestCase_021057_1, VkglTestCase_021057_2);

#define VkglTestCase_021058_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021058_2 "random.conditionals.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021058, VkglTestCase_021058_1, VkglTestCase_021058_2);

#define VkglTestCase_021059_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021059_2 "random.conditionals.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021059, VkglTestCase_021059_1, VkglTestCase_021059_2);

#define VkglTestCase_021060_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021060_2 "random.conditionals.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021060, VkglTestCase_021060_1, VkglTestCase_021060_2);

#define VkglTestCase_021061_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021061_2 "random.conditionals.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021061, VkglTestCase_021061_1, VkglTestCase_021061_2);

#define VkglTestCase_021062_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021062_2 "random.conditionals.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021062, VkglTestCase_021062_1, VkglTestCase_021062_2);

#define VkglTestCase_021063_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021063_2 "random.conditionals.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021063, VkglTestCase_021063_1, VkglTestCase_021063_2);

#define VkglTestCase_021064_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021064_2 "random.conditionals.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021064, VkglTestCase_021064_1, VkglTestCase_021064_2);

#define VkglTestCase_021065_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021065_2 "random.conditionals.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021065, VkglTestCase_021065_1, VkglTestCase_021065_2);

#define VkglTestCase_021066_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021066_2 "random.conditionals.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021066, VkglTestCase_021066_1, VkglTestCase_021066_2);

#define VkglTestCase_021067_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021067_2 "random.conditionals.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021067, VkglTestCase_021067_1, VkglTestCase_021067_2);

#define VkglTestCase_021068_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021068_2 "random.conditionals.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021068, VkglTestCase_021068_1, VkglTestCase_021068_2);

#define VkglTestCase_021069_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021069_2 "random.conditionals.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021069, VkglTestCase_021069_1, VkglTestCase_021069_2);

#define VkglTestCase_021070_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021070_2 "random.conditionals.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021070, VkglTestCase_021070_1, VkglTestCase_021070_2);

#define VkglTestCase_021071_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021071_2 "random.conditionals.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021071, VkglTestCase_021071_1, VkglTestCase_021071_2);

#define VkglTestCase_021072_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021072_2 "random.conditionals.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021072, VkglTestCase_021072_1, VkglTestCase_021072_2);

#define VkglTestCase_021073_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021073_2 "random.conditionals.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021073, VkglTestCase_021073_1, VkglTestCase_021073_2);

#define VkglTestCase_021074_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021074_2 "random.conditionals.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021074, VkglTestCase_021074_1, VkglTestCase_021074_2);

#define VkglTestCase_021075_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021075_2 "random.conditionals.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021075, VkglTestCase_021075_1, VkglTestCase_021075_2);

#define VkglTestCase_021076_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021076_2 "random.conditionals.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021076, VkglTestCase_021076_1, VkglTestCase_021076_2);

#define VkglTestCase_021077_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021077_2 "random.conditionals.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021077, VkglTestCase_021077_1, VkglTestCase_021077_2);

#define VkglTestCase_021078_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021078_2 "random.conditionals.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021078, VkglTestCase_021078_1, VkglTestCase_021078_2);

#define VkglTestCase_021079_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021079_2 "random.conditionals.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021079, VkglTestCase_021079_1, VkglTestCase_021079_2);

#define VkglTestCase_021080_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021080_2 "random.conditionals.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021080, VkglTestCase_021080_1, VkglTestCase_021080_2);

#define VkglTestCase_021081_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021081_2 "random.conditionals.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021081, VkglTestCase_021081_1, VkglTestCase_021081_2);

#define VkglTestCase_021082_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021082_2 "random.conditionals.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021082, VkglTestCase_021082_1, VkglTestCase_021082_2);

#define VkglTestCase_021083_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021083_2 "random.conditionals.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021083, VkglTestCase_021083_1, VkglTestCase_021083_2);

#define VkglTestCase_021084_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021084_2 "random.conditionals.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021084, VkglTestCase_021084_1, VkglTestCase_021084_2);

#define VkglTestCase_021085_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021085_2 "random.conditionals.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021085, VkglTestCase_021085_1, VkglTestCase_021085_2);

#define VkglTestCase_021086_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021086_2 "random.conditionals.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021086, VkglTestCase_021086_1, VkglTestCase_021086_2);

#define VkglTestCase_021087_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021087_2 "random.conditionals.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021087, VkglTestCase_021087_1, VkglTestCase_021087_2);

#define VkglTestCase_021088_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021088_2 "random.conditionals.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021088, VkglTestCase_021088_1, VkglTestCase_021088_2);

#define VkglTestCase_021089_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021089_2 "random.conditionals.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021089, VkglTestCase_021089_1, VkglTestCase_021089_2);

#define VkglTestCase_021090_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021090_2 "random.conditionals.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021090, VkglTestCase_021090_1, VkglTestCase_021090_2);

#define VkglTestCase_021091_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021091_2 "random.conditionals.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021091, VkglTestCase_021091_1, VkglTestCase_021091_2);

#define VkglTestCase_021092_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021092_2 "random.conditionals.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021092, VkglTestCase_021092_1, VkglTestCase_021092_2);

#define VkglTestCase_021093_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021093_2 "random.conditionals.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021093, VkglTestCase_021093_1, VkglTestCase_021093_2);
