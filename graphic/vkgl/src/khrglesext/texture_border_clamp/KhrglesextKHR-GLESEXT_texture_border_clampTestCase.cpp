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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000242_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000242_2 "_clamp.border_color_errors"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000243_2 "_clamp.texparameteri_errors"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "KHR-GLESEXT.texture_border_c"
#define VkglTestCase_000244_2 "lamp.gettexparameteri_errors"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "KHR-GLESEXT.texture_border_clamp.sam"
#define VkglTestCase_000245_2 "plerparameteri_non_gen_sampler_error"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "KHR-GLESEXT.texture_border_clamp."
#define VkglTestCase_000246_2 "samplerparameteri_with_wrong_pname"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "KHR-GLESEXT.texture_border_clam"
#define VkglTestCase_000247_2 "p.samplerparameteri_border_color"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "KHR-GLESEXT.texture_bord"
#define VkglTestCase_000248_2 "er_clamp.Texture2DRGBA32F"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000249_2 "der_clamp.Texture2DR32I"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000250_2 "der_clamp.Texture2DR32UI"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000251_2 "der_clamp.Texture2DRGBA8"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000252_2 "der_clamp.Texture2DDC32F"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000253_2 "der_clamp.Texture2DDC16"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000254_2 "_clamp.Texture2DCompressed"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "KHR-GLESEXT.texture_border_"
#define VkglTestCase_000255_2 "clamp.Texture2DArrayRGBA32F"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "KHR-GLESEXT.texture_borde"
#define VkglTestCase_000256_2 "r_clamp.Texture2DArrayR32I"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000257_2 "_clamp.Texture2DArrayR32UI"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000258_2 "_clamp.Texture2DArrayRGBA8"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "KHR-GLESEXT.texture_border_c"
#define VkglTestCase_000259_2 "lamp.Texture2DArrayCompressed"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "KHR-GLESEXT.texture_bord"
#define VkglTestCase_000260_2 "er_clamp.Texture3DRGBA32F"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000261_2 "der_clamp.Texture3DR32I"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000262_2 "der_clamp.Texture3DR32UI"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "KHR-GLESEXT.texture_bor"
#define VkglTestCase_000263_2 "der_clamp.Texture3DRGBA8"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "KHR-GLESEXT.texture_border_"
#define VkglTestCase_000264_2 "clamp.Texture2DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000265_2 "_clamp.Texture2DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000266_2 "_clamp.Texture2DDC32FLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000267_2 "_clamp.Texture2DDC16Linear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "KHR-GLESEXT.texture_border_cl"
#define VkglTestCase_000268_2 "amp.Texture2DCompressedLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "KHR-GLESEXT.texture_border_cla"
#define VkglTestCase_000269_2 "mp.Texture2DArrayRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "KHR-GLESEXT.texture_border_cl"
#define VkglTestCase_000270_2 "amp.Texture2DArrayRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "KHR-GLESEXT.texture_border_clam"
#define VkglTestCase_000271_2 "p.Texture2DArrayCompressedLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "KHR-GLESEXT.texture_border_"
#define VkglTestCase_000272_2 "clamp.Texture3DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "KHR-GLESEXT.texture_border"
#define VkglTestCase_000273_2 "_clamp.Texture3DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);
