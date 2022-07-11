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

#define VkglTestCase_015587_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015587_2 "xture_level.texture_2d.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015587, VkglTestCase_015587_1, VkglTestCase_015587_2);

#define VkglTestCase_015588_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015588_2 "exture_level.texture_2d.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015588, VkglTestCase_015588_1, VkglTestCase_015588_2);

#define VkglTestCase_015589_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015589_2 "vel.texture_2d.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015589, VkglTestCase_015589_1, VkglTestCase_015589_2);

#define VkglTestCase_015590_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015590_2 "evel.texture_2d.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015590, VkglTestCase_015590_1, VkglTestCase_015590_2);

#define VkglTestCase_015591_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015591_2 "exture_level.texture_2d.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015591, VkglTestCase_015591_1, VkglTestCase_015591_2);

#define VkglTestCase_015592_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015592_2 "texture_level.texture_2d.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015592, VkglTestCase_015592_1, VkglTestCase_015592_2);

#define VkglTestCase_015593_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015593_2 "xture_level.texture_2d.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015593, VkglTestCase_015593_1, VkglTestCase_015593_2);

#define VkglTestCase_015594_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015594_2 "exture_level.texture_2d.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015594, VkglTestCase_015594_1, VkglTestCase_015594_2);

#define VkglTestCase_015595_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015595_2 "exture_level.texture_2d.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015595, VkglTestCase_015595_1, VkglTestCase_015595_2);

#define VkglTestCase_015596_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015596_2 "texture_level.texture_2d.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015596, VkglTestCase_015596_1, VkglTestCase_015596_2);

#define VkglTestCase_015597_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015597_2 "e_level.texture_2d.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015597, VkglTestCase_015597_1, VkglTestCase_015597_2);

#define VkglTestCase_015598_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015598_2 "re_level.texture_2d.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015598, VkglTestCase_015598_1, VkglTestCase_015598_2);

#define VkglTestCase_015599_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015599_2 "ture_level.texture_2d.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015599, VkglTestCase_015599_1, VkglTestCase_015599_2);

#define VkglTestCase_015600_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015600_2 "xture_level.texture_2d.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015600, VkglTestCase_015600_1, VkglTestCase_015600_2);

#define VkglTestCase_015601_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015601_2 "ure_level.texture_2d.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015601, VkglTestCase_015601_1, VkglTestCase_015601_2);

#define VkglTestCase_015602_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015602_2 "ture_level.texture_2d.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015602, VkglTestCase_015602_1, VkglTestCase_015602_2);

#define VkglTestCase_015603_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015603_2 "ture_level.texture_2d.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015603, VkglTestCase_015603_1, VkglTestCase_015603_2);

#define VkglTestCase_015604_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015604_2 "xture_level.texture_2d.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015604, VkglTestCase_015604_1, VkglTestCase_015604_2);

#define VkglTestCase_015605_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015605_2 "ure_level.texture_2d.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015605, VkglTestCase_015605_1, VkglTestCase_015605_2);

#define VkglTestCase_015606_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015606_2 "ture_level.texture_2d.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015606, VkglTestCase_015606_1, VkglTestCase_015606_2);

#define VkglTestCase_015607_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015607_2 "ure_level.texture_2d.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015607, VkglTestCase_015607_1, VkglTestCase_015607_2);

#define VkglTestCase_015608_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015608_2 "ture_level.texture_2d.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015608, VkglTestCase_015608_1, VkglTestCase_015608_2);

#define VkglTestCase_015609_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015609_2 "re_level.texture_2d.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015609, VkglTestCase_015609_1, VkglTestCase_015609_2);

#define VkglTestCase_015610_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015610_2 "ure_level.texture_2d.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015610, VkglTestCase_015610_1, VkglTestCase_015610_2);

#define VkglTestCase_015611_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015611_2 "ure_level.texture_2d.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015611, VkglTestCase_015611_1, VkglTestCase_015611_2);

#define VkglTestCase_015612_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015612_2 "ture_level.texture_2d.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015612, VkglTestCase_015612_1, VkglTestCase_015612_2);

#define VkglTestCase_015613_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015613_2 "ture_level.texture_2d.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015613, VkglTestCase_015613_1, VkglTestCase_015613_2);

#define VkglTestCase_015614_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015614_2 "xture_level.texture_2d.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015614, VkglTestCase_015614_1, VkglTestCase_015614_2);

#define VkglTestCase_015615_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015615_2 "ure_level.texture_2d.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015615, VkglTestCase_015615_1, VkglTestCase_015615_2);

#define VkglTestCase_015616_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015616_2 "ture_level.texture_2d.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015616, VkglTestCase_015616_1, VkglTestCase_015616_2);

#define VkglTestCase_015617_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015617_2 "ture_level.texture_2d.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015617, VkglTestCase_015617_1, VkglTestCase_015617_2);

#define VkglTestCase_015618_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015618_2 "xture_level.texture_2d.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015618, VkglTestCase_015618_1, VkglTestCase_015618_2);

#define VkglTestCase_015619_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015619_2 "ure_level.texture_2d.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015619, VkglTestCase_015619_1, VkglTestCase_015619_2);

#define VkglTestCase_015620_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015620_2 "ture_level.texture_2d.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015620, VkglTestCase_015620_1, VkglTestCase_015620_2);

#define VkglTestCase_015621_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015621_2 "ure_level.texture_2d.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015621, VkglTestCase_015621_1, VkglTestCase_015621_2);

#define VkglTestCase_015622_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015622_2 "ture_level.texture_2d.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015622, VkglTestCase_015622_1, VkglTestCase_015622_2);

#define VkglTestCase_015623_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015623_2 "ure_level.texture_2d.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015623, VkglTestCase_015623_1, VkglTestCase_015623_2);

#define VkglTestCase_015624_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015624_2 "ture_level.texture_2d.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015624, VkglTestCase_015624_1, VkglTestCase_015624_2);

#define VkglTestCase_015625_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015625_2 "el.texture_2d.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015625, VkglTestCase_015625_1, VkglTestCase_015625_2);

#define VkglTestCase_015626_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015626_2 "vel.texture_2d.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015626, VkglTestCase_015626_1, VkglTestCase_015626_2);

#define VkglTestCase_015627_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015627_2 "re_level.texture_2d.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015627, VkglTestCase_015627_1, VkglTestCase_015627_2);

#define VkglTestCase_015628_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015628_2 "ure_level.texture_2d.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015628, VkglTestCase_015628_1, VkglTestCase_015628_2);

#define VkglTestCase_015629_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015629_2 "ure_level.texture_2d.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015629, VkglTestCase_015629_1, VkglTestCase_015629_2);

#define VkglTestCase_015630_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015630_2 "ture_level.texture_2d.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015630, VkglTestCase_015630_1, VkglTestCase_015630_2);
