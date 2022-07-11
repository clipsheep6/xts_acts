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

#define VkglTestCase_015347_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015347_2 "re.texture_3d.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015347, VkglTestCase_015347_1, VkglTestCase_015347_2);

#define VkglTestCase_015348_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015348_2 "ure.texture_3d.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015348, VkglTestCase_015348_1, VkglTestCase_015348_2);

#define VkglTestCase_015349_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015349_2 "re.texture_3d.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015349, VkglTestCase_015349_1, VkglTestCase_015349_2);

#define VkglTestCase_015350_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015350_2 "e.texture_3d.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015350, VkglTestCase_015350_1, VkglTestCase_015350_2);

#define VkglTestCase_015351_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015351_2 "re.texture_3d.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015351, VkglTestCase_015351_1, VkglTestCase_015351_2);

#define VkglTestCase_015352_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015352_2 "ure.texture_3d.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015352, VkglTestCase_015352_1, VkglTestCase_015352_2);

#define VkglTestCase_015353_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015353_2 "e.texture_3d.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015353, VkglTestCase_015353_1, VkglTestCase_015353_2);

#define VkglTestCase_015354_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015354_2 "e.texture_3d.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015354, VkglTestCase_015354_1, VkglTestCase_015354_2);

#define VkglTestCase_015355_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015355_2 "e.texture_3d.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015355, VkglTestCase_015355_1, VkglTestCase_015355_2);

#define VkglTestCase_015356_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015356_2 "re.texture_3d.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015356, VkglTestCase_015356_1, VkglTestCase_015356_2);

#define VkglTestCase_015357_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015357_2 "e.texture_3d.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015357, VkglTestCase_015357_1, VkglTestCase_015357_2);

#define VkglTestCase_015358_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015358_2 ".texture_3d.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015358, VkglTestCase_015358_1, VkglTestCase_015358_2);

#define VkglTestCase_015359_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015359_2 "ture_3d.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015359, VkglTestCase_015359_1, VkglTestCase_015359_2);

#define VkglTestCase_015360_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015360_2 "xture_3d.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015360, VkglTestCase_015360_1, VkglTestCase_015360_2);

#define VkglTestCase_015361_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015361_2 "ture_3d.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015361, VkglTestCase_015361_1, VkglTestCase_015361_2);

#define VkglTestCase_015362_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015362_2 "xture_3d.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015362, VkglTestCase_015362_1, VkglTestCase_015362_2);

#define VkglTestCase_015363_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015363_2 "ture_3d.texture_wrap_r_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015363, VkglTestCase_015363_1, VkglTestCase_015363_2);

#define VkglTestCase_015364_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015364_2 "xture_3d.texture_wrap_r_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015364, VkglTestCase_015364_1, VkglTestCase_015364_2);
