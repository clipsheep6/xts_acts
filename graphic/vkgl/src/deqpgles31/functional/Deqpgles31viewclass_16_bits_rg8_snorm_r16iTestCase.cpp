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

#define VkglTestCase_032606_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032606_2 "wclass_16_bits.rg8_snorm_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032606, VkglTestCase_032606_1, VkglTestCase_032606_2);

#define VkglTestCase_032607_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032607_2 "wclass_16_bits.rg8_snorm_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032607, VkglTestCase_032607_1, VkglTestCase_032607_2);

#define VkglTestCase_032608_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032608_2 "ewclass_16_bits.rg8_snorm_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032608, VkglTestCase_032608_1, VkglTestCase_032608_2);

#define VkglTestCase_032609_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032609_2 "ass_16_bits.rg8_snorm_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032609, VkglTestCase_032609_1, VkglTestCase_032609_2);

#define VkglTestCase_032610_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032610_2 "class_16_bits.rg8_snorm_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032610, VkglTestCase_032610_1, VkglTestCase_032610_2);

#define VkglTestCase_032611_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032611_2 "wclass_16_bits.rg8_snorm_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032611, VkglTestCase_032611_1, VkglTestCase_032611_2);

#define VkglTestCase_032612_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032612_2 "wclass_16_bits.rg8_snorm_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032612, VkglTestCase_032612_1, VkglTestCase_032612_2);

#define VkglTestCase_032613_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032613_2 "ewclass_16_bits.rg8_snorm_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032613, VkglTestCase_032613_1, VkglTestCase_032613_2);

#define VkglTestCase_032614_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032614_2 "ass_16_bits.rg8_snorm_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032614, VkglTestCase_032614_1, VkglTestCase_032614_2);

#define VkglTestCase_032615_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032615_2 "class_16_bits.rg8_snorm_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032615, VkglTestCase_032615_1, VkglTestCase_032615_2);

#define VkglTestCase_032616_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032616_2 "ewclass_16_bits.rg8_snorm_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032616, VkglTestCase_032616_1, VkglTestCase_032616_2);

#define VkglTestCase_032617_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032617_2 "ewclass_16_bits.rg8_snorm_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032617, VkglTestCase_032617_1, VkglTestCase_032617_2);

#define VkglTestCase_032618_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032618_2 "iewclass_16_bits.rg8_snorm_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032618, VkglTestCase_032618_1, VkglTestCase_032618_2);

#define VkglTestCase_032619_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032619_2 "lass_16_bits.rg8_snorm_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032619, VkglTestCase_032619_1, VkglTestCase_032619_2);

#define VkglTestCase_032620_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032620_2 "wclass_16_bits.rg8_snorm_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032620, VkglTestCase_032620_1, VkglTestCase_032620_2);

#define VkglTestCase_032621_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032621_2 "ass_16_bits.rg8_snorm_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032621, VkglTestCase_032621_1, VkglTestCase_032621_2);

#define VkglTestCase_032622_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032622_2 "ass_16_bits.rg8_snorm_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032622, VkglTestCase_032622_1, VkglTestCase_032622_2);

#define VkglTestCase_032623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032623_2 "lass_16_bits.rg8_snorm_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032623, VkglTestCase_032623_1, VkglTestCase_032623_2);

#define VkglTestCase_032624_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032624_2 "_16_bits.rg8_snorm_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032624, VkglTestCase_032624_1, VkglTestCase_032624_2);

#define VkglTestCase_032625_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032625_2 "ss_16_bits.rg8_snorm_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032625, VkglTestCase_032625_1, VkglTestCase_032625_2);
