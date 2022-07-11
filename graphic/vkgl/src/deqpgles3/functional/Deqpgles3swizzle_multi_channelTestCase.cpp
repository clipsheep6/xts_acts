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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025217_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025217_2 "izzle.multi_channel.alpha_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025217, VkglTestCase_025217_1, VkglTestCase_025217_2);

#define VkglTestCase_025218_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025218_2 "zzle.multi_channel.alpha_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025218, VkglTestCase_025218_1, VkglTestCase_025218_2);

#define VkglTestCase_025219_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025219_2 "zzle.multi_channel.alpha_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025219, VkglTestCase_025219_1, VkglTestCase_025219_2);

#define VkglTestCase_025220_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025220_2 "zzle.multi_channel.alpha_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025220, VkglTestCase_025220_1, VkglTestCase_025220_2);

#define VkglTestCase_025221_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025221_2 "zzle.multi_channel.alpha_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025221, VkglTestCase_025221_1, VkglTestCase_025221_2);

#define VkglTestCase_025222_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025222_2 "izzle.multi_channel.alpha_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025222, VkglTestCase_025222_1, VkglTestCase_025222_2);

#define VkglTestCase_025223_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025223_2 "wizzle.multi_channel.alpha_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025223, VkglTestCase_025223_1, VkglTestCase_025223_2);

#define VkglTestCase_025224_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025224_2 "wizzle.multi_channel.alpha_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025224, VkglTestCase_025224_1, VkglTestCase_025224_2);

#define VkglTestCase_025225_1 "dEQP-GLES3.functional.texture.swizzle"
#define VkglTestCase_025225_2 ".multi_channel.alpha_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025225, VkglTestCase_025225_1, VkglTestCase_025225_2);

#define VkglTestCase_025226_1 "dEQP-GLES3.functional.texture.swiz"
#define VkglTestCase_025226_2 "zle.multi_channel.luminance_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025226, VkglTestCase_025226_1, VkglTestCase_025226_2);

#define VkglTestCase_025227_1 "dEQP-GLES3.functional.texture.swizz"
#define VkglTestCase_025227_2 "le.multi_channel.luminance_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025227, VkglTestCase_025227_1, VkglTestCase_025227_2);

#define VkglTestCase_025228_1 "dEQP-GLES3.functional.texture.swizz"
#define VkglTestCase_025228_2 "le.multi_channel.luminance_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025228, VkglTestCase_025228_1, VkglTestCase_025228_2);

#define VkglTestCase_025229_1 "dEQP-GLES3.functional.texture.swizz"
#define VkglTestCase_025229_2 "le.multi_channel.luminance_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025229, VkglTestCase_025229_1, VkglTestCase_025229_2);

#define VkglTestCase_025230_1 "dEQP-GLES3.functional.texture.swizz"
#define VkglTestCase_025230_2 "le.multi_channel.luminance_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025230, VkglTestCase_025230_1, VkglTestCase_025230_2);

#define VkglTestCase_025231_1 "dEQP-GLES3.functional.texture.swiz"
#define VkglTestCase_025231_2 "zle.multi_channel.luminance_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025231, VkglTestCase_025231_1, VkglTestCase_025231_2);

#define VkglTestCase_025232_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025232_2 "zzle.multi_channel.luminance_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025232, VkglTestCase_025232_1, VkglTestCase_025232_2);

#define VkglTestCase_025233_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025233_2 "zzle.multi_channel.luminance_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025233, VkglTestCase_025233_1, VkglTestCase_025233_2);

#define VkglTestCase_025234_1 "dEQP-GLES3.functional.texture.swizzle.m"
#define VkglTestCase_025234_2 "ulti_channel.luminance_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025234, VkglTestCase_025234_1, VkglTestCase_025234_2);

#define VkglTestCase_025235_1 "dEQP-GLES3.functional.texture.swizzle"
#define VkglTestCase_025235_2 ".multi_channel.luminance_alpha_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025235, VkglTestCase_025235_1, VkglTestCase_025235_2);

#define VkglTestCase_025236_1 "dEQP-GLES3.functional.texture.swizzle."
#define VkglTestCase_025236_2 "multi_channel.luminance_alpha_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025236, VkglTestCase_025236_1, VkglTestCase_025236_2);

#define VkglTestCase_025237_1 "dEQP-GLES3.functional.texture.swizzle."
#define VkglTestCase_025237_2 "multi_channel.luminance_alpha_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025237, VkglTestCase_025237_1, VkglTestCase_025237_2);

#define VkglTestCase_025238_1 "dEQP-GLES3.functional.texture.swizzle."
#define VkglTestCase_025238_2 "multi_channel.luminance_alpha_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025238, VkglTestCase_025238_1, VkglTestCase_025238_2);

#define VkglTestCase_025239_1 "dEQP-GLES3.functional.texture.swizzle."
#define VkglTestCase_025239_2 "multi_channel.luminance_alpha_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025239, VkglTestCase_025239_1, VkglTestCase_025239_2);

#define VkglTestCase_025240_1 "dEQP-GLES3.functional.texture.swizzle"
#define VkglTestCase_025240_2 ".multi_channel.luminance_alpha_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025240, VkglTestCase_025240_1, VkglTestCase_025240_2);

#define VkglTestCase_025241_1 "dEQP-GLES3.functional.texture.swizzl"
#define VkglTestCase_025241_2 "e.multi_channel.luminance_alpha_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025241, VkglTestCase_025241_1, VkglTestCase_025241_2);

#define VkglTestCase_025242_1 "dEQP-GLES3.functional.texture.swizzl"
#define VkglTestCase_025242_2 "e.multi_channel.luminance_alpha_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025242, VkglTestCase_025242_1, VkglTestCase_025242_2);

#define VkglTestCase_025243_1 "dEQP-GLES3.functional.texture.swizzle.mult"
#define VkglTestCase_025243_2 "i_channel.luminance_alpha_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025243, VkglTestCase_025243_1, VkglTestCase_025243_2);

#define VkglTestCase_025244_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025244_2 "wizzle.multi_channel.red_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025244, VkglTestCase_025244_1, VkglTestCase_025244_2);

#define VkglTestCase_025245_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025245_2 "izzle.multi_channel.red_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025245, VkglTestCase_025245_1, VkglTestCase_025245_2);

#define VkglTestCase_025246_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025246_2 "izzle.multi_channel.red_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025246, VkglTestCase_025246_1, VkglTestCase_025246_2);

#define VkglTestCase_025247_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025247_2 "izzle.multi_channel.red_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025247, VkglTestCase_025247_1, VkglTestCase_025247_2);

#define VkglTestCase_025248_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025248_2 "izzle.multi_channel.red_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025248, VkglTestCase_025248_1, VkglTestCase_025248_2);

#define VkglTestCase_025249_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025249_2 "wizzle.multi_channel.red_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025249, VkglTestCase_025249_1, VkglTestCase_025249_2);

#define VkglTestCase_025250_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025250_2 "swizzle.multi_channel.red_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025250, VkglTestCase_025250_1, VkglTestCase_025250_2);

#define VkglTestCase_025251_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025251_2 "swizzle.multi_channel.red_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025251, VkglTestCase_025251_1, VkglTestCase_025251_2);

#define VkglTestCase_025252_1 "dEQP-GLES3.functional.texture.swizzl"
#define VkglTestCase_025252_2 "e.multi_channel.red_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025252, VkglTestCase_025252_1, VkglTestCase_025252_2);

#define VkglTestCase_025253_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025253_2 "wizzle.multi_channel.rg_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025253, VkglTestCase_025253_1, VkglTestCase_025253_2);

#define VkglTestCase_025254_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025254_2 "izzle.multi_channel.rg_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025254, VkglTestCase_025254_1, VkglTestCase_025254_2);

#define VkglTestCase_025255_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025255_2 "wizzle.multi_channel.rg_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025255, VkglTestCase_025255_1, VkglTestCase_025255_2);

#define VkglTestCase_025256_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025256_2 "izzle.multi_channel.rg_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025256, VkglTestCase_025256_1, VkglTestCase_025256_2);

#define VkglTestCase_025257_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025257_2 "wizzle.multi_channel.rg_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025257, VkglTestCase_025257_1, VkglTestCase_025257_2);

#define VkglTestCase_025258_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025258_2 "wizzle.multi_channel.rg_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025258, VkglTestCase_025258_1, VkglTestCase_025258_2);

#define VkglTestCase_025259_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025259_2 ".swizzle.multi_channel.rg_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025259, VkglTestCase_025259_1, VkglTestCase_025259_2);

#define VkglTestCase_025260_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025260_2 ".swizzle.multi_channel.rg_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025260, VkglTestCase_025260_1, VkglTestCase_025260_2);

#define VkglTestCase_025261_1 "dEQP-GLES3.functional.texture.swizzl"
#define VkglTestCase_025261_2 "e.multi_channel.rg_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025261, VkglTestCase_025261_1, VkglTestCase_025261_2);

#define VkglTestCase_025262_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025262_2 "wizzle.multi_channel.rgb_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025262, VkglTestCase_025262_1, VkglTestCase_025262_2);

#define VkglTestCase_025263_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025263_2 "izzle.multi_channel.rgb_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025263, VkglTestCase_025263_1, VkglTestCase_025263_2);

#define VkglTestCase_025264_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025264_2 "izzle.multi_channel.rgb_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025264, VkglTestCase_025264_1, VkglTestCase_025264_2);

#define VkglTestCase_025265_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025265_2 "izzle.multi_channel.rgb_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025265, VkglTestCase_025265_1, VkglTestCase_025265_2);

#define VkglTestCase_025266_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025266_2 "izzle.multi_channel.rgb_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025266, VkglTestCase_025266_1, VkglTestCase_025266_2);

#define VkglTestCase_025267_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_025267_2 "wizzle.multi_channel.rgb_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025267, VkglTestCase_025267_1, VkglTestCase_025267_2);

#define VkglTestCase_025268_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025268_2 "swizzle.multi_channel.rgb_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025268, VkglTestCase_025268_1, VkglTestCase_025268_2);

#define VkglTestCase_025269_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025269_2 "swizzle.multi_channel.rgb_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025269, VkglTestCase_025269_1, VkglTestCase_025269_2);

#define VkglTestCase_025270_1 "dEQP-GLES3.functional.texture.swizzl"
#define VkglTestCase_025270_2 "e.multi_channel.rgb_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025270, VkglTestCase_025270_1, VkglTestCase_025270_2);

#define VkglTestCase_025271_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025271_2 "izzle.multi_channel.rgba_all_red"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025271, VkglTestCase_025271_1, VkglTestCase_025271_2);

#define VkglTestCase_025272_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025272_2 "zzle.multi_channel.rgba_all_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025272, VkglTestCase_025272_1, VkglTestCase_025272_2);

#define VkglTestCase_025273_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025273_2 "izzle.multi_channel.rgba_all_blue"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025273, VkglTestCase_025273_1, VkglTestCase_025273_2);

#define VkglTestCase_025274_1 "dEQP-GLES3.functional.texture.swi"
#define VkglTestCase_025274_2 "zzle.multi_channel.rgba_all_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025274, VkglTestCase_025274_1, VkglTestCase_025274_2);

#define VkglTestCase_025275_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025275_2 "izzle.multi_channel.rgba_all_zero"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025275, VkglTestCase_025275_1, VkglTestCase_025275_2);

#define VkglTestCase_025276_1 "dEQP-GLES3.functional.texture.sw"
#define VkglTestCase_025276_2 "izzle.multi_channel.rgba_all_one"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025276, VkglTestCase_025276_1, VkglTestCase_025276_2);

#define VkglTestCase_025277_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025277_2 "swizzle.multi_channel.rgba_bgra"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025277, VkglTestCase_025277_1, VkglTestCase_025277_2);

#define VkglTestCase_025278_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025278_2 "swizzle.multi_channel.rgba_abgr"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025278, VkglTestCase_025278_1, VkglTestCase_025278_2);

#define VkglTestCase_025279_1 "dEQP-GLES3.functional.texture.swizzle"
#define VkglTestCase_025279_2 ".multi_channel.rgba_one_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025279, VkglTestCase_025279_1, VkglTestCase_025279_2);
