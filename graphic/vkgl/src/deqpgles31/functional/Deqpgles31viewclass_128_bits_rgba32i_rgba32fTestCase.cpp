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

#define VkglTestCase_025304_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025304_2 "class_128_bits.rgba32i_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025304, VkglTestCase_025304_1, VkglTestCase_025304_2);

#define VkglTestCase_025305_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025305_2 "class_128_bits.rgba32i_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025305, VkglTestCase_025305_1, VkglTestCase_025305_2);

#define VkglTestCase_025306_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025306_2 "wclass_128_bits.rgba32i_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025306, VkglTestCase_025306_1, VkglTestCase_025306_2);

#define VkglTestCase_025307_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025307_2 "ss_128_bits.rgba32i_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025307, VkglTestCase_025307_1, VkglTestCase_025307_2);

#define VkglTestCase_025308_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025308_2 "class_128_bits.rgba32i_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025308, VkglTestCase_025308_1, VkglTestCase_025308_2);

#define VkglTestCase_025309_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025309_2 "class_128_bits.rgba32i_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025309, VkglTestCase_025309_1, VkglTestCase_025309_2);

#define VkglTestCase_025310_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025310_2 "wclass_128_bits.rgba32i_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025310, VkglTestCase_025310_1, VkglTestCase_025310_2);

#define VkglTestCase_025311_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025311_2 "ss_128_bits.rgba32i_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025311, VkglTestCase_025311_1, VkglTestCase_025311_2);

#define VkglTestCase_025312_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025312_2 "wclass_128_bits.rgba32i_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025312, VkglTestCase_025312_1, VkglTestCase_025312_2);

#define VkglTestCase_025313_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025313_2 "wclass_128_bits.rgba32i_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025313, VkglTestCase_025313_1, VkglTestCase_025313_2);

#define VkglTestCase_025314_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025314_2 "ewclass_128_bits.rgba32i_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025314, VkglTestCase_025314_1, VkglTestCase_025314_2);

#define VkglTestCase_025315_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025315_2 "ass_128_bits.rgba32i_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025315, VkglTestCase_025315_1, VkglTestCase_025315_2);

#define VkglTestCase_025316_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025316_2 "ss_128_bits.rgba32i_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025316, VkglTestCase_025316_1, VkglTestCase_025316_2);

#define VkglTestCase_025317_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025317_2 "ss_128_bits.rgba32i_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025317, VkglTestCase_025317_1, VkglTestCase_025317_2);

#define VkglTestCase_025318_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025318_2 "ass_128_bits.rgba32i_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025318, VkglTestCase_025318_1, VkglTestCase_025318_2);

#define VkglTestCase_025319_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025319_2 "128_bits.rgba32i_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025319, VkglTestCase_025319_1, VkglTestCase_025319_2);

#define VkglTestCase_025320_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025320_2 "lass_128_bits.rgba32i_rgba32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025320, VkglTestCase_025320_1, VkglTestCase_025320_2);

#define VkglTestCase_025321_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025321_2 "lass_128_bits.rgba32i_rgba32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025321, VkglTestCase_025321_1, VkglTestCase_025321_2);

#define VkglTestCase_025322_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025322_2 "class_128_bits.rgba32i_rgba32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025322, VkglTestCase_025322_1, VkglTestCase_025322_2);

#define VkglTestCase_025323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025323_2 "s_128_bits.rgba32i_rgba32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025323, VkglTestCase_025323_1, VkglTestCase_025323_2);
