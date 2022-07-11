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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015632_1 "dEQP-GLES2.functional.state_query.texture."
#define VkglTestCase_015632_2 "texture_2d_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015632, VkglTestCase_015632_1, VkglTestCase_015632_2);

#define VkglTestCase_015633_1 "dEQP-GLES2.functional.state_query.texture."
#define VkglTestCase_015633_2 "texture_2d_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015633, VkglTestCase_015633_1, VkglTestCase_015633_2);

#define VkglTestCase_015634_1 "dEQP-GLES2.functional.state_query.texture."
#define VkglTestCase_015634_2 "texture_2d_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015634, VkglTestCase_015634_1, VkglTestCase_015634_2);

#define VkglTestCase_015635_1 "dEQP-GLES2.functional.state_query.texture."
#define VkglTestCase_015635_2 "texture_2d_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015635, VkglTestCase_015635_1, VkglTestCase_015635_2);

#define VkglTestCase_015636_1 "dEQP-GLES2.functional.state_query.texture.te"
#define VkglTestCase_015636_2 "xture_2d_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015636, VkglTestCase_015636_1, VkglTestCase_015636_2);

#define VkglTestCase_015637_1 "dEQP-GLES2.functional.state_query.texture.te"
#define VkglTestCase_015637_2 "xture_2d_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015637, VkglTestCase_015637_1, VkglTestCase_015637_2);

#define VkglTestCase_015638_1 "dEQP-GLES2.functional.state_query.texture.te"
#define VkglTestCase_015638_2 "xture_2d_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015638, VkglTestCase_015638_1, VkglTestCase_015638_2);

#define VkglTestCase_015639_1 "dEQP-GLES2.functional.state_query.texture.te"
#define VkglTestCase_015639_2 "xture_2d_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015639, VkglTestCase_015639_1, VkglTestCase_015639_2);

#define VkglTestCase_015640_1 "dEQP-GLES2.functional.state_query.texture.tex"
#define VkglTestCase_015640_2 "ture_cube_map_texture_wrap_s_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015640, VkglTestCase_015640_1, VkglTestCase_015640_2);

#define VkglTestCase_015641_1 "dEQP-GLES2.functional.state_query.texture.tex"
#define VkglTestCase_015641_2 "ture_cube_map_texture_wrap_s_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015641, VkglTestCase_015641_1, VkglTestCase_015641_2);

#define VkglTestCase_015642_1 "dEQP-GLES2.functional.state_query.texture.tex"
#define VkglTestCase_015642_2 "ture_cube_map_texture_wrap_t_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015642, VkglTestCase_015642_1, VkglTestCase_015642_2);

#define VkglTestCase_015643_1 "dEQP-GLES2.functional.state_query.texture.tex"
#define VkglTestCase_015643_2 "ture_cube_map_texture_wrap_t_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015643, VkglTestCase_015643_1, VkglTestCase_015643_2);

#define VkglTestCase_015644_1 "dEQP-GLES2.functional.state_query.texture.textu"
#define VkglTestCase_015644_2 "re_cube_map_texture_mag_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015644, VkglTestCase_015644_1, VkglTestCase_015644_2);

#define VkglTestCase_015645_1 "dEQP-GLES2.functional.state_query.texture.textu"
#define VkglTestCase_015645_2 "re_cube_map_texture_mag_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015645, VkglTestCase_015645_1, VkglTestCase_015645_2);

#define VkglTestCase_015646_1 "dEQP-GLES2.functional.state_query.texture.textu"
#define VkglTestCase_015646_2 "re_cube_map_texture_min_filter_gettexparameteri"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015646, VkglTestCase_015646_1, VkglTestCase_015646_2);

#define VkglTestCase_015647_1 "dEQP-GLES2.functional.state_query.texture.textu"
#define VkglTestCase_015647_2 "re_cube_map_texture_min_filter_gettexparameterf"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015647, VkglTestCase_015647_1, VkglTestCase_015647_2);
