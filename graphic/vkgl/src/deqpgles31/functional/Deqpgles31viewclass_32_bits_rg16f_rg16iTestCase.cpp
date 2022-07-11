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

#define VkglTestCase_027472_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027472_2 "iewclass_32_bits.rg16f_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027472, VkglTestCase_027472_1, VkglTestCase_027472_2);

#define VkglTestCase_027473_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027473_2 "iewclass_32_bits.rg16f_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027473, VkglTestCase_027473_1, VkglTestCase_027473_2);

#define VkglTestCase_027474_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027474_2 "viewclass_32_bits.rg16f_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027474, VkglTestCase_027474_1, VkglTestCase_027474_2);

#define VkglTestCase_027475_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027475_2 "class_32_bits.rg16f_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027475, VkglTestCase_027475_1, VkglTestCase_027475_2);

#define VkglTestCase_027476_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027476_2 "wclass_32_bits.rg16f_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027476, VkglTestCase_027476_1, VkglTestCase_027476_2);

#define VkglTestCase_027477_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027477_2 "iewclass_32_bits.rg16f_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027477, VkglTestCase_027477_1, VkglTestCase_027477_2);

#define VkglTestCase_027478_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027478_2 "iewclass_32_bits.rg16f_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027478, VkglTestCase_027478_1, VkglTestCase_027478_2);

#define VkglTestCase_027479_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027479_2 "viewclass_32_bits.rg16f_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027479, VkglTestCase_027479_1, VkglTestCase_027479_2);

#define VkglTestCase_027480_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027480_2 "class_32_bits.rg16f_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027480, VkglTestCase_027480_1, VkglTestCase_027480_2);

#define VkglTestCase_027481_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027481_2 "wclass_32_bits.rg16f_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027481, VkglTestCase_027481_1, VkglTestCase_027481_2);

#define VkglTestCase_027482_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027482_2 "viewclass_32_bits.rg16f_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027482, VkglTestCase_027482_1, VkglTestCase_027482_2);

#define VkglTestCase_027483_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027483_2 "viewclass_32_bits.rg16f_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027483, VkglTestCase_027483_1, VkglTestCase_027483_2);

#define VkglTestCase_027484_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027484_2 ".viewclass_32_bits.rg16f_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027484, VkglTestCase_027484_1, VkglTestCase_027484_2);

#define VkglTestCase_027485_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027485_2 "wclass_32_bits.rg16f_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027485, VkglTestCase_027485_1, VkglTestCase_027485_2);

#define VkglTestCase_027486_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027486_2 "ewclass_32_bits.rg16f_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027486, VkglTestCase_027486_1, VkglTestCase_027486_2);

#define VkglTestCase_027487_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027487_2 "class_32_bits.rg16f_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027487, VkglTestCase_027487_1, VkglTestCase_027487_2);

#define VkglTestCase_027488_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027488_2 "class_32_bits.rg16f_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027488, VkglTestCase_027488_1, VkglTestCase_027488_2);

#define VkglTestCase_027489_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027489_2 "wclass_32_bits.rg16f_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027489, VkglTestCase_027489_1, VkglTestCase_027489_2);

#define VkglTestCase_027490_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027490_2 "ss_32_bits.rg16f_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027490, VkglTestCase_027490_1, VkglTestCase_027490_2);

#define VkglTestCase_027491_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027491_2 "ass_32_bits.rg16f_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027491, VkglTestCase_027491_1, VkglTestCase_027491_2);
