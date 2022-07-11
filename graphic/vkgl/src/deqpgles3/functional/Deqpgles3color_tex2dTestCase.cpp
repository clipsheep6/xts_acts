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

#define VkglTestCase_031770_1 "dEQP-GLES3.functional."
#define VkglTestCase_031770_2 "fbo.color.tex2d.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031770, VkglTestCase_031770_1, VkglTestCase_031770_2);

#define VkglTestCase_031771_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031771_2 "bo.color.tex2d.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031771, VkglTestCase_031771_1, VkglTestCase_031771_2);

#define VkglTestCase_031772_1 "dEQP-GLES3.functional."
#define VkglTestCase_031772_2 "fbo.color.tex2d.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031772, VkglTestCase_031772_1, VkglTestCase_031772_2);

#define VkglTestCase_031773_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031773_2 "bo.color.tex2d.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031773, VkglTestCase_031773_1, VkglTestCase_031773_2);

#define VkglTestCase_031774_1 "dEQP-GLES3.functional"
#define VkglTestCase_031774_2 ".fbo.color.tex2d.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031774, VkglTestCase_031774_1, VkglTestCase_031774_2);

#define VkglTestCase_031775_1 "dEQP-GLES3.functional."
#define VkglTestCase_031775_2 "fbo.color.tex2d.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031775, VkglTestCase_031775_1, VkglTestCase_031775_2);

#define VkglTestCase_031776_1 "dEQP-GLES3.functional."
#define VkglTestCase_031776_2 "fbo.color.tex2d.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031776, VkglTestCase_031776_1, VkglTestCase_031776_2);

#define VkglTestCase_031777_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031777_2 ".color.tex2d.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031777, VkglTestCase_031777_1, VkglTestCase_031777_2);

#define VkglTestCase_031778_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031778_2 "bo.color.tex2d.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031778, VkglTestCase_031778_1, VkglTestCase_031778_2);

#define VkglTestCase_031779_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031779_2 "o.color.tex2d.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031779, VkglTestCase_031779_1, VkglTestCase_031779_2);

#define VkglTestCase_031780_1 "dEQP-GLES3.functional"
#define VkglTestCase_031780_2 ".fbo.color.tex2d.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031780, VkglTestCase_031780_1, VkglTestCase_031780_2);

#define VkglTestCase_031781_1 "dEQP-GLES3.functional."
#define VkglTestCase_031781_2 "fbo.color.tex2d.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031781, VkglTestCase_031781_1, VkglTestCase_031781_2);

#define VkglTestCase_031782_1 "dEQP-GLES3.functional"
#define VkglTestCase_031782_2 ".fbo.color.tex2d.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031782, VkglTestCase_031782_1, VkglTestCase_031782_2);

#define VkglTestCase_031783_1 "dEQP-GLES3.functional."
#define VkglTestCase_031783_2 "fbo.color.tex2d.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031783, VkglTestCase_031783_1, VkglTestCase_031783_2);

#define VkglTestCase_031784_1 "dEQP-GLES3.functional"
#define VkglTestCase_031784_2 ".fbo.color.tex2d.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031784, VkglTestCase_031784_1, VkglTestCase_031784_2);

#define VkglTestCase_031785_1 "dEQP-GLES3.functional."
#define VkglTestCase_031785_2 "fbo.color.tex2d.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031785, VkglTestCase_031785_1, VkglTestCase_031785_2);

#define VkglTestCase_031786_1 "dEQP-GLES3.functional"
#define VkglTestCase_031786_2 ".fbo.color.tex2d.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031786, VkglTestCase_031786_1, VkglTestCase_031786_2);

#define VkglTestCase_031787_1 "dEQP-GLES3.functional."
#define VkglTestCase_031787_2 "fbo.color.tex2d.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031787, VkglTestCase_031787_1, VkglTestCase_031787_2);

#define VkglTestCase_031788_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031788_2 "l.fbo.color.tex2d.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031788, VkglTestCase_031788_1, VkglTestCase_031788_2);

#define VkglTestCase_031789_1 "dEQP-GLES3.functional"
#define VkglTestCase_031789_2 ".fbo.color.tex2d.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031789, VkglTestCase_031789_1, VkglTestCase_031789_2);

#define VkglTestCase_031790_1 "dEQP-GLES3.functional"
#define VkglTestCase_031790_2 ".fbo.color.tex2d.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031790, VkglTestCase_031790_1, VkglTestCase_031790_2);

#define VkglTestCase_031791_1 "dEQP-GLES3.functional"
#define VkglTestCase_031791_2 ".fbo.color.tex2d.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031791, VkglTestCase_031791_1, VkglTestCase_031791_2);

#define VkglTestCase_031792_1 "dEQP-GLES3.functional"
#define VkglTestCase_031792_2 ".fbo.color.tex2d.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031792, VkglTestCase_031792_1, VkglTestCase_031792_2);

#define VkglTestCase_031793_1 "dEQP-GLES3.functional"
#define VkglTestCase_031793_2 ".fbo.color.tex2d.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031793, VkglTestCase_031793_1, VkglTestCase_031793_2);

#define VkglTestCase_031794_1 "dEQP-GLES3.functional"
#define VkglTestCase_031794_2 ".fbo.color.tex2d.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031794, VkglTestCase_031794_1, VkglTestCase_031794_2);

#define VkglTestCase_031795_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031795_2 "l.fbo.color.tex2d.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031795, VkglTestCase_031795_1, VkglTestCase_031795_2);

#define VkglTestCase_031796_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031796_2 "l.fbo.color.tex2d.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031796, VkglTestCase_031796_1, VkglTestCase_031796_2);

#define VkglTestCase_031797_1 "dEQP-GLES3.functional"
#define VkglTestCase_031797_2 ".fbo.color.tex2d.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031797, VkglTestCase_031797_1, VkglTestCase_031797_2);

#define VkglTestCase_031798_1 "dEQP-GLES3.functional."
#define VkglTestCase_031798_2 "fbo.color.tex2d.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031798, VkglTestCase_031798_1, VkglTestCase_031798_2);

#define VkglTestCase_031799_1 "dEQP-GLES3.functional."
#define VkglTestCase_031799_2 "fbo.color.tex2d.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031799, VkglTestCase_031799_1, VkglTestCase_031799_2);

#define VkglTestCase_031800_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031800_2 "color.tex2d.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031800, VkglTestCase_031800_1, VkglTestCase_031800_2);

#define VkglTestCase_031801_1 "dEQP-GLES3.functional"
#define VkglTestCase_031801_2 ".fbo.color.tex2d.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031801, VkglTestCase_031801_1, VkglTestCase_031801_2);

#define VkglTestCase_031802_1 "dEQP-GLES3.functional"
#define VkglTestCase_031802_2 ".fbo.color.tex2d.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031802, VkglTestCase_031802_1, VkglTestCase_031802_2);

#define VkglTestCase_031803_1 "dEQP-GLES3.functional"
#define VkglTestCase_031803_2 ".fbo.color.tex2d.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031803, VkglTestCase_031803_1, VkglTestCase_031803_2);

#define VkglTestCase_031804_1 "dEQP-GLES3.functional"
#define VkglTestCase_031804_2 ".fbo.color.tex2d.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031804, VkglTestCase_031804_1, VkglTestCase_031804_2);

#define VkglTestCase_031805_1 "dEQP-GLES3.functional."
#define VkglTestCase_031805_2 "fbo.color.tex2d.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031805, VkglTestCase_031805_1, VkglTestCase_031805_2);
