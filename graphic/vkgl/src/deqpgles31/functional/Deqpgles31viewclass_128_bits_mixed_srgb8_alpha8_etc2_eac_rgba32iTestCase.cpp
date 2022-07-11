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

#define VkglTestCase_036249_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036249_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036249, VkglTestCase_036249_1, VkglTestCase_036249_2);

#define VkglTestCase_036250_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036250_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036250, VkglTestCase_036250_1, VkglTestCase_036250_2);

#define VkglTestCase_036251_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036251_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036251, VkglTestCase_036251_1, VkglTestCase_036251_2);

#define VkglTestCase_036252_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036252_2 "xed.srgb8_alpha8_etc2_eac_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036252, VkglTestCase_036252_1, VkglTestCase_036252_2);

#define VkglTestCase_036253_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036253_2 "ixed.srgb8_alpha8_etc2_eac_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036253, VkglTestCase_036253_1, VkglTestCase_036253_2);

#define VkglTestCase_036254_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036254_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036254, VkglTestCase_036254_1, VkglTestCase_036254_2);

#define VkglTestCase_036255_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036255_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036255, VkglTestCase_036255_1, VkglTestCase_036255_2);

#define VkglTestCase_036256_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036256_2 "ts_mixed.srgb8_alpha8_etc2_eac_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036256, VkglTestCase_036256_1, VkglTestCase_036256_2);

#define VkglTestCase_036257_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036257_2 "ixed.srgb8_alpha8_etc2_eac_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036257, VkglTestCase_036257_1, VkglTestCase_036257_2);

#define VkglTestCase_036258_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036258_2 "mixed.srgb8_alpha8_etc2_eac_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036258, VkglTestCase_036258_1, VkglTestCase_036258_2);
