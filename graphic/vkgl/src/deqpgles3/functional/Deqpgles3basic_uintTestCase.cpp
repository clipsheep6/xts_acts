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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039020_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039020_2 "ut.basic.uint.rgba32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039020, VkglTestCase_039020_1, VkglTestCase_039020_2);

#define VkglTestCase_039021_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039021_2 "ut.basic.uint.rgba32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039021, VkglTestCase_039021_1, VkglTestCase_039021_2);

#define VkglTestCase_039022_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039022_2 "ut.basic.uint.rgba32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039022, VkglTestCase_039022_1, VkglTestCase_039022_2);

#define VkglTestCase_039023_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039023_2 "ut.basic.uint.rgba32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039023, VkglTestCase_039023_1, VkglTestCase_039023_2);

#define VkglTestCase_039024_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039024_2 "t.basic.uint.rgba32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039024, VkglTestCase_039024_1, VkglTestCase_039024_2);

#define VkglTestCase_039025_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039025_2 ".basic.uint.rgba32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039025, VkglTestCase_039025_1, VkglTestCase_039025_2);

#define VkglTestCase_039026_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039026_2 ".basic.uint.rgba32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039026, VkglTestCase_039026_1, VkglTestCase_039026_2);

#define VkglTestCase_039027_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039027_2 ".basic.uint.rgba32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039027, VkglTestCase_039027_1, VkglTestCase_039027_2);

#define VkglTestCase_039028_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039028_2 "ut.basic.uint.rgba32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039028, VkglTestCase_039028_1, VkglTestCase_039028_2);

#define VkglTestCase_039029_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039029_2 "t.basic.uint.rgba32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039029, VkglTestCase_039029_1, VkglTestCase_039029_2);

#define VkglTestCase_039030_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039030_2 "t.basic.uint.rgba32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039030, VkglTestCase_039030_1, VkglTestCase_039030_2);

#define VkglTestCase_039031_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039031_2 "t.basic.uint.rgba32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039031, VkglTestCase_039031_1, VkglTestCase_039031_2);

#define VkglTestCase_039032_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039032_2 "ut.basic.uint.rgba16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039032, VkglTestCase_039032_1, VkglTestCase_039032_2);

#define VkglTestCase_039033_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039033_2 "ut.basic.uint.rgba16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039033, VkglTestCase_039033_1, VkglTestCase_039033_2);

#define VkglTestCase_039034_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039034_2 "ut.basic.uint.rgba16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039034, VkglTestCase_039034_1, VkglTestCase_039034_2);

#define VkglTestCase_039035_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039035_2 "ut.basic.uint.rgba16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039035, VkglTestCase_039035_1, VkglTestCase_039035_2);

#define VkglTestCase_039036_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039036_2 "t.basic.uint.rgba16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039036, VkglTestCase_039036_1, VkglTestCase_039036_2);

#define VkglTestCase_039037_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039037_2 ".basic.uint.rgba16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039037, VkglTestCase_039037_1, VkglTestCase_039037_2);

#define VkglTestCase_039038_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039038_2 ".basic.uint.rgba16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039038, VkglTestCase_039038_1, VkglTestCase_039038_2);

#define VkglTestCase_039039_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039039_2 ".basic.uint.rgba16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039039, VkglTestCase_039039_1, VkglTestCase_039039_2);

#define VkglTestCase_039040_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039040_2 "ut.basic.uint.rgba16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039040, VkglTestCase_039040_1, VkglTestCase_039040_2);

#define VkglTestCase_039041_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039041_2 "t.basic.uint.rgba16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039041, VkglTestCase_039041_1, VkglTestCase_039041_2);

#define VkglTestCase_039042_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039042_2 "t.basic.uint.rgba16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039042, VkglTestCase_039042_1, VkglTestCase_039042_2);

#define VkglTestCase_039043_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039043_2 "t.basic.uint.rgba16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039043, VkglTestCase_039043_1, VkglTestCase_039043_2);

#define VkglTestCase_039044_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039044_2 "out.basic.uint.rgba8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039044, VkglTestCase_039044_1, VkglTestCase_039044_2);

#define VkglTestCase_039045_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039045_2 "ut.basic.uint.rgba8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039045, VkglTestCase_039045_1, VkglTestCase_039045_2);

#define VkglTestCase_039046_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039046_2 "ut.basic.uint.rgba8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039046, VkglTestCase_039046_1, VkglTestCase_039046_2);

#define VkglTestCase_039047_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039047_2 "ut.basic.uint.rgba8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039047, VkglTestCase_039047_1, VkglTestCase_039047_2);

#define VkglTestCase_039048_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039048_2 "t.basic.uint.rgba8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039048, VkglTestCase_039048_1, VkglTestCase_039048_2);

#define VkglTestCase_039049_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039049_2 "t.basic.uint.rgba8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039049, VkglTestCase_039049_1, VkglTestCase_039049_2);

#define VkglTestCase_039050_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039050_2 "t.basic.uint.rgba8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039050, VkglTestCase_039050_1, VkglTestCase_039050_2);

#define VkglTestCase_039051_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039051_2 "t.basic.uint.rgba8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039051, VkglTestCase_039051_1, VkglTestCase_039051_2);

#define VkglTestCase_039052_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039052_2 "ut.basic.uint.rgba8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039052, VkglTestCase_039052_1, VkglTestCase_039052_2);

#define VkglTestCase_039053_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039053_2 "ut.basic.uint.rgba8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039053, VkglTestCase_039053_1, VkglTestCase_039053_2);

#define VkglTestCase_039054_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039054_2 "ut.basic.uint.rgba8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039054, VkglTestCase_039054_1, VkglTestCase_039054_2);

#define VkglTestCase_039055_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039055_2 "ut.basic.uint.rgba8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039055, VkglTestCase_039055_1, VkglTestCase_039055_2);

#define VkglTestCase_039056_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039056_2 "t.basic.uint.rgb10_a2ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039056, VkglTestCase_039056_1, VkglTestCase_039056_2);

#define VkglTestCase_039057_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039057_2 "t.basic.uint.rgb10_a2ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039057, VkglTestCase_039057_1, VkglTestCase_039057_2);

#define VkglTestCase_039058_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039058_2 "t.basic.uint.rgb10_a2ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039058, VkglTestCase_039058_1, VkglTestCase_039058_2);

#define VkglTestCase_039059_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039059_2 "t.basic.uint.rgb10_a2ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039059, VkglTestCase_039059_1, VkglTestCase_039059_2);

#define VkglTestCase_039060_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039060_2 ".basic.uint.rgb10_a2ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039060, VkglTestCase_039060_1, VkglTestCase_039060_2);

#define VkglTestCase_039061_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039061_2 "basic.uint.rgb10_a2ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039061, VkglTestCase_039061_1, VkglTestCase_039061_2);

#define VkglTestCase_039062_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039062_2 "basic.uint.rgb10_a2ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039062, VkglTestCase_039062_1, VkglTestCase_039062_2);

#define VkglTestCase_039063_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039063_2 "basic.uint.rgb10_a2ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039063, VkglTestCase_039063_1, VkglTestCase_039063_2);

#define VkglTestCase_039064_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039064_2 "t.basic.uint.rgb10_a2ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039064, VkglTestCase_039064_1, VkglTestCase_039064_2);

#define VkglTestCase_039065_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039065_2 ".basic.uint.rgb10_a2ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039065, VkglTestCase_039065_1, VkglTestCase_039065_2);

#define VkglTestCase_039066_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039066_2 ".basic.uint.rgb10_a2ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039066, VkglTestCase_039066_1, VkglTestCase_039066_2);

#define VkglTestCase_039067_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039067_2 ".basic.uint.rgb10_a2ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039067, VkglTestCase_039067_1, VkglTestCase_039067_2);

#define VkglTestCase_039068_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039068_2 "out.basic.uint.rg32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039068, VkglTestCase_039068_1, VkglTestCase_039068_2);

#define VkglTestCase_039069_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039069_2 "out.basic.uint.rg32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039069, VkglTestCase_039069_1, VkglTestCase_039069_2);

#define VkglTestCase_039070_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039070_2 "out.basic.uint.rg32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039070, VkglTestCase_039070_1, VkglTestCase_039070_2);

#define VkglTestCase_039071_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039071_2 "out.basic.uint.rg32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039071, VkglTestCase_039071_1, VkglTestCase_039071_2);

#define VkglTestCase_039072_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039072_2 "ut.basic.uint.rg32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039072, VkglTestCase_039072_1, VkglTestCase_039072_2);

#define VkglTestCase_039073_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039073_2 "t.basic.uint.rg32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039073, VkglTestCase_039073_1, VkglTestCase_039073_2);

#define VkglTestCase_039074_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039074_2 "t.basic.uint.rg32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039074, VkglTestCase_039074_1, VkglTestCase_039074_2);

#define VkglTestCase_039075_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039075_2 "t.basic.uint.rg32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039075, VkglTestCase_039075_1, VkglTestCase_039075_2);

#define VkglTestCase_039076_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039076_2 "out.basic.uint.rg32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039076, VkglTestCase_039076_1, VkglTestCase_039076_2);

#define VkglTestCase_039077_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039077_2 "ut.basic.uint.rg32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039077, VkglTestCase_039077_1, VkglTestCase_039077_2);

#define VkglTestCase_039078_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039078_2 "ut.basic.uint.rg32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039078, VkglTestCase_039078_1, VkglTestCase_039078_2);

#define VkglTestCase_039079_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039079_2 "ut.basic.uint.rg32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039079, VkglTestCase_039079_1, VkglTestCase_039079_2);

#define VkglTestCase_039080_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039080_2 "out.basic.uint.rg16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039080, VkglTestCase_039080_1, VkglTestCase_039080_2);

#define VkglTestCase_039081_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039081_2 "out.basic.uint.rg16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039081, VkglTestCase_039081_1, VkglTestCase_039081_2);

#define VkglTestCase_039082_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039082_2 "out.basic.uint.rg16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039082, VkglTestCase_039082_1, VkglTestCase_039082_2);

#define VkglTestCase_039083_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039083_2 "out.basic.uint.rg16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039083, VkglTestCase_039083_1, VkglTestCase_039083_2);

#define VkglTestCase_039084_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039084_2 "ut.basic.uint.rg16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039084, VkglTestCase_039084_1, VkglTestCase_039084_2);

#define VkglTestCase_039085_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039085_2 "t.basic.uint.rg16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039085, VkglTestCase_039085_1, VkglTestCase_039085_2);

#define VkglTestCase_039086_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039086_2 "t.basic.uint.rg16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039086, VkglTestCase_039086_1, VkglTestCase_039086_2);

#define VkglTestCase_039087_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039087_2 "t.basic.uint.rg16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039087, VkglTestCase_039087_1, VkglTestCase_039087_2);

#define VkglTestCase_039088_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039088_2 "out.basic.uint.rg16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039088, VkglTestCase_039088_1, VkglTestCase_039088_2);

#define VkglTestCase_039089_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039089_2 "ut.basic.uint.rg16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039089, VkglTestCase_039089_1, VkglTestCase_039089_2);

#define VkglTestCase_039090_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039090_2 "ut.basic.uint.rg16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039090, VkglTestCase_039090_1, VkglTestCase_039090_2);

#define VkglTestCase_039091_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039091_2 "ut.basic.uint.rg16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039091, VkglTestCase_039091_1, VkglTestCase_039091_2);

#define VkglTestCase_039092_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039092_2 "_out.basic.uint.rg8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039092, VkglTestCase_039092_1, VkglTestCase_039092_2);

#define VkglTestCase_039093_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039093_2 "out.basic.uint.rg8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039093, VkglTestCase_039093_1, VkglTestCase_039093_2);

#define VkglTestCase_039094_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039094_2 "out.basic.uint.rg8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039094, VkglTestCase_039094_1, VkglTestCase_039094_2);

#define VkglTestCase_039095_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039095_2 "out.basic.uint.rg8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039095, VkglTestCase_039095_1, VkglTestCase_039095_2);

#define VkglTestCase_039096_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039096_2 "ut.basic.uint.rg8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039096, VkglTestCase_039096_1, VkglTestCase_039096_2);

#define VkglTestCase_039097_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039097_2 "ut.basic.uint.rg8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039097, VkglTestCase_039097_1, VkglTestCase_039097_2);

#define VkglTestCase_039098_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039098_2 "ut.basic.uint.rg8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039098, VkglTestCase_039098_1, VkglTestCase_039098_2);

#define VkglTestCase_039099_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039099_2 "ut.basic.uint.rg8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039099, VkglTestCase_039099_1, VkglTestCase_039099_2);

#define VkglTestCase_039100_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039100_2 "out.basic.uint.rg8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039100, VkglTestCase_039100_1, VkglTestCase_039100_2);

#define VkglTestCase_039101_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039101_2 "out.basic.uint.rg8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039101, VkglTestCase_039101_1, VkglTestCase_039101_2);

#define VkglTestCase_039102_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039102_2 "out.basic.uint.rg8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039102, VkglTestCase_039102_1, VkglTestCase_039102_2);

#define VkglTestCase_039103_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039103_2 "out.basic.uint.rg8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039103, VkglTestCase_039103_1, VkglTestCase_039103_2);

#define VkglTestCase_039104_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039104_2 "_out.basic.uint.r32ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039104, VkglTestCase_039104_1, VkglTestCase_039104_2);

#define VkglTestCase_039105_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039105_2 "out.basic.uint.r32ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039105, VkglTestCase_039105_1, VkglTestCase_039105_2);

#define VkglTestCase_039106_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039106_2 "out.basic.uint.r32ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039106, VkglTestCase_039106_1, VkglTestCase_039106_2);

#define VkglTestCase_039107_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039107_2 "out.basic.uint.r32ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039107, VkglTestCase_039107_1, VkglTestCase_039107_2);

#define VkglTestCase_039108_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039108_2 "ut.basic.uint.r32ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039108, VkglTestCase_039108_1, VkglTestCase_039108_2);

#define VkglTestCase_039109_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039109_2 "ut.basic.uint.r32ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039109, VkglTestCase_039109_1, VkglTestCase_039109_2);

#define VkglTestCase_039110_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039110_2 "ut.basic.uint.r32ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039110, VkglTestCase_039110_1, VkglTestCase_039110_2);

#define VkglTestCase_039111_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039111_2 "ut.basic.uint.r32ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039111, VkglTestCase_039111_1, VkglTestCase_039111_2);

#define VkglTestCase_039112_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039112_2 "out.basic.uint.r32ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039112, VkglTestCase_039112_1, VkglTestCase_039112_2);

#define VkglTestCase_039113_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039113_2 "out.basic.uint.r32ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039113, VkglTestCase_039113_1, VkglTestCase_039113_2);

#define VkglTestCase_039114_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039114_2 "out.basic.uint.r32ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039114, VkglTestCase_039114_1, VkglTestCase_039114_2);

#define VkglTestCase_039115_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039115_2 "out.basic.uint.r32ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039115, VkglTestCase_039115_1, VkglTestCase_039115_2);

#define VkglTestCase_039116_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039116_2 "_out.basic.uint.r16ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039116, VkglTestCase_039116_1, VkglTestCase_039116_2);

#define VkglTestCase_039117_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039117_2 "out.basic.uint.r16ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039117, VkglTestCase_039117_1, VkglTestCase_039117_2);

#define VkglTestCase_039118_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039118_2 "out.basic.uint.r16ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039118, VkglTestCase_039118_1, VkglTestCase_039118_2);

#define VkglTestCase_039119_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039119_2 "out.basic.uint.r16ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039119, VkglTestCase_039119_1, VkglTestCase_039119_2);

#define VkglTestCase_039120_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039120_2 "ut.basic.uint.r16ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039120, VkglTestCase_039120_1, VkglTestCase_039120_2);

#define VkglTestCase_039121_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039121_2 "ut.basic.uint.r16ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039121, VkglTestCase_039121_1, VkglTestCase_039121_2);

#define VkglTestCase_039122_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039122_2 "ut.basic.uint.r16ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039122, VkglTestCase_039122_1, VkglTestCase_039122_2);

#define VkglTestCase_039123_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039123_2 "ut.basic.uint.r16ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039123, VkglTestCase_039123_1, VkglTestCase_039123_2);

#define VkglTestCase_039124_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039124_2 "out.basic.uint.r16ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039124, VkglTestCase_039124_1, VkglTestCase_039124_2);

#define VkglTestCase_039125_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039125_2 "out.basic.uint.r16ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039125, VkglTestCase_039125_1, VkglTestCase_039125_2);

#define VkglTestCase_039126_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039126_2 "out.basic.uint.r16ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039126, VkglTestCase_039126_1, VkglTestCase_039126_2);

#define VkglTestCase_039127_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039127_2 "out.basic.uint.r16ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039127, VkglTestCase_039127_1, VkglTestCase_039127_2);

#define VkglTestCase_039128_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039128_2 "_out.basic.uint.r8ui_lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039128, VkglTestCase_039128_1, VkglTestCase_039128_2);

#define VkglTestCase_039129_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039129_2 "_out.basic.uint.r8ui_lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039129, VkglTestCase_039129_1, VkglTestCase_039129_2);

#define VkglTestCase_039130_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039130_2 "_out.basic.uint.r8ui_lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039130, VkglTestCase_039130_1, VkglTestCase_039130_2);

#define VkglTestCase_039131_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039131_2 "_out.basic.uint.r8ui_lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039131, VkglTestCase_039131_1, VkglTestCase_039131_2);

#define VkglTestCase_039132_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039132_2 "out.basic.uint.r8ui_mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039132, VkglTestCase_039132_1, VkglTestCase_039132_2);

#define VkglTestCase_039133_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039133_2 "ut.basic.uint.r8ui_mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039133, VkglTestCase_039133_1, VkglTestCase_039133_2);

#define VkglTestCase_039134_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039134_2 "ut.basic.uint.r8ui_mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039134, VkglTestCase_039134_1, VkglTestCase_039134_2);

#define VkglTestCase_039135_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039135_2 "ut.basic.uint.r8ui_mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039135, VkglTestCase_039135_1, VkglTestCase_039135_2);

#define VkglTestCase_039136_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039136_2 "_out.basic.uint.r8ui_highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039136, VkglTestCase_039136_1, VkglTestCase_039136_2);

#define VkglTestCase_039137_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039137_2 "out.basic.uint.r8ui_highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039137, VkglTestCase_039137_1, VkglTestCase_039137_2);

#define VkglTestCase_039138_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039138_2 "out.basic.uint.r8ui_highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039138, VkglTestCase_039138_1, VkglTestCase_039138_2);

#define VkglTestCase_039139_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039139_2 "out.basic.uint.r8ui_highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039139, VkglTestCase_039139_1, VkglTestCase_039139_2);
