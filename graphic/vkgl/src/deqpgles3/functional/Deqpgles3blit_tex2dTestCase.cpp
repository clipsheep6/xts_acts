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

#define VkglTestCase_031964_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031964_2 "repeated_clear.blit.tex2d.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031964, VkglTestCase_031964_1, VkglTestCase_031964_2);

#define VkglTestCase_031965_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031965_2 "epeated_clear.blit.tex2d.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031965, VkglTestCase_031965_1, VkglTestCase_031965_2);

#define VkglTestCase_031966_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031966_2 "repeated_clear.blit.tex2d.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031966, VkglTestCase_031966_1, VkglTestCase_031966_2);

#define VkglTestCase_031967_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031967_2 "epeated_clear.blit.tex2d.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031967, VkglTestCase_031967_1, VkglTestCase_031967_2);

#define VkglTestCase_031968_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031968_2 ".repeated_clear.blit.tex2d.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031968, VkglTestCase_031968_1, VkglTestCase_031968_2);

#define VkglTestCase_031969_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031969_2 "repeated_clear.blit.tex2d.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031969, VkglTestCase_031969_1, VkglTestCase_031969_2);

#define VkglTestCase_031970_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031970_2 "repeated_clear.blit.tex2d.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031970, VkglTestCase_031970_1, VkglTestCase_031970_2);

#define VkglTestCase_031971_1 "dEQP-GLES3.functional.fbo.color.rep"
#define VkglTestCase_031971_2 "eated_clear.blit.tex2d.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031971, VkglTestCase_031971_1, VkglTestCase_031971_2);

#define VkglTestCase_031972_1 "dEQP-GLES3.functional.fbo.color.r"
#define VkglTestCase_031972_2 "epeated_clear.blit.tex2d.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031972, VkglTestCase_031972_1, VkglTestCase_031972_2);

#define VkglTestCase_031973_1 "dEQP-GLES3.functional.fbo.color.re"
#define VkglTestCase_031973_2 "peated_clear.blit.tex2d.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031973, VkglTestCase_031973_1, VkglTestCase_031973_2);

#define VkglTestCase_031974_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031974_2 ".repeated_clear.blit.tex2d.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031974, VkglTestCase_031974_1, VkglTestCase_031974_2);

#define VkglTestCase_031975_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031975_2 "repeated_clear.blit.tex2d.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031975, VkglTestCase_031975_1, VkglTestCase_031975_2);

#define VkglTestCase_031976_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031976_2 ".repeated_clear.blit.tex2d.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031976, VkglTestCase_031976_1, VkglTestCase_031976_2);

#define VkglTestCase_031977_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031977_2 "repeated_clear.blit.tex2d.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031977, VkglTestCase_031977_1, VkglTestCase_031977_2);

#define VkglTestCase_031978_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031978_2 ".repeated_clear.blit.tex2d.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031978, VkglTestCase_031978_1, VkglTestCase_031978_2);

#define VkglTestCase_031979_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031979_2 "repeated_clear.blit.tex2d.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031979, VkglTestCase_031979_1, VkglTestCase_031979_2);

#define VkglTestCase_031980_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031980_2 ".repeated_clear.blit.tex2d.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031980, VkglTestCase_031980_1, VkglTestCase_031980_2);

#define VkglTestCase_031981_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031981_2 "repeated_clear.blit.tex2d.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031981, VkglTestCase_031981_1, VkglTestCase_031981_2);

#define VkglTestCase_031982_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_031982_2 "r.repeated_clear.blit.tex2d.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031982, VkglTestCase_031982_1, VkglTestCase_031982_2);

#define VkglTestCase_031983_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031983_2 ".repeated_clear.blit.tex2d.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031983, VkglTestCase_031983_1, VkglTestCase_031983_2);

#define VkglTestCase_031984_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031984_2 ".repeated_clear.blit.tex2d.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031984, VkglTestCase_031984_1, VkglTestCase_031984_2);

#define VkglTestCase_031985_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031985_2 ".repeated_clear.blit.tex2d.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031985, VkglTestCase_031985_1, VkglTestCase_031985_2);

#define VkglTestCase_031986_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031986_2 ".repeated_clear.blit.tex2d.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031986, VkglTestCase_031986_1, VkglTestCase_031986_2);

#define VkglTestCase_031987_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031987_2 ".repeated_clear.blit.tex2d.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031987, VkglTestCase_031987_1, VkglTestCase_031987_2);

#define VkglTestCase_031988_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031988_2 ".repeated_clear.blit.tex2d.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031988, VkglTestCase_031988_1, VkglTestCase_031988_2);

#define VkglTestCase_031989_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_031989_2 "r.repeated_clear.blit.tex2d.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031989, VkglTestCase_031989_1, VkglTestCase_031989_2);

#define VkglTestCase_031990_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_031990_2 "r.repeated_clear.blit.tex2d.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031990, VkglTestCase_031990_1, VkglTestCase_031990_2);

#define VkglTestCase_031991_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031991_2 ".repeated_clear.blit.tex2d.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031991, VkglTestCase_031991_1, VkglTestCase_031991_2);

#define VkglTestCase_031992_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031992_2 "repeated_clear.blit.tex2d.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031992, VkglTestCase_031992_1, VkglTestCase_031992_2);

#define VkglTestCase_031993_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031993_2 "repeated_clear.blit.tex2d.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031993, VkglTestCase_031993_1, VkglTestCase_031993_2);

#define VkglTestCase_031994_1 "dEQP-GLES3.functional.fbo.color.repe"
#define VkglTestCase_031994_2 "ated_clear.blit.tex2d.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031994, VkglTestCase_031994_1, VkglTestCase_031994_2);

#define VkglTestCase_031995_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031995_2 ".repeated_clear.blit.tex2d.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031995, VkglTestCase_031995_1, VkglTestCase_031995_2);

#define VkglTestCase_031996_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031996_2 ".repeated_clear.blit.tex2d.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031996, VkglTestCase_031996_1, VkglTestCase_031996_2);

#define VkglTestCase_031997_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031997_2 ".repeated_clear.blit.tex2d.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031997, VkglTestCase_031997_1, VkglTestCase_031997_2);

#define VkglTestCase_031998_1 "dEQP-GLES3.functional.fbo.color"
#define VkglTestCase_031998_2 ".repeated_clear.blit.tex2d.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031998, VkglTestCase_031998_1, VkglTestCase_031998_2);

#define VkglTestCase_031999_1 "dEQP-GLES3.functional.fbo.color."
#define VkglTestCase_031999_2 "repeated_clear.blit.tex2d.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031999, VkglTestCase_031999_1, VkglTestCase_031999_2);
