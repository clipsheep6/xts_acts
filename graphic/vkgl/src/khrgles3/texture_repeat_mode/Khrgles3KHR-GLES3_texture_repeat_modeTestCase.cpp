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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002976_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_002976_2 "de.r8_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002976, VkglTestCase_002976_1, VkglTestCase_002976_2);

#define VkglTestCase_002977_1 "KHR-GLES3.texture_repea"
#define VkglTestCase_002977_2 "t_mode.r8_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002977, VkglTestCase_002977_1, VkglTestCase_002977_2);

#define VkglTestCase_002978_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_002978_2 "e.r8_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002978, VkglTestCase_002978_1, VkglTestCase_002978_2);

#define VkglTestCase_002979_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_002979_2 "de.r8_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002979, VkglTestCase_002979_1, VkglTestCase_002979_2);

#define VkglTestCase_002980_1 "KHR-GLES3.texture_repea"
#define VkglTestCase_002980_2 "t_mode.r8_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002980, VkglTestCase_002980_1, VkglTestCase_002980_2);

#define VkglTestCase_002981_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_002981_2 "e.r8_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002981, VkglTestCase_002981_1, VkglTestCase_002981_2);

#define VkglTestCase_002982_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_002982_2 "de.r8_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002982, VkglTestCase_002982_1, VkglTestCase_002982_2);

#define VkglTestCase_002983_1 "KHR-GLES3.texture_repea"
#define VkglTestCase_002983_2 "t_mode.r8_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002983, VkglTestCase_002983_1, VkglTestCase_002983_2);

#define VkglTestCase_002984_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_002984_2 "e.r8_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002984, VkglTestCase_002984_1, VkglTestCase_002984_2);

#define VkglTestCase_002985_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_002985_2 ".rgb565_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002985, VkglTestCase_002985_1, VkglTestCase_002985_2);

#define VkglTestCase_002986_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_002986_2 "mode.rgb565_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002986, VkglTestCase_002986_1, VkglTestCase_002986_2);

#define VkglTestCase_002987_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_002987_2 "rgb565_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002987, VkglTestCase_002987_1, VkglTestCase_002987_2);

#define VkglTestCase_002988_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_002988_2 ".rgb565_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002988, VkglTestCase_002988_1, VkglTestCase_002988_2);

#define VkglTestCase_002989_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_002989_2 "mode.rgb565_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002989, VkglTestCase_002989_1, VkglTestCase_002989_2);

#define VkglTestCase_002990_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_002990_2 "rgb565_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002990, VkglTestCase_002990_1, VkglTestCase_002990_2);

#define VkglTestCase_002991_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_002991_2 ".rgb565_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002991, VkglTestCase_002991_1, VkglTestCase_002991_2);

#define VkglTestCase_002992_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_002992_2 "mode.rgb565_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002992, VkglTestCase_002992_1, VkglTestCase_002992_2);

#define VkglTestCase_002993_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_002993_2 "rgb565_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002993, VkglTestCase_002993_1, VkglTestCase_002993_2);

#define VkglTestCase_002994_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_002994_2 "e.rgb8_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002994, VkglTestCase_002994_1, VkglTestCase_002994_2);

#define VkglTestCase_002995_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_002995_2 "_mode.rgb8_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002995, VkglTestCase_002995_1, VkglTestCase_002995_2);

#define VkglTestCase_002996_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_002996_2 ".rgb8_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002996, VkglTestCase_002996_1, VkglTestCase_002996_2);

#define VkglTestCase_002997_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_002997_2 "e.rgb8_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002997, VkglTestCase_002997_1, VkglTestCase_002997_2);

#define VkglTestCase_002998_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_002998_2 "_mode.rgb8_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002998, VkglTestCase_002998_1, VkglTestCase_002998_2);

#define VkglTestCase_002999_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_002999_2 ".rgb8_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002999, VkglTestCase_002999_1, VkglTestCase_002999_2);

#define VkglTestCase_003000_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003000_2 "e.rgb8_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003000, VkglTestCase_003000_1, VkglTestCase_003000_2);

#define VkglTestCase_003001_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_003001_2 "_mode.rgb8_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003001, VkglTestCase_003001_1, VkglTestCase_003001_2);

#define VkglTestCase_003002_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003002_2 ".rgb8_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003002, VkglTestCase_003002_1, VkglTestCase_003002_2);

#define VkglTestCase_003003_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003003_2 "rgb10_a2_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003003, VkglTestCase_003003_1, VkglTestCase_003003_2);

#define VkglTestCase_003004_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003004_2 "ode.rgb10_a2_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003004, VkglTestCase_003004_1, VkglTestCase_003004_2);

#define VkglTestCase_003005_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003005_2 "gb10_a2_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003005, VkglTestCase_003005_1, VkglTestCase_003005_2);

#define VkglTestCase_003006_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003006_2 "rgb10_a2_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003006, VkglTestCase_003006_1, VkglTestCase_003006_2);

#define VkglTestCase_003007_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003007_2 "ode.rgb10_a2_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003007, VkglTestCase_003007_1, VkglTestCase_003007_2);

#define VkglTestCase_003008_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003008_2 "gb10_a2_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003008, VkglTestCase_003008_1, VkglTestCase_003008_2);

#define VkglTestCase_003009_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003009_2 "rgb10_a2_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003009, VkglTestCase_003009_1, VkglTestCase_003009_2);

#define VkglTestCase_003010_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003010_2 "ode.rgb10_a2_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003010, VkglTestCase_003010_1, VkglTestCase_003010_2);

#define VkglTestCase_003011_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003011_2 "gb10_a2_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003011, VkglTestCase_003011_1, VkglTestCase_003011_2);

#define VkglTestCase_003012_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003012_2 "e.r32ui_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003012, VkglTestCase_003012_1, VkglTestCase_003012_2);

#define VkglTestCase_003013_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003013_2 "mode.r32ui_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003013, VkglTestCase_003013_1, VkglTestCase_003013_2);

#define VkglTestCase_003014_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003014_2 ".r32ui_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003014, VkglTestCase_003014_1, VkglTestCase_003014_2);

#define VkglTestCase_003015_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003015_2 "e.r32ui_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003015, VkglTestCase_003015_1, VkglTestCase_003015_2);

#define VkglTestCase_003016_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003016_2 "mode.r32ui_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003016, VkglTestCase_003016_1, VkglTestCase_003016_2);

#define VkglTestCase_003017_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003017_2 ".r32ui_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003017, VkglTestCase_003017_1, VkglTestCase_003017_2);

#define VkglTestCase_003018_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003018_2 "e.r32ui_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003018, VkglTestCase_003018_1, VkglTestCase_003018_2);

#define VkglTestCase_003019_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003019_2 "mode.r32ui_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003019, VkglTestCase_003019_1, VkglTestCase_003019_2);

#define VkglTestCase_003020_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003020_2 ".r32ui_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003020, VkglTestCase_003020_1, VkglTestCase_003020_2);

#define VkglTestCase_003021_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003021_2 ".rg32ui_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003021, VkglTestCase_003021_1, VkglTestCase_003021_2);

#define VkglTestCase_003022_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003022_2 "mode.rg32ui_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003022, VkglTestCase_003022_1, VkglTestCase_003022_2);

#define VkglTestCase_003023_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003023_2 "rg32ui_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003023, VkglTestCase_003023_1, VkglTestCase_003023_2);

#define VkglTestCase_003024_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003024_2 ".rg32ui_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003024, VkglTestCase_003024_1, VkglTestCase_003024_2);

#define VkglTestCase_003025_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003025_2 "mode.rg32ui_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003025, VkglTestCase_003025_1, VkglTestCase_003025_2);

#define VkglTestCase_003026_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003026_2 "rg32ui_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003026, VkglTestCase_003026_1, VkglTestCase_003026_2);

#define VkglTestCase_003027_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003027_2 ".rg32ui_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003027, VkglTestCase_003027_1, VkglTestCase_003027_2);

#define VkglTestCase_003028_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003028_2 "mode.rg32ui_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003028, VkglTestCase_003028_1, VkglTestCase_003028_2);

#define VkglTestCase_003029_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003029_2 "rg32ui_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003029, VkglTestCase_003029_1, VkglTestCase_003029_2);

#define VkglTestCase_003030_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003030_2 "rgba32ui_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003030, VkglTestCase_003030_1, VkglTestCase_003030_2);

#define VkglTestCase_003031_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003031_2 "ode.rgba32ui_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003031, VkglTestCase_003031_1, VkglTestCase_003031_2);

#define VkglTestCase_003032_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003032_2 "gba32ui_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003032, VkglTestCase_003032_1, VkglTestCase_003032_2);

#define VkglTestCase_003033_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003033_2 "rgba32ui_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003033, VkglTestCase_003033_1, VkglTestCase_003033_2);

#define VkglTestCase_003034_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003034_2 "ode.rgba32ui_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003034, VkglTestCase_003034_1, VkglTestCase_003034_2);

#define VkglTestCase_003035_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003035_2 "gba32ui_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003035, VkglTestCase_003035_1, VkglTestCase_003035_2);

#define VkglTestCase_003036_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003036_2 "rgba32ui_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003036, VkglTestCase_003036_1, VkglTestCase_003036_2);

#define VkglTestCase_003037_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003037_2 "ode.rgba32ui_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003037, VkglTestCase_003037_1, VkglTestCase_003037_2);

#define VkglTestCase_003038_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003038_2 "gba32ui_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003038, VkglTestCase_003038_1, VkglTestCase_003038_2);

#define VkglTestCase_003039_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003039_2 "h_component16_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003039, VkglTestCase_003039_1, VkglTestCase_003039_2);

#define VkglTestCase_003040_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003040_2 "epth_component16_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003040, VkglTestCase_003040_1, VkglTestCase_003040_2);

#define VkglTestCase_003041_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003041_2 "_component16_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003041, VkglTestCase_003041_1, VkglTestCase_003041_2);

#define VkglTestCase_003042_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003042_2 "h_component16_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003042, VkglTestCase_003042_1, VkglTestCase_003042_2);

#define VkglTestCase_003043_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003043_2 "epth_component16_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003043, VkglTestCase_003043_1, VkglTestCase_003043_2);

#define VkglTestCase_003044_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003044_2 "_component16_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003044, VkglTestCase_003044_1, VkglTestCase_003044_2);

#define VkglTestCase_003045_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003045_2 "h_component16_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003045, VkglTestCase_003045_1, VkglTestCase_003045_2);

#define VkglTestCase_003046_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003046_2 "epth_component16_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003046, VkglTestCase_003046_1, VkglTestCase_003046_2);

#define VkglTestCase_003047_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003047_2 "_component16_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003047, VkglTestCase_003047_1, VkglTestCase_003047_2);

#define VkglTestCase_003048_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003048_2 "h24_stencil8_49x23_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003048, VkglTestCase_003048_1, VkglTestCase_003048_2);

#define VkglTestCase_003049_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003049_2 "depth24_stencil8_49x23_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003049, VkglTestCase_003049_1, VkglTestCase_003049_2);

#define VkglTestCase_003050_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003050_2 "24_stencil8_49x23_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003050, VkglTestCase_003050_1, VkglTestCase_003050_2);

#define VkglTestCase_003051_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003051_2 "h24_stencil8_49x23_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003051, VkglTestCase_003051_1, VkglTestCase_003051_2);

#define VkglTestCase_003052_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003052_2 "depth24_stencil8_49x23_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003052, VkglTestCase_003052_1, VkglTestCase_003052_2);

#define VkglTestCase_003053_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003053_2 "24_stencil8_49x23_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003053, VkglTestCase_003053_1, VkglTestCase_003053_2);

#define VkglTestCase_003054_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003054_2 "h24_stencil8_49x23_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003054, VkglTestCase_003054_1, VkglTestCase_003054_2);

#define VkglTestCase_003055_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003055_2 "depth24_stencil8_49x23_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003055, VkglTestCase_003055_1, VkglTestCase_003055_2);

#define VkglTestCase_003056_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003056_2 "24_stencil8_49x23_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003056, VkglTestCase_003056_1, VkglTestCase_003056_2);

#define VkglTestCase_003057_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003057_2 "de.r8_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003057, VkglTestCase_003057_1, VkglTestCase_003057_2);

#define VkglTestCase_003058_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_003058_2 "_mode.r8_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003058, VkglTestCase_003058_1, VkglTestCase_003058_2);

#define VkglTestCase_003059_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003059_2 "e.r8_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003059, VkglTestCase_003059_1, VkglTestCase_003059_2);

#define VkglTestCase_003060_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003060_2 "de.r8_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003060, VkglTestCase_003060_1, VkglTestCase_003060_2);

#define VkglTestCase_003061_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_003061_2 "_mode.r8_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003061, VkglTestCase_003061_1, VkglTestCase_003061_2);

#define VkglTestCase_003062_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003062_2 "e.r8_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003062, VkglTestCase_003062_1, VkglTestCase_003062_2);

#define VkglTestCase_003063_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003063_2 "de.r8_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003063, VkglTestCase_003063_1, VkglTestCase_003063_2);

#define VkglTestCase_003064_1 "KHR-GLES3.texture_repeat"
#define VkglTestCase_003064_2 "_mode.r8_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003064, VkglTestCase_003064_1, VkglTestCase_003064_2);

#define VkglTestCase_003065_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003065_2 "e.r8_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003065, VkglTestCase_003065_1, VkglTestCase_003065_2);

#define VkglTestCase_003066_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003066_2 ".rgb565_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003066, VkglTestCase_003066_1, VkglTestCase_003066_2);

#define VkglTestCase_003067_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003067_2 "ode.rgb565_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003067, VkglTestCase_003067_1, VkglTestCase_003067_2);

#define VkglTestCase_003068_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003068_2 "rgb565_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003068, VkglTestCase_003068_1, VkglTestCase_003068_2);

#define VkglTestCase_003069_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003069_2 ".rgb565_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003069, VkglTestCase_003069_1, VkglTestCase_003069_2);

#define VkglTestCase_003070_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003070_2 "ode.rgb565_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003070, VkglTestCase_003070_1, VkglTestCase_003070_2);

#define VkglTestCase_003071_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003071_2 "rgb565_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003071, VkglTestCase_003071_1, VkglTestCase_003071_2);

#define VkglTestCase_003072_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003072_2 ".rgb565_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003072, VkglTestCase_003072_1, VkglTestCase_003072_2);

#define VkglTestCase_003073_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003073_2 "ode.rgb565_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003073, VkglTestCase_003073_1, VkglTestCase_003073_2);

#define VkglTestCase_003074_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003074_2 "rgb565_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003074, VkglTestCase_003074_1, VkglTestCase_003074_2);

#define VkglTestCase_003075_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003075_2 "e.rgb8_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003075, VkglTestCase_003075_1, VkglTestCase_003075_2);

#define VkglTestCase_003076_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003076_2 "mode.rgb8_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003076, VkglTestCase_003076_1, VkglTestCase_003076_2);

#define VkglTestCase_003077_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003077_2 ".rgb8_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003077, VkglTestCase_003077_1, VkglTestCase_003077_2);

#define VkglTestCase_003078_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003078_2 "e.rgb8_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003078, VkglTestCase_003078_1, VkglTestCase_003078_2);

#define VkglTestCase_003079_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003079_2 "mode.rgb8_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003079, VkglTestCase_003079_1, VkglTestCase_003079_2);

#define VkglTestCase_003080_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003080_2 ".rgb8_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003080, VkglTestCase_003080_1, VkglTestCase_003080_2);

#define VkglTestCase_003081_1 "KHR-GLES3.texture_repeat_mod"
#define VkglTestCase_003081_2 "e.rgb8_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003081, VkglTestCase_003081_1, VkglTestCase_003081_2);

#define VkglTestCase_003082_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003082_2 "mode.rgb8_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003082, VkglTestCase_003082_1, VkglTestCase_003082_2);

#define VkglTestCase_003083_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003083_2 ".rgb8_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003083, VkglTestCase_003083_1, VkglTestCase_003083_2);

#define VkglTestCase_003084_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003084_2 "rgb10_a2_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003084, VkglTestCase_003084_1, VkglTestCase_003084_2);

#define VkglTestCase_003085_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003085_2 "de.rgb10_a2_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003085, VkglTestCase_003085_1, VkglTestCase_003085_2);

#define VkglTestCase_003086_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003086_2 "gb10_a2_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003086, VkglTestCase_003086_1, VkglTestCase_003086_2);

#define VkglTestCase_003087_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003087_2 "rgb10_a2_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003087, VkglTestCase_003087_1, VkglTestCase_003087_2);

#define VkglTestCase_003088_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003088_2 "de.rgb10_a2_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003088, VkglTestCase_003088_1, VkglTestCase_003088_2);

#define VkglTestCase_003089_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003089_2 "gb10_a2_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003089, VkglTestCase_003089_1, VkglTestCase_003089_2);

#define VkglTestCase_003090_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003090_2 "rgb10_a2_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003090, VkglTestCase_003090_1, VkglTestCase_003090_2);

#define VkglTestCase_003091_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003091_2 "de.rgb10_a2_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003091, VkglTestCase_003091_1, VkglTestCase_003091_2);

#define VkglTestCase_003092_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003092_2 "gb10_a2_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003092, VkglTestCase_003092_1, VkglTestCase_003092_2);

#define VkglTestCase_003093_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003093_2 ".r32ui_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003093, VkglTestCase_003093_1, VkglTestCase_003093_2);

#define VkglTestCase_003094_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003094_2 "mode.r32ui_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003094, VkglTestCase_003094_1, VkglTestCase_003094_2);

#define VkglTestCase_003095_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003095_2 "r32ui_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003095, VkglTestCase_003095_1, VkglTestCase_003095_2);

#define VkglTestCase_003096_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003096_2 ".r32ui_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003096, VkglTestCase_003096_1, VkglTestCase_003096_2);

#define VkglTestCase_003097_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003097_2 "mode.r32ui_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003097, VkglTestCase_003097_1, VkglTestCase_003097_2);

#define VkglTestCase_003098_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003098_2 "r32ui_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003098, VkglTestCase_003098_1, VkglTestCase_003098_2);

#define VkglTestCase_003099_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003099_2 ".r32ui_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003099, VkglTestCase_003099_1, VkglTestCase_003099_2);

#define VkglTestCase_003100_1 "KHR-GLES3.texture_repeat_"
#define VkglTestCase_003100_2 "mode.r32ui_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003100, VkglTestCase_003100_1, VkglTestCase_003100_2);

#define VkglTestCase_003101_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003101_2 "r32ui_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003101, VkglTestCase_003101_1, VkglTestCase_003101_2);

#define VkglTestCase_003102_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003102_2 ".rg32ui_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003102, VkglTestCase_003102_1, VkglTestCase_003102_2);

#define VkglTestCase_003103_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003103_2 "ode.rg32ui_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003103, VkglTestCase_003103_1, VkglTestCase_003103_2);

#define VkglTestCase_003104_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003104_2 "rg32ui_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003104, VkglTestCase_003104_1, VkglTestCase_003104_2);

#define VkglTestCase_003105_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003105_2 ".rg32ui_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003105, VkglTestCase_003105_1, VkglTestCase_003105_2);

#define VkglTestCase_003106_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003106_2 "ode.rg32ui_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003106, VkglTestCase_003106_1, VkglTestCase_003106_2);

#define VkglTestCase_003107_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003107_2 "rg32ui_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003107, VkglTestCase_003107_1, VkglTestCase_003107_2);

#define VkglTestCase_003108_1 "KHR-GLES3.texture_repeat_mode"
#define VkglTestCase_003108_2 ".rg32ui_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003108, VkglTestCase_003108_1, VkglTestCase_003108_2);

#define VkglTestCase_003109_1 "KHR-GLES3.texture_repeat_m"
#define VkglTestCase_003109_2 "ode.rg32ui_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003109, VkglTestCase_003109_1, VkglTestCase_003109_2);

#define VkglTestCase_003110_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003110_2 "rg32ui_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003110, VkglTestCase_003110_1, VkglTestCase_003110_2);

#define VkglTestCase_003111_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003111_2 "rgba32ui_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003111, VkglTestCase_003111_1, VkglTestCase_003111_2);

#define VkglTestCase_003112_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003112_2 "de.rgba32ui_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003112, VkglTestCase_003112_1, VkglTestCase_003112_2);

#define VkglTestCase_003113_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003113_2 "gba32ui_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003113, VkglTestCase_003113_1, VkglTestCase_003113_2);

#define VkglTestCase_003114_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003114_2 "rgba32ui_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003114, VkglTestCase_003114_1, VkglTestCase_003114_2);

#define VkglTestCase_003115_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003115_2 "de.rgba32ui_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003115, VkglTestCase_003115_1, VkglTestCase_003115_2);

#define VkglTestCase_003116_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003116_2 "gba32ui_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003116, VkglTestCase_003116_1, VkglTestCase_003116_2);

#define VkglTestCase_003117_1 "KHR-GLES3.texture_repeat_mode."
#define VkglTestCase_003117_2 "rgba32ui_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003117, VkglTestCase_003117_1, VkglTestCase_003117_2);

#define VkglTestCase_003118_1 "KHR-GLES3.texture_repeat_mo"
#define VkglTestCase_003118_2 "de.rgba32ui_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003118, VkglTestCase_003118_1, VkglTestCase_003118_2);

#define VkglTestCase_003119_1 "KHR-GLES3.texture_repeat_mode.r"
#define VkglTestCase_003119_2 "gba32ui_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003119, VkglTestCase_003119_1, VkglTestCase_003119_2);

#define VkglTestCase_003120_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003120_2 "_component16_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003120, VkglTestCase_003120_1, VkglTestCase_003120_2);

#define VkglTestCase_003121_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003121_2 "epth_component16_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003121, VkglTestCase_003121_1, VkglTestCase_003121_2);

#define VkglTestCase_003122_1 "KHR-GLES3.texture_repeat_mode.depth_"
#define VkglTestCase_003122_2 "component16_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003122, VkglTestCase_003122_1, VkglTestCase_003122_2);

#define VkglTestCase_003123_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003123_2 "_component16_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003123, VkglTestCase_003123_1, VkglTestCase_003123_2);

#define VkglTestCase_003124_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003124_2 "epth_component16_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003124, VkglTestCase_003124_1, VkglTestCase_003124_2);

#define VkglTestCase_003125_1 "KHR-GLES3.texture_repeat_mode.depth_"
#define VkglTestCase_003125_2 "component16_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003125, VkglTestCase_003125_1, VkglTestCase_003125_2);

#define VkglTestCase_003126_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003126_2 "_component16_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003126, VkglTestCase_003126_1, VkglTestCase_003126_2);

#define VkglTestCase_003127_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003127_2 "epth_component16_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003127, VkglTestCase_003127_1, VkglTestCase_003127_2);

#define VkglTestCase_003128_1 "KHR-GLES3.texture_repeat_mode.depth_"
#define VkglTestCase_003128_2 "component16_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003128, VkglTestCase_003128_1, VkglTestCase_003128_2);

#define VkglTestCase_003129_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003129_2 "h24_stencil8_11x131_0_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003129, VkglTestCase_003129_1, VkglTestCase_003129_2);

#define VkglTestCase_003130_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003130_2 "epth24_stencil8_11x131_0_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003130, VkglTestCase_003130_1, VkglTestCase_003130_2);

#define VkglTestCase_003131_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003131_2 "24_stencil8_11x131_0_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003131, VkglTestCase_003131_1, VkglTestCase_003131_2);

#define VkglTestCase_003132_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003132_2 "h24_stencil8_11x131_1_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003132, VkglTestCase_003132_1, VkglTestCase_003132_2);

#define VkglTestCase_003133_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003133_2 "epth24_stencil8_11x131_1_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003133, VkglTestCase_003133_1, VkglTestCase_003133_2);

#define VkglTestCase_003134_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003134_2 "24_stencil8_11x131_1_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003134, VkglTestCase_003134_1, VkglTestCase_003134_2);

#define VkglTestCase_003135_1 "KHR-GLES3.texture_repeat_mode.dept"
#define VkglTestCase_003135_2 "h24_stencil8_11x131_2_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003135, VkglTestCase_003135_1, VkglTestCase_003135_2);

#define VkglTestCase_003136_1 "KHR-GLES3.texture_repeat_mode.d"
#define VkglTestCase_003136_2 "epth24_stencil8_11x131_2_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003136, VkglTestCase_003136_1, VkglTestCase_003136_2);

#define VkglTestCase_003137_1 "KHR-GLES3.texture_repeat_mode.depth"
#define VkglTestCase_003137_2 "24_stencil8_11x131_2_mirrored_repeat"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_003137, VkglTestCase_003137_1, VkglTestCase_003137_2);
