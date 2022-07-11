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
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024109_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024109_2 "ering.cube.formats.rgba16f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024109, VkglTestCase_024109_1, VkglTestCase_024109_2);

#define VkglTestCase_024110_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024110_2 "tering.cube.formats.rgba16f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024110, VkglTestCase_024110_1, VkglTestCase_024110_2);

#define VkglTestCase_024111_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024111_2 "ube.formats.rgba16f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024111, VkglTestCase_024111_1, VkglTestCase_024111_2);

#define VkglTestCase_024112_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024112_2 "ube.formats.rgba16f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024112, VkglTestCase_024112_1, VkglTestCase_024112_2);

#define VkglTestCase_024113_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024113_2 "ube.formats.rgba16f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024113, VkglTestCase_024113_1, VkglTestCase_024113_2);

#define VkglTestCase_024114_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024114_2 "cube.formats.rgba16f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024114, VkglTestCase_024114_1, VkglTestCase_024114_2);

#define VkglTestCase_024115_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024115_2 "ng.cube.formats.r11f_g11f_b10f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024115, VkglTestCase_024115_1, VkglTestCase_024115_2);

#define VkglTestCase_024116_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024116_2 "ng.cube.formats.r11f_g11f_b10f_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024116, VkglTestCase_024116_1, VkglTestCase_024116_2);

#define VkglTestCase_024117_1 "dEQP-GLES3.functional.texture.filtering.cube."
#define VkglTestCase_024117_2 "formats.r11f_g11f_b10f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024117, VkglTestCase_024117_1, VkglTestCase_024117_2);

#define VkglTestCase_024118_1 "dEQP-GLES3.functional.texture.filtering.cube"
#define VkglTestCase_024118_2 ".formats.r11f_g11f_b10f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024118, VkglTestCase_024118_1, VkglTestCase_024118_2);

#define VkglTestCase_024119_1 "dEQP-GLES3.functional.texture.filtering.cube"
#define VkglTestCase_024119_2 ".formats.r11f_g11f_b10f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024119, VkglTestCase_024119_1, VkglTestCase_024119_2);

#define VkglTestCase_024120_1 "dEQP-GLES3.functional.texture.filtering.cube"
#define VkglTestCase_024120_2 ".formats.r11f_g11f_b10f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024120, VkglTestCase_024120_1, VkglTestCase_024120_2);

#define VkglTestCase_024121_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024121_2 "ering.cube.formats.rgb9_e5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024121, VkglTestCase_024121_1, VkglTestCase_024121_2);

#define VkglTestCase_024122_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024122_2 "tering.cube.formats.rgb9_e5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024122, VkglTestCase_024122_1, VkglTestCase_024122_2);

#define VkglTestCase_024123_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024123_2 "ube.formats.rgb9_e5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024123, VkglTestCase_024123_1, VkglTestCase_024123_2);

#define VkglTestCase_024124_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024124_2 "ube.formats.rgb9_e5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024124, VkglTestCase_024124_1, VkglTestCase_024124_2);

#define VkglTestCase_024125_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024125_2 "ube.formats.rgb9_e5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024125, VkglTestCase_024125_1, VkglTestCase_024125_2);

#define VkglTestCase_024126_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024126_2 "cube.formats.rgb9_e5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024126, VkglTestCase_024126_1, VkglTestCase_024126_2);

#define VkglTestCase_024127_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024127_2 "tering.cube.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024127, VkglTestCase_024127_1, VkglTestCase_024127_2);

#define VkglTestCase_024128_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024128_2 "ltering.cube.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024128, VkglTestCase_024128_1, VkglTestCase_024128_2);

#define VkglTestCase_024129_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024129_2 "cube.formats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024129, VkglTestCase_024129_1, VkglTestCase_024129_2);

#define VkglTestCase_024130_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024130_2 "cube.formats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024130, VkglTestCase_024130_1, VkglTestCase_024130_2);

#define VkglTestCase_024131_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024131_2 "cube.formats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024131, VkglTestCase_024131_1, VkglTestCase_024131_2);

#define VkglTestCase_024132_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024132_2 ".cube.formats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024132, VkglTestCase_024132_1, VkglTestCase_024132_2);

#define VkglTestCase_024133_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024133_2 "ing.cube.formats.rgba8_snorm_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024133, VkglTestCase_024133_1, VkglTestCase_024133_2);

#define VkglTestCase_024134_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024134_2 "ring.cube.formats.rgba8_snorm_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024134, VkglTestCase_024134_1, VkglTestCase_024134_2);

#define VkglTestCase_024135_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024135_2 "e.formats.rgba8_snorm_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024135, VkglTestCase_024135_1, VkglTestCase_024135_2);

#define VkglTestCase_024136_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024136_2 "e.formats.rgba8_snorm_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024136, VkglTestCase_024136_1, VkglTestCase_024136_2);

#define VkglTestCase_024137_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024137_2 "e.formats.rgba8_snorm_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024137, VkglTestCase_024137_1, VkglTestCase_024137_2);

#define VkglTestCase_024138_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024138_2 "be.formats.rgba8_snorm_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024138, VkglTestCase_024138_1, VkglTestCase_024138_2);

#define VkglTestCase_024139_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024139_2 "tering.cube.formats.rgb565_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024139, VkglTestCase_024139_1, VkglTestCase_024139_2);

#define VkglTestCase_024140_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024140_2 "tering.cube.formats.rgb565_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024140, VkglTestCase_024140_1, VkglTestCase_024140_2);

#define VkglTestCase_024141_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024141_2 "ube.formats.rgb565_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024141, VkglTestCase_024141_1, VkglTestCase_024141_2);

#define VkglTestCase_024142_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024142_2 "cube.formats.rgb565_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024142, VkglTestCase_024142_1, VkglTestCase_024142_2);

#define VkglTestCase_024143_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024143_2 "cube.formats.rgb565_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024143, VkglTestCase_024143_1, VkglTestCase_024143_2);

#define VkglTestCase_024144_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024144_2 "cube.formats.rgb565_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024144, VkglTestCase_024144_1, VkglTestCase_024144_2);

#define VkglTestCase_024145_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024145_2 "tering.cube.formats.rgba4_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024145, VkglTestCase_024145_1, VkglTestCase_024145_2);

#define VkglTestCase_024146_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024146_2 "ltering.cube.formats.rgba4_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024146, VkglTestCase_024146_1, VkglTestCase_024146_2);

#define VkglTestCase_024147_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024147_2 "cube.formats.rgba4_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024147, VkglTestCase_024147_1, VkglTestCase_024147_2);

#define VkglTestCase_024148_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024148_2 "cube.formats.rgba4_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024148, VkglTestCase_024148_1, VkglTestCase_024148_2);

#define VkglTestCase_024149_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024149_2 "cube.formats.rgba4_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024149, VkglTestCase_024149_1, VkglTestCase_024149_2);

#define VkglTestCase_024150_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024150_2 ".cube.formats.rgba4_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024150, VkglTestCase_024150_1, VkglTestCase_024150_2);

#define VkglTestCase_024151_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024151_2 "ering.cube.formats.rgb5_a1_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024151, VkglTestCase_024151_1, VkglTestCase_024151_2);

#define VkglTestCase_024152_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024152_2 "tering.cube.formats.rgb5_a1_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024152, VkglTestCase_024152_1, VkglTestCase_024152_2);

#define VkglTestCase_024153_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024153_2 "ube.formats.rgb5_a1_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024153, VkglTestCase_024153_1, VkglTestCase_024153_2);

#define VkglTestCase_024154_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024154_2 "ube.formats.rgb5_a1_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024154, VkglTestCase_024154_1, VkglTestCase_024154_2);

#define VkglTestCase_024155_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024155_2 "ube.formats.rgb5_a1_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024155, VkglTestCase_024155_1, VkglTestCase_024155_2);

#define VkglTestCase_024156_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024156_2 "cube.formats.rgb5_a1_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024156, VkglTestCase_024156_1, VkglTestCase_024156_2);

#define VkglTestCase_024157_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024157_2 "ing.cube.formats.srgb8_alpha8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024157, VkglTestCase_024157_1, VkglTestCase_024157_2);

#define VkglTestCase_024158_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024158_2 "ing.cube.formats.srgb8_alpha8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024158, VkglTestCase_024158_1, VkglTestCase_024158_2);

#define VkglTestCase_024159_1 "dEQP-GLES3.functional.texture.filtering.cube"
#define VkglTestCase_024159_2 ".formats.srgb8_alpha8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024159, VkglTestCase_024159_1, VkglTestCase_024159_2);

#define VkglTestCase_024160_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024160_2 "e.formats.srgb8_alpha8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024160, VkglTestCase_024160_1, VkglTestCase_024160_2);

#define VkglTestCase_024161_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024161_2 "e.formats.srgb8_alpha8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024161, VkglTestCase_024161_1, VkglTestCase_024161_2);

#define VkglTestCase_024162_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024162_2 "e.formats.srgb8_alpha8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024162, VkglTestCase_024162_1, VkglTestCase_024162_2);

#define VkglTestCase_024163_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024163_2 "ering.cube.formats.srgb_r8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024163, VkglTestCase_024163_1, VkglTestCase_024163_2);

#define VkglTestCase_024164_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024164_2 "tering.cube.formats.srgb_r8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024164, VkglTestCase_024164_1, VkglTestCase_024164_2);

#define VkglTestCase_024165_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024165_2 "ube.formats.srgb_r8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024165, VkglTestCase_024165_1, VkglTestCase_024165_2);

#define VkglTestCase_024166_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024166_2 "ube.formats.srgb_r8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024166, VkglTestCase_024166_1, VkglTestCase_024166_2);

#define VkglTestCase_024167_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024167_2 "ube.formats.srgb_r8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024167, VkglTestCase_024167_1, VkglTestCase_024167_2);

#define VkglTestCase_024168_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024168_2 "cube.formats.srgb_r8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024168, VkglTestCase_024168_1, VkglTestCase_024168_2);

#define VkglTestCase_024169_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024169_2 "ering.cube.formats.srgb_rg8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024169, VkglTestCase_024169_1, VkglTestCase_024169_2);

#define VkglTestCase_024170_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024170_2 "ering.cube.formats.srgb_rg8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024170, VkglTestCase_024170_1, VkglTestCase_024170_2);

#define VkglTestCase_024171_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024171_2 "be.formats.srgb_rg8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024171, VkglTestCase_024171_1, VkglTestCase_024171_2);

#define VkglTestCase_024172_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024172_2 "ube.formats.srgb_rg8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024172, VkglTestCase_024172_1, VkglTestCase_024172_2);

#define VkglTestCase_024173_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024173_2 "ube.formats.srgb_rg8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024173, VkglTestCase_024173_1, VkglTestCase_024173_2);

#define VkglTestCase_024174_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024174_2 "ube.formats.srgb_rg8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024174, VkglTestCase_024174_1, VkglTestCase_024174_2);

#define VkglTestCase_024175_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024175_2 "ering.cube.formats.rgb10_a2_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024175, VkglTestCase_024175_1, VkglTestCase_024175_2);

#define VkglTestCase_024176_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024176_2 "ering.cube.formats.rgb10_a2_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024176, VkglTestCase_024176_1, VkglTestCase_024176_2);

#define VkglTestCase_024177_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024177_2 "be.formats.rgb10_a2_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024177, VkglTestCase_024177_1, VkglTestCase_024177_2);

#define VkglTestCase_024178_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024178_2 "ube.formats.rgb10_a2_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024178, VkglTestCase_024178_1, VkglTestCase_024178_2);

#define VkglTestCase_024179_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024179_2 "ube.formats.rgb10_a2_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024179, VkglTestCase_024179_1, VkglTestCase_024179_2);

#define VkglTestCase_024180_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024180_2 "ube.formats.rgb10_a2_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024180, VkglTestCase_024180_1, VkglTestCase_024180_2);

#define VkglTestCase_024181_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024181_2 "ring.cube.formats.etc1_rgb8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024181, VkglTestCase_024181_1, VkglTestCase_024181_2);

#define VkglTestCase_024182_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024182_2 "ering.cube.formats.etc1_rgb8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024182, VkglTestCase_024182_1, VkglTestCase_024182_2);

#define VkglTestCase_024183_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024183_2 "be.formats.etc1_rgb8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024183, VkglTestCase_024183_1, VkglTestCase_024183_2);

#define VkglTestCase_024184_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024184_2 "be.formats.etc1_rgb8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024184, VkglTestCase_024184_1, VkglTestCase_024184_2);

#define VkglTestCase_024185_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024185_2 "be.formats.etc1_rgb8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024185, VkglTestCase_024185_1, VkglTestCase_024185_2);

#define VkglTestCase_024186_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024186_2 "ube.formats.etc1_rgb8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024186, VkglTestCase_024186_1, VkglTestCase_024186_2);
