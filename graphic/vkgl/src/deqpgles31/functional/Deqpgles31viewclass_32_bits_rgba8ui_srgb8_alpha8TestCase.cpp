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

#define VkglTestCase_029353_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029353_2 "ass_32_bits.rgba8ui_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029353, VkglTestCase_029353_1, VkglTestCase_029353_2);

#define VkglTestCase_029354_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029354_2 "ass_32_bits.rgba8ui_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029354, VkglTestCase_029354_1, VkglTestCase_029354_2);

#define VkglTestCase_029355_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029355_2 "lass_32_bits.rgba8ui_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029355, VkglTestCase_029355_1, VkglTestCase_029355_2);

#define VkglTestCase_029356_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029356_2 "_32_bits.rgba8ui_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029356, VkglTestCase_029356_1, VkglTestCase_029356_2);

#define VkglTestCase_029357_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029357_2 "ss_32_bits.rgba8ui_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029357, VkglTestCase_029357_1, VkglTestCase_029357_2);

#define VkglTestCase_029358_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029358_2 "ass_32_bits.rgba8ui_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029358, VkglTestCase_029358_1, VkglTestCase_029358_2);

#define VkglTestCase_029359_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029359_2 "ass_32_bits.rgba8ui_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029359, VkglTestCase_029359_1, VkglTestCase_029359_2);

#define VkglTestCase_029360_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029360_2 "lass_32_bits.rgba8ui_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029360, VkglTestCase_029360_1, VkglTestCase_029360_2);

#define VkglTestCase_029361_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029361_2 "_32_bits.rgba8ui_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029361, VkglTestCase_029361_1, VkglTestCase_029361_2);

#define VkglTestCase_029362_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029362_2 "ss_32_bits.rgba8ui_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029362, VkglTestCase_029362_1, VkglTestCase_029362_2);

#define VkglTestCase_029363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029363_2 "lass_32_bits.rgba8ui_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029363, VkglTestCase_029363_1, VkglTestCase_029363_2);

#define VkglTestCase_029364_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029364_2 "lass_32_bits.rgba8ui_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029364, VkglTestCase_029364_1, VkglTestCase_029364_2);

#define VkglTestCase_029365_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029365_2 "class_32_bits.rgba8ui_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029365, VkglTestCase_029365_1, VkglTestCase_029365_2);

#define VkglTestCase_029366_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029366_2 "s_32_bits.rgba8ui_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029366, VkglTestCase_029366_1, VkglTestCase_029366_2);

#define VkglTestCase_029367_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029367_2 "ass_32_bits.rgba8ui_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029367, VkglTestCase_029367_1, VkglTestCase_029367_2);

#define VkglTestCase_029368_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029368_2 "_32_bits.rgba8ui_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029368, VkglTestCase_029368_1, VkglTestCase_029368_2);

#define VkglTestCase_029369_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029369_2 "_32_bits.rgba8ui_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029369, VkglTestCase_029369_1, VkglTestCase_029369_2);

#define VkglTestCase_029370_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029370_2 "s_32_bits.rgba8ui_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029370, VkglTestCase_029370_1, VkglTestCase_029370_2);

#define VkglTestCase_029371_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029371_2 "_bits.rgba8ui_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029371, VkglTestCase_029371_1, VkglTestCase_029371_2);

#define VkglTestCase_029372_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029372_2 "32_bits.rgba8ui_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029372, VkglTestCase_029372_1, VkglTestCase_029372_2);

#define VkglTestCase_029373_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029373_2 "ss_32_bits.rgba8ui_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029373, VkglTestCase_029373_1, VkglTestCase_029373_2);

#define VkglTestCase_029374_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029374_2 "ss_32_bits.rgba8ui_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029374, VkglTestCase_029374_1, VkglTestCase_029374_2);

#define VkglTestCase_029375_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029375_2 "ass_32_bits.rgba8ui_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029375, VkglTestCase_029375_1, VkglTestCase_029375_2);

#define VkglTestCase_029376_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029376_2 "32_bits.rgba8ui_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029376, VkglTestCase_029376_1, VkglTestCase_029376_2);

#define VkglTestCase_029377_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029377_2 "_32_bits.rgba8ui_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029377, VkglTestCase_029377_1, VkglTestCase_029377_2);
