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

#define VkglTestCase_031842_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031842_2 ".color.tex2darray.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031842, VkglTestCase_031842_1, VkglTestCase_031842_2);

#define VkglTestCase_031843_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031843_2 ".color.tex2darray.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031843, VkglTestCase_031843_1, VkglTestCase_031843_2);

#define VkglTestCase_031844_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031844_2 ".color.tex2darray.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031844, VkglTestCase_031844_1, VkglTestCase_031844_2);

#define VkglTestCase_031845_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031845_2 ".color.tex2darray.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031845, VkglTestCase_031845_1, VkglTestCase_031845_2);

#define VkglTestCase_031846_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031846_2 "o.color.tex2darray.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031846, VkglTestCase_031846_1, VkglTestCase_031846_2);

#define VkglTestCase_031847_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031847_2 "o.color.tex2darray.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031847, VkglTestCase_031847_1, VkglTestCase_031847_2);

#define VkglTestCase_031848_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031848_2 ".color.tex2darray.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031848, VkglTestCase_031848_1, VkglTestCase_031848_2);

#define VkglTestCase_031849_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031849_2 "olor.tex2darray.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031849, VkglTestCase_031849_1, VkglTestCase_031849_2);

#define VkglTestCase_031850_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031850_2 ".color.tex2darray.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031850, VkglTestCase_031850_1, VkglTestCase_031850_2);

#define VkglTestCase_031851_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031851_2 "color.tex2darray.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031851, VkglTestCase_031851_1, VkglTestCase_031851_2);

#define VkglTestCase_031852_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031852_2 "o.color.tex2darray.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031852, VkglTestCase_031852_1, VkglTestCase_031852_2);

#define VkglTestCase_031853_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031853_2 ".color.tex2darray.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031853, VkglTestCase_031853_1, VkglTestCase_031853_2);

#define VkglTestCase_031854_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031854_2 "bo.color.tex2darray.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031854, VkglTestCase_031854_1, VkglTestCase_031854_2);

#define VkglTestCase_031855_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031855_2 "o.color.tex2darray.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031855, VkglTestCase_031855_1, VkglTestCase_031855_2);

#define VkglTestCase_031856_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031856_2 "o.color.tex2darray.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031856, VkglTestCase_031856_1, VkglTestCase_031856_2);

#define VkglTestCase_031857_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031857_2 "o.color.tex2darray.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031857, VkglTestCase_031857_1, VkglTestCase_031857_2);

#define VkglTestCase_031858_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031858_2 "o.color.tex2darray.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031858, VkglTestCase_031858_1, VkglTestCase_031858_2);

#define VkglTestCase_031859_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031859_2 "o.color.tex2darray.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031859, VkglTestCase_031859_1, VkglTestCase_031859_2);

#define VkglTestCase_031860_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031860_2 "bo.color.tex2darray.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031860, VkglTestCase_031860_1, VkglTestCase_031860_2);

#define VkglTestCase_031861_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031861_2 "bo.color.tex2darray.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031861, VkglTestCase_031861_1, VkglTestCase_031861_2);

#define VkglTestCase_031862_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031862_2 "o.color.tex2darray.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031862, VkglTestCase_031862_1, VkglTestCase_031862_2);

#define VkglTestCase_031863_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031863_2 "bo.color.tex2darray.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031863, VkglTestCase_031863_1, VkglTestCase_031863_2);

#define VkglTestCase_031864_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031864_2 "o.color.tex2darray.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031864, VkglTestCase_031864_1, VkglTestCase_031864_2);

#define VkglTestCase_031865_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031865_2 "bo.color.tex2darray.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031865, VkglTestCase_031865_1, VkglTestCase_031865_2);

#define VkglTestCase_031866_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031866_2 "o.color.tex2darray.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031866, VkglTestCase_031866_1, VkglTestCase_031866_2);

#define VkglTestCase_031867_1 "dEQP-GLES3.functional."
#define VkglTestCase_031867_2 "fbo.color.tex2darray.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031867, VkglTestCase_031867_1, VkglTestCase_031867_2);

#define VkglTestCase_031868_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031868_2 "bo.color.tex2darray.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031868, VkglTestCase_031868_1, VkglTestCase_031868_2);

#define VkglTestCase_031869_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031869_2 "bo.color.tex2darray.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031869, VkglTestCase_031869_1, VkglTestCase_031869_2);

#define VkglTestCase_031870_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031870_2 ".color.tex2darray.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031870, VkglTestCase_031870_1, VkglTestCase_031870_2);

#define VkglTestCase_031871_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031871_2 ".color.tex2darray.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031871, VkglTestCase_031871_1, VkglTestCase_031871_2);

#define VkglTestCase_031872_1 "dEQP-GLES3.functional.fbo.co"
#define VkglTestCase_031872_2 "lor.tex2darray.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031872, VkglTestCase_031872_1, VkglTestCase_031872_2);

#define VkglTestCase_031873_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031873_2 "o.color.tex2darray.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031873, VkglTestCase_031873_1, VkglTestCase_031873_2);

#define VkglTestCase_031874_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031874_2 "o.color.tex2darray.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031874, VkglTestCase_031874_1, VkglTestCase_031874_2);

#define VkglTestCase_031875_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031875_2 "bo.color.tex2darray.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031875, VkglTestCase_031875_1, VkglTestCase_031875_2);

#define VkglTestCase_031876_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031876_2 "bo.color.tex2darray.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031876, VkglTestCase_031876_1, VkglTestCase_031876_2);

#define VkglTestCase_031877_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031877_2 "o.color.tex2darray.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031877, VkglTestCase_031877_1, VkglTestCase_031877_2);
