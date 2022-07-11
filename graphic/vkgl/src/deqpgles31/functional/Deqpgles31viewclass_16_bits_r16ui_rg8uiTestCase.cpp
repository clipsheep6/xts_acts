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

#define VkglTestCase_032050_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032050_2 "iewclass_16_bits.r16ui_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032050, VkglTestCase_032050_1, VkglTestCase_032050_2);

#define VkglTestCase_032051_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032051_2 "iewclass_16_bits.r16ui_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032051, VkglTestCase_032051_1, VkglTestCase_032051_2);

#define VkglTestCase_032052_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032052_2 "viewclass_16_bits.r16ui_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032052, VkglTestCase_032052_1, VkglTestCase_032052_2);

#define VkglTestCase_032053_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032053_2 "class_16_bits.r16ui_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032053, VkglTestCase_032053_1, VkglTestCase_032053_2);

#define VkglTestCase_032054_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032054_2 "wclass_16_bits.r16ui_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032054, VkglTestCase_032054_1, VkglTestCase_032054_2);

#define VkglTestCase_032055_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032055_2 "iewclass_16_bits.r16ui_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032055, VkglTestCase_032055_1, VkglTestCase_032055_2);

#define VkglTestCase_032056_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032056_2 "iewclass_16_bits.r16ui_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032056, VkglTestCase_032056_1, VkglTestCase_032056_2);

#define VkglTestCase_032057_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032057_2 "viewclass_16_bits.r16ui_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032057, VkglTestCase_032057_1, VkglTestCase_032057_2);

#define VkglTestCase_032058_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032058_2 "class_16_bits.r16ui_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032058, VkglTestCase_032058_1, VkglTestCase_032058_2);

#define VkglTestCase_032059_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032059_2 "wclass_16_bits.r16ui_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032059, VkglTestCase_032059_1, VkglTestCase_032059_2);

#define VkglTestCase_032060_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032060_2 "viewclass_16_bits.r16ui_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032060, VkglTestCase_032060_1, VkglTestCase_032060_2);

#define VkglTestCase_032061_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032061_2 "viewclass_16_bits.r16ui_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032061, VkglTestCase_032061_1, VkglTestCase_032061_2);

#define VkglTestCase_032062_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032062_2 ".viewclass_16_bits.r16ui_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032062, VkglTestCase_032062_1, VkglTestCase_032062_2);

#define VkglTestCase_032063_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032063_2 "wclass_16_bits.r16ui_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032063, VkglTestCase_032063_1, VkglTestCase_032063_2);

#define VkglTestCase_032064_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032064_2 "ewclass_16_bits.r16ui_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032064, VkglTestCase_032064_1, VkglTestCase_032064_2);

#define VkglTestCase_032065_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032065_2 "class_16_bits.r16ui_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032065, VkglTestCase_032065_1, VkglTestCase_032065_2);

#define VkglTestCase_032066_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032066_2 "class_16_bits.r16ui_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032066, VkglTestCase_032066_1, VkglTestCase_032066_2);

#define VkglTestCase_032067_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032067_2 "wclass_16_bits.r16ui_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032067, VkglTestCase_032067_1, VkglTestCase_032067_2);

#define VkglTestCase_032068_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032068_2 "ss_16_bits.r16ui_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032068, VkglTestCase_032068_1, VkglTestCase_032068_2);

#define VkglTestCase_032069_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032069_2 "ass_16_bits.r16ui_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032069, VkglTestCase_032069_1, VkglTestCase_032069_2);

#define VkglTestCase_032070_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032070_2 "wclass_16_bits.r16ui_rg8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032070, VkglTestCase_032070_1, VkglTestCase_032070_2);

#define VkglTestCase_032071_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032071_2 "wclass_16_bits.r16ui_rg8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032071, VkglTestCase_032071_1, VkglTestCase_032071_2);

#define VkglTestCase_032072_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032072_2 "ewclass_16_bits.r16ui_rg8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032072, VkglTestCase_032072_1, VkglTestCase_032072_2);

#define VkglTestCase_032073_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032073_2 "ass_16_bits.r16ui_rg8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032073, VkglTestCase_032073_1, VkglTestCase_032073_2);

#define VkglTestCase_032074_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032074_2 "class_16_bits.r16ui_rg8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032074, VkglTestCase_032074_1, VkglTestCase_032074_2);
