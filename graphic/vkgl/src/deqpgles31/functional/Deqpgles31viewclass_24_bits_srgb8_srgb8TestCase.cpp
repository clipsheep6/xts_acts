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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031617_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031617_2 "iewclass_24_bits.srgb8_srgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031617, VkglTestCase_031617_1, VkglTestCase_031617_2);

#define VkglTestCase_031618_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031618_2 "iewclass_24_bits.srgb8_srgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031618, VkglTestCase_031618_1, VkglTestCase_031618_2);

#define VkglTestCase_031619_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031619_2 "viewclass_24_bits.srgb8_srgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031619, VkglTestCase_031619_1, VkglTestCase_031619_2);

#define VkglTestCase_031620_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031620_2 "class_24_bits.srgb8_srgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031620, VkglTestCase_031620_1, VkglTestCase_031620_2);

#define VkglTestCase_031621_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031621_2 "iewclass_24_bits.srgb8_srgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031621, VkglTestCase_031621_1, VkglTestCase_031621_2);

#define VkglTestCase_031622_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031622_2 "iewclass_24_bits.srgb8_srgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031622, VkglTestCase_031622_1, VkglTestCase_031622_2);

#define VkglTestCase_031623_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031623_2 "viewclass_24_bits.srgb8_srgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031623, VkglTestCase_031623_1, VkglTestCase_031623_2);

#define VkglTestCase_031624_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031624_2 "class_24_bits.srgb8_srgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031624, VkglTestCase_031624_1, VkglTestCase_031624_2);

#define VkglTestCase_031625_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031625_2 "viewclass_24_bits.srgb8_srgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031625, VkglTestCase_031625_1, VkglTestCase_031625_2);

#define VkglTestCase_031626_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031626_2 "viewclass_24_bits.srgb8_srgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031626, VkglTestCase_031626_1, VkglTestCase_031626_2);

#define VkglTestCase_031627_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031627_2 ".viewclass_24_bits.srgb8_srgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031627, VkglTestCase_031627_1, VkglTestCase_031627_2);

#define VkglTestCase_031628_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031628_2 "wclass_24_bits.srgb8_srgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031628, VkglTestCase_031628_1, VkglTestCase_031628_2);

#define VkglTestCase_031629_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031629_2 "class_24_bits.srgb8_srgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031629, VkglTestCase_031629_1, VkglTestCase_031629_2);

#define VkglTestCase_031630_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031630_2 "class_24_bits.srgb8_srgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031630, VkglTestCase_031630_1, VkglTestCase_031630_2);

#define VkglTestCase_031631_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031631_2 "wclass_24_bits.srgb8_srgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031631, VkglTestCase_031631_1, VkglTestCase_031631_2);

#define VkglTestCase_031632_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031632_2 "ss_24_bits.srgb8_srgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031632, VkglTestCase_031632_1, VkglTestCase_031632_2);
