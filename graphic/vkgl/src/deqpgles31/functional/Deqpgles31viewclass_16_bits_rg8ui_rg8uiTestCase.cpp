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

#define VkglTestCase_032545_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032545_2 "iewclass_16_bits.rg8ui_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032545, VkglTestCase_032545_1, VkglTestCase_032545_2);

#define VkglTestCase_032546_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032546_2 "iewclass_16_bits.rg8ui_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032546, VkglTestCase_032546_1, VkglTestCase_032546_2);

#define VkglTestCase_032547_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032547_2 "viewclass_16_bits.rg8ui_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032547, VkglTestCase_032547_1, VkglTestCase_032547_2);

#define VkglTestCase_032548_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032548_2 "class_16_bits.rg8ui_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032548, VkglTestCase_032548_1, VkglTestCase_032548_2);

#define VkglTestCase_032549_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032549_2 "wclass_16_bits.rg8ui_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032549, VkglTestCase_032549_1, VkglTestCase_032549_2);

#define VkglTestCase_032550_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032550_2 "iewclass_16_bits.rg8ui_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032550, VkglTestCase_032550_1, VkglTestCase_032550_2);

#define VkglTestCase_032551_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032551_2 "iewclass_16_bits.rg8ui_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032551, VkglTestCase_032551_1, VkglTestCase_032551_2);

#define VkglTestCase_032552_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032552_2 "viewclass_16_bits.rg8ui_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032552, VkglTestCase_032552_1, VkglTestCase_032552_2);

#define VkglTestCase_032553_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032553_2 "class_16_bits.rg8ui_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032553, VkglTestCase_032553_1, VkglTestCase_032553_2);

#define VkglTestCase_032554_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032554_2 "wclass_16_bits.rg8ui_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032554, VkglTestCase_032554_1, VkglTestCase_032554_2);

#define VkglTestCase_032555_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032555_2 "viewclass_16_bits.rg8ui_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032555, VkglTestCase_032555_1, VkglTestCase_032555_2);

#define VkglTestCase_032556_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032556_2 "viewclass_16_bits.rg8ui_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032556, VkglTestCase_032556_1, VkglTestCase_032556_2);

#define VkglTestCase_032557_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032557_2 ".viewclass_16_bits.rg8ui_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032557, VkglTestCase_032557_1, VkglTestCase_032557_2);

#define VkglTestCase_032558_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032558_2 "wclass_16_bits.rg8ui_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032558, VkglTestCase_032558_1, VkglTestCase_032558_2);

#define VkglTestCase_032559_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032559_2 "ewclass_16_bits.rg8ui_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032559, VkglTestCase_032559_1, VkglTestCase_032559_2);

#define VkglTestCase_032560_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032560_2 "class_16_bits.rg8ui_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032560, VkglTestCase_032560_1, VkglTestCase_032560_2);

#define VkglTestCase_032561_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032561_2 "class_16_bits.rg8ui_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032561, VkglTestCase_032561_1, VkglTestCase_032561_2);

#define VkglTestCase_032562_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032562_2 "wclass_16_bits.rg8ui_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032562, VkglTestCase_032562_1, VkglTestCase_032562_2);

#define VkglTestCase_032563_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032563_2 "ss_16_bits.rg8ui_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032563, VkglTestCase_032563_1, VkglTestCase_032563_2);

#define VkglTestCase_032564_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032564_2 "ass_16_bits.rg8ui_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032564, VkglTestCase_032564_1, VkglTestCase_032564_2);

#define VkglTestCase_032565_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032565_2 "wclass_16_bits.rg8ui_rg8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032565, VkglTestCase_032565_1, VkglTestCase_032565_2);

#define VkglTestCase_032566_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032566_2 "wclass_16_bits.rg8ui_rg8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032566, VkglTestCase_032566_1, VkglTestCase_032566_2);

#define VkglTestCase_032567_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032567_2 "ewclass_16_bits.rg8ui_rg8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032567, VkglTestCase_032567_1, VkglTestCase_032567_2);

#define VkglTestCase_032568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032568_2 "ass_16_bits.rg8ui_rg8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032568, VkglTestCase_032568_1, VkglTestCase_032568_2);

#define VkglTestCase_032569_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032569_2 "class_16_bits.rg8ui_rg8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032569, VkglTestCase_032569_1, VkglTestCase_032569_2);
