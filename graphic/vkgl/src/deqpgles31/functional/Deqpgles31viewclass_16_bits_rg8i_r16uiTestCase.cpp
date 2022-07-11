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

#define VkglTestCase_032305_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032305_2 "iewclass_16_bits.rg8i_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032305, VkglTestCase_032305_1, VkglTestCase_032305_2);

#define VkglTestCase_032306_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032306_2 "iewclass_16_bits.rg8i_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032306, VkglTestCase_032306_1, VkglTestCase_032306_2);

#define VkglTestCase_032307_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032307_2 "viewclass_16_bits.rg8i_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032307, VkglTestCase_032307_1, VkglTestCase_032307_2);

#define VkglTestCase_032308_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032308_2 "class_16_bits.rg8i_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032308, VkglTestCase_032308_1, VkglTestCase_032308_2);

#define VkglTestCase_032309_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032309_2 "ewclass_16_bits.rg8i_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032309, VkglTestCase_032309_1, VkglTestCase_032309_2);

#define VkglTestCase_032310_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032310_2 "iewclass_16_bits.rg8i_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032310, VkglTestCase_032310_1, VkglTestCase_032310_2);

#define VkglTestCase_032311_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032311_2 "iewclass_16_bits.rg8i_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032311, VkglTestCase_032311_1, VkglTestCase_032311_2);

#define VkglTestCase_032312_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032312_2 "viewclass_16_bits.rg8i_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032312, VkglTestCase_032312_1, VkglTestCase_032312_2);

#define VkglTestCase_032313_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032313_2 "class_16_bits.rg8i_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032313, VkglTestCase_032313_1, VkglTestCase_032313_2);

#define VkglTestCase_032314_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032314_2 "ewclass_16_bits.rg8i_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032314, VkglTestCase_032314_1, VkglTestCase_032314_2);

#define VkglTestCase_032315_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032315_2 "viewclass_16_bits.rg8i_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032315, VkglTestCase_032315_1, VkglTestCase_032315_2);

#define VkglTestCase_032316_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032316_2 "viewclass_16_bits.rg8i_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032316, VkglTestCase_032316_1, VkglTestCase_032316_2);

#define VkglTestCase_032317_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032317_2 ".viewclass_16_bits.rg8i_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032317, VkglTestCase_032317_1, VkglTestCase_032317_2);

#define VkglTestCase_032318_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032318_2 "wclass_16_bits.rg8i_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032318, VkglTestCase_032318_1, VkglTestCase_032318_2);

#define VkglTestCase_032319_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032319_2 "iewclass_16_bits.rg8i_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032319, VkglTestCase_032319_1, VkglTestCase_032319_2);

#define VkglTestCase_032320_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032320_2 "class_16_bits.rg8i_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032320, VkglTestCase_032320_1, VkglTestCase_032320_2);

#define VkglTestCase_032321_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032321_2 "class_16_bits.rg8i_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032321, VkglTestCase_032321_1, VkglTestCase_032321_2);

#define VkglTestCase_032322_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032322_2 "wclass_16_bits.rg8i_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032322, VkglTestCase_032322_1, VkglTestCase_032322_2);

#define VkglTestCase_032323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032323_2 "ss_16_bits.rg8i_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032323, VkglTestCase_032323_1, VkglTestCase_032323_2);

#define VkglTestCase_032324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032324_2 "lass_16_bits.rg8i_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032324, VkglTestCase_032324_1, VkglTestCase_032324_2);

#define VkglTestCase_032325_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032325_2 "ewclass_16_bits.rg8i_r16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032325, VkglTestCase_032325_1, VkglTestCase_032325_2);

#define VkglTestCase_032326_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032326_2 "ewclass_16_bits.rg8i_r16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032326, VkglTestCase_032326_1, VkglTestCase_032326_2);

#define VkglTestCase_032327_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032327_2 "iewclass_16_bits.rg8i_r16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032327, VkglTestCase_032327_1, VkglTestCase_032327_2);

#define VkglTestCase_032328_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032328_2 "lass_16_bits.rg8i_r16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032328, VkglTestCase_032328_1, VkglTestCase_032328_2);

#define VkglTestCase_032329_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032329_2 "class_16_bits.rg8i_r16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032329, VkglTestCase_032329_1, VkglTestCase_032329_2);
