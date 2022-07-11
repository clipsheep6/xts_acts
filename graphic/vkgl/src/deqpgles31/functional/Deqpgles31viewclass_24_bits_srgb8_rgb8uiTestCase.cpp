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

#define VkglTestCase_031585_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031585_2 "ewclass_24_bits.srgb8_rgb8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031585, VkglTestCase_031585_1, VkglTestCase_031585_2);

#define VkglTestCase_031586_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031586_2 "ewclass_24_bits.srgb8_rgb8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031586, VkglTestCase_031586_1, VkglTestCase_031586_2);

#define VkglTestCase_031587_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031587_2 "iewclass_24_bits.srgb8_rgb8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031587, VkglTestCase_031587_1, VkglTestCase_031587_2);

#define VkglTestCase_031588_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031588_2 "lass_24_bits.srgb8_rgb8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031588, VkglTestCase_031588_1, VkglTestCase_031588_2);

#define VkglTestCase_031589_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031589_2 "ewclass_24_bits.srgb8_rgb8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031589, VkglTestCase_031589_1, VkglTestCase_031589_2);

#define VkglTestCase_031590_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031590_2 "ewclass_24_bits.srgb8_rgb8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031590, VkglTestCase_031590_1, VkglTestCase_031590_2);

#define VkglTestCase_031591_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031591_2 "iewclass_24_bits.srgb8_rgb8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031591, VkglTestCase_031591_1, VkglTestCase_031591_2);

#define VkglTestCase_031592_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031592_2 "lass_24_bits.srgb8_rgb8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031592, VkglTestCase_031592_1, VkglTestCase_031592_2);

#define VkglTestCase_031593_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031593_2 "iewclass_24_bits.srgb8_rgb8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031593, VkglTestCase_031593_1, VkglTestCase_031593_2);

#define VkglTestCase_031594_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031594_2 "iewclass_24_bits.srgb8_rgb8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031594, VkglTestCase_031594_1, VkglTestCase_031594_2);

#define VkglTestCase_031595_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031595_2 "viewclass_24_bits.srgb8_rgb8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031595, VkglTestCase_031595_1, VkglTestCase_031595_2);

#define VkglTestCase_031596_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031596_2 "class_24_bits.srgb8_rgb8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031596, VkglTestCase_031596_1, VkglTestCase_031596_2);

#define VkglTestCase_031597_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031597_2 "lass_24_bits.srgb8_rgb8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031597, VkglTestCase_031597_1, VkglTestCase_031597_2);

#define VkglTestCase_031598_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031598_2 "lass_24_bits.srgb8_rgb8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031598, VkglTestCase_031598_1, VkglTestCase_031598_2);

#define VkglTestCase_031599_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031599_2 "class_24_bits.srgb8_rgb8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031599, VkglTestCase_031599_1, VkglTestCase_031599_2);

#define VkglTestCase_031600_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031600_2 "s_24_bits.srgb8_rgb8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031600, VkglTestCase_031600_1, VkglTestCase_031600_2);
