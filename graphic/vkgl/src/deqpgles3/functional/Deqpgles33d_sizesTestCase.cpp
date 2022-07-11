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

#define VkglTestCase_024609_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024609_2 "iltering.3d.sizes.4x8x8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024609, VkglTestCase_024609_1, VkglTestCase_024609_2);

#define VkglTestCase_024610_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_024610_2 "filtering.3d.sizes.4x8x8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024610, VkglTestCase_024610_1, VkglTestCase_024610_2);

#define VkglTestCase_024611_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024611_2 "g.3d.sizes.4x8x8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024611, VkglTestCase_024611_1, VkglTestCase_024611_2);

#define VkglTestCase_024612_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024612_2 "g.3d.sizes.4x8x8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024612, VkglTestCase_024612_1, VkglTestCase_024612_2);

#define VkglTestCase_024613_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024613_2 "g.3d.sizes.4x8x8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024613, VkglTestCase_024613_1, VkglTestCase_024613_2);

#define VkglTestCase_024614_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024614_2 "ng.3d.sizes.4x8x8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024614, VkglTestCase_024614_1, VkglTestCase_024614_2);

#define VkglTestCase_024615_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024615_2 "ltering.3d.sizes.32x64x16_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024615, VkglTestCase_024615_1, VkglTestCase_024615_2);

#define VkglTestCase_024616_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024616_2 "ltering.3d.sizes.32x64x16_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024616, VkglTestCase_024616_1, VkglTestCase_024616_2);

#define VkglTestCase_024617_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024617_2 "3d.sizes.32x64x16_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024617, VkglTestCase_024617_1, VkglTestCase_024617_2);

#define VkglTestCase_024618_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024618_2 ".3d.sizes.32x64x16_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024618, VkglTestCase_024618_1, VkglTestCase_024618_2);

#define VkglTestCase_024619_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024619_2 ".3d.sizes.32x64x16_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024619, VkglTestCase_024619_1, VkglTestCase_024619_2);

#define VkglTestCase_024620_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024620_2 ".3d.sizes.32x64x16_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024620, VkglTestCase_024620_1, VkglTestCase_024620_2);

#define VkglTestCase_024621_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024621_2 "tering.3d.sizes.128x32x64_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024621, VkglTestCase_024621_1, VkglTestCase_024621_2);

#define VkglTestCase_024622_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024622_2 "ltering.3d.sizes.128x32x64_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024622, VkglTestCase_024622_1, VkglTestCase_024622_2);

#define VkglTestCase_024623_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024623_2 "3d.sizes.128x32x64_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024623, VkglTestCase_024623_1, VkglTestCase_024623_2);

#define VkglTestCase_024624_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024624_2 "3d.sizes.128x32x64_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024624, VkglTestCase_024624_1, VkglTestCase_024624_2);

#define VkglTestCase_024625_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024625_2 "3d.sizes.128x32x64_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024625, VkglTestCase_024625_1, VkglTestCase_024625_2);

#define VkglTestCase_024626_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024626_2 ".3d.sizes.128x32x64_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024626, VkglTestCase_024626_1, VkglTestCase_024626_2);

#define VkglTestCase_024627_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024627_2 "iltering.3d.sizes.3x7x5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024627, VkglTestCase_024627_1, VkglTestCase_024627_2);

#define VkglTestCase_024628_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_024628_2 "filtering.3d.sizes.3x7x5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024628, VkglTestCase_024628_1, VkglTestCase_024628_2);

#define VkglTestCase_024629_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024629_2 "g.3d.sizes.3x7x5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024629, VkglTestCase_024629_1, VkglTestCase_024629_2);

#define VkglTestCase_024630_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024630_2 "g.3d.sizes.3x7x5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024630, VkglTestCase_024630_1, VkglTestCase_024630_2);

#define VkglTestCase_024631_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024631_2 "g.3d.sizes.3x7x5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024631, VkglTestCase_024631_1, VkglTestCase_024631_2);

#define VkglTestCase_024632_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024632_2 "ng.3d.sizes.3x7x5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024632, VkglTestCase_024632_1, VkglTestCase_024632_2);

#define VkglTestCase_024633_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024633_2 "ltering.3d.sizes.63x63x63_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024633, VkglTestCase_024633_1, VkglTestCase_024633_2);

#define VkglTestCase_024634_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024634_2 "ltering.3d.sizes.63x63x63_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024634, VkglTestCase_024634_1, VkglTestCase_024634_2);

#define VkglTestCase_024635_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024635_2 "3d.sizes.63x63x63_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024635, VkglTestCase_024635_1, VkglTestCase_024635_2);

#define VkglTestCase_024636_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024636_2 ".3d.sizes.63x63x63_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024636, VkglTestCase_024636_1, VkglTestCase_024636_2);

#define VkglTestCase_024637_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024637_2 ".3d.sizes.63x63x63_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024637, VkglTestCase_024637_1, VkglTestCase_024637_2);

#define VkglTestCase_024638_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024638_2 ".3d.sizes.63x63x63_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024638, VkglTestCase_024638_1, VkglTestCase_024638_2);
