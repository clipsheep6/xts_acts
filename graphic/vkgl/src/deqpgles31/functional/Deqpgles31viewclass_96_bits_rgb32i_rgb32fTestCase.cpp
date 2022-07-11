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

#define VkglTestCase_025492_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025492_2 "ewclass_96_bits.rgb32i_rgb32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025492, VkglTestCase_025492_1, VkglTestCase_025492_2);

#define VkglTestCase_025493_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025493_2 "ewclass_96_bits.rgb32i_rgb32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025493, VkglTestCase_025493_1, VkglTestCase_025493_2);

#define VkglTestCase_025494_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025494_2 "iewclass_96_bits.rgb32i_rgb32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025494, VkglTestCase_025494_1, VkglTestCase_025494_2);

#define VkglTestCase_025495_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025495_2 "lass_96_bits.rgb32i_rgb32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025495, VkglTestCase_025495_1, VkglTestCase_025495_2);

#define VkglTestCase_025496_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025496_2 "ewclass_96_bits.rgb32i_rgb32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025496, VkglTestCase_025496_1, VkglTestCase_025496_2);

#define VkglTestCase_025497_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025497_2 "ewclass_96_bits.rgb32i_rgb32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025497, VkglTestCase_025497_1, VkglTestCase_025497_2);

#define VkglTestCase_025498_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025498_2 "iewclass_96_bits.rgb32i_rgb32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025498, VkglTestCase_025498_1, VkglTestCase_025498_2);

#define VkglTestCase_025499_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025499_2 "lass_96_bits.rgb32i_rgb32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025499, VkglTestCase_025499_1, VkglTestCase_025499_2);

#define VkglTestCase_025500_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025500_2 "iewclass_96_bits.rgb32i_rgb32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025500, VkglTestCase_025500_1, VkglTestCase_025500_2);

#define VkglTestCase_025501_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025501_2 "iewclass_96_bits.rgb32i_rgb32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025501, VkglTestCase_025501_1, VkglTestCase_025501_2);

#define VkglTestCase_025502_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025502_2 "viewclass_96_bits.rgb32i_rgb32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025502, VkglTestCase_025502_1, VkglTestCase_025502_2);

#define VkglTestCase_025503_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025503_2 "class_96_bits.rgb32i_rgb32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025503, VkglTestCase_025503_1, VkglTestCase_025503_2);

#define VkglTestCase_025504_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025504_2 "lass_96_bits.rgb32i_rgb32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025504, VkglTestCase_025504_1, VkglTestCase_025504_2);

#define VkglTestCase_025505_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025505_2 "lass_96_bits.rgb32i_rgb32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025505, VkglTestCase_025505_1, VkglTestCase_025505_2);

#define VkglTestCase_025506_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025506_2 "class_96_bits.rgb32i_rgb32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025506, VkglTestCase_025506_1, VkglTestCase_025506_2);

#define VkglTestCase_025507_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025507_2 "s_96_bits.rgb32i_rgb32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025507, VkglTestCase_025507_1, VkglTestCase_025507_2);
