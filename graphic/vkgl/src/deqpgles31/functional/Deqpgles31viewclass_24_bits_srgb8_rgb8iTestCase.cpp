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

#define VkglTestCase_031569_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031569_2 "iewclass_24_bits.srgb8_rgb8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031569, VkglTestCase_031569_1, VkglTestCase_031569_2);

#define VkglTestCase_031570_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031570_2 "iewclass_24_bits.srgb8_rgb8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031570, VkglTestCase_031570_1, VkglTestCase_031570_2);

#define VkglTestCase_031571_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031571_2 "viewclass_24_bits.srgb8_rgb8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031571, VkglTestCase_031571_1, VkglTestCase_031571_2);

#define VkglTestCase_031572_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031572_2 "class_24_bits.srgb8_rgb8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031572, VkglTestCase_031572_1, VkglTestCase_031572_2);

#define VkglTestCase_031573_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031573_2 "iewclass_24_bits.srgb8_rgb8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031573, VkglTestCase_031573_1, VkglTestCase_031573_2);

#define VkglTestCase_031574_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031574_2 "iewclass_24_bits.srgb8_rgb8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031574, VkglTestCase_031574_1, VkglTestCase_031574_2);

#define VkglTestCase_031575_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031575_2 "viewclass_24_bits.srgb8_rgb8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031575, VkglTestCase_031575_1, VkglTestCase_031575_2);

#define VkglTestCase_031576_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031576_2 "class_24_bits.srgb8_rgb8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031576, VkglTestCase_031576_1, VkglTestCase_031576_2);

#define VkglTestCase_031577_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031577_2 "viewclass_24_bits.srgb8_rgb8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031577, VkglTestCase_031577_1, VkglTestCase_031577_2);

#define VkglTestCase_031578_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031578_2 "viewclass_24_bits.srgb8_rgb8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031578, VkglTestCase_031578_1, VkglTestCase_031578_2);

#define VkglTestCase_031579_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031579_2 ".viewclass_24_bits.srgb8_rgb8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031579, VkglTestCase_031579_1, VkglTestCase_031579_2);

#define VkglTestCase_031580_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031580_2 "wclass_24_bits.srgb8_rgb8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031580, VkglTestCase_031580_1, VkglTestCase_031580_2);

#define VkglTestCase_031581_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031581_2 "class_24_bits.srgb8_rgb8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031581, VkglTestCase_031581_1, VkglTestCase_031581_2);

#define VkglTestCase_031582_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031582_2 "class_24_bits.srgb8_rgb8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031582, VkglTestCase_031582_1, VkglTestCase_031582_2);

#define VkglTestCase_031583_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031583_2 "wclass_24_bits.srgb8_rgb8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031583, VkglTestCase_031583_1, VkglTestCase_031583_2);

#define VkglTestCase_031584_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031584_2 "ss_24_bits.srgb8_rgb8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031584, VkglTestCase_031584_1, VkglTestCase_031584_2);
