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

#define VkglTestCase_023635_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023635_2 "_8x8_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023635, VkglTestCase_023635_1, VkglTestCase_023635_2);

#define VkglTestCase_023636_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023636_2 "c_8x8_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023636, VkglTestCase_023636_1, VkglTestCase_023636_2);

#define VkglTestCase_023637_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023637_2 "_8x8_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023637, VkglTestCase_023637_1, VkglTestCase_023637_2);

#define VkglTestCase_023638_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023638_2 "_8x8_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023638, VkglTestCase_023638_1, VkglTestCase_023638_2);

#define VkglTestCase_023639_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023639_2 "_8x8_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023639, VkglTestCase_023639_1, VkglTestCase_023639_2);

#define VkglTestCase_023640_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023640_2 "_8x8_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023640, VkglTestCase_023640_1, VkglTestCase_023640_2);

#define VkglTestCase_023641_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023641_2 "_8x8_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023641, VkglTestCase_023641_1, VkglTestCase_023641_2);

#define VkglTestCase_023642_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023642_2 "_8x8_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023642, VkglTestCase_023642_1, VkglTestCase_023642_2);

#define VkglTestCase_023643_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023643_2 "8x8_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023643, VkglTestCase_023643_1, VkglTestCase_023643_2);

#define VkglTestCase_023644_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023644_2 "_8x8_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023644, VkglTestCase_023644_1, VkglTestCase_023644_2);

#define VkglTestCase_023645_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023645_2 "8x8_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023645, VkglTestCase_023645_1, VkglTestCase_023645_2);

#define VkglTestCase_023646_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023646_2 "_8x8_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023646, VkglTestCase_023646_1, VkglTestCase_023646_2);

#define VkglTestCase_023647_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023647_2 "_8x8_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023647, VkglTestCase_023647_1, VkglTestCase_023647_2);

#define VkglTestCase_023648_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023648_2 "_8x8_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023648, VkglTestCase_023648_1, VkglTestCase_023648_2);

#define VkglTestCase_023649_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023649_2 "8x8_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023649, VkglTestCase_023649_1, VkglTestCase_023649_2);

#define VkglTestCase_023650_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023650_2 "_8x8_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023650, VkglTestCase_023650_1, VkglTestCase_023650_2);

#define VkglTestCase_023651_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023651_2 "8x8_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023651, VkglTestCase_023651_1, VkglTestCase_023651_2);

#define VkglTestCase_023652_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023652_2 "_8x8_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023652, VkglTestCase_023652_1, VkglTestCase_023652_2);

#define VkglTestCase_023653_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023653_2 "x8_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023653, VkglTestCase_023653_1, VkglTestCase_023653_2);

#define VkglTestCase_023654_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023654_2 "8x8_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023654, VkglTestCase_023654_1, VkglTestCase_023654_2);

#define VkglTestCase_023655_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023655_2 "x8_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023655, VkglTestCase_023655_1, VkglTestCase_023655_2);

#define VkglTestCase_023656_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023656_2 "x8_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023656, VkglTestCase_023656_1, VkglTestCase_023656_2);

#define VkglTestCase_023657_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023657_2 "x8_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023657, VkglTestCase_023657_1, VkglTestCase_023657_2);

#define VkglTestCase_023658_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023658_2 "x8_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023658, VkglTestCase_023658_1, VkglTestCase_023658_2);

#define VkglTestCase_023659_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023659_2 "x8_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023659, VkglTestCase_023659_1, VkglTestCase_023659_2);

#define VkglTestCase_023660_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023660_2 "x8_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023660, VkglTestCase_023660_1, VkglTestCase_023660_2);

#define VkglTestCase_023661_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023661_2 "8_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023661, VkglTestCase_023661_1, VkglTestCase_023661_2);

#define VkglTestCase_023662_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023662_2 "x8_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023662, VkglTestCase_023662_1, VkglTestCase_023662_2);

#define VkglTestCase_023663_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023663_2 "8_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023663, VkglTestCase_023663_1, VkglTestCase_023663_2);

#define VkglTestCase_023664_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023664_2 "x8_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023664, VkglTestCase_023664_1, VkglTestCase_023664_2);

#define VkglTestCase_023665_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023665_2 "x8_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023665, VkglTestCase_023665_1, VkglTestCase_023665_2);

#define VkglTestCase_023666_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023666_2 "x8_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023666, VkglTestCase_023666_1, VkglTestCase_023666_2);

#define VkglTestCase_023667_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023667_2 "8_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023667, VkglTestCase_023667_1, VkglTestCase_023667_2);

#define VkglTestCase_023668_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023668_2 "x8_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023668, VkglTestCase_023668_1, VkglTestCase_023668_2);

#define VkglTestCase_023669_1 "dEQP-GLES3.functional.texture.wrap.astc_8x"
#define VkglTestCase_023669_2 "8_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023669, VkglTestCase_023669_1, VkglTestCase_023669_2);

#define VkglTestCase_023670_1 "dEQP-GLES3.functional.texture.wrap.astc_8"
#define VkglTestCase_023670_2 "x8_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023670, VkglTestCase_023670_1, VkglTestCase_023670_2);
