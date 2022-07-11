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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000271_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000271_2 "er_clamp.border_color_errors"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000272_2 "er_clamp.texparameteri_errors"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "KHR-GLES32.core.texture_border"
#define VkglTestCase_000273_2 "_clamp.gettexparameteri_errors"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "KHR-GLES32.core.texture_border_clamp.s"
#define VkglTestCase_000274_2 "amplerparameteri_non_gen_sampler_error"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "KHR-GLES32.core.texture_border_clam"
#define VkglTestCase_000275_2 "p.samplerparameteri_with_wrong_pname"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "KHR-GLES32.core.texture_border_cl"
#define VkglTestCase_000276_2 "amp.samplerparameteri_border_color"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "KHR-GLES32.core.texture_bo"
#define VkglTestCase_000277_2 "rder_clamp.Texture2DRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000278_2 "order_clamp.Texture2DR32I"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000279_2 "order_clamp.Texture2DR32UI"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000280_2 "order_clamp.Texture2DRGBA8"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000281_2 "order_clamp.Texture2DDC32F"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000282_2 "order_clamp.Texture2DDC16"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000283_2 "er_clamp.Texture2DCompressed"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "KHR-GLES32.core.texture_borde"
#define VkglTestCase_000284_2 "r_clamp.Texture2DArrayRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "KHR-GLES32.core.texture_bor"
#define VkglTestCase_000285_2 "der_clamp.Texture2DArrayR32I"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000286_2 "er_clamp.Texture2DArrayR32UI"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000287_2 "er_clamp.Texture2DArrayRGBA8"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "KHR-GLES32.core.texture_border"
#define VkglTestCase_000288_2 "_clamp.Texture2DArrayCompressed"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "KHR-GLES32.core.texture_bo"
#define VkglTestCase_000289_2 "rder_clamp.Texture3DRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000290_2 "order_clamp.Texture3DR32I"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000291_2 "order_clamp.Texture3DR32UI"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "KHR-GLES32.core.texture_b"
#define VkglTestCase_000292_2 "order_clamp.Texture3DRGBA8"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "KHR-GLES32.core.texture_borde"
#define VkglTestCase_000293_2 "r_clamp.Texture2DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000294_2 "er_clamp.Texture2DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000295_2 "er_clamp.Texture2DDC32FLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000296_2 "er_clamp.Texture2DDC16Linear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "KHR-GLES32.core.texture_border_"
#define VkglTestCase_000297_2 "clamp.Texture2DCompressedLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "KHR-GLES32.core.texture_border_c"
#define VkglTestCase_000298_2 "lamp.Texture2DArrayRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "KHR-GLES32.core.texture_border_"
#define VkglTestCase_000299_2 "clamp.Texture2DArrayRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "KHR-GLES32.core.texture_border_cl"
#define VkglTestCase_000300_2 "amp.Texture2DArrayCompressedLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);

#define VkglTestCase_000301_1 "KHR-GLES32.core.texture_borde"
#define VkglTestCase_000301_2 "r_clamp.Texture3DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "KHR-GLES32.core.texture_bord"
#define VkglTestCase_000302_2 "er_clamp.Texture3DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);
