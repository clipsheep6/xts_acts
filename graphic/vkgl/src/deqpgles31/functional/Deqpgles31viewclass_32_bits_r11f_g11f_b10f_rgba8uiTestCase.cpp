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

#define VkglTestCase_029518_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029518_2 "ss_32_bits.r11f_g11f_b10f_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029518, VkglTestCase_029518_1, VkglTestCase_029518_2);

#define VkglTestCase_029519_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029519_2 "ss_32_bits.r11f_g11f_b10f_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029519, VkglTestCase_029519_1, VkglTestCase_029519_2);

#define VkglTestCase_029520_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029520_2 "ass_32_bits.r11f_g11f_b10f_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029520, VkglTestCase_029520_1, VkglTestCase_029520_2);

#define VkglTestCase_029521_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029521_2 "32_bits.r11f_g11f_b10f_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029521, VkglTestCase_029521_1, VkglTestCase_029521_2);

#define VkglTestCase_029522_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029522_2 "s_32_bits.r11f_g11f_b10f_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029522, VkglTestCase_029522_1, VkglTestCase_029522_2);

#define VkglTestCase_029523_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029523_2 "ss_32_bits.r11f_g11f_b10f_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029523, VkglTestCase_029523_1, VkglTestCase_029523_2);

#define VkglTestCase_029524_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029524_2 "ss_32_bits.r11f_g11f_b10f_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029524, VkglTestCase_029524_1, VkglTestCase_029524_2);

#define VkglTestCase_029525_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029525_2 "ass_32_bits.r11f_g11f_b10f_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029525, VkglTestCase_029525_1, VkglTestCase_029525_2);

#define VkglTestCase_029526_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029526_2 "32_bits.r11f_g11f_b10f_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029526, VkglTestCase_029526_1, VkglTestCase_029526_2);

#define VkglTestCase_029527_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029527_2 "s_32_bits.r11f_g11f_b10f_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029527, VkglTestCase_029527_1, VkglTestCase_029527_2);

#define VkglTestCase_029528_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029528_2 "ass_32_bits.r11f_g11f_b10f_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029528, VkglTestCase_029528_1, VkglTestCase_029528_2);

#define VkglTestCase_029529_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029529_2 "ass_32_bits.r11f_g11f_b10f_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029529, VkglTestCase_029529_1, VkglTestCase_029529_2);

#define VkglTestCase_029530_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029530_2 "lass_32_bits.r11f_g11f_b10f_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029530, VkglTestCase_029530_1, VkglTestCase_029530_2);

#define VkglTestCase_029531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029531_2 "_32_bits.r11f_g11f_b10f_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029531, VkglTestCase_029531_1, VkglTestCase_029531_2);

#define VkglTestCase_029532_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029532_2 "ss_32_bits.r11f_g11f_b10f_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029532, VkglTestCase_029532_1, VkglTestCase_029532_2);

#define VkglTestCase_029533_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029533_2 "32_bits.r11f_g11f_b10f_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029533, VkglTestCase_029533_1, VkglTestCase_029533_2);

#define VkglTestCase_029534_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029534_2 "32_bits.r11f_g11f_b10f_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029534, VkglTestCase_029534_1, VkglTestCase_029534_2);

#define VkglTestCase_029535_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029535_2 "_32_bits.r11f_g11f_b10f_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029535, VkglTestCase_029535_1, VkglTestCase_029535_2);

#define VkglTestCase_029536_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029536_2 "bits.r11f_g11f_b10f_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029536, VkglTestCase_029536_1, VkglTestCase_029536_2);

#define VkglTestCase_029537_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029537_2 "2_bits.r11f_g11f_b10f_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029537, VkglTestCase_029537_1, VkglTestCase_029537_2);
