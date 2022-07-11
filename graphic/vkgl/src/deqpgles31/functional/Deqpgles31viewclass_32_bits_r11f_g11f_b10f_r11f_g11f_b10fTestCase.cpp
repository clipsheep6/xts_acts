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

#define VkglTestCase_029538_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029538_2 "32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029538, VkglTestCase_029538_1, VkglTestCase_029538_2);

#define VkglTestCase_029539_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029539_2 "32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029539, VkglTestCase_029539_1, VkglTestCase_029539_2);

#define VkglTestCase_029540_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029540_2 "_32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029540, VkglTestCase_029540_1, VkglTestCase_029540_2);

#define VkglTestCase_029541_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029541_2 "bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029541, VkglTestCase_029541_1, VkglTestCase_029541_2);

#define VkglTestCase_029542_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029542_2 "32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029542, VkglTestCase_029542_1, VkglTestCase_029542_2);

#define VkglTestCase_029543_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029543_2 "32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029543, VkglTestCase_029543_1, VkglTestCase_029543_2);

#define VkglTestCase_029544_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029544_2 "_32_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029544, VkglTestCase_029544_1, VkglTestCase_029544_2);

#define VkglTestCase_029545_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029545_2 "bits.r11f_g11f_b10f_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029545, VkglTestCase_029545_1, VkglTestCase_029545_2);

#define VkglTestCase_029546_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029546_2 "_32_bits.r11f_g11f_b10f_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029546, VkglTestCase_029546_1, VkglTestCase_029546_2);

#define VkglTestCase_029547_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029547_2 "_32_bits.r11f_g11f_b10f_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029547, VkglTestCase_029547_1, VkglTestCase_029547_2);

#define VkglTestCase_029548_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029548_2 "s_32_bits.r11f_g11f_b10f_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029548, VkglTestCase_029548_1, VkglTestCase_029548_2);

#define VkglTestCase_029549_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029549_2 "_bits.r11f_g11f_b10f_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029549, VkglTestCase_029549_1, VkglTestCase_029549_2);

#define VkglTestCase_029550_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029550_2 "bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029550, VkglTestCase_029550_1, VkglTestCase_029550_2);

#define VkglTestCase_029551_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029551_2 "bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029551, VkglTestCase_029551_1, VkglTestCase_029551_2);

#define VkglTestCase_029552_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029552_2 "_bits.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029552, VkglTestCase_029552_1, VkglTestCase_029552_2);

#define VkglTestCase_029553_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_bit"
#define VkglTestCase_029553_2 "s.r11f_g11f_b10f_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029553, VkglTestCase_029553_1, VkglTestCase_029553_2);
