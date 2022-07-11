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

#define VkglTestCase_036259_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036259_2 "8_bits_mixed.rgba32i_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036259, VkglTestCase_036259_1, VkglTestCase_036259_2);

#define VkglTestCase_036260_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036260_2 "28_bits_mixed.rgba32i_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036260, VkglTestCase_036260_1, VkglTestCase_036260_2);

#define VkglTestCase_036261_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036261_2 "8_bits_mixed.rgba32i_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036261, VkglTestCase_036261_1, VkglTestCase_036261_2);

#define VkglTestCase_036262_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036262_2 "28_bits_mixed.rgba32i_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036262, VkglTestCase_036262_1, VkglTestCase_036262_2);

#define VkglTestCase_036263_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036263_2 "28_bits_mixed.rgba32i_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036263, VkglTestCase_036263_1, VkglTestCase_036263_2);

#define VkglTestCase_036264_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_036264_2 "128_bits_mixed.rgba32i_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036264, VkglTestCase_036264_1, VkglTestCase_036264_2);

#define VkglTestCase_036265_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036265_2 "its_mixed.rgba32i_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036265, VkglTestCase_036265_1, VkglTestCase_036265_2);

#define VkglTestCase_036266_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036266_2 "bits_mixed.rgba32i_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036266, VkglTestCase_036266_1, VkglTestCase_036266_2);

#define VkglTestCase_036267_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_036267_2 "_bits_mixed.rgba32i_rg11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036267, VkglTestCase_036267_1, VkglTestCase_036267_2);

#define VkglTestCase_036268_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036268_2 "8_bits_mixed.rgba32i_rg11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036268, VkglTestCase_036268_1, VkglTestCase_036268_2);
