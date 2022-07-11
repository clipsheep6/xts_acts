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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016026_1 "dEQP-GLES31.functional.state_query.interna"
#define VkglTestCase_016026_2 "l_format.texture_2d_multisample.r8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016026, VkglTestCase_016026_1, VkglTestCase_016026_2);

#define VkglTestCase_016027_1 "dEQP-GLES31.functional.state_query.interna"
#define VkglTestCase_016027_2 "l_format.texture_2d_multisample.rg8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016027, VkglTestCase_016027_1, VkglTestCase_016027_2);

#define VkglTestCase_016028_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016028_2 "_format.texture_2d_multisample.rgb8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016028, VkglTestCase_016028_1, VkglTestCase_016028_2);

#define VkglTestCase_016029_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016029_2 "format.texture_2d_multisample.rgb565_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016029, VkglTestCase_016029_1, VkglTestCase_016029_2);

#define VkglTestCase_016030_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016030_2 "_format.texture_2d_multisample.rgba4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016030, VkglTestCase_016030_1, VkglTestCase_016030_2);

#define VkglTestCase_016031_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016031_2 "format.texture_2d_multisample.rgb5_a1_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016031, VkglTestCase_016031_1, VkglTestCase_016031_2);

#define VkglTestCase_016032_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016032_2 "_format.texture_2d_multisample.rgba8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016032, VkglTestCase_016032_1, VkglTestCase_016032_2);

#define VkglTestCase_016033_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016033_2 "ormat.texture_2d_multisample.rgb10_a2_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016033, VkglTestCase_016033_1, VkglTestCase_016033_2);

#define VkglTestCase_016034_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016034_2 "rmat.texture_2d_multisample.rgb10_a2ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016034, VkglTestCase_016034_1, VkglTestCase_016034_2);

#define VkglTestCase_016035_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016035_2 "mat.texture_2d_multisample.srgb8_alpha8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016035, VkglTestCase_016035_1, VkglTestCase_016035_2);

#define VkglTestCase_016036_1 "dEQP-GLES31.functional.state_query.interna"
#define VkglTestCase_016036_2 "l_format.texture_2d_multisample.r8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016036, VkglTestCase_016036_1, VkglTestCase_016036_2);

#define VkglTestCase_016037_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016037_2 "_format.texture_2d_multisample.r8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016037, VkglTestCase_016037_1, VkglTestCase_016037_2);

#define VkglTestCase_016038_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016038_2 "_format.texture_2d_multisample.r16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016038, VkglTestCase_016038_1, VkglTestCase_016038_2);

#define VkglTestCase_016039_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016039_2 "_format.texture_2d_multisample.r16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016039, VkglTestCase_016039_1, VkglTestCase_016039_2);

#define VkglTestCase_016040_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016040_2 "_format.texture_2d_multisample.r32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016040, VkglTestCase_016040_1, VkglTestCase_016040_2);

#define VkglTestCase_016041_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016041_2 "_format.texture_2d_multisample.r32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016041, VkglTestCase_016041_1, VkglTestCase_016041_2);

#define VkglTestCase_016042_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016042_2 "_format.texture_2d_multisample.rg8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016042, VkglTestCase_016042_1, VkglTestCase_016042_2);

#define VkglTestCase_016043_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016043_2 "_format.texture_2d_multisample.rg8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016043, VkglTestCase_016043_1, VkglTestCase_016043_2);

#define VkglTestCase_016044_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016044_2 "_format.texture_2d_multisample.rg16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016044, VkglTestCase_016044_1, VkglTestCase_016044_2);

#define VkglTestCase_016045_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016045_2 "format.texture_2d_multisample.rg16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016045, VkglTestCase_016045_1, VkglTestCase_016045_2);

#define VkglTestCase_016046_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016046_2 "_format.texture_2d_multisample.rg32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016046, VkglTestCase_016046_1, VkglTestCase_016046_2);

#define VkglTestCase_016047_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016047_2 "format.texture_2d_multisample.rg32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016047, VkglTestCase_016047_1, VkglTestCase_016047_2);

#define VkglTestCase_016048_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016048_2 "format.texture_2d_multisample.rgba8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016048, VkglTestCase_016048_1, VkglTestCase_016048_2);

#define VkglTestCase_016049_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016049_2 "format.texture_2d_multisample.rgba8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016049, VkglTestCase_016049_1, VkglTestCase_016049_2);

#define VkglTestCase_016050_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016050_2 "format.texture_2d_multisample.rgba16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016050, VkglTestCase_016050_1, VkglTestCase_016050_2);

#define VkglTestCase_016051_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016051_2 "ormat.texture_2d_multisample.rgba16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016051, VkglTestCase_016051_1, VkglTestCase_016051_2);

#define VkglTestCase_016052_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016052_2 "format.texture_2d_multisample.rgba32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016052, VkglTestCase_016052_1, VkglTestCase_016052_2);

#define VkglTestCase_016053_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016053_2 "ormat.texture_2d_multisample.rgba32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016053, VkglTestCase_016053_1, VkglTestCase_016053_2);

#define VkglTestCase_016054_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016054_2 "_format.texture_2d_multisample.r16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016054, VkglTestCase_016054_1, VkglTestCase_016054_2);

#define VkglTestCase_016055_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016055_2 "_format.texture_2d_multisample.rg16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016055, VkglTestCase_016055_1, VkglTestCase_016055_2);

#define VkglTestCase_016056_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016056_2 "format.texture_2d_multisample.rgba16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016056, VkglTestCase_016056_1, VkglTestCase_016056_2);

#define VkglTestCase_016057_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016057_2 "_format.texture_2d_multisample.r32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016057, VkglTestCase_016057_1, VkglTestCase_016057_2);

#define VkglTestCase_016058_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016058_2 "_format.texture_2d_multisample.rg32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016058, VkglTestCase_016058_1, VkglTestCase_016058_2);

#define VkglTestCase_016059_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016059_2 "format.texture_2d_multisample.rgba32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016059, VkglTestCase_016059_1, VkglTestCase_016059_2);

#define VkglTestCase_016060_1 "dEQP-GLES31.functional.state_query.internal_form"
#define VkglTestCase_016060_2 "at.texture_2d_multisample.r11f_g11f_b10f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016060, VkglTestCase_016060_1, VkglTestCase_016060_2);

#define VkglTestCase_016061_1 "dEQP-GLES31.functional.state_query.internal_forma"
#define VkglTestCase_016061_2 "t.texture_2d_multisample.depth_component16_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016061, VkglTestCase_016061_1, VkglTestCase_016061_2);

#define VkglTestCase_016062_1 "dEQP-GLES31.functional.state_query.internal_forma"
#define VkglTestCase_016062_2 "t.texture_2d_multisample.depth_component24_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016062, VkglTestCase_016062_1, VkglTestCase_016062_2);

#define VkglTestCase_016063_1 "dEQP-GLES31.functional.state_query.internal_format"
#define VkglTestCase_016063_2 ".texture_2d_multisample.depth_component32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016063, VkglTestCase_016063_1, VkglTestCase_016063_2);

#define VkglTestCase_016064_1 "dEQP-GLES31.functional.state_query.internal_forma"
#define VkglTestCase_016064_2 "t.texture_2d_multisample.depth24_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016064, VkglTestCase_016064_1, VkglTestCase_016064_2);

#define VkglTestCase_016065_1 "dEQP-GLES31.functional.state_query.internal_forma"
#define VkglTestCase_016065_2 "t.texture_2d_multisample.depth32f_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016065, VkglTestCase_016065_1, VkglTestCase_016065_2);

#define VkglTestCase_016066_1 "dEQP-GLES31.functional.state_query.internal_form"
#define VkglTestCase_016066_2 "at.texture_2d_multisample.stencil_index8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016066, VkglTestCase_016066_1, VkglTestCase_016066_2);
