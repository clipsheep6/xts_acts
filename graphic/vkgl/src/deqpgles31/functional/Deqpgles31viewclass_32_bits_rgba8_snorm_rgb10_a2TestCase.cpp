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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030538_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030538_2 "ass_32_bits.rgba8_snorm_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030538, VkglTestCase_030538_1, VkglTestCase_030538_2);

#define VkglTestCase_030539_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030539_2 "ass_32_bits.rgba8_snorm_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030539, VkglTestCase_030539_1, VkglTestCase_030539_2);

#define VkglTestCase_030540_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030540_2 "lass_32_bits.rgba8_snorm_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030540, VkglTestCase_030540_1, VkglTestCase_030540_2);

#define VkglTestCase_030541_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030541_2 "_32_bits.rgba8_snorm_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030541, VkglTestCase_030541_1, VkglTestCase_030541_2);

#define VkglTestCase_030542_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030542_2 "ss_32_bits.rgba8_snorm_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030542, VkglTestCase_030542_1, VkglTestCase_030542_2);

#define VkglTestCase_030543_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030543_2 "ass_32_bits.rgba8_snorm_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030543, VkglTestCase_030543_1, VkglTestCase_030543_2);

#define VkglTestCase_030544_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030544_2 "ass_32_bits.rgba8_snorm_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030544, VkglTestCase_030544_1, VkglTestCase_030544_2);

#define VkglTestCase_030545_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030545_2 "lass_32_bits.rgba8_snorm_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030545, VkglTestCase_030545_1, VkglTestCase_030545_2);

#define VkglTestCase_030546_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030546_2 "_32_bits.rgba8_snorm_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030546, VkglTestCase_030546_1, VkglTestCase_030546_2);

#define VkglTestCase_030547_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030547_2 "ss_32_bits.rgba8_snorm_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030547, VkglTestCase_030547_1, VkglTestCase_030547_2);

#define VkglTestCase_030548_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030548_2 "lass_32_bits.rgba8_snorm_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030548, VkglTestCase_030548_1, VkglTestCase_030548_2);

#define VkglTestCase_030549_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030549_2 "lass_32_bits.rgba8_snorm_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030549, VkglTestCase_030549_1, VkglTestCase_030549_2);

#define VkglTestCase_030550_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030550_2 "class_32_bits.rgba8_snorm_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030550, VkglTestCase_030550_1, VkglTestCase_030550_2);

#define VkglTestCase_030551_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030551_2 "s_32_bits.rgba8_snorm_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030551, VkglTestCase_030551_1, VkglTestCase_030551_2);

#define VkglTestCase_030552_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030552_2 "ass_32_bits.rgba8_snorm_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030552, VkglTestCase_030552_1, VkglTestCase_030552_2);

#define VkglTestCase_030553_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030553_2 "_32_bits.rgba8_snorm_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030553, VkglTestCase_030553_1, VkglTestCase_030553_2);

#define VkglTestCase_030554_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030554_2 "_32_bits.rgba8_snorm_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030554, VkglTestCase_030554_1, VkglTestCase_030554_2);

#define VkglTestCase_030555_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030555_2 "s_32_bits.rgba8_snorm_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030555, VkglTestCase_030555_1, VkglTestCase_030555_2);

#define VkglTestCase_030556_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030556_2 "_bits.rgba8_snorm_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030556, VkglTestCase_030556_1, VkglTestCase_030556_2);

#define VkglTestCase_030557_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030557_2 "32_bits.rgba8_snorm_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030557, VkglTestCase_030557_1, VkglTestCase_030557_2);
