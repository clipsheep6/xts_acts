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

#define VkglTestCase_013119_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dep"
#define VkglTestCase_013119_2 "th32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013119, VkglTestCase_013119_1, VkglTestCase_013119_2);

#define VkglTestCase_013120_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dept"
#define VkglTestCase_013120_2 "h32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013120, VkglTestCase_013120_1, VkglTestCase_013120_2);

#define VkglTestCase_013121_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth32f"
#define VkglTestCase_013121_2 ".size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013121, VkglTestCase_013121_1, VkglTestCase_013121_2);

#define VkglTestCase_013188_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013188_2 "depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013188, VkglTestCase_013188_1, VkglTestCase_013188_2);

#define VkglTestCase_013189_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.d"
#define VkglTestCase_013189_2 "epth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013189, VkglTestCase_013189_1, VkglTestCase_013189_2);

#define VkglTestCase_013190_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.depth"
#define VkglTestCase_013190_2 "32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013190, VkglTestCase_013190_1, VkglTestCase_013190_2);

#define VkglTestCase_013275_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f"
#define VkglTestCase_013275_2 ".no_corners.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013275, VkglTestCase_013275_1, VkglTestCase_013275_2);

#define VkglTestCase_013276_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f."
#define VkglTestCase_013276_2 "no_corners.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013276, VkglTestCase_013276_1, VkglTestCase_013276_2);

#define VkglTestCase_013277_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no_"
#define VkglTestCase_013277_2 "corners.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013277, VkglTestCase_013277_1, VkglTestCase_013277_2);

#define VkglTestCase_013305_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_off"
#define VkglTestCase_013305_2 "set.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013305, VkglTestCase_013305_1, VkglTestCase_013305_2);

#define VkglTestCase_013306_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offs"
#define VkglTestCase_013306_2 "et.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013306, VkglTestCase_013306_1, VkglTestCase_013306_2);

#define VkglTestCase_013307_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset."
#define VkglTestCase_013307_2 "2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013307, VkglTestCase_013307_1, VkglTestCase_013307_2);

#define VkglTestCase_013335_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
#define VkglTestCase_013335_2 ".2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013335, VkglTestCase_013335_1, VkglTestCase_013335_2);

#define VkglTestCase_013336_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset."
#define VkglTestCase_013336_2 "2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013336, VkglTestCase_013336_1, VkglTestCase_013336_2);

#define VkglTestCase_013337_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d_"
#define VkglTestCase_013337_2 "array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013337, VkglTestCase_013337_1, VkglTestCase_013337_2);

#define VkglTestCase_013397_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013397_2 "fset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013397, VkglTestCase_013397_1, VkglTestCase_013397_2);

#define VkglTestCase_013398_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013398_2 "set.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013398, VkglTestCase_013398_1, VkglTestCase_013398_2);

#define VkglTestCase_013399_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013399_2 ".2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013399, VkglTestCase_013399_1, VkglTestCase_013399_2);

#define VkglTestCase_013466_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013466_2 "t.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013466, VkglTestCase_013466_1, VkglTestCase_013466_2);

#define VkglTestCase_013467_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013467_2 ".2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013467, VkglTestCase_013467_1, VkglTestCase_013467_2);

#define VkglTestCase_013468_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2d"
#define VkglTestCase_013468_2 "_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013468, VkglTestCase_013468_1, VkglTestCase_013468_2);

#define VkglTestCase_013503_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required"
#define VkglTestCase_013503_2 "_offset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013503, VkglTestCase_013503_1, VkglTestCase_013503_2);

#define VkglTestCase_013504_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_"
#define VkglTestCase_013504_2 "offset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013504, VkglTestCase_013504_1, VkglTestCase_013504_2);

#define VkglTestCase_013505_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_off"
#define VkglTestCase_013505_2 "set.2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013505, VkglTestCase_013505_1, VkglTestCase_013505_2);

#define VkglTestCase_013533_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
#define VkglTestCase_013533_2 "fset.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013533, VkglTestCase_013533_1, VkglTestCase_013533_2);

#define VkglTestCase_013534_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_off"
#define VkglTestCase_013534_2 "set.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013534, VkglTestCase_013534_1, VkglTestCase_013534_2);

#define VkglTestCase_013535_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offset"
#define VkglTestCase_013535_2 ".2d_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013535, VkglTestCase_013535_1, VkglTestCase_013535_2);

#define VkglTestCase_013595_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013595_2 "n_offset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013595, VkglTestCase_013595_1, VkglTestCase_013595_2);

#define VkglTestCase_013596_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013596_2 "_offset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013596, VkglTestCase_013596_1, VkglTestCase_013596_2);

#define VkglTestCase_013597_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013597_2 "fset.2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013597, VkglTestCase_013597_1, VkglTestCase_013597_2);

#define VkglTestCase_013664_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013664_2 "ffset.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013664, VkglTestCase_013664_1, VkglTestCase_013664_2);

#define VkglTestCase_013665_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013665_2 "fset.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013665, VkglTestCase_013665_1, VkglTestCase_013665_2);

#define VkglTestCase_013666_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offse"
#define VkglTestCase_013666_2 "t.2d_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013666, VkglTestCase_013666_1, VkglTestCase_013666_2);

#define VkglTestCase_013701_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
#define VkglTestCase_013701_2 "fset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013701, VkglTestCase_013701_1, VkglTestCase_013701_2);

#define VkglTestCase_013702_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_off"
#define VkglTestCase_013702_2 "set.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013702, VkglTestCase_013702_1, VkglTestCase_013702_2);

#define VkglTestCase_013703_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset."
#define VkglTestCase_013703_2 "2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013703, VkglTestCase_013703_1, VkglTestCase_013703_2);

#define VkglTestCase_013731_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
#define VkglTestCase_013731_2 "t.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013731, VkglTestCase_013731_1, VkglTestCase_013731_2);

#define VkglTestCase_013732_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset"
#define VkglTestCase_013732_2 ".2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013732, VkglTestCase_013732_1, VkglTestCase_013732_2);

#define VkglTestCase_013733_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2d_"
#define VkglTestCase_013733_2 "array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013733, VkglTestCase_013733_1, VkglTestCase_013733_2);

#define VkglTestCase_013793_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013793_2 "ffset.2d.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013793, VkglTestCase_013793_1, VkglTestCase_013793_2);

#define VkglTestCase_013794_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_of"
#define VkglTestCase_013794_2 "fset.2d.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013794, VkglTestCase_013794_1, VkglTestCase_013794_2);

#define VkglTestCase_013795_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013795_2 ".2d.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013795, VkglTestCase_013795_1, VkglTestCase_013795_2);

#define VkglTestCase_013862_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013862_2 "et.2d_array.depth32f.size_pot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013862, VkglTestCase_013862_1, VkglTestCase_013862_2);

#define VkglTestCase_013863_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
#define VkglTestCase_013863_2 "t.2d_array.depth32f.size_pot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013863, VkglTestCase_013863_1, VkglTestCase_013863_2);

#define VkglTestCase_013864_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset.2d"
#define VkglTestCase_013864_2 "_array.depth32f.size_pot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013864, VkglTestCase_013864_1, VkglTestCase_013864_2);
