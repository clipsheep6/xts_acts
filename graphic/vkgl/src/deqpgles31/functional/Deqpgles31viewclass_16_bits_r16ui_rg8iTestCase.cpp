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

#define VkglTestCase_032025_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032025_2 "iewclass_16_bits.r16ui_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032025, VkglTestCase_032025_1, VkglTestCase_032025_2);

#define VkglTestCase_032026_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032026_2 "iewclass_16_bits.r16ui_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032026, VkglTestCase_032026_1, VkglTestCase_032026_2);

#define VkglTestCase_032027_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032027_2 "viewclass_16_bits.r16ui_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032027, VkglTestCase_032027_1, VkglTestCase_032027_2);

#define VkglTestCase_032028_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032028_2 "class_16_bits.r16ui_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032028, VkglTestCase_032028_1, VkglTestCase_032028_2);

#define VkglTestCase_032029_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032029_2 "ewclass_16_bits.r16ui_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032029, VkglTestCase_032029_1, VkglTestCase_032029_2);

#define VkglTestCase_032030_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032030_2 "iewclass_16_bits.r16ui_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032030, VkglTestCase_032030_1, VkglTestCase_032030_2);

#define VkglTestCase_032031_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032031_2 "iewclass_16_bits.r16ui_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032031, VkglTestCase_032031_1, VkglTestCase_032031_2);

#define VkglTestCase_032032_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032032_2 "viewclass_16_bits.r16ui_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032032, VkglTestCase_032032_1, VkglTestCase_032032_2);

#define VkglTestCase_032033_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032033_2 "class_16_bits.r16ui_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032033, VkglTestCase_032033_1, VkglTestCase_032033_2);

#define VkglTestCase_032034_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032034_2 "ewclass_16_bits.r16ui_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032034, VkglTestCase_032034_1, VkglTestCase_032034_2);

#define VkglTestCase_032035_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032035_2 "viewclass_16_bits.r16ui_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032035, VkglTestCase_032035_1, VkglTestCase_032035_2);

#define VkglTestCase_032036_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032036_2 "viewclass_16_bits.r16ui_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032036, VkglTestCase_032036_1, VkglTestCase_032036_2);

#define VkglTestCase_032037_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032037_2 ".viewclass_16_bits.r16ui_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032037, VkglTestCase_032037_1, VkglTestCase_032037_2);

#define VkglTestCase_032038_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032038_2 "wclass_16_bits.r16ui_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032038, VkglTestCase_032038_1, VkglTestCase_032038_2);

#define VkglTestCase_032039_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032039_2 "iewclass_16_bits.r16ui_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032039, VkglTestCase_032039_1, VkglTestCase_032039_2);

#define VkglTestCase_032040_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032040_2 "class_16_bits.r16ui_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032040, VkglTestCase_032040_1, VkglTestCase_032040_2);

#define VkglTestCase_032041_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032041_2 "class_16_bits.r16ui_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032041, VkglTestCase_032041_1, VkglTestCase_032041_2);

#define VkglTestCase_032042_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032042_2 "wclass_16_bits.r16ui_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032042, VkglTestCase_032042_1, VkglTestCase_032042_2);

#define VkglTestCase_032043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032043_2 "ss_16_bits.r16ui_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032043, VkglTestCase_032043_1, VkglTestCase_032043_2);

#define VkglTestCase_032044_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032044_2 "lass_16_bits.r16ui_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032044, VkglTestCase_032044_1, VkglTestCase_032044_2);

#define VkglTestCase_032045_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032045_2 "ewclass_16_bits.r16ui_rg8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032045, VkglTestCase_032045_1, VkglTestCase_032045_2);

#define VkglTestCase_032046_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032046_2 "ewclass_16_bits.r16ui_rg8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032046, VkglTestCase_032046_1, VkglTestCase_032046_2);

#define VkglTestCase_032047_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032047_2 "iewclass_16_bits.r16ui_rg8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032047, VkglTestCase_032047_1, VkglTestCase_032047_2);

#define VkglTestCase_032048_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032048_2 "lass_16_bits.r16ui_rg8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032048, VkglTestCase_032048_1, VkglTestCase_032048_2);

#define VkglTestCase_032049_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032049_2 "class_16_bits.r16ui_rg8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032049, VkglTestCase_032049_1, VkglTestCase_032049_2);
