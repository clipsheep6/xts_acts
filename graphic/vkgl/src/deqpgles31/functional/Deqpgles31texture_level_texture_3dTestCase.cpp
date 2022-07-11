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

#define VkglTestCase_015631_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015631_2 "xture_level.texture_3d.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015631, VkglTestCase_015631_1, VkglTestCase_015631_2);

#define VkglTestCase_015632_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015632_2 "exture_level.texture_3d.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015632, VkglTestCase_015632_1, VkglTestCase_015632_2);

#define VkglTestCase_015633_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015633_2 "vel.texture_3d.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015633, VkglTestCase_015633_1, VkglTestCase_015633_2);

#define VkglTestCase_015634_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015634_2 "evel.texture_3d.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015634, VkglTestCase_015634_1, VkglTestCase_015634_2);

#define VkglTestCase_015635_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015635_2 "exture_level.texture_3d.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015635, VkglTestCase_015635_1, VkglTestCase_015635_2);

#define VkglTestCase_015636_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015636_2 "texture_level.texture_3d.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015636, VkglTestCase_015636_1, VkglTestCase_015636_2);

#define VkglTestCase_015637_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015637_2 "xture_level.texture_3d.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015637, VkglTestCase_015637_1, VkglTestCase_015637_2);

#define VkglTestCase_015638_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015638_2 "exture_level.texture_3d.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015638, VkglTestCase_015638_1, VkglTestCase_015638_2);

#define VkglTestCase_015639_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015639_2 "exture_level.texture_3d.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015639, VkglTestCase_015639_1, VkglTestCase_015639_2);

#define VkglTestCase_015640_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015640_2 "texture_level.texture_3d.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015640, VkglTestCase_015640_1, VkglTestCase_015640_2);

#define VkglTestCase_015641_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015641_2 "e_level.texture_3d.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015641, VkglTestCase_015641_1, VkglTestCase_015641_2);

#define VkglTestCase_015642_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015642_2 "re_level.texture_3d.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015642, VkglTestCase_015642_1, VkglTestCase_015642_2);

#define VkglTestCase_015643_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015643_2 "ture_level.texture_3d.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015643, VkglTestCase_015643_1, VkglTestCase_015643_2);

#define VkglTestCase_015644_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015644_2 "xture_level.texture_3d.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015644, VkglTestCase_015644_1, VkglTestCase_015644_2);

#define VkglTestCase_015645_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015645_2 "ure_level.texture_3d.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015645, VkglTestCase_015645_1, VkglTestCase_015645_2);

#define VkglTestCase_015646_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015646_2 "ture_level.texture_3d.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015646, VkglTestCase_015646_1, VkglTestCase_015646_2);

#define VkglTestCase_015647_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015647_2 "ture_level.texture_3d.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015647, VkglTestCase_015647_1, VkglTestCase_015647_2);

#define VkglTestCase_015648_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015648_2 "xture_level.texture_3d.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015648, VkglTestCase_015648_1, VkglTestCase_015648_2);

#define VkglTestCase_015649_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015649_2 "ure_level.texture_3d.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015649, VkglTestCase_015649_1, VkglTestCase_015649_2);

#define VkglTestCase_015650_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015650_2 "ture_level.texture_3d.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015650, VkglTestCase_015650_1, VkglTestCase_015650_2);

#define VkglTestCase_015651_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015651_2 "ure_level.texture_3d.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015651, VkglTestCase_015651_1, VkglTestCase_015651_2);

#define VkglTestCase_015652_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015652_2 "ture_level.texture_3d.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015652, VkglTestCase_015652_1, VkglTestCase_015652_2);

#define VkglTestCase_015653_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015653_2 "re_level.texture_3d.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015653, VkglTestCase_015653_1, VkglTestCase_015653_2);

#define VkglTestCase_015654_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015654_2 "ure_level.texture_3d.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015654, VkglTestCase_015654_1, VkglTestCase_015654_2);

#define VkglTestCase_015655_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015655_2 "ure_level.texture_3d.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015655, VkglTestCase_015655_1, VkglTestCase_015655_2);

#define VkglTestCase_015656_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015656_2 "ture_level.texture_3d.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015656, VkglTestCase_015656_1, VkglTestCase_015656_2);

#define VkglTestCase_015657_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015657_2 "ture_level.texture_3d.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015657, VkglTestCase_015657_1, VkglTestCase_015657_2);

#define VkglTestCase_015658_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015658_2 "xture_level.texture_3d.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015658, VkglTestCase_015658_1, VkglTestCase_015658_2);

#define VkglTestCase_015659_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015659_2 "ure_level.texture_3d.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015659, VkglTestCase_015659_1, VkglTestCase_015659_2);

#define VkglTestCase_015660_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015660_2 "ture_level.texture_3d.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015660, VkglTestCase_015660_1, VkglTestCase_015660_2);

#define VkglTestCase_015661_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015661_2 "ture_level.texture_3d.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015661, VkglTestCase_015661_1, VkglTestCase_015661_2);

#define VkglTestCase_015662_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015662_2 "xture_level.texture_3d.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015662, VkglTestCase_015662_1, VkglTestCase_015662_2);

#define VkglTestCase_015663_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015663_2 "ure_level.texture_3d.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015663, VkglTestCase_015663_1, VkglTestCase_015663_2);

#define VkglTestCase_015664_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015664_2 "ture_level.texture_3d.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015664, VkglTestCase_015664_1, VkglTestCase_015664_2);

#define VkglTestCase_015665_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015665_2 "ure_level.texture_3d.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015665, VkglTestCase_015665_1, VkglTestCase_015665_2);

#define VkglTestCase_015666_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015666_2 "ture_level.texture_3d.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015666, VkglTestCase_015666_1, VkglTestCase_015666_2);

#define VkglTestCase_015667_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015667_2 "ure_level.texture_3d.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015667, VkglTestCase_015667_1, VkglTestCase_015667_2);

#define VkglTestCase_015668_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015668_2 "ture_level.texture_3d.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015668, VkglTestCase_015668_1, VkglTestCase_015668_2);

#define VkglTestCase_015669_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015669_2 "el.texture_3d.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015669, VkglTestCase_015669_1, VkglTestCase_015669_2);

#define VkglTestCase_015670_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015670_2 "vel.texture_3d.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015670, VkglTestCase_015670_1, VkglTestCase_015670_2);

#define VkglTestCase_015671_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015671_2 "re_level.texture_3d.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015671, VkglTestCase_015671_1, VkglTestCase_015671_2);

#define VkglTestCase_015672_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015672_2 "ure_level.texture_3d.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015672, VkglTestCase_015672_1, VkglTestCase_015672_2);

#define VkglTestCase_015673_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015673_2 "ure_level.texture_3d.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015673, VkglTestCase_015673_1, VkglTestCase_015673_2);

#define VkglTestCase_015674_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015674_2 "ture_level.texture_3d.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015674, VkglTestCase_015674_1, VkglTestCase_015674_2);
