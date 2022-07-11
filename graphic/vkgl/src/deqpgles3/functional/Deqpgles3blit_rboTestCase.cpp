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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032000_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032000_2 ".repeated_clear.blit.rbo.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032000, VkglTestCase_032000_1, VkglTestCase_032000_2);

#define VkglTestCase_032001_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_032001_2 "repeated_clear.blit.rbo.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032001, VkglTestCase_032001_1, VkglTestCase_032001_2);

#define VkglTestCase_032002_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032002_2 ".repeated_clear.blit.rbo.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032002, VkglTestCase_032002_1, VkglTestCase_032002_2);

#define VkglTestCase_032003_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_032003_2 "repeated_clear.blit.rbo.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032003, VkglTestCase_032003_1, VkglTestCase_032003_2);

#define VkglTestCase_032004_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032004_2 "r.repeated_clear.blit.rbo.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032004, VkglTestCase_032004_1, VkglTestCase_032004_2);

#define VkglTestCase_032005_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032005_2 ".repeated_clear.blit.rbo.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032005, VkglTestCase_032005_1, VkglTestCase_032005_2);

#define VkglTestCase_032006_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032006_2 ".repeated_clear.blit.rbo.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032006, VkglTestCase_032006_1, VkglTestCase_032006_2);

#define VkglTestCase_032007_1 "dEQP-GLES3.functional.fbo.color.re"
#define VkglTestCase_032007_2 "peated_clear.blit.rbo.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032007, VkglTestCase_032007_1, VkglTestCase_032007_2);

#define VkglTestCase_032008_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_032008_2 "repeated_clear.blit.rbo.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032008, VkglTestCase_032008_1, VkglTestCase_032008_2);

#define VkglTestCase_032009_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_032009_2 "epeated_clear.blit.rbo.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032009, VkglTestCase_032009_1, VkglTestCase_032009_2);

#define VkglTestCase_032010_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032010_2 "r.repeated_clear.blit.rbo.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032010, VkglTestCase_032010_1, VkglTestCase_032010_2);

#define VkglTestCase_032011_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032011_2 ".repeated_clear.blit.rbo.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032011, VkglTestCase_032011_1, VkglTestCase_032011_2);

#define VkglTestCase_032012_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032012_2 "r.repeated_clear.blit.rbo.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032012, VkglTestCase_032012_1, VkglTestCase_032012_2);

#define VkglTestCase_032013_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032013_2 ".repeated_clear.blit.rbo.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032013, VkglTestCase_032013_1, VkglTestCase_032013_2);

#define VkglTestCase_032014_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032014_2 "r.repeated_clear.blit.rbo.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032014, VkglTestCase_032014_1, VkglTestCase_032014_2);

#define VkglTestCase_032015_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032015_2 ".repeated_clear.blit.rbo.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032015, VkglTestCase_032015_1, VkglTestCase_032015_2);

#define VkglTestCase_032016_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032016_2 "r.repeated_clear.blit.rbo.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032016, VkglTestCase_032016_1, VkglTestCase_032016_2);

#define VkglTestCase_032017_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032017_2 ".repeated_clear.blit.rbo.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032017, VkglTestCase_032017_1, VkglTestCase_032017_2);

#define VkglTestCase_032018_1 "dEQP-GLES3.functional.fbo.col"
#define VkglTestCase_032018_2 "or.repeated_clear.blit.rbo.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032018, VkglTestCase_032018_1, VkglTestCase_032018_2);

#define VkglTestCase_032019_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032019_2 "r.repeated_clear.blit.rbo.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032019, VkglTestCase_032019_1, VkglTestCase_032019_2);

#define VkglTestCase_032020_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032020_2 "r.repeated_clear.blit.rbo.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032020, VkglTestCase_032020_1, VkglTestCase_032020_2);

#define VkglTestCase_032021_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032021_2 "r.repeated_clear.blit.rbo.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032021, VkglTestCase_032021_1, VkglTestCase_032021_2);

#define VkglTestCase_032022_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032022_2 "r.repeated_clear.blit.rbo.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032022, VkglTestCase_032022_1, VkglTestCase_032022_2);

#define VkglTestCase_032023_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032023_2 "r.repeated_clear.blit.rbo.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032023, VkglTestCase_032023_1, VkglTestCase_032023_2);

#define VkglTestCase_032024_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032024_2 "r.repeated_clear.blit.rbo.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032024, VkglTestCase_032024_1, VkglTestCase_032024_2);

#define VkglTestCase_032025_1 "dEQP-GLES3.functional.fbo.col"
#define VkglTestCase_032025_2 "or.repeated_clear.blit.rbo.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032025, VkglTestCase_032025_1, VkglTestCase_032025_2);

#define VkglTestCase_032026_1 "dEQP-GLES3.functional.fbo.col"
#define VkglTestCase_032026_2 "or.repeated_clear.blit.rbo.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032026, VkglTestCase_032026_1, VkglTestCase_032026_2);

#define VkglTestCase_032027_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032027_2 "r.repeated_clear.blit.rbo.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032027, VkglTestCase_032027_1, VkglTestCase_032027_2);

#define VkglTestCase_032028_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032028_2 ".repeated_clear.blit.rbo.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032028, VkglTestCase_032028_1, VkglTestCase_032028_2);

#define VkglTestCase_032029_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032029_2 ".repeated_clear.blit.rbo.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032029, VkglTestCase_032029_1, VkglTestCase_032029_2);

#define VkglTestCase_032030_1 "dEQP-GLES3.functional.fbo.color.rep"
#define VkglTestCase_032030_2 "eated_clear.blit.rbo.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032030, VkglTestCase_032030_1, VkglTestCase_032030_2);

#define VkglTestCase_032031_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032031_2 "r.repeated_clear.blit.rbo.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032031, VkglTestCase_032031_1, VkglTestCase_032031_2);

#define VkglTestCase_032032_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032032_2 "r.repeated_clear.blit.rbo.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032032, VkglTestCase_032032_1, VkglTestCase_032032_2);

#define VkglTestCase_032033_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032033_2 "r.repeated_clear.blit.rbo.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032033, VkglTestCase_032033_1, VkglTestCase_032033_2);

#define VkglTestCase_032034_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_032034_2 "r.repeated_clear.blit.rbo.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032034, VkglTestCase_032034_1, VkglTestCase_032034_2);

#define VkglTestCase_032035_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_032035_2 ".repeated_clear.blit.rbo.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032035, VkglTestCase_032035_1, VkglTestCase_032035_2);
