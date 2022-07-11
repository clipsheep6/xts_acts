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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032330_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032330_2 "viewclass_16_bits.rg8i_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032330, VkglTestCase_032330_1, VkglTestCase_032330_2);

#define VkglTestCase_032331_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032331_2 "viewclass_16_bits.rg8i_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032331, VkglTestCase_032331_1, VkglTestCase_032331_2);

#define VkglTestCase_032332_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032332_2 ".viewclass_16_bits.rg8i_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032332, VkglTestCase_032332_1, VkglTestCase_032332_2);

#define VkglTestCase_032333_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032333_2 "wclass_16_bits.rg8i_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032333, VkglTestCase_032333_1, VkglTestCase_032333_2);

#define VkglTestCase_032334_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032334_2 "iewclass_16_bits.rg8i_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032334, VkglTestCase_032334_1, VkglTestCase_032334_2);

#define VkglTestCase_032335_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032335_2 "viewclass_16_bits.rg8i_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032335, VkglTestCase_032335_1, VkglTestCase_032335_2);

#define VkglTestCase_032336_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032336_2 "viewclass_16_bits.rg8i_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032336, VkglTestCase_032336_1, VkglTestCase_032336_2);

#define VkglTestCase_032337_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032337_2 ".viewclass_16_bits.rg8i_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032337, VkglTestCase_032337_1, VkglTestCase_032337_2);

#define VkglTestCase_032338_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032338_2 "wclass_16_bits.rg8i_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032338, VkglTestCase_032338_1, VkglTestCase_032338_2);

#define VkglTestCase_032339_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032339_2 "iewclass_16_bits.rg8i_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032339, VkglTestCase_032339_1, VkglTestCase_032339_2);

#define VkglTestCase_032340_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032340_2 ".viewclass_16_bits.rg8i_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032340, VkglTestCase_032340_1, VkglTestCase_032340_2);

#define VkglTestCase_032341_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032341_2 ".viewclass_16_bits.rg8i_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032341, VkglTestCase_032341_1, VkglTestCase_032341_2);

#define VkglTestCase_032342_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032342_2 "d.viewclass_16_bits.rg8i_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032342, VkglTestCase_032342_1, VkglTestCase_032342_2);

#define VkglTestCase_032343_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032343_2 "ewclass_16_bits.rg8i_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032343, VkglTestCase_032343_1, VkglTestCase_032343_2);

#define VkglTestCase_032344_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032344_2 "viewclass_16_bits.rg8i_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032344, VkglTestCase_032344_1, VkglTestCase_032344_2);

#define VkglTestCase_032345_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032345_2 "wclass_16_bits.rg8i_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032345, VkglTestCase_032345_1, VkglTestCase_032345_2);

#define VkglTestCase_032346_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032346_2 "wclass_16_bits.rg8i_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032346, VkglTestCase_032346_1, VkglTestCase_032346_2);

#define VkglTestCase_032347_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032347_2 "ewclass_16_bits.rg8i_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032347, VkglTestCase_032347_1, VkglTestCase_032347_2);

#define VkglTestCase_032348_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032348_2 "ass_16_bits.rg8i_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032348, VkglTestCase_032348_1, VkglTestCase_032348_2);

#define VkglTestCase_032349_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032349_2 "class_16_bits.rg8i_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032349, VkglTestCase_032349_1, VkglTestCase_032349_2);

#define VkglTestCase_032350_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032350_2 "iewclass_16_bits.rg8i_rg8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032350, VkglTestCase_032350_1, VkglTestCase_032350_2);

#define VkglTestCase_032351_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032351_2 "iewclass_16_bits.rg8i_rg8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032351, VkglTestCase_032351_1, VkglTestCase_032351_2);

#define VkglTestCase_032352_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032352_2 "viewclass_16_bits.rg8i_rg8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032352, VkglTestCase_032352_1, VkglTestCase_032352_2);

#define VkglTestCase_032353_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032353_2 "class_16_bits.rg8i_rg8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032353, VkglTestCase_032353_1, VkglTestCase_032353_2);

#define VkglTestCase_032354_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032354_2 "wclass_16_bits.rg8i_rg8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032354, VkglTestCase_032354_1, VkglTestCase_032354_2);
