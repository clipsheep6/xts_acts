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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000051_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000051_2 "tions.nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000052_2 "ions.nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);

#define VkglTestCase_000053_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000053_2 "ions.nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000054_2 "ions.nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000055_2 "ions.nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000056_2 "ions.nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000057_2 "ions.nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000058_2 "ions.nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000059_2 "ions.nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);

#define VkglTestCase_000060_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000060_2 "ions.nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000061_2 "ions.nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000062_2 "ions.nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000063_2 "ions.nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000064_2 "ons.nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000065_2 "ons.nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000066_2 "ions.nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000067_2 "ons.nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000068_2 "ons.nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000069_2 "ions.nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000070_2 "ions.nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000071_2 "ions.nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);

#define VkglTestCase_000072_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000072_2 "ions.nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000073_2 "ons.nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000074_2 "ons.nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000075_2 "ions.nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000076_2 "ons.nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "KHR-GLES2.texture_3d.filtering.combinati"
#define VkglTestCase_000077_2 "ons.nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000078_2 "tions.nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000079_2 "tions.nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000080_2 "tions.nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000081_2 "tions.nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000082_2 "ions.nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000083_2 "ions.nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000084_2 "tions.nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000085_2 "ions.nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000086_2 "ions.nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000087_2 "tions.nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000088_2 "ions.nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);

#define VkglTestCase_000089_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000089_2 "ions.nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);

#define VkglTestCase_000090_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000090_2 "ions.nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000091_2 "ions.nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000092_2 "ions.nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000093_2 "ions.nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000094_2 "ions.nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000095_2 "ions.nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000096_2 "tions.nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000097_2 "ions.nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000098_2 "ions.nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000099_2 "ions.nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000100_2 "ions.nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000101_2 "ions.nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000102_2 "ions.nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);

#define VkglTestCase_000103_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000103_2 "ions.nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000103, VkglTestCase_000103_1, VkglTestCase_000103_2);

#define VkglTestCase_000104_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000104_2 "ions.nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000105_2 "tions.linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000106_2 "tions.linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000107_2 "tions.linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);

#define VkglTestCase_000108_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000108_2 "tions.linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);

#define VkglTestCase_000109_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000109_2 "ions.linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000110_2 "ions.linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000111_2 "tions.linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);

#define VkglTestCase_000112_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000112_2 "ions.linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);

#define VkglTestCase_000113_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000113_2 "ions.linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000114_2 "tions.linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000115_2 "ions.linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000116_2 "ions.linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000117_2 "ions.linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000118_2 "ions.linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000119_2 "ions.linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000120_2 "ions.linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000121_2 "ions.linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000122_2 "ions.linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000123_2 "tions.linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000124_2 "ions.linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000125_2 "ions.linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000126_2 "ions.linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000127_2 "ions.linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000128_2 "ions.linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000129_2 "ions.linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000130_2 "ions.linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000131_2 "ions.linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "KHR-GLES2.texture_3d.filtering.combin"
#define VkglTestCase_000132_2 "ations.linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000133_2 "tions.linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000134_2 "tions.linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000135_2 "tions.linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000136_2 "tions.linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000137_2 "tions.linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000138_2 "tions.linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000139_2 "tions.linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000140_2 "tions.linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000141_2 "tions.linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000142_2 "tions.linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000143_2 "tions.linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000144_2 "tions.linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000145_2 "ions.linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000146_2 "ions.linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000147_2 "tions.linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000148_2 "ions.linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000149_2 "ions.linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000150_2 "tions.linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000151_2 "tions.linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000152_2 "tions.linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000153_2 "tions.linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000154_2 "ions.linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000155_2 "ions.linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "KHR-GLES2.texture_3d.filtering.combina"
#define VkglTestCase_000156_2 "tions.linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000157_2 "ions.linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "KHR-GLES2.texture_3d.filtering.combinat"
#define VkglTestCase_000158_2 "ions.linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);

#define VkglTestCase_000159_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000159_2 "arest_mipmap_nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000160_2 "arest_mipmap_nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000161_2 "arest_mipmap_nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000162_2 "arest_mipmap_nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000163_2 "rest_mipmap_nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000164_2 "rest_mipmap_nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);

#define VkglTestCase_000165_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000165_2 "arest_mipmap_nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000166_2 "rest_mipmap_nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000167_2 "rest_mipmap_nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000168_2 "arest_mipmap_nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000169_2 "rest_mipmap_nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);

#define VkglTestCase_000170_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000170_2 "rest_mipmap_nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000171_2 "rest_mipmap_nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000172_2 "rest_mipmap_nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000173_2 "rest_mipmap_nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000174_2 "rest_mipmap_nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000175_2 "rest_mipmap_nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000176_2 "rest_mipmap_nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000177_2 "arest_mipmap_nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000178_2 "rest_mipmap_nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000179_2 "rest_mipmap_nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000180_2 "rest_mipmap_nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000181_2 "rest_mipmap_nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000182_2 "rest_mipmap_nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000183_2 "rest_mipmap_nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000184_2 "rest_mipmap_nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000185_2 "rest_mipmap_nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);

#define VkglTestCase_000186_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000186_2 "earest_mipmap_nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000186, VkglTestCase_000186_1, VkglTestCase_000186_2);

#define VkglTestCase_000187_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000187_2 "arest_mipmap_nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000188_2 "arest_mipmap_nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000189_2 "arest_mipmap_nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000190_2 "arest_mipmap_nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000191_2 "arest_mipmap_nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000192_2 "arest_mipmap_nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000193_2 "arest_mipmap_nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000194_2 "arest_mipmap_nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);

#define VkglTestCase_000195_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000195_2 "arest_mipmap_nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000196_2 "arest_mipmap_nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000197_2 "arest_mipmap_nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000198_2 "arest_mipmap_nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000199_2 "rest_mipmap_nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000200_2 "rest_mipmap_nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000201_2 "arest_mipmap_nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000202_2 "rest_mipmap_nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000203_2 "rest_mipmap_nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000204_2 "arest_mipmap_nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);

#define VkglTestCase_000205_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000205_2 "arest_mipmap_nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000206_2 "arest_mipmap_nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);

#define VkglTestCase_000207_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000207_2 "arest_mipmap_nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000208_2 "rest_mipmap_nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);

#define VkglTestCase_000209_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000209_2 "rest_mipmap_nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);

#define VkglTestCase_000210_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000210_2 "arest_mipmap_nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000210, VkglTestCase_000210_1, VkglTestCase_000210_2);

#define VkglTestCase_000211_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000211_2 "rest_mipmap_nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000211, VkglTestCase_000211_1, VkglTestCase_000211_2);

#define VkglTestCase_000212_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000212_2 "rest_mipmap_nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000213_2 "inear_mipmap_nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000214_2 "near_mipmap_nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);

#define VkglTestCase_000215_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000215_2 "near_mipmap_nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000216_2 "near_mipmap_nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000217_2 "near_mipmap_nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000218_2 "near_mipmap_nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000219_2 "near_mipmap_nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000220_2 "near_mipmap_nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000221_2 "near_mipmap_nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000222_2 "near_mipmap_nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000223_2 "near_mipmap_nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000224_2 "near_mipmap_nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000225_2 "near_mipmap_nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000226_2 "ear_mipmap_nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000227_2 "ear_mipmap_nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000228_2 "near_mipmap_nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000229_2 "ear_mipmap_nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000230_2 "ear_mipmap_nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000231_2 "near_mipmap_nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000232_2 "near_mipmap_nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000233_2 "near_mipmap_nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000234_2 "near_mipmap_nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000235_2 "ear_mipmap_nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000236_2 "ear_mipmap_nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);

#define VkglTestCase_000237_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000237_2 "near_mipmap_nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000238_2 "ear_mipmap_nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "KHR-GLES2.texture_3d.filtering.combinations.lin"
#define VkglTestCase_000239_2 "ear_mipmap_nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000240_2 "inear_mipmap_nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000241_2 "inear_mipmap_nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);

#define VkglTestCase_000242_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000242_2 "inear_mipmap_nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000243_2 "inear_mipmap_nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);

#define VkglTestCase_000244_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000244_2 "near_mipmap_nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000245_2 "near_mipmap_nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000246_2 "inear_mipmap_nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000247_2 "near_mipmap_nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000248_2 "near_mipmap_nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000249_2 "inear_mipmap_nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000250_2 "near_mipmap_nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000251_2 "near_mipmap_nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000252_2 "near_mipmap_nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000253_2 "near_mipmap_nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000254_2 "near_mipmap_nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000255_2 "near_mipmap_nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000256_2 "near_mipmap_nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000257_2 "near_mipmap_nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000258_2 "inear_mipmap_nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000259_2 "near_mipmap_nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000260_2 "near_mipmap_nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000261_2 "near_mipmap_nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000262_2 "near_mipmap_nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000263_2 "near_mipmap_nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000264_2 "near_mipmap_nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000265_2 "near_mipmap_nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000266_2 "near_mipmap_nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000267_2 "earest_mipmap_linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000268_2 "arest_mipmap_linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000269_2 "arest_mipmap_linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000270_2 "arest_mipmap_linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000271_2 "arest_mipmap_linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000272_2 "arest_mipmap_linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000273_2 "arest_mipmap_linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000274_2 "arest_mipmap_linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000275_2 "arest_mipmap_linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000276_2 "arest_mipmap_linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000277_2 "arest_mipmap_linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000278_2 "arest_mipmap_linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000279_2 "arest_mipmap_linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000280_2 "rest_mipmap_linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000281_2 "rest_mipmap_linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000282_2 "arest_mipmap_linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000283_2 "rest_mipmap_linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000284_2 "rest_mipmap_linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000285_2 "arest_mipmap_linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000286_2 "arest_mipmap_linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000287_2 "arest_mipmap_linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000288_2 "arest_mipmap_linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000289_2 "rest_mipmap_linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000290_2 "rest_mipmap_linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000291_2 "arest_mipmap_linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000292_2 "rest_mipmap_linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "KHR-GLES2.texture_3d.filtering.combinations.nea"
#define VkglTestCase_000293_2 "rest_mipmap_linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000294_2 "earest_mipmap_linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000295_2 "earest_mipmap_linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000296_2 "earest_mipmap_linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000297_2 "earest_mipmap_linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000298_2 "arest_mipmap_linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000299_2 "arest_mipmap_linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000300_2 "earest_mipmap_linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);

#define VkglTestCase_000301_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000301_2 "arest_mipmap_linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000302_2 "arest_mipmap_linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000303_2 "earest_mipmap_linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000304_2 "arest_mipmap_linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000305_2 "arest_mipmap_linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000306_2 "arest_mipmap_linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000307_2 "arest_mipmap_linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000308_2 "arest_mipmap_linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000309_2 "arest_mipmap_linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000310_2 "arest_mipmap_linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000311_2 "arest_mipmap_linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "KHR-GLES2.texture_3d.filtering.combinations.n"
#define VkglTestCase_000312_2 "earest_mipmap_linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000313_2 "arest_mipmap_linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000314_2 "arest_mipmap_linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000315_2 "arest_mipmap_linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000316_2 "arest_mipmap_linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000317_2 "arest_mipmap_linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000318_2 "arest_mipmap_linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);

#define VkglTestCase_000319_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000319_2 "arest_mipmap_linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "KHR-GLES2.texture_3d.filtering.combinations.ne"
#define VkglTestCase_000320_2 "arest_mipmap_linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000321_2 "inear_mipmap_linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000322_2 "inear_mipmap_linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000323_2 "inear_mipmap_linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000324_2 "inear_mipmap_linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);

#define VkglTestCase_000325_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000325_2 "near_mipmap_linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000326_2 "near_mipmap_linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000327_2 "inear_mipmap_linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000328_2 "near_mipmap_linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000329_2 "near_mipmap_linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000330_2 "inear_mipmap_linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000331_2 "near_mipmap_linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000332_2 "near_mipmap_linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000333_2 "near_mipmap_linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000334_2 "near_mipmap_linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000335_2 "near_mipmap_linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000336_2 "near_mipmap_linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000337_2 "near_mipmap_linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000338_2 "near_mipmap_linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000339_2 "inear_mipmap_linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000340_2 "near_mipmap_linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000341_2 "near_mipmap_linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000342_2 "near_mipmap_linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000343_2 "near_mipmap_linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000344_2 "near_mipmap_linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000345_2 "near_mipmap_linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000346_2 "near_mipmap_linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000347_2 "near_mipmap_linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "KHR-GLES2.texture_3d.filtering.combinations."
#define VkglTestCase_000348_2 "linear_mipmap_linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000349_2 "inear_mipmap_linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000350_2 "inear_mipmap_linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000351_2 "inear_mipmap_linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000352_2 "inear_mipmap_linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000353_2 "inear_mipmap_linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000354_2 "inear_mipmap_linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000355_2 "inear_mipmap_linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);

#define VkglTestCase_000356_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000356_2 "inear_mipmap_linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000357_2 "inear_mipmap_linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000358_2 "inear_mipmap_linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000359_2 "inear_mipmap_linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000360_2 "inear_mipmap_linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000361_2 "near_mipmap_linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000362_2 "near_mipmap_linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000363_2 "inear_mipmap_linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000364_2 "near_mipmap_linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000365_2 "near_mipmap_linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000366_2 "inear_mipmap_linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000367_2 "inear_mipmap_linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000368_2 "inear_mipmap_linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);

#define VkglTestCase_000369_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000369_2 "inear_mipmap_linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000370_2 "near_mipmap_linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000371_2 "near_mipmap_linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "KHR-GLES2.texture_3d.filtering.combinations.l"
#define VkglTestCase_000372_2 "inear_mipmap_linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000373_2 "near_mipmap_linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "KHR-GLES2.texture_3d.filtering.combinations.li"
#define VkglTestCase_000374_2 "near_mipmap_linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000375_2 "ring.combinations.negative"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);
