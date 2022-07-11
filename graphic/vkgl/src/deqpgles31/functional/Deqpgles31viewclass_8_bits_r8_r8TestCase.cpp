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

#define VkglTestCase_032722_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032722_2 "d.viewclass_8_bits.r8_r8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032722, VkglTestCase_032722_1, VkglTestCase_032722_2);

#define VkglTestCase_032723_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032723_2 "d.viewclass_8_bits.r8_r8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032723, VkglTestCase_032723_1, VkglTestCase_032723_2);

#define VkglTestCase_032724_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032724_2 "ed.viewclass_8_bits.r8_r8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032724, VkglTestCase_032724_1, VkglTestCase_032724_2);

#define VkglTestCase_032725_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032725_2 "iewclass_8_bits.r8_r8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032725, VkglTestCase_032725_1, VkglTestCase_032725_2);

#define VkglTestCase_032726_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032726_2 ".viewclass_8_bits.r8_r8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032726, VkglTestCase_032726_1, VkglTestCase_032726_2);

#define VkglTestCase_032727_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032727_2 "d.viewclass_8_bits.r8_r8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032727, VkglTestCase_032727_1, VkglTestCase_032727_2);

#define VkglTestCase_032728_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032728_2 "d.viewclass_8_bits.r8_r8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032728, VkglTestCase_032728_1, VkglTestCase_032728_2);

#define VkglTestCase_032729_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032729_2 "ed.viewclass_8_bits.r8_r8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032729, VkglTestCase_032729_1, VkglTestCase_032729_2);

#define VkglTestCase_032730_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032730_2 "iewclass_8_bits.r8_r8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032730, VkglTestCase_032730_1, VkglTestCase_032730_2);

#define VkglTestCase_032731_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032731_2 ".viewclass_8_bits.r8_r8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032731, VkglTestCase_032731_1, VkglTestCase_032731_2);

#define VkglTestCase_032732_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032732_2 "ed.viewclass_8_bits.r8_r8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032732, VkglTestCase_032732_1, VkglTestCase_032732_2);

#define VkglTestCase_032733_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032733_2 "ed.viewclass_8_bits.r8_r8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032733, VkglTestCase_032733_1, VkglTestCase_032733_2);

#define VkglTestCase_032734_1 "dEQP-GLES31.functional.copy_image.non_compres"
#define VkglTestCase_032734_2 "sed.viewclass_8_bits.r8_r8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032734, VkglTestCase_032734_1, VkglTestCase_032734_2);

#define VkglTestCase_032735_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032735_2 "viewclass_8_bits.r8_r8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032735, VkglTestCase_032735_1, VkglTestCase_032735_2);

#define VkglTestCase_032736_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032736_2 "d.viewclass_8_bits.r8_r8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032736, VkglTestCase_032736_1, VkglTestCase_032736_2);

#define VkglTestCase_032737_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032737_2 "iewclass_8_bits.r8_r8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032737, VkglTestCase_032737_1, VkglTestCase_032737_2);

#define VkglTestCase_032738_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032738_2 "iewclass_8_bits.r8_r8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032738, VkglTestCase_032738_1, VkglTestCase_032738_2);

#define VkglTestCase_032739_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032739_2 "viewclass_8_bits.r8_r8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032739, VkglTestCase_032739_1, VkglTestCase_032739_2);

#define VkglTestCase_032740_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032740_2 "class_8_bits.r8_r8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032740, VkglTestCase_032740_1, VkglTestCase_032740_2);

#define VkglTestCase_032741_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032741_2 "ewclass_8_bits.r8_r8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032741, VkglTestCase_032741_1, VkglTestCase_032741_2);

#define VkglTestCase_032742_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032742_2 ".viewclass_8_bits.r8_r8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032742, VkglTestCase_032742_1, VkglTestCase_032742_2);

#define VkglTestCase_032743_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032743_2 ".viewclass_8_bits.r8_r8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032743, VkglTestCase_032743_1, VkglTestCase_032743_2);

#define VkglTestCase_032744_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032744_2 "d.viewclass_8_bits.r8_r8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032744, VkglTestCase_032744_1, VkglTestCase_032744_2);

#define VkglTestCase_032745_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032745_2 "ewclass_8_bits.r8_r8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032745, VkglTestCase_032745_1, VkglTestCase_032745_2);

#define VkglTestCase_032746_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032746_2 "iewclass_8_bits.r8_r8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032746, VkglTestCase_032746_1, VkglTestCase_032746_2);
