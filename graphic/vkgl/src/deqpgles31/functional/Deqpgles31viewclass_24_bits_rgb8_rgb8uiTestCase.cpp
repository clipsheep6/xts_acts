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

#define VkglTestCase_031237_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031237_2 "iewclass_24_bits.rgb8_rgb8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031237, VkglTestCase_031237_1, VkglTestCase_031237_2);

#define VkglTestCase_031238_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031238_2 "iewclass_24_bits.rgb8_rgb8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031238, VkglTestCase_031238_1, VkglTestCase_031238_2);

#define VkglTestCase_031239_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031239_2 "viewclass_24_bits.rgb8_rgb8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031239, VkglTestCase_031239_1, VkglTestCase_031239_2);

#define VkglTestCase_031240_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031240_2 "class_24_bits.rgb8_rgb8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031240, VkglTestCase_031240_1, VkglTestCase_031240_2);

#define VkglTestCase_031241_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031241_2 "iewclass_24_bits.rgb8_rgb8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031241, VkglTestCase_031241_1, VkglTestCase_031241_2);

#define VkglTestCase_031242_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031242_2 "iewclass_24_bits.rgb8_rgb8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031242, VkglTestCase_031242_1, VkglTestCase_031242_2);

#define VkglTestCase_031243_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031243_2 "viewclass_24_bits.rgb8_rgb8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031243, VkglTestCase_031243_1, VkglTestCase_031243_2);

#define VkglTestCase_031244_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031244_2 "class_24_bits.rgb8_rgb8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031244, VkglTestCase_031244_1, VkglTestCase_031244_2);

#define VkglTestCase_031245_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031245_2 "viewclass_24_bits.rgb8_rgb8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031245, VkglTestCase_031245_1, VkglTestCase_031245_2);

#define VkglTestCase_031246_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031246_2 "viewclass_24_bits.rgb8_rgb8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031246, VkglTestCase_031246_1, VkglTestCase_031246_2);

#define VkglTestCase_031247_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031247_2 ".viewclass_24_bits.rgb8_rgb8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031247, VkglTestCase_031247_1, VkglTestCase_031247_2);

#define VkglTestCase_031248_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031248_2 "wclass_24_bits.rgb8_rgb8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031248, VkglTestCase_031248_1, VkglTestCase_031248_2);

#define VkglTestCase_031249_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031249_2 "class_24_bits.rgb8_rgb8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031249, VkglTestCase_031249_1, VkglTestCase_031249_2);

#define VkglTestCase_031250_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031250_2 "class_24_bits.rgb8_rgb8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031250, VkglTestCase_031250_1, VkglTestCase_031250_2);

#define VkglTestCase_031251_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031251_2 "wclass_24_bits.rgb8_rgb8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031251, VkglTestCase_031251_1, VkglTestCase_031251_2);

#define VkglTestCase_031252_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031252_2 "ss_24_bits.rgb8_rgb8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031252, VkglTestCase_031252_1, VkglTestCase_031252_2);

#define VkglTestCase_031253_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031253_2 "wclass_24_bits.rgb8_rgb8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031253, VkglTestCase_031253_1, VkglTestCase_031253_2);

#define VkglTestCase_031254_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031254_2 "wclass_24_bits.rgb8_rgb8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031254, VkglTestCase_031254_1, VkglTestCase_031254_2);

#define VkglTestCase_031255_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031255_2 "ewclass_24_bits.rgb8_rgb8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031255, VkglTestCase_031255_1, VkglTestCase_031255_2);

#define VkglTestCase_031256_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031256_2 "ass_24_bits.rgb8_rgb8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031256, VkglTestCase_031256_1, VkglTestCase_031256_2);
