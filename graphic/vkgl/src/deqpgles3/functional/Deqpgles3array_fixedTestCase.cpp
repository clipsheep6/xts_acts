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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039224_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039224_2 "out.array.fixed.rgba8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039224, VkglTestCase_039224_1, VkglTestCase_039224_2);

#define VkglTestCase_039225_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039225_2 "out.array.fixed.rgba8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039225, VkglTestCase_039225_1, VkglTestCase_039225_2);

#define VkglTestCase_039226_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039226_2 "out.array.fixed.rgba8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039226, VkglTestCase_039226_1, VkglTestCase_039226_2);

#define VkglTestCase_039227_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039227_2 "out.array.fixed.rgba8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039227, VkglTestCase_039227_1, VkglTestCase_039227_2);

#define VkglTestCase_039228_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039228_2 "t.array.fixed.rgba8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039228, VkglTestCase_039228_1, VkglTestCase_039228_2);

#define VkglTestCase_039229_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039229_2 "ut.array.fixed.rgba8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039229, VkglTestCase_039229_1, VkglTestCase_039229_2);

#define VkglTestCase_039230_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039230_2 "ut.array.fixed.rgba8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039230, VkglTestCase_039230_1, VkglTestCase_039230_2);

#define VkglTestCase_039231_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039231_2 "ut.array.fixed.rgba8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039231, VkglTestCase_039231_1, VkglTestCase_039231_2);

#define VkglTestCase_039232_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039232_2 "ut.array.fixed.rgba8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039232, VkglTestCase_039232_1, VkglTestCase_039232_2);

#define VkglTestCase_039233_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039233_2 "out.array.fixed.rgba8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039233, VkglTestCase_039233_1, VkglTestCase_039233_2);

#define VkglTestCase_039234_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039234_2 "out.array.fixed.rgba8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039234, VkglTestCase_039234_1, VkglTestCase_039234_2);

#define VkglTestCase_039235_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039235_2 "out.array.fixed.rgba8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039235, VkglTestCase_039235_1, VkglTestCase_039235_2);

#define VkglTestCase_039236_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039236_2 "array.fixed.srgb8_alpha8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039236, VkglTestCase_039236_1, VkglTestCase_039236_2);

#define VkglTestCase_039237_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039237_2 ".array.fixed.srgb8_alpha8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039237, VkglTestCase_039237_1, VkglTestCase_039237_2);

#define VkglTestCase_039238_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039238_2 ".array.fixed.srgb8_alpha8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039238, VkglTestCase_039238_1, VkglTestCase_039238_2);

#define VkglTestCase_039239_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039239_2 ".array.fixed.srgb8_alpha8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039239, VkglTestCase_039239_1, VkglTestCase_039239_2);

#define VkglTestCase_039240_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039240_2 "rray.fixed.srgb8_alpha8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039240, VkglTestCase_039240_1, VkglTestCase_039240_2);

#define VkglTestCase_039241_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039241_2 "rray.fixed.srgb8_alpha8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039241, VkglTestCase_039241_1, VkglTestCase_039241_2);

#define VkglTestCase_039242_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039242_2 "rray.fixed.srgb8_alpha8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039242, VkglTestCase_039242_1, VkglTestCase_039242_2);

#define VkglTestCase_039243_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039243_2 "rray.fixed.srgb8_alpha8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039243, VkglTestCase_039243_1, VkglTestCase_039243_2);

#define VkglTestCase_039244_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039244_2 "array.fixed.srgb8_alpha8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039244, VkglTestCase_039244_1, VkglTestCase_039244_2);

#define VkglTestCase_039245_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039245_2 "array.fixed.srgb8_alpha8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039245, VkglTestCase_039245_1, VkglTestCase_039245_2);

#define VkglTestCase_039246_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039246_2 "array.fixed.srgb8_alpha8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039246, VkglTestCase_039246_1, VkglTestCase_039246_2);

#define VkglTestCase_039247_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039247_2 "array.fixed.srgb8_alpha8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039247, VkglTestCase_039247_1, VkglTestCase_039247_2);

#define VkglTestCase_039248_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039248_2 "t.array.fixed.rgb10_a2_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039248, VkglTestCase_039248_1, VkglTestCase_039248_2);

#define VkglTestCase_039249_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039249_2 "ut.array.fixed.rgb10_a2_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039249, VkglTestCase_039249_1, VkglTestCase_039249_2);

#define VkglTestCase_039250_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039250_2 "ut.array.fixed.rgb10_a2_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039250, VkglTestCase_039250_1, VkglTestCase_039250_2);

#define VkglTestCase_039251_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039251_2 "ut.array.fixed.rgb10_a2_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039251, VkglTestCase_039251_1, VkglTestCase_039251_2);

#define VkglTestCase_039252_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039252_2 ".array.fixed.rgb10_a2_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039252, VkglTestCase_039252_1, VkglTestCase_039252_2);

#define VkglTestCase_039253_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039253_2 ".array.fixed.rgb10_a2_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039253, VkglTestCase_039253_1, VkglTestCase_039253_2);

#define VkglTestCase_039254_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039254_2 ".array.fixed.rgb10_a2_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039254, VkglTestCase_039254_1, VkglTestCase_039254_2);

#define VkglTestCase_039255_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039255_2 ".array.fixed.rgb10_a2_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039255, VkglTestCase_039255_1, VkglTestCase_039255_2);

#define VkglTestCase_039256_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039256_2 "t.array.fixed.rgb10_a2_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039256, VkglTestCase_039256_1, VkglTestCase_039256_2);

#define VkglTestCase_039257_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039257_2 "t.array.fixed.rgb10_a2_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039257, VkglTestCase_039257_1, VkglTestCase_039257_2);

#define VkglTestCase_039258_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039258_2 "t.array.fixed.rgb10_a2_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039258, VkglTestCase_039258_1, VkglTestCase_039258_2);

#define VkglTestCase_039259_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039259_2 "t.array.fixed.rgb10_a2_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039259, VkglTestCase_039259_1, VkglTestCase_039259_2);

#define VkglTestCase_039260_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039260_2 "out.array.fixed.rgba4_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039260, VkglTestCase_039260_1, VkglTestCase_039260_2);

#define VkglTestCase_039261_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039261_2 "out.array.fixed.rgba4_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039261, VkglTestCase_039261_1, VkglTestCase_039261_2);

#define VkglTestCase_039262_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039262_2 "out.array.fixed.rgba4_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039262, VkglTestCase_039262_1, VkglTestCase_039262_2);

#define VkglTestCase_039263_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039263_2 "out.array.fixed.rgba4_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039263, VkglTestCase_039263_1, VkglTestCase_039263_2);

#define VkglTestCase_039264_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039264_2 "t.array.fixed.rgba4_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039264, VkglTestCase_039264_1, VkglTestCase_039264_2);

#define VkglTestCase_039265_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039265_2 "ut.array.fixed.rgba4_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039265, VkglTestCase_039265_1, VkglTestCase_039265_2);

#define VkglTestCase_039266_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039266_2 "ut.array.fixed.rgba4_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039266, VkglTestCase_039266_1, VkglTestCase_039266_2);

#define VkglTestCase_039267_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039267_2 "ut.array.fixed.rgba4_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039267, VkglTestCase_039267_1, VkglTestCase_039267_2);

#define VkglTestCase_039268_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039268_2 "ut.array.fixed.rgba4_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039268, VkglTestCase_039268_1, VkglTestCase_039268_2);

#define VkglTestCase_039269_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039269_2 "out.array.fixed.rgba4_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039269, VkglTestCase_039269_1, VkglTestCase_039269_2);

#define VkglTestCase_039270_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039270_2 "out.array.fixed.rgba4_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039270, VkglTestCase_039270_1, VkglTestCase_039270_2);

#define VkglTestCase_039271_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039271_2 "out.array.fixed.rgba4_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039271, VkglTestCase_039271_1, VkglTestCase_039271_2);

#define VkglTestCase_039272_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039272_2 "ut.array.fixed.rgb5_a1_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039272, VkglTestCase_039272_1, VkglTestCase_039272_2);

#define VkglTestCase_039273_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039273_2 "ut.array.fixed.rgb5_a1_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039273, VkglTestCase_039273_1, VkglTestCase_039273_2);

#define VkglTestCase_039274_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039274_2 "ut.array.fixed.rgb5_a1_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039274, VkglTestCase_039274_1, VkglTestCase_039274_2);

#define VkglTestCase_039275_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039275_2 "ut.array.fixed.rgb5_a1_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039275, VkglTestCase_039275_1, VkglTestCase_039275_2);

#define VkglTestCase_039276_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039276_2 ".array.fixed.rgb5_a1_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039276, VkglTestCase_039276_1, VkglTestCase_039276_2);

#define VkglTestCase_039277_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039277_2 "t.array.fixed.rgb5_a1_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039277, VkglTestCase_039277_1, VkglTestCase_039277_2);

#define VkglTestCase_039278_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039278_2 "t.array.fixed.rgb5_a1_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039278, VkglTestCase_039278_1, VkglTestCase_039278_2);

#define VkglTestCase_039279_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039279_2 "t.array.fixed.rgb5_a1_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039279, VkglTestCase_039279_1, VkglTestCase_039279_2);

#define VkglTestCase_039280_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039280_2 "t.array.fixed.rgb5_a1_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039280, VkglTestCase_039280_1, VkglTestCase_039280_2);

#define VkglTestCase_039281_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039281_2 "ut.array.fixed.rgb5_a1_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039281, VkglTestCase_039281_1, VkglTestCase_039281_2);

#define VkglTestCase_039282_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039282_2 "ut.array.fixed.rgb5_a1_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039282, VkglTestCase_039282_1, VkglTestCase_039282_2);

#define VkglTestCase_039283_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039283_2 "ut.array.fixed.rgb5_a1_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039283, VkglTestCase_039283_1, VkglTestCase_039283_2);

#define VkglTestCase_039284_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039284_2 "out.array.fixed.rgb8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039284, VkglTestCase_039284_1, VkglTestCase_039284_2);

#define VkglTestCase_039285_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039285_2 "_out.array.fixed.rgb8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039285, VkglTestCase_039285_1, VkglTestCase_039285_2);

#define VkglTestCase_039286_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039286_2 "_out.array.fixed.rgb8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039286, VkglTestCase_039286_1, VkglTestCase_039286_2);

#define VkglTestCase_039287_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039287_2 "_out.array.fixed.rgb8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039287, VkglTestCase_039287_1, VkglTestCase_039287_2);

#define VkglTestCase_039288_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039288_2 "ut.array.fixed.rgb8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039288, VkglTestCase_039288_1, VkglTestCase_039288_2);

#define VkglTestCase_039289_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039289_2 "ut.array.fixed.rgb8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039289, VkglTestCase_039289_1, VkglTestCase_039289_2);

#define VkglTestCase_039290_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039290_2 "ut.array.fixed.rgb8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039290, VkglTestCase_039290_1, VkglTestCase_039290_2);

#define VkglTestCase_039291_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039291_2 "ut.array.fixed.rgb8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039291, VkglTestCase_039291_1, VkglTestCase_039291_2);

#define VkglTestCase_039292_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039292_2 "out.array.fixed.rgb8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039292, VkglTestCase_039292_1, VkglTestCase_039292_2);

#define VkglTestCase_039293_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039293_2 "out.array.fixed.rgb8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039293, VkglTestCase_039293_1, VkglTestCase_039293_2);

#define VkglTestCase_039294_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039294_2 "out.array.fixed.rgb8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039294, VkglTestCase_039294_1, VkglTestCase_039294_2);

#define VkglTestCase_039295_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039295_2 "out.array.fixed.rgb8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039295, VkglTestCase_039295_1, VkglTestCase_039295_2);

#define VkglTestCase_039296_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039296_2 "ut.array.fixed.rgb565_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039296, VkglTestCase_039296_1, VkglTestCase_039296_2);

#define VkglTestCase_039297_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039297_2 "out.array.fixed.rgb565_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039297, VkglTestCase_039297_1, VkglTestCase_039297_2);

#define VkglTestCase_039298_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039298_2 "out.array.fixed.rgb565_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039298, VkglTestCase_039298_1, VkglTestCase_039298_2);

#define VkglTestCase_039299_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039299_2 "out.array.fixed.rgb565_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039299, VkglTestCase_039299_1, VkglTestCase_039299_2);

#define VkglTestCase_039300_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039300_2 "t.array.fixed.rgb565_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039300, VkglTestCase_039300_1, VkglTestCase_039300_2);

#define VkglTestCase_039301_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039301_2 "t.array.fixed.rgb565_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039301, VkglTestCase_039301_1, VkglTestCase_039301_2);

#define VkglTestCase_039302_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039302_2 "t.array.fixed.rgb565_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039302, VkglTestCase_039302_1, VkglTestCase_039302_2);

#define VkglTestCase_039303_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039303_2 "t.array.fixed.rgb565_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039303, VkglTestCase_039303_1, VkglTestCase_039303_2);

#define VkglTestCase_039304_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039304_2 "ut.array.fixed.rgb565_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039304, VkglTestCase_039304_1, VkglTestCase_039304_2);

#define VkglTestCase_039305_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039305_2 "ut.array.fixed.rgb565_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039305, VkglTestCase_039305_1, VkglTestCase_039305_2);

#define VkglTestCase_039306_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039306_2 "ut.array.fixed.rgb565_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039306, VkglTestCase_039306_1, VkglTestCase_039306_2);

#define VkglTestCase_039307_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039307_2 "ut.array.fixed.rgb565_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039307, VkglTestCase_039307_1, VkglTestCase_039307_2);

#define VkglTestCase_039308_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039308_2 "_out.array.fixed.rg8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039308, VkglTestCase_039308_1, VkglTestCase_039308_2);

#define VkglTestCase_039309_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039309_2 "_out.array.fixed.rg8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039309, VkglTestCase_039309_1, VkglTestCase_039309_2);

#define VkglTestCase_039310_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039310_2 "_out.array.fixed.rg8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039310, VkglTestCase_039310_1, VkglTestCase_039310_2);

#define VkglTestCase_039311_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039311_2 "_out.array.fixed.rg8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039311, VkglTestCase_039311_1, VkglTestCase_039311_2);

#define VkglTestCase_039312_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039312_2 "ut.array.fixed.rg8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039312, VkglTestCase_039312_1, VkglTestCase_039312_2);

#define VkglTestCase_039313_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039313_2 "out.array.fixed.rg8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039313, VkglTestCase_039313_1, VkglTestCase_039313_2);

#define VkglTestCase_039314_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039314_2 "out.array.fixed.rg8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039314, VkglTestCase_039314_1, VkglTestCase_039314_2);

#define VkglTestCase_039315_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039315_2 "out.array.fixed.rg8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039315, VkglTestCase_039315_1, VkglTestCase_039315_2);

#define VkglTestCase_039316_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039316_2 "out.array.fixed.rg8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039316, VkglTestCase_039316_1, VkglTestCase_039316_2);

#define VkglTestCase_039317_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039317_2 "_out.array.fixed.rg8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039317, VkglTestCase_039317_1, VkglTestCase_039317_2);

#define VkglTestCase_039318_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039318_2 "_out.array.fixed.rg8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039318, VkglTestCase_039318_1, VkglTestCase_039318_2);

#define VkglTestCase_039319_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039319_2 "_out.array.fixed.rg8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039319, VkglTestCase_039319_1, VkglTestCase_039319_2);

#define VkglTestCase_039320_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039320_2 "_out.array.fixed.r8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039320, VkglTestCase_039320_1, VkglTestCase_039320_2);

#define VkglTestCase_039321_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039321_2 "t_out.array.fixed.r8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039321, VkglTestCase_039321_1, VkglTestCase_039321_2);

#define VkglTestCase_039322_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039322_2 "t_out.array.fixed.r8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039322, VkglTestCase_039322_1, VkglTestCase_039322_2);

#define VkglTestCase_039323_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039323_2 "t_out.array.fixed.r8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039323, VkglTestCase_039323_1, VkglTestCase_039323_2);

#define VkglTestCase_039324_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039324_2 "out.array.fixed.r8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039324, VkglTestCase_039324_1, VkglTestCase_039324_2);

#define VkglTestCase_039325_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039325_2 "out.array.fixed.r8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039325, VkglTestCase_039325_1, VkglTestCase_039325_2);

#define VkglTestCase_039326_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039326_2 "out.array.fixed.r8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039326, VkglTestCase_039326_1, VkglTestCase_039326_2);

#define VkglTestCase_039327_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039327_2 "out.array.fixed.r8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039327, VkglTestCase_039327_1, VkglTestCase_039327_2);

#define VkglTestCase_039328_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039328_2 "_out.array.fixed.r8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039328, VkglTestCase_039328_1, VkglTestCase_039328_2);

#define VkglTestCase_039329_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039329_2 "_out.array.fixed.r8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039329, VkglTestCase_039329_1, VkglTestCase_039329_2);

#define VkglTestCase_039330_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039330_2 "_out.array.fixed.r8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039330, VkglTestCase_039330_1, VkglTestCase_039330_2);

#define VkglTestCase_039331_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039331_2 "_out.array.fixed.r8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039331, VkglTestCase_039331_1, VkglTestCase_039331_2);
