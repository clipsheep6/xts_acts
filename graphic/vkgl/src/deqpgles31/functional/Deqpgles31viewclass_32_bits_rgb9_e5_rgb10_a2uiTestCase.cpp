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

#define VkglTestCase_031100_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031100_2 "lass_32_bits.rgb9_e5_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031100, VkglTestCase_031100_1, VkglTestCase_031100_2);

#define VkglTestCase_031101_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031101_2 "lass_32_bits.rgb9_e5_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031101, VkglTestCase_031101_1, VkglTestCase_031101_2);

#define VkglTestCase_031102_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031102_2 "class_32_bits.rgb9_e5_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031102, VkglTestCase_031102_1, VkglTestCase_031102_2);

#define VkglTestCase_031103_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031103_2 "s_32_bits.rgb9_e5_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031103, VkglTestCase_031103_1, VkglTestCase_031103_2);

#define VkglTestCase_031104_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031104_2 "ass_32_bits.rgb9_e5_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031104, VkglTestCase_031104_1, VkglTestCase_031104_2);

#define VkglTestCase_031105_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031105_2 "lass_32_bits.rgb9_e5_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031105, VkglTestCase_031105_1, VkglTestCase_031105_2);

#define VkglTestCase_031106_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031106_2 "lass_32_bits.rgb9_e5_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031106, VkglTestCase_031106_1, VkglTestCase_031106_2);

#define VkglTestCase_031107_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031107_2 "class_32_bits.rgb9_e5_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031107, VkglTestCase_031107_1, VkglTestCase_031107_2);

#define VkglTestCase_031108_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031108_2 "s_32_bits.rgb9_e5_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031108, VkglTestCase_031108_1, VkglTestCase_031108_2);

#define VkglTestCase_031109_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031109_2 "ass_32_bits.rgb9_e5_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031109, VkglTestCase_031109_1, VkglTestCase_031109_2);

#define VkglTestCase_031110_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031110_2 "class_32_bits.rgb9_e5_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031110, VkglTestCase_031110_1, VkglTestCase_031110_2);

#define VkglTestCase_031111_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031111_2 "class_32_bits.rgb9_e5_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031111, VkglTestCase_031111_1, VkglTestCase_031111_2);

#define VkglTestCase_031112_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031112_2 "wclass_32_bits.rgb9_e5_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031112, VkglTestCase_031112_1, VkglTestCase_031112_2);

#define VkglTestCase_031113_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031113_2 "ss_32_bits.rgb9_e5_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031113, VkglTestCase_031113_1, VkglTestCase_031113_2);

#define VkglTestCase_031114_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031114_2 "lass_32_bits.rgb9_e5_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031114, VkglTestCase_031114_1, VkglTestCase_031114_2);

#define VkglTestCase_031115_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031115_2 "s_32_bits.rgb9_e5_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031115, VkglTestCase_031115_1, VkglTestCase_031115_2);

#define VkglTestCase_031116_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031116_2 "s_32_bits.rgb9_e5_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031116, VkglTestCase_031116_1, VkglTestCase_031116_2);

#define VkglTestCase_031117_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031117_2 "ss_32_bits.rgb9_e5_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031117, VkglTestCase_031117_1, VkglTestCase_031117_2);

#define VkglTestCase_031118_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_031118_2 "2_bits.rgb9_e5_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031118, VkglTestCase_031118_1, VkglTestCase_031118_2);

#define VkglTestCase_031119_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031119_2 "_32_bits.rgb9_e5_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031119, VkglTestCase_031119_1, VkglTestCase_031119_2);
