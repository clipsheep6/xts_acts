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

#define VkglTestCase_013104_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013104_2 "c.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013104, VkglTestCase_013104_1, VkglTestCase_013104_2);

#define VkglTestCase_013105_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013105_2 ".2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013105, VkglTestCase_013105_1, VkglTestCase_013105_2);

#define VkglTestCase_013106_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013106_2 ".rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013106, VkglTestCase_013106_1, VkglTestCase_013106_2);

#define VkglTestCase_013173_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013173_2 "d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013173, VkglTestCase_013173_1, VkglTestCase_013173_2);

#define VkglTestCase_013174_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013174_2 "_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013174, VkglTestCase_013174_1, VkglTestCase_013174_2);

#define VkglTestCase_013175_1 "dEQP-GLES31.functional.texture.gather.basic.2d_ar"
#define VkglTestCase_013175_2 "ray.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013175, VkglTestCase_013175_1, VkglTestCase_013175_2);

#define VkglTestCase_013254_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013254_2 ".cube.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013254, VkglTestCase_013254_1, VkglTestCase_013254_2);

#define VkglTestCase_013255_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013255_2 "cube.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013255, VkglTestCase_013255_1, VkglTestCase_013255_2);

#define VkglTestCase_013256_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013256_2 "e.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013256, VkglTestCase_013256_1, VkglTestCase_013256_2);

#define VkglTestCase_013299_1 "dEQP-GLES31.functional.texture.gather.offset.min_req"
#define VkglTestCase_013299_2 "uired_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013299, VkglTestCase_013299_1, VkglTestCase_013299_2);

#define VkglTestCase_013300_1 "dEQP-GLES31.functional.texture.gather.offset.min_requ"
#define VkglTestCase_013300_2 "ired_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013300, VkglTestCase_013300_1, VkglTestCase_013300_2);

#define VkglTestCase_013301_1 "dEQP-GLES31.functional.texture.gather.offset.min_required"
#define VkglTestCase_013301_2 "_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013301, VkglTestCase_013301_1, VkglTestCase_013301_2);

#define VkglTestCase_013329_1 "dEQP-GLES31.functional.texture.gather.offset.min_requir"
#define VkglTestCase_013329_2 "ed_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013329, VkglTestCase_013329_1, VkglTestCase_013329_2);

#define VkglTestCase_013330_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013330_2 "d_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013330, VkglTestCase_013330_1, VkglTestCase_013330_2);

#define VkglTestCase_013331_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
#define VkglTestCase_013331_2 "fset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013331, VkglTestCase_013331_1, VkglTestCase_013331_2);

#define VkglTestCase_013382_1 "dEQP-GLES31.functional.texture.gather.offset.implemen"
#define VkglTestCase_013382_2 "tation_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013382, VkglTestCase_013382_1, VkglTestCase_013382_2);

#define VkglTestCase_013383_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013383_2 "ation_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013383, VkglTestCase_013383_1, VkglTestCase_013383_2);

#define VkglTestCase_013384_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013384_2 "n_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013384, VkglTestCase_013384_1, VkglTestCase_013384_2);

#define VkglTestCase_013451_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013451_2 "ion_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013451, VkglTestCase_013451_1, VkglTestCase_013451_2);

#define VkglTestCase_013452_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013452_2 "on_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013452, VkglTestCase_013452_1, VkglTestCase_013452_2);

#define VkglTestCase_013453_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013453_2 "ffset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013453, VkglTestCase_013453_1, VkglTestCase_013453_2);

#define VkglTestCase_013497_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min"
#define VkglTestCase_013497_2 "_required_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013497, VkglTestCase_013497_1, VkglTestCase_013497_2);

#define VkglTestCase_013498_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_"
#define VkglTestCase_013498_2 "required_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013498, VkglTestCase_013498_1, VkglTestCase_013498_2);

#define VkglTestCase_013499_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requ"
#define VkglTestCase_013499_2 "ired_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013499, VkglTestCase_013499_1, VkglTestCase_013499_2);

#define VkglTestCase_013527_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_re"
#define VkglTestCase_013527_2 "quired_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013527, VkglTestCase_013527_1, VkglTestCase_013527_2);

#define VkglTestCase_013528_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013528_2 "uired_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013528, VkglTestCase_013528_1, VkglTestCase_013528_2);

#define VkglTestCase_013529_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
#define VkglTestCase_013529_2 "d_offset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013529, VkglTestCase_013529_1, VkglTestCase_013529_2);

#define VkglTestCase_013580_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impl"
#define VkglTestCase_013580_2 "ementation_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013580, VkglTestCase_013580_1, VkglTestCase_013580_2);

#define VkglTestCase_013581_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013581_2 "mentation_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013581, VkglTestCase_013581_1, VkglTestCase_013581_2);

#define VkglTestCase_013582_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013582_2 "ation_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013582, VkglTestCase_013582_1, VkglTestCase_013582_2);

#define VkglTestCase_013649_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013649_2 "ntation_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013649, VkglTestCase_013649_1, VkglTestCase_013649_2);

#define VkglTestCase_013650_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013650_2 "tation_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013650, VkglTestCase_013650_1, VkglTestCase_013650_2);

#define VkglTestCase_013651_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013651_2 "on_offset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013651, VkglTestCase_013651_1, VkglTestCase_013651_2);

#define VkglTestCase_013695_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013695_2 "uired_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013695, VkglTestCase_013695_1, VkglTestCase_013695_2);

#define VkglTestCase_013696_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requ"
#define VkglTestCase_013696_2 "ired_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013696, VkglTestCase_013696_1, VkglTestCase_013696_2);

#define VkglTestCase_013697_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013697_2 "d_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013697, VkglTestCase_013697_1, VkglTestCase_013697_2);

#define VkglTestCase_013725_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013725_2 "ed_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013725, VkglTestCase_013725_1, VkglTestCase_013725_2);

#define VkglTestCase_013726_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013726_2 "d_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013726, VkglTestCase_013726_1, VkglTestCase_013726_2);

#define VkglTestCase_013727_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013727_2 "ffset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013727, VkglTestCase_013727_1, VkglTestCase_013727_2);

#define VkglTestCase_013778_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013778_2 "tation_offset.2d.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013778, VkglTestCase_013778_1, VkglTestCase_013778_2);

#define VkglTestCase_013779_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013779_2 "ation_offset.2d.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013779, VkglTestCase_013779_1, VkglTestCase_013779_2);

#define VkglTestCase_013780_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013780_2 "on_offset.2d.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013780, VkglTestCase_013780_1, VkglTestCase_013780_2);

#define VkglTestCase_013847_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013847_2 "ion_offset.2d_array.rgba8i.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013847, VkglTestCase_013847_1, VkglTestCase_013847_2);

#define VkglTestCase_013848_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013848_2 "on_offset.2d_array.rgba8i.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013848, VkglTestCase_013848_1, VkglTestCase_013848_2);

#define VkglTestCase_013849_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013849_2 "offset.2d_array.rgba8i.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013849, VkglTestCase_013849_1, VkglTestCase_013849_2);
