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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030195_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030195_2 "ss_32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030195, VkglTestCase_030195_1, VkglTestCase_030195_2);

#define VkglTestCase_030196_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030196_2 "ss_32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030196, VkglTestCase_030196_1, VkglTestCase_030196_2);

#define VkglTestCase_030197_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030197_2 "ass_32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030197, VkglTestCase_030197_1, VkglTestCase_030197_2);

#define VkglTestCase_030198_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030198_2 "32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030198, VkglTestCase_030198_1, VkglTestCase_030198_2);

#define VkglTestCase_030199_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030199_2 "ss_32_bits.rgb10_a2_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030199, VkglTestCase_030199_1, VkglTestCase_030199_2);

#define VkglTestCase_030200_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030200_2 "ss_32_bits.rgb10_a2_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030200, VkglTestCase_030200_1, VkglTestCase_030200_2);

#define VkglTestCase_030201_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030201_2 "ass_32_bits.rgb10_a2_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030201, VkglTestCase_030201_1, VkglTestCase_030201_2);

#define VkglTestCase_030202_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030202_2 "32_bits.rgb10_a2_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030202, VkglTestCase_030202_1, VkglTestCase_030202_2);

#define VkglTestCase_030203_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030203_2 "ass_32_bits.rgb10_a2_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030203, VkglTestCase_030203_1, VkglTestCase_030203_2);

#define VkglTestCase_030204_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030204_2 "ass_32_bits.rgb10_a2_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030204, VkglTestCase_030204_1, VkglTestCase_030204_2);

#define VkglTestCase_030205_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030205_2 "lass_32_bits.rgb10_a2_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030205, VkglTestCase_030205_1, VkglTestCase_030205_2);

#define VkglTestCase_030206_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030206_2 "_32_bits.rgb10_a2_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030206, VkglTestCase_030206_1, VkglTestCase_030206_2);

#define VkglTestCase_030207_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030207_2 "32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030207, VkglTestCase_030207_1, VkglTestCase_030207_2);

#define VkglTestCase_030208_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030208_2 "32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030208, VkglTestCase_030208_1, VkglTestCase_030208_2);

#define VkglTestCase_030209_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030209_2 "_32_bits.rgb10_a2_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030209, VkglTestCase_030209_1, VkglTestCase_030209_2);

#define VkglTestCase_030210_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030210_2 "bits.rgb10_a2_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030210, VkglTestCase_030210_1, VkglTestCase_030210_2);

#define VkglTestCase_030211_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030211_2 "_32_bits.rgb10_a2_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030211, VkglTestCase_030211_1, VkglTestCase_030211_2);

#define VkglTestCase_030212_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030212_2 "_32_bits.rgb10_a2_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030212, VkglTestCase_030212_1, VkglTestCase_030212_2);

#define VkglTestCase_030213_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030213_2 "s_32_bits.rgb10_a2_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030213, VkglTestCase_030213_1, VkglTestCase_030213_2);

#define VkglTestCase_030214_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030214_2 "_bits.rgb10_a2_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030214, VkglTestCase_030214_1, VkglTestCase_030214_2);
