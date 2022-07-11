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

#define VkglTestCase_023599_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023599_2 "_8x6_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023599, VkglTestCase_023599_1, VkglTestCase_023599_2);

#define VkglTestCase_023600_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023600_2 "c_8x6_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023600, VkglTestCase_023600_1, VkglTestCase_023600_2);

#define VkglTestCase_023601_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023601_2 "_8x6_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023601, VkglTestCase_023601_1, VkglTestCase_023601_2);

#define VkglTestCase_023602_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023602_2 "_8x6_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023602, VkglTestCase_023602_1, VkglTestCase_023602_2);

#define VkglTestCase_023603_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023603_2 "_8x6_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023603, VkglTestCase_023603_1, VkglTestCase_023603_2);

#define VkglTestCase_023604_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023604_2 "_8x6_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023604, VkglTestCase_023604_1, VkglTestCase_023604_2);

#define VkglTestCase_023605_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023605_2 "_8x6_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023605, VkglTestCase_023605_1, VkglTestCase_023605_2);

#define VkglTestCase_023606_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023606_2 "_8x6_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023606, VkglTestCase_023606_1, VkglTestCase_023606_2);

#define VkglTestCase_023607_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023607_2 "8x6_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023607, VkglTestCase_023607_1, VkglTestCase_023607_2);

#define VkglTestCase_023608_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023608_2 "_8x6_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023608, VkglTestCase_023608_1, VkglTestCase_023608_2);

#define VkglTestCase_023609_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023609_2 "8x6_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023609, VkglTestCase_023609_1, VkglTestCase_023609_2);

#define VkglTestCase_023610_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023610_2 "_8x6_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023610, VkglTestCase_023610_1, VkglTestCase_023610_2);

#define VkglTestCase_023611_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023611_2 "_8x6_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023611, VkglTestCase_023611_1, VkglTestCase_023611_2);

#define VkglTestCase_023612_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023612_2 "_8x6_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023612, VkglTestCase_023612_1, VkglTestCase_023612_2);

#define VkglTestCase_023613_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023613_2 "8x6_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023613, VkglTestCase_023613_1, VkglTestCase_023613_2);

#define VkglTestCase_023614_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023614_2 "_8x6_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023614, VkglTestCase_023614_1, VkglTestCase_023614_2);

#define VkglTestCase_023615_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023615_2 "8x6_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023615, VkglTestCase_023615_1, VkglTestCase_023615_2);

#define VkglTestCase_023616_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023616_2 "_8x6_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023616, VkglTestCase_023616_1, VkglTestCase_023616_2);

#define VkglTestCase_023617_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023617_2 "x6_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023617, VkglTestCase_023617_1, VkglTestCase_023617_2);

#define VkglTestCase_023618_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023618_2 "8x6_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023618, VkglTestCase_023618_1, VkglTestCase_023618_2);

#define VkglTestCase_023619_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023619_2 "x6_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023619, VkglTestCase_023619_1, VkglTestCase_023619_2);

#define VkglTestCase_023620_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023620_2 "x6_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023620, VkglTestCase_023620_1, VkglTestCase_023620_2);

#define VkglTestCase_023621_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023621_2 "x6_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023621, VkglTestCase_023621_1, VkglTestCase_023621_2);

#define VkglTestCase_023622_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023622_2 "x6_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023622, VkglTestCase_023622_1, VkglTestCase_023622_2);

#define VkglTestCase_023623_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023623_2 "x6_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023623, VkglTestCase_023623_1, VkglTestCase_023623_2);

#define VkglTestCase_023624_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023624_2 "x6_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023624, VkglTestCase_023624_1, VkglTestCase_023624_2);

#define VkglTestCase_023625_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023625_2 "6_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023625, VkglTestCase_023625_1, VkglTestCase_023625_2);

#define VkglTestCase_023626_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023626_2 "x6_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023626, VkglTestCase_023626_1, VkglTestCase_023626_2);

#define VkglTestCase_023627_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023627_2 "6_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023627, VkglTestCase_023627_1, VkglTestCase_023627_2);

#define VkglTestCase_023628_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023628_2 "x6_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023628, VkglTestCase_023628_1, VkglTestCase_023628_2);

#define VkglTestCase_023629_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023629_2 "x6_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023629, VkglTestCase_023629_1, VkglTestCase_023629_2);

#define VkglTestCase_023630_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023630_2 "x6_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023630, VkglTestCase_023630_1, VkglTestCase_023630_2);

#define VkglTestCase_023631_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023631_2 "6_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023631, VkglTestCase_023631_1, VkglTestCase_023631_2);

#define VkglTestCase_023632_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023632_2 "x6_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023632, VkglTestCase_023632_1, VkglTestCase_023632_2);

#define VkglTestCase_023633_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023633_2 "6_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023633, VkglTestCase_023633_1, VkglTestCase_023633_2);

#define VkglTestCase_023634_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023634_2 "x6_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023634, VkglTestCase_023634_1, VkglTestCase_023634_2);
