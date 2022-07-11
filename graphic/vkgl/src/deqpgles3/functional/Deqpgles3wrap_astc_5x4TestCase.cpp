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

#define VkglTestCase_022915_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022915_2 "stc_5x4.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022915, VkglTestCase_022915_1, VkglTestCase_022915_2);

#define VkglTestCase_022916_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022916_2 "stc_5x4.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022916, VkglTestCase_022916_1, VkglTestCase_022916_2);

#define VkglTestCase_022917_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022917_2 "tc_5x4.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022917, VkglTestCase_022917_1, VkglTestCase_022917_2);

#define VkglTestCase_022918_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022918_2 "stc_5x4.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022918, VkglTestCase_022918_1, VkglTestCase_022918_2);

#define VkglTestCase_022919_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022919_2 "tc_5x4.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022919, VkglTestCase_022919_1, VkglTestCase_022919_2);

#define VkglTestCase_022920_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022920_2 "stc_5x4.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022920, VkglTestCase_022920_1, VkglTestCase_022920_2);

#define VkglTestCase_022921_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022921_2 "tc_5x4.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022921, VkglTestCase_022921_1, VkglTestCase_022921_2);

#define VkglTestCase_022922_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022922_2 "stc_5x4.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022922, VkglTestCase_022922_1, VkglTestCase_022922_2);

#define VkglTestCase_022923_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022923_2 "tc_5x4.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022923, VkglTestCase_022923_1, VkglTestCase_022923_2);

#define VkglTestCase_022924_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022924_2 "tc_5x4.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022924, VkglTestCase_022924_1, VkglTestCase_022924_2);

#define VkglTestCase_022925_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022925_2 "tc_5x4.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022925, VkglTestCase_022925_1, VkglTestCase_022925_2);

#define VkglTestCase_022926_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022926_2 "tc_5x4.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022926, VkglTestCase_022926_1, VkglTestCase_022926_2);

#define VkglTestCase_022927_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022927_2 "tc_5x4.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022927, VkglTestCase_022927_1, VkglTestCase_022927_2);

#define VkglTestCase_022928_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_022928_2 "stc_5x4.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022928, VkglTestCase_022928_1, VkglTestCase_022928_2);

#define VkglTestCase_022929_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022929_2 "tc_5x4.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022929, VkglTestCase_022929_1, VkglTestCase_022929_2);

#define VkglTestCase_022930_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022930_2 "tc_5x4.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022930, VkglTestCase_022930_1, VkglTestCase_022930_2);

#define VkglTestCase_022931_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022931_2 "tc_5x4.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022931, VkglTestCase_022931_1, VkglTestCase_022931_2);

#define VkglTestCase_022932_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_022932_2 "tc_5x4.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022932, VkglTestCase_022932_1, VkglTestCase_022932_2);

#define VkglTestCase_022933_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022933_2 "c_5x4.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022933, VkglTestCase_022933_1, VkglTestCase_022933_2);

#define VkglTestCase_022934_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022934_2 "c_5x4.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022934, VkglTestCase_022934_1, VkglTestCase_022934_2);

#define VkglTestCase_022935_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022935_2 "_5x4.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022935, VkglTestCase_022935_1, VkglTestCase_022935_2);

#define VkglTestCase_022936_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022936_2 "c_5x4.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022936, VkglTestCase_022936_1, VkglTestCase_022936_2);

#define VkglTestCase_022937_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022937_2 "_5x4.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022937, VkglTestCase_022937_1, VkglTestCase_022937_2);

#define VkglTestCase_022938_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022938_2 "c_5x4.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022938, VkglTestCase_022938_1, VkglTestCase_022938_2);

#define VkglTestCase_022939_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022939_2 "_5x4.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022939, VkglTestCase_022939_1, VkglTestCase_022939_2);

#define VkglTestCase_022940_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022940_2 "c_5x4.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022940, VkglTestCase_022940_1, VkglTestCase_022940_2);

#define VkglTestCase_022941_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022941_2 "_5x4.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022941, VkglTestCase_022941_1, VkglTestCase_022941_2);

#define VkglTestCase_022942_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022942_2 "_5x4.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022942, VkglTestCase_022942_1, VkglTestCase_022942_2);

#define VkglTestCase_022943_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022943_2 "_5x4.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022943, VkglTestCase_022943_1, VkglTestCase_022943_2);

#define VkglTestCase_022944_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022944_2 "_5x4.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022944, VkglTestCase_022944_1, VkglTestCase_022944_2);

#define VkglTestCase_022945_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022945_2 "_5x4.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022945, VkglTestCase_022945_1, VkglTestCase_022945_2);

#define VkglTestCase_022946_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_022946_2 "c_5x4.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022946, VkglTestCase_022946_1, VkglTestCase_022946_2);

#define VkglTestCase_022947_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022947_2 "_5x4.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022947, VkglTestCase_022947_1, VkglTestCase_022947_2);

#define VkglTestCase_022948_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022948_2 "_5x4.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022948, VkglTestCase_022948_1, VkglTestCase_022948_2);

#define VkglTestCase_022949_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022949_2 "_5x4.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022949, VkglTestCase_022949_1, VkglTestCase_022949_2);

#define VkglTestCase_022950_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_022950_2 "_5x4.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022950, VkglTestCase_022950_1, VkglTestCase_022950_2);
