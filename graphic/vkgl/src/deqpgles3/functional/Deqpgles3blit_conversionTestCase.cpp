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

#define VkglTestCase_032116_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032116_2 ".conversion.rgba32i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032116, VkglTestCase_032116_1, VkglTestCase_032116_2);

#define VkglTestCase_032117_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032117_2 ".conversion.rgba32i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032117, VkglTestCase_032117_1, VkglTestCase_032117_2);

#define VkglTestCase_032118_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032118_2 "t.conversion.rgba32i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032118, VkglTestCase_032118_1, VkglTestCase_032118_2);

#define VkglTestCase_032119_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032119_2 "t.conversion.rgba32i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032119, VkglTestCase_032119_1, VkglTestCase_032119_2);

#define VkglTestCase_032120_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032120_2 "t.conversion.rgba32i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032120, VkglTestCase_032120_1, VkglTestCase_032120_2);

#define VkglTestCase_032121_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032121_2 "it.conversion.rgba32i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032121, VkglTestCase_032121_1, VkglTestCase_032121_2);

#define VkglTestCase_032122_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032122_2 "it.conversion.rgba32i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032122, VkglTestCase_032122_1, VkglTestCase_032122_2);

#define VkglTestCase_032123_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032123_2 "it.conversion.rgba32i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032123, VkglTestCase_032123_1, VkglTestCase_032123_2);

#define VkglTestCase_032124_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032124_2 "it.conversion.rgba32i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032124, VkglTestCase_032124_1, VkglTestCase_032124_2);

#define VkglTestCase_032125_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032125_2 "conversion.rgba32ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032125, VkglTestCase_032125_1, VkglTestCase_032125_2);

#define VkglTestCase_032126_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032126_2 "conversion.rgba32ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032126, VkglTestCase_032126_1, VkglTestCase_032126_2);

#define VkglTestCase_032127_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032127_2 ".conversion.rgba32ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032127, VkglTestCase_032127_1, VkglTestCase_032127_2);

#define VkglTestCase_032128_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032128_2 "onversion.rgba32ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032128, VkglTestCase_032128_1, VkglTestCase_032128_2);

#define VkglTestCase_032129_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032129_2 ".conversion.rgba32ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032129, VkglTestCase_032129_1, VkglTestCase_032129_2);

#define VkglTestCase_032130_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032130_2 ".conversion.rgba32ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032130, VkglTestCase_032130_1, VkglTestCase_032130_2);

#define VkglTestCase_032131_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032131_2 "t.conversion.rgba32ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032131, VkglTestCase_032131_1, VkglTestCase_032131_2);

#define VkglTestCase_032132_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032132_2 "t.conversion.rgba32ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032132, VkglTestCase_032132_1, VkglTestCase_032132_2);

#define VkglTestCase_032133_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032133_2 "t.conversion.rgba32ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032133, VkglTestCase_032133_1, VkglTestCase_032133_2);

#define VkglTestCase_032134_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032134_2 "t.conversion.rgba32ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032134, VkglTestCase_032134_1, VkglTestCase_032134_2);

#define VkglTestCase_032135_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032135_2 ".conversion.rgba16i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032135, VkglTestCase_032135_1, VkglTestCase_032135_2);

#define VkglTestCase_032136_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032136_2 ".conversion.rgba16i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032136, VkglTestCase_032136_1, VkglTestCase_032136_2);

#define VkglTestCase_032137_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032137_2 "t.conversion.rgba16i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032137, VkglTestCase_032137_1, VkglTestCase_032137_2);

#define VkglTestCase_032138_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032138_2 "t.conversion.rgba16i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032138, VkglTestCase_032138_1, VkglTestCase_032138_2);

#define VkglTestCase_032139_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032139_2 "t.conversion.rgba16i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032139, VkglTestCase_032139_1, VkglTestCase_032139_2);

#define VkglTestCase_032140_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032140_2 "it.conversion.rgba16i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032140, VkglTestCase_032140_1, VkglTestCase_032140_2);

#define VkglTestCase_032141_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032141_2 "it.conversion.rgba16i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032141, VkglTestCase_032141_1, VkglTestCase_032141_2);

#define VkglTestCase_032142_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032142_2 "it.conversion.rgba16i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032142, VkglTestCase_032142_1, VkglTestCase_032142_2);

#define VkglTestCase_032143_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032143_2 "it.conversion.rgba16i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032143, VkglTestCase_032143_1, VkglTestCase_032143_2);

#define VkglTestCase_032144_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032144_2 "conversion.rgba16ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032144, VkglTestCase_032144_1, VkglTestCase_032144_2);

#define VkglTestCase_032145_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032145_2 "conversion.rgba16ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032145, VkglTestCase_032145_1, VkglTestCase_032145_2);

#define VkglTestCase_032146_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032146_2 ".conversion.rgba16ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032146, VkglTestCase_032146_1, VkglTestCase_032146_2);

#define VkglTestCase_032147_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032147_2 "onversion.rgba16ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032147, VkglTestCase_032147_1, VkglTestCase_032147_2);

#define VkglTestCase_032148_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032148_2 ".conversion.rgba16ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032148, VkglTestCase_032148_1, VkglTestCase_032148_2);

#define VkglTestCase_032149_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032149_2 ".conversion.rgba16ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032149, VkglTestCase_032149_1, VkglTestCase_032149_2);

#define VkglTestCase_032150_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032150_2 "t.conversion.rgba16ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032150, VkglTestCase_032150_1, VkglTestCase_032150_2);

#define VkglTestCase_032151_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032151_2 "t.conversion.rgba16ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032151, VkglTestCase_032151_1, VkglTestCase_032151_2);

#define VkglTestCase_032152_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032152_2 "t.conversion.rgba16ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032152, VkglTestCase_032152_1, VkglTestCase_032152_2);

#define VkglTestCase_032153_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032153_2 "t.conversion.rgba16ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032153, VkglTestCase_032153_1, VkglTestCase_032153_2);

#define VkglTestCase_032154_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032154_2 "it.conversion.rgba8_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032154, VkglTestCase_032154_1, VkglTestCase_032154_2);

#define VkglTestCase_032155_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032155_2 "conversion.rgba8_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032155, VkglTestCase_032155_1, VkglTestCase_032155_2);

#define VkglTestCase_032156_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032156_2 "t.conversion.rgba8_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032156, VkglTestCase_032156_1, VkglTestCase_032156_2);

#define VkglTestCase_032157_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032157_2 "it.conversion.rgba8_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032157, VkglTestCase_032157_1, VkglTestCase_032157_2);

#define VkglTestCase_032158_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032158_2 "t.conversion.rgba8_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032158, VkglTestCase_032158_1, VkglTestCase_032158_2);

#define VkglTestCase_032159_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032159_2 "lit.conversion.rgba8_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032159, VkglTestCase_032159_1, VkglTestCase_032159_2);

#define VkglTestCase_032160_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032160_2 "it.conversion.rgba8_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032160, VkglTestCase_032160_1, VkglTestCase_032160_2);

#define VkglTestCase_032161_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032161_2 "lit.conversion.rgba8_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032161, VkglTestCase_032161_1, VkglTestCase_032161_2);

#define VkglTestCase_032162_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032162_2 "blit.conversion.rgba8_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032162, VkglTestCase_032162_1, VkglTestCase_032162_2);

#define VkglTestCase_032163_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032163_2 "t.conversion.rgba8_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032163, VkglTestCase_032163_1, VkglTestCase_032163_2);

#define VkglTestCase_032164_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032164_2 "t.conversion.rgba8_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032164, VkglTestCase_032164_1, VkglTestCase_032164_2);

#define VkglTestCase_032165_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032165_2 "onversion.rgba8_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032165, VkglTestCase_032165_1, VkglTestCase_032165_2);

#define VkglTestCase_032166_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032166_2 "it.conversion.rgba8_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032166, VkglTestCase_032166_1, VkglTestCase_032166_2);

#define VkglTestCase_032167_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032167_2 "it.conversion.rgba8_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032167, VkglTestCase_032167_1, VkglTestCase_032167_2);

#define VkglTestCase_032168_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032168_2 "lit.conversion.rgba8_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032168, VkglTestCase_032168_1, VkglTestCase_032168_2);

#define VkglTestCase_032169_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032169_2 "lit.conversion.rgba8_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032169, VkglTestCase_032169_1, VkglTestCase_032169_2);

#define VkglTestCase_032170_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032170_2 "t.conversion.rgba8i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032170, VkglTestCase_032170_1, VkglTestCase_032170_2);

#define VkglTestCase_032171_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032171_2 "t.conversion.rgba8i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032171, VkglTestCase_032171_1, VkglTestCase_032171_2);

#define VkglTestCase_032172_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032172_2 "t.conversion.rgba8i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032172, VkglTestCase_032172_1, VkglTestCase_032172_2);

#define VkglTestCase_032173_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032173_2 "it.conversion.rgba8i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032173, VkglTestCase_032173_1, VkglTestCase_032173_2);

#define VkglTestCase_032174_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032174_2 "it.conversion.rgba8i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032174, VkglTestCase_032174_1, VkglTestCase_032174_2);

#define VkglTestCase_032175_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032175_2 "it.conversion.rgba8i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032175, VkglTestCase_032175_1, VkglTestCase_032175_2);

#define VkglTestCase_032176_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032176_2 "it.conversion.rgba8i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032176, VkglTestCase_032176_1, VkglTestCase_032176_2);

#define VkglTestCase_032177_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032177_2 "it.conversion.rgba8i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032177, VkglTestCase_032177_1, VkglTestCase_032177_2);

#define VkglTestCase_032178_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032178_2 "lit.conversion.rgba8i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032178, VkglTestCase_032178_1, VkglTestCase_032178_2);

#define VkglTestCase_032179_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032179_2 ".conversion.rgba8ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032179, VkglTestCase_032179_1, VkglTestCase_032179_2);

#define VkglTestCase_032180_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032180_2 ".conversion.rgba8ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032180, VkglTestCase_032180_1, VkglTestCase_032180_2);

#define VkglTestCase_032181_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032181_2 ".conversion.rgba8ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032181, VkglTestCase_032181_1, VkglTestCase_032181_2);

#define VkglTestCase_032182_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032182_2 "conversion.rgba8ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032182, VkglTestCase_032182_1, VkglTestCase_032182_2);

#define VkglTestCase_032183_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032183_2 "t.conversion.rgba8ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032183, VkglTestCase_032183_1, VkglTestCase_032183_2);

#define VkglTestCase_032184_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032184_2 "t.conversion.rgba8ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032184, VkglTestCase_032184_1, VkglTestCase_032184_2);

#define VkglTestCase_032185_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032185_2 "t.conversion.rgba8ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032185, VkglTestCase_032185_1, VkglTestCase_032185_2);

#define VkglTestCase_032186_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032186_2 "t.conversion.rgba8ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032186, VkglTestCase_032186_1, VkglTestCase_032186_2);

#define VkglTestCase_032187_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032187_2 "t.conversion.rgba8ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032187, VkglTestCase_032187_1, VkglTestCase_032187_2);

#define VkglTestCase_032188_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032188_2 "it.conversion.rgba8ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032188, VkglTestCase_032188_1, VkglTestCase_032188_2);

#define VkglTestCase_032189_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032189_2 "conversion.srgb8_alpha8_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032189, VkglTestCase_032189_1, VkglTestCase_032189_2);

#define VkglTestCase_032190_1 "dEQP-GLES3.functional.fbo.blit.conv"
#define VkglTestCase_032190_2 "ersion.srgb8_alpha8_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032190, VkglTestCase_032190_1, VkglTestCase_032190_2);

#define VkglTestCase_032191_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032191_2 "nversion.srgb8_alpha8_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032191, VkglTestCase_032191_1, VkglTestCase_032191_2);

#define VkglTestCase_032192_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032192_2 "conversion.srgb8_alpha8_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032192, VkglTestCase_032192_1, VkglTestCase_032192_2);

#define VkglTestCase_032193_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032193_2 "onversion.srgb8_alpha8_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032193, VkglTestCase_032193_1, VkglTestCase_032193_2);

#define VkglTestCase_032194_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032194_2 "conversion.srgb8_alpha8_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032194, VkglTestCase_032194_1, VkglTestCase_032194_2);

#define VkglTestCase_032195_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032195_2 "onversion.srgb8_alpha8_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032195, VkglTestCase_032195_1, VkglTestCase_032195_2);

#define VkglTestCase_032196_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032196_2 ".conversion.srgb8_alpha8_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032196, VkglTestCase_032196_1, VkglTestCase_032196_2);

#define VkglTestCase_032197_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032197_2 ".conversion.srgb8_alpha8_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032197, VkglTestCase_032197_1, VkglTestCase_032197_2);

#define VkglTestCase_032198_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032198_2 "onversion.srgb8_alpha8_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032198, VkglTestCase_032198_1, VkglTestCase_032198_2);

#define VkglTestCase_032199_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032199_2 "onversion.srgb8_alpha8_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032199, VkglTestCase_032199_1, VkglTestCase_032199_2);

#define VkglTestCase_032200_1 "dEQP-GLES3.functional.fbo.blit.conve"
#define VkglTestCase_032200_2 "rsion.srgb8_alpha8_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032200, VkglTestCase_032200_1, VkglTestCase_032200_2);

#define VkglTestCase_032201_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032201_2 "conversion.srgb8_alpha8_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032201, VkglTestCase_032201_1, VkglTestCase_032201_2);

#define VkglTestCase_032202_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032202_2 "conversion.srgb8_alpha8_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032202, VkglTestCase_032202_1, VkglTestCase_032202_2);

#define VkglTestCase_032203_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032203_2 "conversion.srgb8_alpha8_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032203, VkglTestCase_032203_1, VkglTestCase_032203_2);

#define VkglTestCase_032204_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032204_2 "conversion.srgb8_alpha8_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032204, VkglTestCase_032204_1, VkglTestCase_032204_2);

#define VkglTestCase_032205_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032205_2 "t.conversion.rgb10_a2_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032205, VkglTestCase_032205_1, VkglTestCase_032205_2);

#define VkglTestCase_032206_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032206_2 "nversion.rgb10_a2_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032206, VkglTestCase_032206_1, VkglTestCase_032206_2);

#define VkglTestCase_032207_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032207_2 "conversion.rgb10_a2_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032207, VkglTestCase_032207_1, VkglTestCase_032207_2);

#define VkglTestCase_032208_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032208_2 "t.conversion.rgb10_a2_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032208, VkglTestCase_032208_1, VkglTestCase_032208_2);

#define VkglTestCase_032209_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032209_2 ".conversion.rgb10_a2_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032209, VkglTestCase_032209_1, VkglTestCase_032209_2);

#define VkglTestCase_032210_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032210_2 "t.conversion.rgb10_a2_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032210, VkglTestCase_032210_1, VkglTestCase_032210_2);

#define VkglTestCase_032211_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032211_2 ".conversion.rgb10_a2_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032211, VkglTestCase_032211_1, VkglTestCase_032211_2);

#define VkglTestCase_032212_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032212_2 "it.conversion.rgb10_a2_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032212, VkglTestCase_032212_1, VkglTestCase_032212_2);

#define VkglTestCase_032213_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032213_2 "it.conversion.rgb10_a2_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032213, VkglTestCase_032213_1, VkglTestCase_032213_2);

#define VkglTestCase_032214_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032214_2 ".conversion.rgb10_a2_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032214, VkglTestCase_032214_1, VkglTestCase_032214_2);

#define VkglTestCase_032215_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032215_2 ".conversion.rgb10_a2_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032215, VkglTestCase_032215_1, VkglTestCase_032215_2);

#define VkglTestCase_032216_1 "dEQP-GLES3.functional.fbo.blit.con"
#define VkglTestCase_032216_2 "version.rgb10_a2_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032216, VkglTestCase_032216_1, VkglTestCase_032216_2);

#define VkglTestCase_032217_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032217_2 "t.conversion.rgb10_a2_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032217, VkglTestCase_032217_1, VkglTestCase_032217_2);

#define VkglTestCase_032218_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032218_2 "t.conversion.rgb10_a2_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032218, VkglTestCase_032218_1, VkglTestCase_032218_2);

#define VkglTestCase_032219_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032219_2 "t.conversion.rgb10_a2_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032219, VkglTestCase_032219_1, VkglTestCase_032219_2);

#define VkglTestCase_032220_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032220_2 "t.conversion.rgb10_a2_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032220, VkglTestCase_032220_1, VkglTestCase_032220_2);

#define VkglTestCase_032221_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032221_2 "onversion.rgb10_a2ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032221, VkglTestCase_032221_1, VkglTestCase_032221_2);

#define VkglTestCase_032222_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032222_2 "onversion.rgb10_a2ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032222, VkglTestCase_032222_1, VkglTestCase_032222_2);

#define VkglTestCase_032223_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032223_2 "conversion.rgb10_a2ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032223, VkglTestCase_032223_1, VkglTestCase_032223_2);

#define VkglTestCase_032224_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032224_2 "nversion.rgb10_a2ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032224, VkglTestCase_032224_1, VkglTestCase_032224_2);

#define VkglTestCase_032225_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032225_2 "conversion.rgb10_a2ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032225, VkglTestCase_032225_1, VkglTestCase_032225_2);

#define VkglTestCase_032226_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032226_2 "conversion.rgb10_a2ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032226, VkglTestCase_032226_1, VkglTestCase_032226_2);

#define VkglTestCase_032227_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032227_2 ".conversion.rgb10_a2ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032227, VkglTestCase_032227_1, VkglTestCase_032227_2);

#define VkglTestCase_032228_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032228_2 ".conversion.rgb10_a2ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032228, VkglTestCase_032228_1, VkglTestCase_032228_2);

#define VkglTestCase_032229_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032229_2 ".conversion.rgb10_a2ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032229, VkglTestCase_032229_1, VkglTestCase_032229_2);

#define VkglTestCase_032230_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032230_2 ".conversion.rgb10_a2ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032230, VkglTestCase_032230_1, VkglTestCase_032230_2);

#define VkglTestCase_032231_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032231_2 "it.conversion.rgba4_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032231, VkglTestCase_032231_1, VkglTestCase_032231_2);

#define VkglTestCase_032232_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032232_2 "conversion.rgba4_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032232, VkglTestCase_032232_1, VkglTestCase_032232_2);

#define VkglTestCase_032233_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032233_2 "t.conversion.rgba4_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032233, VkglTestCase_032233_1, VkglTestCase_032233_2);

#define VkglTestCase_032234_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032234_2 "it.conversion.rgba4_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032234, VkglTestCase_032234_1, VkglTestCase_032234_2);

#define VkglTestCase_032235_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032235_2 "t.conversion.rgba4_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032235, VkglTestCase_032235_1, VkglTestCase_032235_2);

#define VkglTestCase_032236_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032236_2 "lit.conversion.rgba4_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032236, VkglTestCase_032236_1, VkglTestCase_032236_2);

#define VkglTestCase_032237_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032237_2 "it.conversion.rgba4_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032237, VkglTestCase_032237_1, VkglTestCase_032237_2);

#define VkglTestCase_032238_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032238_2 "lit.conversion.rgba4_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032238, VkglTestCase_032238_1, VkglTestCase_032238_2);

#define VkglTestCase_032239_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032239_2 "blit.conversion.rgba4_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032239, VkglTestCase_032239_1, VkglTestCase_032239_2);

#define VkglTestCase_032240_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032240_2 "t.conversion.rgba4_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032240, VkglTestCase_032240_1, VkglTestCase_032240_2);

#define VkglTestCase_032241_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032241_2 "t.conversion.rgba4_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032241, VkglTestCase_032241_1, VkglTestCase_032241_2);

#define VkglTestCase_032242_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032242_2 "onversion.rgba4_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032242, VkglTestCase_032242_1, VkglTestCase_032242_2);

#define VkglTestCase_032243_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032243_2 "it.conversion.rgba4_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032243, VkglTestCase_032243_1, VkglTestCase_032243_2);

#define VkglTestCase_032244_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032244_2 "it.conversion.rgba4_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032244, VkglTestCase_032244_1, VkglTestCase_032244_2);

#define VkglTestCase_032245_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032245_2 "lit.conversion.rgba4_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032245, VkglTestCase_032245_1, VkglTestCase_032245_2);

#define VkglTestCase_032246_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032246_2 "lit.conversion.rgba4_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032246, VkglTestCase_032246_1, VkglTestCase_032246_2);

#define VkglTestCase_032247_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032247_2 "t.conversion.rgb5_a1_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032247, VkglTestCase_032247_1, VkglTestCase_032247_2);

#define VkglTestCase_032248_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032248_2 "onversion.rgb5_a1_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032248, VkglTestCase_032248_1, VkglTestCase_032248_2);

#define VkglTestCase_032249_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032249_2 ".conversion.rgb5_a1_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032249, VkglTestCase_032249_1, VkglTestCase_032249_2);

#define VkglTestCase_032250_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032250_2 "t.conversion.rgb5_a1_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032250, VkglTestCase_032250_1, VkglTestCase_032250_2);

#define VkglTestCase_032251_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032251_2 ".conversion.rgb5_a1_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032251, VkglTestCase_032251_1, VkglTestCase_032251_2);

#define VkglTestCase_032252_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032252_2 "it.conversion.rgb5_a1_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032252, VkglTestCase_032252_1, VkglTestCase_032252_2);

#define VkglTestCase_032253_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032253_2 "t.conversion.rgb5_a1_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032253, VkglTestCase_032253_1, VkglTestCase_032253_2);

#define VkglTestCase_032254_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032254_2 "it.conversion.rgb5_a1_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032254, VkglTestCase_032254_1, VkglTestCase_032254_2);

#define VkglTestCase_032255_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032255_2 "lit.conversion.rgb5_a1_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032255, VkglTestCase_032255_1, VkglTestCase_032255_2);

#define VkglTestCase_032256_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032256_2 ".conversion.rgb5_a1_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032256, VkglTestCase_032256_1, VkglTestCase_032256_2);

#define VkglTestCase_032257_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032257_2 ".conversion.rgb5_a1_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032257, VkglTestCase_032257_1, VkglTestCase_032257_2);

#define VkglTestCase_032258_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032258_2 "nversion.rgb5_a1_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032258, VkglTestCase_032258_1, VkglTestCase_032258_2);

#define VkglTestCase_032259_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032259_2 "t.conversion.rgb5_a1_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032259, VkglTestCase_032259_1, VkglTestCase_032259_2);

#define VkglTestCase_032260_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032260_2 "t.conversion.rgb5_a1_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032260, VkglTestCase_032260_1, VkglTestCase_032260_2);

#define VkglTestCase_032261_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032261_2 "it.conversion.rgb5_a1_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032261, VkglTestCase_032261_1, VkglTestCase_032261_2);

#define VkglTestCase_032262_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032262_2 "it.conversion.rgb5_a1_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032262, VkglTestCase_032262_1, VkglTestCase_032262_2);

#define VkglTestCase_032263_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032263_2 "lit.conversion.rgb8_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032263, VkglTestCase_032263_1, VkglTestCase_032263_2);

#define VkglTestCase_032264_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032264_2 "conversion.rgb8_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032264, VkglTestCase_032264_1, VkglTestCase_032264_2);

#define VkglTestCase_032265_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032265_2 "t.conversion.rgb8_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032265, VkglTestCase_032265_1, VkglTestCase_032265_2);

#define VkglTestCase_032266_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032266_2 "lit.conversion.rgb8_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032266, VkglTestCase_032266_1, VkglTestCase_032266_2);

#define VkglTestCase_032267_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032267_2 "it.conversion.rgb8_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032267, VkglTestCase_032267_1, VkglTestCase_032267_2);

#define VkglTestCase_032268_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032268_2 "lit.conversion.rgb8_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032268, VkglTestCase_032268_1, VkglTestCase_032268_2);

#define VkglTestCase_032269_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032269_2 "it.conversion.rgb8_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032269, VkglTestCase_032269_1, VkglTestCase_032269_2);

#define VkglTestCase_032270_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032270_2 "blit.conversion.rgb8_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032270, VkglTestCase_032270_1, VkglTestCase_032270_2);

#define VkglTestCase_032271_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032271_2 "blit.conversion.rgb8_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032271, VkglTestCase_032271_1, VkglTestCase_032271_2);

#define VkglTestCase_032272_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032272_2 "it.conversion.rgb8_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032272, VkglTestCase_032272_1, VkglTestCase_032272_2);

#define VkglTestCase_032273_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032273_2 "it.conversion.rgb8_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032273, VkglTestCase_032273_1, VkglTestCase_032273_2);

#define VkglTestCase_032274_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032274_2 "onversion.rgb8_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032274, VkglTestCase_032274_1, VkglTestCase_032274_2);

#define VkglTestCase_032275_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032275_2 "lit.conversion.rgb8_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032275, VkglTestCase_032275_1, VkglTestCase_032275_2);

#define VkglTestCase_032276_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032276_2 "lit.conversion.rgb8_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032276, VkglTestCase_032276_1, VkglTestCase_032276_2);

#define VkglTestCase_032277_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032277_2 "lit.conversion.rgb8_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032277, VkglTestCase_032277_1, VkglTestCase_032277_2);

#define VkglTestCase_032278_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032278_2 "lit.conversion.rgb8_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032278, VkglTestCase_032278_1, VkglTestCase_032278_2);

#define VkglTestCase_032279_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032279_2 "it.conversion.rgb565_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032279, VkglTestCase_032279_1, VkglTestCase_032279_2);

#define VkglTestCase_032280_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032280_2 "onversion.rgb565_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032280, VkglTestCase_032280_1, VkglTestCase_032280_2);

#define VkglTestCase_032281_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032281_2 ".conversion.rgb565_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032281, VkglTestCase_032281_1, VkglTestCase_032281_2);

#define VkglTestCase_032282_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032282_2 "it.conversion.rgb565_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032282, VkglTestCase_032282_1, VkglTestCase_032282_2);

#define VkglTestCase_032283_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032283_2 "t.conversion.rgb565_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032283, VkglTestCase_032283_1, VkglTestCase_032283_2);

#define VkglTestCase_032284_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032284_2 "it.conversion.rgb565_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032284, VkglTestCase_032284_1, VkglTestCase_032284_2);

#define VkglTestCase_032285_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032285_2 "t.conversion.rgb565_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032285, VkglTestCase_032285_1, VkglTestCase_032285_2);

#define VkglTestCase_032286_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032286_2 "lit.conversion.rgb565_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032286, VkglTestCase_032286_1, VkglTestCase_032286_2);

#define VkglTestCase_032287_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032287_2 "lit.conversion.rgb565_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032287, VkglTestCase_032287_1, VkglTestCase_032287_2);

#define VkglTestCase_032288_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032288_2 "t.conversion.rgb565_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032288, VkglTestCase_032288_1, VkglTestCase_032288_2);

#define VkglTestCase_032289_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032289_2 "t.conversion.rgb565_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032289, VkglTestCase_032289_1, VkglTestCase_032289_2);

#define VkglTestCase_032290_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032290_2 "nversion.rgb565_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032290, VkglTestCase_032290_1, VkglTestCase_032290_2);

#define VkglTestCase_032291_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032291_2 "it.conversion.rgb565_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032291, VkglTestCase_032291_1, VkglTestCase_032291_2);

#define VkglTestCase_032292_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032292_2 "it.conversion.rgb565_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032292, VkglTestCase_032292_1, VkglTestCase_032292_2);

#define VkglTestCase_032293_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032293_2 "it.conversion.rgb565_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032293, VkglTestCase_032293_1, VkglTestCase_032293_2);

#define VkglTestCase_032294_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032294_2 "it.conversion.rgb565_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032294, VkglTestCase_032294_1, VkglTestCase_032294_2);

#define VkglTestCase_032295_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032295_2 "t.conversion.rg32i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032295, VkglTestCase_032295_1, VkglTestCase_032295_2);

#define VkglTestCase_032296_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032296_2 "t.conversion.rg32i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032296, VkglTestCase_032296_1, VkglTestCase_032296_2);

#define VkglTestCase_032297_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032297_2 "it.conversion.rg32i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032297, VkglTestCase_032297_1, VkglTestCase_032297_2);

#define VkglTestCase_032298_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032298_2 "it.conversion.rg32i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032298, VkglTestCase_032298_1, VkglTestCase_032298_2);

#define VkglTestCase_032299_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032299_2 "it.conversion.rg32i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032299, VkglTestCase_032299_1, VkglTestCase_032299_2);

#define VkglTestCase_032300_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032300_2 "lit.conversion.rg32i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032300, VkglTestCase_032300_1, VkglTestCase_032300_2);

#define VkglTestCase_032301_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032301_2 "lit.conversion.rg32i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032301, VkglTestCase_032301_1, VkglTestCase_032301_2);

#define VkglTestCase_032302_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032302_2 "lit.conversion.rg32i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032302, VkglTestCase_032302_1, VkglTestCase_032302_2);

#define VkglTestCase_032303_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032303_2 "lit.conversion.rg32i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032303, VkglTestCase_032303_1, VkglTestCase_032303_2);

#define VkglTestCase_032304_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032304_2 ".conversion.rg32ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032304, VkglTestCase_032304_1, VkglTestCase_032304_2);

#define VkglTestCase_032305_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032305_2 ".conversion.rg32ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032305, VkglTestCase_032305_1, VkglTestCase_032305_2);

#define VkglTestCase_032306_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032306_2 "t.conversion.rg32ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032306, VkglTestCase_032306_1, VkglTestCase_032306_2);

#define VkglTestCase_032307_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032307_2 "conversion.rg32ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032307, VkglTestCase_032307_1, VkglTestCase_032307_2);

#define VkglTestCase_032308_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032308_2 "t.conversion.rg32ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032308, VkglTestCase_032308_1, VkglTestCase_032308_2);

#define VkglTestCase_032309_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032309_2 "t.conversion.rg32ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032309, VkglTestCase_032309_1, VkglTestCase_032309_2);

#define VkglTestCase_032310_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032310_2 "it.conversion.rg32ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032310, VkglTestCase_032310_1, VkglTestCase_032310_2);

#define VkglTestCase_032311_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032311_2 "it.conversion.rg32ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032311, VkglTestCase_032311_1, VkglTestCase_032311_2);

#define VkglTestCase_032312_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032312_2 "it.conversion.rg32ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032312, VkglTestCase_032312_1, VkglTestCase_032312_2);

#define VkglTestCase_032313_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032313_2 "it.conversion.rg32ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032313, VkglTestCase_032313_1, VkglTestCase_032313_2);

#define VkglTestCase_032314_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032314_2 "t.conversion.rg16i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032314, VkglTestCase_032314_1, VkglTestCase_032314_2);

#define VkglTestCase_032315_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032315_2 "t.conversion.rg16i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032315, VkglTestCase_032315_1, VkglTestCase_032315_2);

#define VkglTestCase_032316_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032316_2 "it.conversion.rg16i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032316, VkglTestCase_032316_1, VkglTestCase_032316_2);

#define VkglTestCase_032317_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032317_2 "it.conversion.rg16i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032317, VkglTestCase_032317_1, VkglTestCase_032317_2);

#define VkglTestCase_032318_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032318_2 "it.conversion.rg16i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032318, VkglTestCase_032318_1, VkglTestCase_032318_2);

#define VkglTestCase_032319_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032319_2 "lit.conversion.rg16i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032319, VkglTestCase_032319_1, VkglTestCase_032319_2);

#define VkglTestCase_032320_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032320_2 "lit.conversion.rg16i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032320, VkglTestCase_032320_1, VkglTestCase_032320_2);

#define VkglTestCase_032321_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032321_2 "lit.conversion.rg16i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032321, VkglTestCase_032321_1, VkglTestCase_032321_2);

#define VkglTestCase_032322_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032322_2 "lit.conversion.rg16i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032322, VkglTestCase_032322_1, VkglTestCase_032322_2);

#define VkglTestCase_032323_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032323_2 ".conversion.rg16ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032323, VkglTestCase_032323_1, VkglTestCase_032323_2);

#define VkglTestCase_032324_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032324_2 ".conversion.rg16ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032324, VkglTestCase_032324_1, VkglTestCase_032324_2);

#define VkglTestCase_032325_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032325_2 "t.conversion.rg16ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032325, VkglTestCase_032325_1, VkglTestCase_032325_2);

#define VkglTestCase_032326_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032326_2 "conversion.rg16ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032326, VkglTestCase_032326_1, VkglTestCase_032326_2);

#define VkglTestCase_032327_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032327_2 "t.conversion.rg16ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032327, VkglTestCase_032327_1, VkglTestCase_032327_2);

#define VkglTestCase_032328_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032328_2 "t.conversion.rg16ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032328, VkglTestCase_032328_1, VkglTestCase_032328_2);

#define VkglTestCase_032329_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032329_2 "it.conversion.rg16ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032329, VkglTestCase_032329_1, VkglTestCase_032329_2);

#define VkglTestCase_032330_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032330_2 "it.conversion.rg16ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032330, VkglTestCase_032330_1, VkglTestCase_032330_2);

#define VkglTestCase_032331_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032331_2 "it.conversion.rg16ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032331, VkglTestCase_032331_1, VkglTestCase_032331_2);

#define VkglTestCase_032332_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032332_2 "it.conversion.rg16ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032332, VkglTestCase_032332_1, VkglTestCase_032332_2);

#define VkglTestCase_032333_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032333_2 "lit.conversion.rg8_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032333, VkglTestCase_032333_1, VkglTestCase_032333_2);

#define VkglTestCase_032334_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032334_2 ".conversion.rg8_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032334, VkglTestCase_032334_1, VkglTestCase_032334_2);

#define VkglTestCase_032335_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032335_2 "it.conversion.rg8_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032335, VkglTestCase_032335_1, VkglTestCase_032335_2);

#define VkglTestCase_032336_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032336_2 "lit.conversion.rg8_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032336, VkglTestCase_032336_1, VkglTestCase_032336_2);

#define VkglTestCase_032337_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032337_2 "it.conversion.rg8_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032337, VkglTestCase_032337_1, VkglTestCase_032337_2);

#define VkglTestCase_032338_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032338_2 "blit.conversion.rg8_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032338, VkglTestCase_032338_1, VkglTestCase_032338_2);

#define VkglTestCase_032339_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032339_2 "lit.conversion.rg8_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032339, VkglTestCase_032339_1, VkglTestCase_032339_2);

#define VkglTestCase_032340_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032340_2 "blit.conversion.rg8_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032340, VkglTestCase_032340_1, VkglTestCase_032340_2);

#define VkglTestCase_032341_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032341_2 ".blit.conversion.rg8_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032341, VkglTestCase_032341_1, VkglTestCase_032341_2);

#define VkglTestCase_032342_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032342_2 "it.conversion.rg8_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032342, VkglTestCase_032342_1, VkglTestCase_032342_2);

#define VkglTestCase_032343_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032343_2 "it.conversion.rg8_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032343, VkglTestCase_032343_1, VkglTestCase_032343_2);

#define VkglTestCase_032344_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032344_2 "conversion.rg8_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032344, VkglTestCase_032344_1, VkglTestCase_032344_2);

#define VkglTestCase_032345_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032345_2 "lit.conversion.rg8_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032345, VkglTestCase_032345_1, VkglTestCase_032345_2);

#define VkglTestCase_032346_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032346_2 "lit.conversion.rg8_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032346, VkglTestCase_032346_1, VkglTestCase_032346_2);

#define VkglTestCase_032347_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032347_2 "blit.conversion.rg8_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032347, VkglTestCase_032347_1, VkglTestCase_032347_2);

#define VkglTestCase_032348_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032348_2 "blit.conversion.rg8_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032348, VkglTestCase_032348_1, VkglTestCase_032348_2);

#define VkglTestCase_032349_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032349_2 "it.conversion.rg8i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032349, VkglTestCase_032349_1, VkglTestCase_032349_2);

#define VkglTestCase_032350_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032350_2 "it.conversion.rg8i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032350, VkglTestCase_032350_1, VkglTestCase_032350_2);

#define VkglTestCase_032351_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032351_2 "it.conversion.rg8i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032351, VkglTestCase_032351_1, VkglTestCase_032351_2);

#define VkglTestCase_032352_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032352_2 "lit.conversion.rg8i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032352, VkglTestCase_032352_1, VkglTestCase_032352_2);

#define VkglTestCase_032353_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032353_2 "lit.conversion.rg8i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032353, VkglTestCase_032353_1, VkglTestCase_032353_2);

#define VkglTestCase_032354_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032354_2 "lit.conversion.rg8i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032354, VkglTestCase_032354_1, VkglTestCase_032354_2);

#define VkglTestCase_032355_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032355_2 "lit.conversion.rg8i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032355, VkglTestCase_032355_1, VkglTestCase_032355_2);

#define VkglTestCase_032356_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032356_2 "lit.conversion.rg8i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032356, VkglTestCase_032356_1, VkglTestCase_032356_2);

#define VkglTestCase_032357_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032357_2 "blit.conversion.rg8i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032357, VkglTestCase_032357_1, VkglTestCase_032357_2);

#define VkglTestCase_032358_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032358_2 "t.conversion.rg8ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032358, VkglTestCase_032358_1, VkglTestCase_032358_2);

#define VkglTestCase_032359_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032359_2 "t.conversion.rg8ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032359, VkglTestCase_032359_1, VkglTestCase_032359_2);

#define VkglTestCase_032360_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032360_2 "t.conversion.rg8ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032360, VkglTestCase_032360_1, VkglTestCase_032360_2);

#define VkglTestCase_032361_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032361_2 ".conversion.rg8ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032361, VkglTestCase_032361_1, VkglTestCase_032361_2);

#define VkglTestCase_032362_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032362_2 "it.conversion.rg8ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032362, VkglTestCase_032362_1, VkglTestCase_032362_2);

#define VkglTestCase_032363_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032363_2 "it.conversion.rg8ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032363, VkglTestCase_032363_1, VkglTestCase_032363_2);

#define VkglTestCase_032364_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032364_2 "it.conversion.rg8ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032364, VkglTestCase_032364_1, VkglTestCase_032364_2);

#define VkglTestCase_032365_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032365_2 "it.conversion.rg8ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032365, VkglTestCase_032365_1, VkglTestCase_032365_2);

#define VkglTestCase_032366_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032366_2 "it.conversion.rg8ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032366, VkglTestCase_032366_1, VkglTestCase_032366_2);

#define VkglTestCase_032367_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032367_2 "lit.conversion.rg8ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032367, VkglTestCase_032367_1, VkglTestCase_032367_2);

#define VkglTestCase_032368_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032368_2 "it.conversion.r32i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032368, VkglTestCase_032368_1, VkglTestCase_032368_2);

#define VkglTestCase_032369_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032369_2 "it.conversion.r32i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032369, VkglTestCase_032369_1, VkglTestCase_032369_2);

#define VkglTestCase_032370_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032370_2 "it.conversion.r32i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032370, VkglTestCase_032370_1, VkglTestCase_032370_2);

#define VkglTestCase_032371_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032371_2 "lit.conversion.r32i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032371, VkglTestCase_032371_1, VkglTestCase_032371_2);

#define VkglTestCase_032372_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032372_2 "lit.conversion.r32i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032372, VkglTestCase_032372_1, VkglTestCase_032372_2);

#define VkglTestCase_032373_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032373_2 "lit.conversion.r32i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032373, VkglTestCase_032373_1, VkglTestCase_032373_2);

#define VkglTestCase_032374_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032374_2 "lit.conversion.r32i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032374, VkglTestCase_032374_1, VkglTestCase_032374_2);

#define VkglTestCase_032375_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032375_2 "lit.conversion.r32i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032375, VkglTestCase_032375_1, VkglTestCase_032375_2);

#define VkglTestCase_032376_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032376_2 "blit.conversion.r32i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032376, VkglTestCase_032376_1, VkglTestCase_032376_2);

#define VkglTestCase_032377_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032377_2 "t.conversion.r32ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032377, VkglTestCase_032377_1, VkglTestCase_032377_2);

#define VkglTestCase_032378_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032378_2 "t.conversion.r32ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032378, VkglTestCase_032378_1, VkglTestCase_032378_2);

#define VkglTestCase_032379_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032379_2 "t.conversion.r32ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032379, VkglTestCase_032379_1, VkglTestCase_032379_2);

#define VkglTestCase_032380_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032380_2 ".conversion.r32ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032380, VkglTestCase_032380_1, VkglTestCase_032380_2);

#define VkglTestCase_032381_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032381_2 "it.conversion.r32ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032381, VkglTestCase_032381_1, VkglTestCase_032381_2);

#define VkglTestCase_032382_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032382_2 "it.conversion.r32ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032382, VkglTestCase_032382_1, VkglTestCase_032382_2);

#define VkglTestCase_032383_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032383_2 "it.conversion.r32ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032383, VkglTestCase_032383_1, VkglTestCase_032383_2);

#define VkglTestCase_032384_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032384_2 "it.conversion.r32ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032384, VkglTestCase_032384_1, VkglTestCase_032384_2);

#define VkglTestCase_032385_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032385_2 "it.conversion.r32ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032385, VkglTestCase_032385_1, VkglTestCase_032385_2);

#define VkglTestCase_032386_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032386_2 "lit.conversion.r32ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032386, VkglTestCase_032386_1, VkglTestCase_032386_2);

#define VkglTestCase_032387_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032387_2 "it.conversion.r16i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032387, VkglTestCase_032387_1, VkglTestCase_032387_2);

#define VkglTestCase_032388_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032388_2 "it.conversion.r16i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032388, VkglTestCase_032388_1, VkglTestCase_032388_2);

#define VkglTestCase_032389_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032389_2 "it.conversion.r16i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032389, VkglTestCase_032389_1, VkglTestCase_032389_2);

#define VkglTestCase_032390_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032390_2 "lit.conversion.r16i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032390, VkglTestCase_032390_1, VkglTestCase_032390_2);

#define VkglTestCase_032391_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032391_2 "lit.conversion.r16i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032391, VkglTestCase_032391_1, VkglTestCase_032391_2);

#define VkglTestCase_032392_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032392_2 "lit.conversion.r16i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032392, VkglTestCase_032392_1, VkglTestCase_032392_2);

#define VkglTestCase_032393_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032393_2 "lit.conversion.r16i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032393, VkglTestCase_032393_1, VkglTestCase_032393_2);

#define VkglTestCase_032394_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032394_2 "lit.conversion.r16i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032394, VkglTestCase_032394_1, VkglTestCase_032394_2);

#define VkglTestCase_032395_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032395_2 "blit.conversion.r16i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032395, VkglTestCase_032395_1, VkglTestCase_032395_2);

#define VkglTestCase_032396_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032396_2 "t.conversion.r16ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032396, VkglTestCase_032396_1, VkglTestCase_032396_2);

#define VkglTestCase_032397_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032397_2 "t.conversion.r16ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032397, VkglTestCase_032397_1, VkglTestCase_032397_2);

#define VkglTestCase_032398_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032398_2 "t.conversion.r16ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032398, VkglTestCase_032398_1, VkglTestCase_032398_2);

#define VkglTestCase_032399_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032399_2 ".conversion.r16ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032399, VkglTestCase_032399_1, VkglTestCase_032399_2);

#define VkglTestCase_032400_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032400_2 "it.conversion.r16ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032400, VkglTestCase_032400_1, VkglTestCase_032400_2);

#define VkglTestCase_032401_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032401_2 "it.conversion.r16ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032401, VkglTestCase_032401_1, VkglTestCase_032401_2);

#define VkglTestCase_032402_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032402_2 "it.conversion.r16ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032402, VkglTestCase_032402_1, VkglTestCase_032402_2);

#define VkglTestCase_032403_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032403_2 "it.conversion.r16ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032403, VkglTestCase_032403_1, VkglTestCase_032403_2);

#define VkglTestCase_032404_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032404_2 "it.conversion.r16ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032404, VkglTestCase_032404_1, VkglTestCase_032404_2);

#define VkglTestCase_032405_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032405_2 "lit.conversion.r16ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032405, VkglTestCase_032405_1, VkglTestCase_032405_2);

#define VkglTestCase_032406_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032406_2 "blit.conversion.r8_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032406, VkglTestCase_032406_1, VkglTestCase_032406_2);

#define VkglTestCase_032407_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032407_2 ".conversion.r8_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032407, VkglTestCase_032407_1, VkglTestCase_032407_2);

#define VkglTestCase_032408_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032408_2 "it.conversion.r8_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032408, VkglTestCase_032408_1, VkglTestCase_032408_2);

#define VkglTestCase_032409_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032409_2 "blit.conversion.r8_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032409, VkglTestCase_032409_1, VkglTestCase_032409_2);

#define VkglTestCase_032410_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032410_2 "lit.conversion.r8_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032410, VkglTestCase_032410_1, VkglTestCase_032410_2);

#define VkglTestCase_032411_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032411_2 "blit.conversion.r8_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032411, VkglTestCase_032411_1, VkglTestCase_032411_2);

#define VkglTestCase_032412_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032412_2 "lit.conversion.r8_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032412, VkglTestCase_032412_1, VkglTestCase_032412_2);

#define VkglTestCase_032413_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032413_2 ".blit.conversion.r8_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032413, VkglTestCase_032413_1, VkglTestCase_032413_2);

#define VkglTestCase_032414_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032414_2 ".blit.conversion.r8_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032414, VkglTestCase_032414_1, VkglTestCase_032414_2);

#define VkglTestCase_032415_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032415_2 "lit.conversion.r8_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032415, VkglTestCase_032415_1, VkglTestCase_032415_2);

#define VkglTestCase_032416_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032416_2 "lit.conversion.r8_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032416, VkglTestCase_032416_1, VkglTestCase_032416_2);

#define VkglTestCase_032417_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032417_2 "conversion.r8_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032417, VkglTestCase_032417_1, VkglTestCase_032417_2);

#define VkglTestCase_032418_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032418_2 "blit.conversion.r8_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032418, VkglTestCase_032418_1, VkglTestCase_032418_2);

#define VkglTestCase_032419_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032419_2 "blit.conversion.r8_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032419, VkglTestCase_032419_1, VkglTestCase_032419_2);

#define VkglTestCase_032420_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032420_2 "blit.conversion.r8_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032420, VkglTestCase_032420_1, VkglTestCase_032420_2);

#define VkglTestCase_032421_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032421_2 "blit.conversion.r8_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032421, VkglTestCase_032421_1, VkglTestCase_032421_2);

#define VkglTestCase_032422_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032422_2 "it.conversion.r8i_to_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032422, VkglTestCase_032422_1, VkglTestCase_032422_2);

#define VkglTestCase_032423_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032423_2 "it.conversion.r8i_to_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032423, VkglTestCase_032423_1, VkglTestCase_032423_2);

#define VkglTestCase_032424_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032424_2 "lit.conversion.r8i_to_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032424, VkglTestCase_032424_1, VkglTestCase_032424_2);

#define VkglTestCase_032425_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032425_2 "lit.conversion.r8i_to_rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032425, VkglTestCase_032425_1, VkglTestCase_032425_2);

#define VkglTestCase_032426_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032426_2 "lit.conversion.r8i_to_rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032426, VkglTestCase_032426_1, VkglTestCase_032426_2);

#define VkglTestCase_032427_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032427_2 "blit.conversion.r8i_to_rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032427, VkglTestCase_032427_1, VkglTestCase_032427_2);

#define VkglTestCase_032428_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032428_2 "blit.conversion.r8i_to_r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032428, VkglTestCase_032428_1, VkglTestCase_032428_2);

#define VkglTestCase_032429_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032429_2 "blit.conversion.r8i_to_r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032429, VkglTestCase_032429_1, VkglTestCase_032429_2);

#define VkglTestCase_032430_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032430_2 "blit.conversion.r8i_to_r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032430, VkglTestCase_032430_1, VkglTestCase_032430_2);

#define VkglTestCase_032431_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032431_2 "t.conversion.r8ui_to_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032431, VkglTestCase_032431_1, VkglTestCase_032431_2);

#define VkglTestCase_032432_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032432_2 "t.conversion.r8ui_to_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032432, VkglTestCase_032432_1, VkglTestCase_032432_2);

#define VkglTestCase_032433_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032433_2 "it.conversion.r8ui_to_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032433, VkglTestCase_032433_1, VkglTestCase_032433_2);

#define VkglTestCase_032434_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032434_2 ".conversion.r8ui_to_rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032434, VkglTestCase_032434_1, VkglTestCase_032434_2);

#define VkglTestCase_032435_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032435_2 "it.conversion.r8ui_to_rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032435, VkglTestCase_032435_1, VkglTestCase_032435_2);

#define VkglTestCase_032436_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032436_2 "it.conversion.r8ui_to_rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032436, VkglTestCase_032436_1, VkglTestCase_032436_2);

#define VkglTestCase_032437_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032437_2 "lit.conversion.r8ui_to_rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032437, VkglTestCase_032437_1, VkglTestCase_032437_2);

#define VkglTestCase_032438_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032438_2 "lit.conversion.r8ui_to_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032438, VkglTestCase_032438_1, VkglTestCase_032438_2);

#define VkglTestCase_032439_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032439_2 "lit.conversion.r8ui_to_r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032439, VkglTestCase_032439_1, VkglTestCase_032439_2);

#define VkglTestCase_032440_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032440_2 "lit.conversion.r8ui_to_r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032440, VkglTestCase_032440_1, VkglTestCase_032440_2);

#define VkglTestCase_032441_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032441_2 "t.conversion.rgba32f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032441, VkglTestCase_032441_1, VkglTestCase_032441_2);

#define VkglTestCase_032442_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032442_2 "onversion.rgba32f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032442, VkglTestCase_032442_1, VkglTestCase_032442_2);

#define VkglTestCase_032443_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032443_2 ".conversion.rgba32f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032443, VkglTestCase_032443_1, VkglTestCase_032443_2);

#define VkglTestCase_032444_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032444_2 "t.conversion.rgba32f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032444, VkglTestCase_032444_1, VkglTestCase_032444_2);

#define VkglTestCase_032445_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032445_2 ".conversion.rgba32f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032445, VkglTestCase_032445_1, VkglTestCase_032445_2);

#define VkglTestCase_032446_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032446_2 "it.conversion.rgba32f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032446, VkglTestCase_032446_1, VkglTestCase_032446_2);

#define VkglTestCase_032447_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032447_2 "t.conversion.rgba32f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032447, VkglTestCase_032447_1, VkglTestCase_032447_2);

#define VkglTestCase_032448_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032448_2 "it.conversion.rgba32f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032448, VkglTestCase_032448_1, VkglTestCase_032448_2);

#define VkglTestCase_032449_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032449_2 "lit.conversion.rgba32f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032449, VkglTestCase_032449_1, VkglTestCase_032449_2);

#define VkglTestCase_032450_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032450_2 ".conversion.rgba32f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032450, VkglTestCase_032450_1, VkglTestCase_032450_2);

#define VkglTestCase_032451_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032451_2 ".conversion.rgba32f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032451, VkglTestCase_032451_1, VkglTestCase_032451_2);

#define VkglTestCase_032452_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032452_2 "nversion.rgba32f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032452, VkglTestCase_032452_1, VkglTestCase_032452_2);

#define VkglTestCase_032453_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032453_2 "t.conversion.rgba32f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032453, VkglTestCase_032453_1, VkglTestCase_032453_2);

#define VkglTestCase_032454_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032454_2 "t.conversion.rgba32f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032454, VkglTestCase_032454_1, VkglTestCase_032454_2);

#define VkglTestCase_032455_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032455_2 "it.conversion.rgba32f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032455, VkglTestCase_032455_1, VkglTestCase_032455_2);

#define VkglTestCase_032456_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032456_2 "it.conversion.rgba32f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032456, VkglTestCase_032456_1, VkglTestCase_032456_2);

#define VkglTestCase_032457_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032457_2 "t.conversion.rgba16f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032457, VkglTestCase_032457_1, VkglTestCase_032457_2);

#define VkglTestCase_032458_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032458_2 "onversion.rgba16f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032458, VkglTestCase_032458_1, VkglTestCase_032458_2);

#define VkglTestCase_032459_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032459_2 ".conversion.rgba16f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032459, VkglTestCase_032459_1, VkglTestCase_032459_2);

#define VkglTestCase_032460_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032460_2 "t.conversion.rgba16f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032460, VkglTestCase_032460_1, VkglTestCase_032460_2);

#define VkglTestCase_032461_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032461_2 ".conversion.rgba16f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032461, VkglTestCase_032461_1, VkglTestCase_032461_2);

#define VkglTestCase_032462_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032462_2 "it.conversion.rgba16f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032462, VkglTestCase_032462_1, VkglTestCase_032462_2);

#define VkglTestCase_032463_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032463_2 "t.conversion.rgba16f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032463, VkglTestCase_032463_1, VkglTestCase_032463_2);

#define VkglTestCase_032464_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032464_2 "it.conversion.rgba16f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032464, VkglTestCase_032464_1, VkglTestCase_032464_2);

#define VkglTestCase_032465_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032465_2 "lit.conversion.rgba16f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032465, VkglTestCase_032465_1, VkglTestCase_032465_2);

#define VkglTestCase_032466_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032466_2 ".conversion.rgba16f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032466, VkglTestCase_032466_1, VkglTestCase_032466_2);

#define VkglTestCase_032467_1 "dEQP-GLES3.functional.fbo.blit"
#define VkglTestCase_032467_2 ".conversion.rgba16f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032467, VkglTestCase_032467_1, VkglTestCase_032467_2);

#define VkglTestCase_032468_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032468_2 "nversion.rgba16f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032468, VkglTestCase_032468_1, VkglTestCase_032468_2);

#define VkglTestCase_032469_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032469_2 "t.conversion.rgba16f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032469, VkglTestCase_032469_1, VkglTestCase_032469_2);

#define VkglTestCase_032470_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032470_2 "t.conversion.rgba16f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032470, VkglTestCase_032470_1, VkglTestCase_032470_2);

#define VkglTestCase_032471_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032471_2 "it.conversion.rgba16f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032471, VkglTestCase_032471_1, VkglTestCase_032471_2);

#define VkglTestCase_032472_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032472_2 "it.conversion.rgba16f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032472, VkglTestCase_032472_1, VkglTestCase_032472_2);

#define VkglTestCase_032473_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032473_2 "onversion.r11f_g11f_b10f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032473, VkglTestCase_032473_1, VkglTestCase_032473_2);

#define VkglTestCase_032474_1 "dEQP-GLES3.functional.fbo.blit.conve"
#define VkglTestCase_032474_2 "rsion.r11f_g11f_b10f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032474, VkglTestCase_032474_1, VkglTestCase_032474_2);

#define VkglTestCase_032475_1 "dEQP-GLES3.functional.fbo.blit.con"
#define VkglTestCase_032475_2 "version.r11f_g11f_b10f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032475, VkglTestCase_032475_1, VkglTestCase_032475_2);

#define VkglTestCase_032476_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032476_2 "onversion.r11f_g11f_b10f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032476, VkglTestCase_032476_1, VkglTestCase_032476_2);

#define VkglTestCase_032477_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032477_2 "nversion.r11f_g11f_b10f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032477, VkglTestCase_032477_1, VkglTestCase_032477_2);

#define VkglTestCase_032478_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032478_2 "onversion.r11f_g11f_b10f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032478, VkglTestCase_032478_1, VkglTestCase_032478_2);

#define VkglTestCase_032479_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032479_2 "nversion.r11f_g11f_b10f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032479, VkglTestCase_032479_1, VkglTestCase_032479_2);

#define VkglTestCase_032480_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032480_2 "conversion.r11f_g11f_b10f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032480, VkglTestCase_032480_1, VkglTestCase_032480_2);

#define VkglTestCase_032481_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032481_2 "conversion.r11f_g11f_b10f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032481, VkglTestCase_032481_1, VkglTestCase_032481_2);

#define VkglTestCase_032482_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032482_2 "nversion.r11f_g11f_b10f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032482, VkglTestCase_032482_1, VkglTestCase_032482_2);

#define VkglTestCase_032483_1 "dEQP-GLES3.functional.fbo.blit.co"
#define VkglTestCase_032483_2 "nversion.r11f_g11f_b10f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032483, VkglTestCase_032483_1, VkglTestCase_032483_2);

#define VkglTestCase_032484_1 "dEQP-GLES3.functional.fbo.blit.conver"
#define VkglTestCase_032484_2 "sion.r11f_g11f_b10f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032484, VkglTestCase_032484_1, VkglTestCase_032484_2);

#define VkglTestCase_032485_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032485_2 "onversion.r11f_g11f_b10f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032485, VkglTestCase_032485_1, VkglTestCase_032485_2);

#define VkglTestCase_032486_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032486_2 "onversion.r11f_g11f_b10f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032486, VkglTestCase_032486_1, VkglTestCase_032486_2);

#define VkglTestCase_032487_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032487_2 "onversion.r11f_g11f_b10f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032487, VkglTestCase_032487_1, VkglTestCase_032487_2);

#define VkglTestCase_032488_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032488_2 "onversion.r11f_g11f_b10f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032488, VkglTestCase_032488_1, VkglTestCase_032488_2);

#define VkglTestCase_032489_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032489_2 "it.conversion.rg32f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032489, VkglTestCase_032489_1, VkglTestCase_032489_2);

#define VkglTestCase_032490_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032490_2 "conversion.rg32f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032490, VkglTestCase_032490_1, VkglTestCase_032490_2);

#define VkglTestCase_032491_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032491_2 "t.conversion.rg32f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032491, VkglTestCase_032491_1, VkglTestCase_032491_2);

#define VkglTestCase_032492_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032492_2 "it.conversion.rg32f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032492, VkglTestCase_032492_1, VkglTestCase_032492_2);

#define VkglTestCase_032493_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032493_2 "t.conversion.rg32f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032493, VkglTestCase_032493_1, VkglTestCase_032493_2);

#define VkglTestCase_032494_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032494_2 "lit.conversion.rg32f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032494, VkglTestCase_032494_1, VkglTestCase_032494_2);

#define VkglTestCase_032495_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032495_2 "it.conversion.rg32f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032495, VkglTestCase_032495_1, VkglTestCase_032495_2);

#define VkglTestCase_032496_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032496_2 "lit.conversion.rg32f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032496, VkglTestCase_032496_1, VkglTestCase_032496_2);

#define VkglTestCase_032497_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032497_2 "blit.conversion.rg32f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032497, VkglTestCase_032497_1, VkglTestCase_032497_2);

#define VkglTestCase_032498_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032498_2 "t.conversion.rg32f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032498, VkglTestCase_032498_1, VkglTestCase_032498_2);

#define VkglTestCase_032499_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032499_2 "t.conversion.rg32f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032499, VkglTestCase_032499_1, VkglTestCase_032499_2);

#define VkglTestCase_032500_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032500_2 "onversion.rg32f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032500, VkglTestCase_032500_1, VkglTestCase_032500_2);

#define VkglTestCase_032501_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032501_2 "it.conversion.rg32f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032501, VkglTestCase_032501_1, VkglTestCase_032501_2);

#define VkglTestCase_032502_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032502_2 "it.conversion.rg32f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032502, VkglTestCase_032502_1, VkglTestCase_032502_2);

#define VkglTestCase_032503_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032503_2 "lit.conversion.rg32f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032503, VkglTestCase_032503_1, VkglTestCase_032503_2);

#define VkglTestCase_032504_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032504_2 "lit.conversion.rg32f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032504, VkglTestCase_032504_1, VkglTestCase_032504_2);

#define VkglTestCase_032505_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032505_2 "it.conversion.rg16f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032505, VkglTestCase_032505_1, VkglTestCase_032505_2);

#define VkglTestCase_032506_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032506_2 "conversion.rg16f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032506, VkglTestCase_032506_1, VkglTestCase_032506_2);

#define VkglTestCase_032507_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032507_2 "t.conversion.rg16f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032507, VkglTestCase_032507_1, VkglTestCase_032507_2);

#define VkglTestCase_032508_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032508_2 "it.conversion.rg16f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032508, VkglTestCase_032508_1, VkglTestCase_032508_2);

#define VkglTestCase_032509_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032509_2 "t.conversion.rg16f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032509, VkglTestCase_032509_1, VkglTestCase_032509_2);

#define VkglTestCase_032510_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032510_2 "lit.conversion.rg16f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032510, VkglTestCase_032510_1, VkglTestCase_032510_2);

#define VkglTestCase_032511_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032511_2 "it.conversion.rg16f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032511, VkglTestCase_032511_1, VkglTestCase_032511_2);

#define VkglTestCase_032512_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032512_2 "lit.conversion.rg16f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032512, VkglTestCase_032512_1, VkglTestCase_032512_2);

#define VkglTestCase_032513_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032513_2 "blit.conversion.rg16f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032513, VkglTestCase_032513_1, VkglTestCase_032513_2);

#define VkglTestCase_032514_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032514_2 "t.conversion.rg16f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032514, VkglTestCase_032514_1, VkglTestCase_032514_2);

#define VkglTestCase_032515_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032515_2 "t.conversion.rg16f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032515, VkglTestCase_032515_1, VkglTestCase_032515_2);

#define VkglTestCase_032516_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032516_2 "onversion.rg16f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032516, VkglTestCase_032516_1, VkglTestCase_032516_2);

#define VkglTestCase_032517_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032517_2 "it.conversion.rg16f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032517, VkglTestCase_032517_1, VkglTestCase_032517_2);

#define VkglTestCase_032518_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032518_2 "it.conversion.rg16f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032518, VkglTestCase_032518_1, VkglTestCase_032518_2);

#define VkglTestCase_032519_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032519_2 "lit.conversion.rg16f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032519, VkglTestCase_032519_1, VkglTestCase_032519_2);

#define VkglTestCase_032520_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032520_2 "lit.conversion.rg16f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032520, VkglTestCase_032520_1, VkglTestCase_032520_2);

#define VkglTestCase_032521_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032521_2 "lit.conversion.r32f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032521, VkglTestCase_032521_1, VkglTestCase_032521_2);

#define VkglTestCase_032522_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032522_2 "conversion.r32f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032522, VkglTestCase_032522_1, VkglTestCase_032522_2);

#define VkglTestCase_032523_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032523_2 "t.conversion.r32f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032523, VkglTestCase_032523_1, VkglTestCase_032523_2);

#define VkglTestCase_032524_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032524_2 "lit.conversion.r32f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032524, VkglTestCase_032524_1, VkglTestCase_032524_2);

#define VkglTestCase_032525_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032525_2 "it.conversion.r32f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032525, VkglTestCase_032525_1, VkglTestCase_032525_2);

#define VkglTestCase_032526_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032526_2 "lit.conversion.r32f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032526, VkglTestCase_032526_1, VkglTestCase_032526_2);

#define VkglTestCase_032527_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032527_2 "it.conversion.r32f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032527, VkglTestCase_032527_1, VkglTestCase_032527_2);

#define VkglTestCase_032528_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032528_2 "blit.conversion.r32f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032528, VkglTestCase_032528_1, VkglTestCase_032528_2);

#define VkglTestCase_032529_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032529_2 "blit.conversion.r32f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032529, VkglTestCase_032529_1, VkglTestCase_032529_2);

#define VkglTestCase_032530_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032530_2 "it.conversion.r32f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032530, VkglTestCase_032530_1, VkglTestCase_032530_2);

#define VkglTestCase_032531_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032531_2 "it.conversion.r32f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032531, VkglTestCase_032531_1, VkglTestCase_032531_2);

#define VkglTestCase_032532_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032532_2 "onversion.r32f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032532, VkglTestCase_032532_1, VkglTestCase_032532_2);

#define VkglTestCase_032533_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032533_2 "lit.conversion.r32f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032533, VkglTestCase_032533_1, VkglTestCase_032533_2);

#define VkglTestCase_032534_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032534_2 "lit.conversion.r32f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032534, VkglTestCase_032534_1, VkglTestCase_032534_2);

#define VkglTestCase_032535_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032535_2 "lit.conversion.r32f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032535, VkglTestCase_032535_1, VkglTestCase_032535_2);

#define VkglTestCase_032536_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032536_2 "lit.conversion.r32f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032536, VkglTestCase_032536_1, VkglTestCase_032536_2);

#define VkglTestCase_032537_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032537_2 "lit.conversion.r16f_to_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032537, VkglTestCase_032537_1, VkglTestCase_032537_2);

#define VkglTestCase_032538_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032538_2 "conversion.r16f_to_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032538, VkglTestCase_032538_1, VkglTestCase_032538_2);

#define VkglTestCase_032539_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032539_2 "t.conversion.r16f_to_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032539, VkglTestCase_032539_1, VkglTestCase_032539_2);

#define VkglTestCase_032540_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032540_2 "lit.conversion.r16f_to_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032540, VkglTestCase_032540_1, VkglTestCase_032540_2);

#define VkglTestCase_032541_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032541_2 "it.conversion.r16f_to_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032541, VkglTestCase_032541_1, VkglTestCase_032541_2);

#define VkglTestCase_032542_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032542_2 "lit.conversion.r16f_to_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032542, VkglTestCase_032542_1, VkglTestCase_032542_2);

#define VkglTestCase_032543_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032543_2 "it.conversion.r16f_to_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032543, VkglTestCase_032543_1, VkglTestCase_032543_2);

#define VkglTestCase_032544_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032544_2 "blit.conversion.r16f_to_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032544, VkglTestCase_032544_1, VkglTestCase_032544_2);

#define VkglTestCase_032545_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032545_2 "blit.conversion.r16f_to_r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032545, VkglTestCase_032545_1, VkglTestCase_032545_2);

#define VkglTestCase_032546_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032546_2 "it.conversion.r16f_to_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032546, VkglTestCase_032546_1, VkglTestCase_032546_2);

#define VkglTestCase_032547_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032547_2 "it.conversion.r16f_to_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032547, VkglTestCase_032547_1, VkglTestCase_032547_2);

#define VkglTestCase_032548_1 "dEQP-GLES3.functional.fbo.blit.c"
#define VkglTestCase_032548_2 "onversion.r16f_to_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032548, VkglTestCase_032548_1, VkglTestCase_032548_2);

#define VkglTestCase_032549_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032549_2 "lit.conversion.r16f_to_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032549, VkglTestCase_032549_1, VkglTestCase_032549_2);

#define VkglTestCase_032550_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032550_2 "lit.conversion.r16f_to_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032550, VkglTestCase_032550_1, VkglTestCase_032550_2);

#define VkglTestCase_032551_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032551_2 "lit.conversion.r16f_to_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032551, VkglTestCase_032551_1, VkglTestCase_032551_2);

#define VkglTestCase_032552_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032552_2 "lit.conversion.r16f_to_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032552, VkglTestCase_032552_1, VkglTestCase_032552_2);
