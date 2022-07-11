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

#define VkglTestCase_013122_1 "dEQP-GLES31.functional.texture.gather.basic.2d.de"
#define VkglTestCase_013122_2 "pth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013122, VkglTestCase_013122_1, VkglTestCase_013122_2);

#define VkglTestCase_013123_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dep"
#define VkglTestCase_013123_2 "th32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013123, VkglTestCase_013123_1, VkglTestCase_013123_2);

#define VkglTestCase_013124_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth32"
#define VkglTestCase_013124_2 "f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013124, VkglTestCase_013124_1, VkglTestCase_013124_2);

#define VkglTestCase_013191_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array"
#define VkglTestCase_013191_2 ".depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013191, VkglTestCase_013191_1, VkglTestCase_013191_2);

#define VkglTestCase_013192_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013192_2 "depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013192, VkglTestCase_013192_1, VkglTestCase_013192_2);

#define VkglTestCase_013193_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.dept"
#define VkglTestCase_013193_2 "h32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013193, VkglTestCase_013193_1, VkglTestCase_013193_2);

#define VkglTestCase_013278_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32"
#define VkglTestCase_013278_2 "f.no_corners.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013278, VkglTestCase_013278_1, VkglTestCase_013278_2);

#define VkglTestCase_013279_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f"
#define VkglTestCase_013279_2 ".no_corners.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013279, VkglTestCase_013279_1, VkglTestCase_013279_2);

#define VkglTestCase_013280_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no"
#define VkglTestCase_013280_2 "_corners.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013280, VkglTestCase_013280_1, VkglTestCase_013280_2);

#define VkglTestCase_013308_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
#define VkglTestCase_013308_2 "fset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013308, VkglTestCase_013308_1, VkglTestCase_013308_2);

#define VkglTestCase_013309_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_off"
#define VkglTestCase_013309_2 "set.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013309, VkglTestCase_013309_1, VkglTestCase_013309_2);

#define VkglTestCase_013310_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
#define VkglTestCase_013310_2 ".2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013310, VkglTestCase_013310_1, VkglTestCase_013310_2);

#define VkglTestCase_013338_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offse"
#define VkglTestCase_013338_2 "t.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013338, VkglTestCase_013338_1, VkglTestCase_013338_2);

#define VkglTestCase_013339_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
#define VkglTestCase_013339_2 ".2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013339, VkglTestCase_013339_1, VkglTestCase_013339_2);

#define VkglTestCase_013340_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d"
#define VkglTestCase_013340_2 "_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013340, VkglTestCase_013340_1, VkglTestCase_013340_2);

#define VkglTestCase_013400_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013400_2 "ffset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013400, VkglTestCase_013400_1, VkglTestCase_013400_2);

#define VkglTestCase_013401_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013401_2 "fset.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013401, VkglTestCase_013401_1, VkglTestCase_013401_2);

#define VkglTestCase_013402_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013402_2 "t.2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013402, VkglTestCase_013402_1, VkglTestCase_013402_2);

#define VkglTestCase_013469_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
#define VkglTestCase_013469_2 "et.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013469, VkglTestCase_013469_1, VkglTestCase_013469_2);

#define VkglTestCase_013470_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013470_2 "t.2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013470, VkglTestCase_013470_1, VkglTestCase_013470_2);

#define VkglTestCase_013471_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2"
#define VkglTestCase_013471_2 "d_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013471, VkglTestCase_013471_1, VkglTestCase_013471_2);

#define VkglTestCase_013506_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
#define VkglTestCase_013506_2 "d_offset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013506, VkglTestCase_013506_1, VkglTestCase_013506_2);

#define VkglTestCase_013507_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required"
#define VkglTestCase_013507_2 "_offset.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013507, VkglTestCase_013507_1, VkglTestCase_013507_2);

#define VkglTestCase_013508_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
#define VkglTestCase_013508_2 "fset.2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013508, VkglTestCase_013508_1, VkglTestCase_013508_2);

#define VkglTestCase_013536_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_o"
#define VkglTestCase_013536_2 "ffset.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013536, VkglTestCase_013536_1, VkglTestCase_013536_2);

#define VkglTestCase_013537_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
#define VkglTestCase_013537_2 "fset.2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013537, VkglTestCase_013537_1, VkglTestCase_013537_2);

#define VkglTestCase_013538_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offse"
#define VkglTestCase_013538_2 "t.2d_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013538, VkglTestCase_013538_1, VkglTestCase_013538_2);

#define VkglTestCase_013598_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013598_2 "on_offset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013598, VkglTestCase_013598_1, VkglTestCase_013598_2);

#define VkglTestCase_013599_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013599_2 "n_offset.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013599, VkglTestCase_013599_1, VkglTestCase_013599_2);

#define VkglTestCase_013600_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013600_2 "ffset.2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013600, VkglTestCase_013600_1, VkglTestCase_013600_2);

#define VkglTestCase_013667_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
#define VkglTestCase_013667_2 "offset.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013667, VkglTestCase_013667_1, VkglTestCase_013667_2);

#define VkglTestCase_013668_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013668_2 "ffset.2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013668, VkglTestCase_013668_1, VkglTestCase_013668_2);

#define VkglTestCase_013669_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offs"
#define VkglTestCase_013669_2 "et.2d_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013669, VkglTestCase_013669_1, VkglTestCase_013669_2);

#define VkglTestCase_013704_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013704_2 "ffset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013704, VkglTestCase_013704_1, VkglTestCase_013704_2);

#define VkglTestCase_013705_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
#define VkglTestCase_013705_2 "fset.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013705, VkglTestCase_013705_1, VkglTestCase_013705_2);

#define VkglTestCase_013706_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset"
#define VkglTestCase_013706_2 ".2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013706, VkglTestCase_013706_1, VkglTestCase_013706_2);

#define VkglTestCase_013734_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offs"
#define VkglTestCase_013734_2 "et.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013734, VkglTestCase_013734_1, VkglTestCase_013734_2);

#define VkglTestCase_013735_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
#define VkglTestCase_013735_2 "t.2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013735, VkglTestCase_013735_1, VkglTestCase_013735_2);

#define VkglTestCase_013736_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2d"
#define VkglTestCase_013736_2 "_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013736, VkglTestCase_013736_1, VkglTestCase_013736_2);

#define VkglTestCase_013796_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013796_2 "offset.2d.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013796, VkglTestCase_013796_1, VkglTestCase_013796_2);

#define VkglTestCase_013797_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013797_2 "ffset.2d.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013797, VkglTestCase_013797_1, VkglTestCase_013797_2);

#define VkglTestCase_013798_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
#define VkglTestCase_013798_2 "t.2d.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013798, VkglTestCase_013798_1, VkglTestCase_013798_2);

#define VkglTestCase_013865_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013865_2 "set.2d_array.depth32f.size_npot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013865, VkglTestCase_013865_1, VkglTestCase_013865_2);

#define VkglTestCase_013866_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013866_2 "et.2d_array.depth32f.size_npot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013866, VkglTestCase_013866_1, VkglTestCase_013866_2);

#define VkglTestCase_013867_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset.2"
#define VkglTestCase_013867_2 "d_array.depth32f.size_npot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013867, VkglTestCase_013867_1, VkglTestCase_013867_2);
