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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009846_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009846_2 "nstance_array_basic_type.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009846, VkglTestCase_009846_1, VkglTestCase_009846_2);

#define VkglTestCase_009847_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009847_2 "nstance_array_basic_type.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009847, VkglTestCase_009847_1, VkglTestCase_009847_2);

#define VkglTestCase_009848_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009848_2 "nstance_array_basic_type.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009848, VkglTestCase_009848_1, VkglTestCase_009848_2);

#define VkglTestCase_009849_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009849_2 "nstance_array_basic_type.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009849, VkglTestCase_009849_1, VkglTestCase_009849_2);

#define VkglTestCase_009850_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009850_2 "instance_array_basic_type.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009850, VkglTestCase_009850_1, VkglTestCase_009850_2);

#define VkglTestCase_009851_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009851_2 "nstance_array_basic_type.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009851, VkglTestCase_009851_1, VkglTestCase_009851_2);

#define VkglTestCase_009852_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009852_2 "nstance_array_basic_type.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009852, VkglTestCase_009852_1, VkglTestCase_009852_2);

#define VkglTestCase_009853_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009853_2 "nstance_array_basic_type.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009853, VkglTestCase_009853_1, VkglTestCase_009853_2);

#define VkglTestCase_009854_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009854_2 "nstance_array_basic_type.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009854, VkglTestCase_009854_1, VkglTestCase_009854_2);

#define VkglTestCase_009855_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009855_2 "nstance_array_basic_type.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009855, VkglTestCase_009855_1, VkglTestCase_009855_2);

#define VkglTestCase_009856_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009856_2 "nstance_array_basic_type.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009856, VkglTestCase_009856_1, VkglTestCase_009856_2);

#define VkglTestCase_009857_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009857_2 "nstance_array_basic_type.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009857, VkglTestCase_009857_1, VkglTestCase_009857_2);

#define VkglTestCase_009858_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009858_2 "nstance_array_basic_type.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009858, VkglTestCase_009858_1, VkglTestCase_009858_2);

#define VkglTestCase_009859_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009859_2 "nstance_array_basic_type.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009859, VkglTestCase_009859_1, VkglTestCase_009859_2);

#define VkglTestCase_009860_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009860_2 "nstance_array_basic_type.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009860, VkglTestCase_009860_1, VkglTestCase_009860_2);

#define VkglTestCase_009861_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009861_2 "nstance_array_basic_type.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009861, VkglTestCase_009861_1, VkglTestCase_009861_2);

#define VkglTestCase_009862_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009862_2 "nstance_array_basic_type.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009862, VkglTestCase_009862_1, VkglTestCase_009862_2);

#define VkglTestCase_009863_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009863_2 "ce_array_basic_type.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009863, VkglTestCase_009863_1, VkglTestCase_009863_2);

#define VkglTestCase_009864_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009864_2 "e_array_basic_type.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009864, VkglTestCase_009864_1, VkglTestCase_009864_2);

#define VkglTestCase_009865_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009865_2 "nstance_array_basic_type.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009865, VkglTestCase_009865_1, VkglTestCase_009865_2);

#define VkglTestCase_009866_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009866_2 "ce_array_basic_type.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009866, VkglTestCase_009866_1, VkglTestCase_009866_2);

#define VkglTestCase_009867_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009867_2 "e_array_basic_type.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009867, VkglTestCase_009867_1, VkglTestCase_009867_2);

#define VkglTestCase_009868_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009868_2 "nstance_array_basic_type.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009868, VkglTestCase_009868_1, VkglTestCase_009868_2);

#define VkglTestCase_009869_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009869_2 "ce_array_basic_type.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009869, VkglTestCase_009869_1, VkglTestCase_009869_2);

#define VkglTestCase_009870_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009870_2 "e_array_basic_type.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009870, VkglTestCase_009870_1, VkglTestCase_009870_2);

#define VkglTestCase_009871_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009871_2 "stance_array_basic_type.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009871, VkglTestCase_009871_1, VkglTestCase_009871_2);

#define VkglTestCase_009872_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009872_2 "e_array_basic_type.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009872, VkglTestCase_009872_1, VkglTestCase_009872_2);

#define VkglTestCase_009873_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009873_2 "_array_basic_type.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009873, VkglTestCase_009873_1, VkglTestCase_009873_2);

#define VkglTestCase_009874_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009874_2 "stance_array_basic_type.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009874, VkglTestCase_009874_1, VkglTestCase_009874_2);

#define VkglTestCase_009875_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009875_2 "e_array_basic_type.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009875, VkglTestCase_009875_1, VkglTestCase_009875_2);

#define VkglTestCase_009876_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009876_2 "_array_basic_type.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009876, VkglTestCase_009876_1, VkglTestCase_009876_2);

#define VkglTestCase_009877_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009877_2 "stance_array_basic_type.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009877, VkglTestCase_009877_1, VkglTestCase_009877_2);

#define VkglTestCase_009878_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009878_2 "e_array_basic_type.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009878, VkglTestCase_009878_1, VkglTestCase_009878_2);

#define VkglTestCase_009879_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009879_2 "_array_basic_type.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009879, VkglTestCase_009879_1, VkglTestCase_009879_2);

#define VkglTestCase_009880_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009880_2 "stance_array_basic_type.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009880, VkglTestCase_009880_1, VkglTestCase_009880_2);

#define VkglTestCase_009881_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009881_2 "e_array_basic_type.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009881, VkglTestCase_009881_1, VkglTestCase_009881_2);

#define VkglTestCase_009882_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009882_2 "_array_basic_type.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009882, VkglTestCase_009882_1, VkglTestCase_009882_2);

#define VkglTestCase_009883_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009883_2 "stance_array_basic_type.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009883, VkglTestCase_009883_1, VkglTestCase_009883_2);

#define VkglTestCase_009884_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009884_2 "e_array_basic_type.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009884, VkglTestCase_009884_1, VkglTestCase_009884_2);

#define VkglTestCase_009885_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009885_2 "_array_basic_type.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009885, VkglTestCase_009885_1, VkglTestCase_009885_2);

#define VkglTestCase_009886_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009886_2 "stance_array_basic_type.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009886, VkglTestCase_009886_1, VkglTestCase_009886_2);

#define VkglTestCase_009887_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009887_2 "e_array_basic_type.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009887, VkglTestCase_009887_1, VkglTestCase_009887_2);

#define VkglTestCase_009888_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009888_2 "_array_basic_type.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009888, VkglTestCase_009888_1, VkglTestCase_009888_2);
