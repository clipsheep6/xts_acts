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

#define VkglTestCase_030240_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030240_2 "class_32_bits.rgb10_a2_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030240, VkglTestCase_030240_1, VkglTestCase_030240_2);

#define VkglTestCase_030241_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030241_2 "class_32_bits.rgb10_a2_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030241, VkglTestCase_030241_1, VkglTestCase_030241_2);

#define VkglTestCase_030242_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030242_2 "wclass_32_bits.rgb10_a2_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030242, VkglTestCase_030242_1, VkglTestCase_030242_2);

#define VkglTestCase_030243_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030243_2 "ss_32_bits.rgb10_a2_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030243, VkglTestCase_030243_1, VkglTestCase_030243_2);

#define VkglTestCase_030244_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030244_2 "ass_32_bits.rgb10_a2_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030244, VkglTestCase_030244_1, VkglTestCase_030244_2);

#define VkglTestCase_030245_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030245_2 "class_32_bits.rgb10_a2_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030245, VkglTestCase_030245_1, VkglTestCase_030245_2);

#define VkglTestCase_030246_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030246_2 "class_32_bits.rgb10_a2_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030246, VkglTestCase_030246_1, VkglTestCase_030246_2);

#define VkglTestCase_030247_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030247_2 "wclass_32_bits.rgb10_a2_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030247, VkglTestCase_030247_1, VkglTestCase_030247_2);

#define VkglTestCase_030248_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030248_2 "ss_32_bits.rgb10_a2_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030248, VkglTestCase_030248_1, VkglTestCase_030248_2);

#define VkglTestCase_030249_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030249_2 "ass_32_bits.rgb10_a2_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030249, VkglTestCase_030249_1, VkglTestCase_030249_2);

#define VkglTestCase_030250_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030250_2 "wclass_32_bits.rgb10_a2_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030250, VkglTestCase_030250_1, VkglTestCase_030250_2);

#define VkglTestCase_030251_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030251_2 "wclass_32_bits.rgb10_a2_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030251, VkglTestCase_030251_1, VkglTestCase_030251_2);

#define VkglTestCase_030252_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030252_2 "ewclass_32_bits.rgb10_a2_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030252, VkglTestCase_030252_1, VkglTestCase_030252_2);

#define VkglTestCase_030253_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030253_2 "ass_32_bits.rgb10_a2_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030253, VkglTestCase_030253_1, VkglTestCase_030253_2);

#define VkglTestCase_030254_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030254_2 "lass_32_bits.rgb10_a2_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030254, VkglTestCase_030254_1, VkglTestCase_030254_2);

#define VkglTestCase_030255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030255_2 "ss_32_bits.rgb10_a2_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030255, VkglTestCase_030255_1, VkglTestCase_030255_2);

#define VkglTestCase_030256_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030256_2 "ss_32_bits.rgb10_a2_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030256, VkglTestCase_030256_1, VkglTestCase_030256_2);

#define VkglTestCase_030257_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030257_2 "ass_32_bits.rgb10_a2_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030257, VkglTestCase_030257_1, VkglTestCase_030257_2);

#define VkglTestCase_030258_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030258_2 "32_bits.rgb10_a2_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030258, VkglTestCase_030258_1, VkglTestCase_030258_2);

#define VkglTestCase_030259_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030259_2 "_32_bits.rgb10_a2_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030259, VkglTestCase_030259_1, VkglTestCase_030259_2);

#define VkglTestCase_030260_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030260_2 "ass_32_bits.rgb10_a2_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030260, VkglTestCase_030260_1, VkglTestCase_030260_2);

#define VkglTestCase_030261_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030261_2 "ass_32_bits.rgb10_a2_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030261, VkglTestCase_030261_1, VkglTestCase_030261_2);

#define VkglTestCase_030262_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030262_2 "lass_32_bits.rgb10_a2_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030262, VkglTestCase_030262_1, VkglTestCase_030262_2);

#define VkglTestCase_030263_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030263_2 "_32_bits.rgb10_a2_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030263, VkglTestCase_030263_1, VkglTestCase_030263_2);

#define VkglTestCase_030264_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030264_2 "ss_32_bits.rgb10_a2_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030264, VkglTestCase_030264_1, VkglTestCase_030264_2);
