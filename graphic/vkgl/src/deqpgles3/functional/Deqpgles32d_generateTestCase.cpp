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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025027_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025027_2 ".mipmap.2d.generate.a8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025027, VkglTestCase_025027_1, VkglTestCase_025027_2);

#define VkglTestCase_025028_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025028_2 ".mipmap.2d.generate.a8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025028, VkglTestCase_025028_1, VkglTestCase_025028_2);

#define VkglTestCase_025029_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025029_2 "pmap.2d.generate.a8_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025029, VkglTestCase_025029_1, VkglTestCase_025029_2);

#define VkglTestCase_025030_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025030_2 "ipmap.2d.generate.a8_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025030, VkglTestCase_025030_1, VkglTestCase_025030_2);

#define VkglTestCase_025031_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025031_2 "p.2d.generate.a8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025031, VkglTestCase_025031_1, VkglTestCase_025031_2);

#define VkglTestCase_025032_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025032_2 "ap.2d.generate.a8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025032, VkglTestCase_025032_1, VkglTestCase_025032_2);

#define VkglTestCase_025033_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025033_2 ".mipmap.2d.generate.l8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025033, VkglTestCase_025033_1, VkglTestCase_025033_2);

#define VkglTestCase_025034_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025034_2 ".mipmap.2d.generate.l8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025034, VkglTestCase_025034_1, VkglTestCase_025034_2);

#define VkglTestCase_025035_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025035_2 "pmap.2d.generate.l8_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025035, VkglTestCase_025035_1, VkglTestCase_025035_2);

#define VkglTestCase_025036_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025036_2 "ipmap.2d.generate.l8_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025036, VkglTestCase_025036_1, VkglTestCase_025036_2);

#define VkglTestCase_025037_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025037_2 "p.2d.generate.l8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025037, VkglTestCase_025037_1, VkglTestCase_025037_2);

#define VkglTestCase_025038_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025038_2 "ap.2d.generate.l8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025038, VkglTestCase_025038_1, VkglTestCase_025038_2);

#define VkglTestCase_025039_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025039_2 "mipmap.2d.generate.la88_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025039, VkglTestCase_025039_1, VkglTestCase_025039_2);

#define VkglTestCase_025040_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025040_2 "mipmap.2d.generate.la88_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025040, VkglTestCase_025040_1, VkglTestCase_025040_2);

#define VkglTestCase_025041_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025041_2 "map.2d.generate.la88_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025041, VkglTestCase_025041_1, VkglTestCase_025041_2);

#define VkglTestCase_025042_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025042_2 "pmap.2d.generate.la88_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025042, VkglTestCase_025042_1, VkglTestCase_025042_2);

#define VkglTestCase_025043_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025043_2 ".2d.generate.la88_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025043, VkglTestCase_025043_1, VkglTestCase_025043_2);

#define VkglTestCase_025044_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025044_2 "p.2d.generate.la88_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025044, VkglTestCase_025044_1, VkglTestCase_025044_2);

#define VkglTestCase_025045_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025045_2 "ipmap.2d.generate.rgb565_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025045, VkglTestCase_025045_1, VkglTestCase_025045_2);

#define VkglTestCase_025046_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025046_2 "ipmap.2d.generate.rgb565_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025046, VkglTestCase_025046_1, VkglTestCase_025046_2);

#define VkglTestCase_025047_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025047_2 "ap.2d.generate.rgb565_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025047, VkglTestCase_025047_1, VkglTestCase_025047_2);

#define VkglTestCase_025048_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025048_2 "map.2d.generate.rgb565_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025048, VkglTestCase_025048_1, VkglTestCase_025048_2);

#define VkglTestCase_025049_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025049_2 "2d.generate.rgb565_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025049, VkglTestCase_025049_1, VkglTestCase_025049_2);

#define VkglTestCase_025050_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025050_2 ".2d.generate.rgb565_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025050, VkglTestCase_025050_1, VkglTestCase_025050_2);

#define VkglTestCase_025051_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025051_2 "ipmap.2d.generate.rgb888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025051, VkglTestCase_025051_1, VkglTestCase_025051_2);

#define VkglTestCase_025052_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025052_2 "ipmap.2d.generate.rgb888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025052, VkglTestCase_025052_1, VkglTestCase_025052_2);

#define VkglTestCase_025053_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025053_2 "ap.2d.generate.rgb888_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025053, VkglTestCase_025053_1, VkglTestCase_025053_2);

#define VkglTestCase_025054_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025054_2 "map.2d.generate.rgb888_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025054, VkglTestCase_025054_1, VkglTestCase_025054_2);

#define VkglTestCase_025055_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025055_2 "2d.generate.rgb888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025055, VkglTestCase_025055_1, VkglTestCase_025055_2);

#define VkglTestCase_025056_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025056_2 ".2d.generate.rgb888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025056, VkglTestCase_025056_1, VkglTestCase_025056_2);

#define VkglTestCase_025057_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025057_2 "pmap.2d.generate.rgba4444_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025057, VkglTestCase_025057_1, VkglTestCase_025057_2);

#define VkglTestCase_025058_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025058_2 "pmap.2d.generate.rgba4444_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025058, VkglTestCase_025058_1, VkglTestCase_025058_2);

#define VkglTestCase_025059_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025059_2 "p.2d.generate.rgba4444_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025059, VkglTestCase_025059_1, VkglTestCase_025059_2);

#define VkglTestCase_025060_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025060_2 "ap.2d.generate.rgba4444_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025060, VkglTestCase_025060_1, VkglTestCase_025060_2);

#define VkglTestCase_025061_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025061_2 "d.generate.rgba4444_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025061, VkglTestCase_025061_1, VkglTestCase_025061_2);

#define VkglTestCase_025062_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025062_2 "2d.generate.rgba4444_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025062, VkglTestCase_025062_1, VkglTestCase_025062_2);

#define VkglTestCase_025063_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025063_2 "pmap.2d.generate.rgba5551_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025063, VkglTestCase_025063_1, VkglTestCase_025063_2);

#define VkglTestCase_025064_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025064_2 "pmap.2d.generate.rgba5551_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025064, VkglTestCase_025064_1, VkglTestCase_025064_2);

#define VkglTestCase_025065_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025065_2 "p.2d.generate.rgba5551_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025065, VkglTestCase_025065_1, VkglTestCase_025065_2);

#define VkglTestCase_025066_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025066_2 "ap.2d.generate.rgba5551_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025066, VkglTestCase_025066_1, VkglTestCase_025066_2);

#define VkglTestCase_025067_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025067_2 "d.generate.rgba5551_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025067, VkglTestCase_025067_1, VkglTestCase_025067_2);

#define VkglTestCase_025068_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025068_2 "2d.generate.rgba5551_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025068, VkglTestCase_025068_1, VkglTestCase_025068_2);

#define VkglTestCase_025069_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025069_2 "pmap.2d.generate.rgba8888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025069, VkglTestCase_025069_1, VkglTestCase_025069_2);

#define VkglTestCase_025070_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025070_2 "pmap.2d.generate.rgba8888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025070, VkglTestCase_025070_1, VkglTestCase_025070_2);

#define VkglTestCase_025071_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025071_2 "p.2d.generate.rgba8888_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025071, VkglTestCase_025071_1, VkglTestCase_025071_2);

#define VkglTestCase_025072_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025072_2 "ap.2d.generate.rgba8888_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025072, VkglTestCase_025072_1, VkglTestCase_025072_2);

#define VkglTestCase_025073_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025073_2 "d.generate.rgba8888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025073, VkglTestCase_025073_1, VkglTestCase_025073_2);

#define VkglTestCase_025074_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025074_2 "2d.generate.rgba8888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025074, VkglTestCase_025074_1, VkglTestCase_025074_2);
