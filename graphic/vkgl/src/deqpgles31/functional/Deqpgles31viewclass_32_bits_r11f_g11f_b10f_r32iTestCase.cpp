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

#define VkglTestCase_029398_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029398_2 "lass_32_bits.r11f_g11f_b10f_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029398, VkglTestCase_029398_1, VkglTestCase_029398_2);

#define VkglTestCase_029399_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029399_2 "lass_32_bits.r11f_g11f_b10f_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029399, VkglTestCase_029399_1, VkglTestCase_029399_2);

#define VkglTestCase_029400_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029400_2 "class_32_bits.r11f_g11f_b10f_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029400, VkglTestCase_029400_1, VkglTestCase_029400_2);

#define VkglTestCase_029401_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029401_2 "s_32_bits.r11f_g11f_b10f_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029401, VkglTestCase_029401_1, VkglTestCase_029401_2);

#define VkglTestCase_029402_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029402_2 "ss_32_bits.r11f_g11f_b10f_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029402, VkglTestCase_029402_1, VkglTestCase_029402_2);

#define VkglTestCase_029403_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029403_2 "lass_32_bits.r11f_g11f_b10f_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029403, VkglTestCase_029403_1, VkglTestCase_029403_2);

#define VkglTestCase_029404_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029404_2 "lass_32_bits.r11f_g11f_b10f_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029404, VkglTestCase_029404_1, VkglTestCase_029404_2);

#define VkglTestCase_029405_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029405_2 "class_32_bits.r11f_g11f_b10f_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029405, VkglTestCase_029405_1, VkglTestCase_029405_2);

#define VkglTestCase_029406_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029406_2 "s_32_bits.r11f_g11f_b10f_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029406, VkglTestCase_029406_1, VkglTestCase_029406_2);

#define VkglTestCase_029407_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029407_2 "ss_32_bits.r11f_g11f_b10f_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029407, VkglTestCase_029407_1, VkglTestCase_029407_2);

#define VkglTestCase_029408_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029408_2 "class_32_bits.r11f_g11f_b10f_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029408, VkglTestCase_029408_1, VkglTestCase_029408_2);

#define VkglTestCase_029409_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029409_2 "class_32_bits.r11f_g11f_b10f_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029409, VkglTestCase_029409_1, VkglTestCase_029409_2);

#define VkglTestCase_029410_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029410_2 "wclass_32_bits.r11f_g11f_b10f_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029410, VkglTestCase_029410_1, VkglTestCase_029410_2);

#define VkglTestCase_029411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029411_2 "ss_32_bits.r11f_g11f_b10f_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029411, VkglTestCase_029411_1, VkglTestCase_029411_2);

#define VkglTestCase_029412_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029412_2 "ass_32_bits.r11f_g11f_b10f_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029412, VkglTestCase_029412_1, VkglTestCase_029412_2);

#define VkglTestCase_029413_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029413_2 "s_32_bits.r11f_g11f_b10f_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029413, VkglTestCase_029413_1, VkglTestCase_029413_2);

#define VkglTestCase_029414_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029414_2 "s_32_bits.r11f_g11f_b10f_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029414, VkglTestCase_029414_1, VkglTestCase_029414_2);

#define VkglTestCase_029415_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029415_2 "ss_32_bits.r11f_g11f_b10f_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029415, VkglTestCase_029415_1, VkglTestCase_029415_2);

#define VkglTestCase_029416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029416_2 "2_bits.r11f_g11f_b10f_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029416, VkglTestCase_029416_1, VkglTestCase_029416_2);

#define VkglTestCase_029417_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029417_2 "32_bits.r11f_g11f_b10f_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029417, VkglTestCase_029417_1, VkglTestCase_029417_2);
