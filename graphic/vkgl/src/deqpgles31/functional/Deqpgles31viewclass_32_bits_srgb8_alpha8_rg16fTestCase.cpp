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

#define VkglTestCase_030680_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030680_2 "lass_32_bits.srgb8_alpha8_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030680, VkglTestCase_030680_1, VkglTestCase_030680_2);

#define VkglTestCase_030681_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030681_2 "lass_32_bits.srgb8_alpha8_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030681, VkglTestCase_030681_1, VkglTestCase_030681_2);

#define VkglTestCase_030682_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030682_2 "class_32_bits.srgb8_alpha8_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030682, VkglTestCase_030682_1, VkglTestCase_030682_2);

#define VkglTestCase_030683_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030683_2 "s_32_bits.srgb8_alpha8_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030683, VkglTestCase_030683_1, VkglTestCase_030683_2);

#define VkglTestCase_030684_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030684_2 "lass_32_bits.srgb8_alpha8_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030684, VkglTestCase_030684_1, VkglTestCase_030684_2);

#define VkglTestCase_030685_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030685_2 "lass_32_bits.srgb8_alpha8_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030685, VkglTestCase_030685_1, VkglTestCase_030685_2);

#define VkglTestCase_030686_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030686_2 "class_32_bits.srgb8_alpha8_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030686, VkglTestCase_030686_1, VkglTestCase_030686_2);

#define VkglTestCase_030687_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030687_2 "s_32_bits.srgb8_alpha8_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030687, VkglTestCase_030687_1, VkglTestCase_030687_2);

#define VkglTestCase_030688_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030688_2 "class_32_bits.srgb8_alpha8_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030688, VkglTestCase_030688_1, VkglTestCase_030688_2);

#define VkglTestCase_030689_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030689_2 "class_32_bits.srgb8_alpha8_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030689, VkglTestCase_030689_1, VkglTestCase_030689_2);

#define VkglTestCase_030690_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030690_2 "wclass_32_bits.srgb8_alpha8_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030690, VkglTestCase_030690_1, VkglTestCase_030690_2);

#define VkglTestCase_030691_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030691_2 "ss_32_bits.srgb8_alpha8_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030691, VkglTestCase_030691_1, VkglTestCase_030691_2);

#define VkglTestCase_030692_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030692_2 "s_32_bits.srgb8_alpha8_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030692, VkglTestCase_030692_1, VkglTestCase_030692_2);

#define VkglTestCase_030693_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030693_2 "s_32_bits.srgb8_alpha8_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030693, VkglTestCase_030693_1, VkglTestCase_030693_2);

#define VkglTestCase_030694_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030694_2 "ss_32_bits.srgb8_alpha8_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030694, VkglTestCase_030694_1, VkglTestCase_030694_2);

#define VkglTestCase_030695_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030695_2 "2_bits.srgb8_alpha8_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030695, VkglTestCase_030695_1, VkglTestCase_030695_2);

#define VkglTestCase_030696_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030696_2 "ass_32_bits.srgb8_alpha8_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030696, VkglTestCase_030696_1, VkglTestCase_030696_2);

#define VkglTestCase_030697_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030697_2 "ass_32_bits.srgb8_alpha8_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030697, VkglTestCase_030697_1, VkglTestCase_030697_2);

#define VkglTestCase_030698_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030698_2 "lass_32_bits.srgb8_alpha8_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030698, VkglTestCase_030698_1, VkglTestCase_030698_2);

#define VkglTestCase_030699_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030699_2 "_32_bits.srgb8_alpha8_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030699, VkglTestCase_030699_1, VkglTestCase_030699_2);
