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

#define VkglTestCase_015434_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015434_2 "e.texture_2d_multisample_array.is_texture"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015434, VkglTestCase_015434_1, VkglTestCase_015434_2);

#define VkglTestCase_015435_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015435_2 "re_2d_multisample_array.texture_swizzle_r_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015435, VkglTestCase_015435_1, VkglTestCase_015435_2);

#define VkglTestCase_015436_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015436_2 "ure_2d_multisample_array.texture_swizzle_r_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015436, VkglTestCase_015436_1, VkglTestCase_015436_2);

#define VkglTestCase_015437_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015437_2 "e_2d_multisample_array.texture_swizzle_r_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015437, VkglTestCase_015437_1, VkglTestCase_015437_2);

#define VkglTestCase_015438_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015438_2 "e_2d_multisample_array.texture_swizzle_r_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015438, VkglTestCase_015438_1, VkglTestCase_015438_2);

#define VkglTestCase_015439_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015439_2 "re_2d_multisample_array.texture_swizzle_g_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015439, VkglTestCase_015439_1, VkglTestCase_015439_2);

#define VkglTestCase_015440_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015440_2 "ure_2d_multisample_array.texture_swizzle_g_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015440, VkglTestCase_015440_1, VkglTestCase_015440_2);

#define VkglTestCase_015441_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015441_2 "e_2d_multisample_array.texture_swizzle_g_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015441, VkglTestCase_015441_1, VkglTestCase_015441_2);

#define VkglTestCase_015442_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015442_2 "e_2d_multisample_array.texture_swizzle_g_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015442, VkglTestCase_015442_1, VkglTestCase_015442_2);

#define VkglTestCase_015443_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015443_2 "re_2d_multisample_array.texture_swizzle_b_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015443, VkglTestCase_015443_1, VkglTestCase_015443_2);

#define VkglTestCase_015444_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015444_2 "ure_2d_multisample_array.texture_swizzle_b_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015444, VkglTestCase_015444_1, VkglTestCase_015444_2);

#define VkglTestCase_015445_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015445_2 "e_2d_multisample_array.texture_swizzle_b_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015445, VkglTestCase_015445_1, VkglTestCase_015445_2);

#define VkglTestCase_015446_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015446_2 "e_2d_multisample_array.texture_swizzle_b_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015446, VkglTestCase_015446_1, VkglTestCase_015446_2);

#define VkglTestCase_015447_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015447_2 "re_2d_multisample_array.texture_swizzle_a_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015447, VkglTestCase_015447_1, VkglTestCase_015447_2);

#define VkglTestCase_015448_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015448_2 "ure_2d_multisample_array.texture_swizzle_a_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015448, VkglTestCase_015448_1, VkglTestCase_015448_2);

#define VkglTestCase_015449_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015449_2 "e_2d_multisample_array.texture_swizzle_a_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015449, VkglTestCase_015449_1, VkglTestCase_015449_2);

#define VkglTestCase_015450_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015450_2 "e_2d_multisample_array.texture_swizzle_a_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015450, VkglTestCase_015450_1, VkglTestCase_015450_2);

#define VkglTestCase_015451_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015451_2 "e_2d_multisample_array.texture_base_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015451, VkglTestCase_015451_1, VkglTestCase_015451_2);

#define VkglTestCase_015452_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015452_2 "re_2d_multisample_array.texture_base_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015452, VkglTestCase_015452_1, VkglTestCase_015452_2);

#define VkglTestCase_015453_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015453_2 "e_2d_multisample_array.texture_base_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015453, VkglTestCase_015453_1, VkglTestCase_015453_2);

#define VkglTestCase_015454_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015454_2 "_2d_multisample_array.texture_base_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015454, VkglTestCase_015454_1, VkglTestCase_015454_2);

#define VkglTestCase_015455_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015455_2 "re_2d_multisample_array.texture_max_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015455, VkglTestCase_015455_1, VkglTestCase_015455_2);

#define VkglTestCase_015456_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015456_2 "ure_2d_multisample_array.texture_max_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015456, VkglTestCase_015456_1, VkglTestCase_015456_2);

#define VkglTestCase_015457_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015457_2 "e_2d_multisample_array.texture_max_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015457, VkglTestCase_015457_1, VkglTestCase_015457_2);

#define VkglTestCase_015458_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015458_2 "e_2d_multisample_array.texture_max_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015458, VkglTestCase_015458_1, VkglTestCase_015458_2);

#define VkglTestCase_015459_1 "dEQP-GLES31.functional.state_query.texture.texture_2"
#define VkglTestCase_015459_2 "d_multisample_array.texture_immutable_levels_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015459, VkglTestCase_015459_1, VkglTestCase_015459_2);

#define VkglTestCase_015460_1 "dEQP-GLES31.functional.state_query.texture.texture_"
#define VkglTestCase_015460_2 "2d_multisample_array.texture_immutable_levels_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015460, VkglTestCase_015460_1, VkglTestCase_015460_2);

#define VkglTestCase_015461_1 "dEQP-GLES31.functional.state_query.texture.texture_2"
#define VkglTestCase_015461_2 "d_multisample_array.texture_immutable_levels_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015461, VkglTestCase_015461_1, VkglTestCase_015461_2);

#define VkglTestCase_015462_1 "dEQP-GLES31.functional.state_query.texture.texture_2d"
#define VkglTestCase_015462_2 "_multisample_array.texture_immutable_levels_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015462, VkglTestCase_015462_1, VkglTestCase_015462_2);

#define VkglTestCase_015463_1 "dEQP-GLES31.functional.state_query.texture.texture_2"
#define VkglTestCase_015463_2 "d_multisample_array.texture_immutable_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015463, VkglTestCase_015463_1, VkglTestCase_015463_2);

#define VkglTestCase_015464_1 "dEQP-GLES31.functional.state_query.texture.texture_"
#define VkglTestCase_015464_2 "2d_multisample_array.texture_immutable_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015464, VkglTestCase_015464_1, VkglTestCase_015464_2);

#define VkglTestCase_015465_1 "dEQP-GLES31.functional.state_query.texture.texture_2"
#define VkglTestCase_015465_2 "d_multisample_array.texture_immutable_format_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015465, VkglTestCase_015465_1, VkglTestCase_015465_2);

#define VkglTestCase_015466_1 "dEQP-GLES31.functional.state_query.texture.texture_2d"
#define VkglTestCase_015466_2 "_multisample_array.texture_immutable_format_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015466, VkglTestCase_015466_1, VkglTestCase_015466_2);

#define VkglTestCase_015467_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015467_2 "e_2d_multisample_array.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015467, VkglTestCase_015467_1, VkglTestCase_015467_2);

#define VkglTestCase_015468_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015468_2 "re_2d_multisample_array.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015468, VkglTestCase_015468_1, VkglTestCase_015468_2);

#define VkglTestCase_015469_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015469_2 "e_2d_multisample_array.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015469, VkglTestCase_015469_1, VkglTestCase_015469_2);

#define VkglTestCase_015470_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015470_2 "_2d_multisample_array.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015470, VkglTestCase_015470_1, VkglTestCase_015470_2);
