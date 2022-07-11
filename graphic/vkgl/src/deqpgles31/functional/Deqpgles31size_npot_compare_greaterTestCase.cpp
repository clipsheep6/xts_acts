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

#define VkglTestCase_013125_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dept"
#define VkglTestCase_013125_2 "h32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013125, VkglTestCase_013125_1, VkglTestCase_013125_2);

#define VkglTestCase_013126_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth"
#define VkglTestCase_013126_2 "32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013126, VkglTestCase_013126_1, VkglTestCase_013126_2);

#define VkglTestCase_013127_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth32f"
#define VkglTestCase_013127_2 ".size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013127, VkglTestCase_013127_1, VkglTestCase_013127_2);

#define VkglTestCase_013194_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.d"
#define VkglTestCase_013194_2 "epth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013194, VkglTestCase_013194_1, VkglTestCase_013194_2);

#define VkglTestCase_013195_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.de"
#define VkglTestCase_013195_2 "pth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013195, VkglTestCase_013195_1, VkglTestCase_013195_2);

#define VkglTestCase_013196_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.depth"
#define VkglTestCase_013196_2 "32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013196, VkglTestCase_013196_1, VkglTestCase_013196_2);

#define VkglTestCase_013281_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f"
#define VkglTestCase_013281_2 ".no_corners.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013281, VkglTestCase_013281_1, VkglTestCase_013281_2);

#define VkglTestCase_013282_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f."
#define VkglTestCase_013282_2 "no_corners.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013282, VkglTestCase_013282_1, VkglTestCase_013282_2);

#define VkglTestCase_013283_1 "dEQP-GLES31.functional.texture.gather.basic.cube.depth32f.no_c"
#define VkglTestCase_013283_2 "orners.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013283, VkglTestCase_013283_1, VkglTestCase_013283_2);

#define VkglTestCase_013311_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_off"
#define VkglTestCase_013311_2 "set.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013311, VkglTestCase_013311_1, VkglTestCase_013311_2);

#define VkglTestCase_013312_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offs"
#define VkglTestCase_013312_2 "et.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013312, VkglTestCase_013312_1, VkglTestCase_013312_2);

#define VkglTestCase_013313_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2"
#define VkglTestCase_013313_2 "d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013313, VkglTestCase_013313_1, VkglTestCase_013313_2);

#define VkglTestCase_013341_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset"
#define VkglTestCase_013341_2 ".2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013341, VkglTestCase_013341_1, VkglTestCase_013341_2);

#define VkglTestCase_013342_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset."
#define VkglTestCase_013342_2 "2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013342, VkglTestCase_013342_1, VkglTestCase_013342_2);

#define VkglTestCase_013343_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_offset.2d_a"
#define VkglTestCase_013343_2 "rray.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013343, VkglTestCase_013343_1, VkglTestCase_013343_2);

#define VkglTestCase_013403_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013403_2 "fset.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013403, VkglTestCase_013403_1, VkglTestCase_013403_2);

#define VkglTestCase_013404_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013404_2 "set.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013404, VkglTestCase_013404_1, VkglTestCase_013404_2);

#define VkglTestCase_013405_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset."
#define VkglTestCase_013405_2 "2d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013405, VkglTestCase_013405_1, VkglTestCase_013405_2);

#define VkglTestCase_013472_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013472_2 "t.2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013472, VkglTestCase_013472_1, VkglTestCase_013472_2);

#define VkglTestCase_013473_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013473_2 ".2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013473, VkglTestCase_013473_1, VkglTestCase_013473_2);

#define VkglTestCase_013474_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset.2d_"
#define VkglTestCase_013474_2 "array.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013474, VkglTestCase_013474_1, VkglTestCase_013474_2);

#define VkglTestCase_013509_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required"
#define VkglTestCase_013509_2 "_offset.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013509, VkglTestCase_013509_1, VkglTestCase_013509_2);

#define VkglTestCase_013510_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_"
#define VkglTestCase_013510_2 "offset.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013510, VkglTestCase_013510_1, VkglTestCase_013510_2);

#define VkglTestCase_013511_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offs"
#define VkglTestCase_013511_2 "et.2d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013511, VkglTestCase_013511_1, VkglTestCase_013511_2);

#define VkglTestCase_013539_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_of"
#define VkglTestCase_013539_2 "fset.2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013539, VkglTestCase_013539_1, VkglTestCase_013539_2);

#define VkglTestCase_013540_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_off"
#define VkglTestCase_013540_2 "set.2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013540, VkglTestCase_013540_1, VkglTestCase_013540_2);

#define VkglTestCase_013541_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_required_offset."
#define VkglTestCase_013541_2 "2d_array.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013541, VkglTestCase_013541_1, VkglTestCase_013541_2);

#define VkglTestCase_013601_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013601_2 "n_offset.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013601, VkglTestCase_013601_1, VkglTestCase_013601_2);

#define VkglTestCase_013602_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013602_2 "_offset.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013602, VkglTestCase_013602_1, VkglTestCase_013602_2);

#define VkglTestCase_013603_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_off"
#define VkglTestCase_013603_2 "set.2d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013603, VkglTestCase_013603_1, VkglTestCase_013603_2);

#define VkglTestCase_013670_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013670_2 "ffset.2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013670, VkglTestCase_013670_1, VkglTestCase_013670_2);

#define VkglTestCase_013671_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013671_2 "fset.2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013671, VkglTestCase_013671_1, VkglTestCase_013671_2);

#define VkglTestCase_013672_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_offset"
#define VkglTestCase_013672_2 ".2d_array.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013672, VkglTestCase_013672_1, VkglTestCase_013672_2);

#define VkglTestCase_013707_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_off"
#define VkglTestCase_013707_2 "set.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013707, VkglTestCase_013707_1, VkglTestCase_013707_2);

#define VkglTestCase_013708_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offs"
#define VkglTestCase_013708_2 "et.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013708, VkglTestCase_013708_1, VkglTestCase_013708_2);

#define VkglTestCase_013709_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset."
#define VkglTestCase_013709_2 "2d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013709, VkglTestCase_013709_1, VkglTestCase_013709_2);

#define VkglTestCase_013737_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset"
#define VkglTestCase_013737_2 ".2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013737, VkglTestCase_013737_1, VkglTestCase_013737_2);

#define VkglTestCase_013738_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset."
#define VkglTestCase_013738_2 "2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013738, VkglTestCase_013738_1, VkglTestCase_013738_2);

#define VkglTestCase_013739_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_offset.2d_"
#define VkglTestCase_013739_2 "array.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013739, VkglTestCase_013739_1, VkglTestCase_013739_2);

#define VkglTestCase_013799_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_of"
#define VkglTestCase_013799_2 "fset.2d.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013799, VkglTestCase_013799_1, VkglTestCase_013799_2);

#define VkglTestCase_013800_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013800_2 "set.2d.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013800, VkglTestCase_013800_1, VkglTestCase_013800_2);

#define VkglTestCase_013801_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013801_2 ".2d.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013801, VkglTestCase_013801_1, VkglTestCase_013801_2);

#define VkglTestCase_013868_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
#define VkglTestCase_013868_2 "t.2d_array.depth32f.size_npot.compare_greater.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013868, VkglTestCase_013868_1, VkglTestCase_013868_2);

#define VkglTestCase_013869_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013869_2 ".2d_array.depth32f.size_npot.compare_greater.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013869, VkglTestCase_013869_1, VkglTestCase_013869_2);

#define VkglTestCase_013870_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset.2d"
#define VkglTestCase_013870_2 "_array.depth32f.size_npot.compare_greater.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013870, VkglTestCase_013870_1, VkglTestCase_013870_2);
