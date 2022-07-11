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

#define VkglTestCase_027628_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027628_2 "lass_32_bits.rg16f_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027628, VkglTestCase_027628_1, VkglTestCase_027628_2);

#define VkglTestCase_027629_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027629_2 "lass_32_bits.rg16f_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027629, VkglTestCase_027629_1, VkglTestCase_027629_2);

#define VkglTestCase_027630_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027630_2 "class_32_bits.rg16f_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027630, VkglTestCase_027630_1, VkglTestCase_027630_2);

#define VkglTestCase_027631_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027631_2 "s_32_bits.rg16f_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027631, VkglTestCase_027631_1, VkglTestCase_027631_2);

#define VkglTestCase_027632_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027632_2 "ass_32_bits.rg16f_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027632, VkglTestCase_027632_1, VkglTestCase_027632_2);

#define VkglTestCase_027633_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027633_2 "lass_32_bits.rg16f_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027633, VkglTestCase_027633_1, VkglTestCase_027633_2);

#define VkglTestCase_027634_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027634_2 "lass_32_bits.rg16f_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027634, VkglTestCase_027634_1, VkglTestCase_027634_2);

#define VkglTestCase_027635_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027635_2 "class_32_bits.rg16f_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027635, VkglTestCase_027635_1, VkglTestCase_027635_2);

#define VkglTestCase_027636_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027636_2 "s_32_bits.rg16f_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027636, VkglTestCase_027636_1, VkglTestCase_027636_2);

#define VkglTestCase_027637_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027637_2 "ass_32_bits.rg16f_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027637, VkglTestCase_027637_1, VkglTestCase_027637_2);

#define VkglTestCase_027638_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027638_2 "class_32_bits.rg16f_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027638, VkglTestCase_027638_1, VkglTestCase_027638_2);

#define VkglTestCase_027639_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027639_2 "class_32_bits.rg16f_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027639, VkglTestCase_027639_1, VkglTestCase_027639_2);

#define VkglTestCase_027640_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027640_2 "wclass_32_bits.rg16f_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027640, VkglTestCase_027640_1, VkglTestCase_027640_2);

#define VkglTestCase_027641_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027641_2 "ss_32_bits.rg16f_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027641, VkglTestCase_027641_1, VkglTestCase_027641_2);

#define VkglTestCase_027642_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027642_2 "lass_32_bits.rg16f_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027642, VkglTestCase_027642_1, VkglTestCase_027642_2);

#define VkglTestCase_027643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027643_2 "s_32_bits.rg16f_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027643, VkglTestCase_027643_1, VkglTestCase_027643_2);

#define VkglTestCase_027644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027644_2 "s_32_bits.rg16f_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027644, VkglTestCase_027644_1, VkglTestCase_027644_2);

#define VkglTestCase_027645_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027645_2 "ss_32_bits.rg16f_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027645, VkglTestCase_027645_1, VkglTestCase_027645_2);

#define VkglTestCase_027646_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_027646_2 "2_bits.rg16f_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027646, VkglTestCase_027646_1, VkglTestCase_027646_2);

#define VkglTestCase_027647_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027647_2 "_32_bits.rg16f_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027647, VkglTestCase_027647_1, VkglTestCase_027647_2);
