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

#define VkglTestCase_027111_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027111_2 "iewclass_32_bits.r32ui_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027111, VkglTestCase_027111_1, VkglTestCase_027111_2);

#define VkglTestCase_027112_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027112_2 "iewclass_32_bits.r32ui_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027112, VkglTestCase_027112_1, VkglTestCase_027112_2);

#define VkglTestCase_027113_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027113_2 "viewclass_32_bits.r32ui_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027113, VkglTestCase_027113_1, VkglTestCase_027113_2);

#define VkglTestCase_027114_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027114_2 "class_32_bits.r32ui_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027114, VkglTestCase_027114_1, VkglTestCase_027114_2);

#define VkglTestCase_027115_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027115_2 "wclass_32_bits.r32ui_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027115, VkglTestCase_027115_1, VkglTestCase_027115_2);

#define VkglTestCase_027116_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027116_2 "iewclass_32_bits.r32ui_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027116, VkglTestCase_027116_1, VkglTestCase_027116_2);

#define VkglTestCase_027117_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027117_2 "iewclass_32_bits.r32ui_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027117, VkglTestCase_027117_1, VkglTestCase_027117_2);

#define VkglTestCase_027118_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027118_2 "viewclass_32_bits.r32ui_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027118, VkglTestCase_027118_1, VkglTestCase_027118_2);

#define VkglTestCase_027119_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027119_2 "class_32_bits.r32ui_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027119, VkglTestCase_027119_1, VkglTestCase_027119_2);

#define VkglTestCase_027120_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027120_2 "wclass_32_bits.r32ui_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027120, VkglTestCase_027120_1, VkglTestCase_027120_2);

#define VkglTestCase_027121_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027121_2 "viewclass_32_bits.r32ui_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027121, VkglTestCase_027121_1, VkglTestCase_027121_2);

#define VkglTestCase_027122_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027122_2 "viewclass_32_bits.r32ui_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027122, VkglTestCase_027122_1, VkglTestCase_027122_2);

#define VkglTestCase_027123_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027123_2 ".viewclass_32_bits.r32ui_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027123, VkglTestCase_027123_1, VkglTestCase_027123_2);

#define VkglTestCase_027124_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027124_2 "wclass_32_bits.r32ui_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027124, VkglTestCase_027124_1, VkglTestCase_027124_2);

#define VkglTestCase_027125_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027125_2 "ewclass_32_bits.r32ui_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027125, VkglTestCase_027125_1, VkglTestCase_027125_2);

#define VkglTestCase_027126_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027126_2 "class_32_bits.r32ui_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027126, VkglTestCase_027126_1, VkglTestCase_027126_2);

#define VkglTestCase_027127_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027127_2 "class_32_bits.r32ui_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027127, VkglTestCase_027127_1, VkglTestCase_027127_2);

#define VkglTestCase_027128_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027128_2 "wclass_32_bits.r32ui_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027128, VkglTestCase_027128_1, VkglTestCase_027128_2);

#define VkglTestCase_027129_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027129_2 "ss_32_bits.r32ui_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027129, VkglTestCase_027129_1, VkglTestCase_027129_2);

#define VkglTestCase_027130_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027130_2 "ass_32_bits.r32ui_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027130, VkglTestCase_027130_1, VkglTestCase_027130_2);

#define VkglTestCase_027131_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027131_2 "wclass_32_bits.r32ui_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027131, VkglTestCase_027131_1, VkglTestCase_027131_2);

#define VkglTestCase_027132_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027132_2 "wclass_32_bits.r32ui_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027132, VkglTestCase_027132_1, VkglTestCase_027132_2);

#define VkglTestCase_027133_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027133_2 "ewclass_32_bits.r32ui_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027133, VkglTestCase_027133_1, VkglTestCase_027133_2);

#define VkglTestCase_027134_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027134_2 "ass_32_bits.r32ui_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027134, VkglTestCase_027134_1, VkglTestCase_027134_2);

#define VkglTestCase_027135_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027135_2 "class_32_bits.r32ui_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027135, VkglTestCase_027135_1, VkglTestCase_027135_2);
