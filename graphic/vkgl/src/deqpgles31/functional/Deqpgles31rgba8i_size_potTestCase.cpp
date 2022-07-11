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

#define VkglTestCase_013101_1 "dEQP-GLES31.functional.texture.gather.bas"
#define VkglTestCase_013101_2 "ic.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013101, VkglTestCase_013101_1, VkglTestCase_013101_2);

#define VkglTestCase_013102_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013102_2 "c.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013102, VkglTestCase_013102_1, VkglTestCase_013102_2);

#define VkglTestCase_013103_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013103_2 ".rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013103, VkglTestCase_013103_1, VkglTestCase_013103_2);

#define VkglTestCase_013170_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013170_2 "2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013170, VkglTestCase_013170_1, VkglTestCase_013170_2);

#define VkglTestCase_013171_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013171_2 "d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013171, VkglTestCase_013171_1, VkglTestCase_013171_2);

#define VkglTestCase_013172_1 "dEQP-GLES31.functional.texture.gather.basic.2d_ar"
#define VkglTestCase_013172_2 "ray.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013172, VkglTestCase_013172_1, VkglTestCase_013172_2);

#define VkglTestCase_013251_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013251_2 "c.cube.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013251, VkglTestCase_013251_1, VkglTestCase_013251_2);

#define VkglTestCase_013252_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013252_2 ".cube.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013252, VkglTestCase_013252_1, VkglTestCase_013252_2);

#define VkglTestCase_013253_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013253_2 "e.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013253, VkglTestCase_013253_1, VkglTestCase_013253_2);

#define VkglTestCase_013296_1 "dEQP-GLES31.functional.texture.gather.offset.min_req"
#define VkglTestCase_013296_2 "uired_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013296, VkglTestCase_013296_1, VkglTestCase_013296_2);

#define VkglTestCase_013297_1 "dEQP-GLES31.functional.texture.gather.offset.min_requ"
#define VkglTestCase_013297_2 "ired_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013297, VkglTestCase_013297_1, VkglTestCase_013297_2);

#define VkglTestCase_013298_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013298_2 "d_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013298, VkglTestCase_013298_1, VkglTestCase_013298_2);

#define VkglTestCase_013326_1 "dEQP-GLES31.functional.texture.gather.offset.min_requir"
#define VkglTestCase_013326_2 "ed_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013326, VkglTestCase_013326_1, VkglTestCase_013326_2);

#define VkglTestCase_013327_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013327_2 "d_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013327, VkglTestCase_013327_1, VkglTestCase_013327_2);

#define VkglTestCase_013328_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_o"
#define VkglTestCase_013328_2 "ffset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013328, VkglTestCase_013328_1, VkglTestCase_013328_2);

#define VkglTestCase_013379_1 "dEQP-GLES31.functional.texture.gather.offset.implemen"
#define VkglTestCase_013379_2 "tation_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013379, VkglTestCase_013379_1, VkglTestCase_013379_2);

#define VkglTestCase_013380_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013380_2 "ation_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013380, VkglTestCase_013380_1, VkglTestCase_013380_2);

#define VkglTestCase_013381_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013381_2 "on_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013381, VkglTestCase_013381_1, VkglTestCase_013381_2);

#define VkglTestCase_013448_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013448_2 "ion_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013448, VkglTestCase_013448_1, VkglTestCase_013448_2);

#define VkglTestCase_013449_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013449_2 "on_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013449, VkglTestCase_013449_1, VkglTestCase_013449_2);

#define VkglTestCase_013450_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013450_2 "offset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013450, VkglTestCase_013450_1, VkglTestCase_013450_2);

#define VkglTestCase_013494_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min"
#define VkglTestCase_013494_2 "_required_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013494, VkglTestCase_013494_1, VkglTestCase_013494_2);

#define VkglTestCase_013495_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_"
#define VkglTestCase_013495_2 "required_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013495, VkglTestCase_013495_1, VkglTestCase_013495_2);

#define VkglTestCase_013496_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013496_2 "uired_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013496, VkglTestCase_013496_1, VkglTestCase_013496_2);

#define VkglTestCase_013524_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_re"
#define VkglTestCase_013524_2 "quired_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013524, VkglTestCase_013524_1, VkglTestCase_013524_2);

#define VkglTestCase_013525_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013525_2 "uired_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013525, VkglTestCase_013525_1, VkglTestCase_013525_2);

#define VkglTestCase_013526_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requir"
#define VkglTestCase_013526_2 "ed_offset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013526, VkglTestCase_013526_1, VkglTestCase_013526_2);

#define VkglTestCase_013577_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impl"
#define VkglTestCase_013577_2 "ementation_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013577, VkglTestCase_013577_1, VkglTestCase_013577_2);

#define VkglTestCase_013578_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013578_2 "mentation_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013578, VkglTestCase_013578_1, VkglTestCase_013578_2);

#define VkglTestCase_013579_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013579_2 "tation_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013579, VkglTestCase_013579_1, VkglTestCase_013579_2);

#define VkglTestCase_013646_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013646_2 "ntation_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013646, VkglTestCase_013646_1, VkglTestCase_013646_2);

#define VkglTestCase_013647_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013647_2 "tation_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013647, VkglTestCase_013647_1, VkglTestCase_013647_2);

#define VkglTestCase_013648_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013648_2 "ion_offset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013648, VkglTestCase_013648_1, VkglTestCase_013648_2);

#define VkglTestCase_013692_1 "dEQP-GLES31.functional.texture.gather.offsets.min_re"
#define VkglTestCase_013692_2 "quired_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013692, VkglTestCase_013692_1, VkglTestCase_013692_2);

#define VkglTestCase_013693_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013693_2 "uired_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013693, VkglTestCase_013693_1, VkglTestCase_013693_2);

#define VkglTestCase_013694_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013694_2 "d_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013694, VkglTestCase_013694_1, VkglTestCase_013694_2);

#define VkglTestCase_013722_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requi"
#define VkglTestCase_013722_2 "red_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013722, VkglTestCase_013722_1, VkglTestCase_013722_2);

#define VkglTestCase_013723_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013723_2 "ed_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013723, VkglTestCase_013723_1, VkglTestCase_013723_2);

#define VkglTestCase_013724_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013724_2 "ffset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013724, VkglTestCase_013724_1, VkglTestCase_013724_2);

#define VkglTestCase_013775_1 "dEQP-GLES31.functional.texture.gather.offsets.impleme"
#define VkglTestCase_013775_2 "ntation_offset.2d.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013775, VkglTestCase_013775_1, VkglTestCase_013775_2);

#define VkglTestCase_013776_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013776_2 "tation_offset.2d.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013776, VkglTestCase_013776_1, VkglTestCase_013776_2);

#define VkglTestCase_013777_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013777_2 "on_offset.2d.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013777, VkglTestCase_013777_1, VkglTestCase_013777_2);

#define VkglTestCase_013844_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013844_2 "tion_offset.2d_array.rgba8i.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013844, VkglTestCase_013844_1, VkglTestCase_013844_2);

#define VkglTestCase_013845_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013845_2 "ion_offset.2d_array.rgba8i.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013845, VkglTestCase_013845_1, VkglTestCase_013845_2);

#define VkglTestCase_013846_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013846_2 "offset.2d_array.rgba8i.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013846, VkglTestCase_013846_1, VkglTestCase_013846_2);
