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

#define VkglTestCase_013078_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013078_2 ".2d.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013078, VkglTestCase_013078_1, VkglTestCase_013078_2);

#define VkglTestCase_013079_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgba"
#define VkglTestCase_013079_2 "8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013079, VkglTestCase_013079_1, VkglTestCase_013079_2);

#define VkglTestCase_013080_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgb"
#define VkglTestCase_013080_2 "a8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013080, VkglTestCase_013080_1, VkglTestCase_013080_2);

#define VkglTestCase_013081_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgb"
#define VkglTestCase_013081_2 "a8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013081, VkglTestCase_013081_1, VkglTestCase_013081_2);

#define VkglTestCase_013082_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgb"
#define VkglTestCase_013082_2 "a8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013082, VkglTestCase_013082_1, VkglTestCase_013082_2);

#define VkglTestCase_013147_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013147_2 "_array.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013147, VkglTestCase_013147_1, VkglTestCase_013147_2);

#define VkglTestCase_013148_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.r"
#define VkglTestCase_013148_2 "gba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013148, VkglTestCase_013148_1, VkglTestCase_013148_2);

#define VkglTestCase_013149_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013149_2 "rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013149, VkglTestCase_013149_1, VkglTestCase_013149_2);

#define VkglTestCase_013150_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013150_2 "rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013150, VkglTestCase_013150_1, VkglTestCase_013150_2);

#define VkglTestCase_013151_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array."
#define VkglTestCase_013151_2 "rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013151, VkglTestCase_013151_1, VkglTestCase_013151_2);

#define VkglTestCase_013222_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013222_2 "cube.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013222, VkglTestCase_013222_1, VkglTestCase_013222_2);

#define VkglTestCase_013223_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgb"
#define VkglTestCase_013223_2 "a8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013223, VkglTestCase_013223_1, VkglTestCase_013223_2);

#define VkglTestCase_013224_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rg"
#define VkglTestCase_013224_2 "ba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013224, VkglTestCase_013224_1, VkglTestCase_013224_2);

#define VkglTestCase_013225_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rg"
#define VkglTestCase_013225_2 "ba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013225, VkglTestCase_013225_1, VkglTestCase_013225_2);

#define VkglTestCase_013226_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rg"
#define VkglTestCase_013226_2 "ba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013226, VkglTestCase_013226_1, VkglTestCase_013226_2);

#define VkglTestCase_013356_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013356_2 "ation_offset.2d.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013356, VkglTestCase_013356_1, VkglTestCase_013356_2);

#define VkglTestCase_013357_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013357_2 "fset.2d.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013357, VkglTestCase_013357_1, VkglTestCase_013357_2);

#define VkglTestCase_013358_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013358_2 "fset.2d.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013358, VkglTestCase_013358_1, VkglTestCase_013358_2);

#define VkglTestCase_013359_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_of"
#define VkglTestCase_013359_2 "fset.2d.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013359, VkglTestCase_013359_1, VkglTestCase_013359_2);

#define VkglTestCase_013360_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013360_2 "ffset.2d.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013360, VkglTestCase_013360_1, VkglTestCase_013360_2);

#define VkglTestCase_013425_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013425_2 "on_offset.2d_array.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013425, VkglTestCase_013425_1, VkglTestCase_013425_2);

#define VkglTestCase_013426_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013426_2 "t.2d_array.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013426, VkglTestCase_013426_1, VkglTestCase_013426_2);

#define VkglTestCase_013427_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013427_2 "t.2d_array.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013427, VkglTestCase_013427_1, VkglTestCase_013427_2);

#define VkglTestCase_013428_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offse"
#define VkglTestCase_013428_2 "t.2d_array.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013428, VkglTestCase_013428_1, VkglTestCase_013428_2);

#define VkglTestCase_013429_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
#define VkglTestCase_013429_2 "et.2d_array.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013429, VkglTestCase_013429_1, VkglTestCase_013429_2);

#define VkglTestCase_013554_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013554_2 "mentation_offset.2d.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013554, VkglTestCase_013554_1, VkglTestCase_013554_2);

#define VkglTestCase_013555_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013555_2 "n_offset.2d.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013555, VkglTestCase_013555_1, VkglTestCase_013555_2);

#define VkglTestCase_013556_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013556_2 "n_offset.2d.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013556, VkglTestCase_013556_1, VkglTestCase_013556_2);

#define VkglTestCase_013557_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementatio"
#define VkglTestCase_013557_2 "n_offset.2d.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013557, VkglTestCase_013557_1, VkglTestCase_013557_2);

#define VkglTestCase_013558_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013558_2 "on_offset.2d.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013558, VkglTestCase_013558_1, VkglTestCase_013558_2);

#define VkglTestCase_013623_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013623_2 "tation_offset.2d_array.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013623, VkglTestCase_013623_1, VkglTestCase_013623_2);

#define VkglTestCase_013624_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013624_2 "ffset.2d_array.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013624, VkglTestCase_013624_1, VkglTestCase_013624_2);

#define VkglTestCase_013625_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013625_2 "ffset.2d_array.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013625, VkglTestCase_013625_1, VkglTestCase_013625_2);

#define VkglTestCase_013626_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_o"
#define VkglTestCase_013626_2 "ffset.2d_array.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013626, VkglTestCase_013626_1, VkglTestCase_013626_2);

#define VkglTestCase_013627_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
#define VkglTestCase_013627_2 "offset.2d_array.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013627, VkglTestCase_013627_1, VkglTestCase_013627_2);

#define VkglTestCase_013752_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013752_2 "ation_offset.2d.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013752, VkglTestCase_013752_1, VkglTestCase_013752_2);

#define VkglTestCase_013753_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_of"
#define VkglTestCase_013753_2 "fset.2d.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013753, VkglTestCase_013753_1, VkglTestCase_013753_2);

#define VkglTestCase_013754_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013754_2 "ffset.2d.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013754, VkglTestCase_013754_1, VkglTestCase_013754_2);

#define VkglTestCase_013755_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013755_2 "ffset.2d.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013755, VkglTestCase_013755_1, VkglTestCase_013755_2);

#define VkglTestCase_013756_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013756_2 "ffset.2d.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013756, VkglTestCase_013756_1, VkglTestCase_013756_2);

#define VkglTestCase_013821_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013821_2 "on_offset.2d_array.rgba8.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013821, VkglTestCase_013821_1, VkglTestCase_013821_2);

#define VkglTestCase_013822_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
#define VkglTestCase_013822_2 "t.2d_array.rgba8.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013822, VkglTestCase_013822_1, VkglTestCase_013822_2);

#define VkglTestCase_013823_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013823_2 "et.2d_array.rgba8.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013823, VkglTestCase_013823_1, VkglTestCase_013823_2);

#define VkglTestCase_013824_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013824_2 "et.2d_array.rgba8.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013824, VkglTestCase_013824_1, VkglTestCase_013824_2);

#define VkglTestCase_013825_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offs"
#define VkglTestCase_013825_2 "et.2d_array.rgba8.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013825, VkglTestCase_013825_1, VkglTestCase_013825_2);
