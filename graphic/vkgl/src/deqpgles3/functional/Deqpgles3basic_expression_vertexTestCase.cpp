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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019994_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019994_2 "andom.basic_expression.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019994, VkglTestCase_019994_1, VkglTestCase_019994_2);

#define VkglTestCase_019995_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019995_2 "andom.basic_expression.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019995, VkglTestCase_019995_1, VkglTestCase_019995_2);

#define VkglTestCase_019996_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019996_2 "andom.basic_expression.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019996, VkglTestCase_019996_1, VkglTestCase_019996_2);

#define VkglTestCase_019997_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019997_2 "andom.basic_expression.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019997, VkglTestCase_019997_1, VkglTestCase_019997_2);

#define VkglTestCase_019998_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019998_2 "andom.basic_expression.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019998, VkglTestCase_019998_1, VkglTestCase_019998_2);

#define VkglTestCase_019999_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_019999_2 "andom.basic_expression.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019999, VkglTestCase_019999_1, VkglTestCase_019999_2);

#define VkglTestCase_020000_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020000_2 "andom.basic_expression.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020000, VkglTestCase_020000_1, VkglTestCase_020000_2);

#define VkglTestCase_020001_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020001_2 "andom.basic_expression.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020001, VkglTestCase_020001_1, VkglTestCase_020001_2);

#define VkglTestCase_020002_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020002_2 "andom.basic_expression.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020002, VkglTestCase_020002_1, VkglTestCase_020002_2);

#define VkglTestCase_020003_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020003_2 "andom.basic_expression.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020003, VkglTestCase_020003_1, VkglTestCase_020003_2);

#define VkglTestCase_020004_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020004_2 "andom.basic_expression.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020004, VkglTestCase_020004_1, VkglTestCase_020004_2);

#define VkglTestCase_020005_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020005_2 "andom.basic_expression.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020005, VkglTestCase_020005_1, VkglTestCase_020005_2);

#define VkglTestCase_020006_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020006_2 "andom.basic_expression.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020006, VkglTestCase_020006_1, VkglTestCase_020006_2);

#define VkglTestCase_020007_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020007_2 "andom.basic_expression.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020007, VkglTestCase_020007_1, VkglTestCase_020007_2);

#define VkglTestCase_020008_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020008_2 "andom.basic_expression.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020008, VkglTestCase_020008_1, VkglTestCase_020008_2);

#define VkglTestCase_020009_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020009_2 "andom.basic_expression.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020009, VkglTestCase_020009_1, VkglTestCase_020009_2);

#define VkglTestCase_020010_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020010_2 "andom.basic_expression.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020010, VkglTestCase_020010_1, VkglTestCase_020010_2);

#define VkglTestCase_020011_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020011_2 "andom.basic_expression.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020011, VkglTestCase_020011_1, VkglTestCase_020011_2);

#define VkglTestCase_020012_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020012_2 "andom.basic_expression.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020012, VkglTestCase_020012_1, VkglTestCase_020012_2);

#define VkglTestCase_020013_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020013_2 "andom.basic_expression.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020013, VkglTestCase_020013_1, VkglTestCase_020013_2);

#define VkglTestCase_020014_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020014_2 "andom.basic_expression.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020014, VkglTestCase_020014_1, VkglTestCase_020014_2);

#define VkglTestCase_020015_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020015_2 "andom.basic_expression.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020015, VkglTestCase_020015_1, VkglTestCase_020015_2);

#define VkglTestCase_020016_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020016_2 "andom.basic_expression.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020016, VkglTestCase_020016_1, VkglTestCase_020016_2);

#define VkglTestCase_020017_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020017_2 "andom.basic_expression.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020017, VkglTestCase_020017_1, VkglTestCase_020017_2);

#define VkglTestCase_020018_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020018_2 "andom.basic_expression.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020018, VkglTestCase_020018_1, VkglTestCase_020018_2);

#define VkglTestCase_020019_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020019_2 "andom.basic_expression.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020019, VkglTestCase_020019_1, VkglTestCase_020019_2);

#define VkglTestCase_020020_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020020_2 "andom.basic_expression.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020020, VkglTestCase_020020_1, VkglTestCase_020020_2);

#define VkglTestCase_020021_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020021_2 "andom.basic_expression.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020021, VkglTestCase_020021_1, VkglTestCase_020021_2);

#define VkglTestCase_020022_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020022_2 "andom.basic_expression.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020022, VkglTestCase_020022_1, VkglTestCase_020022_2);

#define VkglTestCase_020023_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020023_2 "andom.basic_expression.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020023, VkglTestCase_020023_1, VkglTestCase_020023_2);

#define VkglTestCase_020024_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020024_2 "andom.basic_expression.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020024, VkglTestCase_020024_1, VkglTestCase_020024_2);

#define VkglTestCase_020025_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020025_2 "andom.basic_expression.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020025, VkglTestCase_020025_1, VkglTestCase_020025_2);

#define VkglTestCase_020026_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020026_2 "andom.basic_expression.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020026, VkglTestCase_020026_1, VkglTestCase_020026_2);

#define VkglTestCase_020027_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020027_2 "andom.basic_expression.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020027, VkglTestCase_020027_1, VkglTestCase_020027_2);

#define VkglTestCase_020028_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020028_2 "andom.basic_expression.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020028, VkglTestCase_020028_1, VkglTestCase_020028_2);

#define VkglTestCase_020029_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020029_2 "andom.basic_expression.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020029, VkglTestCase_020029_1, VkglTestCase_020029_2);

#define VkglTestCase_020030_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020030_2 "andom.basic_expression.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020030, VkglTestCase_020030_1, VkglTestCase_020030_2);

#define VkglTestCase_020031_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020031_2 "andom.basic_expression.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020031, VkglTestCase_020031_1, VkglTestCase_020031_2);

#define VkglTestCase_020032_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020032_2 "andom.basic_expression.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020032, VkglTestCase_020032_1, VkglTestCase_020032_2);

#define VkglTestCase_020033_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020033_2 "andom.basic_expression.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020033, VkglTestCase_020033_1, VkglTestCase_020033_2);

#define VkglTestCase_020034_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020034_2 "andom.basic_expression.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020034, VkglTestCase_020034_1, VkglTestCase_020034_2);

#define VkglTestCase_020035_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020035_2 "andom.basic_expression.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020035, VkglTestCase_020035_1, VkglTestCase_020035_2);

#define VkglTestCase_020036_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020036_2 "andom.basic_expression.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020036, VkglTestCase_020036_1, VkglTestCase_020036_2);

#define VkglTestCase_020037_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020037_2 "andom.basic_expression.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020037, VkglTestCase_020037_1, VkglTestCase_020037_2);

#define VkglTestCase_020038_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020038_2 "andom.basic_expression.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020038, VkglTestCase_020038_1, VkglTestCase_020038_2);

#define VkglTestCase_020039_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020039_2 "andom.basic_expression.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020039, VkglTestCase_020039_1, VkglTestCase_020039_2);

#define VkglTestCase_020040_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020040_2 "andom.basic_expression.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020040, VkglTestCase_020040_1, VkglTestCase_020040_2);

#define VkglTestCase_020041_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020041_2 "andom.basic_expression.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020041, VkglTestCase_020041_1, VkglTestCase_020041_2);

#define VkglTestCase_020042_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020042_2 "andom.basic_expression.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020042, VkglTestCase_020042_1, VkglTestCase_020042_2);

#define VkglTestCase_020043_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020043_2 "andom.basic_expression.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020043, VkglTestCase_020043_1, VkglTestCase_020043_2);

#define VkglTestCase_020044_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020044_2 "andom.basic_expression.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020044, VkglTestCase_020044_1, VkglTestCase_020044_2);

#define VkglTestCase_020045_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020045_2 "andom.basic_expression.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020045, VkglTestCase_020045_1, VkglTestCase_020045_2);

#define VkglTestCase_020046_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020046_2 "andom.basic_expression.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020046, VkglTestCase_020046_1, VkglTestCase_020046_2);

#define VkglTestCase_020047_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020047_2 "andom.basic_expression.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020047, VkglTestCase_020047_1, VkglTestCase_020047_2);

#define VkglTestCase_020048_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020048_2 "andom.basic_expression.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020048, VkglTestCase_020048_1, VkglTestCase_020048_2);

#define VkglTestCase_020049_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020049_2 "andom.basic_expression.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020049, VkglTestCase_020049_1, VkglTestCase_020049_2);

#define VkglTestCase_020050_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020050_2 "andom.basic_expression.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020050, VkglTestCase_020050_1, VkglTestCase_020050_2);

#define VkglTestCase_020051_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020051_2 "andom.basic_expression.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020051, VkglTestCase_020051_1, VkglTestCase_020051_2);

#define VkglTestCase_020052_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020052_2 "andom.basic_expression.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020052, VkglTestCase_020052_1, VkglTestCase_020052_2);

#define VkglTestCase_020053_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020053_2 "andom.basic_expression.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020053, VkglTestCase_020053_1, VkglTestCase_020053_2);

#define VkglTestCase_020054_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020054_2 "andom.basic_expression.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020054, VkglTestCase_020054_1, VkglTestCase_020054_2);

#define VkglTestCase_020055_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020055_2 "andom.basic_expression.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020055, VkglTestCase_020055_1, VkglTestCase_020055_2);

#define VkglTestCase_020056_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020056_2 "andom.basic_expression.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020056, VkglTestCase_020056_1, VkglTestCase_020056_2);

#define VkglTestCase_020057_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020057_2 "andom.basic_expression.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020057, VkglTestCase_020057_1, VkglTestCase_020057_2);

#define VkglTestCase_020058_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020058_2 "andom.basic_expression.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020058, VkglTestCase_020058_1, VkglTestCase_020058_2);

#define VkglTestCase_020059_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020059_2 "andom.basic_expression.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020059, VkglTestCase_020059_1, VkglTestCase_020059_2);

#define VkglTestCase_020060_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020060_2 "andom.basic_expression.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020060, VkglTestCase_020060_1, VkglTestCase_020060_2);

#define VkglTestCase_020061_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020061_2 "andom.basic_expression.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020061, VkglTestCase_020061_1, VkglTestCase_020061_2);

#define VkglTestCase_020062_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020062_2 "andom.basic_expression.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020062, VkglTestCase_020062_1, VkglTestCase_020062_2);

#define VkglTestCase_020063_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020063_2 "andom.basic_expression.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020063, VkglTestCase_020063_1, VkglTestCase_020063_2);

#define VkglTestCase_020064_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020064_2 "andom.basic_expression.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020064, VkglTestCase_020064_1, VkglTestCase_020064_2);

#define VkglTestCase_020065_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020065_2 "andom.basic_expression.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020065, VkglTestCase_020065_1, VkglTestCase_020065_2);

#define VkglTestCase_020066_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020066_2 "andom.basic_expression.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020066, VkglTestCase_020066_1, VkglTestCase_020066_2);

#define VkglTestCase_020067_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020067_2 "andom.basic_expression.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020067, VkglTestCase_020067_1, VkglTestCase_020067_2);

#define VkglTestCase_020068_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020068_2 "andom.basic_expression.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020068, VkglTestCase_020068_1, VkglTestCase_020068_2);

#define VkglTestCase_020069_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020069_2 "andom.basic_expression.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020069, VkglTestCase_020069_1, VkglTestCase_020069_2);

#define VkglTestCase_020070_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020070_2 "andom.basic_expression.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020070, VkglTestCase_020070_1, VkglTestCase_020070_2);

#define VkglTestCase_020071_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020071_2 "andom.basic_expression.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020071, VkglTestCase_020071_1, VkglTestCase_020071_2);

#define VkglTestCase_020072_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020072_2 "andom.basic_expression.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020072, VkglTestCase_020072_1, VkglTestCase_020072_2);

#define VkglTestCase_020073_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020073_2 "andom.basic_expression.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020073, VkglTestCase_020073_1, VkglTestCase_020073_2);

#define VkglTestCase_020074_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020074_2 "andom.basic_expression.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020074, VkglTestCase_020074_1, VkglTestCase_020074_2);

#define VkglTestCase_020075_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020075_2 "andom.basic_expression.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020075, VkglTestCase_020075_1, VkglTestCase_020075_2);

#define VkglTestCase_020076_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020076_2 "andom.basic_expression.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020076, VkglTestCase_020076_1, VkglTestCase_020076_2);

#define VkglTestCase_020077_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020077_2 "andom.basic_expression.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020077, VkglTestCase_020077_1, VkglTestCase_020077_2);

#define VkglTestCase_020078_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020078_2 "andom.basic_expression.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020078, VkglTestCase_020078_1, VkglTestCase_020078_2);

#define VkglTestCase_020079_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020079_2 "andom.basic_expression.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020079, VkglTestCase_020079_1, VkglTestCase_020079_2);

#define VkglTestCase_020080_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020080_2 "andom.basic_expression.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020080, VkglTestCase_020080_1, VkglTestCase_020080_2);

#define VkglTestCase_020081_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020081_2 "andom.basic_expression.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020081, VkglTestCase_020081_1, VkglTestCase_020081_2);

#define VkglTestCase_020082_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020082_2 "andom.basic_expression.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020082, VkglTestCase_020082_1, VkglTestCase_020082_2);

#define VkglTestCase_020083_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020083_2 "andom.basic_expression.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020083, VkglTestCase_020083_1, VkglTestCase_020083_2);

#define VkglTestCase_020084_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020084_2 "andom.basic_expression.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020084, VkglTestCase_020084_1, VkglTestCase_020084_2);

#define VkglTestCase_020085_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020085_2 "andom.basic_expression.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020085, VkglTestCase_020085_1, VkglTestCase_020085_2);

#define VkglTestCase_020086_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020086_2 "andom.basic_expression.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020086, VkglTestCase_020086_1, VkglTestCase_020086_2);

#define VkglTestCase_020087_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020087_2 "andom.basic_expression.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020087, VkglTestCase_020087_1, VkglTestCase_020087_2);

#define VkglTestCase_020088_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020088_2 "andom.basic_expression.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020088, VkglTestCase_020088_1, VkglTestCase_020088_2);

#define VkglTestCase_020089_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020089_2 "andom.basic_expression.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020089, VkglTestCase_020089_1, VkglTestCase_020089_2);

#define VkglTestCase_020090_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020090_2 "andom.basic_expression.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020090, VkglTestCase_020090_1, VkglTestCase_020090_2);

#define VkglTestCase_020091_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020091_2 "andom.basic_expression.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020091, VkglTestCase_020091_1, VkglTestCase_020091_2);

#define VkglTestCase_020092_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020092_2 "andom.basic_expression.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020092, VkglTestCase_020092_1, VkglTestCase_020092_2);

#define VkglTestCase_020093_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020093_2 "andom.basic_expression.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020093, VkglTestCase_020093_1, VkglTestCase_020093_2);
