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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036239_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036239_2 "_mixed.rgba32i_srgb8_alpha8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036239, VkglTestCase_036239_1, VkglTestCase_036239_2);

#define VkglTestCase_036240_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036240_2 "s_mixed.rgba32i_srgb8_alpha8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036240, VkglTestCase_036240_1, VkglTestCase_036240_2);

#define VkglTestCase_036241_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036241_2 "_mixed.rgba32i_srgb8_alpha8_etc2_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036241, VkglTestCase_036241_1, VkglTestCase_036241_2);

#define VkglTestCase_036242_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036242_2 "s_mixed.rgba32i_srgb8_alpha8_etc2_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036242, VkglTestCase_036242_1, VkglTestCase_036242_2);

#define VkglTestCase_036243_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036243_2 "s_mixed.rgba32i_srgb8_alpha8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036243, VkglTestCase_036243_1, VkglTestCase_036243_2);

#define VkglTestCase_036244_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036244_2 "ts_mixed.rgba32i_srgb8_alpha8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036244, VkglTestCase_036244_1, VkglTestCase_036244_2);

#define VkglTestCase_036245_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036245_2 "xed.rgba32i_srgb8_alpha8_etc2_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036245, VkglTestCase_036245_1, VkglTestCase_036245_2);

#define VkglTestCase_036246_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036246_2 "ixed.rgba32i_srgb8_alpha8_etc2_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036246, VkglTestCase_036246_1, VkglTestCase_036246_2);

#define VkglTestCase_036247_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036247_2 "ixed.rgba32i_srgb8_alpha8_etc2_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036247, VkglTestCase_036247_1, VkglTestCase_036247_2);

#define VkglTestCase_036248_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036248_2 "mixed.rgba32i_srgb8_alpha8_etc2_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036248, VkglTestCase_036248_1, VkglTestCase_036248_2);
