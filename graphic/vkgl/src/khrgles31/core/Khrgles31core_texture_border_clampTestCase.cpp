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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002648_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002648_2 "er_clamp.border_color_errors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002648, VkglTestCase_002648_1, VkglTestCase_002648_2);

#define VkglTestCase_002649_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002649_2 "er_clamp.texparameteri_errors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002649, VkglTestCase_002649_1, VkglTestCase_002649_2);

#define VkglTestCase_002650_1 "KHR-GLES31.core.texture_border"
#define VkglTestCase_002650_2 "_clamp.gettexparameteri_errors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002650, VkglTestCase_002650_1, VkglTestCase_002650_2);

#define VkglTestCase_002651_1 "KHR-GLES31.core.texture_border_clamp.s"
#define VkglTestCase_002651_2 "amplerparameteri_non_gen_sampler_error"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002651, VkglTestCase_002651_1, VkglTestCase_002651_2);

#define VkglTestCase_002652_1 "KHR-GLES31.core.texture_border_clam"
#define VkglTestCase_002652_2 "p.samplerparameteri_with_wrong_pname"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002652, VkglTestCase_002652_1, VkglTestCase_002652_2);

#define VkglTestCase_002653_1 "KHR-GLES31.core.texture_border_cl"
#define VkglTestCase_002653_2 "amp.samplerparameteri_border_color"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002653, VkglTestCase_002653_1, VkglTestCase_002653_2);

#define VkglTestCase_002654_1 "KHR-GLES31.core.texture_bo"
#define VkglTestCase_002654_2 "rder_clamp.Texture2DRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002654, VkglTestCase_002654_1, VkglTestCase_002654_2);

#define VkglTestCase_002655_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002655_2 "order_clamp.Texture2DR32I"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002655, VkglTestCase_002655_1, VkglTestCase_002655_2);

#define VkglTestCase_002656_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002656_2 "order_clamp.Texture2DR32UI"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002656, VkglTestCase_002656_1, VkglTestCase_002656_2);

#define VkglTestCase_002657_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002657_2 "order_clamp.Texture2DRGBA8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002657, VkglTestCase_002657_1, VkglTestCase_002657_2);

#define VkglTestCase_002658_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002658_2 "order_clamp.Texture2DDC32F"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002658, VkglTestCase_002658_1, VkglTestCase_002658_2);

#define VkglTestCase_002659_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002659_2 "order_clamp.Texture2DDC16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002659, VkglTestCase_002659_1, VkglTestCase_002659_2);

#define VkglTestCase_002660_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002660_2 "er_clamp.Texture2DCompressed"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002660, VkglTestCase_002660_1, VkglTestCase_002660_2);

#define VkglTestCase_002661_1 "KHR-GLES31.core.texture_borde"
#define VkglTestCase_002661_2 "r_clamp.Texture2DArrayRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002661, VkglTestCase_002661_1, VkglTestCase_002661_2);

#define VkglTestCase_002662_1 "KHR-GLES31.core.texture_bor"
#define VkglTestCase_002662_2 "der_clamp.Texture2DArrayR32I"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002662, VkglTestCase_002662_1, VkglTestCase_002662_2);

#define VkglTestCase_002663_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002663_2 "er_clamp.Texture2DArrayR32UI"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002663, VkglTestCase_002663_1, VkglTestCase_002663_2);

#define VkglTestCase_002664_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002664_2 "er_clamp.Texture2DArrayRGBA8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002664, VkglTestCase_002664_1, VkglTestCase_002664_2);

#define VkglTestCase_002665_1 "KHR-GLES31.core.texture_border"
#define VkglTestCase_002665_2 "_clamp.Texture2DArrayCompressed"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002665, VkglTestCase_002665_1, VkglTestCase_002665_2);

#define VkglTestCase_002666_1 "KHR-GLES31.core.texture_bo"
#define VkglTestCase_002666_2 "rder_clamp.Texture3DRGBA32F"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002666, VkglTestCase_002666_1, VkglTestCase_002666_2);

#define VkglTestCase_002667_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002667_2 "order_clamp.Texture3DR32I"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002667, VkglTestCase_002667_1, VkglTestCase_002667_2);

#define VkglTestCase_002668_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002668_2 "order_clamp.Texture3DR32UI"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002668, VkglTestCase_002668_1, VkglTestCase_002668_2);

#define VkglTestCase_002669_1 "KHR-GLES31.core.texture_b"
#define VkglTestCase_002669_2 "order_clamp.Texture3DRGBA8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002669, VkglTestCase_002669_1, VkglTestCase_002669_2);

#define VkglTestCase_002670_1 "KHR-GLES31.core.texture_borde"
#define VkglTestCase_002670_2 "r_clamp.Texture2DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002670, VkglTestCase_002670_1, VkglTestCase_002670_2);

#define VkglTestCase_002671_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002671_2 "er_clamp.Texture2DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002671, VkglTestCase_002671_1, VkglTestCase_002671_2);

#define VkglTestCase_002672_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002672_2 "er_clamp.Texture2DDC32FLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002672, VkglTestCase_002672_1, VkglTestCase_002672_2);

#define VkglTestCase_002673_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002673_2 "er_clamp.Texture2DDC16Linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002673, VkglTestCase_002673_1, VkglTestCase_002673_2);

#define VkglTestCase_002674_1 "KHR-GLES31.core.texture_border_"
#define VkglTestCase_002674_2 "clamp.Texture2DCompressedLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002674, VkglTestCase_002674_1, VkglTestCase_002674_2);

#define VkglTestCase_002675_1 "KHR-GLES31.core.texture_border_c"
#define VkglTestCase_002675_2 "lamp.Texture2DArrayRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002675, VkglTestCase_002675_1, VkglTestCase_002675_2);

#define VkglTestCase_002676_1 "KHR-GLES31.core.texture_border_"
#define VkglTestCase_002676_2 "clamp.Texture2DArrayRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002676, VkglTestCase_002676_1, VkglTestCase_002676_2);

#define VkglTestCase_002677_1 "KHR-GLES31.core.texture_border_cl"
#define VkglTestCase_002677_2 "amp.Texture2DArrayCompressedLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002677, VkglTestCase_002677_1, VkglTestCase_002677_2);

#define VkglTestCase_002678_1 "KHR-GLES31.core.texture_borde"
#define VkglTestCase_002678_2 "r_clamp.Texture3DRGBA32FLinear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002678, VkglTestCase_002678_1, VkglTestCase_002678_2);

#define VkglTestCase_002679_1 "KHR-GLES31.core.texture_bord"
#define VkglTestCase_002679_2 "er_clamp.Texture3DRGBA8Linear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002679, VkglTestCase_002679_1, VkglTestCase_002679_2);
