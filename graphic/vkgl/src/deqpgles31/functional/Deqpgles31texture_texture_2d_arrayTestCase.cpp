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

#define VkglTestCase_015365_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015365_2 "texture_2d_array.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015365, VkglTestCase_015365_1, VkglTestCase_015365_2);

#define VkglTestCase_015366_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015366_2 ".texture_2d_array.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015366, VkglTestCase_015366_1, VkglTestCase_015366_2);

#define VkglTestCase_015367_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015367_2 "texture_2d_array.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015367, VkglTestCase_015367_1, VkglTestCase_015367_2);

#define VkglTestCase_015368_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015368_2 "exture_2d_array.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015368, VkglTestCase_015368_1, VkglTestCase_015368_2);

#define VkglTestCase_015369_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015369_2 "texture_2d_array.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015369, VkglTestCase_015369_1, VkglTestCase_015369_2);

#define VkglTestCase_015370_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015370_2 ".texture_2d_array.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015370, VkglTestCase_015370_1, VkglTestCase_015370_2);

#define VkglTestCase_015371_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015371_2 "exture_2d_array.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015371, VkglTestCase_015371_1, VkglTestCase_015371_2);

#define VkglTestCase_015372_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015372_2 "exture_2d_array.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015372, VkglTestCase_015372_1, VkglTestCase_015372_2);

#define VkglTestCase_015373_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015373_2 "exture_2d_array.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015373, VkglTestCase_015373_1, VkglTestCase_015373_2);

#define VkglTestCase_015374_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015374_2 "texture_2d_array.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015374, VkglTestCase_015374_1, VkglTestCase_015374_2);

#define VkglTestCase_015375_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015375_2 "exture_2d_array.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015375, VkglTestCase_015375_1, VkglTestCase_015375_2);

#define VkglTestCase_015376_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015376_2 "xture_2d_array.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015376, VkglTestCase_015376_1, VkglTestCase_015376_2);

#define VkglTestCase_015377_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015377_2 "e_2d_array.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015377, VkglTestCase_015377_1, VkglTestCase_015377_2);

#define VkglTestCase_015378_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015378_2 "re_2d_array.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015378, VkglTestCase_015378_1, VkglTestCase_015378_2);

#define VkglTestCase_015379_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015379_2 "e_2d_array.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015379, VkglTestCase_015379_1, VkglTestCase_015379_2);

#define VkglTestCase_015380_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015380_2 "re_2d_array.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015380, VkglTestCase_015380_1, VkglTestCase_015380_2);
