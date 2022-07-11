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

#define VkglTestCase_028538_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028538_2 "ewclass_32_bits.rgba8_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028538, VkglTestCase_028538_1, VkglTestCase_028538_2);

#define VkglTestCase_028539_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028539_2 "ewclass_32_bits.rgba8_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028539, VkglTestCase_028539_1, VkglTestCase_028539_2);

#define VkglTestCase_028540_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028540_2 "iewclass_32_bits.rgba8_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028540, VkglTestCase_028540_1, VkglTestCase_028540_2);

#define VkglTestCase_028541_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028541_2 "lass_32_bits.rgba8_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028541, VkglTestCase_028541_1, VkglTestCase_028541_2);

#define VkglTestCase_028542_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028542_2 "class_32_bits.rgba8_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028542, VkglTestCase_028542_1, VkglTestCase_028542_2);

#define VkglTestCase_028543_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028543_2 "ewclass_32_bits.rgba8_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028543, VkglTestCase_028543_1, VkglTestCase_028543_2);

#define VkglTestCase_028544_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028544_2 "ewclass_32_bits.rgba8_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028544, VkglTestCase_028544_1, VkglTestCase_028544_2);

#define VkglTestCase_028545_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028545_2 "iewclass_32_bits.rgba8_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028545, VkglTestCase_028545_1, VkglTestCase_028545_2);

#define VkglTestCase_028546_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028546_2 "lass_32_bits.rgba8_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028546, VkglTestCase_028546_1, VkglTestCase_028546_2);

#define VkglTestCase_028547_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028547_2 "class_32_bits.rgba8_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028547, VkglTestCase_028547_1, VkglTestCase_028547_2);

#define VkglTestCase_028548_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028548_2 "iewclass_32_bits.rgba8_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028548, VkglTestCase_028548_1, VkglTestCase_028548_2);

#define VkglTestCase_028549_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028549_2 "iewclass_32_bits.rgba8_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028549, VkglTestCase_028549_1, VkglTestCase_028549_2);

#define VkglTestCase_028550_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028550_2 "viewclass_32_bits.rgba8_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028550, VkglTestCase_028550_1, VkglTestCase_028550_2);

#define VkglTestCase_028551_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028551_2 "class_32_bits.rgba8_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028551, VkglTestCase_028551_1, VkglTestCase_028551_2);

#define VkglTestCase_028552_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028552_2 "wclass_32_bits.rgba8_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028552, VkglTestCase_028552_1, VkglTestCase_028552_2);

#define VkglTestCase_028553_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028553_2 "lass_32_bits.rgba8_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028553, VkglTestCase_028553_1, VkglTestCase_028553_2);

#define VkglTestCase_028554_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028554_2 "lass_32_bits.rgba8_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028554, VkglTestCase_028554_1, VkglTestCase_028554_2);

#define VkglTestCase_028555_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028555_2 "class_32_bits.rgba8_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028555, VkglTestCase_028555_1, VkglTestCase_028555_2);

#define VkglTestCase_028556_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028556_2 "s_32_bits.rgba8_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028556, VkglTestCase_028556_1, VkglTestCase_028556_2);

#define VkglTestCase_028557_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028557_2 "ss_32_bits.rgba8_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028557, VkglTestCase_028557_1, VkglTestCase_028557_2);

#define VkglTestCase_028558_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028558_2 "class_32_bits.rgba8_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028558, VkglTestCase_028558_1, VkglTestCase_028558_2);

#define VkglTestCase_028559_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028559_2 "class_32_bits.rgba8_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028559, VkglTestCase_028559_1, VkglTestCase_028559_2);

#define VkglTestCase_028560_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028560_2 "wclass_32_bits.rgba8_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028560, VkglTestCase_028560_1, VkglTestCase_028560_2);

#define VkglTestCase_028561_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028561_2 "ss_32_bits.rgba8_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028561, VkglTestCase_028561_1, VkglTestCase_028561_2);

#define VkglTestCase_028562_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028562_2 "lass_32_bits.rgba8_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028562, VkglTestCase_028562_1, VkglTestCase_028562_2);
