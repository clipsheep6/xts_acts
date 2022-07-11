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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029700_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029700_2 "class_32_bits.rgb10_a2ui_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029700, VkglTestCase_029700_1, VkglTestCase_029700_2);

#define VkglTestCase_029701_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029701_2 "class_32_bits.rgb10_a2ui_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029701, VkglTestCase_029701_1, VkglTestCase_029701_2);

#define VkglTestCase_029702_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029702_2 "wclass_32_bits.rgb10_a2ui_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029702, VkglTestCase_029702_1, VkglTestCase_029702_2);

#define VkglTestCase_029703_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029703_2 "ss_32_bits.rgb10_a2ui_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029703, VkglTestCase_029703_1, VkglTestCase_029703_2);

#define VkglTestCase_029704_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029704_2 "class_32_bits.rgb10_a2ui_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029704, VkglTestCase_029704_1, VkglTestCase_029704_2);

#define VkglTestCase_029705_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029705_2 "class_32_bits.rgb10_a2ui_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029705, VkglTestCase_029705_1, VkglTestCase_029705_2);

#define VkglTestCase_029706_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029706_2 "wclass_32_bits.rgb10_a2ui_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029706, VkglTestCase_029706_1, VkglTestCase_029706_2);

#define VkglTestCase_029707_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029707_2 "ss_32_bits.rgb10_a2ui_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029707, VkglTestCase_029707_1, VkglTestCase_029707_2);

#define VkglTestCase_029708_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029708_2 "wclass_32_bits.rgb10_a2ui_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029708, VkglTestCase_029708_1, VkglTestCase_029708_2);

#define VkglTestCase_029709_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029709_2 "wclass_32_bits.rgb10_a2ui_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029709, VkglTestCase_029709_1, VkglTestCase_029709_2);

#define VkglTestCase_029710_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029710_2 "ewclass_32_bits.rgb10_a2ui_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029710, VkglTestCase_029710_1, VkglTestCase_029710_2);

#define VkglTestCase_029711_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029711_2 "ass_32_bits.rgb10_a2ui_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029711, VkglTestCase_029711_1, VkglTestCase_029711_2);

#define VkglTestCase_029712_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029712_2 "ss_32_bits.rgb10_a2ui_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029712, VkglTestCase_029712_1, VkglTestCase_029712_2);

#define VkglTestCase_029713_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029713_2 "ss_32_bits.rgb10_a2ui_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029713, VkglTestCase_029713_1, VkglTestCase_029713_2);

#define VkglTestCase_029714_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029714_2 "ass_32_bits.rgb10_a2ui_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029714, VkglTestCase_029714_1, VkglTestCase_029714_2);

#define VkglTestCase_029715_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029715_2 "32_bits.rgb10_a2ui_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029715, VkglTestCase_029715_1, VkglTestCase_029715_2);

#define VkglTestCase_029716_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029716_2 "lass_32_bits.rgb10_a2ui_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029716, VkglTestCase_029716_1, VkglTestCase_029716_2);

#define VkglTestCase_029717_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029717_2 "lass_32_bits.rgb10_a2ui_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029717, VkglTestCase_029717_1, VkglTestCase_029717_2);

#define VkglTestCase_029718_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029718_2 "class_32_bits.rgb10_a2ui_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029718, VkglTestCase_029718_1, VkglTestCase_029718_2);

#define VkglTestCase_029719_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029719_2 "s_32_bits.rgb10_a2ui_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029719, VkglTestCase_029719_1, VkglTestCase_029719_2);
