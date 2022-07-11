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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001841_1 "KHR-GLES31.core.shader_storag"
#define VkglTestCase_001841_2 "e_buffer_object.basic-basic-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001841, VkglTestCase_001841_1, VkglTestCase_001841_2);

#define VkglTestCase_001842_1 "KHR-GLES31.core.shader_storag"
#define VkglTestCase_001842_2 "e_buffer_object.basic-basic-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001842, VkglTestCase_001842_1, VkglTestCase_001842_2);

#define VkglTestCase_001843_1 "KHR-GLES31.core.shader_stor"
#define VkglTestCase_001843_2 "age_buffer_object.basic-max"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001843, VkglTestCase_001843_1, VkglTestCase_001843_2);

#define VkglTestCase_001844_1 "KHR-GLES31.core.shader_storag"
#define VkglTestCase_001844_2 "e_buffer_object.basic-binding"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001844, VkglTestCase_001844_1, VkglTestCase_001844_2);

#define VkglTestCase_001845_1 "KHR-GLES31.core.shader_storage"
#define VkglTestCase_001845_2 "_buffer_object.basic-syntax-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001845, VkglTestCase_001845_1, VkglTestCase_001845_2);

#define VkglTestCase_001846_1 "KHR-GLES31.core.shader_storage"
#define VkglTestCase_001846_2 "_buffer_object.basic-syntax-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001846, VkglTestCase_001846_1, VkglTestCase_001846_2);

#define VkglTestCase_001847_1 "KHR-GLES31.core.shader_storage"
#define VkglTestCase_001847_2 "_buffer_object.basic-syntaxSSO"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001847, VkglTestCase_001847_1, VkglTestCase_001847_2);

#define VkglTestCase_001848_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001848_2 "r_object.basic-std430Layout-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001848, VkglTestCase_001848_1, VkglTestCase_001848_2);

#define VkglTestCase_001849_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001849_2 "r_object.basic-std430Layout-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001849, VkglTestCase_001849_1, VkglTestCase_001849_2);

#define VkglTestCase_001850_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001850_2 "r_object.basic-std430Layout-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001850, VkglTestCase_001850_1, VkglTestCase_001850_2);

#define VkglTestCase_001851_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001851_2 "r_object.basic-std430Layout-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001851, VkglTestCase_001851_1, VkglTestCase_001851_2);

#define VkglTestCase_001852_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001852_2 "r_object.basic-std430Layout-case3-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001852, VkglTestCase_001852_1, VkglTestCase_001852_2);

#define VkglTestCase_001853_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001853_2 "r_object.basic-std430Layout-case3-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001853, VkglTestCase_001853_1, VkglTestCase_001853_2);

#define VkglTestCase_001854_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001854_2 "r_object.basic-std430Layout-case4-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001854, VkglTestCase_001854_1, VkglTestCase_001854_2);

#define VkglTestCase_001855_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001855_2 "r_object.basic-std430Layout-case4-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001855, VkglTestCase_001855_1, VkglTestCase_001855_2);

#define VkglTestCase_001856_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001856_2 "r_object.basic-std430Layout-case5-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001856, VkglTestCase_001856_1, VkglTestCase_001856_2);

#define VkglTestCase_001857_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001857_2 "r_object.basic-std430Layout-case5-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001857, VkglTestCase_001857_1, VkglTestCase_001857_2);

#define VkglTestCase_001858_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001858_2 "r_object.basic-std430Layout-case6-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001858, VkglTestCase_001858_1, VkglTestCase_001858_2);

#define VkglTestCase_001859_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001859_2 "r_object.basic-std430Layout-case6-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001859, VkglTestCase_001859_1, VkglTestCase_001859_2);

#define VkglTestCase_001860_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001860_2 "r_object.basic-std430Layout-case7-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001860, VkglTestCase_001860_1, VkglTestCase_001860_2);

#define VkglTestCase_001861_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001861_2 "r_object.basic-std430Layout-case7-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001861, VkglTestCase_001861_1, VkglTestCase_001861_2);

#define VkglTestCase_001862_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001862_2 "r_object.basic-std140Layout-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001862, VkglTestCase_001862_1, VkglTestCase_001862_2);

#define VkglTestCase_001863_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001863_2 "r_object.basic-std140Layout-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001863, VkglTestCase_001863_1, VkglTestCase_001863_2);

#define VkglTestCase_001864_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001864_2 "r_object.basic-std140Layout-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001864, VkglTestCase_001864_1, VkglTestCase_001864_2);

#define VkglTestCase_001865_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001865_2 "r_object.basic-std140Layout-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001865, VkglTestCase_001865_1, VkglTestCase_001865_2);

#define VkglTestCase_001866_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001866_2 "r_object.basic-std140Layout-case3-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001866, VkglTestCase_001866_1, VkglTestCase_001866_2);

#define VkglTestCase_001867_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001867_2 "r_object.basic-std140Layout-case3-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001867, VkglTestCase_001867_1, VkglTestCase_001867_2);

#define VkglTestCase_001868_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001868_2 "r_object.basic-std140Layout-case4-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001868, VkglTestCase_001868_1, VkglTestCase_001868_2);

#define VkglTestCase_001869_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001869_2 "r_object.basic-std140Layout-case4-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001869, VkglTestCase_001869_1, VkglTestCase_001869_2);

#define VkglTestCase_001870_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001870_2 "r_object.basic-std140Layout-case5-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001870, VkglTestCase_001870_1, VkglTestCase_001870_2);

#define VkglTestCase_001871_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001871_2 "r_object.basic-std140Layout-case5-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001871, VkglTestCase_001871_1, VkglTestCase_001871_2);

#define VkglTestCase_001872_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001872_2 "r_object.basic-std140Layout-case6-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001872, VkglTestCase_001872_1, VkglTestCase_001872_2);

#define VkglTestCase_001873_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001873_2 "r_object.basic-std140Layout-case6-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001873, VkglTestCase_001873_1, VkglTestCase_001873_2);

#define VkglTestCase_001874_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001874_2 "fer_object.basic-atomic-case1-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001874, VkglTestCase_001874_1, VkglTestCase_001874_2);

#define VkglTestCase_001875_1 "KHR-GLES31.core.shader_storage_bu"
#define VkglTestCase_001875_2 "ffer_object.basic-atomic-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001875, VkglTestCase_001875_1, VkglTestCase_001875_2);

#define VkglTestCase_001876_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001876_2 "fer_object.basic-atomic-case3-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001876, VkglTestCase_001876_1, VkglTestCase_001876_2);

#define VkglTestCase_001877_1 "KHR-GLES31.core.shader_storage_bu"
#define VkglTestCase_001877_2 "ffer_object.basic-atomic-case3-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001877, VkglTestCase_001877_1, VkglTestCase_001877_2);

#define VkglTestCase_001878_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001878_2 "fer_object.basic-atomic-case4-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001878, VkglTestCase_001878_1, VkglTestCase_001878_2);

#define VkglTestCase_001879_1 "KHR-GLES31.core.shader_storage_bu"
#define VkglTestCase_001879_2 "ffer_object.basic-atomic-case4-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001879, VkglTestCase_001879_1, VkglTestCase_001879_2);

#define VkglTestCase_001880_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001880_2 "fer_object.basic-stdLayout-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001880, VkglTestCase_001880_1, VkglTestCase_001880_2);

#define VkglTestCase_001881_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001881_2 "fer_object.basic-stdLayout-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001881, VkglTestCase_001881_1, VkglTestCase_001881_2);

#define VkglTestCase_001882_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001882_2 "fer_object.basic-stdLayout-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001882, VkglTestCase_001882_1, VkglTestCase_001882_2);

#define VkglTestCase_001883_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001883_2 "fer_object.basic-stdLayout-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001883, VkglTestCase_001883_1, VkglTestCase_001883_2);

#define VkglTestCase_001884_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001884_2 "fer_object.basic-stdLayout-case3-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001884, VkglTestCase_001884_1, VkglTestCase_001884_2);

#define VkglTestCase_001885_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001885_2 "fer_object.basic-stdLayout-case3-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001885, VkglTestCase_001885_1, VkglTestCase_001885_2);

#define VkglTestCase_001886_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001886_2 "fer_object.basic-stdLayout-case4-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001886, VkglTestCase_001886_1, VkglTestCase_001886_2);

#define VkglTestCase_001887_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001887_2 "fer_object.basic-stdLayout-case4-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001887, VkglTestCase_001887_1, VkglTestCase_001887_2);

#define VkglTestCase_001888_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001888_2 "er_object.basic-operations-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001888, VkglTestCase_001888_1, VkglTestCase_001888_2);

#define VkglTestCase_001889_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001889_2 "er_object.basic-operations-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001889, VkglTestCase_001889_1, VkglTestCase_001889_2);

#define VkglTestCase_001890_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001890_2 "er_object.basic-operations-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001890, VkglTestCase_001890_1, VkglTestCase_001890_2);

#define VkglTestCase_001891_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001891_2 "er_object.basic-operations-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001891, VkglTestCase_001891_1, VkglTestCase_001891_2);

#define VkglTestCase_001892_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001892_2 "bject.basic-stdLayout_UBO_SSBO-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001892, VkglTestCase_001892_1, VkglTestCase_001892_2);

#define VkglTestCase_001893_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001893_2 "bject.basic-stdLayout_UBO_SSBO-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001893, VkglTestCase_001893_1, VkglTestCase_001893_2);

#define VkglTestCase_001894_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001894_2 "bject.basic-stdLayout_UBO_SSBO-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001894, VkglTestCase_001894_1, VkglTestCase_001894_2);

#define VkglTestCase_001895_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001895_2 "bject.basic-stdLayout_UBO_SSBO-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001895, VkglTestCase_001895_1, VkglTestCase_001895_2);

#define VkglTestCase_001896_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001896_2 "object.basic-matrixOperations-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001896, VkglTestCase_001896_1, VkglTestCase_001896_2);

#define VkglTestCase_001897_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001897_2 "object.basic-matrixOperations-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001897, VkglTestCase_001897_1, VkglTestCase_001897_2);

#define VkglTestCase_001898_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001898_2 "object.basic-matrixOperations-case2-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001898, VkglTestCase_001898_1, VkglTestCase_001898_2);

#define VkglTestCase_001899_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001899_2 "object.basic-matrixOperations-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001899, VkglTestCase_001899_1, VkglTestCase_001899_2);

#define VkglTestCase_001900_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001900_2 "object.basic-matrixOperations-case3-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001900, VkglTestCase_001900_1, VkglTestCase_001900_2);

#define VkglTestCase_001901_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001901_2 "object.basic-matrixOperations-case3-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001901, VkglTestCase_001901_1, VkglTestCase_001901_2);

#define VkglTestCase_001902_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001902_2 "object.basic-matrixOperations-case4-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001902, VkglTestCase_001902_1, VkglTestCase_001902_2);

#define VkglTestCase_001903_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001903_2 "object.basic-matrixOperations-case4-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001903, VkglTestCase_001903_1, VkglTestCase_001903_2);

#define VkglTestCase_001904_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001904_2 "object.basic-matrixOperations-case5-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001904, VkglTestCase_001904_1, VkglTestCase_001904_2);

#define VkglTestCase_001905_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001905_2 "object.basic-matrixOperations-case5-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001905, VkglTestCase_001905_1, VkglTestCase_001905_2);

#define VkglTestCase_001906_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001906_2 "object.basic-matrixOperations-case6-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001906, VkglTestCase_001906_1, VkglTestCase_001906_2);

#define VkglTestCase_001907_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001907_2 "object.basic-matrixOperations-case6-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001907, VkglTestCase_001907_1, VkglTestCase_001907_2);

#define VkglTestCase_001908_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001908_2 "object.basic-matrixOperations-case7-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001908, VkglTestCase_001908_1, VkglTestCase_001908_2);

#define VkglTestCase_001909_1 "KHR-GLES31.core.shader_storage_buffer_"
#define VkglTestCase_001909_2 "object.basic-matrixOperations-case7-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001909, VkglTestCase_001909_1, VkglTestCase_001909_2);

#define VkglTestCase_001910_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001910_2 "fer_object.basic-readonly-writeonly"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001910, VkglTestCase_001910_1, VkglTestCase_001910_2);

#define VkglTestCase_001911_1 "KHR-GLES31.core.shader_storage"
#define VkglTestCase_001911_2 "_buffer_object.basic-name-match"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001911, VkglTestCase_001911_1, VkglTestCase_001911_2);

#define VkglTestCase_001912_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001912_2 "er_object.advanced-switchBuffers-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001912, VkglTestCase_001912_1, VkglTestCase_001912_2);

#define VkglTestCase_001913_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001913_2 "er_object.advanced-switchBuffers-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001913, VkglTestCase_001913_1, VkglTestCase_001913_2);

#define VkglTestCase_001914_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001914_2 "er_object.advanced-switchPrograms-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001914, VkglTestCase_001914_1, VkglTestCase_001914_2);

#define VkglTestCase_001915_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001915_2 "er_object.advanced-switchPrograms-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001915, VkglTestCase_001915_1, VkglTestCase_001915_2);

#define VkglTestCase_001916_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001916_2 "er_object.advanced-write-fragment-fs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001916, VkglTestCase_001916_1, VkglTestCase_001916_2);

#define VkglTestCase_001917_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001917_2 "er_object.advanced-write-fragment-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001917, VkglTestCase_001917_1, VkglTestCase_001917_2);

#define VkglTestCase_001918_1 "KHR-GLES31.core.shader_storage_buffer_ob"
#define VkglTestCase_001918_2 "ject.advanced-indirectAddressing-case1-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001918, VkglTestCase_001918_1, VkglTestCase_001918_2);

#define VkglTestCase_001919_1 "KHR-GLES31.core.shader_storage_buffer_ob"
#define VkglTestCase_001919_2 "ject.advanced-indirectAddressing-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001919, VkglTestCase_001919_1, VkglTestCase_001919_2);

#define VkglTestCase_001920_1 "KHR-GLES31.core.shader_storage_buffer_obj"
#define VkglTestCase_001920_2 "ect.advanced-indirectAddressing-case2-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001920, VkglTestCase_001920_1, VkglTestCase_001920_2);

#define VkglTestCase_001921_1 "KHR-GLES31.core.shader_storage_buffer_ob"
#define VkglTestCase_001921_2 "ject.advanced-indirectAddressing-case2-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001921, VkglTestCase_001921_1, VkglTestCase_001921_2);

#define VkglTestCase_001922_1 "KHR-GLES31.core.shader_storage_buffer"
#define VkglTestCase_001922_2 "_object.advanced-readWrite-case1-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001922, VkglTestCase_001922_1, VkglTestCase_001922_2);

#define VkglTestCase_001923_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001923_2 "r_object.advanced-readWrite-case1-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001923, VkglTestCase_001923_1, VkglTestCase_001923_2);

#define VkglTestCase_001924_1 "KHR-GLES31.core.shader_storage_b"
#define VkglTestCase_001924_2 "uffer_object.advanced-usage-case1"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001924, VkglTestCase_001924_1, VkglTestCase_001924_2);

#define VkglTestCase_001925_1 "KHR-GLES31.core.shader_storage_buf"
#define VkglTestCase_001925_2 "fer_object.advanced-usage-sync-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001925, VkglTestCase_001925_1, VkglTestCase_001925_2);

#define VkglTestCase_001926_1 "KHR-GLES31.core.shader_storage_bu"
#define VkglTestCase_001926_2 "ffer_object.advanced-usage-sync-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001926, VkglTestCase_001926_1, VkglTestCase_001926_2);

#define VkglTestCase_001927_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001927_2 "r_object.advanced-usage-operators-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001927, VkglTestCase_001927_1, VkglTestCase_001927_2);

#define VkglTestCase_001928_1 "KHR-GLES31.core.shader_storage_buffe"
#define VkglTestCase_001928_2 "r_object.advanced-usage-operators-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001928, VkglTestCase_001928_1, VkglTestCase_001928_2);

#define VkglTestCase_001929_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001929_2 "bject.advanced-unsizedArrayLength-cs-int"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001929, VkglTestCase_001929_1, VkglTestCase_001929_2);

#define VkglTestCase_001930_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001930_2 "bject.advanced-unsizedArrayLength-fs-int"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001930, VkglTestCase_001930_1, VkglTestCase_001930_2);

#define VkglTestCase_001931_1 "KHR-GLES31.core.shader_storage_buffer_o"
#define VkglTestCase_001931_2 "bject.advanced-unsizedArrayLength-vs-int"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001931, VkglTestCase_001931_1, VkglTestCase_001931_2);

#define VkglTestCase_001932_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001932_2 "t.advanced-unsizedArrayLength-cs-std430-vec"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001932, VkglTestCase_001932_1, VkglTestCase_001932_2);

#define VkglTestCase_001933_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001933_2 "t.advanced-unsizedArrayLength-cs-std430-matC"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001933, VkglTestCase_001933_1, VkglTestCase_001933_2);

#define VkglTestCase_001934_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001934_2 "t.advanced-unsizedArrayLength-cs-std430-matR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001934, VkglTestCase_001934_1, VkglTestCase_001934_2);

#define VkglTestCase_001935_1 "KHR-GLES31.core.shader_storage_buffer_object"
#define VkglTestCase_001935_2 ".advanced-unsizedArrayLength-cs-std430-struct"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001935, VkglTestCase_001935_1, VkglTestCase_001935_2);

#define VkglTestCase_001936_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001936_2 "t.advanced-unsizedArrayLength-cs-std140-vec"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001936, VkglTestCase_001936_1, VkglTestCase_001936_2);

#define VkglTestCase_001937_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001937_2 "t.advanced-unsizedArrayLength-cs-std140-matC"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001937, VkglTestCase_001937_1, VkglTestCase_001937_2);

#define VkglTestCase_001938_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001938_2 "t.advanced-unsizedArrayLength-cs-std140-matR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001938, VkglTestCase_001938_1, VkglTestCase_001938_2);

#define VkglTestCase_001939_1 "KHR-GLES31.core.shader_storage_buffer_object"
#define VkglTestCase_001939_2 ".advanced-unsizedArrayLength-cs-std140-struct"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001939, VkglTestCase_001939_1, VkglTestCase_001939_2);

#define VkglTestCase_001940_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001940_2 "t.advanced-unsizedArrayLength-cs-packed-vec"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001940, VkglTestCase_001940_1, VkglTestCase_001940_2);

#define VkglTestCase_001941_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001941_2 "t.advanced-unsizedArrayLength-cs-packed-matC"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001941, VkglTestCase_001941_1, VkglTestCase_001941_2);

#define VkglTestCase_001942_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001942_2 "t.advanced-unsizedArrayLength-cs-shared-matR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001942, VkglTestCase_001942_1, VkglTestCase_001942_2);

#define VkglTestCase_001943_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001943_2 "t.advanced-unsizedArrayLength-fs-std430-vec"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001943, VkglTestCase_001943_1, VkglTestCase_001943_2);

#define VkglTestCase_001944_1 "KHR-GLES31.core.shader_storage_buffer_object."
#define VkglTestCase_001944_2 "advanced-unsizedArrayLength-fs-std430-matC-pad"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001944, VkglTestCase_001944_1, VkglTestCase_001944_2);

#define VkglTestCase_001945_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001945_2 "t.advanced-unsizedArrayLength-fs-std140-matR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001945, VkglTestCase_001945_1, VkglTestCase_001945_2);

#define VkglTestCase_001946_1 "KHR-GLES31.core.shader_storage_buffer_object"
#define VkglTestCase_001946_2 ".advanced-unsizedArrayLength-fs-std140-struct"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001946, VkglTestCase_001946_1, VkglTestCase_001946_2);

#define VkglTestCase_001947_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001947_2 "t.advanced-unsizedArrayLength-vs-std430-vec"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001947, VkglTestCase_001947_1, VkglTestCase_001947_2);

#define VkglTestCase_001948_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001948_2 "t.advanced-unsizedArrayLength-vs-std140-matC"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001948, VkglTestCase_001948_1, VkglTestCase_001948_2);

#define VkglTestCase_001949_1 "KHR-GLES31.core.shader_storage_buffer_objec"
#define VkglTestCase_001949_2 "t.advanced-unsizedArrayLength-vs-packed-matR"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001949, VkglTestCase_001949_1, VkglTestCase_001949_2);

#define VkglTestCase_001950_1 "KHR-GLES31.core.shader_storage_buffer_object"
#define VkglTestCase_001950_2 ".advanced-unsizedArrayLength-vs-std140-struct"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001950, VkglTestCase_001950_1, VkglTestCase_001950_2);

#define VkglTestCase_001951_1 "KHR-GLES31.core.shader_storage_buffer_object."
#define VkglTestCase_001951_2 "advanced-unsizedArrayLength-cs-std430-vec-pad"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001951, VkglTestCase_001951_1, VkglTestCase_001951_2);

#define VkglTestCase_001952_1 "KHR-GLES31.core.shader_storage_buffer_object."
#define VkglTestCase_001952_2 "advanced-unsizedArrayLength-cs-std430-matC-pad"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001952, VkglTestCase_001952_1, VkglTestCase_001952_2);

#define VkglTestCase_001953_1 "KHR-GLES31.core.shader_storage_buffer_object."
#define VkglTestCase_001953_2 "advanced-unsizedArrayLength-cs-std140-matR-pad"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001953, VkglTestCase_001953_1, VkglTestCase_001953_2);

#define VkglTestCase_001954_1 "KHR-GLES31.core.shader_storage_buffer_object.a"
#define VkglTestCase_001954_2 "dvanced-unsizedArrayLength-cs-std430-struct-pad"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001954, VkglTestCase_001954_1, VkglTestCase_001954_2);

#define VkglTestCase_001955_1 "KHR-GLES31.core.shader_storage_buffer_object.advanc"
#define VkglTestCase_001955_2 "ed-unsizedArrayLength-cs-std430-vec-bindrangeOffset"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001955, VkglTestCase_001955_1, VkglTestCase_001955_2);

#define VkglTestCase_001956_1 "KHR-GLES31.core.shader_storage_buffer_object.advan"
#define VkglTestCase_001956_2 "ced-unsizedArrayLength-cs-std430-vec-bindrangeSize"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001956, VkglTestCase_001956_1, VkglTestCase_001956_2);

#define VkglTestCase_001957_1 "KHR-GLES31.core.shader_storage_buffer_object.advan"
#define VkglTestCase_001957_2 "ced-unsizedArrayLength-cs-std430-vec-bindbaseAfter"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001957, VkglTestCase_001957_1, VkglTestCase_001957_2);

#define VkglTestCase_001958_1 "KHR-GLES31.core.shader_storage_buffer_object.ad"
#define VkglTestCase_001958_2 "vanced-unsizedArrayLength-cs-std430-vec-indexing"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001958, VkglTestCase_001958_1, VkglTestCase_001958_2);

#define VkglTestCase_001959_1 "KHR-GLES31.core.shader_storage_b"
#define VkglTestCase_001959_2 "uffer_object.advanced-matrix-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001959, VkglTestCase_001959_1, VkglTestCase_001959_2);

#define VkglTestCase_001960_1 "KHR-GLES31.core.shader_storage_"
#define VkglTestCase_001960_2 "buffer_object.advanced-matrix-cs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001960, VkglTestCase_001960_1, VkglTestCase_001960_2);

#define VkglTestCase_001961_1 "KHR-GLES31.core.shader_storage_"
#define VkglTestCase_001961_2 "buffer_object.negative-api-bind"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001961, VkglTestCase_001961_1, VkglTestCase_001961_2);

#define VkglTestCase_001962_1 "KHR-GLES31.core.shader_storage_buff"
#define VkglTestCase_001962_2 "er_object.negative-glsl-compileTime"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001962, VkglTestCase_001962_1, VkglTestCase_001962_2);

#define VkglTestCase_001963_1 "KHR-GLES31.core.shader_storage_bu"
#define VkglTestCase_001963_2 "ffer_object.negative-glsl-linkTime"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001963, VkglTestCase_001963_1, VkglTestCase_001963_2);
