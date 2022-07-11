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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028888_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028888_2 "wclass_32_bits.rgba8i_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028888, VkglTestCase_028888_1, VkglTestCase_028888_2);

#define VkglTestCase_028889_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028889_2 "wclass_32_bits.rgba8i_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028889, VkglTestCase_028889_1, VkglTestCase_028889_2);

#define VkglTestCase_028890_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028890_2 "ewclass_32_bits.rgba8i_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028890, VkglTestCase_028890_1, VkglTestCase_028890_2);

#define VkglTestCase_028891_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028891_2 "ass_32_bits.rgba8i_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028891, VkglTestCase_028891_1, VkglTestCase_028891_2);

#define VkglTestCase_028892_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028892_2 "class_32_bits.rgba8i_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028892, VkglTestCase_028892_1, VkglTestCase_028892_2);

#define VkglTestCase_028893_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028893_2 "wclass_32_bits.rgba8i_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028893, VkglTestCase_028893_1, VkglTestCase_028893_2);

#define VkglTestCase_028894_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028894_2 "wclass_32_bits.rgba8i_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028894, VkglTestCase_028894_1, VkglTestCase_028894_2);

#define VkglTestCase_028895_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028895_2 "ewclass_32_bits.rgba8i_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028895, VkglTestCase_028895_1, VkglTestCase_028895_2);

#define VkglTestCase_028896_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028896_2 "ass_32_bits.rgba8i_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028896, VkglTestCase_028896_1, VkglTestCase_028896_2);

#define VkglTestCase_028897_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028897_2 "class_32_bits.rgba8i_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028897, VkglTestCase_028897_1, VkglTestCase_028897_2);

#define VkglTestCase_028898_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028898_2 "ewclass_32_bits.rgba8i_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028898, VkglTestCase_028898_1, VkglTestCase_028898_2);

#define VkglTestCase_028899_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028899_2 "ewclass_32_bits.rgba8i_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028899, VkglTestCase_028899_1, VkglTestCase_028899_2);

#define VkglTestCase_028900_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028900_2 "iewclass_32_bits.rgba8i_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028900, VkglTestCase_028900_1, VkglTestCase_028900_2);

#define VkglTestCase_028901_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028901_2 "lass_32_bits.rgba8i_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028901, VkglTestCase_028901_1, VkglTestCase_028901_2);

#define VkglTestCase_028902_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028902_2 "wclass_32_bits.rgba8i_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028902, VkglTestCase_028902_1, VkglTestCase_028902_2);

#define VkglTestCase_028903_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028903_2 "ass_32_bits.rgba8i_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028903, VkglTestCase_028903_1, VkglTestCase_028903_2);

#define VkglTestCase_028904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028904_2 "ass_32_bits.rgba8i_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028904, VkglTestCase_028904_1, VkglTestCase_028904_2);

#define VkglTestCase_028905_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028905_2 "lass_32_bits.rgba8i_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028905, VkglTestCase_028905_1, VkglTestCase_028905_2);

#define VkglTestCase_028906_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028906_2 "_32_bits.rgba8i_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028906, VkglTestCase_028906_1, VkglTestCase_028906_2);

#define VkglTestCase_028907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028907_2 "ss_32_bits.rgba8i_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028907, VkglTestCase_028907_1, VkglTestCase_028907_2);

#define VkglTestCase_028908_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028908_2 "class_32_bits.rgba8i_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028908, VkglTestCase_028908_1, VkglTestCase_028908_2);

#define VkglTestCase_028909_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028909_2 "class_32_bits.rgba8i_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028909, VkglTestCase_028909_1, VkglTestCase_028909_2);

#define VkglTestCase_028910_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028910_2 "wclass_32_bits.rgba8i_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028910, VkglTestCase_028910_1, VkglTestCase_028910_2);

#define VkglTestCase_028911_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028911_2 "ss_32_bits.rgba8i_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028911, VkglTestCase_028911_1, VkglTestCase_028911_2);

#define VkglTestCase_028912_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028912_2 "ass_32_bits.rgba8i_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028912, VkglTestCase_028912_1, VkglTestCase_028912_2);
