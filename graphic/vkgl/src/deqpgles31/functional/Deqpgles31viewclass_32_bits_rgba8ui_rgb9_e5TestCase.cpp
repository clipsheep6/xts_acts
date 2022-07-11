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

#define VkglTestCase_029378_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029378_2 "wclass_32_bits.rgba8ui_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029378, VkglTestCase_029378_1, VkglTestCase_029378_2);

#define VkglTestCase_029379_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029379_2 "wclass_32_bits.rgba8ui_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029379, VkglTestCase_029379_1, VkglTestCase_029379_2);

#define VkglTestCase_029380_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029380_2 "ewclass_32_bits.rgba8ui_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029380, VkglTestCase_029380_1, VkglTestCase_029380_2);

#define VkglTestCase_029381_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029381_2 "ass_32_bits.rgba8ui_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029381, VkglTestCase_029381_1, VkglTestCase_029381_2);

#define VkglTestCase_029382_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029382_2 "wclass_32_bits.rgba8ui_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029382, VkglTestCase_029382_1, VkglTestCase_029382_2);

#define VkglTestCase_029383_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029383_2 "wclass_32_bits.rgba8ui_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029383, VkglTestCase_029383_1, VkglTestCase_029383_2);

#define VkglTestCase_029384_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029384_2 "ewclass_32_bits.rgba8ui_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029384, VkglTestCase_029384_1, VkglTestCase_029384_2);

#define VkglTestCase_029385_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029385_2 "ass_32_bits.rgba8ui_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029385, VkglTestCase_029385_1, VkglTestCase_029385_2);

#define VkglTestCase_029386_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029386_2 "ewclass_32_bits.rgba8ui_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029386, VkglTestCase_029386_1, VkglTestCase_029386_2);

#define VkglTestCase_029387_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029387_2 "ewclass_32_bits.rgba8ui_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029387, VkglTestCase_029387_1, VkglTestCase_029387_2);

#define VkglTestCase_029388_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029388_2 "iewclass_32_bits.rgba8ui_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029388, VkglTestCase_029388_1, VkglTestCase_029388_2);

#define VkglTestCase_029389_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029389_2 "lass_32_bits.rgba8ui_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029389, VkglTestCase_029389_1, VkglTestCase_029389_2);

#define VkglTestCase_029390_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029390_2 "ass_32_bits.rgba8ui_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029390, VkglTestCase_029390_1, VkglTestCase_029390_2);

#define VkglTestCase_029391_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029391_2 "ass_32_bits.rgba8ui_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029391, VkglTestCase_029391_1, VkglTestCase_029391_2);

#define VkglTestCase_029392_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029392_2 "lass_32_bits.rgba8ui_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029392, VkglTestCase_029392_1, VkglTestCase_029392_2);

#define VkglTestCase_029393_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029393_2 "_32_bits.rgba8ui_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029393, VkglTestCase_029393_1, VkglTestCase_029393_2);

#define VkglTestCase_029394_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029394_2 "lass_32_bits.rgba8ui_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029394, VkglTestCase_029394_1, VkglTestCase_029394_2);

#define VkglTestCase_029395_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029395_2 "lass_32_bits.rgba8ui_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029395, VkglTestCase_029395_1, VkglTestCase_029395_2);

#define VkglTestCase_029396_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029396_2 "class_32_bits.rgba8ui_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029396, VkglTestCase_029396_1, VkglTestCase_029396_2);

#define VkglTestCase_029397_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029397_2 "s_32_bits.rgba8ui_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029397, VkglTestCase_029397_1, VkglTestCase_029397_2);
