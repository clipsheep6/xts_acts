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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011608_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011608_2 ".3d.format_reinterpret.rgba32f_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011608, VkglTestCase_011608_1, VkglTestCase_011608_2);

#define VkglTestCase_011609_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011609_2 "e.3d.format_reinterpret.rgba32f_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011609, VkglTestCase_011609_1, VkglTestCase_011609_2);

#define VkglTestCase_011610_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011610_2 ".3d.format_reinterpret.rgba16f_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011610, VkglTestCase_011610_1, VkglTestCase_011610_2);

#define VkglTestCase_011611_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011611_2 "e.3d.format_reinterpret.rgba16f_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011611, VkglTestCase_011611_1, VkglTestCase_011611_2);

#define VkglTestCase_011612_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011612_2 "re.3d.format_reinterpret.r32f_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011612, VkglTestCase_011612_1, VkglTestCase_011612_2);

#define VkglTestCase_011613_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011613_2 "ore.3d.format_reinterpret.r32f_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011613, VkglTestCase_011613_1, VkglTestCase_011613_2);

#define VkglTestCase_011614_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011614_2 "ore.3d.format_reinterpret.r32f_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011614, VkglTestCase_011614_1, VkglTestCase_011614_2);

#define VkglTestCase_011615_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011615_2 "tore.3d.format_reinterpret.r32f_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011615, VkglTestCase_011615_1, VkglTestCase_011615_2);

#define VkglTestCase_011616_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011616_2 "ore.3d.format_reinterpret.r32f_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011616, VkglTestCase_011616_1, VkglTestCase_011616_2);

#define VkglTestCase_011617_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011617_2 ".3d.format_reinterpret.r32f_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011617, VkglTestCase_011617_1, VkglTestCase_011617_2);

#define VkglTestCase_011618_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011618_2 ".3d.format_reinterpret.rgba32ui_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011618, VkglTestCase_011618_1, VkglTestCase_011618_2);

#define VkglTestCase_011619_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011619_2 ".3d.format_reinterpret.rgba32ui_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011619, VkglTestCase_011619_1, VkglTestCase_011619_2);

#define VkglTestCase_011620_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011620_2 ".3d.format_reinterpret.rgba16ui_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011620, VkglTestCase_011620_1, VkglTestCase_011620_2);

#define VkglTestCase_011621_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011621_2 ".3d.format_reinterpret.rgba16ui_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011621, VkglTestCase_011621_1, VkglTestCase_011621_2);

#define VkglTestCase_011622_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011622_2 "re.3d.format_reinterpret.rgba8ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011622, VkglTestCase_011622_1, VkglTestCase_011622_2);

#define VkglTestCase_011623_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011623_2 "re.3d.format_reinterpret.rgba8ui_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011623, VkglTestCase_011623_1, VkglTestCase_011623_2);

#define VkglTestCase_011624_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011624_2 "e.3d.format_reinterpret.rgba8ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011624, VkglTestCase_011624_1, VkglTestCase_011624_2);

#define VkglTestCase_011625_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011625_2 "re.3d.format_reinterpret.rgba8ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011625, VkglTestCase_011625_1, VkglTestCase_011625_2);

#define VkglTestCase_011626_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011626_2 "re.3d.format_reinterpret.rgba8ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011626, VkglTestCase_011626_1, VkglTestCase_011626_2);

#define VkglTestCase_011627_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011627_2 "3d.format_reinterpret.rgba8ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011627, VkglTestCase_011627_1, VkglTestCase_011627_2);

#define VkglTestCase_011628_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011628_2 "ore.3d.format_reinterpret.r32ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011628, VkglTestCase_011628_1, VkglTestCase_011628_2);

#define VkglTestCase_011629_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011629_2 "re.3d.format_reinterpret.r32ui_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011629, VkglTestCase_011629_1, VkglTestCase_011629_2);

#define VkglTestCase_011630_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011630_2 "re.3d.format_reinterpret.r32ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011630, VkglTestCase_011630_1, VkglTestCase_011630_2);

#define VkglTestCase_011631_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011631_2 "ore.3d.format_reinterpret.r32ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011631, VkglTestCase_011631_1, VkglTestCase_011631_2);

#define VkglTestCase_011632_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011632_2 "ore.3d.format_reinterpret.r32ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011632, VkglTestCase_011632_1, VkglTestCase_011632_2);

#define VkglTestCase_011633_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011633_2 ".3d.format_reinterpret.r32ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011633, VkglTestCase_011633_1, VkglTestCase_011633_2);

#define VkglTestCase_011634_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011634_2 "e.3d.format_reinterpret.rgba32i_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011634, VkglTestCase_011634_1, VkglTestCase_011634_2);

#define VkglTestCase_011635_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011635_2 ".3d.format_reinterpret.rgba32i_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011635, VkglTestCase_011635_1, VkglTestCase_011635_2);

#define VkglTestCase_011636_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011636_2 "e.3d.format_reinterpret.rgba16i_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011636, VkglTestCase_011636_1, VkglTestCase_011636_2);

#define VkglTestCase_011637_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011637_2 ".3d.format_reinterpret.rgba16i_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011637, VkglTestCase_011637_1, VkglTestCase_011637_2);

#define VkglTestCase_011638_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011638_2 "ore.3d.format_reinterpret.rgba8i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011638, VkglTestCase_011638_1, VkglTestCase_011638_2);

#define VkglTestCase_011639_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011639_2 "e.3d.format_reinterpret.rgba8i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011639, VkglTestCase_011639_1, VkglTestCase_011639_2);

#define VkglTestCase_011640_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011640_2 "re.3d.format_reinterpret.rgba8i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011640, VkglTestCase_011640_1, VkglTestCase_011640_2);

#define VkglTestCase_011641_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011641_2 "ore.3d.format_reinterpret.rgba8i_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011641, VkglTestCase_011641_1, VkglTestCase_011641_2);

#define VkglTestCase_011642_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011642_2 "re.3d.format_reinterpret.rgba8i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011642, VkglTestCase_011642_1, VkglTestCase_011642_2);

#define VkglTestCase_011643_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011643_2 "3d.format_reinterpret.rgba8i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011643, VkglTestCase_011643_1, VkglTestCase_011643_2);

#define VkglTestCase_011644_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011644_2 "tore.3d.format_reinterpret.r32i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011644, VkglTestCase_011644_1, VkglTestCase_011644_2);

#define VkglTestCase_011645_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011645_2 "re.3d.format_reinterpret.r32i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011645, VkglTestCase_011645_1, VkglTestCase_011645_2);

#define VkglTestCase_011646_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011646_2 "ore.3d.format_reinterpret.r32i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011646, VkglTestCase_011646_1, VkglTestCase_011646_2);

#define VkglTestCase_011647_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011647_2 "ore.3d.format_reinterpret.r32i_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011647, VkglTestCase_011647_1, VkglTestCase_011647_2);

#define VkglTestCase_011648_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011648_2 "ore.3d.format_reinterpret.r32i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011648, VkglTestCase_011648_1, VkglTestCase_011648_2);

#define VkglTestCase_011649_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011649_2 ".3d.format_reinterpret.r32i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011649, VkglTestCase_011649_1, VkglTestCase_011649_2);

#define VkglTestCase_011650_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011650_2 "ore.3d.format_reinterpret.rgba8_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011650, VkglTestCase_011650_1, VkglTestCase_011650_2);

#define VkglTestCase_011651_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011651_2 "re.3d.format_reinterpret.rgba8_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011651, VkglTestCase_011651_1, VkglTestCase_011651_2);

#define VkglTestCase_011652_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011652_2 "ore.3d.format_reinterpret.rgba8_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011652, VkglTestCase_011652_1, VkglTestCase_011652_2);

#define VkglTestCase_011653_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011653_2 "re.3d.format_reinterpret.rgba8_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011653, VkglTestCase_011653_1, VkglTestCase_011653_2);

#define VkglTestCase_011654_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011654_2 "ore.3d.format_reinterpret.rgba8_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011654, VkglTestCase_011654_1, VkglTestCase_011654_2);

#define VkglTestCase_011655_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011655_2 ".3d.format_reinterpret.rgba8_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011655, VkglTestCase_011655_1, VkglTestCase_011655_2);

#define VkglTestCase_011656_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011656_2 ".3d.format_reinterpret.rgba8_snorm_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011656, VkglTestCase_011656_1, VkglTestCase_011656_2);

#define VkglTestCase_011657_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011657_2 "3d.format_reinterpret.rgba8_snorm_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011657, VkglTestCase_011657_1, VkglTestCase_011657_2);

#define VkglTestCase_011658_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011658_2 ".3d.format_reinterpret.rgba8_snorm_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011658, VkglTestCase_011658_1, VkglTestCase_011658_2);

#define VkglTestCase_011659_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011659_2 "3d.format_reinterpret.rgba8_snorm_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011659, VkglTestCase_011659_1, VkglTestCase_011659_2);

#define VkglTestCase_011660_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011660_2 ".3d.format_reinterpret.rgba8_snorm_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011660, VkglTestCase_011660_1, VkglTestCase_011660_2);

#define VkglTestCase_011661_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011661_2 ".3d.format_reinterpret.rgba8_snorm_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011661, VkglTestCase_011661_1, VkglTestCase_011661_2);
