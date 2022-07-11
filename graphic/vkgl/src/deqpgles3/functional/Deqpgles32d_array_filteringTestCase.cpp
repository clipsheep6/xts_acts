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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027038_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027038_2 "d_array.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027038, VkglTestCase_027038_1, VkglTestCase_027038_2);

#define VkglTestCase_027039_1 "dEQP-GLES3.functional.texture.vertex.2d"
#define VkglTestCase_027039_2 "_array.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027039, VkglTestCase_027039_1, VkglTestCase_027039_2);

#define VkglTestCase_027040_1 "dEQP-GLES3.functional.texture.vertex.2d"
#define VkglTestCase_027040_2 "_array.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027040, VkglTestCase_027040_1, VkglTestCase_027040_2);

#define VkglTestCase_027041_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027041_2 "d_array.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027041, VkglTestCase_027041_1, VkglTestCase_027041_2);

#define VkglTestCase_027042_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027042_2 "d_array.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027042, VkglTestCase_027042_1, VkglTestCase_027042_2);

#define VkglTestCase_027043_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027043_2 "d_array.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027043, VkglTestCase_027043_1, VkglTestCase_027043_2);

#define VkglTestCase_027044_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027044_2 "d_array.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027044, VkglTestCase_027044_1, VkglTestCase_027044_2);

#define VkglTestCase_027045_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027045_2 "d_array.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027045, VkglTestCase_027045_1, VkglTestCase_027045_2);

#define VkglTestCase_027046_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027046_2 "d_array.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027046, VkglTestCase_027046_1, VkglTestCase_027046_2);

#define VkglTestCase_027047_1 "dEQP-GLES3.functional.texture.vertex."
#define VkglTestCase_027047_2 "2d_array.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027047, VkglTestCase_027047_1, VkglTestCase_027047_2);

#define VkglTestCase_027048_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027048_2 "d_array.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027048, VkglTestCase_027048_1, VkglTestCase_027048_2);

#define VkglTestCase_027049_1 "dEQP-GLES3.functional.texture.vertex.2"
#define VkglTestCase_027049_2 "d_array.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027049, VkglTestCase_027049_1, VkglTestCase_027049_2);

#define VkglTestCase_027050_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027050_2 "filtering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027050, VkglTestCase_027050_1, VkglTestCase_027050_2);

#define VkglTestCase_027051_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027051_2 "filtering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027051, VkglTestCase_027051_1, VkglTestCase_027051_2);

#define VkglTestCase_027052_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027052_2 "filtering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027052, VkglTestCase_027052_1, VkglTestCase_027052_2);

#define VkglTestCase_027053_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027053_2 ".filtering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027053, VkglTestCase_027053_1, VkglTestCase_027053_2);

#define VkglTestCase_027054_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027054_2 "filtering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027054, VkglTestCase_027054_1, VkglTestCase_027054_2);

#define VkglTestCase_027055_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027055_2 "filtering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027055, VkglTestCase_027055_1, VkglTestCase_027055_2);

#define VkglTestCase_027056_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027056_2 ".filtering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027056, VkglTestCase_027056_1, VkglTestCase_027056_2);

#define VkglTestCase_027057_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027057_2 "filtering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027057, VkglTestCase_027057_1, VkglTestCase_027057_2);

#define VkglTestCase_027058_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027058_2 "filtering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027058, VkglTestCase_027058_1, VkglTestCase_027058_2);

#define VkglTestCase_027059_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027059_2 ".filtering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027059, VkglTestCase_027059_1, VkglTestCase_027059_2);

#define VkglTestCase_027060_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027060_2 ".filtering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027060, VkglTestCase_027060_1, VkglTestCase_027060_2);

#define VkglTestCase_027061_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027061_2 ".filtering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027061, VkglTestCase_027061_1, VkglTestCase_027061_2);

#define VkglTestCase_027062_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027062_2 ".filtering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027062, VkglTestCase_027062_1, VkglTestCase_027062_2);

#define VkglTestCase_027063_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027063_2 "filtering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027063, VkglTestCase_027063_1, VkglTestCase_027063_2);

#define VkglTestCase_027064_1 "dEQP-GLES3.functional.texture.vertex.2d_array."
#define VkglTestCase_027064_2 "filtering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027064, VkglTestCase_027064_1, VkglTestCase_027064_2);

#define VkglTestCase_027065_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027065_2 ".filtering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027065, VkglTestCase_027065_1, VkglTestCase_027065_2);

#define VkglTestCase_027066_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027066_2 ".filtering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027066, VkglTestCase_027066_1, VkglTestCase_027066_2);

#define VkglTestCase_027067_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027067_2 ".filtering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027067, VkglTestCase_027067_1, VkglTestCase_027067_2);

#define VkglTestCase_027068_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027068_2 ".filtering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027068, VkglTestCase_027068_1, VkglTestCase_027068_2);

#define VkglTestCase_027069_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027069_2 ".filtering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027069, VkglTestCase_027069_1, VkglTestCase_027069_2);

#define VkglTestCase_027070_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027070_2 ".filtering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027070, VkglTestCase_027070_1, VkglTestCase_027070_2);

#define VkglTestCase_027071_1 "dEQP-GLES3.functional.texture.vertex.2d_arra"
#define VkglTestCase_027071_2 "y.filtering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027071, VkglTestCase_027071_1, VkglTestCase_027071_2);

#define VkglTestCase_027072_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027072_2 ".filtering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027072, VkglTestCase_027072_1, VkglTestCase_027072_2);

#define VkglTestCase_027073_1 "dEQP-GLES3.functional.texture.vertex.2d_array"
#define VkglTestCase_027073_2 ".filtering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027073, VkglTestCase_027073_1, VkglTestCase_027073_2);
