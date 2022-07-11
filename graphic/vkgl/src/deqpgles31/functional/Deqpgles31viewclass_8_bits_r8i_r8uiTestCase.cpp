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

#define VkglTestCase_032867_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032867_2 ".viewclass_8_bits.r8i_r8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032867, VkglTestCase_032867_1, VkglTestCase_032867_2);

#define VkglTestCase_032868_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032868_2 ".viewclass_8_bits.r8i_r8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032868, VkglTestCase_032868_1, VkglTestCase_032868_2);

#define VkglTestCase_032869_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032869_2 "d.viewclass_8_bits.r8i_r8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032869, VkglTestCase_032869_1, VkglTestCase_032869_2);

#define VkglTestCase_032870_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032870_2 "ewclass_8_bits.r8i_r8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032870, VkglTestCase_032870_1, VkglTestCase_032870_2);

#define VkglTestCase_032871_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032871_2 "iewclass_8_bits.r8i_r8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032871, VkglTestCase_032871_1, VkglTestCase_032871_2);

#define VkglTestCase_032872_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032872_2 ".viewclass_8_bits.r8i_r8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032872, VkglTestCase_032872_1, VkglTestCase_032872_2);

#define VkglTestCase_032873_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032873_2 ".viewclass_8_bits.r8i_r8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032873, VkglTestCase_032873_1, VkglTestCase_032873_2);

#define VkglTestCase_032874_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032874_2 "d.viewclass_8_bits.r8i_r8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032874, VkglTestCase_032874_1, VkglTestCase_032874_2);

#define VkglTestCase_032875_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032875_2 "ewclass_8_bits.r8i_r8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032875, VkglTestCase_032875_1, VkglTestCase_032875_2);

#define VkglTestCase_032876_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032876_2 "iewclass_8_bits.r8i_r8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032876, VkglTestCase_032876_1, VkglTestCase_032876_2);

#define VkglTestCase_032877_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032877_2 "d.viewclass_8_bits.r8i_r8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032877, VkglTestCase_032877_1, VkglTestCase_032877_2);

#define VkglTestCase_032878_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032878_2 "d.viewclass_8_bits.r8i_r8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032878, VkglTestCase_032878_1, VkglTestCase_032878_2);

#define VkglTestCase_032879_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032879_2 "ed.viewclass_8_bits.r8i_r8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032879, VkglTestCase_032879_1, VkglTestCase_032879_2);

#define VkglTestCase_032880_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032880_2 "iewclass_8_bits.r8i_r8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032880, VkglTestCase_032880_1, VkglTestCase_032880_2);

#define VkglTestCase_032881_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032881_2 "viewclass_8_bits.r8i_r8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032881, VkglTestCase_032881_1, VkglTestCase_032881_2);

#define VkglTestCase_032882_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032882_2 "ewclass_8_bits.r8i_r8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032882, VkglTestCase_032882_1, VkglTestCase_032882_2);

#define VkglTestCase_032883_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032883_2 "ewclass_8_bits.r8i_r8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032883, VkglTestCase_032883_1, VkglTestCase_032883_2);

#define VkglTestCase_032884_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032884_2 "iewclass_8_bits.r8i_r8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032884, VkglTestCase_032884_1, VkglTestCase_032884_2);

#define VkglTestCase_032885_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032885_2 "lass_8_bits.r8i_r8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032885, VkglTestCase_032885_1, VkglTestCase_032885_2);

#define VkglTestCase_032886_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032886_2 "class_8_bits.r8i_r8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032886, VkglTestCase_032886_1, VkglTestCase_032886_2);

#define VkglTestCase_032887_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032887_2 "iewclass_8_bits.r8i_r8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032887, VkglTestCase_032887_1, VkglTestCase_032887_2);

#define VkglTestCase_032888_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032888_2 "iewclass_8_bits.r8i_r8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032888, VkglTestCase_032888_1, VkglTestCase_032888_2);

#define VkglTestCase_032889_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032889_2 "viewclass_8_bits.r8i_r8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032889, VkglTestCase_032889_1, VkglTestCase_032889_2);

#define VkglTestCase_032890_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032890_2 "class_8_bits.r8i_r8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032890, VkglTestCase_032890_1, VkglTestCase_032890_2);

#define VkglTestCase_032891_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032891_2 "ewclass_8_bits.r8i_r8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032891, VkglTestCase_032891_1, VkglTestCase_032891_2);
