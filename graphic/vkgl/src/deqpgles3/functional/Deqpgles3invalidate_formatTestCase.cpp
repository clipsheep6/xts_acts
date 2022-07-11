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

#define VkglTestCase_032811_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032811_2 ".invalidate.format.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032811, VkglTestCase_032811_1, VkglTestCase_032811_2);

#define VkglTestCase_032812_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032812_2 "invalidate.format.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032812, VkglTestCase_032812_1, VkglTestCase_032812_2);

#define VkglTestCase_032813_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032813_2 ".invalidate.format.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032813, VkglTestCase_032813_1, VkglTestCase_032813_2);

#define VkglTestCase_032814_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032814_2 "invalidate.format.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032814, VkglTestCase_032814_1, VkglTestCase_032814_2);

#define VkglTestCase_032815_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032815_2 "o.invalidate.format.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032815, VkglTestCase_032815_1, VkglTestCase_032815_2);

#define VkglTestCase_032816_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032816_2 ".invalidate.format.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032816, VkglTestCase_032816_1, VkglTestCase_032816_2);

#define VkglTestCase_032817_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032817_2 ".invalidate.format.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032817, VkglTestCase_032817_1, VkglTestCase_032817_2);

#define VkglTestCase_032818_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032818_2 "validate.format.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032818, VkglTestCase_032818_1, VkglTestCase_032818_2);

#define VkglTestCase_032819_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032819_2 "invalidate.format.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032819, VkglTestCase_032819_1, VkglTestCase_032819_2);

#define VkglTestCase_032820_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032820_2 "nvalidate.format.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032820, VkglTestCase_032820_1, VkglTestCase_032820_2);

#define VkglTestCase_032821_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032821_2 "o.invalidate.format.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032821, VkglTestCase_032821_1, VkglTestCase_032821_2);

#define VkglTestCase_032822_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032822_2 ".invalidate.format.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032822, VkglTestCase_032822_1, VkglTestCase_032822_2);

#define VkglTestCase_032823_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032823_2 "o.invalidate.format.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032823, VkglTestCase_032823_1, VkglTestCase_032823_2);

#define VkglTestCase_032824_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032824_2 ".invalidate.format.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032824, VkglTestCase_032824_1, VkglTestCase_032824_2);

#define VkglTestCase_032825_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032825_2 "o.invalidate.format.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032825, VkglTestCase_032825_1, VkglTestCase_032825_2);

#define VkglTestCase_032826_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032826_2 ".invalidate.format.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032826, VkglTestCase_032826_1, VkglTestCase_032826_2);

#define VkglTestCase_032827_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032827_2 "o.invalidate.format.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032827, VkglTestCase_032827_1, VkglTestCase_032827_2);

#define VkglTestCase_032828_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032828_2 ".invalidate.format.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032828, VkglTestCase_032828_1, VkglTestCase_032828_2);

#define VkglTestCase_032829_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032829_2 "bo.invalidate.format.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032829, VkglTestCase_032829_1, VkglTestCase_032829_2);

#define VkglTestCase_032830_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032830_2 "o.invalidate.format.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032830, VkglTestCase_032830_1, VkglTestCase_032830_2);

#define VkglTestCase_032831_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032831_2 "o.invalidate.format.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032831, VkglTestCase_032831_1, VkglTestCase_032831_2);

#define VkglTestCase_032832_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032832_2 "o.invalidate.format.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032832, VkglTestCase_032832_1, VkglTestCase_032832_2);

#define VkglTestCase_032833_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032833_2 "o.invalidate.format.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032833, VkglTestCase_032833_1, VkglTestCase_032833_2);

#define VkglTestCase_032834_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032834_2 "o.invalidate.format.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032834, VkglTestCase_032834_1, VkglTestCase_032834_2);

#define VkglTestCase_032835_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032835_2 "o.invalidate.format.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032835, VkglTestCase_032835_1, VkglTestCase_032835_2);

#define VkglTestCase_032836_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032836_2 "bo.invalidate.format.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032836, VkglTestCase_032836_1, VkglTestCase_032836_2);

#define VkglTestCase_032837_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032837_2 "bo.invalidate.format.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032837, VkglTestCase_032837_1, VkglTestCase_032837_2);

#define VkglTestCase_032838_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032838_2 "o.invalidate.format.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032838, VkglTestCase_032838_1, VkglTestCase_032838_2);

#define VkglTestCase_032839_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032839_2 ".invalidate.format.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032839, VkglTestCase_032839_1, VkglTestCase_032839_2);

#define VkglTestCase_032840_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032840_2 ".invalidate.format.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032840, VkglTestCase_032840_1, VkglTestCase_032840_2);

#define VkglTestCase_032841_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032841_2 "alidate.format.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032841, VkglTestCase_032841_1, VkglTestCase_032841_2);

#define VkglTestCase_032842_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032842_2 "o.invalidate.format.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032842, VkglTestCase_032842_1, VkglTestCase_032842_2);

#define VkglTestCase_032843_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032843_2 "o.invalidate.format.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032843, VkglTestCase_032843_1, VkglTestCase_032843_2);

#define VkglTestCase_032844_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032844_2 "o.invalidate.format.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032844, VkglTestCase_032844_1, VkglTestCase_032844_2);

#define VkglTestCase_032845_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032845_2 "o.invalidate.format.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032845, VkglTestCase_032845_1, VkglTestCase_032845_2);

#define VkglTestCase_032846_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032846_2 "idate.format.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032846, VkglTestCase_032846_1, VkglTestCase_032846_2);

#define VkglTestCase_032847_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032847_2 "lidate.format.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032847, VkglTestCase_032847_1, VkglTestCase_032847_2);

#define VkglTestCase_032848_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032848_2 "lidate.format.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032848, VkglTestCase_032848_1, VkglTestCase_032848_2);

#define VkglTestCase_032849_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032849_2 "lidate.format.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032849, VkglTestCase_032849_1, VkglTestCase_032849_2);

#define VkglTestCase_032850_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032850_2 "lidate.format.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032850, VkglTestCase_032850_1, VkglTestCase_032850_2);

#define VkglTestCase_032851_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032851_2 "alidate.format.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032851, VkglTestCase_032851_1, VkglTestCase_032851_2);
