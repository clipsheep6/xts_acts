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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023491_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023491_2 "_6x5_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023491, VkglTestCase_023491_1, VkglTestCase_023491_2);

#define VkglTestCase_023492_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023492_2 "c_6x5_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023492, VkglTestCase_023492_1, VkglTestCase_023492_2);

#define VkglTestCase_023493_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023493_2 "_6x5_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023493, VkglTestCase_023493_1, VkglTestCase_023493_2);

#define VkglTestCase_023494_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023494_2 "_6x5_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023494, VkglTestCase_023494_1, VkglTestCase_023494_2);

#define VkglTestCase_023495_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023495_2 "_6x5_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023495, VkglTestCase_023495_1, VkglTestCase_023495_2);

#define VkglTestCase_023496_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023496_2 "_6x5_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023496, VkglTestCase_023496_1, VkglTestCase_023496_2);

#define VkglTestCase_023497_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023497_2 "_6x5_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023497, VkglTestCase_023497_1, VkglTestCase_023497_2);

#define VkglTestCase_023498_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023498_2 "_6x5_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023498, VkglTestCase_023498_1, VkglTestCase_023498_2);

#define VkglTestCase_023499_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023499_2 "6x5_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023499, VkglTestCase_023499_1, VkglTestCase_023499_2);

#define VkglTestCase_023500_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023500_2 "_6x5_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023500, VkglTestCase_023500_1, VkglTestCase_023500_2);

#define VkglTestCase_023501_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023501_2 "6x5_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023501, VkglTestCase_023501_1, VkglTestCase_023501_2);

#define VkglTestCase_023502_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023502_2 "_6x5_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023502, VkglTestCase_023502_1, VkglTestCase_023502_2);

#define VkglTestCase_023503_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023503_2 "_6x5_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023503, VkglTestCase_023503_1, VkglTestCase_023503_2);

#define VkglTestCase_023504_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023504_2 "_6x5_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023504, VkglTestCase_023504_1, VkglTestCase_023504_2);

#define VkglTestCase_023505_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023505_2 "6x5_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023505, VkglTestCase_023505_1, VkglTestCase_023505_2);

#define VkglTestCase_023506_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023506_2 "_6x5_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023506, VkglTestCase_023506_1, VkglTestCase_023506_2);

#define VkglTestCase_023507_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023507_2 "6x5_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023507, VkglTestCase_023507_1, VkglTestCase_023507_2);

#define VkglTestCase_023508_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023508_2 "_6x5_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023508, VkglTestCase_023508_1, VkglTestCase_023508_2);

#define VkglTestCase_023509_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023509_2 "x5_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023509, VkglTestCase_023509_1, VkglTestCase_023509_2);

#define VkglTestCase_023510_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023510_2 "6x5_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023510, VkglTestCase_023510_1, VkglTestCase_023510_2);

#define VkglTestCase_023511_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023511_2 "x5_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023511, VkglTestCase_023511_1, VkglTestCase_023511_2);

#define VkglTestCase_023512_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023512_2 "x5_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023512, VkglTestCase_023512_1, VkglTestCase_023512_2);

#define VkglTestCase_023513_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023513_2 "x5_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023513, VkglTestCase_023513_1, VkglTestCase_023513_2);

#define VkglTestCase_023514_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023514_2 "x5_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023514, VkglTestCase_023514_1, VkglTestCase_023514_2);

#define VkglTestCase_023515_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023515_2 "x5_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023515, VkglTestCase_023515_1, VkglTestCase_023515_2);

#define VkglTestCase_023516_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023516_2 "x5_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023516, VkglTestCase_023516_1, VkglTestCase_023516_2);

#define VkglTestCase_023517_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023517_2 "5_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023517, VkglTestCase_023517_1, VkglTestCase_023517_2);

#define VkglTestCase_023518_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023518_2 "x5_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023518, VkglTestCase_023518_1, VkglTestCase_023518_2);

#define VkglTestCase_023519_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023519_2 "5_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023519, VkglTestCase_023519_1, VkglTestCase_023519_2);

#define VkglTestCase_023520_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023520_2 "x5_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023520, VkglTestCase_023520_1, VkglTestCase_023520_2);

#define VkglTestCase_023521_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023521_2 "x5_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023521, VkglTestCase_023521_1, VkglTestCase_023521_2);

#define VkglTestCase_023522_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023522_2 "x5_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023522, VkglTestCase_023522_1, VkglTestCase_023522_2);

#define VkglTestCase_023523_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023523_2 "5_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023523, VkglTestCase_023523_1, VkglTestCase_023523_2);

#define VkglTestCase_023524_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023524_2 "x5_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023524, VkglTestCase_023524_1, VkglTestCase_023524_2);

#define VkglTestCase_023525_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023525_2 "5_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023525, VkglTestCase_023525_1, VkglTestCase_023525_2);

#define VkglTestCase_023526_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023526_2 "x5_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023526, VkglTestCase_023526_1, VkglTestCase_023526_2);
