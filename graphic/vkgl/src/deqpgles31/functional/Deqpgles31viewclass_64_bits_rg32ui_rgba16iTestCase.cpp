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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025914_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025914_2 "wclass_64_bits.rg32ui_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025914, VkglTestCase_025914_1, VkglTestCase_025914_2);

#define VkglTestCase_025915_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025915_2 "wclass_64_bits.rg32ui_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025915, VkglTestCase_025915_1, VkglTestCase_025915_2);

#define VkglTestCase_025916_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025916_2 "ewclass_64_bits.rg32ui_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025916, VkglTestCase_025916_1, VkglTestCase_025916_2);

#define VkglTestCase_025917_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025917_2 "ass_64_bits.rg32ui_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025917, VkglTestCase_025917_1, VkglTestCase_025917_2);

#define VkglTestCase_025918_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025918_2 "class_64_bits.rg32ui_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025918, VkglTestCase_025918_1, VkglTestCase_025918_2);

#define VkglTestCase_025919_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025919_2 "wclass_64_bits.rg32ui_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025919, VkglTestCase_025919_1, VkglTestCase_025919_2);

#define VkglTestCase_025920_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025920_2 "wclass_64_bits.rg32ui_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025920, VkglTestCase_025920_1, VkglTestCase_025920_2);

#define VkglTestCase_025921_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025921_2 "ewclass_64_bits.rg32ui_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025921, VkglTestCase_025921_1, VkglTestCase_025921_2);

#define VkglTestCase_025922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025922_2 "ass_64_bits.rg32ui_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025922, VkglTestCase_025922_1, VkglTestCase_025922_2);

#define VkglTestCase_025923_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025923_2 "class_64_bits.rg32ui_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025923, VkglTestCase_025923_1, VkglTestCase_025923_2);

#define VkglTestCase_025924_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025924_2 "ewclass_64_bits.rg32ui_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025924, VkglTestCase_025924_1, VkglTestCase_025924_2);

#define VkglTestCase_025925_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025925_2 "ewclass_64_bits.rg32ui_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025925, VkglTestCase_025925_1, VkglTestCase_025925_2);

#define VkglTestCase_025926_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025926_2 "iewclass_64_bits.rg32ui_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025926, VkglTestCase_025926_1, VkglTestCase_025926_2);

#define VkglTestCase_025927_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025927_2 "lass_64_bits.rg32ui_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025927, VkglTestCase_025927_1, VkglTestCase_025927_2);

#define VkglTestCase_025928_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025928_2 "wclass_64_bits.rg32ui_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025928, VkglTestCase_025928_1, VkglTestCase_025928_2);

#define VkglTestCase_025929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025929_2 "ass_64_bits.rg32ui_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025929, VkglTestCase_025929_1, VkglTestCase_025929_2);

#define VkglTestCase_025930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025930_2 "ass_64_bits.rg32ui_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025930, VkglTestCase_025930_1, VkglTestCase_025930_2);

#define VkglTestCase_025931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025931_2 "lass_64_bits.rg32ui_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025931, VkglTestCase_025931_1, VkglTestCase_025931_2);

#define VkglTestCase_025932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025932_2 "_64_bits.rg32ui_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025932, VkglTestCase_025932_1, VkglTestCase_025932_2);

#define VkglTestCase_025933_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025933_2 "ss_64_bits.rg32ui_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025933, VkglTestCase_025933_1, VkglTestCase_025933_2);

#define VkglTestCase_025934_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025934_2 "class_64_bits.rg32ui_rgba16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025934, VkglTestCase_025934_1, VkglTestCase_025934_2);

#define VkglTestCase_025935_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025935_2 "class_64_bits.rg32ui_rgba16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025935, VkglTestCase_025935_1, VkglTestCase_025935_2);

#define VkglTestCase_025936_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025936_2 "wclass_64_bits.rg32ui_rgba16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025936, VkglTestCase_025936_1, VkglTestCase_025936_2);

#define VkglTestCase_025937_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025937_2 "ss_64_bits.rg32ui_rgba16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025937, VkglTestCase_025937_1, VkglTestCase_025937_2);

#define VkglTestCase_025938_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025938_2 "ass_64_bits.rg32ui_rgba16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025938, VkglTestCase_025938_1, VkglTestCase_025938_2);
