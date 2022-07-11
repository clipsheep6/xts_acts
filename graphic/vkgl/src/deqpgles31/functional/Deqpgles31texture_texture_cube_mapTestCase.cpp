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

#define VkglTestCase_015381_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015381_2 "texture_cube_map.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015381, VkglTestCase_015381_1, VkglTestCase_015381_2);

#define VkglTestCase_015382_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015382_2 ".texture_cube_map.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015382, VkglTestCase_015382_1, VkglTestCase_015382_2);

#define VkglTestCase_015383_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015383_2 "texture_cube_map.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015383, VkglTestCase_015383_1, VkglTestCase_015383_2);

#define VkglTestCase_015384_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015384_2 "exture_cube_map.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015384, VkglTestCase_015384_1, VkglTestCase_015384_2);

#define VkglTestCase_015385_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015385_2 "texture_cube_map.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015385, VkglTestCase_015385_1, VkglTestCase_015385_2);

#define VkglTestCase_015386_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015386_2 ".texture_cube_map.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015386, VkglTestCase_015386_1, VkglTestCase_015386_2);

#define VkglTestCase_015387_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015387_2 "exture_cube_map.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015387, VkglTestCase_015387_1, VkglTestCase_015387_2);

#define VkglTestCase_015388_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015388_2 "exture_cube_map.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015388, VkglTestCase_015388_1, VkglTestCase_015388_2);

#define VkglTestCase_015389_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015389_2 "exture_cube_map.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015389, VkglTestCase_015389_1, VkglTestCase_015389_2);

#define VkglTestCase_015390_1 "dEQP-GLES31.functional.state_query.texture."
#define VkglTestCase_015390_2 "texture_cube_map.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015390, VkglTestCase_015390_1, VkglTestCase_015390_2);

#define VkglTestCase_015391_1 "dEQP-GLES31.functional.state_query.texture.t"
#define VkglTestCase_015391_2 "exture_cube_map.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015391, VkglTestCase_015391_1, VkglTestCase_015391_2);

#define VkglTestCase_015392_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015392_2 "xture_cube_map.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015392, VkglTestCase_015392_1, VkglTestCase_015392_2);

#define VkglTestCase_015393_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015393_2 "e_cube_map.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015393, VkglTestCase_015393_1, VkglTestCase_015393_2);

#define VkglTestCase_015394_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015394_2 "re_cube_map.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015394, VkglTestCase_015394_1, VkglTestCase_015394_2);

#define VkglTestCase_015395_1 "dEQP-GLES31.functional.state_query.texture.textur"
#define VkglTestCase_015395_2 "e_cube_map.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015395, VkglTestCase_015395_1, VkglTestCase_015395_2);

#define VkglTestCase_015396_1 "dEQP-GLES31.functional.state_query.texture.textu"
#define VkglTestCase_015396_2 "re_cube_map.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015396, VkglTestCase_015396_1, VkglTestCase_015396_2);
