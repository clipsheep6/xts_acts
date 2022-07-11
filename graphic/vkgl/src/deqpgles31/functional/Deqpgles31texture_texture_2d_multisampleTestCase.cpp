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

#define VkglTestCase_015397_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015397_2 "ture.texture_2d_multisample.is_texture"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015397, VkglTestCase_015397_1, VkglTestCase_015397_2);

#define VkglTestCase_015398_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015398_2 "xture_2d_multisample.texture_swizzle_r_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015398, VkglTestCase_015398_1, VkglTestCase_015398_2);

#define VkglTestCase_015399_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015399_2 "exture_2d_multisample.texture_swizzle_r_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015399, VkglTestCase_015399_1, VkglTestCase_015399_2);

#define VkglTestCase_015400_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015400_2 "ture_2d_multisample.texture_swizzle_r_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015400, VkglTestCase_015400_1, VkglTestCase_015400_2);

#define VkglTestCase_015401_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015401_2 "ture_2d_multisample.texture_swizzle_r_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015401, VkglTestCase_015401_1, VkglTestCase_015401_2);

#define VkglTestCase_015402_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015402_2 "xture_2d_multisample.texture_swizzle_g_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015402, VkglTestCase_015402_1, VkglTestCase_015402_2);

#define VkglTestCase_015403_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015403_2 "exture_2d_multisample.texture_swizzle_g_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015403, VkglTestCase_015403_1, VkglTestCase_015403_2);

#define VkglTestCase_015404_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015404_2 "ture_2d_multisample.texture_swizzle_g_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015404, VkglTestCase_015404_1, VkglTestCase_015404_2);

#define VkglTestCase_015405_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015405_2 "ture_2d_multisample.texture_swizzle_g_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015405, VkglTestCase_015405_1, VkglTestCase_015405_2);

#define VkglTestCase_015406_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015406_2 "xture_2d_multisample.texture_swizzle_b_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015406, VkglTestCase_015406_1, VkglTestCase_015406_2);

#define VkglTestCase_015407_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015407_2 "exture_2d_multisample.texture_swizzle_b_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015407, VkglTestCase_015407_1, VkglTestCase_015407_2);

#define VkglTestCase_015408_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015408_2 "ture_2d_multisample.texture_swizzle_b_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015408, VkglTestCase_015408_1, VkglTestCase_015408_2);

#define VkglTestCase_015409_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015409_2 "ture_2d_multisample.texture_swizzle_b_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015409, VkglTestCase_015409_1, VkglTestCase_015409_2);

#define VkglTestCase_015410_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015410_2 "xture_2d_multisample.texture_swizzle_a_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015410, VkglTestCase_015410_1, VkglTestCase_015410_2);

#define VkglTestCase_015411_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015411_2 "exture_2d_multisample.texture_swizzle_a_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015411, VkglTestCase_015411_1, VkglTestCase_015411_2);

#define VkglTestCase_015412_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015412_2 "ture_2d_multisample.texture_swizzle_a_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015412, VkglTestCase_015412_1, VkglTestCase_015412_2);

#define VkglTestCase_015413_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015413_2 "ture_2d_multisample.texture_swizzle_a_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015413, VkglTestCase_015413_1, VkglTestCase_015413_2);

#define VkglTestCase_015414_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015414_2 "ture_2d_multisample.texture_base_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015414, VkglTestCase_015414_1, VkglTestCase_015414_2);

#define VkglTestCase_015415_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015415_2 "xture_2d_multisample.texture_base_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015415, VkglTestCase_015415_1, VkglTestCase_015415_2);

#define VkglTestCase_015416_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015416_2 "ture_2d_multisample.texture_base_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015416, VkglTestCase_015416_1, VkglTestCase_015416_2);

#define VkglTestCase_015417_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015417_2 "ure_2d_multisample.texture_base_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015417, VkglTestCase_015417_1, VkglTestCase_015417_2);

#define VkglTestCase_015418_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015418_2 "xture_2d_multisample.texture_max_level_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015418, VkglTestCase_015418_1, VkglTestCase_015418_2);

#define VkglTestCase_015419_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015419_2 "exture_2d_multisample.texture_max_level_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015419, VkglTestCase_015419_1, VkglTestCase_015419_2);

#define VkglTestCase_015420_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015420_2 "ture_2d_multisample.texture_max_level_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015420, VkglTestCase_015420_1, VkglTestCase_015420_2);

#define VkglTestCase_015421_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015421_2 "ture_2d_multisample.texture_max_level_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015421, VkglTestCase_015421_1, VkglTestCase_015421_2);

#define VkglTestCase_015422_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015422_2 "e_2d_multisample.texture_immutable_levels_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015422, VkglTestCase_015422_1, VkglTestCase_015422_2);

#define VkglTestCase_015423_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015423_2 "re_2d_multisample.texture_immutable_levels_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015423, VkglTestCase_015423_1, VkglTestCase_015423_2);

#define VkglTestCase_015424_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015424_2 "e_2d_multisample.texture_immutable_levels_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015424, VkglTestCase_015424_1, VkglTestCase_015424_2);

#define VkglTestCase_015425_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015425_2 "_2d_multisample.texture_immutable_levels_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015425, VkglTestCase_015425_1, VkglTestCase_015425_2);

#define VkglTestCase_015426_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015426_2 "e_2d_multisample.texture_immutable_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015426, VkglTestCase_015426_1, VkglTestCase_015426_2);

#define VkglTestCase_015427_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015427_2 "re_2d_multisample.texture_immutable_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015427, VkglTestCase_015427_1, VkglTestCase_015427_2);

#define VkglTestCase_015428_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015428_2 "e_2d_multisample.texture_immutable_format_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015428, VkglTestCase_015428_1, VkglTestCase_015428_2);

#define VkglTestCase_015429_1 "dEQP-GLES31.functional.state_query.texture.texture"
#define VkglTestCase_015429_2 "_2d_multisample.texture_immutable_format_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015429, VkglTestCase_015429_1, VkglTestCase_015429_2);

#define VkglTestCase_015430_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015430_2 "ture_2d_multisample.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015430, VkglTestCase_015430_1, VkglTestCase_015430_2);

#define VkglTestCase_015431_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015431_2 "xture_2d_multisample.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015431, VkglTestCase_015431_1, VkglTestCase_015431_2);

#define VkglTestCase_015432_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015432_2 "ture_2d_multisample.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015432, VkglTestCase_015432_1, VkglTestCase_015432_2);

#define VkglTestCase_015433_1 "dEQP-GLES31.functional.state_query.texture.text"
#define VkglTestCase_015433_2 "ure_2d_multisample.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015433, VkglTestCase_015433_1, VkglTestCase_015433_2);
