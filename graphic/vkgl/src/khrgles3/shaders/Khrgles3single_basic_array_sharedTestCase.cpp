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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001839_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001839_2 ".single_basic_array.shared.float"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001839, VkglTestCase_001839_1, VkglTestCase_001839_2);

#define VkglTestCase_001840_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001840_2 ".single_basic_array.shared.vec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001840, VkglTestCase_001840_1, VkglTestCase_001840_2);

#define VkglTestCase_001841_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001841_2 ".single_basic_array.shared.vec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001841, VkglTestCase_001841_1, VkglTestCase_001841_2);

#define VkglTestCase_001842_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001842_2 ".single_basic_array.shared.vec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001842, VkglTestCase_001842_1, VkglTestCase_001842_2);

#define VkglTestCase_001843_1 "KHR-GLES3.shaders.uniform_bloc"
#define VkglTestCase_001843_2 "k.single_basic_array.shared.int"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001843, VkglTestCase_001843_1, VkglTestCase_001843_2);

#define VkglTestCase_001844_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001844_2 ".single_basic_array.shared.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001844, VkglTestCase_001844_1, VkglTestCase_001844_2);

#define VkglTestCase_001845_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001845_2 ".single_basic_array.shared.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001845, VkglTestCase_001845_1, VkglTestCase_001845_2);

#define VkglTestCase_001846_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001846_2 ".single_basic_array.shared.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001846, VkglTestCase_001846_1, VkglTestCase_001846_2);

#define VkglTestCase_001847_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001847_2 ".single_basic_array.shared.uint"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001847, VkglTestCase_001847_1, VkglTestCase_001847_2);

#define VkglTestCase_001848_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001848_2 ".single_basic_array.shared.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001848, VkglTestCase_001848_1, VkglTestCase_001848_2);

#define VkglTestCase_001849_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001849_2 ".single_basic_array.shared.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001849, VkglTestCase_001849_1, VkglTestCase_001849_2);

#define VkglTestCase_001850_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001850_2 ".single_basic_array.shared.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001850, VkglTestCase_001850_1, VkglTestCase_001850_2);

#define VkglTestCase_001851_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001851_2 ".single_basic_array.shared.bool"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001851, VkglTestCase_001851_1, VkglTestCase_001851_2);

#define VkglTestCase_001852_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001852_2 ".single_basic_array.shared.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001852, VkglTestCase_001852_1, VkglTestCase_001852_2);

#define VkglTestCase_001853_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001853_2 ".single_basic_array.shared.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001853, VkglTestCase_001853_1, VkglTestCase_001853_2);

#define VkglTestCase_001854_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001854_2 ".single_basic_array.shared.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001854, VkglTestCase_001854_1, VkglTestCase_001854_2);

#define VkglTestCase_001855_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001855_2 ".single_basic_array.shared.mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001855, VkglTestCase_001855_1, VkglTestCase_001855_2);

#define VkglTestCase_001856_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001856_2 "le_basic_array.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001856, VkglTestCase_001856_1, VkglTestCase_001856_2);

#define VkglTestCase_001857_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001857_2 "e_basic_array.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001857, VkglTestCase_001857_1, VkglTestCase_001857_2);

#define VkglTestCase_001858_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001858_2 ".single_basic_array.shared.mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001858, VkglTestCase_001858_1, VkglTestCase_001858_2);

#define VkglTestCase_001859_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001859_2 "le_basic_array.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001859, VkglTestCase_001859_1, VkglTestCase_001859_2);

#define VkglTestCase_001860_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001860_2 "e_basic_array.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001860, VkglTestCase_001860_1, VkglTestCase_001860_2);

#define VkglTestCase_001861_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_001861_2 ".single_basic_array.shared.mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001861, VkglTestCase_001861_1, VkglTestCase_001861_2);

#define VkglTestCase_001862_1 "KHR-GLES3.shaders.uniform_block.sing"
#define VkglTestCase_001862_2 "le_basic_array.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001862, VkglTestCase_001862_1, VkglTestCase_001862_2);

#define VkglTestCase_001863_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001863_2 "e_basic_array.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001863, VkglTestCase_001863_1, VkglTestCase_001863_2);

#define VkglTestCase_001864_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001864_2 "single_basic_array.shared.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001864, VkglTestCase_001864_1, VkglTestCase_001864_2);

#define VkglTestCase_001865_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001865_2 "e_basic_array.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001865, VkglTestCase_001865_1, VkglTestCase_001865_2);

#define VkglTestCase_001866_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001866_2 "_basic_array.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001866, VkglTestCase_001866_1, VkglTestCase_001866_2);

#define VkglTestCase_001867_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001867_2 "single_basic_array.shared.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001867, VkglTestCase_001867_1, VkglTestCase_001867_2);

#define VkglTestCase_001868_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001868_2 "e_basic_array.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001868, VkglTestCase_001868_1, VkglTestCase_001868_2);

#define VkglTestCase_001869_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001869_2 "_basic_array.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001869, VkglTestCase_001869_1, VkglTestCase_001869_2);

#define VkglTestCase_001870_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001870_2 "single_basic_array.shared.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001870, VkglTestCase_001870_1, VkglTestCase_001870_2);

#define VkglTestCase_001871_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001871_2 "e_basic_array.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001871, VkglTestCase_001871_1, VkglTestCase_001871_2);

#define VkglTestCase_001872_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001872_2 "_basic_array.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001872, VkglTestCase_001872_1, VkglTestCase_001872_2);

#define VkglTestCase_001873_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001873_2 "single_basic_array.shared.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001873, VkglTestCase_001873_1, VkglTestCase_001873_2);

#define VkglTestCase_001874_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001874_2 "e_basic_array.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001874, VkglTestCase_001874_1, VkglTestCase_001874_2);

#define VkglTestCase_001875_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001875_2 "_basic_array.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001875, VkglTestCase_001875_1, VkglTestCase_001875_2);

#define VkglTestCase_001876_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001876_2 "single_basic_array.shared.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001876, VkglTestCase_001876_1, VkglTestCase_001876_2);

#define VkglTestCase_001877_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001877_2 "e_basic_array.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001877, VkglTestCase_001877_1, VkglTestCase_001877_2);

#define VkglTestCase_001878_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001878_2 "_basic_array.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001878, VkglTestCase_001878_1, VkglTestCase_001878_2);

#define VkglTestCase_001879_1 "KHR-GLES3.shaders.uniform_block."
#define VkglTestCase_001879_2 "single_basic_array.shared.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001879, VkglTestCase_001879_1, VkglTestCase_001879_2);

#define VkglTestCase_001880_1 "KHR-GLES3.shaders.uniform_block.singl"
#define VkglTestCase_001880_2 "e_basic_array.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001880, VkglTestCase_001880_1, VkglTestCase_001880_2);

#define VkglTestCase_001881_1 "KHR-GLES3.shaders.uniform_block.single"
#define VkglTestCase_001881_2 "_basic_array.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001881, VkglTestCase_001881_1, VkglTestCase_001881_2);
