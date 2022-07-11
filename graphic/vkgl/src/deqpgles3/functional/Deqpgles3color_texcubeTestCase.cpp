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

#define VkglTestCase_031806_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031806_2 "bo.color.texcube.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031806, VkglTestCase_031806_1, VkglTestCase_031806_2);

#define VkglTestCase_031807_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031807_2 "o.color.texcube.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031807, VkglTestCase_031807_1, VkglTestCase_031807_2);

#define VkglTestCase_031808_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031808_2 "bo.color.texcube.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031808, VkglTestCase_031808_1, VkglTestCase_031808_2);

#define VkglTestCase_031809_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031809_2 "o.color.texcube.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031809, VkglTestCase_031809_1, VkglTestCase_031809_2);

#define VkglTestCase_031810_1 "dEQP-GLES3.functional."
#define VkglTestCase_031810_2 "fbo.color.texcube.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031810, VkglTestCase_031810_1, VkglTestCase_031810_2);

#define VkglTestCase_031811_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031811_2 "bo.color.texcube.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031811, VkglTestCase_031811_1, VkglTestCase_031811_2);

#define VkglTestCase_031812_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031812_2 "bo.color.texcube.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031812, VkglTestCase_031812_1, VkglTestCase_031812_2);

#define VkglTestCase_031813_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031813_2 "color.texcube.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031813, VkglTestCase_031813_1, VkglTestCase_031813_2);

#define VkglTestCase_031814_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031814_2 "o.color.texcube.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031814, VkglTestCase_031814_1, VkglTestCase_031814_2);

#define VkglTestCase_031815_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031815_2 ".color.texcube.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031815, VkglTestCase_031815_1, VkglTestCase_031815_2);

#define VkglTestCase_031816_1 "dEQP-GLES3.functional."
#define VkglTestCase_031816_2 "fbo.color.texcube.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031816, VkglTestCase_031816_1, VkglTestCase_031816_2);

#define VkglTestCase_031817_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031817_2 "bo.color.texcube.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031817, VkglTestCase_031817_1, VkglTestCase_031817_2);

#define VkglTestCase_031818_1 "dEQP-GLES3.functional."
#define VkglTestCase_031818_2 "fbo.color.texcube.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031818, VkglTestCase_031818_1, VkglTestCase_031818_2);

#define VkglTestCase_031819_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031819_2 "bo.color.texcube.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031819, VkglTestCase_031819_1, VkglTestCase_031819_2);

#define VkglTestCase_031820_1 "dEQP-GLES3.functional."
#define VkglTestCase_031820_2 "fbo.color.texcube.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031820, VkglTestCase_031820_1, VkglTestCase_031820_2);

#define VkglTestCase_031821_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031821_2 "bo.color.texcube.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031821, VkglTestCase_031821_1, VkglTestCase_031821_2);

#define VkglTestCase_031822_1 "dEQP-GLES3.functional."
#define VkglTestCase_031822_2 "fbo.color.texcube.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031822, VkglTestCase_031822_1, VkglTestCase_031822_2);

#define VkglTestCase_031823_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031823_2 "bo.color.texcube.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031823, VkglTestCase_031823_1, VkglTestCase_031823_2);

#define VkglTestCase_031824_1 "dEQP-GLES3.functional"
#define VkglTestCase_031824_2 ".fbo.color.texcube.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031824, VkglTestCase_031824_1, VkglTestCase_031824_2);

#define VkglTestCase_031825_1 "dEQP-GLES3.functional."
#define VkglTestCase_031825_2 "fbo.color.texcube.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031825, VkglTestCase_031825_1, VkglTestCase_031825_2);

#define VkglTestCase_031826_1 "dEQP-GLES3.functional."
#define VkglTestCase_031826_2 "fbo.color.texcube.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031826, VkglTestCase_031826_1, VkglTestCase_031826_2);

#define VkglTestCase_031827_1 "dEQP-GLES3.functional."
#define VkglTestCase_031827_2 "fbo.color.texcube.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031827, VkglTestCase_031827_1, VkglTestCase_031827_2);

#define VkglTestCase_031828_1 "dEQP-GLES3.functional."
#define VkglTestCase_031828_2 "fbo.color.texcube.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031828, VkglTestCase_031828_1, VkglTestCase_031828_2);

#define VkglTestCase_031829_1 "dEQP-GLES3.functional."
#define VkglTestCase_031829_2 "fbo.color.texcube.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031829, VkglTestCase_031829_1, VkglTestCase_031829_2);

#define VkglTestCase_031830_1 "dEQP-GLES3.functional."
#define VkglTestCase_031830_2 "fbo.color.texcube.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031830, VkglTestCase_031830_1, VkglTestCase_031830_2);

#define VkglTestCase_031831_1 "dEQP-GLES3.functional"
#define VkglTestCase_031831_2 ".fbo.color.texcube.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031831, VkglTestCase_031831_1, VkglTestCase_031831_2);

#define VkglTestCase_031832_1 "dEQP-GLES3.functional"
#define VkglTestCase_031832_2 ".fbo.color.texcube.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031832, VkglTestCase_031832_1, VkglTestCase_031832_2);

#define VkglTestCase_031833_1 "dEQP-GLES3.functional."
#define VkglTestCase_031833_2 "fbo.color.texcube.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031833, VkglTestCase_031833_1, VkglTestCase_031833_2);

#define VkglTestCase_031834_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031834_2 "bo.color.texcube.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031834, VkglTestCase_031834_1, VkglTestCase_031834_2);

#define VkglTestCase_031835_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031835_2 "bo.color.texcube.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031835, VkglTestCase_031835_1, VkglTestCase_031835_2);

#define VkglTestCase_031836_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031836_2 "olor.texcube.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031836, VkglTestCase_031836_1, VkglTestCase_031836_2);

#define VkglTestCase_031837_1 "dEQP-GLES3.functional."
#define VkglTestCase_031837_2 "fbo.color.texcube.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031837, VkglTestCase_031837_1, VkglTestCase_031837_2);

#define VkglTestCase_031838_1 "dEQP-GLES3.functional."
#define VkglTestCase_031838_2 "fbo.color.texcube.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031838, VkglTestCase_031838_1, VkglTestCase_031838_2);

#define VkglTestCase_031839_1 "dEQP-GLES3.functional."
#define VkglTestCase_031839_2 "fbo.color.texcube.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031839, VkglTestCase_031839_1, VkglTestCase_031839_2);

#define VkglTestCase_031840_1 "dEQP-GLES3.functional."
#define VkglTestCase_031840_2 "fbo.color.texcube.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031840, VkglTestCase_031840_1, VkglTestCase_031840_2);

#define VkglTestCase_031841_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031841_2 "bo.color.texcube.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031841, VkglTestCase_031841_1, VkglTestCase_031841_2);
