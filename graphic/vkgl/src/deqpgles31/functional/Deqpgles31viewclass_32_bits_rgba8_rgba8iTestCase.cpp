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

#define VkglTestCase_028513_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028513_2 "ewclass_32_bits.rgba8_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028513, VkglTestCase_028513_1, VkglTestCase_028513_2);

#define VkglTestCase_028514_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028514_2 "ewclass_32_bits.rgba8_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028514, VkglTestCase_028514_1, VkglTestCase_028514_2);

#define VkglTestCase_028515_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028515_2 "iewclass_32_bits.rgba8_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028515, VkglTestCase_028515_1, VkglTestCase_028515_2);

#define VkglTestCase_028516_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028516_2 "lass_32_bits.rgba8_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028516, VkglTestCase_028516_1, VkglTestCase_028516_2);

#define VkglTestCase_028517_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028517_2 "wclass_32_bits.rgba8_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028517, VkglTestCase_028517_1, VkglTestCase_028517_2);

#define VkglTestCase_028518_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028518_2 "ewclass_32_bits.rgba8_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028518, VkglTestCase_028518_1, VkglTestCase_028518_2);

#define VkglTestCase_028519_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028519_2 "ewclass_32_bits.rgba8_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028519, VkglTestCase_028519_1, VkglTestCase_028519_2);

#define VkglTestCase_028520_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028520_2 "iewclass_32_bits.rgba8_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028520, VkglTestCase_028520_1, VkglTestCase_028520_2);

#define VkglTestCase_028521_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028521_2 "lass_32_bits.rgba8_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028521, VkglTestCase_028521_1, VkglTestCase_028521_2);

#define VkglTestCase_028522_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028522_2 "wclass_32_bits.rgba8_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028522, VkglTestCase_028522_1, VkglTestCase_028522_2);

#define VkglTestCase_028523_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028523_2 "iewclass_32_bits.rgba8_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028523, VkglTestCase_028523_1, VkglTestCase_028523_2);

#define VkglTestCase_028524_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028524_2 "iewclass_32_bits.rgba8_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028524, VkglTestCase_028524_1, VkglTestCase_028524_2);

#define VkglTestCase_028525_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028525_2 "viewclass_32_bits.rgba8_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028525, VkglTestCase_028525_1, VkglTestCase_028525_2);

#define VkglTestCase_028526_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028526_2 "class_32_bits.rgba8_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028526, VkglTestCase_028526_1, VkglTestCase_028526_2);

#define VkglTestCase_028527_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028527_2 "ewclass_32_bits.rgba8_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028527, VkglTestCase_028527_1, VkglTestCase_028527_2);

#define VkglTestCase_028528_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028528_2 "lass_32_bits.rgba8_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028528, VkglTestCase_028528_1, VkglTestCase_028528_2);

#define VkglTestCase_028529_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028529_2 "lass_32_bits.rgba8_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028529, VkglTestCase_028529_1, VkglTestCase_028529_2);

#define VkglTestCase_028530_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028530_2 "class_32_bits.rgba8_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028530, VkglTestCase_028530_1, VkglTestCase_028530_2);

#define VkglTestCase_028531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028531_2 "s_32_bits.rgba8_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028531, VkglTestCase_028531_1, VkglTestCase_028531_2);

#define VkglTestCase_028532_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028532_2 "ass_32_bits.rgba8_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028532, VkglTestCase_028532_1, VkglTestCase_028532_2);

#define VkglTestCase_028533_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028533_2 "wclass_32_bits.rgba8_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028533, VkglTestCase_028533_1, VkglTestCase_028533_2);

#define VkglTestCase_028534_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028534_2 "wclass_32_bits.rgba8_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028534, VkglTestCase_028534_1, VkglTestCase_028534_2);

#define VkglTestCase_028535_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028535_2 "ewclass_32_bits.rgba8_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028535, VkglTestCase_028535_1, VkglTestCase_028535_2);

#define VkglTestCase_028536_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028536_2 "ass_32_bits.rgba8_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028536, VkglTestCase_028536_1, VkglTestCase_028536_2);

#define VkglTestCase_028537_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028537_2 "lass_32_bits.rgba8_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028537, VkglTestCase_028537_1, VkglTestCase_028537_2);
