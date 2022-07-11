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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027492_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027492_2 "ewclass_32_bits.rg16f_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027492, VkglTestCase_027492_1, VkglTestCase_027492_2);

#define VkglTestCase_027493_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027493_2 "ewclass_32_bits.rg16f_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027493, VkglTestCase_027493_1, VkglTestCase_027493_2);

#define VkglTestCase_027494_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027494_2 "iewclass_32_bits.rg16f_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027494, VkglTestCase_027494_1, VkglTestCase_027494_2);

#define VkglTestCase_027495_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027495_2 "lass_32_bits.rg16f_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027495, VkglTestCase_027495_1, VkglTestCase_027495_2);

#define VkglTestCase_027496_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027496_2 "wclass_32_bits.rg16f_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027496, VkglTestCase_027496_1, VkglTestCase_027496_2);

#define VkglTestCase_027497_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027497_2 "ewclass_32_bits.rg16f_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027497, VkglTestCase_027497_1, VkglTestCase_027497_2);

#define VkglTestCase_027498_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027498_2 "ewclass_32_bits.rg16f_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027498, VkglTestCase_027498_1, VkglTestCase_027498_2);

#define VkglTestCase_027499_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027499_2 "iewclass_32_bits.rg16f_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027499, VkglTestCase_027499_1, VkglTestCase_027499_2);

#define VkglTestCase_027500_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027500_2 "lass_32_bits.rg16f_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027500, VkglTestCase_027500_1, VkglTestCase_027500_2);

#define VkglTestCase_027501_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027501_2 "wclass_32_bits.rg16f_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027501, VkglTestCase_027501_1, VkglTestCase_027501_2);

#define VkglTestCase_027502_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027502_2 "iewclass_32_bits.rg16f_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027502, VkglTestCase_027502_1, VkglTestCase_027502_2);

#define VkglTestCase_027503_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027503_2 "iewclass_32_bits.rg16f_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027503, VkglTestCase_027503_1, VkglTestCase_027503_2);

#define VkglTestCase_027504_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027504_2 "viewclass_32_bits.rg16f_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027504, VkglTestCase_027504_1, VkglTestCase_027504_2);

#define VkglTestCase_027505_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027505_2 "class_32_bits.rg16f_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027505, VkglTestCase_027505_1, VkglTestCase_027505_2);

#define VkglTestCase_027506_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027506_2 "ewclass_32_bits.rg16f_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027506, VkglTestCase_027506_1, VkglTestCase_027506_2);

#define VkglTestCase_027507_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027507_2 "lass_32_bits.rg16f_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027507, VkglTestCase_027507_1, VkglTestCase_027507_2);

#define VkglTestCase_027508_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027508_2 "lass_32_bits.rg16f_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027508, VkglTestCase_027508_1, VkglTestCase_027508_2);

#define VkglTestCase_027509_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027509_2 "class_32_bits.rg16f_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027509, VkglTestCase_027509_1, VkglTestCase_027509_2);

#define VkglTestCase_027510_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027510_2 "s_32_bits.rg16f_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027510, VkglTestCase_027510_1, VkglTestCase_027510_2);

#define VkglTestCase_027511_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027511_2 "ass_32_bits.rg16f_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027511, VkglTestCase_027511_1, VkglTestCase_027511_2);
