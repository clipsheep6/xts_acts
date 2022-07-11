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

#define VkglTestCase_031734_1 "dEQP-GLES3.functional."
#define VkglTestCase_031734_2 "fbo.color.clear.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031734, VkglTestCase_031734_1, VkglTestCase_031734_2);

#define VkglTestCase_031735_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031735_2 "bo.color.clear.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031735, VkglTestCase_031735_1, VkglTestCase_031735_2);

#define VkglTestCase_031736_1 "dEQP-GLES3.functional."
#define VkglTestCase_031736_2 "fbo.color.clear.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031736, VkglTestCase_031736_1, VkglTestCase_031736_2);

#define VkglTestCase_031737_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031737_2 "bo.color.clear.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031737, VkglTestCase_031737_1, VkglTestCase_031737_2);

#define VkglTestCase_031738_1 "dEQP-GLES3.functional"
#define VkglTestCase_031738_2 ".fbo.color.clear.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031738, VkglTestCase_031738_1, VkglTestCase_031738_2);

#define VkglTestCase_031739_1 "dEQP-GLES3.functional."
#define VkglTestCase_031739_2 "fbo.color.clear.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031739, VkglTestCase_031739_1, VkglTestCase_031739_2);

#define VkglTestCase_031740_1 "dEQP-GLES3.functional."
#define VkglTestCase_031740_2 "fbo.color.clear.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031740, VkglTestCase_031740_1, VkglTestCase_031740_2);

#define VkglTestCase_031741_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031741_2 ".color.clear.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031741, VkglTestCase_031741_1, VkglTestCase_031741_2);

#define VkglTestCase_031742_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031742_2 "bo.color.clear.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031742, VkglTestCase_031742_1, VkglTestCase_031742_2);

#define VkglTestCase_031743_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031743_2 "o.color.clear.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031743, VkglTestCase_031743_1, VkglTestCase_031743_2);

#define VkglTestCase_031744_1 "dEQP-GLES3.functional"
#define VkglTestCase_031744_2 ".fbo.color.clear.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031744, VkglTestCase_031744_1, VkglTestCase_031744_2);

#define VkglTestCase_031745_1 "dEQP-GLES3.functional."
#define VkglTestCase_031745_2 "fbo.color.clear.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031745, VkglTestCase_031745_1, VkglTestCase_031745_2);

#define VkglTestCase_031746_1 "dEQP-GLES3.functional"
#define VkglTestCase_031746_2 ".fbo.color.clear.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031746, VkglTestCase_031746_1, VkglTestCase_031746_2);

#define VkglTestCase_031747_1 "dEQP-GLES3.functional."
#define VkglTestCase_031747_2 "fbo.color.clear.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031747, VkglTestCase_031747_1, VkglTestCase_031747_2);

#define VkglTestCase_031748_1 "dEQP-GLES3.functional"
#define VkglTestCase_031748_2 ".fbo.color.clear.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031748, VkglTestCase_031748_1, VkglTestCase_031748_2);

#define VkglTestCase_031749_1 "dEQP-GLES3.functional."
#define VkglTestCase_031749_2 "fbo.color.clear.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031749, VkglTestCase_031749_1, VkglTestCase_031749_2);

#define VkglTestCase_031750_1 "dEQP-GLES3.functional"
#define VkglTestCase_031750_2 ".fbo.color.clear.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031750, VkglTestCase_031750_1, VkglTestCase_031750_2);

#define VkglTestCase_031751_1 "dEQP-GLES3.functional."
#define VkglTestCase_031751_2 "fbo.color.clear.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031751, VkglTestCase_031751_1, VkglTestCase_031751_2);

#define VkglTestCase_031752_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031752_2 "l.fbo.color.clear.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031752, VkglTestCase_031752_1, VkglTestCase_031752_2);

#define VkglTestCase_031753_1 "dEQP-GLES3.functional"
#define VkglTestCase_031753_2 ".fbo.color.clear.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031753, VkglTestCase_031753_1, VkglTestCase_031753_2);

#define VkglTestCase_031754_1 "dEQP-GLES3.functional"
#define VkglTestCase_031754_2 ".fbo.color.clear.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031754, VkglTestCase_031754_1, VkglTestCase_031754_2);

#define VkglTestCase_031755_1 "dEQP-GLES3.functional"
#define VkglTestCase_031755_2 ".fbo.color.clear.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031755, VkglTestCase_031755_1, VkglTestCase_031755_2);

#define VkglTestCase_031756_1 "dEQP-GLES3.functional"
#define VkglTestCase_031756_2 ".fbo.color.clear.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031756, VkglTestCase_031756_1, VkglTestCase_031756_2);

#define VkglTestCase_031757_1 "dEQP-GLES3.functional"
#define VkglTestCase_031757_2 ".fbo.color.clear.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031757, VkglTestCase_031757_1, VkglTestCase_031757_2);

#define VkglTestCase_031758_1 "dEQP-GLES3.functional"
#define VkglTestCase_031758_2 ".fbo.color.clear.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031758, VkglTestCase_031758_1, VkglTestCase_031758_2);

#define VkglTestCase_031759_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031759_2 "l.fbo.color.clear.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031759, VkglTestCase_031759_1, VkglTestCase_031759_2);

#define VkglTestCase_031760_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031760_2 "l.fbo.color.clear.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031760, VkglTestCase_031760_1, VkglTestCase_031760_2);

#define VkglTestCase_031761_1 "dEQP-GLES3.functional"
#define VkglTestCase_031761_2 ".fbo.color.clear.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031761, VkglTestCase_031761_1, VkglTestCase_031761_2);

#define VkglTestCase_031762_1 "dEQP-GLES3.functional."
#define VkglTestCase_031762_2 "fbo.color.clear.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031762, VkglTestCase_031762_1, VkglTestCase_031762_2);

#define VkglTestCase_031763_1 "dEQP-GLES3.functional."
#define VkglTestCase_031763_2 "fbo.color.clear.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031763, VkglTestCase_031763_1, VkglTestCase_031763_2);

#define VkglTestCase_031764_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031764_2 "color.clear.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031764, VkglTestCase_031764_1, VkglTestCase_031764_2);

#define VkglTestCase_031765_1 "dEQP-GLES3.functional"
#define VkglTestCase_031765_2 ".fbo.color.clear.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031765, VkglTestCase_031765_1, VkglTestCase_031765_2);

#define VkglTestCase_031766_1 "dEQP-GLES3.functional"
#define VkglTestCase_031766_2 ".fbo.color.clear.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031766, VkglTestCase_031766_1, VkglTestCase_031766_2);

#define VkglTestCase_031767_1 "dEQP-GLES3.functional"
#define VkglTestCase_031767_2 ".fbo.color.clear.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031767, VkglTestCase_031767_1, VkglTestCase_031767_2);

#define VkglTestCase_031768_1 "dEQP-GLES3.functional"
#define VkglTestCase_031768_2 ".fbo.color.clear.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031768, VkglTestCase_031768_1, VkglTestCase_031768_2);

#define VkglTestCase_031769_1 "dEQP-GLES3.functional."
#define VkglTestCase_031769_2 "fbo.color.clear.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031769, VkglTestCase_031769_1, VkglTestCase_031769_2);
