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

#define VkglTestCase_036269_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036269_2 "8_bits_mixed.rg11_eac_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036269, VkglTestCase_036269_1, VkglTestCase_036269_2);

#define VkglTestCase_036270_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036270_2 "8_bits_mixed.rg11_eac_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036270, VkglTestCase_036270_1, VkglTestCase_036270_2);

#define VkglTestCase_036271_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036271_2 "28_bits_mixed.rg11_eac_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036271, VkglTestCase_036271_1, VkglTestCase_036271_2);

#define VkglTestCase_036272_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036272_2 "its_mixed.rg11_eac_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036272, VkglTestCase_036272_1, VkglTestCase_036272_2);

#define VkglTestCase_036273_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_036273_2 "_bits_mixed.rg11_eac_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036273, VkglTestCase_036273_1, VkglTestCase_036273_2);

#define VkglTestCase_036274_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036274_2 "28_bits_mixed.rg11_eac_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036274, VkglTestCase_036274_1, VkglTestCase_036274_2);

#define VkglTestCase_036275_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_036275_2 "28_bits_mixed.rg11_eac_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036275, VkglTestCase_036275_1, VkglTestCase_036275_2);

#define VkglTestCase_036276_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_036276_2 "128_bits_mixed.rg11_eac_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036276, VkglTestCase_036276_1, VkglTestCase_036276_2);

#define VkglTestCase_036277_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036277_2 "bits_mixed.rg11_eac_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036277, VkglTestCase_036277_1, VkglTestCase_036277_2);

#define VkglTestCase_036278_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_036278_2 "8_bits_mixed.rg11_eac_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036278, VkglTestCase_036278_1, VkglTestCase_036278_2);
