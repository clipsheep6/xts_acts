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

#define VkglTestCase_031601_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031601_2 "class_24_bits.srgb8_rgb8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031601, VkglTestCase_031601_1, VkglTestCase_031601_2);

#define VkglTestCase_031602_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031602_2 "class_24_bits.srgb8_rgb8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031602, VkglTestCase_031602_1, VkglTestCase_031602_2);

#define VkglTestCase_031603_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031603_2 "wclass_24_bits.srgb8_rgb8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031603, VkglTestCase_031603_1, VkglTestCase_031603_2);

#define VkglTestCase_031604_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031604_2 "ss_24_bits.srgb8_rgb8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031604, VkglTestCase_031604_1, VkglTestCase_031604_2);

#define VkglTestCase_031605_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031605_2 "class_24_bits.srgb8_rgb8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031605, VkglTestCase_031605_1, VkglTestCase_031605_2);

#define VkglTestCase_031606_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031606_2 "class_24_bits.srgb8_rgb8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031606, VkglTestCase_031606_1, VkglTestCase_031606_2);

#define VkglTestCase_031607_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031607_2 "wclass_24_bits.srgb8_rgb8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031607, VkglTestCase_031607_1, VkglTestCase_031607_2);

#define VkglTestCase_031608_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031608_2 "ss_24_bits.srgb8_rgb8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031608, VkglTestCase_031608_1, VkglTestCase_031608_2);

#define VkglTestCase_031609_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031609_2 "wclass_24_bits.srgb8_rgb8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031609, VkglTestCase_031609_1, VkglTestCase_031609_2);

#define VkglTestCase_031610_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031610_2 "wclass_24_bits.srgb8_rgb8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031610, VkglTestCase_031610_1, VkglTestCase_031610_2);

#define VkglTestCase_031611_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031611_2 "ewclass_24_bits.srgb8_rgb8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031611, VkglTestCase_031611_1, VkglTestCase_031611_2);

#define VkglTestCase_031612_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031612_2 "ass_24_bits.srgb8_rgb8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031612, VkglTestCase_031612_1, VkglTestCase_031612_2);

#define VkglTestCase_031613_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031613_2 "ss_24_bits.srgb8_rgb8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031613, VkglTestCase_031613_1, VkglTestCase_031613_2);

#define VkglTestCase_031614_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031614_2 "ss_24_bits.srgb8_rgb8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031614, VkglTestCase_031614_1, VkglTestCase_031614_2);

#define VkglTestCase_031615_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031615_2 "ass_24_bits.srgb8_rgb8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031615, VkglTestCase_031615_1, VkglTestCase_031615_2);

#define VkglTestCase_031616_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031616_2 "24_bits.srgb8_rgb8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031616, VkglTestCase_031616_1, VkglTestCase_031616_2);
