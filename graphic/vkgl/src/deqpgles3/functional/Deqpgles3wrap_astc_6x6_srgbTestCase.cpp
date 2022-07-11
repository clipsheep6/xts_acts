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

#define VkglTestCase_023527_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023527_2 "_6x6_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023527, VkglTestCase_023527_1, VkglTestCase_023527_2);

#define VkglTestCase_023528_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023528_2 "c_6x6_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023528, VkglTestCase_023528_1, VkglTestCase_023528_2);

#define VkglTestCase_023529_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023529_2 "_6x6_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023529, VkglTestCase_023529_1, VkglTestCase_023529_2);

#define VkglTestCase_023530_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023530_2 "_6x6_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023530, VkglTestCase_023530_1, VkglTestCase_023530_2);

#define VkglTestCase_023531_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023531_2 "_6x6_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023531, VkglTestCase_023531_1, VkglTestCase_023531_2);

#define VkglTestCase_023532_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023532_2 "_6x6_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023532, VkglTestCase_023532_1, VkglTestCase_023532_2);

#define VkglTestCase_023533_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023533_2 "_6x6_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023533, VkglTestCase_023533_1, VkglTestCase_023533_2);

#define VkglTestCase_023534_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023534_2 "_6x6_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023534, VkglTestCase_023534_1, VkglTestCase_023534_2);

#define VkglTestCase_023535_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023535_2 "6x6_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023535, VkglTestCase_023535_1, VkglTestCase_023535_2);

#define VkglTestCase_023536_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023536_2 "_6x6_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023536, VkglTestCase_023536_1, VkglTestCase_023536_2);

#define VkglTestCase_023537_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023537_2 "6x6_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023537, VkglTestCase_023537_1, VkglTestCase_023537_2);

#define VkglTestCase_023538_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023538_2 "_6x6_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023538, VkglTestCase_023538_1, VkglTestCase_023538_2);

#define VkglTestCase_023539_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023539_2 "_6x6_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023539, VkglTestCase_023539_1, VkglTestCase_023539_2);

#define VkglTestCase_023540_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023540_2 "_6x6_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023540, VkglTestCase_023540_1, VkglTestCase_023540_2);

#define VkglTestCase_023541_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023541_2 "6x6_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023541, VkglTestCase_023541_1, VkglTestCase_023541_2);

#define VkglTestCase_023542_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023542_2 "_6x6_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023542, VkglTestCase_023542_1, VkglTestCase_023542_2);

#define VkglTestCase_023543_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023543_2 "6x6_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023543, VkglTestCase_023543_1, VkglTestCase_023543_2);

#define VkglTestCase_023544_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023544_2 "_6x6_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023544, VkglTestCase_023544_1, VkglTestCase_023544_2);

#define VkglTestCase_023545_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023545_2 "x6_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023545, VkglTestCase_023545_1, VkglTestCase_023545_2);

#define VkglTestCase_023546_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023546_2 "6x6_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023546, VkglTestCase_023546_1, VkglTestCase_023546_2);

#define VkglTestCase_023547_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023547_2 "x6_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023547, VkglTestCase_023547_1, VkglTestCase_023547_2);

#define VkglTestCase_023548_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023548_2 "x6_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023548, VkglTestCase_023548_1, VkglTestCase_023548_2);

#define VkglTestCase_023549_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023549_2 "x6_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023549, VkglTestCase_023549_1, VkglTestCase_023549_2);

#define VkglTestCase_023550_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023550_2 "x6_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023550, VkglTestCase_023550_1, VkglTestCase_023550_2);

#define VkglTestCase_023551_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023551_2 "x6_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023551, VkglTestCase_023551_1, VkglTestCase_023551_2);

#define VkglTestCase_023552_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023552_2 "x6_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023552, VkglTestCase_023552_1, VkglTestCase_023552_2);

#define VkglTestCase_023553_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023553_2 "6_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023553, VkglTestCase_023553_1, VkglTestCase_023553_2);

#define VkglTestCase_023554_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023554_2 "x6_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023554, VkglTestCase_023554_1, VkglTestCase_023554_2);

#define VkglTestCase_023555_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023555_2 "6_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023555, VkglTestCase_023555_1, VkglTestCase_023555_2);

#define VkglTestCase_023556_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023556_2 "x6_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023556, VkglTestCase_023556_1, VkglTestCase_023556_2);

#define VkglTestCase_023557_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023557_2 "x6_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023557, VkglTestCase_023557_1, VkglTestCase_023557_2);

#define VkglTestCase_023558_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023558_2 "x6_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023558, VkglTestCase_023558_1, VkglTestCase_023558_2);

#define VkglTestCase_023559_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023559_2 "6_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023559, VkglTestCase_023559_1, VkglTestCase_023559_2);

#define VkglTestCase_023560_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023560_2 "x6_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023560, VkglTestCase_023560_1, VkglTestCase_023560_2);

#define VkglTestCase_023561_1 "dEQP-GLES3.functional.texture.wrap.astc_6x"
#define VkglTestCase_023561_2 "6_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023561, VkglTestCase_023561_1, VkglTestCase_023561_2);

#define VkglTestCase_023562_1 "dEQP-GLES3.functional.texture.wrap.astc_6"
#define VkglTestCase_023562_2 "x6_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023562, VkglTestCase_023562_1, VkglTestCase_023562_2);
