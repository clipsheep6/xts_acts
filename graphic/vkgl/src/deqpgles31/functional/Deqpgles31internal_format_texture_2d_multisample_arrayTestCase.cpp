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

#define VkglTestCase_016067_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016067_2 "ormat.texture_2d_multisample_array.r8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016067, VkglTestCase_016067_1, VkglTestCase_016067_2);

#define VkglTestCase_016068_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016068_2 "ormat.texture_2d_multisample_array.rg8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016068, VkglTestCase_016068_1, VkglTestCase_016068_2);

#define VkglTestCase_016069_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016069_2 "rmat.texture_2d_multisample_array.rgb8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016069, VkglTestCase_016069_1, VkglTestCase_016069_2);

#define VkglTestCase_016070_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016070_2 "mat.texture_2d_multisample_array.rgb565_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016070, VkglTestCase_016070_1, VkglTestCase_016070_2);

#define VkglTestCase_016071_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016071_2 "rmat.texture_2d_multisample_array.rgba4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016071, VkglTestCase_016071_1, VkglTestCase_016071_2);

#define VkglTestCase_016072_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016072_2 "mat.texture_2d_multisample_array.rgb5_a1_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016072, VkglTestCase_016072_1, VkglTestCase_016072_2);

#define VkglTestCase_016073_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016073_2 "rmat.texture_2d_multisample_array.rgba8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016073, VkglTestCase_016073_1, VkglTestCase_016073_2);

#define VkglTestCase_016074_1 "dEQP-GLES31.functional.state_query.internal_form"
#define VkglTestCase_016074_2 "at.texture_2d_multisample_array.rgb10_a2_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016074, VkglTestCase_016074_1, VkglTestCase_016074_2);

#define VkglTestCase_016075_1 "dEQP-GLES31.functional.state_query.internal_forma"
#define VkglTestCase_016075_2 "t.texture_2d_multisample_array.rgb10_a2ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016075, VkglTestCase_016075_1, VkglTestCase_016075_2);

#define VkglTestCase_016076_1 "dEQP-GLES31.functional.state_query.internal_format"
#define VkglTestCase_016076_2 ".texture_2d_multisample_array.srgb8_alpha8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016076, VkglTestCase_016076_1, VkglTestCase_016076_2);

#define VkglTestCase_016077_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016077_2 "ormat.texture_2d_multisample_array.r8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016077, VkglTestCase_016077_1, VkglTestCase_016077_2);

#define VkglTestCase_016078_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016078_2 "rmat.texture_2d_multisample_array.r8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016078, VkglTestCase_016078_1, VkglTestCase_016078_2);

#define VkglTestCase_016079_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016079_2 "rmat.texture_2d_multisample_array.r16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016079, VkglTestCase_016079_1, VkglTestCase_016079_2);

#define VkglTestCase_016080_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016080_2 "rmat.texture_2d_multisample_array.r16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016080, VkglTestCase_016080_1, VkglTestCase_016080_2);

#define VkglTestCase_016081_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016081_2 "rmat.texture_2d_multisample_array.r32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016081, VkglTestCase_016081_1, VkglTestCase_016081_2);

#define VkglTestCase_016082_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016082_2 "rmat.texture_2d_multisample_array.r32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016082, VkglTestCase_016082_1, VkglTestCase_016082_2);

#define VkglTestCase_016083_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016083_2 "rmat.texture_2d_multisample_array.rg8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016083, VkglTestCase_016083_1, VkglTestCase_016083_2);

#define VkglTestCase_016084_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016084_2 "rmat.texture_2d_multisample_array.rg8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016084, VkglTestCase_016084_1, VkglTestCase_016084_2);

#define VkglTestCase_016085_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016085_2 "rmat.texture_2d_multisample_array.rg16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016085, VkglTestCase_016085_1, VkglTestCase_016085_2);

#define VkglTestCase_016086_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016086_2 "mat.texture_2d_multisample_array.rg16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016086, VkglTestCase_016086_1, VkglTestCase_016086_2);

#define VkglTestCase_016087_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016087_2 "rmat.texture_2d_multisample_array.rg32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016087, VkglTestCase_016087_1, VkglTestCase_016087_2);

#define VkglTestCase_016088_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016088_2 "mat.texture_2d_multisample_array.rg32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016088, VkglTestCase_016088_1, VkglTestCase_016088_2);

#define VkglTestCase_016089_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016089_2 "mat.texture_2d_multisample_array.rgba8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016089, VkglTestCase_016089_1, VkglTestCase_016089_2);

#define VkglTestCase_016090_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016090_2 "mat.texture_2d_multisample_array.rgba8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016090, VkglTestCase_016090_1, VkglTestCase_016090_2);

#define VkglTestCase_016091_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016091_2 "mat.texture_2d_multisample_array.rgba16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016091, VkglTestCase_016091_1, VkglTestCase_016091_2);

#define VkglTestCase_016092_1 "dEQP-GLES31.functional.state_query.internal_form"
#define VkglTestCase_016092_2 "at.texture_2d_multisample_array.rgba16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016092, VkglTestCase_016092_1, VkglTestCase_016092_2);

#define VkglTestCase_016093_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016093_2 "mat.texture_2d_multisample_array.rgba32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016093, VkglTestCase_016093_1, VkglTestCase_016093_2);

#define VkglTestCase_016094_1 "dEQP-GLES31.functional.state_query.internal_form"
#define VkglTestCase_016094_2 "at.texture_2d_multisample_array.rgba32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016094, VkglTestCase_016094_1, VkglTestCase_016094_2);

#define VkglTestCase_016095_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016095_2 "rmat.texture_2d_multisample_array.r16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016095, VkglTestCase_016095_1, VkglTestCase_016095_2);

#define VkglTestCase_016096_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016096_2 "rmat.texture_2d_multisample_array.rg16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016096, VkglTestCase_016096_1, VkglTestCase_016096_2);

#define VkglTestCase_016097_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016097_2 "mat.texture_2d_multisample_array.rgba16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016097, VkglTestCase_016097_1, VkglTestCase_016097_2);

#define VkglTestCase_016098_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016098_2 "rmat.texture_2d_multisample_array.r32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016098, VkglTestCase_016098_1, VkglTestCase_016098_2);

#define VkglTestCase_016099_1 "dEQP-GLES31.functional.state_query.internal_fo"
#define VkglTestCase_016099_2 "rmat.texture_2d_multisample_array.rg32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016099, VkglTestCase_016099_1, VkglTestCase_016099_2);

#define VkglTestCase_016100_1 "dEQP-GLES31.functional.state_query.internal_for"
#define VkglTestCase_016100_2 "mat.texture_2d_multisample_array.rgba32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016100, VkglTestCase_016100_1, VkglTestCase_016100_2);

#define VkglTestCase_016101_1 "dEQP-GLES31.functional.state_query.internal_format."
#define VkglTestCase_016101_2 "texture_2d_multisample_array.r11f_g11f_b10f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016101, VkglTestCase_016101_1, VkglTestCase_016101_2);

#define VkglTestCase_016102_1 "dEQP-GLES31.functional.state_query.internal_format.t"
#define VkglTestCase_016102_2 "exture_2d_multisample_array.depth_component16_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016102, VkglTestCase_016102_1, VkglTestCase_016102_2);

#define VkglTestCase_016103_1 "dEQP-GLES31.functional.state_query.internal_format.t"
#define VkglTestCase_016103_2 "exture_2d_multisample_array.depth_component24_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016103, VkglTestCase_016103_1, VkglTestCase_016103_2);

#define VkglTestCase_016104_1 "dEQP-GLES31.functional.state_query.internal_format.te"
#define VkglTestCase_016104_2 "xture_2d_multisample_array.depth_component32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016104, VkglTestCase_016104_1, VkglTestCase_016104_2);

#define VkglTestCase_016105_1 "dEQP-GLES31.functional.state_query.internal_format.t"
#define VkglTestCase_016105_2 "exture_2d_multisample_array.depth24_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016105, VkglTestCase_016105_1, VkglTestCase_016105_2);

#define VkglTestCase_016106_1 "dEQP-GLES31.functional.state_query.internal_format.t"
#define VkglTestCase_016106_2 "exture_2d_multisample_array.depth32f_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016106, VkglTestCase_016106_1, VkglTestCase_016106_2);

#define VkglTestCase_016107_1 "dEQP-GLES31.functional.state_query.internal_format."
#define VkglTestCase_016107_2 "texture_2d_multisample_array.stencil_index8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016107, VkglTestCase_016107_1, VkglTestCase_016107_2);
