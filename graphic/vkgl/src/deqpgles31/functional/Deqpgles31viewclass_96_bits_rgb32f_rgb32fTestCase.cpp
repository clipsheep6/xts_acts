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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025444_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025444_2 "ewclass_96_bits.rgb32f_rgb32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025444, VkglTestCase_025444_1, VkglTestCase_025444_2);

#define VkglTestCase_025445_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025445_2 "ewclass_96_bits.rgb32f_rgb32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025445, VkglTestCase_025445_1, VkglTestCase_025445_2);

#define VkglTestCase_025446_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025446_2 "iewclass_96_bits.rgb32f_rgb32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025446, VkglTestCase_025446_1, VkglTestCase_025446_2);

#define VkglTestCase_025447_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025447_2 "lass_96_bits.rgb32f_rgb32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025447, VkglTestCase_025447_1, VkglTestCase_025447_2);

#define VkglTestCase_025448_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025448_2 "ewclass_96_bits.rgb32f_rgb32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025448, VkglTestCase_025448_1, VkglTestCase_025448_2);

#define VkglTestCase_025449_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025449_2 "ewclass_96_bits.rgb32f_rgb32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025449, VkglTestCase_025449_1, VkglTestCase_025449_2);

#define VkglTestCase_025450_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025450_2 "iewclass_96_bits.rgb32f_rgb32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025450, VkglTestCase_025450_1, VkglTestCase_025450_2);

#define VkglTestCase_025451_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025451_2 "lass_96_bits.rgb32f_rgb32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025451, VkglTestCase_025451_1, VkglTestCase_025451_2);

#define VkglTestCase_025452_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025452_2 "iewclass_96_bits.rgb32f_rgb32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025452, VkglTestCase_025452_1, VkglTestCase_025452_2);

#define VkglTestCase_025453_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025453_2 "iewclass_96_bits.rgb32f_rgb32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025453, VkglTestCase_025453_1, VkglTestCase_025453_2);

#define VkglTestCase_025454_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025454_2 "viewclass_96_bits.rgb32f_rgb32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025454, VkglTestCase_025454_1, VkglTestCase_025454_2);

#define VkglTestCase_025455_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025455_2 "class_96_bits.rgb32f_rgb32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025455, VkglTestCase_025455_1, VkglTestCase_025455_2);

#define VkglTestCase_025456_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025456_2 "lass_96_bits.rgb32f_rgb32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025456, VkglTestCase_025456_1, VkglTestCase_025456_2);

#define VkglTestCase_025457_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025457_2 "lass_96_bits.rgb32f_rgb32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025457, VkglTestCase_025457_1, VkglTestCase_025457_2);

#define VkglTestCase_025458_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025458_2 "class_96_bits.rgb32f_rgb32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025458, VkglTestCase_025458_1, VkglTestCase_025458_2);

#define VkglTestCase_025459_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025459_2 "s_96_bits.rgb32f_rgb32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025459, VkglTestCase_025459_1, VkglTestCase_025459_2);
