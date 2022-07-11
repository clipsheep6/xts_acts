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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031835_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031835_2 "viewclass_16_bits.r16i_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031835, VkglTestCase_031835_1, VkglTestCase_031835_2);

#define VkglTestCase_031836_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031836_2 "viewclass_16_bits.r16i_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031836, VkglTestCase_031836_1, VkglTestCase_031836_2);

#define VkglTestCase_031837_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031837_2 ".viewclass_16_bits.r16i_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031837, VkglTestCase_031837_1, VkglTestCase_031837_2);

#define VkglTestCase_031838_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031838_2 "wclass_16_bits.r16i_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031838, VkglTestCase_031838_1, VkglTestCase_031838_2);

#define VkglTestCase_031839_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031839_2 "iewclass_16_bits.r16i_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031839, VkglTestCase_031839_1, VkglTestCase_031839_2);

#define VkglTestCase_031840_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031840_2 "viewclass_16_bits.r16i_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031840, VkglTestCase_031840_1, VkglTestCase_031840_2);

#define VkglTestCase_031841_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031841_2 "viewclass_16_bits.r16i_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031841, VkglTestCase_031841_1, VkglTestCase_031841_2);

#define VkglTestCase_031842_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031842_2 ".viewclass_16_bits.r16i_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031842, VkglTestCase_031842_1, VkglTestCase_031842_2);

#define VkglTestCase_031843_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031843_2 "wclass_16_bits.r16i_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031843, VkglTestCase_031843_1, VkglTestCase_031843_2);

#define VkglTestCase_031844_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031844_2 "iewclass_16_bits.r16i_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031844, VkglTestCase_031844_1, VkglTestCase_031844_2);

#define VkglTestCase_031845_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031845_2 ".viewclass_16_bits.r16i_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031845, VkglTestCase_031845_1, VkglTestCase_031845_2);

#define VkglTestCase_031846_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031846_2 ".viewclass_16_bits.r16i_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031846, VkglTestCase_031846_1, VkglTestCase_031846_2);

#define VkglTestCase_031847_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031847_2 "d.viewclass_16_bits.r16i_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031847, VkglTestCase_031847_1, VkglTestCase_031847_2);

#define VkglTestCase_031848_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031848_2 "ewclass_16_bits.r16i_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031848, VkglTestCase_031848_1, VkglTestCase_031848_2);

#define VkglTestCase_031849_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031849_2 "viewclass_16_bits.r16i_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031849, VkglTestCase_031849_1, VkglTestCase_031849_2);

#define VkglTestCase_031850_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031850_2 "wclass_16_bits.r16i_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031850, VkglTestCase_031850_1, VkglTestCase_031850_2);

#define VkglTestCase_031851_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031851_2 "wclass_16_bits.r16i_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031851, VkglTestCase_031851_1, VkglTestCase_031851_2);

#define VkglTestCase_031852_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031852_2 "ewclass_16_bits.r16i_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031852, VkglTestCase_031852_1, VkglTestCase_031852_2);

#define VkglTestCase_031853_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031853_2 "ass_16_bits.r16i_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031853, VkglTestCase_031853_1, VkglTestCase_031853_2);

#define VkglTestCase_031854_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031854_2 "class_16_bits.r16i_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031854, VkglTestCase_031854_1, VkglTestCase_031854_2);

#define VkglTestCase_031855_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031855_2 "iewclass_16_bits.r16i_rg8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031855, VkglTestCase_031855_1, VkglTestCase_031855_2);

#define VkglTestCase_031856_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031856_2 "iewclass_16_bits.r16i_rg8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031856, VkglTestCase_031856_1, VkglTestCase_031856_2);

#define VkglTestCase_031857_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031857_2 "viewclass_16_bits.r16i_rg8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031857, VkglTestCase_031857_1, VkglTestCase_031857_2);

#define VkglTestCase_031858_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031858_2 "class_16_bits.r16i_rg8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031858, VkglTestCase_031858_1, VkglTestCase_031858_2);

#define VkglTestCase_031859_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031859_2 "wclass_16_bits.r16i_rg8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031859, VkglTestCase_031859_1, VkglTestCase_031859_2);
