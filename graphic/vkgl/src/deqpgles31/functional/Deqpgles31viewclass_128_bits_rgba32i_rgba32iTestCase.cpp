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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025324_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025324_2 "class_128_bits.rgba32i_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025324, VkglTestCase_025324_1, VkglTestCase_025324_2);

#define VkglTestCase_025325_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025325_2 "class_128_bits.rgba32i_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025325, VkglTestCase_025325_1, VkglTestCase_025325_2);

#define VkglTestCase_025326_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025326_2 "wclass_128_bits.rgba32i_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025326, VkglTestCase_025326_1, VkglTestCase_025326_2);

#define VkglTestCase_025327_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025327_2 "ss_128_bits.rgba32i_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025327, VkglTestCase_025327_1, VkglTestCase_025327_2);

#define VkglTestCase_025328_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025328_2 "lass_128_bits.rgba32i_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025328, VkglTestCase_025328_1, VkglTestCase_025328_2);

#define VkglTestCase_025329_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025329_2 "class_128_bits.rgba32i_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025329, VkglTestCase_025329_1, VkglTestCase_025329_2);

#define VkglTestCase_025330_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025330_2 "class_128_bits.rgba32i_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025330, VkglTestCase_025330_1, VkglTestCase_025330_2);

#define VkglTestCase_025331_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025331_2 "wclass_128_bits.rgba32i_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025331, VkglTestCase_025331_1, VkglTestCase_025331_2);

#define VkglTestCase_025332_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025332_2 "ss_128_bits.rgba32i_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025332, VkglTestCase_025332_1, VkglTestCase_025332_2);

#define VkglTestCase_025333_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025333_2 "lass_128_bits.rgba32i_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025333, VkglTestCase_025333_1, VkglTestCase_025333_2);

#define VkglTestCase_025334_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025334_2 "wclass_128_bits.rgba32i_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025334, VkglTestCase_025334_1, VkglTestCase_025334_2);

#define VkglTestCase_025335_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025335_2 "wclass_128_bits.rgba32i_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025335, VkglTestCase_025335_1, VkglTestCase_025335_2);

#define VkglTestCase_025336_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025336_2 "ewclass_128_bits.rgba32i_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025336, VkglTestCase_025336_1, VkglTestCase_025336_2);

#define VkglTestCase_025337_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025337_2 "ass_128_bits.rgba32i_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025337, VkglTestCase_025337_1, VkglTestCase_025337_2);

#define VkglTestCase_025338_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025338_2 "class_128_bits.rgba32i_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025338, VkglTestCase_025338_1, VkglTestCase_025338_2);

#define VkglTestCase_025339_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025339_2 "ss_128_bits.rgba32i_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025339, VkglTestCase_025339_1, VkglTestCase_025339_2);

#define VkglTestCase_025340_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025340_2 "ss_128_bits.rgba32i_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025340, VkglTestCase_025340_1, VkglTestCase_025340_2);

#define VkglTestCase_025341_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025341_2 "ass_128_bits.rgba32i_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025341, VkglTestCase_025341_1, VkglTestCase_025341_2);

#define VkglTestCase_025342_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025342_2 "128_bits.rgba32i_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025342, VkglTestCase_025342_1, VkglTestCase_025342_2);

#define VkglTestCase_025343_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025343_2 "s_128_bits.rgba32i_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025343, VkglTestCase_025343_1, VkglTestCase_025343_2);

#define VkglTestCase_025344_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025344_2 "lass_128_bits.rgba32i_rgba32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025344, VkglTestCase_025344_1, VkglTestCase_025344_2);

#define VkglTestCase_025345_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025345_2 "lass_128_bits.rgba32i_rgba32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025345, VkglTestCase_025345_1, VkglTestCase_025345_2);

#define VkglTestCase_025346_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025346_2 "class_128_bits.rgba32i_rgba32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025346, VkglTestCase_025346_1, VkglTestCase_025346_2);

#define VkglTestCase_025347_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025347_2 "s_128_bits.rgba32i_rgba32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025347, VkglTestCase_025347_1, VkglTestCase_025347_2);

#define VkglTestCase_025348_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025348_2 "ss_128_bits.rgba32i_rgba32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025348, VkglTestCase_025348_1, VkglTestCase_025348_2);
