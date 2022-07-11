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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015851_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015851_2 "ure_level.texture_buffer.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015851, VkglTestCase_015851_1, VkglTestCase_015851_2);

#define VkglTestCase_015852_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015852_2 "ture_level.texture_buffer.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015852, VkglTestCase_015852_1, VkglTestCase_015852_2);

#define VkglTestCase_015853_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015853_2 "l.texture_buffer.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015853, VkglTestCase_015853_1, VkglTestCase_015853_2);

#define VkglTestCase_015854_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015854_2 "el.texture_buffer.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015854, VkglTestCase_015854_1, VkglTestCase_015854_2);

#define VkglTestCase_015855_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015855_2 "ture_level.texture_buffer.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015855, VkglTestCase_015855_1, VkglTestCase_015855_2);

#define VkglTestCase_015856_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015856_2 "xture_level.texture_buffer.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015856, VkglTestCase_015856_1, VkglTestCase_015856_2);

#define VkglTestCase_015857_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015857_2 "ure_level.texture_buffer.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015857, VkglTestCase_015857_1, VkglTestCase_015857_2);

#define VkglTestCase_015858_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015858_2 "ture_level.texture_buffer.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015858, VkglTestCase_015858_1, VkglTestCase_015858_2);

#define VkglTestCase_015859_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015859_2 "ture_level.texture_buffer.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015859, VkglTestCase_015859_1, VkglTestCase_015859_2);

#define VkglTestCase_015860_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015860_2 "xture_level.texture_buffer.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015860, VkglTestCase_015860_1, VkglTestCase_015860_2);

#define VkglTestCase_015861_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015861_2 "level.texture_buffer.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015861, VkglTestCase_015861_1, VkglTestCase_015861_2);

#define VkglTestCase_015862_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015862_2 "_level.texture_buffer.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015862, VkglTestCase_015862_1, VkglTestCase_015862_2);

#define VkglTestCase_015863_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015863_2 "re_level.texture_buffer.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015863, VkglTestCase_015863_1, VkglTestCase_015863_2);

#define VkglTestCase_015864_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015864_2 "ure_level.texture_buffer.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015864, VkglTestCase_015864_1, VkglTestCase_015864_2);

#define VkglTestCase_015865_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015865_2 "e_level.texture_buffer.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015865, VkglTestCase_015865_1, VkglTestCase_015865_2);

#define VkglTestCase_015866_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015866_2 "re_level.texture_buffer.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015866, VkglTestCase_015866_1, VkglTestCase_015866_2);

#define VkglTestCase_015867_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015867_2 "re_level.texture_buffer.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015867, VkglTestCase_015867_1, VkglTestCase_015867_2);

#define VkglTestCase_015868_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015868_2 "ure_level.texture_buffer.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015868, VkglTestCase_015868_1, VkglTestCase_015868_2);

#define VkglTestCase_015869_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015869_2 "e_level.texture_buffer.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015869, VkglTestCase_015869_1, VkglTestCase_015869_2);

#define VkglTestCase_015870_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015870_2 "re_level.texture_buffer.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015870, VkglTestCase_015870_1, VkglTestCase_015870_2);

#define VkglTestCase_015871_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015871_2 "e_level.texture_buffer.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015871, VkglTestCase_015871_1, VkglTestCase_015871_2);

#define VkglTestCase_015872_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015872_2 "re_level.texture_buffer.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015872, VkglTestCase_015872_1, VkglTestCase_015872_2);

#define VkglTestCase_015873_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015873_2 "_level.texture_buffer.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015873, VkglTestCase_015873_1, VkglTestCase_015873_2);

#define VkglTestCase_015874_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015874_2 "e_level.texture_buffer.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015874, VkglTestCase_015874_1, VkglTestCase_015874_2);

#define VkglTestCase_015875_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015875_2 "e_level.texture_buffer.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015875, VkglTestCase_015875_1, VkglTestCase_015875_2);

#define VkglTestCase_015876_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015876_2 "re_level.texture_buffer.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015876, VkglTestCase_015876_1, VkglTestCase_015876_2);

#define VkglTestCase_015877_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015877_2 "re_level.texture_buffer.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015877, VkglTestCase_015877_1, VkglTestCase_015877_2);

#define VkglTestCase_015878_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015878_2 "ure_level.texture_buffer.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015878, VkglTestCase_015878_1, VkglTestCase_015878_2);

#define VkglTestCase_015879_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015879_2 "e_level.texture_buffer.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015879, VkglTestCase_015879_1, VkglTestCase_015879_2);

#define VkglTestCase_015880_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015880_2 "re_level.texture_buffer.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015880, VkglTestCase_015880_1, VkglTestCase_015880_2);

#define VkglTestCase_015881_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015881_2 "re_level.texture_buffer.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015881, VkglTestCase_015881_1, VkglTestCase_015881_2);

#define VkglTestCase_015882_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015882_2 "ure_level.texture_buffer.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015882, VkglTestCase_015882_1, VkglTestCase_015882_2);

#define VkglTestCase_015883_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015883_2 "e_level.texture_buffer.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015883, VkglTestCase_015883_1, VkglTestCase_015883_2);

#define VkglTestCase_015884_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015884_2 "re_level.texture_buffer.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015884, VkglTestCase_015884_1, VkglTestCase_015884_2);

#define VkglTestCase_015885_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015885_2 "e_level.texture_buffer.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015885, VkglTestCase_015885_1, VkglTestCase_015885_2);

#define VkglTestCase_015886_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015886_2 "re_level.texture_buffer.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015886, VkglTestCase_015886_1, VkglTestCase_015886_2);

#define VkglTestCase_015887_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015887_2 "e_level.texture_buffer.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015887, VkglTestCase_015887_1, VkglTestCase_015887_2);

#define VkglTestCase_015888_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015888_2 "re_level.texture_buffer.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015888, VkglTestCase_015888_1, VkglTestCase_015888_2);

#define VkglTestCase_015889_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015889_2 ".texture_buffer.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015889, VkglTestCase_015889_1, VkglTestCase_015889_2);

#define VkglTestCase_015890_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015890_2 "l.texture_buffer.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015890, VkglTestCase_015890_1, VkglTestCase_015890_2);

#define VkglTestCase_015891_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015891_2 "_level.texture_buffer.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015891, VkglTestCase_015891_1, VkglTestCase_015891_2);

#define VkglTestCase_015892_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015892_2 "e_level.texture_buffer.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015892, VkglTestCase_015892_1, VkglTestCase_015892_2);

#define VkglTestCase_015893_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015893_2 "e_level.texture_buffer.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015893, VkglTestCase_015893_1, VkglTestCase_015893_2);

#define VkglTestCase_015894_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015894_2 "re_level.texture_buffer.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015894, VkglTestCase_015894_1, VkglTestCase_015894_2);
