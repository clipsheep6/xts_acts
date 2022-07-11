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
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024001_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024001_2 "d.combinations.nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024001, VkglTestCase_024001_1, VkglTestCase_024001_2);

#define VkglTestCase_024002_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024002_2 ".combinations.nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024002, VkglTestCase_024002_1, VkglTestCase_024002_2);

#define VkglTestCase_024003_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024003_2 ".combinations.nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024003, VkglTestCase_024003_1, VkglTestCase_024003_2);

#define VkglTestCase_024004_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024004_2 ".combinations.nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024004, VkglTestCase_024004_1, VkglTestCase_024004_2);

#define VkglTestCase_024005_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024005_2 ".combinations.nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024005, VkglTestCase_024005_1, VkglTestCase_024005_2);

#define VkglTestCase_024006_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024006_2 ".combinations.nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024006, VkglTestCase_024006_1, VkglTestCase_024006_2);

#define VkglTestCase_024007_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024007_2 ".combinations.nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024007, VkglTestCase_024007_1, VkglTestCase_024007_2);

#define VkglTestCase_024008_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024008_2 ".combinations.nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024008, VkglTestCase_024008_1, VkglTestCase_024008_2);

#define VkglTestCase_024009_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024009_2 ".combinations.nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024009, VkglTestCase_024009_1, VkglTestCase_024009_2);

#define VkglTestCase_024010_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024010_2 "d.combinations.nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024010, VkglTestCase_024010_1, VkglTestCase_024010_2);

#define VkglTestCase_024011_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024011_2 "d.combinations.nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024011, VkglTestCase_024011_1, VkglTestCase_024011_2);

#define VkglTestCase_024012_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024012_2 "d.combinations.nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024012, VkglTestCase_024012_1, VkglTestCase_024012_2);

#define VkglTestCase_024013_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024013_2 "d.combinations.nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024013, VkglTestCase_024013_1, VkglTestCase_024013_2);

#define VkglTestCase_024014_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024014_2 ".combinations.nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024014, VkglTestCase_024014_1, VkglTestCase_024014_2);

#define VkglTestCase_024015_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024015_2 ".combinations.nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024015, VkglTestCase_024015_1, VkglTestCase_024015_2);

#define VkglTestCase_024016_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024016_2 "d.combinations.nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024016, VkglTestCase_024016_1, VkglTestCase_024016_2);

#define VkglTestCase_024017_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024017_2 ".combinations.nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024017, VkglTestCase_024017_1, VkglTestCase_024017_2);

#define VkglTestCase_024018_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024018_2 ".combinations.nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024018, VkglTestCase_024018_1, VkglTestCase_024018_2);

#define VkglTestCase_024019_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024019_2 "d.combinations.linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024019, VkglTestCase_024019_1, VkglTestCase_024019_2);

#define VkglTestCase_024020_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024020_2 "d.combinations.linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024020, VkglTestCase_024020_1, VkglTestCase_024020_2);

#define VkglTestCase_024021_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024021_2 "d.combinations.linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024021, VkglTestCase_024021_1, VkglTestCase_024021_2);

#define VkglTestCase_024022_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024022_2 "d.combinations.linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024022, VkglTestCase_024022_1, VkglTestCase_024022_2);

#define VkglTestCase_024023_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024023_2 ".combinations.linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024023, VkglTestCase_024023_1, VkglTestCase_024023_2);

#define VkglTestCase_024024_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024024_2 ".combinations.linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024024, VkglTestCase_024024_1, VkglTestCase_024024_2);

#define VkglTestCase_024025_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024025_2 "d.combinations.linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024025, VkglTestCase_024025_1, VkglTestCase_024025_2);

#define VkglTestCase_024026_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024026_2 ".combinations.linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024026, VkglTestCase_024026_1, VkglTestCase_024026_2);

#define VkglTestCase_024027_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024027_2 ".combinations.linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024027, VkglTestCase_024027_1, VkglTestCase_024027_2);

#define VkglTestCase_024028_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024028_2 "2d.combinations.linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024028, VkglTestCase_024028_1, VkglTestCase_024028_2);

#define VkglTestCase_024029_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024029_2 "d.combinations.linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024029, VkglTestCase_024029_1, VkglTestCase_024029_2);

#define VkglTestCase_024030_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024030_2 "d.combinations.linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024030, VkglTestCase_024030_1, VkglTestCase_024030_2);

#define VkglTestCase_024031_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024031_2 "d.combinations.linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024031, VkglTestCase_024031_1, VkglTestCase_024031_2);

#define VkglTestCase_024032_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024032_2 "d.combinations.linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024032, VkglTestCase_024032_1, VkglTestCase_024032_2);

#define VkglTestCase_024033_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024033_2 "d.combinations.linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024033, VkglTestCase_024033_1, VkglTestCase_024033_2);

#define VkglTestCase_024034_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024034_2 "d.combinations.linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024034, VkglTestCase_024034_1, VkglTestCase_024034_2);

#define VkglTestCase_024035_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024035_2 "d.combinations.linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024035, VkglTestCase_024035_1, VkglTestCase_024035_2);

#define VkglTestCase_024036_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024036_2 "d.combinations.linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024036, VkglTestCase_024036_1, VkglTestCase_024036_2);

#define VkglTestCase_024037_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024037_2 "ations.nearest_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024037, VkglTestCase_024037_1, VkglTestCase_024037_2);

#define VkglTestCase_024038_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024038_2 "ations.nearest_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024038, VkglTestCase_024038_1, VkglTestCase_024038_2);

#define VkglTestCase_024039_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024039_2 "ations.nearest_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024039, VkglTestCase_024039_1, VkglTestCase_024039_2);

#define VkglTestCase_024040_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024040_2 "ations.nearest_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024040, VkglTestCase_024040_1, VkglTestCase_024040_2);

#define VkglTestCase_024041_1 "dEQP-GLES3.functional.texture.filtering.2d.combina"
#define VkglTestCase_024041_2 "tions.nearest_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024041, VkglTestCase_024041_1, VkglTestCase_024041_2);

#define VkglTestCase_024042_1 "dEQP-GLES3.functional.texture.filtering.2d.combina"
#define VkglTestCase_024042_2 "tions.nearest_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024042, VkglTestCase_024042_1, VkglTestCase_024042_2);

#define VkglTestCase_024043_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024043_2 "ations.nearest_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024043, VkglTestCase_024043_1, VkglTestCase_024043_2);

#define VkglTestCase_024044_1 "dEQP-GLES3.functional.texture.filtering.2d.combina"
#define VkglTestCase_024044_2 "tions.nearest_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024044, VkglTestCase_024044_1, VkglTestCase_024044_2);

#define VkglTestCase_024045_1 "dEQP-GLES3.functional.texture.filtering.2d.combina"
#define VkglTestCase_024045_2 "tions.nearest_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024045, VkglTestCase_024045_1, VkglTestCase_024045_2);

#define VkglTestCase_024046_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024046_2 "nations.nearest_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024046, VkglTestCase_024046_1, VkglTestCase_024046_2);

#define VkglTestCase_024047_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024047_2 "ations.nearest_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024047, VkglTestCase_024047_1, VkglTestCase_024047_2);

#define VkglTestCase_024048_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024048_2 "ations.nearest_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024048, VkglTestCase_024048_1, VkglTestCase_024048_2);

#define VkglTestCase_024049_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024049_2 "ations.nearest_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024049, VkglTestCase_024049_1, VkglTestCase_024049_2);

#define VkglTestCase_024050_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024050_2 "ations.nearest_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024050, VkglTestCase_024050_1, VkglTestCase_024050_2);

#define VkglTestCase_024051_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024051_2 "ations.nearest_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024051, VkglTestCase_024051_1, VkglTestCase_024051_2);

#define VkglTestCase_024052_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024052_2 "ations.nearest_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024052, VkglTestCase_024052_1, VkglTestCase_024052_2);

#define VkglTestCase_024053_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024053_2 "ations.nearest_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024053, VkglTestCase_024053_1, VkglTestCase_024053_2);

#define VkglTestCase_024054_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024054_2 "ations.nearest_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024054, VkglTestCase_024054_1, VkglTestCase_024054_2);

#define VkglTestCase_024055_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024055_2 "nations.linear_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024055, VkglTestCase_024055_1, VkglTestCase_024055_2);

#define VkglTestCase_024056_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024056_2 "ations.linear_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024056, VkglTestCase_024056_1, VkglTestCase_024056_2);

#define VkglTestCase_024057_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024057_2 "ations.linear_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024057, VkglTestCase_024057_1, VkglTestCase_024057_2);

#define VkglTestCase_024058_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024058_2 "ations.linear_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024058, VkglTestCase_024058_1, VkglTestCase_024058_2);

#define VkglTestCase_024059_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024059_2 "ations.linear_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024059, VkglTestCase_024059_1, VkglTestCase_024059_2);

#define VkglTestCase_024060_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024060_2 "ations.linear_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024060, VkglTestCase_024060_1, VkglTestCase_024060_2);

#define VkglTestCase_024061_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024061_2 "ations.linear_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024061, VkglTestCase_024061_1, VkglTestCase_024061_2);

#define VkglTestCase_024062_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024062_2 "ations.linear_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024062, VkglTestCase_024062_1, VkglTestCase_024062_2);

#define VkglTestCase_024063_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024063_2 "ations.linear_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024063, VkglTestCase_024063_1, VkglTestCase_024063_2);

#define VkglTestCase_024064_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024064_2 "nations.linear_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024064, VkglTestCase_024064_1, VkglTestCase_024064_2);

#define VkglTestCase_024065_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024065_2 "nations.linear_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024065, VkglTestCase_024065_1, VkglTestCase_024065_2);

#define VkglTestCase_024066_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024066_2 "nations.linear_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024066, VkglTestCase_024066_1, VkglTestCase_024066_2);

#define VkglTestCase_024067_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024067_2 "nations.linear_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024067, VkglTestCase_024067_1, VkglTestCase_024067_2);

#define VkglTestCase_024068_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024068_2 "ations.linear_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024068, VkglTestCase_024068_1, VkglTestCase_024068_2);

#define VkglTestCase_024069_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024069_2 "ations.linear_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024069, VkglTestCase_024069_1, VkglTestCase_024069_2);

#define VkglTestCase_024070_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024070_2 "nations.linear_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024070, VkglTestCase_024070_1, VkglTestCase_024070_2);

#define VkglTestCase_024071_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024071_2 "ations.linear_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024071, VkglTestCase_024071_1, VkglTestCase_024071_2);

#define VkglTestCase_024072_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024072_2 "ations.linear_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024072, VkglTestCase_024072_1, VkglTestCase_024072_2);

#define VkglTestCase_024073_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024073_2 "nations.nearest_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024073, VkglTestCase_024073_1, VkglTestCase_024073_2);

#define VkglTestCase_024074_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024074_2 "ations.nearest_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024074, VkglTestCase_024074_1, VkglTestCase_024074_2);

#define VkglTestCase_024075_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024075_2 "ations.nearest_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024075, VkglTestCase_024075_1, VkglTestCase_024075_2);

#define VkglTestCase_024076_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024076_2 "ations.nearest_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024076, VkglTestCase_024076_1, VkglTestCase_024076_2);

#define VkglTestCase_024077_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024077_2 "ations.nearest_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024077, VkglTestCase_024077_1, VkglTestCase_024077_2);

#define VkglTestCase_024078_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024078_2 "ations.nearest_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024078, VkglTestCase_024078_1, VkglTestCase_024078_2);

#define VkglTestCase_024079_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024079_2 "ations.nearest_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024079, VkglTestCase_024079_1, VkglTestCase_024079_2);

#define VkglTestCase_024080_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024080_2 "ations.nearest_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024080, VkglTestCase_024080_1, VkglTestCase_024080_2);

#define VkglTestCase_024081_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024081_2 "ations.nearest_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024081, VkglTestCase_024081_1, VkglTestCase_024081_2);

#define VkglTestCase_024082_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024082_2 "nations.nearest_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024082, VkglTestCase_024082_1, VkglTestCase_024082_2);

#define VkglTestCase_024083_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024083_2 "nations.nearest_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024083, VkglTestCase_024083_1, VkglTestCase_024083_2);

#define VkglTestCase_024084_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024084_2 "nations.nearest_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024084, VkglTestCase_024084_1, VkglTestCase_024084_2);

#define VkglTestCase_024085_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024085_2 "nations.nearest_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024085, VkglTestCase_024085_1, VkglTestCase_024085_2);

#define VkglTestCase_024086_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024086_2 "ations.nearest_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024086, VkglTestCase_024086_1, VkglTestCase_024086_2);

#define VkglTestCase_024087_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024087_2 "ations.nearest_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024087, VkglTestCase_024087_1, VkglTestCase_024087_2);

#define VkglTestCase_024088_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024088_2 "nations.nearest_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024088, VkglTestCase_024088_1, VkglTestCase_024088_2);

#define VkglTestCase_024089_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024089_2 "ations.nearest_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024089, VkglTestCase_024089_1, VkglTestCase_024089_2);

#define VkglTestCase_024090_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024090_2 "ations.nearest_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024090, VkglTestCase_024090_1, VkglTestCase_024090_2);

#define VkglTestCase_024091_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024091_2 "nations.linear_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024091, VkglTestCase_024091_1, VkglTestCase_024091_2);

#define VkglTestCase_024092_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024092_2 "nations.linear_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024092, VkglTestCase_024092_1, VkglTestCase_024092_2);

#define VkglTestCase_024093_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024093_2 "nations.linear_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024093, VkglTestCase_024093_1, VkglTestCase_024093_2);

#define VkglTestCase_024094_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024094_2 "nations.linear_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024094, VkglTestCase_024094_1, VkglTestCase_024094_2);

#define VkglTestCase_024095_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024095_2 "ations.linear_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024095, VkglTestCase_024095_1, VkglTestCase_024095_2);

#define VkglTestCase_024096_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024096_2 "ations.linear_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024096, VkglTestCase_024096_1, VkglTestCase_024096_2);

#define VkglTestCase_024097_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024097_2 "nations.linear_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024097, VkglTestCase_024097_1, VkglTestCase_024097_2);

#define VkglTestCase_024098_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024098_2 "ations.linear_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024098, VkglTestCase_024098_1, VkglTestCase_024098_2);

#define VkglTestCase_024099_1 "dEQP-GLES3.functional.texture.filtering.2d.combin"
#define VkglTestCase_024099_2 "ations.linear_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024099, VkglTestCase_024099_1, VkglTestCase_024099_2);

#define VkglTestCase_024100_1 "dEQP-GLES3.functional.texture.filtering.2d.comb"
#define VkglTestCase_024100_2 "inations.linear_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024100, VkglTestCase_024100_1, VkglTestCase_024100_2);

#define VkglTestCase_024101_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024101_2 "nations.linear_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024101, VkglTestCase_024101_1, VkglTestCase_024101_2);

#define VkglTestCase_024102_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024102_2 "nations.linear_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024102, VkglTestCase_024102_1, VkglTestCase_024102_2);

#define VkglTestCase_024103_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024103_2 "nations.linear_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024103, VkglTestCase_024103_1, VkglTestCase_024103_2);

#define VkglTestCase_024104_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024104_2 "nations.linear_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024104, VkglTestCase_024104_1, VkglTestCase_024104_2);

#define VkglTestCase_024105_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024105_2 "nations.linear_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024105, VkglTestCase_024105_1, VkglTestCase_024105_2);

#define VkglTestCase_024106_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024106_2 "nations.linear_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024106, VkglTestCase_024106_1, VkglTestCase_024106_2);

#define VkglTestCase_024107_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024107_2 "nations.linear_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024107, VkglTestCase_024107_1, VkglTestCase_024107_2);

#define VkglTestCase_024108_1 "dEQP-GLES3.functional.texture.filtering.2d.combi"
#define VkglTestCase_024108_2 "nations.linear_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024108, VkglTestCase_024108_1, VkglTestCase_024108_2);
