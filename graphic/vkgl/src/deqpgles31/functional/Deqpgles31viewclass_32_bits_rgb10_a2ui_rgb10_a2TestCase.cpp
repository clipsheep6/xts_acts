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

#define VkglTestCase_029890_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029890_2 "lass_32_bits.rgb10_a2ui_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029890, VkglTestCase_029890_1, VkglTestCase_029890_2);

#define VkglTestCase_029891_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029891_2 "lass_32_bits.rgb10_a2ui_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029891, VkglTestCase_029891_1, VkglTestCase_029891_2);

#define VkglTestCase_029892_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029892_2 "class_32_bits.rgb10_a2ui_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029892, VkglTestCase_029892_1, VkglTestCase_029892_2);

#define VkglTestCase_029893_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029893_2 "s_32_bits.rgb10_a2ui_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029893, VkglTestCase_029893_1, VkglTestCase_029893_2);

#define VkglTestCase_029894_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029894_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029894, VkglTestCase_029894_1, VkglTestCase_029894_2);

#define VkglTestCase_029895_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029895_2 "lass_32_bits.rgb10_a2ui_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029895, VkglTestCase_029895_1, VkglTestCase_029895_2);

#define VkglTestCase_029896_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029896_2 "lass_32_bits.rgb10_a2ui_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029896, VkglTestCase_029896_1, VkglTestCase_029896_2);

#define VkglTestCase_029897_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029897_2 "class_32_bits.rgb10_a2ui_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029897, VkglTestCase_029897_1, VkglTestCase_029897_2);

#define VkglTestCase_029898_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029898_2 "s_32_bits.rgb10_a2ui_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029898, VkglTestCase_029898_1, VkglTestCase_029898_2);

#define VkglTestCase_029899_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029899_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029899, VkglTestCase_029899_1, VkglTestCase_029899_2);

#define VkglTestCase_029900_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029900_2 "class_32_bits.rgb10_a2ui_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029900, VkglTestCase_029900_1, VkglTestCase_029900_2);

#define VkglTestCase_029901_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029901_2 "class_32_bits.rgb10_a2ui_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029901, VkglTestCase_029901_1, VkglTestCase_029901_2);

#define VkglTestCase_029902_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029902_2 "wclass_32_bits.rgb10_a2ui_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029902, VkglTestCase_029902_1, VkglTestCase_029902_2);

#define VkglTestCase_029903_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029903_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029903, VkglTestCase_029903_1, VkglTestCase_029903_2);

#define VkglTestCase_029904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029904_2 "ass_32_bits.rgb10_a2ui_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029904, VkglTestCase_029904_1, VkglTestCase_029904_2);

#define VkglTestCase_029905_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029905_2 "s_32_bits.rgb10_a2ui_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029905, VkglTestCase_029905_1, VkglTestCase_029905_2);

#define VkglTestCase_029906_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029906_2 "s_32_bits.rgb10_a2ui_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029906, VkglTestCase_029906_1, VkglTestCase_029906_2);

#define VkglTestCase_029907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029907_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029907, VkglTestCase_029907_1, VkglTestCase_029907_2);

#define VkglTestCase_029908_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029908_2 "2_bits.rgb10_a2ui_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029908, VkglTestCase_029908_1, VkglTestCase_029908_2);

#define VkglTestCase_029909_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029909_2 "32_bits.rgb10_a2ui_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029909, VkglTestCase_029909_1, VkglTestCase_029909_2);

#define VkglTestCase_029910_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029910_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029910, VkglTestCase_029910_1, VkglTestCase_029910_2);

#define VkglTestCase_029911_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029911_2 "ss_32_bits.rgb10_a2ui_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029911, VkglTestCase_029911_1, VkglTestCase_029911_2);

#define VkglTestCase_029912_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029912_2 "ass_32_bits.rgb10_a2ui_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029912, VkglTestCase_029912_1, VkglTestCase_029912_2);

#define VkglTestCase_029913_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029913_2 "32_bits.rgb10_a2ui_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029913, VkglTestCase_029913_1, VkglTestCase_029913_2);

#define VkglTestCase_029914_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029914_2 "s_32_bits.rgb10_a2ui_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029914, VkglTestCase_029914_1, VkglTestCase_029914_2);
