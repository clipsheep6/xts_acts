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

#define VkglTestCase_031914_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031914_2 "color.blend.rgba8_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031914, VkglTestCase_031914_1, VkglTestCase_031914_2);

#define VkglTestCase_031915_1 "dEQP-GLES3.functional.fbo.col"
#define VkglTestCase_031915_2 "or.blend.srgb8_alpha8_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031915, VkglTestCase_031915_1, VkglTestCase_031915_2);

#define VkglTestCase_031916_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031916_2 "olor.blend.rgb10_a2_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031916, VkglTestCase_031916_1, VkglTestCase_031916_2);

#define VkglTestCase_031917_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031917_2 "color.blend.rgba4_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031917, VkglTestCase_031917_1, VkglTestCase_031917_2);

#define VkglTestCase_031918_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031918_2 "olor.blend.rgb5_a1_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031918, VkglTestCase_031918_1, VkglTestCase_031918_2);

#define VkglTestCase_031919_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031919_2 ".color.blend.rgb8_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031919, VkglTestCase_031919_1, VkglTestCase_031919_2);

#define VkglTestCase_031920_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031920_2 "color.blend.rgb565_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031920, VkglTestCase_031920_1, VkglTestCase_031920_2);

#define VkglTestCase_031921_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031921_2 ".color.blend.rg8_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031921, VkglTestCase_031921_1, VkglTestCase_031921_2);

#define VkglTestCase_031922_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031922_2 "o.color.blend.r8_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031922, VkglTestCase_031922_1, VkglTestCase_031922_2);

#define VkglTestCase_031923_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031923_2 "olor.blend.rgba16f_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031923, VkglTestCase_031923_1, VkglTestCase_031923_2);

#define VkglTestCase_031924_1 "dEQP-GLES3.functional.fbo.colo"
#define VkglTestCase_031924_2 "r.blend.r11f_g11f_b10f_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031924, VkglTestCase_031924_1, VkglTestCase_031924_2);

#define VkglTestCase_031925_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031925_2 "color.blend.rg16f_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031925, VkglTestCase_031925_1, VkglTestCase_031925_2);

#define VkglTestCase_031926_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031926_2 ".color.blend.r16f_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031926, VkglTestCase_031926_1, VkglTestCase_031926_2);

#define VkglTestCase_031927_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031927_2 "color.blend.rgb16f_src_over"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031927, VkglTestCase_031927_1, VkglTestCase_031927_2);
