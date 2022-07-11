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

#define VkglTestCase_029438_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029438_2 "ass_32_bits.r11f_g11f_b10f_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029438, VkglTestCase_029438_1, VkglTestCase_029438_2);

#define VkglTestCase_029439_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029439_2 "ass_32_bits.r11f_g11f_b10f_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029439, VkglTestCase_029439_1, VkglTestCase_029439_2);

#define VkglTestCase_029440_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029440_2 "lass_32_bits.r11f_g11f_b10f_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029440, VkglTestCase_029440_1, VkglTestCase_029440_2);

#define VkglTestCase_029441_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029441_2 "_32_bits.r11f_g11f_b10f_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029441, VkglTestCase_029441_1, VkglTestCase_029441_2);

#define VkglTestCase_029442_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029442_2 "ss_32_bits.r11f_g11f_b10f_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029442, VkglTestCase_029442_1, VkglTestCase_029442_2);

#define VkglTestCase_029443_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029443_2 "ass_32_bits.r11f_g11f_b10f_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029443, VkglTestCase_029443_1, VkglTestCase_029443_2);

#define VkglTestCase_029444_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029444_2 "ass_32_bits.r11f_g11f_b10f_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029444, VkglTestCase_029444_1, VkglTestCase_029444_2);

#define VkglTestCase_029445_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029445_2 "lass_32_bits.r11f_g11f_b10f_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029445, VkglTestCase_029445_1, VkglTestCase_029445_2);

#define VkglTestCase_029446_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029446_2 "_32_bits.r11f_g11f_b10f_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029446, VkglTestCase_029446_1, VkglTestCase_029446_2);

#define VkglTestCase_029447_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029447_2 "ss_32_bits.r11f_g11f_b10f_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029447, VkglTestCase_029447_1, VkglTestCase_029447_2);

#define VkglTestCase_029448_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029448_2 "lass_32_bits.r11f_g11f_b10f_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029448, VkglTestCase_029448_1, VkglTestCase_029448_2);

#define VkglTestCase_029449_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029449_2 "lass_32_bits.r11f_g11f_b10f_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029449, VkglTestCase_029449_1, VkglTestCase_029449_2);

#define VkglTestCase_029450_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029450_2 "class_32_bits.r11f_g11f_b10f_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029450, VkglTestCase_029450_1, VkglTestCase_029450_2);

#define VkglTestCase_029451_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029451_2 "s_32_bits.r11f_g11f_b10f_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029451, VkglTestCase_029451_1, VkglTestCase_029451_2);

#define VkglTestCase_029452_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029452_2 "ass_32_bits.r11f_g11f_b10f_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029452, VkglTestCase_029452_1, VkglTestCase_029452_2);

#define VkglTestCase_029453_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029453_2 "_32_bits.r11f_g11f_b10f_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029453, VkglTestCase_029453_1, VkglTestCase_029453_2);

#define VkglTestCase_029454_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029454_2 "_32_bits.r11f_g11f_b10f_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029454, VkglTestCase_029454_1, VkglTestCase_029454_2);

#define VkglTestCase_029455_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029455_2 "s_32_bits.r11f_g11f_b10f_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029455, VkglTestCase_029455_1, VkglTestCase_029455_2);

#define VkglTestCase_029456_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029456_2 "_bits.r11f_g11f_b10f_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029456, VkglTestCase_029456_1, VkglTestCase_029456_2);

#define VkglTestCase_029457_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029457_2 "32_bits.r11f_g11f_b10f_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029457, VkglTestCase_029457_1, VkglTestCase_029457_2);
