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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022111_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022111_2 "ormat.sized.2d_array.rgba32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022111, VkglTestCase_022111_1, VkglTestCase_022111_2);

#define VkglTestCase_022112_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022112_2 "rmat.sized.2d_array.rgba32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022112, VkglTestCase_022112_1, VkglTestCase_022112_2);

#define VkglTestCase_022113_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022113_2 "ormat.sized.2d_array.rgba32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022113, VkglTestCase_022113_1, VkglTestCase_022113_2);

#define VkglTestCase_022114_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022114_2 "rmat.sized.2d_array.rgba32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022114, VkglTestCase_022114_1, VkglTestCase_022114_2);

#define VkglTestCase_022115_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022115_2 "rmat.sized.2d_array.rgba32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022115, VkglTestCase_022115_1, VkglTestCase_022115_2);

#define VkglTestCase_022116_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022116_2 "rmat.sized.2d_array.rgba32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022116, VkglTestCase_022116_1, VkglTestCase_022116_2);

#define VkglTestCase_022117_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022117_2 "ormat.sized.2d_array.rgba16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022117, VkglTestCase_022117_1, VkglTestCase_022117_2);

#define VkglTestCase_022118_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022118_2 "rmat.sized.2d_array.rgba16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022118, VkglTestCase_022118_1, VkglTestCase_022118_2);

#define VkglTestCase_022119_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022119_2 "ormat.sized.2d_array.rgba16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022119, VkglTestCase_022119_1, VkglTestCase_022119_2);

#define VkglTestCase_022120_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022120_2 "rmat.sized.2d_array.rgba16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022120, VkglTestCase_022120_1, VkglTestCase_022120_2);

#define VkglTestCase_022121_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022121_2 "rmat.sized.2d_array.rgba16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022121, VkglTestCase_022121_1, VkglTestCase_022121_2);

#define VkglTestCase_022122_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022122_2 "rmat.sized.2d_array.rgba16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022122, VkglTestCase_022122_1, VkglTestCase_022122_2);

#define VkglTestCase_022123_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022123_2 "format.sized.2d_array.rgba8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022123, VkglTestCase_022123_1, VkglTestCase_022123_2);

#define VkglTestCase_022124_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022124_2 "ormat.sized.2d_array.rgba8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022124, VkglTestCase_022124_1, VkglTestCase_022124_2);

#define VkglTestCase_022125_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022125_2 "ormat.sized.2d_array.rgba8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022125, VkglTestCase_022125_1, VkglTestCase_022125_2);

#define VkglTestCase_022126_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022126_2 "ormat.sized.2d_array.rgba8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022126, VkglTestCase_022126_1, VkglTestCase_022126_2);

#define VkglTestCase_022127_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022127_2 "ormat.sized.2d_array.rgba8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022127, VkglTestCase_022127_1, VkglTestCase_022127_2);

#define VkglTestCase_022128_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022128_2 "rmat.sized.2d_array.rgba8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022128, VkglTestCase_022128_1, VkglTestCase_022128_2);

#define VkglTestCase_022129_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022129_2 "at.sized.2d_array.srgb8_alpha8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022129, VkglTestCase_022129_1, VkglTestCase_022129_2);

#define VkglTestCase_022130_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022130_2 "at.sized.2d_array.srgb8_alpha8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022130, VkglTestCase_022130_1, VkglTestCase_022130_2);

#define VkglTestCase_022131_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022131_2 "ormat.sized.2d_array.srgb_r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022131, VkglTestCase_022131_1, VkglTestCase_022131_2);

#define VkglTestCase_022132_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022132_2 "rmat.sized.2d_array.srgb_r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022132, VkglTestCase_022132_1, VkglTestCase_022132_2);

#define VkglTestCase_022133_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022133_2 "rmat.sized.2d_array.srgb_rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022133, VkglTestCase_022133_1, VkglTestCase_022133_2);

#define VkglTestCase_022134_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022134_2 "rmat.sized.2d_array.srgb_rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022134, VkglTestCase_022134_1, VkglTestCase_022134_2);

#define VkglTestCase_022135_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022135_2 "rmat.sized.2d_array.rgb10_a2_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022135, VkglTestCase_022135_1, VkglTestCase_022135_2);

#define VkglTestCase_022136_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022136_2 "rmat.sized.2d_array.rgb10_a2_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022136, VkglTestCase_022136_1, VkglTestCase_022136_2);

#define VkglTestCase_022137_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022137_2 "mat.sized.2d_array.rgb10_a2ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022137, VkglTestCase_022137_1, VkglTestCase_022137_2);

#define VkglTestCase_022138_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022138_2 "mat.sized.2d_array.rgb10_a2ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022138, VkglTestCase_022138_1, VkglTestCase_022138_2);

#define VkglTestCase_022139_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022139_2 "format.sized.2d_array.rgba4_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022139, VkglTestCase_022139_1, VkglTestCase_022139_2);

#define VkglTestCase_022140_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022140_2 "ormat.sized.2d_array.rgba4_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022140, VkglTestCase_022140_1, VkglTestCase_022140_2);

#define VkglTestCase_022141_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022141_2 "ormat.sized.2d_array.rgb5_a1_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022141, VkglTestCase_022141_1, VkglTestCase_022141_2);

#define VkglTestCase_022142_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022142_2 "rmat.sized.2d_array.rgb5_a1_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022142, VkglTestCase_022142_1, VkglTestCase_022142_2);

#define VkglTestCase_022143_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022143_2 "mat.sized.2d_array.rgba8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022143, VkglTestCase_022143_1, VkglTestCase_022143_2);

#define VkglTestCase_022144_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022144_2 "at.sized.2d_array.rgba8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022144, VkglTestCase_022144_1, VkglTestCase_022144_2);

#define VkglTestCase_022145_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022145_2 "format.sized.2d_array.rgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022145, VkglTestCase_022145_1, VkglTestCase_022145_2);

#define VkglTestCase_022146_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022146_2 "format.sized.2d_array.rgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022146, VkglTestCase_022146_1, VkglTestCase_022146_2);

#define VkglTestCase_022147_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022147_2 "ormat.sized.2d_array.rgb565_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022147, VkglTestCase_022147_1, VkglTestCase_022147_2);

#define VkglTestCase_022148_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022148_2 "ormat.sized.2d_array.rgb565_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022148, VkglTestCase_022148_1, VkglTestCase_022148_2);

#define VkglTestCase_022149_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022149_2 "t.sized.2d_array.r11f_g11f_b10f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022149, VkglTestCase_022149_1, VkglTestCase_022149_2);

#define VkglTestCase_022150_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022150_2 "t.sized.2d_array.r11f_g11f_b10f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022150, VkglTestCase_022150_1, VkglTestCase_022150_2);

#define VkglTestCase_022151_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022151_2 "ormat.sized.2d_array.rgb32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022151, VkglTestCase_022151_1, VkglTestCase_022151_2);

#define VkglTestCase_022152_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022152_2 "ormat.sized.2d_array.rgb32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022152, VkglTestCase_022152_1, VkglTestCase_022152_2);

#define VkglTestCase_022153_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022153_2 "ormat.sized.2d_array.rgb32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022153, VkglTestCase_022153_1, VkglTestCase_022153_2);

#define VkglTestCase_022154_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022154_2 "ormat.sized.2d_array.rgb32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022154, VkglTestCase_022154_1, VkglTestCase_022154_2);

#define VkglTestCase_022155_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022155_2 "ormat.sized.2d_array.rgb32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022155, VkglTestCase_022155_1, VkglTestCase_022155_2);

#define VkglTestCase_022156_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022156_2 "rmat.sized.2d_array.rgb32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022156, VkglTestCase_022156_1, VkglTestCase_022156_2);

#define VkglTestCase_022157_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022157_2 "ormat.sized.2d_array.rgb16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022157, VkglTestCase_022157_1, VkglTestCase_022157_2);

#define VkglTestCase_022158_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022158_2 "ormat.sized.2d_array.rgb16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022158, VkglTestCase_022158_1, VkglTestCase_022158_2);

#define VkglTestCase_022159_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022159_2 "ormat.sized.2d_array.rgb16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022159, VkglTestCase_022159_1, VkglTestCase_022159_2);

#define VkglTestCase_022160_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022160_2 "ormat.sized.2d_array.rgb16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022160, VkglTestCase_022160_1, VkglTestCase_022160_2);

#define VkglTestCase_022161_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022161_2 "ormat.sized.2d_array.rgb16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022161, VkglTestCase_022161_1, VkglTestCase_022161_2);

#define VkglTestCase_022162_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022162_2 "rmat.sized.2d_array.rgb16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022162, VkglTestCase_022162_1, VkglTestCase_022162_2);

#define VkglTestCase_022163_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022163_2 "mat.sized.2d_array.rgb8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022163, VkglTestCase_022163_1, VkglTestCase_022163_2);

#define VkglTestCase_022164_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022164_2 "mat.sized.2d_array.rgb8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022164, VkglTestCase_022164_1, VkglTestCase_022164_2);

#define VkglTestCase_022165_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022165_2 "format.sized.2d_array.rgb8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022165, VkglTestCase_022165_1, VkglTestCase_022165_2);

#define VkglTestCase_022166_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022166_2 "ormat.sized.2d_array.rgb8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022166, VkglTestCase_022166_1, VkglTestCase_022166_2);

#define VkglTestCase_022167_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022167_2 "ormat.sized.2d_array.rgb8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022167, VkglTestCase_022167_1, VkglTestCase_022167_2);

#define VkglTestCase_022168_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022168_2 "ormat.sized.2d_array.rgb8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022168, VkglTestCase_022168_1, VkglTestCase_022168_2);

#define VkglTestCase_022169_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022169_2 "format.sized.2d_array.srgb8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022169, VkglTestCase_022169_1, VkglTestCase_022169_2);

#define VkglTestCase_022170_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022170_2 "ormat.sized.2d_array.srgb8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022170, VkglTestCase_022170_1, VkglTestCase_022170_2);

#define VkglTestCase_022171_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022171_2 "ormat.sized.2d_array.rgb9_e5_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022171, VkglTestCase_022171_1, VkglTestCase_022171_2);

#define VkglTestCase_022172_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022172_2 "rmat.sized.2d_array.rgb9_e5_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022172, VkglTestCase_022172_1, VkglTestCase_022172_2);

#define VkglTestCase_022173_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022173_2 "format.sized.2d_array.rg32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022173, VkglTestCase_022173_1, VkglTestCase_022173_2);

#define VkglTestCase_022174_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022174_2 "ormat.sized.2d_array.rg32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022174, VkglTestCase_022174_1, VkglTestCase_022174_2);

#define VkglTestCase_022175_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022175_2 "format.sized.2d_array.rg32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022175, VkglTestCase_022175_1, VkglTestCase_022175_2);

#define VkglTestCase_022176_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022176_2 "ormat.sized.2d_array.rg32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022176, VkglTestCase_022176_1, VkglTestCase_022176_2);

#define VkglTestCase_022177_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022177_2 "ormat.sized.2d_array.rg32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022177, VkglTestCase_022177_1, VkglTestCase_022177_2);

#define VkglTestCase_022178_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022178_2 "ormat.sized.2d_array.rg32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022178, VkglTestCase_022178_1, VkglTestCase_022178_2);

#define VkglTestCase_022179_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022179_2 "format.sized.2d_array.rg16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022179, VkglTestCase_022179_1, VkglTestCase_022179_2);

#define VkglTestCase_022180_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022180_2 "ormat.sized.2d_array.rg16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022180, VkglTestCase_022180_1, VkglTestCase_022180_2);

#define VkglTestCase_022181_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022181_2 "format.sized.2d_array.rg16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022181, VkglTestCase_022181_1, VkglTestCase_022181_2);

#define VkglTestCase_022182_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022182_2 "ormat.sized.2d_array.rg16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022182, VkglTestCase_022182_1, VkglTestCase_022182_2);

#define VkglTestCase_022183_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022183_2 "ormat.sized.2d_array.rg16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022183, VkglTestCase_022183_1, VkglTestCase_022183_2);

#define VkglTestCase_022184_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022184_2 "ormat.sized.2d_array.rg16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022184, VkglTestCase_022184_1, VkglTestCase_022184_2);

#define VkglTestCase_022185_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022185_2 ".format.sized.2d_array.rg8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022185, VkglTestCase_022185_1, VkglTestCase_022185_2);

#define VkglTestCase_022186_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022186_2 "format.sized.2d_array.rg8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022186, VkglTestCase_022186_1, VkglTestCase_022186_2);

#define VkglTestCase_022187_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022187_2 "format.sized.2d_array.rg8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022187, VkglTestCase_022187_1, VkglTestCase_022187_2);

#define VkglTestCase_022188_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022188_2 "format.sized.2d_array.rg8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022188, VkglTestCase_022188_1, VkglTestCase_022188_2);

#define VkglTestCase_022189_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022189_2 "format.sized.2d_array.rg8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022189, VkglTestCase_022189_1, VkglTestCase_022189_2);

#define VkglTestCase_022190_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022190_2 "ormat.sized.2d_array.rg8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022190, VkglTestCase_022190_1, VkglTestCase_022190_2);

#define VkglTestCase_022191_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022191_2 "rmat.sized.2d_array.rg8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022191, VkglTestCase_022191_1, VkglTestCase_022191_2);

#define VkglTestCase_022192_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022192_2 "mat.sized.2d_array.rg8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022192, VkglTestCase_022192_1, VkglTestCase_022192_2);

#define VkglTestCase_022193_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022193_2 "format.sized.2d_array.r32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022193, VkglTestCase_022193_1, VkglTestCase_022193_2);

#define VkglTestCase_022194_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022194_2 "format.sized.2d_array.r32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022194, VkglTestCase_022194_1, VkglTestCase_022194_2);

#define VkglTestCase_022195_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022195_2 "format.sized.2d_array.r32i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022195, VkglTestCase_022195_1, VkglTestCase_022195_2);

#define VkglTestCase_022196_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022196_2 "format.sized.2d_array.r32i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022196, VkglTestCase_022196_1, VkglTestCase_022196_2);

#define VkglTestCase_022197_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022197_2 "format.sized.2d_array.r32ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022197, VkglTestCase_022197_1, VkglTestCase_022197_2);

#define VkglTestCase_022198_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022198_2 "ormat.sized.2d_array.r32ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022198, VkglTestCase_022198_1, VkglTestCase_022198_2);

#define VkglTestCase_022199_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022199_2 "format.sized.2d_array.r16f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022199, VkglTestCase_022199_1, VkglTestCase_022199_2);

#define VkglTestCase_022200_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022200_2 "format.sized.2d_array.r16f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022200, VkglTestCase_022200_1, VkglTestCase_022200_2);

#define VkglTestCase_022201_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022201_2 "format.sized.2d_array.r16i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022201, VkglTestCase_022201_1, VkglTestCase_022201_2);

#define VkglTestCase_022202_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022202_2 "format.sized.2d_array.r16i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022202, VkglTestCase_022202_1, VkglTestCase_022202_2);

#define VkglTestCase_022203_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022203_2 "format.sized.2d_array.r16ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022203, VkglTestCase_022203_1, VkglTestCase_022203_2);

#define VkglTestCase_022204_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022204_2 "ormat.sized.2d_array.r16ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022204, VkglTestCase_022204_1, VkglTestCase_022204_2);

#define VkglTestCase_022205_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022205_2 ".format.sized.2d_array.r8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022205, VkglTestCase_022205_1, VkglTestCase_022205_2);

#define VkglTestCase_022206_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022206_2 ".format.sized.2d_array.r8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022206, VkglTestCase_022206_1, VkglTestCase_022206_2);

#define VkglTestCase_022207_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022207_2 ".format.sized.2d_array.r8i_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022207, VkglTestCase_022207_1, VkglTestCase_022207_2);

#define VkglTestCase_022208_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022208_2 "format.sized.2d_array.r8i_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022208, VkglTestCase_022208_1, VkglTestCase_022208_2);

#define VkglTestCase_022209_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022209_2 "format.sized.2d_array.r8ui_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022209, VkglTestCase_022209_1, VkglTestCase_022209_2);

#define VkglTestCase_022210_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022210_2 "format.sized.2d_array.r8ui_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022210, VkglTestCase_022210_1, VkglTestCase_022210_2);

#define VkglTestCase_022211_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022211_2 "rmat.sized.2d_array.r8_snorm_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022211, VkglTestCase_022211_1, VkglTestCase_022211_2);

#define VkglTestCase_022212_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022212_2 "rmat.sized.2d_array.r8_snorm_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022212, VkglTestCase_022212_1, VkglTestCase_022212_2);

#define VkglTestCase_022213_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_022213_2 "sized.2d_array.depth_component32f_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022213, VkglTestCase_022213_1, VkglTestCase_022213_2);

#define VkglTestCase_022214_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_022214_2 "sized.2d_array.depth_component32f_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022214, VkglTestCase_022214_1, VkglTestCase_022214_2);

#define VkglTestCase_022215_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022215_2 ".sized.2d_array.depth_component24_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022215, VkglTestCase_022215_1, VkglTestCase_022215_2);

#define VkglTestCase_022216_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_022216_2 "sized.2d_array.depth_component24_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022216, VkglTestCase_022216_1, VkglTestCase_022216_2);

#define VkglTestCase_022217_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022217_2 ".sized.2d_array.depth_component16_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022217, VkglTestCase_022217_1, VkglTestCase_022217_2);

#define VkglTestCase_022218_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_022218_2 "sized.2d_array.depth_component16_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022218, VkglTestCase_022218_1, VkglTestCase_022218_2);

#define VkglTestCase_022219_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022219_2 ".sized.2d_array.depth32f_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022219, VkglTestCase_022219_1, VkglTestCase_022219_2);

#define VkglTestCase_022220_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_022220_2 "sized.2d_array.depth32f_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022220, VkglTestCase_022220_1, VkglTestCase_022220_2);

#define VkglTestCase_022221_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022221_2 ".sized.2d_array.depth24_stencil8_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022221, VkglTestCase_022221_1, VkglTestCase_022221_2);

#define VkglTestCase_022222_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022222_2 ".sized.2d_array.depth24_stencil8_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022222, VkglTestCase_022222_1, VkglTestCase_022222_2);
