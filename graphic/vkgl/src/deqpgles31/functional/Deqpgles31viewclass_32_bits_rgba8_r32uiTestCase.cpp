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

#define VkglTestCase_028393_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028393_2 "iewclass_32_bits.rgba8_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028393, VkglTestCase_028393_1, VkglTestCase_028393_2);

#define VkglTestCase_028394_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028394_2 "iewclass_32_bits.rgba8_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028394, VkglTestCase_028394_1, VkglTestCase_028394_2);

#define VkglTestCase_028395_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028395_2 "viewclass_32_bits.rgba8_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028395, VkglTestCase_028395_1, VkglTestCase_028395_2);

#define VkglTestCase_028396_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028396_2 "class_32_bits.rgba8_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028396, VkglTestCase_028396_1, VkglTestCase_028396_2);

#define VkglTestCase_028397_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028397_2 "wclass_32_bits.rgba8_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028397, VkglTestCase_028397_1, VkglTestCase_028397_2);

#define VkglTestCase_028398_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028398_2 "iewclass_32_bits.rgba8_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028398, VkglTestCase_028398_1, VkglTestCase_028398_2);

#define VkglTestCase_028399_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028399_2 "iewclass_32_bits.rgba8_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028399, VkglTestCase_028399_1, VkglTestCase_028399_2);

#define VkglTestCase_028400_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028400_2 "viewclass_32_bits.rgba8_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028400, VkglTestCase_028400_1, VkglTestCase_028400_2);

#define VkglTestCase_028401_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028401_2 "class_32_bits.rgba8_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028401, VkglTestCase_028401_1, VkglTestCase_028401_2);

#define VkglTestCase_028402_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028402_2 "wclass_32_bits.rgba8_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028402, VkglTestCase_028402_1, VkglTestCase_028402_2);

#define VkglTestCase_028403_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028403_2 "viewclass_32_bits.rgba8_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028403, VkglTestCase_028403_1, VkglTestCase_028403_2);

#define VkglTestCase_028404_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028404_2 "viewclass_32_bits.rgba8_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028404, VkglTestCase_028404_1, VkglTestCase_028404_2);

#define VkglTestCase_028405_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028405_2 ".viewclass_32_bits.rgba8_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028405, VkglTestCase_028405_1, VkglTestCase_028405_2);

#define VkglTestCase_028406_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028406_2 "wclass_32_bits.rgba8_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028406, VkglTestCase_028406_1, VkglTestCase_028406_2);

#define VkglTestCase_028407_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028407_2 "ewclass_32_bits.rgba8_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028407, VkglTestCase_028407_1, VkglTestCase_028407_2);

#define VkglTestCase_028408_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028408_2 "class_32_bits.rgba8_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028408, VkglTestCase_028408_1, VkglTestCase_028408_2);

#define VkglTestCase_028409_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028409_2 "class_32_bits.rgba8_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028409, VkglTestCase_028409_1, VkglTestCase_028409_2);

#define VkglTestCase_028410_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028410_2 "wclass_32_bits.rgba8_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028410, VkglTestCase_028410_1, VkglTestCase_028410_2);

#define VkglTestCase_028411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028411_2 "ss_32_bits.rgba8_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028411, VkglTestCase_028411_1, VkglTestCase_028411_2);

#define VkglTestCase_028412_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028412_2 "ass_32_bits.rgba8_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028412, VkglTestCase_028412_1, VkglTestCase_028412_2);

#define VkglTestCase_028413_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028413_2 "wclass_32_bits.rgba8_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028413, VkglTestCase_028413_1, VkglTestCase_028413_2);

#define VkglTestCase_028414_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028414_2 "wclass_32_bits.rgba8_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028414, VkglTestCase_028414_1, VkglTestCase_028414_2);

#define VkglTestCase_028415_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028415_2 "ewclass_32_bits.rgba8_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028415, VkglTestCase_028415_1, VkglTestCase_028415_2);

#define VkglTestCase_028416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028416_2 "ass_32_bits.rgba8_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028416, VkglTestCase_028416_1, VkglTestCase_028416_2);

#define VkglTestCase_028417_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028417_2 "class_32_bits.rgba8_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028417, VkglTestCase_028417_1, VkglTestCase_028417_2);
