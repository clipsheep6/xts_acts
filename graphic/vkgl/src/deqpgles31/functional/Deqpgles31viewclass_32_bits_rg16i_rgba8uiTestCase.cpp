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

#define VkglTestCase_027838_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027838_2 "ewclass_32_bits.rg16i_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027838, VkglTestCase_027838_1, VkglTestCase_027838_2);

#define VkglTestCase_027839_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027839_2 "ewclass_32_bits.rg16i_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027839, VkglTestCase_027839_1, VkglTestCase_027839_2);

#define VkglTestCase_027840_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027840_2 "iewclass_32_bits.rg16i_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027840, VkglTestCase_027840_1, VkglTestCase_027840_2);

#define VkglTestCase_027841_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027841_2 "lass_32_bits.rg16i_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027841, VkglTestCase_027841_1, VkglTestCase_027841_2);

#define VkglTestCase_027842_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027842_2 "class_32_bits.rg16i_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027842, VkglTestCase_027842_1, VkglTestCase_027842_2);

#define VkglTestCase_027843_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027843_2 "ewclass_32_bits.rg16i_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027843, VkglTestCase_027843_1, VkglTestCase_027843_2);

#define VkglTestCase_027844_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027844_2 "ewclass_32_bits.rg16i_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027844, VkglTestCase_027844_1, VkglTestCase_027844_2);

#define VkglTestCase_027845_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027845_2 "iewclass_32_bits.rg16i_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027845, VkglTestCase_027845_1, VkglTestCase_027845_2);

#define VkglTestCase_027846_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027846_2 "lass_32_bits.rg16i_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027846, VkglTestCase_027846_1, VkglTestCase_027846_2);

#define VkglTestCase_027847_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027847_2 "class_32_bits.rg16i_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027847, VkglTestCase_027847_1, VkglTestCase_027847_2);

#define VkglTestCase_027848_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027848_2 "iewclass_32_bits.rg16i_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027848, VkglTestCase_027848_1, VkglTestCase_027848_2);

#define VkglTestCase_027849_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027849_2 "iewclass_32_bits.rg16i_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027849, VkglTestCase_027849_1, VkglTestCase_027849_2);

#define VkglTestCase_027850_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027850_2 "viewclass_32_bits.rg16i_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027850, VkglTestCase_027850_1, VkglTestCase_027850_2);

#define VkglTestCase_027851_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027851_2 "class_32_bits.rg16i_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027851, VkglTestCase_027851_1, VkglTestCase_027851_2);

#define VkglTestCase_027852_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027852_2 "wclass_32_bits.rg16i_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027852, VkglTestCase_027852_1, VkglTestCase_027852_2);

#define VkglTestCase_027853_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027853_2 "lass_32_bits.rg16i_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027853, VkglTestCase_027853_1, VkglTestCase_027853_2);

#define VkglTestCase_027854_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027854_2 "lass_32_bits.rg16i_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027854, VkglTestCase_027854_1, VkglTestCase_027854_2);

#define VkglTestCase_027855_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027855_2 "class_32_bits.rg16i_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027855, VkglTestCase_027855_1, VkglTestCase_027855_2);

#define VkglTestCase_027856_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027856_2 "s_32_bits.rg16i_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027856, VkglTestCase_027856_1, VkglTestCase_027856_2);

#define VkglTestCase_027857_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027857_2 "ss_32_bits.rg16i_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027857, VkglTestCase_027857_1, VkglTestCase_027857_2);

#define VkglTestCase_027858_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027858_2 "class_32_bits.rg16i_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027858, VkglTestCase_027858_1, VkglTestCase_027858_2);

#define VkglTestCase_027859_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027859_2 "class_32_bits.rg16i_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027859, VkglTestCase_027859_1, VkglTestCase_027859_2);

#define VkglTestCase_027860_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027860_2 "wclass_32_bits.rg16i_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027860, VkglTestCase_027860_1, VkglTestCase_027860_2);

#define VkglTestCase_027861_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027861_2 "ss_32_bits.rg16i_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027861, VkglTestCase_027861_1, VkglTestCase_027861_2);

#define VkglTestCase_027862_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027862_2 "lass_32_bits.rg16i_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027862, VkglTestCase_027862_1, VkglTestCase_027862_2);
