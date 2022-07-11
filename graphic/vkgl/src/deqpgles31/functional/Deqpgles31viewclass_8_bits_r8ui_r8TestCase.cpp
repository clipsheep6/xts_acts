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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032912_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032912_2 ".viewclass_8_bits.r8ui_r8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032912, VkglTestCase_032912_1, VkglTestCase_032912_2);

#define VkglTestCase_032913_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032913_2 ".viewclass_8_bits.r8ui_r8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032913, VkglTestCase_032913_1, VkglTestCase_032913_2);

#define VkglTestCase_032914_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032914_2 "d.viewclass_8_bits.r8ui_r8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032914, VkglTestCase_032914_1, VkglTestCase_032914_2);

#define VkglTestCase_032915_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032915_2 "ewclass_8_bits.r8ui_r8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032915, VkglTestCase_032915_1, VkglTestCase_032915_2);

#define VkglTestCase_032916_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032916_2 "viewclass_8_bits.r8ui_r8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032916, VkglTestCase_032916_1, VkglTestCase_032916_2);

#define VkglTestCase_032917_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032917_2 ".viewclass_8_bits.r8ui_r8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032917, VkglTestCase_032917_1, VkglTestCase_032917_2);

#define VkglTestCase_032918_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032918_2 ".viewclass_8_bits.r8ui_r8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032918, VkglTestCase_032918_1, VkglTestCase_032918_2);

#define VkglTestCase_032919_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032919_2 "d.viewclass_8_bits.r8ui_r8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032919, VkglTestCase_032919_1, VkglTestCase_032919_2);

#define VkglTestCase_032920_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032920_2 "ewclass_8_bits.r8ui_r8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032920, VkglTestCase_032920_1, VkglTestCase_032920_2);

#define VkglTestCase_032921_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032921_2 "viewclass_8_bits.r8ui_r8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032921, VkglTestCase_032921_1, VkglTestCase_032921_2);

#define VkglTestCase_032922_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032922_2 "d.viewclass_8_bits.r8ui_r8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032922, VkglTestCase_032922_1, VkglTestCase_032922_2);

#define VkglTestCase_032923_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032923_2 "d.viewclass_8_bits.r8ui_r8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032923, VkglTestCase_032923_1, VkglTestCase_032923_2);

#define VkglTestCase_032924_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032924_2 "ed.viewclass_8_bits.r8ui_r8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032924, VkglTestCase_032924_1, VkglTestCase_032924_2);

#define VkglTestCase_032925_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032925_2 "iewclass_8_bits.r8ui_r8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032925, VkglTestCase_032925_1, VkglTestCase_032925_2);

#define VkglTestCase_032926_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032926_2 ".viewclass_8_bits.r8ui_r8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032926, VkglTestCase_032926_1, VkglTestCase_032926_2);

#define VkglTestCase_032927_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032927_2 "ewclass_8_bits.r8ui_r8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032927, VkglTestCase_032927_1, VkglTestCase_032927_2);

#define VkglTestCase_032928_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032928_2 "ewclass_8_bits.r8ui_r8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032928, VkglTestCase_032928_1, VkglTestCase_032928_2);

#define VkglTestCase_032929_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032929_2 "iewclass_8_bits.r8ui_r8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032929, VkglTestCase_032929_1, VkglTestCase_032929_2);

#define VkglTestCase_032930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032930_2 "lass_8_bits.r8ui_r8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032930, VkglTestCase_032930_1, VkglTestCase_032930_2);

#define VkglTestCase_032931_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032931_2 "wclass_8_bits.r8ui_r8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032931, VkglTestCase_032931_1, VkglTestCase_032931_2);

#define VkglTestCase_032932_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032932_2 "viewclass_8_bits.r8ui_r8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032932, VkglTestCase_032932_1, VkglTestCase_032932_2);

#define VkglTestCase_032933_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032933_2 "viewclass_8_bits.r8ui_r8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032933, VkglTestCase_032933_1, VkglTestCase_032933_2);

#define VkglTestCase_032934_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032934_2 ".viewclass_8_bits.r8ui_r8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032934, VkglTestCase_032934_1, VkglTestCase_032934_2);

#define VkglTestCase_032935_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032935_2 "wclass_8_bits.r8ui_r8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032935, VkglTestCase_032935_1, VkglTestCase_032935_2);

#define VkglTestCase_032936_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032936_2 "ewclass_8_bits.r8ui_r8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032936, VkglTestCase_032936_1, VkglTestCase_032936_2);
