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

#define VkglTestCase_030462_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030462_2 "lass_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030462, VkglTestCase_030462_1, VkglTestCase_030462_2);

#define VkglTestCase_030463_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030463_2 "lass_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030463, VkglTestCase_030463_1, VkglTestCase_030463_2);

#define VkglTestCase_030464_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030464_2 "class_32_bits.rgba8_snorm_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030464, VkglTestCase_030464_1, VkglTestCase_030464_2);

#define VkglTestCase_030465_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030465_2 "s_32_bits.rgba8_snorm_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030465, VkglTestCase_030465_1, VkglTestCase_030465_2);

#define VkglTestCase_030466_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030466_2 "ass_32_bits.rgba8_snorm_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030466, VkglTestCase_030466_1, VkglTestCase_030466_2);

#define VkglTestCase_030467_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030467_2 "lass_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030467, VkglTestCase_030467_1, VkglTestCase_030467_2);

#define VkglTestCase_030468_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030468_2 "lass_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030468, VkglTestCase_030468_1, VkglTestCase_030468_2);

#define VkglTestCase_030469_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030469_2 "class_32_bits.rgba8_snorm_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030469, VkglTestCase_030469_1, VkglTestCase_030469_2);

#define VkglTestCase_030470_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030470_2 "s_32_bits.rgba8_snorm_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030470, VkglTestCase_030470_1, VkglTestCase_030470_2);

#define VkglTestCase_030471_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030471_2 "ass_32_bits.rgba8_snorm_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030471, VkglTestCase_030471_1, VkglTestCase_030471_2);

#define VkglTestCase_030472_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030472_2 "class_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030472, VkglTestCase_030472_1, VkglTestCase_030472_2);

#define VkglTestCase_030473_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030473_2 "class_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030473, VkglTestCase_030473_1, VkglTestCase_030473_2);

#define VkglTestCase_030474_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030474_2 "wclass_32_bits.rgba8_snorm_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030474, VkglTestCase_030474_1, VkglTestCase_030474_2);

#define VkglTestCase_030475_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030475_2 "ss_32_bits.rgba8_snorm_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030475, VkglTestCase_030475_1, VkglTestCase_030475_2);

#define VkglTestCase_030476_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030476_2 "lass_32_bits.rgba8_snorm_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030476, VkglTestCase_030476_1, VkglTestCase_030476_2);

#define VkglTestCase_030477_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030477_2 "s_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030477, VkglTestCase_030477_1, VkglTestCase_030477_2);

#define VkglTestCase_030478_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030478_2 "s_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030478, VkglTestCase_030478_1, VkglTestCase_030478_2);

#define VkglTestCase_030479_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030479_2 "ss_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030479, VkglTestCase_030479_1, VkglTestCase_030479_2);

#define VkglTestCase_030480_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030480_2 "2_bits.rgba8_snorm_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030480, VkglTestCase_030480_1, VkglTestCase_030480_2);

#define VkglTestCase_030481_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030481_2 "_32_bits.rgba8_snorm_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030481, VkglTestCase_030481_1, VkglTestCase_030481_2);
