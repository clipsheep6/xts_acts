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

#define VkglTestCase_027718_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027718_2 "iewclass_32_bits.rg16i_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027718, VkglTestCase_027718_1, VkglTestCase_027718_2);

#define VkglTestCase_027719_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027719_2 "iewclass_32_bits.rg16i_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027719, VkglTestCase_027719_1, VkglTestCase_027719_2);

#define VkglTestCase_027720_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027720_2 "viewclass_32_bits.rg16i_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027720, VkglTestCase_027720_1, VkglTestCase_027720_2);

#define VkglTestCase_027721_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027721_2 "class_32_bits.rg16i_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027721, VkglTestCase_027721_1, VkglTestCase_027721_2);

#define VkglTestCase_027722_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027722_2 "iewclass_32_bits.rg16i_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027722, VkglTestCase_027722_1, VkglTestCase_027722_2);

#define VkglTestCase_027723_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027723_2 "iewclass_32_bits.rg16i_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027723, VkglTestCase_027723_1, VkglTestCase_027723_2);

#define VkglTestCase_027724_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027724_2 "viewclass_32_bits.rg16i_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027724, VkglTestCase_027724_1, VkglTestCase_027724_2);

#define VkglTestCase_027725_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027725_2 "class_32_bits.rg16i_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027725, VkglTestCase_027725_1, VkglTestCase_027725_2);

#define VkglTestCase_027726_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027726_2 "viewclass_32_bits.rg16i_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027726, VkglTestCase_027726_1, VkglTestCase_027726_2);

#define VkglTestCase_027727_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027727_2 "viewclass_32_bits.rg16i_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027727, VkglTestCase_027727_1, VkglTestCase_027727_2);

#define VkglTestCase_027728_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027728_2 ".viewclass_32_bits.rg16i_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027728, VkglTestCase_027728_1, VkglTestCase_027728_2);

#define VkglTestCase_027729_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027729_2 "wclass_32_bits.rg16i_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027729, VkglTestCase_027729_1, VkglTestCase_027729_2);

#define VkglTestCase_027730_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027730_2 "class_32_bits.rg16i_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027730, VkglTestCase_027730_1, VkglTestCase_027730_2);

#define VkglTestCase_027731_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027731_2 "class_32_bits.rg16i_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027731, VkglTestCase_027731_1, VkglTestCase_027731_2);

#define VkglTestCase_027732_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027732_2 "wclass_32_bits.rg16i_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027732, VkglTestCase_027732_1, VkglTestCase_027732_2);

#define VkglTestCase_027733_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027733_2 "ss_32_bits.rg16i_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027733, VkglTestCase_027733_1, VkglTestCase_027733_2);

#define VkglTestCase_027734_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027734_2 "wclass_32_bits.rg16i_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027734, VkglTestCase_027734_1, VkglTestCase_027734_2);

#define VkglTestCase_027735_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027735_2 "wclass_32_bits.rg16i_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027735, VkglTestCase_027735_1, VkglTestCase_027735_2);

#define VkglTestCase_027736_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027736_2 "ewclass_32_bits.rg16i_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027736, VkglTestCase_027736_1, VkglTestCase_027736_2);

#define VkglTestCase_027737_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027737_2 "ass_32_bits.rg16i_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027737, VkglTestCase_027737_1, VkglTestCase_027737_2);
