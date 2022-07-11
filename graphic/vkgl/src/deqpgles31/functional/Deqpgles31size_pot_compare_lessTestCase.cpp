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

#define VkglTestCase_013116_1 "dEQP-GLES31.functional.texture.gather.basic.2d.de"
#define VkglTestCase_013116_2 "pth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013116, VkglTestCase_013116_1, VkglTestCase_013116_2);

#define VkglTestCase_013117_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dep"
#define VkglTestCase_013117_2 "th32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013117, VkglTestCase_013117_1, VkglTestCase_013117_2);

#define VkglTestCase_013118_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth3"
#define VkglTestCase_013118_2 "2f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013118, VkglTestCase_013118_1, VkglTestCase_013118_2);

#define VkglTestCase_013185_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array"
#define VkglTestCase_013185_2 ".depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013185, VkglTestCase_013185_1, VkglTestCase_013185_2);

#define VkglTestCase_013186_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013186_2 "depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013186, VkglTestCase_013186_1, VkglTestCase_013186_2);

#define VkglTestCase_013187_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.dep"
#define VkglTestCase_013187_2 "th32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013187, VkglTestCase_013187_1, VkglTestCase_013187_2);

#define VkglTestCase_013272_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth3"
#define VkglTestCase_013272_2 "2f.no_corners.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013272, VkglTestCase_013272_1, VkglTestCase_013272_2);

#define VkglTestCase_013273_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32"
#define VkglTestCase_013273_2 "f.no_corners.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013273, VkglTestCase_013273_1, VkglTestCase_013273_2);

#define VkglTestCase_013274_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no"
#define VkglTestCase_013274_2 "_corners.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013274, VkglTestCase_013274_1, VkglTestCase_013274_2);

#define VkglTestCase_013302_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_o"
#define VkglTestCase_013302_2 "ffset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013302, VkglTestCase_013302_1, VkglTestCase_013302_2);

#define VkglTestCase_013303_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
#define VkglTestCase_013303_2 "fset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013303, VkglTestCase_013303_1, VkglTestCase_013303_2);

#define VkglTestCase_013304_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
#define VkglTestCase_013304_2 ".2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013304, VkglTestCase_013304_1, VkglTestCase_013304_2);

#define VkglTestCase_013332_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offs"
#define VkglTestCase_013332_2 "et.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013332, VkglTestCase_013332_1, VkglTestCase_013332_2);

#define VkglTestCase_013333_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offse"
#define VkglTestCase_013333_2 "t.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013333, VkglTestCase_013333_1, VkglTestCase_013333_2);

#define VkglTestCase_013334_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d"
#define VkglTestCase_013334_2 "_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013334, VkglTestCase_013334_1, VkglTestCase_013334_2);

#define VkglTestCase_013394_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013394_2 "offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013394, VkglTestCase_013394_1, VkglTestCase_013394_2);

#define VkglTestCase_013395_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013395_2 "ffset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013395, VkglTestCase_013395_1, VkglTestCase_013395_2);

#define VkglTestCase_013396_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013396_2 "t.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013396, VkglTestCase_013396_1, VkglTestCase_013396_2);

#define VkglTestCase_013463_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013463_2 "set.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013463, VkglTestCase_013463_1, VkglTestCase_013463_2);

#define VkglTestCase_013464_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
#define VkglTestCase_013464_2 "et.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013464, VkglTestCase_013464_1, VkglTestCase_013464_2);

#define VkglTestCase_013465_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2"
#define VkglTestCase_013465_2 "d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013465, VkglTestCase_013465_1, VkglTestCase_013465_2);

#define VkglTestCase_013500_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requir"
#define VkglTestCase_013500_2 "ed_offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013500, VkglTestCase_013500_1, VkglTestCase_013500_2);

#define VkglTestCase_013501_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
#define VkglTestCase_013501_2 "d_offset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013501, VkglTestCase_013501_1, VkglTestCase_013501_2);

#define VkglTestCase_013502_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
#define VkglTestCase_013502_2 "fset.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013502, VkglTestCase_013502_1, VkglTestCase_013502_2);

#define VkglTestCase_013530_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_"
#define VkglTestCase_013530_2 "offset.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013530, VkglTestCase_013530_1, VkglTestCase_013530_2);

#define VkglTestCase_013531_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_o"
#define VkglTestCase_013531_2 "ffset.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013531, VkglTestCase_013531_1, VkglTestCase_013531_2);

#define VkglTestCase_013532_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offse"
#define VkglTestCase_013532_2 "t.2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013532, VkglTestCase_013532_1, VkglTestCase_013532_2);

#define VkglTestCase_013592_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013592_2 "ion_offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013592, VkglTestCase_013592_1, VkglTestCase_013592_2);

#define VkglTestCase_013593_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013593_2 "on_offset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013593, VkglTestCase_013593_1, VkglTestCase_013593_2);

#define VkglTestCase_013594_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013594_2 "ffset.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013594, VkglTestCase_013594_1, VkglTestCase_013594_2);

#define VkglTestCase_013661_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013661_2 "_offset.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013661, VkglTestCase_013661_1, VkglTestCase_013661_2);

#define VkglTestCase_013662_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
#define VkglTestCase_013662_2 "offset.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013662, VkglTestCase_013662_1, VkglTestCase_013662_2);

#define VkglTestCase_013663_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offs"
#define VkglTestCase_013663_2 "et.2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013663, VkglTestCase_013663_1, VkglTestCase_013663_2);

#define VkglTestCase_013698_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013698_2 "ffset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013698, VkglTestCase_013698_1, VkglTestCase_013698_2);

#define VkglTestCase_013699_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
#define VkglTestCase_013699_2 "fset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013699, VkglTestCase_013699_1, VkglTestCase_013699_2);

#define VkglTestCase_013700_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
#define VkglTestCase_013700_2 "t.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013700, VkglTestCase_013700_1, VkglTestCase_013700_2);

#define VkglTestCase_013728_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offs"
#define VkglTestCase_013728_2 "et.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013728, VkglTestCase_013728_1, VkglTestCase_013728_2);

#define VkglTestCase_013729_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offse"
#define VkglTestCase_013729_2 "t.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013729, VkglTestCase_013729_1, VkglTestCase_013729_2);

#define VkglTestCase_013730_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2"
#define VkglTestCase_013730_2 "d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013730, VkglTestCase_013730_1, VkglTestCase_013730_2);

#define VkglTestCase_013790_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013790_2 "offset.2d.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013790, VkglTestCase_013790_1, VkglTestCase_013790_2);

#define VkglTestCase_013791_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013791_2 "ffset.2d.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013791, VkglTestCase_013791_1, VkglTestCase_013791_2);

#define VkglTestCase_013792_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013792_2 "et.2d.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013792, VkglTestCase_013792_1, VkglTestCase_013792_2);

#define VkglTestCase_013859_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013859_2 "set.2d_array.depth32f.size_pot.compare_less.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013859, VkglTestCase_013859_1, VkglTestCase_013859_2);

#define VkglTestCase_013860_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013860_2 "et.2d_array.depth32f.size_pot.compare_less.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013860, VkglTestCase_013860_1, VkglTestCase_013860_2);

#define VkglTestCase_013861_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset."
#define VkglTestCase_013861_2 "2d_array.depth32f.size_pot.compare_less.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013861, VkglTestCase_013861_1, VkglTestCase_013861_2);
