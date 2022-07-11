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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031928_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031928_2 "epeated_clear.sample.tex2d.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031928, VkglTestCase_031928_1, VkglTestCase_031928_2);

#define VkglTestCase_031929_1 "dEQP-GLES3.functional.fbo.color.re"
#define VkglTestCase_031929_2 "peated_clear.sample.tex2d.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031929, VkglTestCase_031929_1, VkglTestCase_031929_2);

#define VkglTestCase_031930_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031930_2 "epeated_clear.sample.tex2d.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031930, VkglTestCase_031930_1, VkglTestCase_031930_2);

#define VkglTestCase_031931_1 "dEQP-GLES3.functional.fbo.color.re"
#define VkglTestCase_031931_2 "peated_clear.sample.tex2d.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031931, VkglTestCase_031931_1, VkglTestCase_031931_2);

#define VkglTestCase_031932_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031932_2 "repeated_clear.sample.tex2d.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031932, VkglTestCase_031932_1, VkglTestCase_031932_2);

#define VkglTestCase_031933_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031933_2 "epeated_clear.sample.tex2d.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031933, VkglTestCase_031933_1, VkglTestCase_031933_2);

#define VkglTestCase_031934_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031934_2 "epeated_clear.sample.tex2d.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031934, VkglTestCase_031934_1, VkglTestCase_031934_2);

#define VkglTestCase_031935_1 "dEQP-GLES3.functional.fbo.color.repe"
#define VkglTestCase_031935_2 "ated_clear.sample.tex2d.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031935, VkglTestCase_031935_1, VkglTestCase_031935_2);

#define VkglTestCase_031936_1 "dEQP-GLES3.functional.fbo.color.re"
#define VkglTestCase_031936_2 "peated_clear.sample.tex2d.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031936, VkglTestCase_031936_1, VkglTestCase_031936_2);

#define VkglTestCase_031937_1 "dEQP-GLES3.functional.fbo.color.rep"
#define VkglTestCase_031937_2 "eated_clear.sample.tex2d.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031937, VkglTestCase_031937_1, VkglTestCase_031937_2);

#define VkglTestCase_031938_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031938_2 "repeated_clear.sample.tex2d.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031938, VkglTestCase_031938_1, VkglTestCase_031938_2);

#define VkglTestCase_031939_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031939_2 "epeated_clear.sample.tex2d.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031939, VkglTestCase_031939_1, VkglTestCase_031939_2);

#define VkglTestCase_031940_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031940_2 "repeated_clear.sample.tex2d.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031940, VkglTestCase_031940_1, VkglTestCase_031940_2);

#define VkglTestCase_031941_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031941_2 "epeated_clear.sample.tex2d.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031941, VkglTestCase_031941_1, VkglTestCase_031941_2);

#define VkglTestCase_031942_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031942_2 "repeated_clear.sample.tex2d.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031942, VkglTestCase_031942_1, VkglTestCase_031942_2);

#define VkglTestCase_031943_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031943_2 "epeated_clear.sample.tex2d.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031943, VkglTestCase_031943_1, VkglTestCase_031943_2);

#define VkglTestCase_031944_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031944_2 "repeated_clear.sample.tex2d.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031944, VkglTestCase_031944_1, VkglTestCase_031944_2);

#define VkglTestCase_031945_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031945_2 "epeated_clear.sample.tex2d.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031945, VkglTestCase_031945_1, VkglTestCase_031945_2);

#define VkglTestCase_031946_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031946_2 ".repeated_clear.sample.tex2d.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031946, VkglTestCase_031946_1, VkglTestCase_031946_2);

#define VkglTestCase_031947_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031947_2 "repeated_clear.sample.tex2d.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031947, VkglTestCase_031947_1, VkglTestCase_031947_2);

#define VkglTestCase_031948_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031948_2 "repeated_clear.sample.tex2d.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031948, VkglTestCase_031948_1, VkglTestCase_031948_2);

#define VkglTestCase_031949_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031949_2 "repeated_clear.sample.tex2d.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031949, VkglTestCase_031949_1, VkglTestCase_031949_2);

#define VkglTestCase_031950_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031950_2 "repeated_clear.sample.tex2d.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031950, VkglTestCase_031950_1, VkglTestCase_031950_2);

#define VkglTestCase_031951_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031951_2 "repeated_clear.sample.tex2d.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031951, VkglTestCase_031951_1, VkglTestCase_031951_2);

#define VkglTestCase_031952_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031952_2 "repeated_clear.sample.tex2d.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031952, VkglTestCase_031952_1, VkglTestCase_031952_2);

#define VkglTestCase_031953_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031953_2 ".repeated_clear.sample.tex2d.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031953, VkglTestCase_031953_1, VkglTestCase_031953_2);

#define VkglTestCase_031954_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031954_2 ".repeated_clear.sample.tex2d.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031954, VkglTestCase_031954_1, VkglTestCase_031954_2);

#define VkglTestCase_031955_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031955_2 "repeated_clear.sample.tex2d.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031955, VkglTestCase_031955_1, VkglTestCase_031955_2);

#define VkglTestCase_031956_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031956_2 "epeated_clear.sample.tex2d.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031956, VkglTestCase_031956_1, VkglTestCase_031956_2);

#define VkglTestCase_031957_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031957_2 "epeated_clear.sample.tex2d.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031957, VkglTestCase_031957_1, VkglTestCase_031957_2);

#define VkglTestCase_031958_1 "dEQP-GLES3.functional.fbo.color.repea"
#define VkglTestCase_031958_2 "ted_clear.sample.tex2d.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031958, VkglTestCase_031958_1, VkglTestCase_031958_2);

#define VkglTestCase_031959_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031959_2 "repeated_clear.sample.tex2d.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031959, VkglTestCase_031959_1, VkglTestCase_031959_2);

#define VkglTestCase_031960_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031960_2 "repeated_clear.sample.tex2d.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031960, VkglTestCase_031960_1, VkglTestCase_031960_2);

#define VkglTestCase_031961_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031961_2 "repeated_clear.sample.tex2d.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031961, VkglTestCase_031961_1, VkglTestCase_031961_2);

#define VkglTestCase_031962_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031962_2 "repeated_clear.sample.tex2d.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031962, VkglTestCase_031962_1, VkglTestCase_031962_2);

#define VkglTestCase_031963_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031963_2 "epeated_clear.sample.tex2d.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031963, VkglTestCase_031963_1, VkglTestCase_031963_2);
