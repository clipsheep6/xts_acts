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

#define VkglTestCase_025844_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025844_2 "ewclass_64_bits.rg32ui_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025844, VkglTestCase_025844_1, VkglTestCase_025844_2);

#define VkglTestCase_025845_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025845_2 "ewclass_64_bits.rg32ui_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025845, VkglTestCase_025845_1, VkglTestCase_025845_2);

#define VkglTestCase_025846_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025846_2 "iewclass_64_bits.rg32ui_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025846, VkglTestCase_025846_1, VkglTestCase_025846_2);

#define VkglTestCase_025847_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025847_2 "lass_64_bits.rg32ui_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025847, VkglTestCase_025847_1, VkglTestCase_025847_2);

#define VkglTestCase_025848_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025848_2 "wclass_64_bits.rg32ui_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025848, VkglTestCase_025848_1, VkglTestCase_025848_2);

#define VkglTestCase_025849_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025849_2 "ewclass_64_bits.rg32ui_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025849, VkglTestCase_025849_1, VkglTestCase_025849_2);

#define VkglTestCase_025850_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025850_2 "ewclass_64_bits.rg32ui_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025850, VkglTestCase_025850_1, VkglTestCase_025850_2);

#define VkglTestCase_025851_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025851_2 "iewclass_64_bits.rg32ui_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025851, VkglTestCase_025851_1, VkglTestCase_025851_2);

#define VkglTestCase_025852_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025852_2 "lass_64_bits.rg32ui_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025852, VkglTestCase_025852_1, VkglTestCase_025852_2);

#define VkglTestCase_025853_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025853_2 "wclass_64_bits.rg32ui_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025853, VkglTestCase_025853_1, VkglTestCase_025853_2);

#define VkglTestCase_025854_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025854_2 "iewclass_64_bits.rg32ui_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025854, VkglTestCase_025854_1, VkglTestCase_025854_2);

#define VkglTestCase_025855_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025855_2 "iewclass_64_bits.rg32ui_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025855, VkglTestCase_025855_1, VkglTestCase_025855_2);

#define VkglTestCase_025856_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025856_2 "viewclass_64_bits.rg32ui_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025856, VkglTestCase_025856_1, VkglTestCase_025856_2);

#define VkglTestCase_025857_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025857_2 "class_64_bits.rg32ui_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025857, VkglTestCase_025857_1, VkglTestCase_025857_2);

#define VkglTestCase_025858_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025858_2 "ewclass_64_bits.rg32ui_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025858, VkglTestCase_025858_1, VkglTestCase_025858_2);

#define VkglTestCase_025859_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025859_2 "lass_64_bits.rg32ui_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025859, VkglTestCase_025859_1, VkglTestCase_025859_2);

#define VkglTestCase_025860_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025860_2 "lass_64_bits.rg32ui_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025860, VkglTestCase_025860_1, VkglTestCase_025860_2);

#define VkglTestCase_025861_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025861_2 "class_64_bits.rg32ui_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025861, VkglTestCase_025861_1, VkglTestCase_025861_2);

#define VkglTestCase_025862_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025862_2 "s_64_bits.rg32ui_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025862, VkglTestCase_025862_1, VkglTestCase_025862_2);

#define VkglTestCase_025863_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025863_2 "ass_64_bits.rg32ui_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025863, VkglTestCase_025863_1, VkglTestCase_025863_2);

#define VkglTestCase_025864_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025864_2 "wclass_64_bits.rg32ui_rg32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025864, VkglTestCase_025864_1, VkglTestCase_025864_2);

#define VkglTestCase_025865_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025865_2 "wclass_64_bits.rg32ui_rg32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025865, VkglTestCase_025865_1, VkglTestCase_025865_2);

#define VkglTestCase_025866_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025866_2 "ewclass_64_bits.rg32ui_rg32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025866, VkglTestCase_025866_1, VkglTestCase_025866_2);

#define VkglTestCase_025867_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025867_2 "ass_64_bits.rg32ui_rg32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025867, VkglTestCase_025867_1, VkglTestCase_025867_2);

#define VkglTestCase_025868_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025868_2 "lass_64_bits.rg32ui_rg32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025868, VkglTestCase_025868_1, VkglTestCase_025868_2);
