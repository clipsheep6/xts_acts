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

#define VkglTestCase_029865_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029865_2 "ass_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029865, VkglTestCase_029865_1, VkglTestCase_029865_2);

#define VkglTestCase_029866_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029866_2 "ass_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029866, VkglTestCase_029866_1, VkglTestCase_029866_2);

#define VkglTestCase_029867_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029867_2 "lass_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029867, VkglTestCase_029867_1, VkglTestCase_029867_2);

#define VkglTestCase_029868_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029868_2 "_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029868, VkglTestCase_029868_1, VkglTestCase_029868_2);

#define VkglTestCase_029869_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029869_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029869, VkglTestCase_029869_1, VkglTestCase_029869_2);

#define VkglTestCase_029870_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029870_2 "ass_32_bits.rgb10_a2ui_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029870, VkglTestCase_029870_1, VkglTestCase_029870_2);

#define VkglTestCase_029871_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029871_2 "ass_32_bits.rgb10_a2ui_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029871, VkglTestCase_029871_1, VkglTestCase_029871_2);

#define VkglTestCase_029872_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029872_2 "lass_32_bits.rgb10_a2ui_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029872, VkglTestCase_029872_1, VkglTestCase_029872_2);

#define VkglTestCase_029873_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029873_2 "_32_bits.rgb10_a2ui_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029873, VkglTestCase_029873_1, VkglTestCase_029873_2);

#define VkglTestCase_029874_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029874_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029874, VkglTestCase_029874_1, VkglTestCase_029874_2);

#define VkglTestCase_029875_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029875_2 "lass_32_bits.rgb10_a2ui_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029875, VkglTestCase_029875_1, VkglTestCase_029875_2);

#define VkglTestCase_029876_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029876_2 "lass_32_bits.rgb10_a2ui_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029876, VkglTestCase_029876_1, VkglTestCase_029876_2);

#define VkglTestCase_029877_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029877_2 "class_32_bits.rgb10_a2ui_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029877, VkglTestCase_029877_1, VkglTestCase_029877_2);

#define VkglTestCase_029878_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029878_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029878, VkglTestCase_029878_1, VkglTestCase_029878_2);

#define VkglTestCase_029879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029879_2 "ss_32_bits.rgb10_a2ui_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029879, VkglTestCase_029879_1, VkglTestCase_029879_2);

#define VkglTestCase_029880_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029880_2 "_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029880, VkglTestCase_029880_1, VkglTestCase_029880_2);

#define VkglTestCase_029881_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029881_2 "_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029881, VkglTestCase_029881_1, VkglTestCase_029881_2);

#define VkglTestCase_029882_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029882_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029882, VkglTestCase_029882_1, VkglTestCase_029882_2);

#define VkglTestCase_029883_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029883_2 "_bits.rgb10_a2ui_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029883, VkglTestCase_029883_1, VkglTestCase_029883_2);

#define VkglTestCase_029884_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029884_2 "2_bits.rgb10_a2ui_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029884, VkglTestCase_029884_1, VkglTestCase_029884_2);

#define VkglTestCase_029885_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029885_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029885, VkglTestCase_029885_1, VkglTestCase_029885_2);

#define VkglTestCase_029886_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029886_2 "s_32_bits.rgb10_a2ui_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029886, VkglTestCase_029886_1, VkglTestCase_029886_2);

#define VkglTestCase_029887_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029887_2 "ss_32_bits.rgb10_a2ui_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029887, VkglTestCase_029887_1, VkglTestCase_029887_2);

#define VkglTestCase_029888_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029888_2 "2_bits.rgb10_a2ui_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029888, VkglTestCase_029888_1, VkglTestCase_029888_2);

#define VkglTestCase_029889_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029889_2 "_32_bits.rgb10_a2ui_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029889, VkglTestCase_029889_1, VkglTestCase_029889_2);
