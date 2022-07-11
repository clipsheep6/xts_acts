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

#define VkglTestCase_032747_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032747_2 "d.viewclass_8_bits.r8_r8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032747, VkglTestCase_032747_1, VkglTestCase_032747_2);

#define VkglTestCase_032748_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032748_2 "d.viewclass_8_bits.r8_r8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032748, VkglTestCase_032748_1, VkglTestCase_032748_2);

#define VkglTestCase_032749_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032749_2 "ed.viewclass_8_bits.r8_r8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032749, VkglTestCase_032749_1, VkglTestCase_032749_2);

#define VkglTestCase_032750_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032750_2 "iewclass_8_bits.r8_r8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032750, VkglTestCase_032750_1, VkglTestCase_032750_2);

#define VkglTestCase_032751_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032751_2 "viewclass_8_bits.r8_r8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032751, VkglTestCase_032751_1, VkglTestCase_032751_2);

#define VkglTestCase_032752_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032752_2 "d.viewclass_8_bits.r8_r8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032752, VkglTestCase_032752_1, VkglTestCase_032752_2);

#define VkglTestCase_032753_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032753_2 "d.viewclass_8_bits.r8_r8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032753, VkglTestCase_032753_1, VkglTestCase_032753_2);

#define VkglTestCase_032754_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032754_2 "ed.viewclass_8_bits.r8_r8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032754, VkglTestCase_032754_1, VkglTestCase_032754_2);

#define VkglTestCase_032755_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032755_2 "iewclass_8_bits.r8_r8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032755, VkglTestCase_032755_1, VkglTestCase_032755_2);

#define VkglTestCase_032756_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032756_2 "viewclass_8_bits.r8_r8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032756, VkglTestCase_032756_1, VkglTestCase_032756_2);

#define VkglTestCase_032757_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032757_2 "ed.viewclass_8_bits.r8_r8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032757, VkglTestCase_032757_1, VkglTestCase_032757_2);

#define VkglTestCase_032758_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032758_2 "ed.viewclass_8_bits.r8_r8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032758, VkglTestCase_032758_1, VkglTestCase_032758_2);

#define VkglTestCase_032759_1 "dEQP-GLES31.functional.copy_image.non_compres"
#define VkglTestCase_032759_2 "sed.viewclass_8_bits.r8_r8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032759, VkglTestCase_032759_1, VkglTestCase_032759_2);

#define VkglTestCase_032760_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032760_2 "viewclass_8_bits.r8_r8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032760, VkglTestCase_032760_1, VkglTestCase_032760_2);

#define VkglTestCase_032761_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032761_2 ".viewclass_8_bits.r8_r8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032761, VkglTestCase_032761_1, VkglTestCase_032761_2);

#define VkglTestCase_032762_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032762_2 "iewclass_8_bits.r8_r8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032762, VkglTestCase_032762_1, VkglTestCase_032762_2);

#define VkglTestCase_032763_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032763_2 "iewclass_8_bits.r8_r8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032763, VkglTestCase_032763_1, VkglTestCase_032763_2);

#define VkglTestCase_032764_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032764_2 "viewclass_8_bits.r8_r8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032764, VkglTestCase_032764_1, VkglTestCase_032764_2);

#define VkglTestCase_032765_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032765_2 "class_8_bits.r8_r8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032765, VkglTestCase_032765_1, VkglTestCase_032765_2);

#define VkglTestCase_032766_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032766_2 "wclass_8_bits.r8_r8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032766, VkglTestCase_032766_1, VkglTestCase_032766_2);

#define VkglTestCase_032767_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032767_2 "viewclass_8_bits.r8_r8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032767, VkglTestCase_032767_1, VkglTestCase_032767_2);

#define VkglTestCase_032768_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032768_2 "viewclass_8_bits.r8_r8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032768, VkglTestCase_032768_1, VkglTestCase_032768_2);

#define VkglTestCase_032769_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032769_2 ".viewclass_8_bits.r8_r8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032769, VkglTestCase_032769_1, VkglTestCase_032769_2);

#define VkglTestCase_032770_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032770_2 "wclass_8_bits.r8_r8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032770, VkglTestCase_032770_1, VkglTestCase_032770_2);

#define VkglTestCase_032771_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032771_2 "iewclass_8_bits.r8_r8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032771, VkglTestCase_032771_1, VkglTestCase_032771_2);
