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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027256_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027256_2 "ewclass_32_bits.r32ui_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027256, VkglTestCase_027256_1, VkglTestCase_027256_2);

#define VkglTestCase_027257_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027257_2 "ewclass_32_bits.r32ui_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027257, VkglTestCase_027257_1, VkglTestCase_027257_2);

#define VkglTestCase_027258_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027258_2 "iewclass_32_bits.r32ui_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027258, VkglTestCase_027258_1, VkglTestCase_027258_2);

#define VkglTestCase_027259_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027259_2 "lass_32_bits.r32ui_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027259, VkglTestCase_027259_1, VkglTestCase_027259_2);

#define VkglTestCase_027260_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027260_2 "class_32_bits.r32ui_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027260, VkglTestCase_027260_1, VkglTestCase_027260_2);

#define VkglTestCase_027261_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027261_2 "ewclass_32_bits.r32ui_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027261, VkglTestCase_027261_1, VkglTestCase_027261_2);

#define VkglTestCase_027262_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027262_2 "ewclass_32_bits.r32ui_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027262, VkglTestCase_027262_1, VkglTestCase_027262_2);

#define VkglTestCase_027263_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027263_2 "iewclass_32_bits.r32ui_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027263, VkglTestCase_027263_1, VkglTestCase_027263_2);

#define VkglTestCase_027264_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027264_2 "lass_32_bits.r32ui_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027264, VkglTestCase_027264_1, VkglTestCase_027264_2);

#define VkglTestCase_027265_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027265_2 "class_32_bits.r32ui_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027265, VkglTestCase_027265_1, VkglTestCase_027265_2);

#define VkglTestCase_027266_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027266_2 "iewclass_32_bits.r32ui_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027266, VkglTestCase_027266_1, VkglTestCase_027266_2);

#define VkglTestCase_027267_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027267_2 "iewclass_32_bits.r32ui_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027267, VkglTestCase_027267_1, VkglTestCase_027267_2);

#define VkglTestCase_027268_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027268_2 "viewclass_32_bits.r32ui_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027268, VkglTestCase_027268_1, VkglTestCase_027268_2);

#define VkglTestCase_027269_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027269_2 "class_32_bits.r32ui_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027269, VkglTestCase_027269_1, VkglTestCase_027269_2);

#define VkglTestCase_027270_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027270_2 "wclass_32_bits.r32ui_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027270, VkglTestCase_027270_1, VkglTestCase_027270_2);

#define VkglTestCase_027271_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027271_2 "lass_32_bits.r32ui_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027271, VkglTestCase_027271_1, VkglTestCase_027271_2);

#define VkglTestCase_027272_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027272_2 "lass_32_bits.r32ui_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027272, VkglTestCase_027272_1, VkglTestCase_027272_2);

#define VkglTestCase_027273_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027273_2 "class_32_bits.r32ui_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027273, VkglTestCase_027273_1, VkglTestCase_027273_2);

#define VkglTestCase_027274_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027274_2 "s_32_bits.r32ui_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027274, VkglTestCase_027274_1, VkglTestCase_027274_2);

#define VkglTestCase_027275_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027275_2 "ss_32_bits.r32ui_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027275, VkglTestCase_027275_1, VkglTestCase_027275_2);

#define VkglTestCase_027276_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027276_2 "class_32_bits.r32ui_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027276, VkglTestCase_027276_1, VkglTestCase_027276_2);

#define VkglTestCase_027277_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027277_2 "class_32_bits.r32ui_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027277, VkglTestCase_027277_1, VkglTestCase_027277_2);

#define VkglTestCase_027278_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027278_2 "wclass_32_bits.r32ui_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027278, VkglTestCase_027278_1, VkglTestCase_027278_2);

#define VkglTestCase_027279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027279_2 "ss_32_bits.r32ui_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027279, VkglTestCase_027279_1, VkglTestCase_027279_2);

#define VkglTestCase_027280_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027280_2 "lass_32_bits.r32ui_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027280, VkglTestCase_027280_1, VkglTestCase_027280_2);
