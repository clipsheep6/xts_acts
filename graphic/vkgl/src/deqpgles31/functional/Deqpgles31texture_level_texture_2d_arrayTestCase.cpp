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

#define VkglTestCase_015675_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015675_2 "re_level.texture_2d_array.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015675, VkglTestCase_015675_1, VkglTestCase_015675_2);

#define VkglTestCase_015676_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015676_2 "ure_level.texture_2d_array.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015676, VkglTestCase_015676_1, VkglTestCase_015676_2);

#define VkglTestCase_015677_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015677_2 ".texture_2d_array.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015677, VkglTestCase_015677_1, VkglTestCase_015677_2);

#define VkglTestCase_015678_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015678_2 "l.texture_2d_array.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015678, VkglTestCase_015678_1, VkglTestCase_015678_2);

#define VkglTestCase_015679_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015679_2 "ure_level.texture_2d_array.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015679, VkglTestCase_015679_1, VkglTestCase_015679_2);

#define VkglTestCase_015680_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015680_2 "ture_level.texture_2d_array.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015680, VkglTestCase_015680_1, VkglTestCase_015680_2);

#define VkglTestCase_015681_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015681_2 "re_level.texture_2d_array.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015681, VkglTestCase_015681_1, VkglTestCase_015681_2);

#define VkglTestCase_015682_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015682_2 "ure_level.texture_2d_array.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015682, VkglTestCase_015682_1, VkglTestCase_015682_2);

#define VkglTestCase_015683_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015683_2 "ure_level.texture_2d_array.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015683, VkglTestCase_015683_1, VkglTestCase_015683_2);

#define VkglTestCase_015684_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015684_2 "ture_level.texture_2d_array.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015684, VkglTestCase_015684_1, VkglTestCase_015684_2);

#define VkglTestCase_015685_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015685_2 "evel.texture_2d_array.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015685, VkglTestCase_015685_1, VkglTestCase_015685_2);

#define VkglTestCase_015686_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015686_2 "level.texture_2d_array.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015686, VkglTestCase_015686_1, VkglTestCase_015686_2);

#define VkglTestCase_015687_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015687_2 "e_level.texture_2d_array.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015687, VkglTestCase_015687_1, VkglTestCase_015687_2);

#define VkglTestCase_015688_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015688_2 "re_level.texture_2d_array.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015688, VkglTestCase_015688_1, VkglTestCase_015688_2);

#define VkglTestCase_015689_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015689_2 "_level.texture_2d_array.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015689, VkglTestCase_015689_1, VkglTestCase_015689_2);

#define VkglTestCase_015690_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015690_2 "e_level.texture_2d_array.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015690, VkglTestCase_015690_1, VkglTestCase_015690_2);

#define VkglTestCase_015691_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015691_2 "e_level.texture_2d_array.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015691, VkglTestCase_015691_1, VkglTestCase_015691_2);

#define VkglTestCase_015692_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015692_2 "re_level.texture_2d_array.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015692, VkglTestCase_015692_1, VkglTestCase_015692_2);

#define VkglTestCase_015693_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015693_2 "_level.texture_2d_array.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015693, VkglTestCase_015693_1, VkglTestCase_015693_2);

#define VkglTestCase_015694_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015694_2 "e_level.texture_2d_array.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015694, VkglTestCase_015694_1, VkglTestCase_015694_2);

#define VkglTestCase_015695_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015695_2 "_level.texture_2d_array.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015695, VkglTestCase_015695_1, VkglTestCase_015695_2);

#define VkglTestCase_015696_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015696_2 "e_level.texture_2d_array.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015696, VkglTestCase_015696_1, VkglTestCase_015696_2);

#define VkglTestCase_015697_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015697_2 "level.texture_2d_array.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015697, VkglTestCase_015697_1, VkglTestCase_015697_2);

#define VkglTestCase_015698_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015698_2 "_level.texture_2d_array.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015698, VkglTestCase_015698_1, VkglTestCase_015698_2);

#define VkglTestCase_015699_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015699_2 "_level.texture_2d_array.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015699, VkglTestCase_015699_1, VkglTestCase_015699_2);

#define VkglTestCase_015700_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015700_2 "e_level.texture_2d_array.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015700, VkglTestCase_015700_1, VkglTestCase_015700_2);

#define VkglTestCase_015701_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015701_2 "e_level.texture_2d_array.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015701, VkglTestCase_015701_1, VkglTestCase_015701_2);

#define VkglTestCase_015702_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015702_2 "re_level.texture_2d_array.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015702, VkglTestCase_015702_1, VkglTestCase_015702_2);

#define VkglTestCase_015703_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015703_2 "_level.texture_2d_array.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015703, VkglTestCase_015703_1, VkglTestCase_015703_2);

#define VkglTestCase_015704_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015704_2 "e_level.texture_2d_array.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015704, VkglTestCase_015704_1, VkglTestCase_015704_2);

#define VkglTestCase_015705_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015705_2 "e_level.texture_2d_array.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015705, VkglTestCase_015705_1, VkglTestCase_015705_2);

#define VkglTestCase_015706_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015706_2 "re_level.texture_2d_array.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015706, VkglTestCase_015706_1, VkglTestCase_015706_2);

#define VkglTestCase_015707_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015707_2 "_level.texture_2d_array.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015707, VkglTestCase_015707_1, VkglTestCase_015707_2);

#define VkglTestCase_015708_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015708_2 "e_level.texture_2d_array.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015708, VkglTestCase_015708_1, VkglTestCase_015708_2);

#define VkglTestCase_015709_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015709_2 "_level.texture_2d_array.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015709, VkglTestCase_015709_1, VkglTestCase_015709_2);

#define VkglTestCase_015710_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015710_2 "e_level.texture_2d_array.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015710, VkglTestCase_015710_1, VkglTestCase_015710_2);

#define VkglTestCase_015711_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015711_2 "_level.texture_2d_array.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015711, VkglTestCase_015711_1, VkglTestCase_015711_2);

#define VkglTestCase_015712_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015712_2 "e_level.texture_2d_array.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015712, VkglTestCase_015712_1, VkglTestCase_015712_2);

#define VkglTestCase_015713_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015713_2 "texture_2d_array.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015713, VkglTestCase_015713_1, VkglTestCase_015713_2);

#define VkglTestCase_015714_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015714_2 ".texture_2d_array.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015714, VkglTestCase_015714_1, VkglTestCase_015714_2);

#define VkglTestCase_015715_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015715_2 "level.texture_2d_array.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015715, VkglTestCase_015715_1, VkglTestCase_015715_2);

#define VkglTestCase_015716_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015716_2 "_level.texture_2d_array.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015716, VkglTestCase_015716_1, VkglTestCase_015716_2);

#define VkglTestCase_015717_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015717_2 "_level.texture_2d_array.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015717, VkglTestCase_015717_1, VkglTestCase_015717_2);

#define VkglTestCase_015718_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015718_2 "e_level.texture_2d_array.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015718, VkglTestCase_015718_1, VkglTestCase_015718_2);
