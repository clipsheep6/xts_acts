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

#define VkglTestCase_027738_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027738_2 "iewclass_32_bits.rg16i_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027738, VkglTestCase_027738_1, VkglTestCase_027738_2);

#define VkglTestCase_027739_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027739_2 "iewclass_32_bits.rg16i_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027739, VkglTestCase_027739_1, VkglTestCase_027739_2);

#define VkglTestCase_027740_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027740_2 "viewclass_32_bits.rg16i_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027740, VkglTestCase_027740_1, VkglTestCase_027740_2);

#define VkglTestCase_027741_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027741_2 "class_32_bits.rg16i_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027741, VkglTestCase_027741_1, VkglTestCase_027741_2);

#define VkglTestCase_027742_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027742_2 "wclass_32_bits.rg16i_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027742, VkglTestCase_027742_1, VkglTestCase_027742_2);

#define VkglTestCase_027743_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027743_2 "iewclass_32_bits.rg16i_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027743, VkglTestCase_027743_1, VkglTestCase_027743_2);

#define VkglTestCase_027744_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027744_2 "iewclass_32_bits.rg16i_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027744, VkglTestCase_027744_1, VkglTestCase_027744_2);

#define VkglTestCase_027745_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027745_2 "viewclass_32_bits.rg16i_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027745, VkglTestCase_027745_1, VkglTestCase_027745_2);

#define VkglTestCase_027746_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027746_2 "class_32_bits.rg16i_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027746, VkglTestCase_027746_1, VkglTestCase_027746_2);

#define VkglTestCase_027747_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027747_2 "wclass_32_bits.rg16i_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027747, VkglTestCase_027747_1, VkglTestCase_027747_2);

#define VkglTestCase_027748_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027748_2 "viewclass_32_bits.rg16i_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027748, VkglTestCase_027748_1, VkglTestCase_027748_2);

#define VkglTestCase_027749_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027749_2 "viewclass_32_bits.rg16i_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027749, VkglTestCase_027749_1, VkglTestCase_027749_2);

#define VkglTestCase_027750_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027750_2 ".viewclass_32_bits.rg16i_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027750, VkglTestCase_027750_1, VkglTestCase_027750_2);

#define VkglTestCase_027751_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027751_2 "wclass_32_bits.rg16i_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027751, VkglTestCase_027751_1, VkglTestCase_027751_2);

#define VkglTestCase_027752_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027752_2 "ewclass_32_bits.rg16i_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027752, VkglTestCase_027752_1, VkglTestCase_027752_2);

#define VkglTestCase_027753_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027753_2 "class_32_bits.rg16i_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027753, VkglTestCase_027753_1, VkglTestCase_027753_2);

#define VkglTestCase_027754_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027754_2 "class_32_bits.rg16i_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027754, VkglTestCase_027754_1, VkglTestCase_027754_2);

#define VkglTestCase_027755_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027755_2 "wclass_32_bits.rg16i_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027755, VkglTestCase_027755_1, VkglTestCase_027755_2);

#define VkglTestCase_027756_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027756_2 "ss_32_bits.rg16i_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027756, VkglTestCase_027756_1, VkglTestCase_027756_2);

#define VkglTestCase_027757_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027757_2 "ass_32_bits.rg16i_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027757, VkglTestCase_027757_1, VkglTestCase_027757_2);

#define VkglTestCase_027758_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027758_2 "wclass_32_bits.rg16i_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027758, VkglTestCase_027758_1, VkglTestCase_027758_2);

#define VkglTestCase_027759_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027759_2 "wclass_32_bits.rg16i_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027759, VkglTestCase_027759_1, VkglTestCase_027759_2);

#define VkglTestCase_027760_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027760_2 "ewclass_32_bits.rg16i_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027760, VkglTestCase_027760_1, VkglTestCase_027760_2);

#define VkglTestCase_027761_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027761_2 "ass_32_bits.rg16i_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027761, VkglTestCase_027761_1, VkglTestCase_027761_2);

#define VkglTestCase_027762_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027762_2 "class_32_bits.rg16i_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027762, VkglTestCase_027762_1, VkglTestCase_027762_2);
