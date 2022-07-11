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

#define VkglTestCase_029915_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029915_2 "ss_32_bits.rgb10_a2ui_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029915, VkglTestCase_029915_1, VkglTestCase_029915_2);

#define VkglTestCase_029916_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029916_2 "ss_32_bits.rgb10_a2ui_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029916, VkglTestCase_029916_1, VkglTestCase_029916_2);

#define VkglTestCase_029917_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029917_2 "ass_32_bits.rgb10_a2ui_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029917, VkglTestCase_029917_1, VkglTestCase_029917_2);

#define VkglTestCase_029918_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029918_2 "32_bits.rgb10_a2ui_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029918, VkglTestCase_029918_1, VkglTestCase_029918_2);

#define VkglTestCase_029919_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029919_2 "ss_32_bits.rgb10_a2ui_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029919, VkglTestCase_029919_1, VkglTestCase_029919_2);

#define VkglTestCase_029920_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029920_2 "ss_32_bits.rgb10_a2ui_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029920, VkglTestCase_029920_1, VkglTestCase_029920_2);

#define VkglTestCase_029921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029921_2 "ass_32_bits.rgb10_a2ui_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029921, VkglTestCase_029921_1, VkglTestCase_029921_2);

#define VkglTestCase_029922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029922_2 "32_bits.rgb10_a2ui_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029922, VkglTestCase_029922_1, VkglTestCase_029922_2);

#define VkglTestCase_029923_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029923_2 "ass_32_bits.rgb10_a2ui_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029923, VkglTestCase_029923_1, VkglTestCase_029923_2);

#define VkglTestCase_029924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029924_2 "ass_32_bits.rgb10_a2ui_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029924, VkglTestCase_029924_1, VkglTestCase_029924_2);

#define VkglTestCase_029925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029925_2 "lass_32_bits.rgb10_a2ui_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029925, VkglTestCase_029925_1, VkglTestCase_029925_2);

#define VkglTestCase_029926_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029926_2 "_32_bits.rgb10_a2ui_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029926, VkglTestCase_029926_1, VkglTestCase_029926_2);

#define VkglTestCase_029927_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029927_2 "32_bits.rgb10_a2ui_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029927, VkglTestCase_029927_1, VkglTestCase_029927_2);

#define VkglTestCase_029928_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029928_2 "32_bits.rgb10_a2ui_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029928, VkglTestCase_029928_1, VkglTestCase_029928_2);

#define VkglTestCase_029929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029929_2 "_32_bits.rgb10_a2ui_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029929, VkglTestCase_029929_1, VkglTestCase_029929_2);

#define VkglTestCase_029930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029930_2 "bits.rgb10_a2ui_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029930, VkglTestCase_029930_1, VkglTestCase_029930_2);

#define VkglTestCase_029931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029931_2 "s_32_bits.rgb10_a2ui_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029931, VkglTestCase_029931_1, VkglTestCase_029931_2);

#define VkglTestCase_029932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029932_2 "s_32_bits.rgb10_a2ui_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029932, VkglTestCase_029932_1, VkglTestCase_029932_2);

#define VkglTestCase_029933_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029933_2 "ss_32_bits.rgb10_a2ui_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029933, VkglTestCase_029933_1, VkglTestCase_029933_2);

#define VkglTestCase_029934_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029934_2 "2_bits.rgb10_a2ui_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029934, VkglTestCase_029934_1, VkglTestCase_029934_2);
