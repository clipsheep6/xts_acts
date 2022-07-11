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

#define VkglTestCase_027351_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027351_2 "class_32_bits.r32ui_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027351, VkglTestCase_027351_1, VkglTestCase_027351_2);

#define VkglTestCase_027352_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027352_2 "class_32_bits.r32ui_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027352, VkglTestCase_027352_1, VkglTestCase_027352_2);

#define VkglTestCase_027353_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027353_2 "wclass_32_bits.r32ui_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027353, VkglTestCase_027353_1, VkglTestCase_027353_2);

#define VkglTestCase_027354_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027354_2 "ss_32_bits.r32ui_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027354, VkglTestCase_027354_1, VkglTestCase_027354_2);

#define VkglTestCase_027355_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027355_2 "class_32_bits.r32ui_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027355, VkglTestCase_027355_1, VkglTestCase_027355_2);

#define VkglTestCase_027356_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027356_2 "class_32_bits.r32ui_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027356, VkglTestCase_027356_1, VkglTestCase_027356_2);

#define VkglTestCase_027357_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027357_2 "wclass_32_bits.r32ui_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027357, VkglTestCase_027357_1, VkglTestCase_027357_2);

#define VkglTestCase_027358_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027358_2 "ss_32_bits.r32ui_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027358, VkglTestCase_027358_1, VkglTestCase_027358_2);

#define VkglTestCase_027359_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027359_2 "wclass_32_bits.r32ui_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027359, VkglTestCase_027359_1, VkglTestCase_027359_2);

#define VkglTestCase_027360_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027360_2 "wclass_32_bits.r32ui_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027360, VkglTestCase_027360_1, VkglTestCase_027360_2);

#define VkglTestCase_027361_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027361_2 "ewclass_32_bits.r32ui_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027361, VkglTestCase_027361_1, VkglTestCase_027361_2);

#define VkglTestCase_027362_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027362_2 "ass_32_bits.r32ui_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027362, VkglTestCase_027362_1, VkglTestCase_027362_2);

#define VkglTestCase_027363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027363_2 "ss_32_bits.r32ui_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027363, VkglTestCase_027363_1, VkglTestCase_027363_2);

#define VkglTestCase_027364_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027364_2 "ss_32_bits.r32ui_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027364, VkglTestCase_027364_1, VkglTestCase_027364_2);

#define VkglTestCase_027365_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027365_2 "ass_32_bits.r32ui_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027365, VkglTestCase_027365_1, VkglTestCase_027365_2);

#define VkglTestCase_027366_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027366_2 "32_bits.r32ui_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027366, VkglTestCase_027366_1, VkglTestCase_027366_2);

#define VkglTestCase_027367_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027367_2 "ass_32_bits.r32ui_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027367, VkglTestCase_027367_1, VkglTestCase_027367_2);

#define VkglTestCase_027368_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027368_2 "ass_32_bits.r32ui_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027368, VkglTestCase_027368_1, VkglTestCase_027368_2);

#define VkglTestCase_027369_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027369_2 "lass_32_bits.r32ui_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027369, VkglTestCase_027369_1, VkglTestCase_027369_2);

#define VkglTestCase_027370_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027370_2 "_32_bits.r32ui_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027370, VkglTestCase_027370_1, VkglTestCase_027370_2);
