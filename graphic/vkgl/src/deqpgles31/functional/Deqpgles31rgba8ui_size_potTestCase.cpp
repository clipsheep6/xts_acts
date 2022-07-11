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
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013086_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013086_2 "c.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013086, VkglTestCase_013086_1, VkglTestCase_013086_2);

#define VkglTestCase_013087_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013087_2 ".2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013087, VkglTestCase_013087_1, VkglTestCase_013087_2);

#define VkglTestCase_013088_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013088_2 ".rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013088, VkglTestCase_013088_1, VkglTestCase_013088_2);

#define VkglTestCase_013155_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013155_2 "d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013155, VkglTestCase_013155_1, VkglTestCase_013155_2);

#define VkglTestCase_013156_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013156_2 "_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013156, VkglTestCase_013156_1, VkglTestCase_013156_2);

#define VkglTestCase_013157_1 "dEQP-GLES31.functional.texture.gather.basic.2d_ar"
#define VkglTestCase_013157_2 "ray.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013157, VkglTestCase_013157_1, VkglTestCase_013157_2);

#define VkglTestCase_013230_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013230_2 ".cube.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013230, VkglTestCase_013230_1, VkglTestCase_013230_2);

#define VkglTestCase_013231_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013231_2 "cube.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013231, VkglTestCase_013231_1, VkglTestCase_013231_2);

#define VkglTestCase_013232_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013232_2 "e.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013232, VkglTestCase_013232_1, VkglTestCase_013232_2);

#define VkglTestCase_013290_1 "dEQP-GLES31.functional.texture.gather.offset.min_req"
#define VkglTestCase_013290_2 "uired_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013290, VkglTestCase_013290_1, VkglTestCase_013290_2);

#define VkglTestCase_013291_1 "dEQP-GLES31.functional.texture.gather.offset.min_requ"
#define VkglTestCase_013291_2 "ired_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013291, VkglTestCase_013291_1, VkglTestCase_013291_2);

#define VkglTestCase_013292_1 "dEQP-GLES31.functional.texture.gather.offset.min_required"
#define VkglTestCase_013292_2 "_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013292, VkglTestCase_013292_1, VkglTestCase_013292_2);

#define VkglTestCase_013320_1 "dEQP-GLES31.functional.texture.gather.offset.min_requir"
#define VkglTestCase_013320_2 "ed_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013320, VkglTestCase_013320_1, VkglTestCase_013320_2);

#define VkglTestCase_013321_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013321_2 "d_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013321, VkglTestCase_013321_1, VkglTestCase_013321_2);

#define VkglTestCase_013322_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
#define VkglTestCase_013322_2 "fset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013322, VkglTestCase_013322_1, VkglTestCase_013322_2);

#define VkglTestCase_013364_1 "dEQP-GLES31.functional.texture.gather.offset.implemen"
#define VkglTestCase_013364_2 "tation_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013364, VkglTestCase_013364_1, VkglTestCase_013364_2);

#define VkglTestCase_013365_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013365_2 "ation_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013365, VkglTestCase_013365_1, VkglTestCase_013365_2);

#define VkglTestCase_013366_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013366_2 "n_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013366, VkglTestCase_013366_1, VkglTestCase_013366_2);

#define VkglTestCase_013433_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013433_2 "ion_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013433, VkglTestCase_013433_1, VkglTestCase_013433_2);

#define VkglTestCase_013434_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013434_2 "on_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013434, VkglTestCase_013434_1, VkglTestCase_013434_2);

#define VkglTestCase_013435_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013435_2 "ffset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013435, VkglTestCase_013435_1, VkglTestCase_013435_2);

#define VkglTestCase_013488_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min"
#define VkglTestCase_013488_2 "_required_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013488, VkglTestCase_013488_1, VkglTestCase_013488_2);

#define VkglTestCase_013489_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_"
#define VkglTestCase_013489_2 "required_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013489, VkglTestCase_013489_1, VkglTestCase_013489_2);

#define VkglTestCase_013490_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requ"
#define VkglTestCase_013490_2 "ired_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013490, VkglTestCase_013490_1, VkglTestCase_013490_2);

#define VkglTestCase_013518_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_re"
#define VkglTestCase_013518_2 "quired_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013518, VkglTestCase_013518_1, VkglTestCase_013518_2);

#define VkglTestCase_013519_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013519_2 "uired_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013519, VkglTestCase_013519_1, VkglTestCase_013519_2);

#define VkglTestCase_013520_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
#define VkglTestCase_013520_2 "d_offset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013520, VkglTestCase_013520_1, VkglTestCase_013520_2);

#define VkglTestCase_013562_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impl"
#define VkglTestCase_013562_2 "ementation_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013562, VkglTestCase_013562_1, VkglTestCase_013562_2);

#define VkglTestCase_013563_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013563_2 "mentation_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013563, VkglTestCase_013563_1, VkglTestCase_013563_2);

#define VkglTestCase_013564_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013564_2 "ation_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013564, VkglTestCase_013564_1, VkglTestCase_013564_2);

#define VkglTestCase_013631_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013631_2 "ntation_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013631, VkglTestCase_013631_1, VkglTestCase_013631_2);

#define VkglTestCase_013632_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013632_2 "tation_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013632, VkglTestCase_013632_1, VkglTestCase_013632_2);

#define VkglTestCase_013633_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013633_2 "on_offset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013633, VkglTestCase_013633_1, VkglTestCase_013633_2);

#define VkglTestCase_013686_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013686_2 "uired_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013686, VkglTestCase_013686_1, VkglTestCase_013686_2);

#define VkglTestCase_013687_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requ"
#define VkglTestCase_013687_2 "ired_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013687, VkglTestCase_013687_1, VkglTestCase_013687_2);

#define VkglTestCase_013688_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013688_2 "d_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013688, VkglTestCase_013688_1, VkglTestCase_013688_2);

#define VkglTestCase_013716_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013716_2 "ed_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013716, VkglTestCase_013716_1, VkglTestCase_013716_2);

#define VkglTestCase_013717_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013717_2 "d_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013717, VkglTestCase_013717_1, VkglTestCase_013717_2);

#define VkglTestCase_013718_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013718_2 "ffset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013718, VkglTestCase_013718_1, VkglTestCase_013718_2);

#define VkglTestCase_013760_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013760_2 "tation_offset.2d.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013760, VkglTestCase_013760_1, VkglTestCase_013760_2);

#define VkglTestCase_013761_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013761_2 "ation_offset.2d.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013761, VkglTestCase_013761_1, VkglTestCase_013761_2);

#define VkglTestCase_013762_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013762_2 "on_offset.2d.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013762, VkglTestCase_013762_1, VkglTestCase_013762_2);

#define VkglTestCase_013829_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013829_2 "ion_offset.2d_array.rgba8ui.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013829, VkglTestCase_013829_1, VkglTestCase_013829_2);

#define VkglTestCase_013830_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013830_2 "on_offset.2d_array.rgba8ui.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013830, VkglTestCase_013830_1, VkglTestCase_013830_2);

#define VkglTestCase_013831_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013831_2 "offset.2d_array.rgba8ui.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013831, VkglTestCase_013831_1, VkglTestCase_013831_2);
