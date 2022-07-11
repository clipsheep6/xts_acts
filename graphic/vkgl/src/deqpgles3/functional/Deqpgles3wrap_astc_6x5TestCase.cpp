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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022987_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022987_2 "stc_6x5.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022987, VkglTestCase_022987_1, VkglTestCase_022987_2);

#define VkglTestCase_022988_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022988_2 "stc_6x5.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022988, VkglTestCase_022988_1, VkglTestCase_022988_2);

#define VkglTestCase_022989_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022989_2 "tc_6x5.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022989, VkglTestCase_022989_1, VkglTestCase_022989_2);

#define VkglTestCase_022990_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022990_2 "stc_6x5.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022990, VkglTestCase_022990_1, VkglTestCase_022990_2);

#define VkglTestCase_022991_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022991_2 "tc_6x5.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022991, VkglTestCase_022991_1, VkglTestCase_022991_2);

#define VkglTestCase_022992_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022992_2 "stc_6x5.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022992, VkglTestCase_022992_1, VkglTestCase_022992_2);

#define VkglTestCase_022993_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022993_2 "tc_6x5.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022993, VkglTestCase_022993_1, VkglTestCase_022993_2);

#define VkglTestCase_022994_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022994_2 "stc_6x5.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022994, VkglTestCase_022994_1, VkglTestCase_022994_2);

#define VkglTestCase_022995_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022995_2 "tc_6x5.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022995, VkglTestCase_022995_1, VkglTestCase_022995_2);

#define VkglTestCase_022996_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022996_2 "tc_6x5.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022996, VkglTestCase_022996_1, VkglTestCase_022996_2);

#define VkglTestCase_022997_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022997_2 "tc_6x5.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022997, VkglTestCase_022997_1, VkglTestCase_022997_2);

#define VkglTestCase_022998_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022998_2 "tc_6x5.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022998, VkglTestCase_022998_1, VkglTestCase_022998_2);

#define VkglTestCase_022999_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022999_2 "tc_6x5.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022999, VkglTestCase_022999_1, VkglTestCase_022999_2);

#define VkglTestCase_023000_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023000_2 "stc_6x5.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023000, VkglTestCase_023000_1, VkglTestCase_023000_2);

#define VkglTestCase_023001_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023001_2 "tc_6x5.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023001, VkglTestCase_023001_1, VkglTestCase_023001_2);

#define VkglTestCase_023002_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023002_2 "tc_6x5.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023002, VkglTestCase_023002_1, VkglTestCase_023002_2);

#define VkglTestCase_023003_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023003_2 "tc_6x5.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023003, VkglTestCase_023003_1, VkglTestCase_023003_2);

#define VkglTestCase_023004_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023004_2 "tc_6x5.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023004, VkglTestCase_023004_1, VkglTestCase_023004_2);

#define VkglTestCase_023005_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023005_2 "c_6x5.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023005, VkglTestCase_023005_1, VkglTestCase_023005_2);

#define VkglTestCase_023006_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023006_2 "c_6x5.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023006, VkglTestCase_023006_1, VkglTestCase_023006_2);

#define VkglTestCase_023007_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023007_2 "_6x5.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023007, VkglTestCase_023007_1, VkglTestCase_023007_2);

#define VkglTestCase_023008_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023008_2 "c_6x5.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023008, VkglTestCase_023008_1, VkglTestCase_023008_2);

#define VkglTestCase_023009_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023009_2 "_6x5.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023009, VkglTestCase_023009_1, VkglTestCase_023009_2);

#define VkglTestCase_023010_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023010_2 "c_6x5.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023010, VkglTestCase_023010_1, VkglTestCase_023010_2);

#define VkglTestCase_023011_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023011_2 "_6x5.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023011, VkglTestCase_023011_1, VkglTestCase_023011_2);

#define VkglTestCase_023012_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023012_2 "c_6x5.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023012, VkglTestCase_023012_1, VkglTestCase_023012_2);

#define VkglTestCase_023013_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023013_2 "_6x5.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023013, VkglTestCase_023013_1, VkglTestCase_023013_2);

#define VkglTestCase_023014_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023014_2 "_6x5.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023014, VkglTestCase_023014_1, VkglTestCase_023014_2);

#define VkglTestCase_023015_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023015_2 "_6x5.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023015, VkglTestCase_023015_1, VkglTestCase_023015_2);

#define VkglTestCase_023016_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023016_2 "_6x5.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023016, VkglTestCase_023016_1, VkglTestCase_023016_2);

#define VkglTestCase_023017_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023017_2 "_6x5.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023017, VkglTestCase_023017_1, VkglTestCase_023017_2);

#define VkglTestCase_023018_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023018_2 "c_6x5.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023018, VkglTestCase_023018_1, VkglTestCase_023018_2);

#define VkglTestCase_023019_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023019_2 "_6x5.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023019, VkglTestCase_023019_1, VkglTestCase_023019_2);

#define VkglTestCase_023020_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023020_2 "_6x5.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023020, VkglTestCase_023020_1, VkglTestCase_023020_2);

#define VkglTestCase_023021_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023021_2 "_6x5.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023021, VkglTestCase_023021_1, VkglTestCase_023021_2);

#define VkglTestCase_023022_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023022_2 "_6x5.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_023022, VkglTestCase_023022_1, VkglTestCase_023022_2);
