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

#define VkglTestCase_013066_1 "dEQP-GLES31.functional.texture.gather.bas"
#define VkglTestCase_013066_2 "ic.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013066, VkglTestCase_013066_1, VkglTestCase_013066_2);

#define VkglTestCase_013067_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013067_2 "c.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013067, VkglTestCase_013067_1, VkglTestCase_013067_2);

#define VkglTestCase_013068_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013068_2 "d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013068, VkglTestCase_013068_1, VkglTestCase_013068_2);

#define VkglTestCase_013135_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013135_2 "2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013135, VkglTestCase_013135_1, VkglTestCase_013135_2);

#define VkglTestCase_013136_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013136_2 "d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013136, VkglTestCase_013136_1, VkglTestCase_013136_2);

#define VkglTestCase_013137_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013137_2 "rray.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013137, VkglTestCase_013137_1, VkglTestCase_013137_2);

#define VkglTestCase_013204_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013204_2 "c.cube.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013204, VkglTestCase_013204_1, VkglTestCase_013204_2);

#define VkglTestCase_013205_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013205_2 ".cube.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013205, VkglTestCase_013205_1, VkglTestCase_013205_2);

#define VkglTestCase_013206_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013206_2 "be.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013206, VkglTestCase_013206_1, VkglTestCase_013206_2);

#define VkglTestCase_013284_1 "dEQP-GLES31.functional.texture.gather.offset.min_re"
#define VkglTestCase_013284_2 "quired_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013284, VkglTestCase_013284_1, VkglTestCase_013284_2);

#define VkglTestCase_013285_1 "dEQP-GLES31.functional.texture.gather.offset.min_req"
#define VkglTestCase_013285_2 "uired_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013285, VkglTestCase_013285_1, VkglTestCase_013285_2);

#define VkglTestCase_013286_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013286_2 "d_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013286, VkglTestCase_013286_1, VkglTestCase_013286_2);

#define VkglTestCase_013314_1 "dEQP-GLES31.functional.texture.gather.offset.min_requi"
#define VkglTestCase_013314_2 "red_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013314, VkglTestCase_013314_1, VkglTestCase_013314_2);

#define VkglTestCase_013315_1 "dEQP-GLES31.functional.texture.gather.offset.min_requir"
#define VkglTestCase_013315_2 "ed_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013315, VkglTestCase_013315_1, VkglTestCase_013315_2);

#define VkglTestCase_013316_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_o"
#define VkglTestCase_013316_2 "ffset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013316, VkglTestCase_013316_1, VkglTestCase_013316_2);

#define VkglTestCase_013344_1 "dEQP-GLES31.functional.texture.gather.offset.impleme"
#define VkglTestCase_013344_2 "ntation_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013344, VkglTestCase_013344_1, VkglTestCase_013344_2);

#define VkglTestCase_013345_1 "dEQP-GLES31.functional.texture.gather.offset.implemen"
#define VkglTestCase_013345_2 "tation_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013345, VkglTestCase_013345_1, VkglTestCase_013345_2);

#define VkglTestCase_013346_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013346_2 "on_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013346, VkglTestCase_013346_1, VkglTestCase_013346_2);

#define VkglTestCase_013413_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013413_2 "tion_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013413, VkglTestCase_013413_1, VkglTestCase_013413_2);

#define VkglTestCase_013414_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013414_2 "ion_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013414, VkglTestCase_013414_1, VkglTestCase_013414_2);

#define VkglTestCase_013415_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013415_2 "offset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013415, VkglTestCase_013415_1, VkglTestCase_013415_2);

#define VkglTestCase_013482_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.mi"
#define VkglTestCase_013482_2 "n_required_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013482, VkglTestCase_013482_1, VkglTestCase_013482_2);

#define VkglTestCase_013483_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min"
#define VkglTestCase_013483_2 "_required_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013483, VkglTestCase_013483_1, VkglTestCase_013483_2);

#define VkglTestCase_013484_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013484_2 "uired_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013484, VkglTestCase_013484_1, VkglTestCase_013484_2);

#define VkglTestCase_013512_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_r"
#define VkglTestCase_013512_2 "equired_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013512, VkglTestCase_013512_1, VkglTestCase_013512_2);

#define VkglTestCase_013513_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_re"
#define VkglTestCase_013513_2 "quired_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013513, VkglTestCase_013513_1, VkglTestCase_013513_2);

#define VkglTestCase_013514_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requir"
#define VkglTestCase_013514_2 "ed_offset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013514, VkglTestCase_013514_1, VkglTestCase_013514_2);

#define VkglTestCase_013542_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imp"
#define VkglTestCase_013542_2 "lementation_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013542, VkglTestCase_013542_1, VkglTestCase_013542_2);

#define VkglTestCase_013543_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impl"
#define VkglTestCase_013543_2 "ementation_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013543, VkglTestCase_013543_1, VkglTestCase_013543_2);

#define VkglTestCase_013544_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013544_2 "tation_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013544, VkglTestCase_013544_1, VkglTestCase_013544_2);

#define VkglTestCase_013611_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013611_2 "entation_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013611, VkglTestCase_013611_1, VkglTestCase_013611_2);

#define VkglTestCase_013612_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013612_2 "ntation_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013612, VkglTestCase_013612_1, VkglTestCase_013612_2);

#define VkglTestCase_013613_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013613_2 "ion_offset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013613, VkglTestCase_013613_1, VkglTestCase_013613_2);

#define VkglTestCase_013680_1 "dEQP-GLES31.functional.texture.gather.offsets.min_re"
#define VkglTestCase_013680_2 "quired_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013680, VkglTestCase_013680_1, VkglTestCase_013680_2);

#define VkglTestCase_013681_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013681_2 "uired_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013681, VkglTestCase_013681_1, VkglTestCase_013681_2);

#define VkglTestCase_013682_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013682_2 "ed_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013682, VkglTestCase_013682_1, VkglTestCase_013682_2);

#define VkglTestCase_013710_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requi"
#define VkglTestCase_013710_2 "red_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013710, VkglTestCase_013710_1, VkglTestCase_013710_2);

#define VkglTestCase_013711_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013711_2 "ed_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013711, VkglTestCase_013711_1, VkglTestCase_013711_2);

#define VkglTestCase_013712_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_"
#define VkglTestCase_013712_2 "offset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013712, VkglTestCase_013712_1, VkglTestCase_013712_2);

#define VkglTestCase_013740_1 "dEQP-GLES31.functional.texture.gather.offsets.impleme"
#define VkglTestCase_013740_2 "ntation_offset.2d.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013740, VkglTestCase_013740_1, VkglTestCase_013740_2);

#define VkglTestCase_013741_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013741_2 "tation_offset.2d.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013741, VkglTestCase_013741_1, VkglTestCase_013741_2);

#define VkglTestCase_013742_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013742_2 "ion_offset.2d.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013742, VkglTestCase_013742_1, VkglTestCase_013742_2);

#define VkglTestCase_013809_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013809_2 "tion_offset.2d_array.rgba8.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013809, VkglTestCase_013809_1, VkglTestCase_013809_2);

#define VkglTestCase_013810_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013810_2 "ion_offset.2d_array.rgba8.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013810, VkglTestCase_013810_1, VkglTestCase_013810_2);

#define VkglTestCase_013811_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013811_2 "_offset.2d_array.rgba8.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013811, VkglTestCase_013811_1, VkglTestCase_013811_2);
